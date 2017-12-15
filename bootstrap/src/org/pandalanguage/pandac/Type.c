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
#include "panda/core/UInt64.h"
#include "panda/core/Real64.h"
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

org$pandalanguage$pandac$Type$class_type org$pandalanguage$pandac$Type$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$core$Equatable, { org$pandalanguage$pandac$Type$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$Type$size$R$panda$core$Int64, org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit, org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit, org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit, org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit, org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit, org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$hash$R$panda$core$Int64} };

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
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x65\x61\x6C\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x65\x61\x6C\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x62\x69\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, 7795433833837333484, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x74\x6F\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x62\x6C\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x50\x61\x6E\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x76\x61\x6C\x69\x64\x3E", 9, 1754774734872970466, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x65\x61\x6C", 15, 1602004586448770858, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x65\x61\x6C", 15, 1602004586448770858, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 164, NULL };
static panda$core$String $s362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 146931305, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 14839819243, NULL };

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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp164;
    org$pandalanguage$pandac$Type* $tmp161 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp161->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp161->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp164);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp161, &$s163, ((panda$core$Int64) { 10 }), $tmp164, ((panda$core$Bit) { true }));
    return $tmp161;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp168;
    org$pandalanguage$pandac$Type* $tmp165 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp165->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp165->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp168);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp165, &$s167, ((panda$core$Int64) { 10 }), $tmp168, ((panda$core$Bit) { true }));
    return $tmp165;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp172;
    org$pandalanguage$pandac$Type* $tmp169 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp169->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp169->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp172);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp169, &$s171, ((panda$core$Int64) { 10 }), $tmp172, ((panda$core$Bit) { true }));
    return $tmp169;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp176;
    org$pandalanguage$pandac$Type* $tmp173 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp173->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp173->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp176);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp173, &$s175, ((panda$core$Int64) { 10 }), $tmp176, ((panda$core$Bit) { true }));
    return $tmp173;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp180;
    org$pandalanguage$pandac$Type* $tmp177 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp177->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp177->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp180);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp177, &$s179, ((panda$core$Int64) { 10 }), $tmp180, ((panda$core$Bit) { true }));
    return $tmp177;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp184;
    org$pandalanguage$pandac$Type* $tmp181 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp181->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp181->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp184);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp181, &$s183, ((panda$core$Int64) { 10 }), $tmp184, ((panda$core$Bit) { true }));
    return $tmp181;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Position $tmp188;
    org$pandalanguage$pandac$Type* $tmp185 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp185->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp185->refCount.value = 1;
    panda$core$String* $tmp187 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    org$pandalanguage$pandac$Position$init(&$tmp188);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp185, $tmp187, ((panda$core$Int64) { 15 }), $tmp188, ((panda$core$Bit) { true }));
    return $tmp185;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Position $tmp194;
    org$pandalanguage$pandac$Type* $tmp189 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp189->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp189->refCount.value = 1;
    panda$core$String* $tmp192 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s191, $tmp192);
    org$pandalanguage$pandac$Position$init(&$tmp194);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp189, $tmp193, ((panda$core$Int64) { 15 }), $tmp194, ((panda$core$Bit) { true }));
    return $tmp189;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 p_value) {
    org$pandalanguage$pandac$Position $tmp198;
    org$pandalanguage$pandac$Type* $tmp195 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp195->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp195->refCount.value = 1;
    panda$core$String* $tmp197 = panda$core$Real64$convert$R$panda$core$String(p_value);
    org$pandalanguage$pandac$Position$init(&$tmp198);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp195, $tmp197, ((panda$core$Int64) { 26 }), $tmp198, ((panda$core$Bit) { true }));
    return $tmp195;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp202;
    org$pandalanguage$pandac$Type* $tmp199 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp199->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp199->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp202);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp199, &$s201, ((panda$core$Int64) { 18 }), $tmp202, ((panda$core$Bit) { true }));
    return $tmp199;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp206;
    org$pandalanguage$pandac$Type* $tmp203 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp203->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp203->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp206);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp203, &$s205, ((panda$core$Int64) { 19 }), $tmp206, ((panda$core$Bit) { true }));
    return $tmp203;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp210;
    org$pandalanguage$pandac$Type* $tmp207 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp207->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp207->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp210);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp207, &$s209, ((panda$core$Int64) { 10 }), $tmp210, ((panda$core$Bit) { true }));
    return $tmp207;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp214;
    org$pandalanguage$pandac$Type* $tmp211 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp211->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp211->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp214);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp211, &$s213, ((panda$core$Int64) { 10 }), $tmp214, ((panda$core$Bit) { true }));
    return $tmp211;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp218;
    org$pandalanguage$pandac$Type* $tmp215 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp215->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp215->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp218);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp215, &$s217, ((panda$core$Int64) { 10 }), $tmp218, ((panda$core$Bit) { true }));
    return $tmp215;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children219;
    org$pandalanguage$pandac$Position $tmp225;
    panda$collections$Array* $tmp220 = (panda$collections$Array*) malloc(40);
    $tmp220->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp220->refCount.value = 1;
    panda$collections$Array$init($tmp220);
    children219 = $tmp220;
    org$pandalanguage$pandac$Type* $tmp222 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp222->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp222->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp225);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp222, &$s224, ((panda$core$Int64) { 10 }), $tmp225, ((panda$core$Bit) { true }));
    panda$collections$Array$add$panda$collections$Array$T(children219, ((panda$core$Object*) $tmp222));
    panda$collections$Array$add$panda$collections$Array$T(children219, ((panda$core$Object*) p_t));
    org$pandalanguage$pandac$Type* $tmp226 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp226->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp226->refCount.value = 1;
    panda$core$String* $tmp229 = panda$core$String$convert$R$panda$core$String(&$s228);
    panda$core$String* $tmp231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp229, &$s230);
    panda$core$String* $tmp232 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp231, ((panda$core$Object*) p_t));
    panda$core$String* $tmp234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp232, &$s233);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp226, $tmp234, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children219), p_t->resolved);
    return $tmp226;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children235;
    org$pandalanguage$pandac$Position $tmp241;
    panda$collections$Array* $tmp236 = (panda$collections$Array*) malloc(40);
    $tmp236->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp236->refCount.value = 1;
    panda$collections$Array$init($tmp236);
    children235 = $tmp236;
    org$pandalanguage$pandac$Type* $tmp238 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp238->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp238->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp241);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp238, &$s240, ((panda$core$Int64) { 10 }), $tmp241, ((panda$core$Bit) { true }));
    panda$collections$Array$add$panda$collections$Array$T(children235, ((panda$core$Object*) $tmp238));
    panda$collections$Array$add$panda$collections$Array$T(children235, ((panda$core$Object*) p_t));
    org$pandalanguage$pandac$Type* $tmp242 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
    panda$collections$Array$add$panda$collections$Array$T(children235, ((panda$core$Object*) $tmp242));
    org$pandalanguage$pandac$Type* $tmp243 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp243->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp243->refCount.value = 1;
    panda$core$String* $tmp246 = panda$core$String$convert$R$panda$core$String(&$s245);
    panda$core$String* $tmp248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp246, &$s247);
    panda$core$String* $tmp249 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp248, ((panda$core$Object*) p_t));
    panda$core$String* $tmp251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp249, &$s250);
    org$pandalanguage$pandac$Type* $tmp252 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
    panda$core$String* $tmp253 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp251, ((panda$core$Object*) $tmp252));
    panda$core$String* $tmp255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp253, &$s254);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp243, $tmp255, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children235), p_t->resolved);
    return $tmp243;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp259;
    org$pandalanguage$pandac$Type* $tmp256 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp256->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp256->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp259);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp256, &$s258, ((panda$core$Int64) { 16 }), $tmp259, ((panda$core$Bit) { true }));
    return $tmp256;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp265 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s264);
    bool $tmp263 = $tmp265.value;
    if ($tmp263) goto $l266;
    panda$core$Bit $tmp268 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s267);
    $tmp263 = $tmp268.value;
    $l266:;
    panda$core$Bit $tmp269 = { $tmp263 };
    bool $tmp262 = $tmp269.value;
    if ($tmp262) goto $l270;
    panda$core$Bit $tmp272 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s271);
    $tmp262 = $tmp272.value;
    $l270:;
    panda$core$Bit $tmp273 = { $tmp262 };
    bool $tmp261 = $tmp273.value;
    if ($tmp261) goto $l274;
    panda$core$Bit $tmp275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp261 = $tmp275.value;
    $l274:;
    panda$core$Bit $tmp276 = { $tmp261 };
    bool $tmp260 = $tmp276.value;
    if ($tmp260) goto $l277;
    panda$core$Bit $tmp278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
    $tmp260 = $tmp278.value;
    $l277:;
    panda$core$Bit $tmp279 = { $tmp260 };
    return $tmp279;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp282 = $tmp283.value;
    if ($tmp282) goto $l284;
    panda$core$Bit $tmp285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp282 = $tmp285.value;
    $l284:;
    panda$core$Bit $tmp286 = { $tmp282 };
    bool $tmp281 = $tmp286.value;
    if ($tmp281) goto $l287;
    panda$core$Bit $tmp288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 20 }));
    $tmp281 = $tmp288.value;
    $l287:;
    panda$core$Bit $tmp289 = { $tmp281 };
    bool $tmp280 = $tmp289.value;
    if ($tmp280) goto $l290;
    panda$core$Bit $tmp291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp280 = $tmp291.value;
    $l290:;
    panda$core$Bit $tmp292 = { $tmp280 };
    return $tmp292;
}
panda$core$Bit org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
    bool $tmp293 = $tmp294.value;
    if ($tmp293) goto $l295;
    panda$core$Bit $tmp297 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s296);
    $tmp293 = $tmp297.value;
    $l295:;
    panda$core$Bit $tmp298 = { $tmp293 };
    return $tmp298;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp300 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s299);
    return $tmp300;
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
    panda$core$Bit $tmp302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp301 = $tmp302.value;
    if ($tmp301) goto $l303;
    panda$core$Bit $tmp304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
    $tmp301 = $tmp304.value;
    $l303:;
    panda$core$Bit $tmp305 = { $tmp301 };
    return $tmp305;
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp307 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s306);
    return $tmp307;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp308.value) {
    {
        panda$core$Object* $tmp309 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp310 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp309));
        return $tmp310;
    }
    }
    panda$core$Bit $tmp312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp311 = $tmp312.value;
    if (!$tmp311) goto $l313;
    panda$core$Object* $tmp314 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp316 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp314))->name, &$s315);
    $tmp311 = $tmp316.value;
    $l313:;
    panda$core$Bit $tmp317 = { $tmp311 };
    return $tmp317;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp318.value) {
    {
        panda$core$Object* $tmp319 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp320 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp319));
        return $tmp320;
    }
    }
    panda$core$Bit $tmp322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp321 = $tmp322.value;
    if (!$tmp321) goto $l323;
    panda$core$Object* $tmp324 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp326 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp324))->name, &$s325);
    $tmp321 = $tmp326.value;
    $l323:;
    panda$core$Bit $tmp327 = { $tmp321 };
    return $tmp327;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$collections$Array* subtypes329;
    org$pandalanguage$pandac$Position $tmp337;
    panda$core$Bit $tmp328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp328.value) {
    {
        return self;
    }
    }
    panda$collections$Array* $tmp330 = (panda$collections$Array*) malloc(40);
    $tmp330->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp330->refCount.value = 1;
    panda$collections$Array$init($tmp330);
    subtypes329 = $tmp330;
    panda$collections$Array$add$panda$collections$Array$T(subtypes329, ((panda$core$Object*) self));
    org$pandalanguage$pandac$Type* $tmp332 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp332->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp332->refCount.value = 1;
    panda$core$String* $tmp334 = panda$core$String$convert$R$panda$core$String(self->name);
    panda$core$String* $tmp336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp334, &$s335);
    org$pandalanguage$pandac$Position$init(&$tmp337);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp332, $tmp336, ((panda$core$Int64) { 11 }), $tmp337, ((panda$collections$ListView*) subtypes329), ((panda$core$Bit) { true }));
    return $tmp332;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp338 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp338.value) {
    {
        return self;
    }
    }
    panda$core$Object* $tmp339 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    return ((org$pandalanguage$pandac$Type*) $tmp339);
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp340 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
    if ($tmp340.value) {
    {
        return self;
    }
    }
    org$pandalanguage$pandac$Type* $tmp341 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp342 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp341);
    if ($tmp342.value) {
    {
        panda$core$Bit $tmp343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp343.value) {
        {
            return p_other;
        }
        }
        org$pandalanguage$pandac$Type* $tmp344 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
        return $tmp344;
    }
    }
    org$pandalanguage$pandac$Type* $tmp345 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp346 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp345);
    if ($tmp346.value) {
    {
        panda$core$Bit $tmp347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp347.value) {
        {
            return self;
        }
        }
        org$pandalanguage$pandac$Type* $tmp348 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
        return $tmp348;
    }
    }
    panda$core$Bit $tmp350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp349 = $tmp350.value;
    if (!$tmp349) goto $l351;
    panda$core$Bit $tmp352 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
    $tmp349 = $tmp352.value;
    $l351:;
    panda$core$Bit $tmp353 = { $tmp349 };
    if ($tmp353.value) {
    {
        return p_other;
    }
    }
    panda$core$Bit $tmp355 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp354 = $tmp355.value;
    if (!$tmp354) goto $l356;
    panda$core$Bit $tmp357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 15 }));
    $tmp354 = $tmp357.value;
    $l356:;
    panda$core$Bit $tmp358 = { $tmp354 };
    if ($tmp358.value) {
    {
        return self;
    }
    }
    panda$core$Bit $tmp359 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
    if ($tmp359.value) {
    {
        panda$core$Bit $tmp360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 15 }));
        if ($tmp360.value) {
        {
            return self;
        }
        }
        panda$core$Bit $tmp361 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        if ($tmp361.value) {
        {
            panda$core$Bit $tmp363 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s362);
            if ($tmp363.value) {
            {
                org$pandalanguage$pandac$Type* $tmp364 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                return $tmp364;
            }
            }
            org$pandalanguage$pandac$Type* $tmp365 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
            return $tmp365;
        }
        }
    }
    }
    panda$core$Bit $tmp366 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
    if ($tmp366.value) {
    {
        panda$core$Bit $tmp367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
        if ($tmp367.value) {
        {
            return p_other;
        }
        }
        panda$core$Bit $tmp368 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        if ($tmp368.value) {
        {
            panda$core$Bit $tmp370 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s369);
            if ($tmp370.value) {
            {
                org$pandalanguage$pandac$Type* $tmp371 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                return $tmp371;
            }
            }
            org$pandalanguage$pandac$Type* $tmp372 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
            return $tmp372;
        }
        }
    }
    }
    panda$core$Bit $tmp373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp373.value) {
    {
        panda$core$Object* $tmp374 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp375 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp374), p_other);
        org$pandalanguage$pandac$Type* $tmp376 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp375);
        return $tmp376;
    }
    }
    panda$core$Bit $tmp377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp377.value) {
    {
        panda$core$Object* $tmp378 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp379 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp378));
        org$pandalanguage$pandac$Type* $tmp380 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp379);
        return $tmp380;
    }
    }
    org$pandalanguage$pandac$Type* $tmp381 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
    return $tmp381;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    org$pandalanguage$pandac$Type* found384;
    panda$collections$Array* remapped386;
    panda$core$MutableString* name389;
    panda$core$Char8 $tmp393;
    panda$core$String* separator394;
    panda$core$Range$LTpanda$core$Int64$GT $tmp396;
    org$pandalanguage$pandac$Type* child411;
    panda$core$Char8 $tmp422;
    panda$collections$Array* remapped429;
    panda$core$MutableString* name432;
    panda$core$String* separator436;
    panda$core$Range$LTpanda$core$Int64$GT $tmp440;
    org$pandalanguage$pandac$Type* child456;
    org$pandalanguage$pandac$Type* child474;
    panda$core$Char8 $tmp480;
    panda$core$Int64 $tmp382 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp382, ((panda$core$Int64) { 0 }));
    if ($tmp383.value) {
    {
        return self;
    }
    }
    switch (self->typeKind.value) {
        case 22:
        {
            panda$core$Object* $tmp385 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
            found384 = ((org$pandalanguage$pandac$Type*) $tmp385);
            if (((panda$core$Bit) { found384 != NULL }).value) {
            {
                return found384;
            }
            }
            return self;
        }
        break;
        case 21:
        {
            panda$collections$Array* $tmp387 = (panda$collections$Array*) malloc(40);
            $tmp387->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp387->refCount.value = 1;
            panda$collections$Array$init($tmp387);
            remapped386 = $tmp387;
            panda$core$MutableString* $tmp390 = (panda$core$MutableString*) malloc(48);
            $tmp390->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp390->refCount.value = 1;
            panda$core$Object* $tmp392 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp390, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp392))->name);
            name389 = $tmp390;
            panda$core$Char8$init$panda$core$UInt8(&$tmp393, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(name389, $tmp393);
            separator394 = &$s395;
            panda$core$Int64 $tmp397 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp396, ((panda$core$Int64) { 0 }), $tmp397, ((panda$core$Bit) { false }));
            int64_t $tmp399 = $tmp396.min.value;
            panda$core$Int64 i398 = { $tmp399 };
            int64_t $tmp401 = $tmp396.max.value;
            bool $tmp402 = $tmp396.inclusive.value;
            if ($tmp402) goto $l409; else goto $l410;
            $l409:;
            if ($tmp399 <= $tmp401) goto $l403; else goto $l405;
            $l410:;
            if ($tmp399 < $tmp401) goto $l403; else goto $l405;
            $l403:;
            {
                panda$core$Object* $tmp412 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i398);
                org$pandalanguage$pandac$Type* $tmp413 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp412), p_types);
                child411 = $tmp413;
                panda$collections$Array$add$panda$collections$Array$T(remapped386, ((panda$core$Object*) child411));
                panda$core$Bit $tmp414 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i398, ((panda$core$Int64) { 0 }));
                if ($tmp414.value) {
                {
                    panda$core$MutableString$append$panda$core$String(name389, separator394);
                    panda$core$MutableString$append$panda$core$String(name389, ((org$pandalanguage$pandac$Symbol*) child411)->name);
                    separator394 = &$s415;
                }
                }
            }
            $l406:;
            int64_t $tmp417 = $tmp401 - i398.value;
            if ($tmp402) goto $l418; else goto $l419;
            $l418:;
            if ($tmp417 >= 1) goto $l416; else goto $l405;
            $l419:;
            if ($tmp417 > 1) goto $l416; else goto $l405;
            $l416:;
            i398.value += 1;
            goto $l403;
            $l405:;
            panda$core$Char8$init$panda$core$UInt8(&$tmp422, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name389, $tmp422);
            org$pandalanguage$pandac$Type* $tmp423 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp423->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp423->refCount.value = 1;
            panda$core$String* $tmp425 = panda$core$MutableString$finish$R$panda$core$String(name389);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp423, $tmp425, ((panda$core$Int64) { 21 }), self->position, ((panda$collections$ListView*) remapped386), self->resolved);
            return $tmp423;
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp426 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp427 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp426), p_types);
            org$pandalanguage$pandac$Type* $tmp428 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp427);
            return $tmp428;
        }
        break;
        case 25:
        case 24:
        {
            panda$collections$Array* $tmp430 = (panda$collections$Array*) malloc(40);
            $tmp430->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp430->refCount.value = 1;
            panda$collections$Array$init($tmp430);
            remapped429 = $tmp430;
            panda$core$MutableString* $tmp433 = (panda$core$MutableString*) malloc(48);
            $tmp433->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp433->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp433, &$s435);
            name432 = $tmp433;
            separator436 = &$s437;
            panda$core$Int64 $tmp438 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Bit $tmp439 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp438, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp439.value);
            panda$core$Int64 $tmp441 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp442 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp441, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp440, ((panda$core$Int64) { 0 }), $tmp442, ((panda$core$Bit) { false }));
            int64_t $tmp444 = $tmp440.min.value;
            panda$core$Int64 i443 = { $tmp444 };
            int64_t $tmp446 = $tmp440.max.value;
            bool $tmp447 = $tmp440.inclusive.value;
            if ($tmp447) goto $l454; else goto $l455;
            $l454:;
            if ($tmp444 <= $tmp446) goto $l448; else goto $l450;
            $l455:;
            if ($tmp444 < $tmp446) goto $l448; else goto $l450;
            $l448:;
            {
                panda$core$Object* $tmp457 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i443);
                org$pandalanguage$pandac$Type* $tmp458 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp457), p_types);
                child456 = $tmp458;
                panda$core$MutableString$append$panda$core$String(name432, separator436);
                panda$core$MutableString$append$panda$core$String(name432, ((org$pandalanguage$pandac$Symbol*) child456)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped429, ((panda$core$Object*) child456));
                separator436 = &$s459;
            }
            $l451:;
            int64_t $tmp461 = $tmp446 - i443.value;
            if ($tmp447) goto $l462; else goto $l463;
            $l462:;
            if ($tmp461 >= 1) goto $l460; else goto $l450;
            $l463:;
            if ($tmp461 > 1) goto $l460; else goto $l450;
            $l460:;
            i443.value += 1;
            goto $l448;
            $l450:;
            panda$core$Bit $tmp466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
            if ($tmp466.value) {
            {
                panda$core$MutableString$append$panda$core$String(name432, &$s467);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(name432, &$s468);
            }
            }
            panda$core$Int64 $tmp469 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp470 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp469, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp471 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp470);
            org$pandalanguage$pandac$Type* $tmp472 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp473 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp471), $tmp472);
            if ($tmp473.value) {
            {
                panda$core$Int64 $tmp475 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp476 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp475, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp477 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp476);
                org$pandalanguage$pandac$Type* $tmp478 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp477), p_types);
                child474 = $tmp478;
                panda$core$MutableString$append$panda$core$String(name432, ((org$pandalanguage$pandac$Symbol*) child474)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped429, ((panda$core$Object*) child474));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp479 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                panda$collections$Array$add$panda$collections$Array$T(remapped429, ((panda$core$Object*) $tmp479));
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp480, ((panda$core$UInt8) { 41 }));
            panda$core$MutableString$append$panda$core$Char8(name432, $tmp480);
            org$pandalanguage$pandac$Type* $tmp481 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp481->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp481->refCount.value = 1;
            panda$core$String* $tmp483 = panda$core$MutableString$finish$R$panda$core$String(name432);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp481, $tmp483, self->typeKind, self->position, ((panda$collections$ListView*) remapped429), self->resolved);
            return $tmp481;
        }
        break;
        default:
        {
            return self;
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp484 = panda$core$String$hash$R$panda$core$Int64(self->name);
    return $tmp484;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    return self->name;
}

