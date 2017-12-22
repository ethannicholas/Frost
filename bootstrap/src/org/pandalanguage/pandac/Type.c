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

typedef panda$collections$Iterator* (*$fn30)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn36)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn42)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x3c", 11, 184897716878203264, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 6054680304062974916, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };

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
    org$pandalanguage$pandac$Type* $tmp242 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp243 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp242);
    if ($tmp243.value) {
    {
        org$pandalanguage$pandac$Type* $tmp244 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
        panda$collections$Array$add$panda$collections$Array$T(children235, ((panda$core$Object*) $tmp244));
    }
    }
    else {
    org$pandalanguage$pandac$Type* $tmp245 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp246 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp245);
    if ($tmp246.value) {
    {
        org$pandalanguage$pandac$Type* $tmp247 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
        panda$collections$Array$add$panda$collections$Array$T(children235, ((panda$core$Object*) $tmp247));
    }
    }
    else {
    org$pandalanguage$pandac$Type* $tmp248 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp249 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp248);
    if ($tmp249.value) {
    {
        org$pandalanguage$pandac$Type* $tmp250 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
        panda$collections$Array$add$panda$collections$Array$T(children235, ((panda$core$Object*) $tmp250));
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp251 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
        panda$collections$Array$add$panda$collections$Array$T(children235, ((panda$core$Object*) $tmp251));
    }
    }
    }
    }
    org$pandalanguage$pandac$Type* $tmp252 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp252->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp252->refCount.value = 1;
    panda$core$String* $tmp255 = panda$core$String$convert$R$panda$core$String(&$s254);
    panda$core$String* $tmp257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp255, &$s256);
    panda$core$String* $tmp258 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp257, ((panda$core$Object*) p_t));
    panda$core$String* $tmp260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp258, &$s259);
    org$pandalanguage$pandac$Type* $tmp261 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
    panda$core$String* $tmp262 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp260, ((panda$core$Object*) $tmp261));
    panda$core$String* $tmp264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp262, &$s263);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp252, $tmp264, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children235), p_t->resolved);
    return $tmp252;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp268;
    org$pandalanguage$pandac$Type* $tmp265 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp265->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp265->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp268);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp265, &$s267, ((panda$core$Int64) { 16 }), $tmp268, ((panda$core$Bit) { true }));
    return $tmp265;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp272;
    org$pandalanguage$pandac$Type* $tmp269 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp269->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp269->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp272);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp269, &$s271, ((panda$core$Int64) { 16 }), $tmp272, ((panda$core$Bit) { true }));
    return $tmp269;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp278 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s277);
    bool $tmp276 = $tmp278.value;
    if ($tmp276) goto $l279;
    panda$core$Bit $tmp281 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s280);
    $tmp276 = $tmp281.value;
    $l279:;
    panda$core$Bit $tmp282 = { $tmp276 };
    bool $tmp275 = $tmp282.value;
    if ($tmp275) goto $l283;
    panda$core$Bit $tmp285 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s284);
    $tmp275 = $tmp285.value;
    $l283:;
    panda$core$Bit $tmp286 = { $tmp275 };
    bool $tmp274 = $tmp286.value;
    if ($tmp274) goto $l287;
    panda$core$Bit $tmp288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp274 = $tmp288.value;
    $l287:;
    panda$core$Bit $tmp289 = { $tmp274 };
    bool $tmp273 = $tmp289.value;
    if ($tmp273) goto $l290;
    panda$core$Bit $tmp291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
    $tmp273 = $tmp291.value;
    $l290:;
    panda$core$Bit $tmp292 = { $tmp273 };
    return $tmp292;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp295 = $tmp296.value;
    if ($tmp295) goto $l297;
    panda$core$Bit $tmp298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp295 = $tmp298.value;
    $l297:;
    panda$core$Bit $tmp299 = { $tmp295 };
    bool $tmp294 = $tmp299.value;
    if ($tmp294) goto $l300;
    panda$core$Bit $tmp301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 20 }));
    $tmp294 = $tmp301.value;
    $l300:;
    panda$core$Bit $tmp302 = { $tmp294 };
    bool $tmp293 = $tmp302.value;
    if ($tmp293) goto $l303;
    panda$core$Bit $tmp304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp293 = $tmp304.value;
    $l303:;
    panda$core$Bit $tmp305 = { $tmp293 };
    return $tmp305;
}
panda$core$Bit org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
    bool $tmp306 = $tmp307.value;
    if ($tmp306) goto $l308;
    panda$core$Bit $tmp310 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s309);
    $tmp306 = $tmp310.value;
    $l308:;
    panda$core$Bit $tmp311 = { $tmp306 };
    return $tmp311;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp313 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s312);
    return $tmp313;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp315 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp314 = $tmp315.value;
    if ($tmp314) goto $l316;
    panda$core$Bit $tmp317 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(self);
    $tmp314 = $tmp317.value;
    $l316:;
    panda$core$Bit $tmp318 = { $tmp314 };
    return $tmp318;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $match$371_13319;
    {
        $match$371_13319 = self->typeKind;
        panda$core$Bit $tmp323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$371_13319, ((panda$core$Int64) { 10 }));
        bool $tmp322 = $tmp323.value;
        if ($tmp322) goto $l324;
        panda$core$Bit $tmp325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$371_13319, ((panda$core$Int64) { 11 }));
        $tmp322 = $tmp325.value;
        $l324:;
        panda$core$Bit $tmp326 = { $tmp322 };
        bool $tmp321 = $tmp326.value;
        if ($tmp321) goto $l327;
        panda$core$Bit $tmp328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$371_13319, ((panda$core$Int64) { 21 }));
        $tmp321 = $tmp328.value;
        $l327:;
        panda$core$Bit $tmp329 = { $tmp321 };
        bool $tmp320 = $tmp329.value;
        if ($tmp320) goto $l330;
        panda$core$Bit $tmp331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$371_13319, ((panda$core$Int64) { 22 }));
        $tmp320 = $tmp331.value;
        $l330:;
        panda$core$Bit $tmp332 = { $tmp320 };
        if ($tmp332.value) {
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
    panda$core$Bit $tmp334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp333 = $tmp334.value;
    if ($tmp333) goto $l335;
    panda$core$Bit $tmp336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
    $tmp333 = $tmp336.value;
    $l335:;
    panda$core$Bit $tmp337 = { $tmp333 };
    return $tmp337;
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp339 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s338);
    return $tmp339;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp340.value) {
    {
        panda$core$Object* $tmp341 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp342 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp341));
        return $tmp342;
    }
    }
    panda$core$Bit $tmp344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp343 = $tmp344.value;
    if (!$tmp343) goto $l345;
    panda$core$Object* $tmp346 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp348 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp346))->name, &$s347);
    $tmp343 = $tmp348.value;
    $l345:;
    panda$core$Bit $tmp349 = { $tmp343 };
    return $tmp349;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp350.value) {
    {
        panda$core$Object* $tmp351 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp352 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp351));
        return $tmp352;
    }
    }
    panda$core$Bit $tmp354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp353 = $tmp354.value;
    if (!$tmp353) goto $l355;
    panda$core$Object* $tmp356 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp358 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp356))->name, &$s357);
    $tmp353 = $tmp358.value;
    $l355:;
    panda$core$Bit $tmp359 = { $tmp353 };
    return $tmp359;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$collections$Array* subtypes361;
    org$pandalanguage$pandac$Position $tmp369;
    panda$core$Bit $tmp360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp360.value) {
    {
        return self;
    }
    }
    panda$collections$Array* $tmp362 = (panda$collections$Array*) malloc(40);
    $tmp362->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp362->refCount.value = 1;
    panda$collections$Array$init($tmp362);
    subtypes361 = $tmp362;
    panda$collections$Array$add$panda$collections$Array$T(subtypes361, ((panda$core$Object*) self));
    org$pandalanguage$pandac$Type* $tmp364 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp364->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp364->refCount.value = 1;
    panda$core$String* $tmp366 = panda$core$String$convert$R$panda$core$String(self->name);
    panda$core$String* $tmp368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp366, &$s367);
    org$pandalanguage$pandac$Position$init(&$tmp369);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp364, $tmp368, ((panda$core$Int64) { 11 }), $tmp369, ((panda$collections$ListView*) subtypes361), ((panda$core$Bit) { true }));
    return $tmp364;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp370 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp370.value) {
    {
        return self;
    }
    }
    panda$core$Object* $tmp371 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    return ((org$pandalanguage$pandac$Type*) $tmp371);
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_other) {
    org$pandalanguage$pandac$Type* t1421;
    org$pandalanguage$pandac$Type* t2423;
    panda$collections$Set* ancestors430;
    org$pandalanguage$pandac$Type* t433;
    org$pandalanguage$pandac$ClassDecl* cl434;
    panda$core$Bit $tmp372 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
    if ($tmp372.value) {
    {
        return self;
    }
    }
    org$pandalanguage$pandac$Type* $tmp373 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp374 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp373);
    if ($tmp374.value) {
    {
        panda$core$Bit $tmp375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp375.value) {
        {
            return p_other;
        }
        }
        org$pandalanguage$pandac$Type* $tmp376 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
        return $tmp376;
    }
    }
    org$pandalanguage$pandac$Type* $tmp377 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp378 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp377);
    if ($tmp378.value) {
    {
        panda$core$Bit $tmp379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp379.value) {
        {
            return self;
        }
        }
        org$pandalanguage$pandac$Type* $tmp380 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
        return $tmp380;
    }
    }
    panda$core$Bit $tmp382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp381 = $tmp382.value;
    if (!$tmp381) goto $l383;
    panda$core$Bit $tmp384 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
    $tmp381 = $tmp384.value;
    $l383:;
    panda$core$Bit $tmp385 = { $tmp381 };
    if ($tmp385.value) {
    {
        return p_other;
    }
    }
    panda$core$Bit $tmp387 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp386 = $tmp387.value;
    if (!$tmp386) goto $l388;
    panda$core$Bit $tmp389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 15 }));
    $tmp386 = $tmp389.value;
    $l388:;
    panda$core$Bit $tmp390 = { $tmp386 };
    if ($tmp390.value) {
    {
        return self;
    }
    }
    panda$core$Bit $tmp391 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
    if ($tmp391.value) {
    {
        panda$core$Bit $tmp393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 15 }));
        bool $tmp392 = $tmp393.value;
        if ($tmp392) goto $l394;
        panda$core$Bit $tmp395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 26 }));
        $tmp392 = $tmp395.value;
        $l394:;
        panda$core$Bit $tmp396 = { $tmp392 };
        if ($tmp396.value) {
        {
            return self;
        }
        }
        panda$core$Bit $tmp397 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        if ($tmp397.value) {
        {
            panda$core$Bit $tmp399 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s398);
            if ($tmp399.value) {
            {
                org$pandalanguage$pandac$Type* $tmp400 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                return $tmp400;
            }
            }
            org$pandalanguage$pandac$Type* $tmp401 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
            return $tmp401;
        }
        }
    }
    }
    panda$core$Bit $tmp402 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
    if ($tmp402.value) {
    {
        panda$core$Bit $tmp404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
        bool $tmp403 = $tmp404.value;
        if ($tmp403) goto $l405;
        panda$core$Bit $tmp406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
        $tmp403 = $tmp406.value;
        $l405:;
        panda$core$Bit $tmp407 = { $tmp403 };
        if ($tmp407.value) {
        {
            return p_other;
        }
        }
        panda$core$Bit $tmp408 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        if ($tmp408.value) {
        {
            panda$core$Bit $tmp410 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s409);
            if ($tmp410.value) {
            {
                org$pandalanguage$pandac$Type* $tmp411 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                return $tmp411;
            }
            }
            org$pandalanguage$pandac$Type* $tmp412 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
            return $tmp412;
        }
        }
    }
    }
    panda$core$Bit $tmp413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp413.value) {
    {
        panda$core$Object* $tmp414 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp415 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp414), p_compiler, p_other);
        org$pandalanguage$pandac$Type* $tmp416 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp415);
        return $tmp416;
    }
    }
    panda$core$Bit $tmp417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp417.value) {
    {
        panda$core$Object* $tmp418 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp419 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_compiler, ((org$pandalanguage$pandac$Type*) $tmp418));
        org$pandalanguage$pandac$Type* $tmp420 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp419);
        return $tmp420;
    }
    }
    org$pandalanguage$pandac$Type* $tmp422 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self);
    t1421 = $tmp422;
    org$pandalanguage$pandac$Type* $tmp424 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_other);
    t2423 = $tmp424;
    panda$core$Bit $tmp426 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t1421);
    bool $tmp425 = $tmp426.value;
    if (!$tmp425) goto $l427;
    panda$core$Bit $tmp428 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t2423);
    $tmp425 = $tmp428.value;
    $l427:;
    panda$core$Bit $tmp429 = { $tmp425 };
    if ($tmp429.value) {
    {
        panda$collections$Set* $tmp431 = (panda$collections$Set*) malloc(24);
        $tmp431->$class = (panda$core$Class*) &panda$collections$Set$class;
        $tmp431->refCount.value = 1;
        panda$collections$Set$init($tmp431);
        ancestors430 = $tmp431;
        t433 = self;
        org$pandalanguage$pandac$ClassDecl* $tmp435 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1421);
        cl434 = $tmp435;
        $l436:;
        if (!((panda$core$Bit) { cl434 != NULL }).value) goto $l437;
        {
            panda$collections$Set$add$panda$collections$Set$T(ancestors430, ((panda$collections$Key*) t433));
            if (((panda$core$Bit) { cl434->rawSuper != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp438 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t433, cl434->rawSuper);
                t433 = $tmp438;
                org$pandalanguage$pandac$ClassDecl* $tmp439 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t433);
                cl434 = $tmp439;
            }
            }
            else {
            {
                cl434 = NULL;
            }
            }
        }
        goto $l436;
        $l437:;
        t433 = p_other;
        org$pandalanguage$pandac$ClassDecl* $tmp440 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t2423);
        cl434 = $tmp440;
        $l441:;
        if (!((panda$core$Bit) { cl434 != NULL }).value) goto $l442;
        {
            panda$core$Bit $tmp443 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(ancestors430, ((panda$collections$Key*) t433));
            if ($tmp443.value) {
            {
                return t433;
            }
            }
            if (((panda$core$Bit) { cl434->rawSuper != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp444 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t433, cl434->rawSuper);
                t433 = $tmp444;
                org$pandalanguage$pandac$ClassDecl* $tmp445 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t433);
                cl434 = $tmp445;
            }
            }
            else {
            {
                cl434 = NULL;
            }
            }
        }
        goto $l441;
        $l442:;
    }
    }
    org$pandalanguage$pandac$Type* $tmp446 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    return $tmp446;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    panda$core$Int64 $match$506_13449;
    org$pandalanguage$pandac$Type* found451;
    panda$collections$Array* remapped454;
    panda$core$MutableString* name457;
    panda$core$Char8 $tmp461;
    panda$core$String* separator462;
    panda$core$Range$LTpanda$core$Int64$GT $tmp464;
    org$pandalanguage$pandac$Type* child479;
    panda$core$Char8 $tmp490;
    panda$collections$Array* remapped503;
    panda$core$MutableString* name506;
    panda$core$String* separator510;
    panda$core$Range$LTpanda$core$Int64$GT $tmp514;
    org$pandalanguage$pandac$Type* child530;
    org$pandalanguage$pandac$Type* child548;
    panda$core$Char8 $tmp554;
    panda$core$Int64 $tmp447 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp447, ((panda$core$Int64) { 0 }));
    if ($tmp448.value) {
    {
        return self;
    }
    }
    {
        $match$506_13449 = self->typeKind;
        panda$core$Bit $tmp450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_13449, ((panda$core$Int64) { 22 }));
        if ($tmp450.value) {
        {
            panda$core$Object* $tmp452 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
            found451 = ((org$pandalanguage$pandac$Type*) $tmp452);
            if (((panda$core$Bit) { found451 != NULL }).value) {
            {
                return found451;
            }
            }
            return self;
        }
        }
        else {
        panda$core$Bit $tmp453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_13449, ((panda$core$Int64) { 21 }));
        if ($tmp453.value) {
        {
            panda$collections$Array* $tmp455 = (panda$collections$Array*) malloc(40);
            $tmp455->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp455->refCount.value = 1;
            panda$collections$Array$init($tmp455);
            remapped454 = $tmp455;
            panda$core$MutableString* $tmp458 = (panda$core$MutableString*) malloc(48);
            $tmp458->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp458->refCount.value = 1;
            panda$core$Object* $tmp460 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp458, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp460))->name);
            name457 = $tmp458;
            panda$core$Char8$init$panda$core$UInt8(&$tmp461, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(name457, $tmp461);
            separator462 = &$s463;
            panda$core$Int64 $tmp465 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp464, ((panda$core$Int64) { 0 }), $tmp465, ((panda$core$Bit) { false }));
            int64_t $tmp467 = $tmp464.min.value;
            panda$core$Int64 i466 = { $tmp467 };
            int64_t $tmp469 = $tmp464.max.value;
            bool $tmp470 = $tmp464.inclusive.value;
            if ($tmp470) goto $l477; else goto $l478;
            $l477:;
            if ($tmp467 <= $tmp469) goto $l471; else goto $l473;
            $l478:;
            if ($tmp467 < $tmp469) goto $l471; else goto $l473;
            $l471:;
            {
                panda$core$Object* $tmp480 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i466);
                org$pandalanguage$pandac$Type* $tmp481 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp480), p_types);
                child479 = $tmp481;
                panda$collections$Array$add$panda$collections$Array$T(remapped454, ((panda$core$Object*) child479));
                panda$core$Bit $tmp482 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i466, ((panda$core$Int64) { 0 }));
                if ($tmp482.value) {
                {
                    panda$core$MutableString$append$panda$core$String(name457, separator462);
                    panda$core$MutableString$append$panda$core$String(name457, ((org$pandalanguage$pandac$Symbol*) child479)->name);
                    separator462 = &$s483;
                }
                }
            }
            $l474:;
            int64_t $tmp485 = $tmp469 - i466.value;
            if ($tmp470) goto $l486; else goto $l487;
            $l486:;
            if ((uint64_t) $tmp485 >= 1) goto $l484; else goto $l473;
            $l487:;
            if ((uint64_t) $tmp485 > 1) goto $l484; else goto $l473;
            $l484:;
            i466.value += 1;
            goto $l471;
            $l473:;
            panda$core$Char8$init$panda$core$UInt8(&$tmp490, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name457, $tmp490);
            org$pandalanguage$pandac$Type* $tmp491 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp491->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp491->refCount.value = 1;
            panda$core$String* $tmp493 = panda$core$MutableString$finish$R$panda$core$String(name457);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp491, $tmp493, ((panda$core$Int64) { 21 }), self->position, ((panda$collections$ListView*) remapped454), self->resolved);
            return $tmp491;
        }
        }
        else {
        panda$core$Bit $tmp494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_13449, ((panda$core$Int64) { 11 }));
        if ($tmp494.value) {
        {
            panda$core$Object* $tmp495 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp496 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp495), p_types);
            org$pandalanguage$pandac$Type* $tmp497 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp496);
            return $tmp497;
        }
        }
        else {
        panda$core$Bit $tmp499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_13449, ((panda$core$Int64) { 25 }));
        bool $tmp498 = $tmp499.value;
        if ($tmp498) goto $l500;
        panda$core$Bit $tmp501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_13449, ((panda$core$Int64) { 24 }));
        $tmp498 = $tmp501.value;
        $l500:;
        panda$core$Bit $tmp502 = { $tmp498 };
        if ($tmp502.value) {
        {
            panda$collections$Array* $tmp504 = (panda$collections$Array*) malloc(40);
            $tmp504->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp504->refCount.value = 1;
            panda$collections$Array$init($tmp504);
            remapped503 = $tmp504;
            panda$core$MutableString* $tmp507 = (panda$core$MutableString*) malloc(48);
            $tmp507->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp507->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp507, &$s509);
            name506 = $tmp507;
            separator510 = &$s511;
            panda$core$Int64 $tmp512 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Bit $tmp513 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp512, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp513.value);
            panda$core$Int64 $tmp515 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp516 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp515, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp514, ((panda$core$Int64) { 0 }), $tmp516, ((panda$core$Bit) { false }));
            int64_t $tmp518 = $tmp514.min.value;
            panda$core$Int64 i517 = { $tmp518 };
            int64_t $tmp520 = $tmp514.max.value;
            bool $tmp521 = $tmp514.inclusive.value;
            if ($tmp521) goto $l528; else goto $l529;
            $l528:;
            if ($tmp518 <= $tmp520) goto $l522; else goto $l524;
            $l529:;
            if ($tmp518 < $tmp520) goto $l522; else goto $l524;
            $l522:;
            {
                panda$core$Object* $tmp531 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i517);
                org$pandalanguage$pandac$Type* $tmp532 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp531), p_types);
                child530 = $tmp532;
                panda$core$MutableString$append$panda$core$String(name506, separator510);
                panda$core$MutableString$append$panda$core$String(name506, ((org$pandalanguage$pandac$Symbol*) child530)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped503, ((panda$core$Object*) child530));
                separator510 = &$s533;
            }
            $l525:;
            int64_t $tmp535 = $tmp520 - i517.value;
            if ($tmp521) goto $l536; else goto $l537;
            $l536:;
            if ((uint64_t) $tmp535 >= 1) goto $l534; else goto $l524;
            $l537:;
            if ((uint64_t) $tmp535 > 1) goto $l534; else goto $l524;
            $l534:;
            i517.value += 1;
            goto $l522;
            $l524:;
            panda$core$Bit $tmp540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
            if ($tmp540.value) {
            {
                panda$core$MutableString$append$panda$core$String(name506, &$s541);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(name506, &$s542);
            }
            }
            panda$core$Int64 $tmp543 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp544 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp543, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp545 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp544);
            org$pandalanguage$pandac$Type* $tmp546 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp547 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp545), $tmp546);
            if ($tmp547.value) {
            {
                panda$core$Int64 $tmp549 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp550 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp549, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp551 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp550);
                org$pandalanguage$pandac$Type* $tmp552 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp551), p_types);
                child548 = $tmp552;
                panda$core$MutableString$append$panda$core$String(name506, ((org$pandalanguage$pandac$Symbol*) child548)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped503, ((panda$core$Object*) child548));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp553 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                panda$collections$Array$add$panda$collections$Array$T(remapped503, ((panda$core$Object*) $tmp553));
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp554, ((panda$core$UInt8) { 41 }));
            panda$core$MutableString$append$panda$core$Char8(name506, $tmp554);
            org$pandalanguage$pandac$Type* $tmp555 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp555->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp555->refCount.value = 1;
            panda$core$String* $tmp557 = panda$core$MutableString$finish$R$panda$core$String(name506);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp555, $tmp557, self->typeKind, self->position, ((panda$collections$ListView*) remapped503), self->resolved);
            return $tmp555;
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
    panda$core$Int64 $tmp558 = panda$core$String$hash$R$panda$core$Int64(self->name);
    return $tmp558;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    return self->name;
}

