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
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x76\x61\x6C\x69\x64\x3E", 9, 1754774734872970466, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x65\x61\x6C", 15, 1602004586448770858, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x65\x61\x6C", 15, 1602004586448770858, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 164, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 146931305, NULL };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 14839819243, NULL };

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
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp268;
    org$pandalanguage$pandac$Type* $tmp265 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp265->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp265->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp268);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp265, &$s267, ((panda$core$Int64) { 16 }), $tmp268, ((panda$core$Bit) { true }));
    return $tmp265;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp274 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s273);
    bool $tmp272 = $tmp274.value;
    if ($tmp272) goto $l275;
    panda$core$Bit $tmp277 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s276);
    $tmp272 = $tmp277.value;
    $l275:;
    panda$core$Bit $tmp278 = { $tmp272 };
    bool $tmp271 = $tmp278.value;
    if ($tmp271) goto $l279;
    panda$core$Bit $tmp281 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s280);
    $tmp271 = $tmp281.value;
    $l279:;
    panda$core$Bit $tmp282 = { $tmp271 };
    bool $tmp270 = $tmp282.value;
    if ($tmp270) goto $l283;
    panda$core$Bit $tmp284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp270 = $tmp284.value;
    $l283:;
    panda$core$Bit $tmp285 = { $tmp270 };
    bool $tmp269 = $tmp285.value;
    if ($tmp269) goto $l286;
    panda$core$Bit $tmp287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
    $tmp269 = $tmp287.value;
    $l286:;
    panda$core$Bit $tmp288 = { $tmp269 };
    return $tmp288;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp291 = $tmp292.value;
    if ($tmp291) goto $l293;
    panda$core$Bit $tmp294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp291 = $tmp294.value;
    $l293:;
    panda$core$Bit $tmp295 = { $tmp291 };
    bool $tmp290 = $tmp295.value;
    if ($tmp290) goto $l296;
    panda$core$Bit $tmp297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 20 }));
    $tmp290 = $tmp297.value;
    $l296:;
    panda$core$Bit $tmp298 = { $tmp290 };
    bool $tmp289 = $tmp298.value;
    if ($tmp289) goto $l299;
    panda$core$Bit $tmp300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp289 = $tmp300.value;
    $l299:;
    panda$core$Bit $tmp301 = { $tmp289 };
    return $tmp301;
}
panda$core$Bit org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
    bool $tmp302 = $tmp303.value;
    if ($tmp302) goto $l304;
    panda$core$Bit $tmp306 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s305);
    $tmp302 = $tmp306.value;
    $l304:;
    panda$core$Bit $tmp307 = { $tmp302 };
    return $tmp307;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp309 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s308);
    return $tmp309;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp311 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp310 = $tmp311.value;
    if ($tmp310) goto $l312;
    panda$core$Bit $tmp313 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(self);
    $tmp310 = $tmp313.value;
    $l312:;
    panda$core$Bit $tmp314 = { $tmp310 };
    return $tmp314;
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
    panda$core$Bit $tmp316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp315 = $tmp316.value;
    if ($tmp315) goto $l317;
    panda$core$Bit $tmp318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
    $tmp315 = $tmp318.value;
    $l317:;
    panda$core$Bit $tmp319 = { $tmp315 };
    return $tmp319;
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp321 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s320);
    return $tmp321;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp322.value) {
    {
        panda$core$Object* $tmp323 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp324 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp323));
        return $tmp324;
    }
    }
    panda$core$Bit $tmp326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp325 = $tmp326.value;
    if (!$tmp325) goto $l327;
    panda$core$Object* $tmp328 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp330 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp328))->name, &$s329);
    $tmp325 = $tmp330.value;
    $l327:;
    panda$core$Bit $tmp331 = { $tmp325 };
    return $tmp331;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp332.value) {
    {
        panda$core$Object* $tmp333 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp334 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp333));
        return $tmp334;
    }
    }
    panda$core$Bit $tmp336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp335 = $tmp336.value;
    if (!$tmp335) goto $l337;
    panda$core$Object* $tmp338 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp340 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp338))->name, &$s339);
    $tmp335 = $tmp340.value;
    $l337:;
    panda$core$Bit $tmp341 = { $tmp335 };
    return $tmp341;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$collections$Array* subtypes343;
    org$pandalanguage$pandac$Position $tmp351;
    panda$core$Bit $tmp342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp342.value) {
    {
        return self;
    }
    }
    panda$collections$Array* $tmp344 = (panda$collections$Array*) malloc(40);
    $tmp344->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp344->refCount.value = 1;
    panda$collections$Array$init($tmp344);
    subtypes343 = $tmp344;
    panda$collections$Array$add$panda$collections$Array$T(subtypes343, ((panda$core$Object*) self));
    org$pandalanguage$pandac$Type* $tmp346 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp346->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp346->refCount.value = 1;
    panda$core$String* $tmp348 = panda$core$String$convert$R$panda$core$String(self->name);
    panda$core$String* $tmp350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp348, &$s349);
    org$pandalanguage$pandac$Position$init(&$tmp351);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp346, $tmp350, ((panda$core$Int64) { 11 }), $tmp351, ((panda$collections$ListView*) subtypes343), ((panda$core$Bit) { true }));
    return $tmp346;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp352 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp352.value) {
    {
        return self;
    }
    }
    panda$core$Object* $tmp353 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    return ((org$pandalanguage$pandac$Type*) $tmp353);
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_other) {
    org$pandalanguage$pandac$Type* t1403;
    org$pandalanguage$pandac$Type* t2405;
    panda$collections$Set* ancestors412;
    org$pandalanguage$pandac$Type* t415;
    org$pandalanguage$pandac$ClassDecl* cl416;
    panda$core$Bit $tmp354 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
    if ($tmp354.value) {
    {
        return self;
    }
    }
    org$pandalanguage$pandac$Type* $tmp355 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp356 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp355);
    if ($tmp356.value) {
    {
        panda$core$Bit $tmp357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp357.value) {
        {
            return p_other;
        }
        }
        org$pandalanguage$pandac$Type* $tmp358 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
        return $tmp358;
    }
    }
    org$pandalanguage$pandac$Type* $tmp359 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp360 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp359);
    if ($tmp360.value) {
    {
        panda$core$Bit $tmp361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp361.value) {
        {
            return self;
        }
        }
        org$pandalanguage$pandac$Type* $tmp362 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
        return $tmp362;
    }
    }
    panda$core$Bit $tmp364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp363 = $tmp364.value;
    if (!$tmp363) goto $l365;
    panda$core$Bit $tmp366 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
    $tmp363 = $tmp366.value;
    $l365:;
    panda$core$Bit $tmp367 = { $tmp363 };
    if ($tmp367.value) {
    {
        return p_other;
    }
    }
    panda$core$Bit $tmp369 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp368 = $tmp369.value;
    if (!$tmp368) goto $l370;
    panda$core$Bit $tmp371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 15 }));
    $tmp368 = $tmp371.value;
    $l370:;
    panda$core$Bit $tmp372 = { $tmp368 };
    if ($tmp372.value) {
    {
        return self;
    }
    }
    panda$core$Bit $tmp373 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
    if ($tmp373.value) {
    {
        panda$core$Bit $tmp375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 15 }));
        bool $tmp374 = $tmp375.value;
        if ($tmp374) goto $l376;
        panda$core$Bit $tmp377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 26 }));
        $tmp374 = $tmp377.value;
        $l376:;
        panda$core$Bit $tmp378 = { $tmp374 };
        if ($tmp378.value) {
        {
            return self;
        }
        }
        panda$core$Bit $tmp379 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        if ($tmp379.value) {
        {
            panda$core$Bit $tmp381 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s380);
            if ($tmp381.value) {
            {
                org$pandalanguage$pandac$Type* $tmp382 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                return $tmp382;
            }
            }
            org$pandalanguage$pandac$Type* $tmp383 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
            return $tmp383;
        }
        }
    }
    }
    panda$core$Bit $tmp384 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
    if ($tmp384.value) {
    {
        panda$core$Bit $tmp386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
        bool $tmp385 = $tmp386.value;
        if ($tmp385) goto $l387;
        panda$core$Bit $tmp388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
        $tmp385 = $tmp388.value;
        $l387:;
        panda$core$Bit $tmp389 = { $tmp385 };
        if ($tmp389.value) {
        {
            return p_other;
        }
        }
        panda$core$Bit $tmp390 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        if ($tmp390.value) {
        {
            panda$core$Bit $tmp392 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s391);
            if ($tmp392.value) {
            {
                org$pandalanguage$pandac$Type* $tmp393 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                return $tmp393;
            }
            }
            org$pandalanguage$pandac$Type* $tmp394 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
            return $tmp394;
        }
        }
    }
    }
    panda$core$Bit $tmp395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp395.value) {
    {
        panda$core$Object* $tmp396 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp397 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp396), p_compiler, p_other);
        org$pandalanguage$pandac$Type* $tmp398 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp397);
        return $tmp398;
    }
    }
    panda$core$Bit $tmp399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp399.value) {
    {
        panda$core$Object* $tmp400 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp401 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_compiler, ((org$pandalanguage$pandac$Type*) $tmp400));
        org$pandalanguage$pandac$Type* $tmp402 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp401);
        return $tmp402;
    }
    }
    org$pandalanguage$pandac$Type* $tmp404 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self);
    t1403 = $tmp404;
    org$pandalanguage$pandac$Type* $tmp406 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_other);
    t2405 = $tmp406;
    panda$core$Bit $tmp408 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t1403);
    bool $tmp407 = $tmp408.value;
    if (!$tmp407) goto $l409;
    panda$core$Bit $tmp410 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t2405);
    $tmp407 = $tmp410.value;
    $l409:;
    panda$core$Bit $tmp411 = { $tmp407 };
    if ($tmp411.value) {
    {
        panda$collections$Set* $tmp413 = (panda$collections$Set*) malloc(24);
        $tmp413->$class = (panda$core$Class*) &panda$collections$Set$class;
        $tmp413->refCount.value = 1;
        panda$collections$Set$init($tmp413);
        ancestors412 = $tmp413;
        t415 = self;
        org$pandalanguage$pandac$ClassDecl* $tmp417 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1403);
        cl416 = $tmp417;
        $l418:;
        if (!((panda$core$Bit) { cl416 != NULL }).value) goto $l419;
        {
            panda$collections$Set$add$panda$collections$Set$T(ancestors412, ((panda$collections$Key*) t415));
            if (((panda$core$Bit) { cl416->rawSuper != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp420 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t415, cl416->rawSuper);
                t415 = $tmp420;
                org$pandalanguage$pandac$ClassDecl* $tmp421 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t415);
                cl416 = $tmp421;
            }
            }
            else {
            {
                cl416 = NULL;
            }
            }
        }
        goto $l418;
        $l419:;
        t415 = p_other;
        org$pandalanguage$pandac$ClassDecl* $tmp422 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t2405);
        cl416 = $tmp422;
        $l423:;
        if (!((panda$core$Bit) { cl416 != NULL }).value) goto $l424;
        {
            panda$core$Bit $tmp425 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(ancestors412, ((panda$collections$Key*) t415));
            if ($tmp425.value) {
            {
                return t415;
            }
            }
            if (((panda$core$Bit) { cl416->rawSuper != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp426 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t415, cl416->rawSuper);
                t415 = $tmp426;
                org$pandalanguage$pandac$ClassDecl* $tmp427 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t415);
                cl416 = $tmp427;
            }
            }
            else {
            {
                cl416 = NULL;
            }
            }
        }
        goto $l423;
        $l424:;
    }
    }
    org$pandalanguage$pandac$Type* $tmp428 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    return $tmp428;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    org$pandalanguage$pandac$Type* found431;
    panda$collections$Array* remapped433;
    panda$core$MutableString* name436;
    panda$core$Char8 $tmp440;
    panda$core$String* separator441;
    panda$core$Range$LTpanda$core$Int64$GT $tmp443;
    org$pandalanguage$pandac$Type* child458;
    panda$core$Char8 $tmp469;
    panda$collections$Array* remapped476;
    panda$core$MutableString* name479;
    panda$core$String* separator483;
    panda$core$Range$LTpanda$core$Int64$GT $tmp487;
    org$pandalanguage$pandac$Type* child503;
    org$pandalanguage$pandac$Type* child521;
    panda$core$Char8 $tmp527;
    panda$core$Int64 $tmp429 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp429, ((panda$core$Int64) { 0 }));
    if ($tmp430.value) {
    {
        return self;
    }
    }
    switch (self->typeKind.value) {
        case 22:
        {
            panda$core$Object* $tmp432 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
            found431 = ((org$pandalanguage$pandac$Type*) $tmp432);
            if (((panda$core$Bit) { found431 != NULL }).value) {
            {
                return found431;
            }
            }
            return self;
        }
        break;
        case 21:
        {
            panda$collections$Array* $tmp434 = (panda$collections$Array*) malloc(40);
            $tmp434->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp434->refCount.value = 1;
            panda$collections$Array$init($tmp434);
            remapped433 = $tmp434;
            panda$core$MutableString* $tmp437 = (panda$core$MutableString*) malloc(48);
            $tmp437->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp437->refCount.value = 1;
            panda$core$Object* $tmp439 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp437, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp439))->name);
            name436 = $tmp437;
            panda$core$Char8$init$panda$core$UInt8(&$tmp440, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(name436, $tmp440);
            separator441 = &$s442;
            panda$core$Int64 $tmp444 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp443, ((panda$core$Int64) { 0 }), $tmp444, ((panda$core$Bit) { false }));
            int64_t $tmp446 = $tmp443.min.value;
            panda$core$Int64 i445 = { $tmp446 };
            int64_t $tmp448 = $tmp443.max.value;
            bool $tmp449 = $tmp443.inclusive.value;
            if ($tmp449) goto $l456; else goto $l457;
            $l456:;
            if ($tmp446 <= $tmp448) goto $l450; else goto $l452;
            $l457:;
            if ($tmp446 < $tmp448) goto $l450; else goto $l452;
            $l450:;
            {
                panda$core$Object* $tmp459 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i445);
                org$pandalanguage$pandac$Type* $tmp460 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp459), p_types);
                child458 = $tmp460;
                panda$collections$Array$add$panda$collections$Array$T(remapped433, ((panda$core$Object*) child458));
                panda$core$Bit $tmp461 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i445, ((panda$core$Int64) { 0 }));
                if ($tmp461.value) {
                {
                    panda$core$MutableString$append$panda$core$String(name436, separator441);
                    panda$core$MutableString$append$panda$core$String(name436, ((org$pandalanguage$pandac$Symbol*) child458)->name);
                    separator441 = &$s462;
                }
                }
            }
            $l453:;
            int64_t $tmp464 = $tmp448 - i445.value;
            if ($tmp449) goto $l465; else goto $l466;
            $l465:;
            if ($tmp464 >= 1) goto $l463; else goto $l452;
            $l466:;
            if ($tmp464 > 1) goto $l463; else goto $l452;
            $l463:;
            i445.value += 1;
            goto $l450;
            $l452:;
            panda$core$Char8$init$panda$core$UInt8(&$tmp469, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name436, $tmp469);
            org$pandalanguage$pandac$Type* $tmp470 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp470->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp470->refCount.value = 1;
            panda$core$String* $tmp472 = panda$core$MutableString$finish$R$panda$core$String(name436);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp470, $tmp472, ((panda$core$Int64) { 21 }), self->position, ((panda$collections$ListView*) remapped433), self->resolved);
            return $tmp470;
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp473 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp474 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp473), p_types);
            org$pandalanguage$pandac$Type* $tmp475 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp474);
            return $tmp475;
        }
        break;
        case 25:
        case 24:
        {
            panda$collections$Array* $tmp477 = (panda$collections$Array*) malloc(40);
            $tmp477->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp477->refCount.value = 1;
            panda$collections$Array$init($tmp477);
            remapped476 = $tmp477;
            panda$core$MutableString* $tmp480 = (panda$core$MutableString*) malloc(48);
            $tmp480->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp480->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp480, &$s482);
            name479 = $tmp480;
            separator483 = &$s484;
            panda$core$Int64 $tmp485 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Bit $tmp486 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp485, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp486.value);
            panda$core$Int64 $tmp488 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp489 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp488, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp487, ((panda$core$Int64) { 0 }), $tmp489, ((panda$core$Bit) { false }));
            int64_t $tmp491 = $tmp487.min.value;
            panda$core$Int64 i490 = { $tmp491 };
            int64_t $tmp493 = $tmp487.max.value;
            bool $tmp494 = $tmp487.inclusive.value;
            if ($tmp494) goto $l501; else goto $l502;
            $l501:;
            if ($tmp491 <= $tmp493) goto $l495; else goto $l497;
            $l502:;
            if ($tmp491 < $tmp493) goto $l495; else goto $l497;
            $l495:;
            {
                panda$core$Object* $tmp504 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i490);
                org$pandalanguage$pandac$Type* $tmp505 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp504), p_types);
                child503 = $tmp505;
                panda$core$MutableString$append$panda$core$String(name479, separator483);
                panda$core$MutableString$append$panda$core$String(name479, ((org$pandalanguage$pandac$Symbol*) child503)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped476, ((panda$core$Object*) child503));
                separator483 = &$s506;
            }
            $l498:;
            int64_t $tmp508 = $tmp493 - i490.value;
            if ($tmp494) goto $l509; else goto $l510;
            $l509:;
            if ($tmp508 >= 1) goto $l507; else goto $l497;
            $l510:;
            if ($tmp508 > 1) goto $l507; else goto $l497;
            $l507:;
            i490.value += 1;
            goto $l495;
            $l497:;
            panda$core$Bit $tmp513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
            if ($tmp513.value) {
            {
                panda$core$MutableString$append$panda$core$String(name479, &$s514);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(name479, &$s515);
            }
            }
            panda$core$Int64 $tmp516 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp517 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp516, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp518 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp517);
            org$pandalanguage$pandac$Type* $tmp519 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp520 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp518), $tmp519);
            if ($tmp520.value) {
            {
                panda$core$Int64 $tmp522 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp523 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp522, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp524 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp523);
                org$pandalanguage$pandac$Type* $tmp525 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp524), p_types);
                child521 = $tmp525;
                panda$core$MutableString$append$panda$core$String(name479, ((org$pandalanguage$pandac$Symbol*) child521)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped476, ((panda$core$Object*) child521));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp526 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                panda$collections$Array$add$panda$collections$Array$T(remapped476, ((panda$core$Object*) $tmp526));
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp527, ((panda$core$UInt8) { 41 }));
            panda$core$MutableString$append$panda$core$Char8(name479, $tmp527);
            org$pandalanguage$pandac$Type* $tmp528 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp528->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp528->refCount.value = 1;
            panda$core$String* $tmp530 = panda$core$MutableString$finish$R$panda$core$String(name479);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp528, $tmp530, self->typeKind, self->position, ((panda$collections$ListView*) remapped476), self->resolved);
            return $tmp528;
        }
        break;
        default:
        {
            return self;
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp531 = panda$core$String$hash$R$panda$core$Int64(self->name);
    return $tmp531;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    return self->name;
}

