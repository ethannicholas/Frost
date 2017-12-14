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
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/Array.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
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

org$pandalanguage$pandac$Type$class_type org$pandalanguage$pandac$Type$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$core$Equatable, { org$pandalanguage$pandac$Type$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$Type$size$R$panda$core$Int64, org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit, org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit, org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit, org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit, org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$hash$R$panda$core$Int64} };

typedef panda$collections$Iterator* (*$fn30)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn36)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn42)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 164, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 164, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 164, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x3C", 11, 184897716878203264, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 218598044, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74\x3F", 18, 6054680304062974916, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6C\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x72\x69\x6E\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x66\x6C\x6F\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x66\x6C\x6F\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x65\x61\x6C\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, -6710647184408424492, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x65\x61\x6C\x5F\x6C\x69\x74\x65\x72\x61\x6C", 13, 9047743448612414981, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x62\x69\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, 7795433833837333484, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x74\x6F\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x62\x6C\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x50\x61\x6E\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x76\x61\x6C\x69\x64\x3E", 9, 1754774734872970466, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x65\x61\x6C", 15, 1602004586448770858, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 164, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 146931305, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 14839819243, NULL };

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
    self->subtypes = NULL;
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
    self->subtypes = NULL;
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
    panda$collections$Array* $tmp17 = (panda$collections$Array*) malloc(40);
    $tmp17->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp17->refCount.value = 1;
    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp17, p_subtypes);
    self->subtypes = $tmp17;
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
    panda$collections$Array* $tmp19 = (panda$collections$Array*) malloc(40);
    $tmp19->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp19->refCount.value = 1;
    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp19, p_subtypes);
    self->subtypes = $tmp19;
    panda$core$MutableString* $tmp22 = (panda$core$MutableString*) malloc(48);
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
            separator25 = &$s44;
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
}
void org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$ClassDecl$GenericParameter* p_param) {
    self->parameter = NULL;
    panda$core$String* $tmp50 = panda$core$String$convert$R$panda$core$String(p_param->owner);
    panda$core$String* $tmp52 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp50, &$s51);
    panda$core$String* $tmp53 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp52, ((org$pandalanguage$pandac$Symbol*) p_param)->name);
    panda$core$String* $tmp55 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp53, &$s54);
    ((org$pandalanguage$pandac$Symbol*) self)->name = $tmp55;
    self->typeKind = ((panda$core$Int64) { 22 });
    self->parameter = p_param;
    self->resolved = ((panda$core$Bit) { true });
    self->subtypes = NULL;
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
    org$pandalanguage$pandac$Type* $tmp67 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp67->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp67->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp70);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp67, &$s69, ((panda$core$Int64) { 14 }), $tmp70, ((panda$core$Bit) { true }));
    return $tmp67;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp74;
    org$pandalanguage$pandac$Type* $tmp71 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp71->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp71->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp74);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp71, &$s73, ((panda$core$Int64) { 23 }), $tmp74, ((panda$core$Bit) { true }));
    return $tmp71;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp78;
    org$pandalanguage$pandac$Type* $tmp75 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp75->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp75->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp78);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp75, &$s77, ((panda$core$Int64) { 10 }), $tmp78, ((panda$core$Bit) { true }));
    return $tmp75;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes79;
    org$pandalanguage$pandac$Position $tmp86;
    panda$collections$Array* $tmp80 = (panda$collections$Array*) malloc(40);
    $tmp80->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp80->refCount.value = 1;
    panda$collections$Array$init($tmp80);
    subtypes79 = $tmp80;
    org$pandalanguage$pandac$Type* $tmp82 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes79, ((panda$core$Object*) $tmp82));
    org$pandalanguage$pandac$Type* $tmp83 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp83->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp83->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp86);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp83, &$s85, ((panda$core$Int64) { 11 }), $tmp86, ((panda$collections$ListView*) subtypes79), ((panda$core$Bit) { true }));
    return $tmp83;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp90;
    org$pandalanguage$pandac$Type* $tmp87 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp87->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp87->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp90);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp87, &$s89, ((panda$core$Int64) { 10 }), $tmp90, ((panda$core$Bit) { true }));
    return $tmp87;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp94;
    org$pandalanguage$pandac$Type* $tmp91 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp91->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp91->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp94);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp91, &$s93, ((panda$core$Int64) { 10 }), $tmp94, ((panda$core$Bit) { true }));
    return $tmp91;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp98;
    org$pandalanguage$pandac$Type* $tmp95 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp95->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp95->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp98);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp95, &$s97, ((panda$core$Int64) { 10 }), $tmp98, ((panda$core$Bit) { true }));
    return $tmp95;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp99 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp99->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp99->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp99, &$s101, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 8 }));
    return $tmp99;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp102 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp102->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp102->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp102, &$s104, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 16 }));
    return $tmp102;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp105 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp105->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp105->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp105, &$s107, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 32 }));
    return $tmp105;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp108 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp108->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp108->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp108, &$s110, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 64 }));
    return $tmp108;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp111 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp111->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp111->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp111, &$s113, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 8 }));
    return $tmp111;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp114 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp114->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp114->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp114, &$s116, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 16 }));
    return $tmp114;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp117 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp117->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp117->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp117, &$s119, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 32 }));
    return $tmp117;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp120 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp120->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp120->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp120, &$s122, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 64 }));
    return $tmp120;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp123 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp123->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp123->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp123, &$s125, ((panda$core$Int64) { 20 }), ((panda$core$Int64) { 32 }));
    return $tmp123;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp126 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp126->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp126->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp126, &$s128, ((panda$core$Int64) { 20 }), ((panda$core$Int64) { 64 }));
    return $tmp126;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp132;
    org$pandalanguage$pandac$Type* $tmp129 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp129->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp129->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp132);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp129, &$s131, ((panda$core$Int64) { 10 }), $tmp132, ((panda$core$Bit) { true }));
    return $tmp129;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp136;
    org$pandalanguage$pandac$Type* $tmp133 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp133->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp133->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp136);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp133, &$s135, ((panda$core$Int64) { 10 }), $tmp136, ((panda$core$Bit) { true }));
    return $tmp133;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp140;
    org$pandalanguage$pandac$Type* $tmp137 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp137->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp137->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp140);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp137, &$s139, ((panda$core$Int64) { 10 }), $tmp140, ((panda$core$Bit) { true }));
    return $tmp137;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp144;
    org$pandalanguage$pandac$Type* $tmp141 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp141->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp141->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp144);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp141, &$s143, ((panda$core$Int64) { 10 }), $tmp144, ((panda$core$Bit) { true }));
    return $tmp141;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp148;
    org$pandalanguage$pandac$Type* $tmp145 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp145->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp145->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp148);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp145, &$s147, ((panda$core$Int64) { 10 }), $tmp148, ((panda$core$Bit) { true }));
    return $tmp145;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp152;
    org$pandalanguage$pandac$Type* $tmp149 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp149->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp149->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp152);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp149, &$s151, ((panda$core$Int64) { 10 }), $tmp152, ((panda$core$Bit) { true }));
    return $tmp149;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp156;
    org$pandalanguage$pandac$Type* $tmp153 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp153->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp153->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp156);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp153, &$s155, ((panda$core$Int64) { 10 }), $tmp156, ((panda$core$Bit) { true }));
    return $tmp153;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp160;
    org$pandalanguage$pandac$Type* $tmp157 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp157->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp157->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp160);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp157, &$s159, ((panda$core$Int64) { 10 }), $tmp160, ((panda$core$Bit) { true }));
    return $tmp157;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp164;
    org$pandalanguage$pandac$Type* $tmp161 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp161->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp161->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp164);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp161, &$s163, ((panda$core$Int64) { 10 }), $tmp164, ((panda$core$Bit) { true }));
    return $tmp161;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp168;
    org$pandalanguage$pandac$Type* $tmp165 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp165->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp165->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp168);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp165, &$s167, ((panda$core$Int64) { 10 }), $tmp168, ((panda$core$Bit) { true }));
    return $tmp165;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp172;
    org$pandalanguage$pandac$Type* $tmp169 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp169->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp169->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp172);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp169, &$s171, ((panda$core$Int64) { 10 }), $tmp172, ((panda$core$Bit) { true }));
    return $tmp169;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp176;
    org$pandalanguage$pandac$Type* $tmp173 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp173->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp173->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp176);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp173, &$s175, ((panda$core$Int64) { 10 }), $tmp176, ((panda$core$Bit) { true }));
    return $tmp173;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp180;
    org$pandalanguage$pandac$Type* $tmp177 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp177->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp177->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp180);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp177, &$s179, ((panda$core$Int64) { 10 }), $tmp180, ((panda$core$Bit) { true }));
    return $tmp177;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp184;
    org$pandalanguage$pandac$Type* $tmp181 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp181->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp181->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp184);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp181, &$s183, ((panda$core$Int64) { 15 }), $tmp184, ((panda$core$Bit) { true }));
    return $tmp181;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp188;
    org$pandalanguage$pandac$Type* $tmp185 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp185->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp185->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp188);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp185, &$s187, ((panda$core$Int64) { 26 }), $tmp188, ((panda$core$Bit) { true }));
    return $tmp185;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp192;
    org$pandalanguage$pandac$Type* $tmp189 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp189->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp189->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp192);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp189, &$s191, ((panda$core$Int64) { 18 }), $tmp192, ((panda$core$Bit) { true }));
    return $tmp189;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp196;
    org$pandalanguage$pandac$Type* $tmp193 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp193->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp193->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp196);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp193, &$s195, ((panda$core$Int64) { 19 }), $tmp196, ((panda$core$Bit) { true }));
    return $tmp193;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp200;
    org$pandalanguage$pandac$Type* $tmp197 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp197->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp197->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp200);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp197, &$s199, ((panda$core$Int64) { 10 }), $tmp200, ((panda$core$Bit) { true }));
    return $tmp197;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp204;
    org$pandalanguage$pandac$Type* $tmp201 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp201->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp201->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp204);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp201, &$s203, ((panda$core$Int64) { 10 }), $tmp204, ((panda$core$Bit) { true }));
    return $tmp201;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp208;
    org$pandalanguage$pandac$Type* $tmp205 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp205->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp205->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp208);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp205, &$s207, ((panda$core$Int64) { 10 }), $tmp208, ((panda$core$Bit) { true }));
    return $tmp205;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children209;
    org$pandalanguage$pandac$Position $tmp215;
    panda$collections$Array* $tmp210 = (panda$collections$Array*) malloc(40);
    $tmp210->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp210->refCount.value = 1;
    panda$collections$Array$init($tmp210);
    children209 = $tmp210;
    org$pandalanguage$pandac$Type* $tmp212 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp212->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp212->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp215);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp212, &$s214, ((panda$core$Int64) { 10 }), $tmp215, ((panda$core$Bit) { true }));
    panda$collections$Array$add$panda$collections$Array$T(children209, ((panda$core$Object*) $tmp212));
    panda$collections$Array$add$panda$collections$Array$T(children209, ((panda$core$Object*) p_t));
    org$pandalanguage$pandac$Type* $tmp216 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp216->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp216->refCount.value = 1;
    panda$core$String* $tmp219 = panda$core$String$convert$R$panda$core$String(&$s218);
    panda$core$String* $tmp221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp219, &$s220);
    panda$core$String* $tmp222 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp221, ((panda$core$Object*) p_t));
    panda$core$String* $tmp224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp222, &$s223);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp216, $tmp224, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children209), p_t->resolved);
    return $tmp216;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_endPoint, org$pandalanguage$pandac$Type* p_step) {
    panda$collections$Array* children225;
    org$pandalanguage$pandac$Position $tmp231;
    panda$collections$Array* $tmp226 = (panda$collections$Array*) malloc(40);
    $tmp226->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp226->refCount.value = 1;
    panda$collections$Array$init($tmp226);
    children225 = $tmp226;
    org$pandalanguage$pandac$Type* $tmp228 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp228->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp228->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp231);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp228, &$s230, ((panda$core$Int64) { 10 }), $tmp231, ((panda$core$Bit) { true }));
    panda$collections$Array$add$panda$collections$Array$T(children225, ((panda$core$Object*) $tmp228));
    panda$collections$Array$add$panda$collections$Array$T(children225, ((panda$core$Object*) p_endPoint));
    panda$collections$Array$add$panda$collections$Array$T(children225, ((panda$core$Object*) p_step));
    org$pandalanguage$pandac$Type* $tmp232 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp232->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp232->refCount.value = 1;
    panda$core$String* $tmp235 = panda$core$String$convert$R$panda$core$String(&$s234);
    panda$core$String* $tmp237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp235, &$s236);
    panda$core$String* $tmp238 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp237, ((panda$core$Object*) p_endPoint));
    panda$core$String* $tmp240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp238, &$s239);
    panda$core$String* $tmp241 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp240, ((panda$core$Object*) p_step));
    panda$core$String* $tmp243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp241, &$s242);
    bool $tmp244 = p_endPoint->resolved.value;
    if (!$tmp244) goto $l245;
    $tmp244 = p_step->resolved.value;
    $l245:;
    panda$core$Bit $tmp246 = { $tmp244 };
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp232, $tmp243, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_endPoint)->position, ((panda$collections$ListView*) children225), $tmp246);
    return $tmp232;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp250;
    org$pandalanguage$pandac$Type* $tmp247 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp247->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp247->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp250);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp247, &$s249, ((panda$core$Int64) { 16 }), $tmp250, ((panda$core$Bit) { true }));
    return $tmp247;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp254 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s253);
    bool $tmp252 = $tmp254.value;
    if ($tmp252) goto $l255;
    panda$core$Bit $tmp257 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s256);
    $tmp252 = $tmp257.value;
    $l255:;
    panda$core$Bit $tmp258 = { $tmp252 };
    bool $tmp251 = $tmp258.value;
    if ($tmp251) goto $l259;
    panda$core$Bit $tmp261 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s260);
    $tmp251 = $tmp261.value;
    $l259:;
    panda$core$Bit $tmp262 = { $tmp251 };
    return $tmp262;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp265 = $tmp266.value;
    if ($tmp265) goto $l267;
    panda$core$Bit $tmp268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp265 = $tmp268.value;
    $l267:;
    panda$core$Bit $tmp269 = { $tmp265 };
    bool $tmp264 = $tmp269.value;
    if ($tmp264) goto $l270;
    panda$core$Bit $tmp271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 20 }));
    $tmp264 = $tmp271.value;
    $l270:;
    panda$core$Bit $tmp272 = { $tmp264 };
    bool $tmp263 = $tmp272.value;
    if ($tmp263) goto $l273;
    panda$core$Bit $tmp274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp263 = $tmp274.value;
    $l273:;
    panda$core$Bit $tmp275 = { $tmp263 };
    return $tmp275;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp277 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s276);
    return $tmp277;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    switch (self->typeKind.value) {
        case 10:
        case 11:
        case 21:
        case 22:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp278 = $tmp279.value;
    if ($tmp278) goto $l280;
    panda$core$Bit $tmp281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
    $tmp278 = $tmp281.value;
    $l280:;
    panda$core$Bit $tmp282 = { $tmp278 };
    return $tmp282;
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp284 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s283);
    return $tmp284;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp285.value) {
    {
        panda$core$Object* $tmp286 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp287 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp286));
        return $tmp287;
    }
    }
    panda$core$Bit $tmp289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp288 = $tmp289.value;
    if (!$tmp288) goto $l290;
    panda$core$Object* $tmp291 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp293 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp291))->name, &$s292);
    $tmp288 = $tmp293.value;
    $l290:;
    panda$core$Bit $tmp294 = { $tmp288 };
    return $tmp294;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp295.value) {
    {
        panda$core$Object* $tmp296 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp297 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp296));
        return $tmp297;
    }
    }
    panda$core$Bit $tmp299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp298 = $tmp299.value;
    if (!$tmp298) goto $l300;
    panda$core$Object* $tmp301 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp303 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp301))->name, &$s302);
    $tmp298 = $tmp303.value;
    $l300:;
    panda$core$Bit $tmp304 = { $tmp298 };
    return $tmp304;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$collections$Array* subtypes306;
    org$pandalanguage$pandac$Position $tmp314;
    panda$core$Bit $tmp305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp305.value) {
    {
        return self;
    }
    }
    panda$collections$Array* $tmp307 = (panda$collections$Array*) malloc(40);
    $tmp307->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp307->refCount.value = 1;
    panda$collections$Array$init($tmp307);
    subtypes306 = $tmp307;
    panda$collections$Array$add$panda$collections$Array$T(subtypes306, ((panda$core$Object*) self));
    org$pandalanguage$pandac$Type* $tmp309 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp309->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp309->refCount.value = 1;
    panda$core$String* $tmp311 = panda$core$String$convert$R$panda$core$String(self->name);
    panda$core$String* $tmp313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp311, &$s312);
    org$pandalanguage$pandac$Position$init(&$tmp314);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp309, $tmp313, ((panda$core$Int64) { 11 }), $tmp314, ((panda$collections$ListView*) subtypes306), ((panda$core$Bit) { true }));
    return $tmp309;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp315 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
    if ($tmp315.value) {
    {
        return self;
    }
    }
    org$pandalanguage$pandac$Type* $tmp316 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp317 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp316);
    if ($tmp317.value) {
    {
        panda$core$Bit $tmp318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp318.value) {
        {
            return p_other;
        }
        }
        org$pandalanguage$pandac$Type* $tmp319 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
        return $tmp319;
    }
    }
    org$pandalanguage$pandac$Type* $tmp320 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp321 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp320);
    if ($tmp321.value) {
    {
        panda$core$Bit $tmp322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp322.value) {
        {
            return self;
        }
        }
        org$pandalanguage$pandac$Type* $tmp323 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
        return $tmp323;
    }
    }
    org$pandalanguage$pandac$Type* $tmp325 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp326 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp325);
    bool $tmp324 = $tmp326.value;
    if (!$tmp324) goto $l327;
    panda$core$Bit $tmp328 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
    $tmp324 = $tmp328.value;
    $l327:;
    panda$core$Bit $tmp329 = { $tmp324 };
    if ($tmp329.value) {
    {
        return p_other;
    }
    }
    panda$core$Bit $tmp331 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp330 = $tmp331.value;
    if (!$tmp330) goto $l332;
    org$pandalanguage$pandac$Type* $tmp333 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp334 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp333);
    $tmp330 = $tmp334.value;
    $l332:;
    panda$core$Bit $tmp335 = { $tmp330 };
    if ($tmp335.value) {
    {
        return self;
    }
    }
    panda$core$Bit $tmp336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp336.value) {
    {
        panda$core$Object* $tmp337 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp338 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp337), p_other);
        org$pandalanguage$pandac$Type* $tmp339 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp338);
        return $tmp339;
    }
    }
    panda$core$Bit $tmp340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp340.value) {
    {
        panda$core$Object* $tmp341 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp342 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp341));
        org$pandalanguage$pandac$Type* $tmp343 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp342);
        return $tmp343;
    }
    }
    org$pandalanguage$pandac$Type* $tmp344 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
    return $tmp344;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    org$pandalanguage$pandac$Type* found347;
    panda$collections$Array* remapped349;
    panda$core$MutableString* name352;
    panda$core$Char8 $tmp356;
    panda$core$String* separator357;
    panda$core$Range$LTpanda$core$Int64$GT $tmp359;
    org$pandalanguage$pandac$Type* child374;
    panda$core$Char8 $tmp385;
    panda$collections$Array* remapped392;
    panda$core$MutableString* name395;
    panda$core$String* separator399;
    panda$core$Range$LTpanda$core$Int64$GT $tmp403;
    org$pandalanguage$pandac$Type* child419;
    org$pandalanguage$pandac$Type* child437;
    panda$core$Char8 $tmp443;
    panda$core$Int64 $tmp345 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp345, ((panda$core$Int64) { 0 }));
    if ($tmp346.value) {
    {
        return self;
    }
    }
    switch (self->typeKind.value) {
        case 22:
        {
            panda$core$Object* $tmp348 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
            found347 = ((org$pandalanguage$pandac$Type*) $tmp348);
            if (((panda$core$Bit) { found347 != NULL }).value) {
            {
                return found347;
            }
            }
            return self;
        }
        break;
        case 21:
        {
            panda$collections$Array* $tmp350 = (panda$collections$Array*) malloc(40);
            $tmp350->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp350->refCount.value = 1;
            panda$collections$Array$init($tmp350);
            remapped349 = $tmp350;
            panda$core$MutableString* $tmp353 = (panda$core$MutableString*) malloc(48);
            $tmp353->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp353->refCount.value = 1;
            panda$core$Object* $tmp355 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp353, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp355))->name);
            name352 = $tmp353;
            panda$core$Char8$init$panda$core$UInt8(&$tmp356, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(name352, $tmp356);
            separator357 = &$s358;
            panda$core$Int64 $tmp360 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp359, ((panda$core$Int64) { 0 }), $tmp360, ((panda$core$Bit) { false }));
            int64_t $tmp362 = $tmp359.min.value;
            panda$core$Int64 i361 = { $tmp362 };
            int64_t $tmp364 = $tmp359.max.value;
            bool $tmp365 = $tmp359.inclusive.value;
            if ($tmp365) goto $l372; else goto $l373;
            $l372:;
            if ($tmp362 <= $tmp364) goto $l366; else goto $l368;
            $l373:;
            if ($tmp362 < $tmp364) goto $l366; else goto $l368;
            $l366:;
            {
                panda$core$Object* $tmp375 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i361);
                org$pandalanguage$pandac$Type* $tmp376 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp375), p_types);
                child374 = $tmp376;
                panda$collections$Array$add$panda$collections$Array$T(remapped349, ((panda$core$Object*) child374));
                panda$core$Bit $tmp377 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i361, ((panda$core$Int64) { 0 }));
                if ($tmp377.value) {
                {
                    panda$core$MutableString$append$panda$core$String(name352, separator357);
                    panda$core$MutableString$append$panda$core$String(name352, ((org$pandalanguage$pandac$Symbol*) child374)->name);
                    separator357 = &$s378;
                }
                }
            }
            $l369:;
            int64_t $tmp380 = $tmp364 - i361.value;
            if ($tmp365) goto $l381; else goto $l382;
            $l381:;
            if ($tmp380 >= 1) goto $l379; else goto $l368;
            $l382:;
            if ($tmp380 > 1) goto $l379; else goto $l368;
            $l379:;
            i361.value += 1;
            goto $l366;
            $l368:;
            panda$core$Char8$init$panda$core$UInt8(&$tmp385, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name352, $tmp385);
            org$pandalanguage$pandac$Type* $tmp386 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp386->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp386->refCount.value = 1;
            panda$core$String* $tmp388 = panda$core$MutableString$finish$R$panda$core$String(name352);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp386, $tmp388, ((panda$core$Int64) { 21 }), self->position, ((panda$collections$ListView*) remapped349), self->resolved);
            return $tmp386;
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp389 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp390 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp389), p_types);
            org$pandalanguage$pandac$Type* $tmp391 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp390);
            return $tmp391;
        }
        break;
        case 25:
        case 24:
        {
            panda$collections$Array* $tmp393 = (panda$collections$Array*) malloc(40);
            $tmp393->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp393->refCount.value = 1;
            panda$collections$Array$init($tmp393);
            remapped392 = $tmp393;
            panda$core$MutableString* $tmp396 = (panda$core$MutableString*) malloc(48);
            $tmp396->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp396->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp396, &$s398);
            name395 = $tmp396;
            separator399 = &$s400;
            panda$core$Int64 $tmp401 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Bit $tmp402 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp401, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp402.value);
            panda$core$Int64 $tmp404 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp405 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp404, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp403, ((panda$core$Int64) { 0 }), $tmp405, ((panda$core$Bit) { false }));
            int64_t $tmp407 = $tmp403.min.value;
            panda$core$Int64 i406 = { $tmp407 };
            int64_t $tmp409 = $tmp403.max.value;
            bool $tmp410 = $tmp403.inclusive.value;
            if ($tmp410) goto $l417; else goto $l418;
            $l417:;
            if ($tmp407 <= $tmp409) goto $l411; else goto $l413;
            $l418:;
            if ($tmp407 < $tmp409) goto $l411; else goto $l413;
            $l411:;
            {
                panda$core$Object* $tmp420 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i406);
                org$pandalanguage$pandac$Type* $tmp421 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp420), p_types);
                child419 = $tmp421;
                panda$core$MutableString$append$panda$core$String(name395, separator399);
                panda$core$MutableString$append$panda$core$String(name395, ((org$pandalanguage$pandac$Symbol*) child419)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped392, ((panda$core$Object*) child419));
                separator399 = &$s422;
            }
            $l414:;
            int64_t $tmp424 = $tmp409 - i406.value;
            if ($tmp410) goto $l425; else goto $l426;
            $l425:;
            if ($tmp424 >= 1) goto $l423; else goto $l413;
            $l426:;
            if ($tmp424 > 1) goto $l423; else goto $l413;
            $l423:;
            i406.value += 1;
            goto $l411;
            $l413:;
            panda$core$Bit $tmp429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
            if ($tmp429.value) {
            {
                panda$core$MutableString$append$panda$core$String(name395, &$s430);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(name395, &$s431);
            }
            }
            panda$core$Int64 $tmp432 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp433 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp432, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp434 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp433);
            org$pandalanguage$pandac$Type* $tmp435 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp436 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp434), $tmp435);
            if ($tmp436.value) {
            {
                panda$core$Int64 $tmp438 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp439 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp438, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp440 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp439);
                org$pandalanguage$pandac$Type* $tmp441 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp440), p_types);
                child437 = $tmp441;
                panda$core$MutableString$append$panda$core$String(name395, ((org$pandalanguage$pandac$Symbol*) child437)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped392, ((panda$core$Object*) child437));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp442 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                panda$collections$Array$add$panda$collections$Array$T(remapped392, ((panda$core$Object*) $tmp442));
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp443, ((panda$core$UInt8) { 41 }));
            panda$core$MutableString$append$panda$core$Char8(name395, $tmp443);
            org$pandalanguage$pandac$Type* $tmp444 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp444->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp444->refCount.value = 1;
            panda$core$String* $tmp446 = panda$core$MutableString$finish$R$panda$core$String(name395);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp444, $tmp446, self->typeKind, self->position, ((panda$collections$ListView*) remapped392), self->resolved);
            return $tmp444;
        }
        break;
        default:
        {
            return self;
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp447 = panda$core$String$hash$R$panda$core$Int64(self->name);
    return $tmp447;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    return self->name;
}

