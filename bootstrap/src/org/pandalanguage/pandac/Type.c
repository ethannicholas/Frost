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
#include "panda/collections/ListView.h"
#include "panda/collections/Array.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Panda.h"
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

org$pandalanguage$pandac$Type$class_type org$pandalanguage$pandac$Type$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$core$Equatable, { org$pandalanguage$pandac$Type$convert$R$panda$core$String, org$pandalanguage$pandac$Type$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$Type$size$R$panda$core$Int64, org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit, org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit, org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit, org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit, org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit, org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit, org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$hash$R$panda$core$Int64} };

typedef panda$collections$Iterator* (*$fn30)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn36)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn42)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x3c", 11, 184897716878203264, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 6054680304062974916, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };

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
        self->subtypes = NULL;
    }
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), p_position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, panda$core$Int64 p_size) {
    org$pandalanguage$pandac$Position $tmp7;
    self->parameter = NULL;
    panda$core$Bit $tmp5 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s4);
    panda$core$Bit $tmp6 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5);
    PANDA_ASSERT($tmp6.value);
    self->typeKind = p_typeKind;
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp7, p_size, p_size);
    ((org$pandalanguage$pandac$Symbol*) self)->position = $tmp7;
    self->resolved = ((panda$core$Bit) { true });
    {
        self->subtypes = NULL;
    }
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), self->position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_subtypes, panda$core$Bit p_resolved) {
    self->parameter = NULL;
    panda$core$Bit $tmp8 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind, ((panda$core$Int64) { 11 }));
    panda$core$Bit $tmp10 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s9);
    panda$core$Bit $tmp11 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp8, $tmp10);
    PANDA_ASSERT($tmp11.value);
    panda$core$Bit $tmp12 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind, ((panda$core$Int64) { 21 }));
    panda$core$Bit $tmp14 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s13);
    panda$core$Bit $tmp15 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp12, $tmp14);
    PANDA_ASSERT($tmp15.value);
    panda$core$Bit $tmp16 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_typeKind, ((panda$core$Int64) { 22 }));
    PANDA_ASSERT($tmp16.value);
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->position = p_position;
    self->resolved = p_resolved;
    {
        panda$collections$Array* $tmp17 = (panda$collections$Array*) pandaZAlloc(40);
        $tmp17->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp17->refCount.value = 1;
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp17, p_subtypes);
        self->subtypes = $tmp17;
    }
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), p_position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Type* self, panda$collections$ListView* p_subtypes) {
    panda$core$MutableString* name21;
    panda$core$String* separator25;
    panda$collections$Iterator* t$Iter27;
    org$pandalanguage$pandac$Type* t39;
    panda$core$Char8 $tmp48;
    self->parameter = NULL;
    self->typeKind = ((panda$core$Int64) { 17 });
    {
        panda$collections$Array* $tmp19 = (panda$collections$Array*) pandaZAlloc(40);
        $tmp19->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp19->refCount.value = 1;
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp19, p_subtypes);
        self->subtypes = $tmp19;
    }
    panda$core$MutableString* $tmp22 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp22->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp22->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp22, &$s24);
    name21 = $tmp22;
    separator25 = &$s26;
    self->resolved = ((panda$core$Bit) { true });
    {
        ITable* $tmp28 = ((panda$collections$Iterable*) p_subtypes)->$class->itable;
        while ($tmp28->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp28 = $tmp28->next;
        }
        $fn30 $tmp29 = $tmp28->methods[0];
        panda$collections$Iterator* $tmp31 = $tmp29(((panda$collections$Iterable*) p_subtypes));
        t$Iter27 = $tmp31;
        $l32:;
        ITable* $tmp34 = t$Iter27->$class->itable;
        while ($tmp34->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp34 = $tmp34->next;
        }
        $fn36 $tmp35 = $tmp34->methods[0];
        panda$core$Bit $tmp37 = $tmp35(t$Iter27);
        panda$core$Bit $tmp38 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp37);
        if (!$tmp38.value) goto $l33;
        {
            ITable* $tmp40 = t$Iter27->$class->itable;
            while ($tmp40->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp40 = $tmp40->next;
            }
            $fn42 $tmp41 = $tmp40->methods[1];
            panda$core$Object* $tmp43 = $tmp41(t$Iter27);
            t39 = ((org$pandalanguage$pandac$Type*) $tmp43);
            panda$core$MutableString$append$panda$core$String(name21, separator25);
            panda$core$MutableString$append$panda$core$Object(name21, ((panda$core$Object*) t39));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator25));
                separator25 = &$s44;
            }
            bool $tmp45 = self->resolved.value;
            if (!$tmp45) goto $l46;
            $tmp45 = t39->resolved.value;
            $l46:;
            panda$core$Bit $tmp47 = { $tmp45 };
            self->resolved = $tmp47;
        }
        goto $l32;
        $l33:;
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp48, ((panda$core$UInt8) { 62 }));
    panda$core$MutableString$append$panda$core$Char8(name21, $tmp48);
    panda$core$String* $tmp49 = panda$core$MutableString$finish$R$panda$core$String(name21);
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), self->position, $tmp49);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator25));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name21));
    }
}
void org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$ClassDecl$GenericParameter* p_param) {
    self->parameter = NULL;
    {
        panda$core$String* $tmp50 = panda$core$String$convert$R$panda$core$String(p_param->owner);
        panda$core$String* $tmp52 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp50, &$s51);
        panda$core$String* $tmp53 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp52, ((org$pandalanguage$pandac$Symbol*) p_param)->name);
        panda$core$String* $tmp55 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp53, &$s54);
        ((org$pandalanguage$pandac$Symbol*) self)->name = $tmp55;
    }
    self->typeKind = ((panda$core$Int64) { 22 });
    {
        self->parameter = p_param;
    }
    self->resolved = ((panda$core$Bit) { true });
    {
        self->subtypes = NULL;
    }
}
panda$core$Int64 org$pandalanguage$pandac$Type$size$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp58 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp57 = $tmp58.value;
    if ($tmp57) goto $l59;
    panda$core$Bit $tmp60 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp57 = $tmp60.value;
    $l59:;
    panda$core$Bit $tmp61 = { $tmp57 };
    bool $tmp56 = $tmp61.value;
    if ($tmp56) goto $l62;
    panda$core$Bit $tmp63 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 20 }));
    $tmp56 = $tmp63.value;
    $l62:;
    panda$core$Bit $tmp64 = { $tmp56 };
    PANDA_ASSERT($tmp64.value);
    return self->position.line;
}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp65 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    return $tmp65;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp66 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    return $tmp66;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp70;
    org$pandalanguage$pandac$Type* $tmp67 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp67->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp67->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp70);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp67, &$s69, ((panda$core$Int64) { 14 }), $tmp70, ((panda$core$Bit) { true }));
    return $tmp67;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp74;
    org$pandalanguage$pandac$Type* $tmp71 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp71->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp71->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp74);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp71, &$s73, ((panda$core$Int64) { 23 }), $tmp74, ((panda$core$Bit) { true }));
    return $tmp71;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp78;
    org$pandalanguage$pandac$Type* $tmp75 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp75->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp75->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp78);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp75, &$s77, ((panda$core$Int64) { 10 }), $tmp78, ((panda$core$Bit) { true }));
    return $tmp75;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes79;
    org$pandalanguage$pandac$Type* tmp183;
    org$pandalanguage$pandac$Position $tmp87;
    panda$collections$Array* $tmp80 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp80->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp80->refCount.value = 1;
    panda$collections$Array$init($tmp80);
    subtypes79 = $tmp80;
    org$pandalanguage$pandac$Type* $tmp82 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes79, ((panda$core$Object*) $tmp82));
    {
        org$pandalanguage$pandac$Type* $tmp84 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
        $tmp84->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp84->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp87);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp84, &$s86, ((panda$core$Int64) { 11 }), $tmp87, ((panda$collections$ListView*) subtypes79), ((panda$core$Bit) { true }));
        tmp183 = $tmp84;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes79));
        return tmp183;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp91;
    org$pandalanguage$pandac$Type* $tmp88 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp88->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp88->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp91);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp88, &$s90, ((panda$core$Int64) { 10 }), $tmp91, ((panda$core$Bit) { true }));
    return $tmp88;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp95;
    org$pandalanguage$pandac$Type* $tmp92 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp92->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp92->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp95);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp92, &$s94, ((panda$core$Int64) { 10 }), $tmp95, ((panda$core$Bit) { true }));
    return $tmp92;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp99;
    org$pandalanguage$pandac$Type* $tmp96 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp96->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp96->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp99);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp96, &$s98, ((panda$core$Int64) { 10 }), $tmp99, ((panda$core$Bit) { true }));
    return $tmp96;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp100 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp100->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp100->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp100, &$s102, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 8 }));
    return $tmp100;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp103 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp103->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp103->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp103, &$s105, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 16 }));
    return $tmp103;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp106 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp106->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp106->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp106, &$s108, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 32 }));
    return $tmp106;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp109 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp109->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp109->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp109, &$s111, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 64 }));
    return $tmp109;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp112 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp112->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp112->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp112, &$s114, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 8 }));
    return $tmp112;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp115 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp115->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp115->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp115, &$s117, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 16 }));
    return $tmp115;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp118 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp118->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp118->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp118, &$s120, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 32 }));
    return $tmp118;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp121 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp121->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp121->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp121, &$s123, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 64 }));
    return $tmp121;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp124 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp124->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp124->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp124, &$s126, ((panda$core$Int64) { 20 }), ((panda$core$Int64) { 32 }));
    return $tmp124;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp127 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp127->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp127->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp127, &$s129, ((panda$core$Int64) { 20 }), ((panda$core$Int64) { 64 }));
    return $tmp127;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp133;
    org$pandalanguage$pandac$Type* $tmp130 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp130->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp130->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp133);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp130, &$s132, ((panda$core$Int64) { 10 }), $tmp133, ((panda$core$Bit) { true }));
    return $tmp130;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp137;
    org$pandalanguage$pandac$Type* $tmp134 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp134->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp134->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp137);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp134, &$s136, ((panda$core$Int64) { 10 }), $tmp137, ((panda$core$Bit) { true }));
    return $tmp134;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp141;
    org$pandalanguage$pandac$Type* $tmp138 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp138->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp138->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp141);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp138, &$s140, ((panda$core$Int64) { 10 }), $tmp141, ((panda$core$Bit) { true }));
    return $tmp138;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp145;
    org$pandalanguage$pandac$Type* $tmp142 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp142->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp142->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp145);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp142, &$s144, ((panda$core$Int64) { 10 }), $tmp145, ((panda$core$Bit) { true }));
    return $tmp142;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp149;
    org$pandalanguage$pandac$Type* $tmp146 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp146->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp146->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp149);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp146, &$s148, ((panda$core$Int64) { 10 }), $tmp149, ((panda$core$Bit) { true }));
    return $tmp146;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp153;
    org$pandalanguage$pandac$Type* $tmp150 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp150->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp150->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp153);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp150, &$s152, ((panda$core$Int64) { 10 }), $tmp153, ((panda$core$Bit) { true }));
    return $tmp150;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp157;
    org$pandalanguage$pandac$Type* $tmp154 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp154->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp154->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp157);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp154, &$s156, ((panda$core$Int64) { 10 }), $tmp157, ((panda$core$Bit) { true }));
    return $tmp154;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp161;
    org$pandalanguage$pandac$Type* $tmp158 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp158->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp158->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp161);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp158, &$s160, ((panda$core$Int64) { 10 }), $tmp161, ((panda$core$Bit) { true }));
    return $tmp158;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp165;
    org$pandalanguage$pandac$Type* $tmp162 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp162->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp162->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp165);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp162, &$s164, ((panda$core$Int64) { 10 }), $tmp165, ((panda$core$Bit) { true }));
    return $tmp162;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp169;
    org$pandalanguage$pandac$Type* $tmp166 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp166->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp166->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp169);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp166, &$s168, ((panda$core$Int64) { 10 }), $tmp169, ((panda$core$Bit) { true }));
    return $tmp166;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp173;
    org$pandalanguage$pandac$Type* $tmp170 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp170->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp170->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp173);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp170, &$s172, ((panda$core$Int64) { 10 }), $tmp173, ((panda$core$Bit) { true }));
    return $tmp170;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp177;
    org$pandalanguage$pandac$Type* $tmp174 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp174->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp174->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp177);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp174, &$s176, ((panda$core$Int64) { 10 }), $tmp177, ((panda$core$Bit) { true }));
    return $tmp174;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp181;
    org$pandalanguage$pandac$Type* $tmp178 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp178->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp178->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp181);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp178, &$s180, ((panda$core$Int64) { 10 }), $tmp181, ((panda$core$Bit) { true }));
    return $tmp178;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp185;
    org$pandalanguage$pandac$Type* $tmp182 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp182->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp182->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp185);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp182, &$s184, ((panda$core$Int64) { 10 }), $tmp185, ((panda$core$Bit) { true }));
    return $tmp182;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Position $tmp189;
    org$pandalanguage$pandac$Type* $tmp186 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp186->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp186->refCount.value = 1;
    panda$core$String* $tmp188 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    org$pandalanguage$pandac$Position$init(&$tmp189);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp186, $tmp188, ((panda$core$Int64) { 15 }), $tmp189, ((panda$core$Bit) { true }));
    return $tmp186;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Position $tmp195;
    org$pandalanguage$pandac$Type* $tmp190 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp190->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp190->refCount.value = 1;
    panda$core$String* $tmp193 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    panda$core$String* $tmp194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s192, $tmp193);
    org$pandalanguage$pandac$Position$init(&$tmp195);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp190, $tmp194, ((panda$core$Int64) { 15 }), $tmp195, ((panda$core$Bit) { true }));
    return $tmp190;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 p_value) {
    org$pandalanguage$pandac$Position $tmp199;
    org$pandalanguage$pandac$Type* $tmp196 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp196->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp196->refCount.value = 1;
    panda$core$String* $tmp198 = panda$core$Real64$convert$R$panda$core$String(p_value);
    org$pandalanguage$pandac$Position$init(&$tmp199);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp196, $tmp198, ((panda$core$Int64) { 26 }), $tmp199, ((panda$core$Bit) { true }));
    return $tmp196;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp203;
    org$pandalanguage$pandac$Type* $tmp200 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp200->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp200->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp203);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp200, &$s202, ((panda$core$Int64) { 18 }), $tmp203, ((panda$core$Bit) { true }));
    return $tmp200;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp207;
    org$pandalanguage$pandac$Type* $tmp204 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp204->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp204->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp207);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp204, &$s206, ((panda$core$Int64) { 19 }), $tmp207, ((panda$core$Bit) { true }));
    return $tmp204;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp211;
    org$pandalanguage$pandac$Type* $tmp208 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp208->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp208->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp211);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp208, &$s210, ((panda$core$Int64) { 10 }), $tmp211, ((panda$core$Bit) { true }));
    return $tmp208;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp215;
    org$pandalanguage$pandac$Type* $tmp212 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp212->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp212->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp215);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp212, &$s214, ((panda$core$Int64) { 10 }), $tmp215, ((panda$core$Bit) { true }));
    return $tmp212;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp219;
    org$pandalanguage$pandac$Type* $tmp216 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp216->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp216->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp219);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp216, &$s218, ((panda$core$Int64) { 10 }), $tmp219, ((panda$core$Bit) { true }));
    return $tmp216;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children220;
    org$pandalanguage$pandac$Position $tmp226;
    org$pandalanguage$pandac$Type* tmp2227;
    panda$collections$Array* $tmp221 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp221->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp221->refCount.value = 1;
    panda$collections$Array$init($tmp221);
    children220 = $tmp221;
    org$pandalanguage$pandac$Type* $tmp223 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp223->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp223->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp226);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp223, &$s225, ((panda$core$Int64) { 10 }), $tmp226, ((panda$core$Bit) { true }));
    panda$collections$Array$add$panda$collections$Array$T(children220, ((panda$core$Object*) $tmp223));
    panda$collections$Array$add$panda$collections$Array$T(children220, ((panda$core$Object*) p_t));
    {
        org$pandalanguage$pandac$Type* $tmp228 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
        $tmp228->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp228->refCount.value = 1;
        panda$core$String* $tmp231 = panda$core$String$convert$R$panda$core$String(&$s230);
        panda$core$String* $tmp233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp231, &$s232);
        panda$core$String* $tmp234 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp233, ((panda$core$Object*) p_t));
        panda$core$String* $tmp236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp234, &$s235);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp228, $tmp236, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children220), p_t->resolved);
        tmp2227 = $tmp228;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children220));
        return tmp2227;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children237;
    org$pandalanguage$pandac$Position $tmp243;
    org$pandalanguage$pandac$Type* tmp3254;
    panda$collections$Array* $tmp238 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp238->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp238->refCount.value = 1;
    panda$collections$Array$init($tmp238);
    children237 = $tmp238;
    org$pandalanguage$pandac$Type* $tmp240 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp240->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp240->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp243);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp240, &$s242, ((panda$core$Int64) { 10 }), $tmp243, ((panda$core$Bit) { true }));
    panda$collections$Array$add$panda$collections$Array$T(children237, ((panda$core$Object*) $tmp240));
    panda$collections$Array$add$panda$collections$Array$T(children237, ((panda$core$Object*) p_t));
    org$pandalanguage$pandac$Type* $tmp244 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp245 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp244);
    if ($tmp245.value) {
    {
        org$pandalanguage$pandac$Type* $tmp246 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
        panda$collections$Array$add$panda$collections$Array$T(children237, ((panda$core$Object*) $tmp246));
    }
    }
    else {
    org$pandalanguage$pandac$Type* $tmp247 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp248 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp247);
    if ($tmp248.value) {
    {
        org$pandalanguage$pandac$Type* $tmp249 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
        panda$collections$Array$add$panda$collections$Array$T(children237, ((panda$core$Object*) $tmp249));
    }
    }
    else {
    org$pandalanguage$pandac$Type* $tmp250 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp251 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp250);
    if ($tmp251.value) {
    {
        org$pandalanguage$pandac$Type* $tmp252 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
        panda$collections$Array$add$panda$collections$Array$T(children237, ((panda$core$Object*) $tmp252));
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp253 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
        panda$collections$Array$add$panda$collections$Array$T(children237, ((panda$core$Object*) $tmp253));
    }
    }
    }
    }
    {
        org$pandalanguage$pandac$Type* $tmp255 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
        $tmp255->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp255->refCount.value = 1;
        panda$core$String* $tmp258 = panda$core$String$convert$R$panda$core$String(&$s257);
        panda$core$String* $tmp260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp258, &$s259);
        panda$core$String* $tmp261 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp260, ((panda$core$Object*) p_t));
        panda$core$String* $tmp263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp261, &$s262);
        org$pandalanguage$pandac$Type* $tmp264 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
        panda$core$String* $tmp265 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp263, ((panda$core$Object*) $tmp264));
        panda$core$String* $tmp267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp265, &$s266);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp255, $tmp267, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children237), p_t->resolved);
        tmp3254 = $tmp255;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children237));
        return tmp3254;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp271;
    org$pandalanguage$pandac$Type* $tmp268 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp268->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp268->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp271);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp268, &$s270, ((panda$core$Int64) { 16 }), $tmp271, ((panda$core$Bit) { true }));
    return $tmp268;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp275;
    org$pandalanguage$pandac$Type* $tmp272 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp272->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp272->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp275);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp272, &$s274, ((panda$core$Int64) { 16 }), $tmp275, ((panda$core$Bit) { true }));
    return $tmp272;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp281 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s280);
    bool $tmp279 = $tmp281.value;
    if ($tmp279) goto $l282;
    panda$core$Bit $tmp284 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s283);
    $tmp279 = $tmp284.value;
    $l282:;
    panda$core$Bit $tmp285 = { $tmp279 };
    bool $tmp278 = $tmp285.value;
    if ($tmp278) goto $l286;
    panda$core$Bit $tmp288 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s287);
    $tmp278 = $tmp288.value;
    $l286:;
    panda$core$Bit $tmp289 = { $tmp278 };
    bool $tmp277 = $tmp289.value;
    if ($tmp277) goto $l290;
    panda$core$Bit $tmp291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp277 = $tmp291.value;
    $l290:;
    panda$core$Bit $tmp292 = { $tmp277 };
    bool $tmp276 = $tmp292.value;
    if ($tmp276) goto $l293;
    panda$core$Bit $tmp294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
    $tmp276 = $tmp294.value;
    $l293:;
    panda$core$Bit $tmp295 = { $tmp276 };
    return $tmp295;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp298 = $tmp299.value;
    if ($tmp298) goto $l300;
    panda$core$Bit $tmp301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp298 = $tmp301.value;
    $l300:;
    panda$core$Bit $tmp302 = { $tmp298 };
    bool $tmp297 = $tmp302.value;
    if ($tmp297) goto $l303;
    panda$core$Bit $tmp304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 20 }));
    $tmp297 = $tmp304.value;
    $l303:;
    panda$core$Bit $tmp305 = { $tmp297 };
    bool $tmp296 = $tmp305.value;
    if ($tmp296) goto $l306;
    panda$core$Bit $tmp307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp296 = $tmp307.value;
    $l306:;
    panda$core$Bit $tmp308 = { $tmp296 };
    return $tmp308;
}
panda$core$Bit org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
    bool $tmp309 = $tmp310.value;
    if ($tmp309) goto $l311;
    panda$core$Bit $tmp313 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s312);
    $tmp309 = $tmp313.value;
    $l311:;
    panda$core$Bit $tmp314 = { $tmp309 };
    return $tmp314;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp316 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s315);
    return $tmp316;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp318 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp317 = $tmp318.value;
    if ($tmp317) goto $l319;
    panda$core$Bit $tmp320 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(self);
    $tmp317 = $tmp320.value;
    $l319:;
    panda$core$Bit $tmp321 = { $tmp317 };
    return $tmp321;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $match$371_13322;
    {
        $match$371_13322 = self->typeKind;
        panda$core$Bit $tmp326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$371_13322, ((panda$core$Int64) { 10 }));
        bool $tmp325 = $tmp326.value;
        if ($tmp325) goto $l327;
        panda$core$Bit $tmp328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$371_13322, ((panda$core$Int64) { 11 }));
        $tmp325 = $tmp328.value;
        $l327:;
        panda$core$Bit $tmp329 = { $tmp325 };
        bool $tmp324 = $tmp329.value;
        if ($tmp324) goto $l330;
        panda$core$Bit $tmp331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$371_13322, ((panda$core$Int64) { 21 }));
        $tmp324 = $tmp331.value;
        $l330:;
        panda$core$Bit $tmp332 = { $tmp324 };
        bool $tmp323 = $tmp332.value;
        if ($tmp323) goto $l333;
        panda$core$Bit $tmp334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$371_13322, ((panda$core$Int64) { 22 }));
        $tmp323 = $tmp334.value;
        $l333:;
        panda$core$Bit $tmp335 = { $tmp323 };
        if ($tmp335.value) {
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
    panda$core$Bit $tmp337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp336 = $tmp337.value;
    if ($tmp336) goto $l338;
    panda$core$Bit $tmp339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
    $tmp336 = $tmp339.value;
    $l338:;
    panda$core$Bit $tmp340 = { $tmp336 };
    return $tmp340;
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp342 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s341);
    return $tmp342;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp343.value) {
    {
        panda$core$Object* $tmp344 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp345 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp344));
        return $tmp345;
    }
    }
    panda$core$Bit $tmp347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp346 = $tmp347.value;
    if (!$tmp346) goto $l348;
    panda$core$Object* $tmp349 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp351 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp349))->name, &$s350);
    $tmp346 = $tmp351.value;
    $l348:;
    panda$core$Bit $tmp352 = { $tmp346 };
    return $tmp352;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp353.value) {
    {
        panda$core$Object* $tmp354 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp355 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp354));
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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$collections$Array* subtypes364;
    org$pandalanguage$pandac$Type* tmp4367;
    org$pandalanguage$pandac$Position $tmp373;
    panda$core$Bit $tmp363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp363.value) {
    {
        return self;
    }
    }
    panda$collections$Array* $tmp365 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp365->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp365->refCount.value = 1;
    panda$collections$Array$init($tmp365);
    subtypes364 = $tmp365;
    panda$collections$Array$add$panda$collections$Array$T(subtypes364, ((panda$core$Object*) self));
    {
        org$pandalanguage$pandac$Type* $tmp368 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
        $tmp368->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp368->refCount.value = 1;
        panda$core$String* $tmp370 = panda$core$String$convert$R$panda$core$String(self->name);
        panda$core$String* $tmp372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp370, &$s371);
        org$pandalanguage$pandac$Position$init(&$tmp373);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp368, $tmp372, ((panda$core$Int64) { 11 }), $tmp373, ((panda$collections$ListView*) subtypes364), ((panda$core$Bit) { true }));
        tmp4367 = $tmp368;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes364));
        return tmp4367;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp374 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp374.value) {
    {
        return self;
    }
    }
    panda$core$Object* $tmp375 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    return ((org$pandalanguage$pandac$Type*) $tmp375);
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_other) {
    org$pandalanguage$pandac$Type* t1425;
    org$pandalanguage$pandac$Type* t2427;
    panda$collections$Set* ancestors434;
    org$pandalanguage$pandac$Type* t437;
    org$pandalanguage$pandac$ClassDecl* cl438;
    org$pandalanguage$pandac$Type* tmp5448;
    org$pandalanguage$pandac$Type* tmp6449;
    org$pandalanguage$pandac$Type* tmp7452;
    panda$core$Bit $tmp376 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
    if ($tmp376.value) {
    {
        return self;
    }
    }
    org$pandalanguage$pandac$Type* $tmp377 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp378 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp377);
    if ($tmp378.value) {
    {
        panda$core$Bit $tmp379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp379.value) {
        {
            return p_other;
        }
        }
        org$pandalanguage$pandac$Type* $tmp380 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
        return $tmp380;
    }
    }
    org$pandalanguage$pandac$Type* $tmp381 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp382 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp381);
    if ($tmp382.value) {
    {
        panda$core$Bit $tmp383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp383.value) {
        {
            return self;
        }
        }
        org$pandalanguage$pandac$Type* $tmp384 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
        return $tmp384;
    }
    }
    panda$core$Bit $tmp386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp385 = $tmp386.value;
    if (!$tmp385) goto $l387;
    panda$core$Bit $tmp388 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
    $tmp385 = $tmp388.value;
    $l387:;
    panda$core$Bit $tmp389 = { $tmp385 };
    if ($tmp389.value) {
    {
        return p_other;
    }
    }
    panda$core$Bit $tmp391 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp390 = $tmp391.value;
    if (!$tmp390) goto $l392;
    panda$core$Bit $tmp393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 15 }));
    $tmp390 = $tmp393.value;
    $l392:;
    panda$core$Bit $tmp394 = { $tmp390 };
    if ($tmp394.value) {
    {
        return self;
    }
    }
    panda$core$Bit $tmp395 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
    if ($tmp395.value) {
    {
        panda$core$Bit $tmp397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 15 }));
        bool $tmp396 = $tmp397.value;
        if ($tmp396) goto $l398;
        panda$core$Bit $tmp399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 26 }));
        $tmp396 = $tmp399.value;
        $l398:;
        panda$core$Bit $tmp400 = { $tmp396 };
        if ($tmp400.value) {
        {
            return self;
        }
        }
        panda$core$Bit $tmp401 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        if ($tmp401.value) {
        {
            panda$core$Bit $tmp403 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s402);
            if ($tmp403.value) {
            {
                org$pandalanguage$pandac$Type* $tmp404 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                return $tmp404;
            }
            }
            org$pandalanguage$pandac$Type* $tmp405 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
            return $tmp405;
        }
        }
    }
    }
    panda$core$Bit $tmp406 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
    if ($tmp406.value) {
    {
        panda$core$Bit $tmp408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
        bool $tmp407 = $tmp408.value;
        if ($tmp407) goto $l409;
        panda$core$Bit $tmp410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
        $tmp407 = $tmp410.value;
        $l409:;
        panda$core$Bit $tmp411 = { $tmp407 };
        if ($tmp411.value) {
        {
            return p_other;
        }
        }
        panda$core$Bit $tmp412 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        if ($tmp412.value) {
        {
            panda$core$Bit $tmp414 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s413);
            if ($tmp414.value) {
            {
                org$pandalanguage$pandac$Type* $tmp415 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                return $tmp415;
            }
            }
            org$pandalanguage$pandac$Type* $tmp416 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
            return $tmp416;
        }
        }
    }
    }
    panda$core$Bit $tmp417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp417.value) {
    {
        panda$core$Object* $tmp418 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp419 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp418), p_compiler, p_other);
        org$pandalanguage$pandac$Type* $tmp420 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp419);
        return $tmp420;
    }
    }
    panda$core$Bit $tmp421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp421.value) {
    {
        panda$core$Object* $tmp422 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp423 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_compiler, ((org$pandalanguage$pandac$Type*) $tmp422));
        org$pandalanguage$pandac$Type* $tmp424 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp423);
        return $tmp424;
    }
    }
    org$pandalanguage$pandac$Type* $tmp426 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self);
    t1425 = $tmp426;
    org$pandalanguage$pandac$Type* $tmp428 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_other);
    t2427 = $tmp428;
    panda$core$Bit $tmp430 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t1425);
    bool $tmp429 = $tmp430.value;
    if (!$tmp429) goto $l431;
    panda$core$Bit $tmp432 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t2427);
    $tmp429 = $tmp432.value;
    $l431:;
    panda$core$Bit $tmp433 = { $tmp429 };
    if ($tmp433.value) {
    {
        panda$collections$Set* $tmp435 = (panda$collections$Set*) pandaZAlloc(24);
        $tmp435->$class = (panda$core$Class*) &panda$collections$Set$class;
        $tmp435->refCount.value = 1;
        panda$collections$Set$init($tmp435);
        ancestors434 = $tmp435;
        t437 = self;
        org$pandalanguage$pandac$ClassDecl* $tmp439 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1425);
        cl438 = $tmp439;
        $l440:;
        if (!((panda$core$Bit) { cl438 != NULL }).value) goto $l441;
        {
            panda$collections$Set$add$panda$collections$Set$T(ancestors434, ((panda$collections$Key*) t437));
            if (((panda$core$Bit) { cl438->rawSuper != NULL }).value) {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t437));
                    org$pandalanguage$pandac$Type* $tmp442 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t437, cl438->rawSuper);
                    t437 = $tmp442;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl438));
                    org$pandalanguage$pandac$ClassDecl* $tmp443 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t437);
                    cl438 = $tmp443;
                }
            }
            }
            else {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl438));
                    cl438 = NULL;
                }
            }
            }
        }
        goto $l440;
        $l441:;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t437));
            t437 = p_other;
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl438));
            org$pandalanguage$pandac$ClassDecl* $tmp444 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t2427);
            cl438 = $tmp444;
        }
        $l445:;
        if (!((panda$core$Bit) { cl438 != NULL }).value) goto $l446;
        {
            panda$core$Bit $tmp447 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(ancestors434, ((panda$collections$Key*) t437));
            if ($tmp447.value) {
            {
                {
                    tmp5448 = t437;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t437));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors434));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl438));
                    }
                    {
                        tmp6449 = tmp5448;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1425));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2427));
                        }
                        return tmp6449;
                    }
                }
            }
            }
            if (((panda$core$Bit) { cl438->rawSuper != NULL }).value) {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t437));
                    org$pandalanguage$pandac$Type* $tmp450 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t437, cl438->rawSuper);
                    t437 = $tmp450;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl438));
                    org$pandalanguage$pandac$ClassDecl* $tmp451 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t437);
                    cl438 = $tmp451;
                }
            }
            }
            else {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl438));
                    cl438 = NULL;
                }
            }
            }
        }
        goto $l445;
        $l446:;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t437));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors434));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl438));
        }
    }
    }
    {
        org$pandalanguage$pandac$Type* $tmp453 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        tmp7452 = $tmp453;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1425));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2427));
        }
        return tmp7452;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    panda$core$Int64 $match$506_13456;
    org$pandalanguage$pandac$Type* found458;
    panda$collections$Array* remapped461;
    panda$core$MutableString* name464;
    panda$core$Char8 $tmp468;
    panda$core$String* separator469;
    panda$core$Range$LTpanda$core$Int64$GT $tmp471;
    org$pandalanguage$pandac$Type* child486;
    panda$core$Char8 $tmp497;
    panda$collections$Array* remapped510;
    panda$core$MutableString* name513;
    panda$core$String* separator517;
    panda$core$Range$LTpanda$core$Int64$GT $tmp521;
    org$pandalanguage$pandac$Type* child537;
    org$pandalanguage$pandac$Type* child555;
    panda$core$Char8 $tmp561;
    panda$core$Int64 $tmp454 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp454, ((panda$core$Int64) { 0 }));
    if ($tmp455.value) {
    {
        return self;
    }
    }
    {
        $match$506_13456 = self->typeKind;
        panda$core$Bit $tmp457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_13456, ((panda$core$Int64) { 22 }));
        if ($tmp457.value) {
        {
            panda$core$Object* $tmp459 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
            found458 = ((org$pandalanguage$pandac$Type*) $tmp459);
            if (((panda$core$Bit) { found458 != NULL }).value) {
            {
                return found458;
            }
            }
            return self;
        }
        }
        else {
        panda$core$Bit $tmp460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_13456, ((panda$core$Int64) { 21 }));
        if ($tmp460.value) {
        {
            panda$collections$Array* $tmp462 = (panda$collections$Array*) pandaZAlloc(40);
            $tmp462->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp462->refCount.value = 1;
            panda$collections$Array$init($tmp462);
            remapped461 = $tmp462;
            panda$core$MutableString* $tmp465 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp465->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp465->refCount.value = 1;
            panda$core$Object* $tmp467 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp465, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp467))->name);
            name464 = $tmp465;
            panda$core$Char8$init$panda$core$UInt8(&$tmp468, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(name464, $tmp468);
            separator469 = &$s470;
            panda$core$Int64 $tmp472 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp471, ((panda$core$Int64) { 0 }), $tmp472, ((panda$core$Bit) { false }));
            int64_t $tmp474 = $tmp471.min.value;
            panda$core$Int64 i473 = { $tmp474 };
            int64_t $tmp476 = $tmp471.max.value;
            bool $tmp477 = $tmp471.inclusive.value;
            if ($tmp477) goto $l484; else goto $l485;
            $l484:;
            if ($tmp474 <= $tmp476) goto $l478; else goto $l480;
            $l485:;
            if ($tmp474 < $tmp476) goto $l478; else goto $l480;
            $l478:;
            {
                panda$core$Object* $tmp487 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i473);
                org$pandalanguage$pandac$Type* $tmp488 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp487), p_types);
                child486 = $tmp488;
                panda$collections$Array$add$panda$collections$Array$T(remapped461, ((panda$core$Object*) child486));
                panda$core$Bit $tmp489 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i473, ((panda$core$Int64) { 0 }));
                if ($tmp489.value) {
                {
                    panda$core$MutableString$append$panda$core$String(name464, separator469);
                    panda$core$MutableString$append$panda$core$String(name464, ((org$pandalanguage$pandac$Symbol*) child486)->name);
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator469));
                        separator469 = &$s490;
                    }
                }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child486));
            }
            $l481:;
            int64_t $tmp492 = $tmp476 - i473.value;
            if ($tmp477) goto $l493; else goto $l494;
            $l493:;
            if ((uint64_t) $tmp492 >= 1) goto $l491; else goto $l480;
            $l494:;
            if ((uint64_t) $tmp492 > 1) goto $l491; else goto $l480;
            $l491:;
            i473.value += 1;
            goto $l478;
            $l480:;
            panda$core$Char8$init$panda$core$UInt8(&$tmp497, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name464, $tmp497);
            org$pandalanguage$pandac$Type* $tmp498 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
            $tmp498->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp498->refCount.value = 1;
            panda$core$String* $tmp500 = panda$core$MutableString$finish$R$panda$core$String(name464);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp498, $tmp500, ((panda$core$Int64) { 21 }), self->position, ((panda$collections$ListView*) remapped461), self->resolved);
            return $tmp498;
        }
        }
        else {
        panda$core$Bit $tmp501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_13456, ((panda$core$Int64) { 11 }));
        if ($tmp501.value) {
        {
            panda$core$Object* $tmp502 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp503 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp502), p_types);
            org$pandalanguage$pandac$Type* $tmp504 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp503);
            return $tmp504;
        }
        }
        else {
        panda$core$Bit $tmp506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_13456, ((panda$core$Int64) { 25 }));
        bool $tmp505 = $tmp506.value;
        if ($tmp505) goto $l507;
        panda$core$Bit $tmp508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_13456, ((panda$core$Int64) { 24 }));
        $tmp505 = $tmp508.value;
        $l507:;
        panda$core$Bit $tmp509 = { $tmp505 };
        if ($tmp509.value) {
        {
            panda$collections$Array* $tmp511 = (panda$collections$Array*) pandaZAlloc(40);
            $tmp511->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp511->refCount.value = 1;
            panda$collections$Array$init($tmp511);
            remapped510 = $tmp511;
            panda$core$MutableString* $tmp514 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp514->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp514->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp514, &$s516);
            name513 = $tmp514;
            separator517 = &$s518;
            panda$core$Int64 $tmp519 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Bit $tmp520 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp519, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp520.value);
            panda$core$Int64 $tmp522 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp523 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp522, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp521, ((panda$core$Int64) { 0 }), $tmp523, ((panda$core$Bit) { false }));
            int64_t $tmp525 = $tmp521.min.value;
            panda$core$Int64 i524 = { $tmp525 };
            int64_t $tmp527 = $tmp521.max.value;
            bool $tmp528 = $tmp521.inclusive.value;
            if ($tmp528) goto $l535; else goto $l536;
            $l535:;
            if ($tmp525 <= $tmp527) goto $l529; else goto $l531;
            $l536:;
            if ($tmp525 < $tmp527) goto $l529; else goto $l531;
            $l529:;
            {
                panda$core$Object* $tmp538 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i524);
                org$pandalanguage$pandac$Type* $tmp539 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp538), p_types);
                child537 = $tmp539;
                panda$core$MutableString$append$panda$core$String(name513, separator517);
                panda$core$MutableString$append$panda$core$String(name513, ((org$pandalanguage$pandac$Symbol*) child537)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped510, ((panda$core$Object*) child537));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator517));
                    separator517 = &$s540;
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child537));
            }
            $l532:;
            int64_t $tmp542 = $tmp527 - i524.value;
            if ($tmp528) goto $l543; else goto $l544;
            $l543:;
            if ((uint64_t) $tmp542 >= 1) goto $l541; else goto $l531;
            $l544:;
            if ((uint64_t) $tmp542 > 1) goto $l541; else goto $l531;
            $l541:;
            i524.value += 1;
            goto $l529;
            $l531:;
            panda$core$Bit $tmp547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
            if ($tmp547.value) {
            {
                panda$core$MutableString$append$panda$core$String(name513, &$s548);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(name513, &$s549);
            }
            }
            panda$core$Int64 $tmp550 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp551 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp550, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp552 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp551);
            org$pandalanguage$pandac$Type* $tmp553 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp554 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp552), $tmp553);
            if ($tmp554.value) {
            {
                panda$core$Int64 $tmp556 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp557 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp556, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp558 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp557);
                org$pandalanguage$pandac$Type* $tmp559 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp558), p_types);
                child555 = $tmp559;
                panda$core$MutableString$append$panda$core$String(name513, ((org$pandalanguage$pandac$Symbol*) child555)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped510, ((panda$core$Object*) child555));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child555));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp560 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                panda$collections$Array$add$panda$collections$Array$T(remapped510, ((panda$core$Object*) $tmp560));
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp561, ((panda$core$UInt8) { 41 }));
            panda$core$MutableString$append$panda$core$Char8(name513, $tmp561);
            org$pandalanguage$pandac$Type* $tmp562 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
            $tmp562->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp562->refCount.value = 1;
            panda$core$String* $tmp564 = panda$core$MutableString$finish$R$panda$core$String(name513);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp562, $tmp564, self->typeKind, self->position, ((panda$collections$ListView*) remapped510), self->resolved);
            return $tmp562;
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
    panda$core$Int64 $tmp565 = panda$core$String$hash$R$panda$core$Int64(self->name);
    return $tmp565;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    return self->name;
}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->subtypes));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->test));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameter));
}

