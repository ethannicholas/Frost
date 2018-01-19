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

static panda$core$String $s1;
org$pandalanguage$pandac$Type$class_type org$pandalanguage$pandac$Type$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$core$Equatable, { org$pandalanguage$pandac$Type$convert$R$panda$core$String, org$pandalanguage$pandac$Type$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$Type$size$R$panda$core$Int64, org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit, org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit, org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit, org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit, org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit, org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit, org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$hash$R$panda$core$Int64} };

typedef panda$collections$Iterator* (*$fn31)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn37)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn43)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 29, -3248623696866231612, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x3c", 11, 184897716878203264, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 6054680304062974916, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };

void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, org$pandalanguage$pandac$Position p_position) {
    self->parameter = NULL;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(self, p_name, p_typeKind, p_position, ((panda$core$Bit) { false }));
}
void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_resolved) {
    self->parameter = NULL;
    panda$core$Bit $tmp3 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s2);
    panda$core$Bit $tmp4 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3);
    PANDA_ASSERT($tmp4.value);
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->position = p_position;
    self->resolved = p_resolved;
    {
        self->subtypes = NULL;
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
        self->subtypes = NULL;
    }
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), self->position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, panda$core$Int64 p_typeKind, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_subtypes, panda$core$Bit p_resolved) {
    self->parameter = NULL;
    panda$core$Bit $tmp9 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind, ((panda$core$Int64) { 11 }));
    panda$core$Bit $tmp11 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s10);
    panda$core$Bit $tmp12 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp9, $tmp11);
    PANDA_ASSERT($tmp12.value);
    panda$core$Bit $tmp13 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind, ((panda$core$Int64) { 21 }));
    panda$core$Bit $tmp15 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s14);
    panda$core$Bit $tmp16 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp13, $tmp15);
    PANDA_ASSERT($tmp16.value);
    panda$core$Bit $tmp17 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_typeKind, ((panda$core$Int64) { 22 }));
    PANDA_ASSERT($tmp17.value);
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->position = p_position;
    self->resolved = p_resolved;
    {
        panda$collections$Array* $tmp18 = (panda$collections$Array*) pandaZAlloc(40);
        $tmp18->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp18->refCount.value = 1;
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp18, p_subtypes);
        self->subtypes = $tmp18;
    }
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), p_position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Type* self, panda$collections$ListView* p_subtypes) {
    panda$core$MutableString* name22;
    panda$core$String* separator26;
    panda$collections$Iterator* t$Iter28;
    org$pandalanguage$pandac$Type* t40;
    panda$core$Char8 $tmp49;
    self->parameter = NULL;
    self->typeKind = ((panda$core$Int64) { 17 });
    {
        panda$collections$Array* $tmp20 = (panda$collections$Array*) pandaZAlloc(40);
        $tmp20->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp20->refCount.value = 1;
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp20, p_subtypes);
        self->subtypes = $tmp20;
    }
    panda$core$MutableString* $tmp23 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp23->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp23->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp23, &$s25);
    name22 = $tmp23;
    separator26 = &$s27;
    self->resolved = ((panda$core$Bit) { true });
    {
        ITable* $tmp29 = ((panda$collections$Iterable*) p_subtypes)->$class->itable;
        while ($tmp29->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp29 = $tmp29->next;
        }
        $fn31 $tmp30 = $tmp29->methods[0];
        panda$collections$Iterator* $tmp32 = $tmp30(((panda$collections$Iterable*) p_subtypes));
        t$Iter28 = $tmp32;
        $l33:;
        ITable* $tmp35 = t$Iter28->$class->itable;
        while ($tmp35->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp35 = $tmp35->next;
        }
        $fn37 $tmp36 = $tmp35->methods[0];
        panda$core$Bit $tmp38 = $tmp36(t$Iter28);
        panda$core$Bit $tmp39 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp38);
        if (!$tmp39.value) goto $l34;
        {
            ITable* $tmp41 = t$Iter28->$class->itable;
            while ($tmp41->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp41 = $tmp41->next;
            }
            $fn43 $tmp42 = $tmp41->methods[1];
            panda$core$Object* $tmp44 = $tmp42(t$Iter28);
            t40 = ((org$pandalanguage$pandac$Type*) $tmp44);
            panda$core$MutableString$append$panda$core$String(name22, separator26);
            panda$core$MutableString$append$panda$core$Object(name22, ((panda$core$Object*) t40));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator26));
                separator26 = &$s45;
            }
            bool $tmp46 = self->resolved.value;
            if (!$tmp46) goto $l47;
            $tmp46 = t40->resolved.value;
            $l47:;
            panda$core$Bit $tmp48 = { $tmp46 };
            self->resolved = $tmp48;
        }
        goto $l33;
        $l34:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp49, ((panda$core$UInt8) { 62 }));
    panda$core$MutableString$append$panda$core$Char8(name22, $tmp49);
    panda$core$String* $tmp50 = panda$core$MutableString$finish$R$panda$core$String(name22);
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), self->position, $tmp50);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator26));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name22));
    }
}
void org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$ClassDecl$GenericParameter* p_param) {
    self->parameter = NULL;
    {
        panda$core$String* $tmp51 = panda$core$String$convert$R$panda$core$String(p_param->owner);
        panda$core$String* $tmp53 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp51, &$s52);
        panda$core$String* $tmp54 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp53, ((org$pandalanguage$pandac$Symbol*) p_param)->name);
        panda$core$String* $tmp56 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp54, &$s55);
        ((org$pandalanguage$pandac$Symbol*) self)->name = $tmp56;
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
    panda$core$Bit $tmp59 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp58 = $tmp59.value;
    if ($tmp58) goto $l60;
    panda$core$Bit $tmp61 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp58 = $tmp61.value;
    $l60:;
    panda$core$Bit $tmp62 = { $tmp58 };
    bool $tmp57 = $tmp62.value;
    if ($tmp57) goto $l63;
    panda$core$Bit $tmp64 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 20 }));
    $tmp57 = $tmp64.value;
    $l63:;
    panda$core$Bit $tmp65 = { $tmp57 };
    PANDA_ASSERT($tmp65.value);
    return self->position.line;
}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp66 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    return $tmp66;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp67 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    return $tmp67;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp71;
    org$pandalanguage$pandac$Type* $tmp68 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp68->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp68->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp71);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp68, &$s70, ((panda$core$Int64) { 14 }), $tmp71, ((panda$core$Bit) { true }));
    return $tmp68;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp75;
    org$pandalanguage$pandac$Type* $tmp72 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp72->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp72->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp75);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp72, &$s74, ((panda$core$Int64) { 23 }), $tmp75, ((panda$core$Bit) { true }));
    return $tmp72;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp79;
    org$pandalanguage$pandac$Type* $tmp76 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp76->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp76->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp79);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp76, &$s78, ((panda$core$Int64) { 10 }), $tmp79, ((panda$core$Bit) { true }));
    return $tmp76;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes80;
    org$pandalanguage$pandac$Type* tmp184;
    org$pandalanguage$pandac$Position $tmp88;
    panda$collections$Array* $tmp81 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp81->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp81->refCount.value = 1;
    panda$collections$Array$init($tmp81);
    subtypes80 = $tmp81;
    org$pandalanguage$pandac$Type* $tmp83 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes80, ((panda$core$Object*) $tmp83));
    {
        org$pandalanguage$pandac$Type* $tmp85 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
        $tmp85->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp85->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp88);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp85, &$s87, ((panda$core$Int64) { 11 }), $tmp88, ((panda$collections$ListView*) subtypes80), ((panda$core$Bit) { true }));
        tmp184 = $tmp85;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes80));
        return tmp184;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp92;
    org$pandalanguage$pandac$Type* $tmp89 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp89->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp89->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp92);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp89, &$s91, ((panda$core$Int64) { 10 }), $tmp92, ((panda$core$Bit) { true }));
    return $tmp89;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp96;
    org$pandalanguage$pandac$Type* $tmp93 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp93->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp93->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp96);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp93, &$s95, ((panda$core$Int64) { 10 }), $tmp96, ((panda$core$Bit) { true }));
    return $tmp93;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp100;
    org$pandalanguage$pandac$Type* $tmp97 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp97->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp97->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp100);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp97, &$s99, ((panda$core$Int64) { 10 }), $tmp100, ((panda$core$Bit) { true }));
    return $tmp97;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp101 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp101->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp101->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp101, &$s103, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 8 }));
    return $tmp101;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp104 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp104->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp104->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp104, &$s106, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 16 }));
    return $tmp104;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp107 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp107->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp107->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp107, &$s109, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 32 }));
    return $tmp107;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp110 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp110->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp110->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp110, &$s112, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 64 }));
    return $tmp110;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp113 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp113->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp113->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp113, &$s115, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 8 }));
    return $tmp113;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp116 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp116->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp116->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp116, &$s118, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 16 }));
    return $tmp116;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp119 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp119->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp119->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp119, &$s121, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 32 }));
    return $tmp119;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp122 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp122->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp122->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp122, &$s124, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 64 }));
    return $tmp122;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp125 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp125->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp125->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp125, &$s127, ((panda$core$Int64) { 20 }), ((panda$core$Int64) { 32 }));
    return $tmp125;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp128 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp128->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp128->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp128, &$s130, ((panda$core$Int64) { 20 }), ((panda$core$Int64) { 64 }));
    return $tmp128;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp134;
    org$pandalanguage$pandac$Type* $tmp131 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp131->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp131->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp134);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp131, &$s133, ((panda$core$Int64) { 10 }), $tmp134, ((panda$core$Bit) { true }));
    return $tmp131;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp138;
    org$pandalanguage$pandac$Type* $tmp135 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp135->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp135->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp138);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp135, &$s137, ((panda$core$Int64) { 10 }), $tmp138, ((panda$core$Bit) { true }));
    return $tmp135;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp142;
    org$pandalanguage$pandac$Type* $tmp139 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp139->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp139->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp142);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp139, &$s141, ((panda$core$Int64) { 10 }), $tmp142, ((panda$core$Bit) { true }));
    return $tmp139;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp146;
    org$pandalanguage$pandac$Type* $tmp143 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp143->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp143->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp146);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp143, &$s145, ((panda$core$Int64) { 10 }), $tmp146, ((panda$core$Bit) { true }));
    return $tmp143;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp150;
    org$pandalanguage$pandac$Type* $tmp147 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp147->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp147->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp150);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp147, &$s149, ((panda$core$Int64) { 10 }), $tmp150, ((panda$core$Bit) { true }));
    return $tmp147;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp154;
    org$pandalanguage$pandac$Type* $tmp151 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp151->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp151->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp154);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp151, &$s153, ((panda$core$Int64) { 10 }), $tmp154, ((panda$core$Bit) { true }));
    return $tmp151;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp158;
    org$pandalanguage$pandac$Type* $tmp155 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp155->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp155->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp158);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp155, &$s157, ((panda$core$Int64) { 10 }), $tmp158, ((panda$core$Bit) { true }));
    return $tmp155;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp162;
    org$pandalanguage$pandac$Type* $tmp159 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp159->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp159->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp162);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp159, &$s161, ((panda$core$Int64) { 10 }), $tmp162, ((panda$core$Bit) { true }));
    return $tmp159;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp166;
    org$pandalanguage$pandac$Type* $tmp163 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp163->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp163->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp166);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp163, &$s165, ((panda$core$Int64) { 10 }), $tmp166, ((panda$core$Bit) { true }));
    return $tmp163;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp170;
    org$pandalanguage$pandac$Type* $tmp167 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp167->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp167->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp170);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp167, &$s169, ((panda$core$Int64) { 10 }), $tmp170, ((panda$core$Bit) { true }));
    return $tmp167;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp174;
    org$pandalanguage$pandac$Type* $tmp171 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp171->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp171->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp174);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp171, &$s173, ((panda$core$Int64) { 10 }), $tmp174, ((panda$core$Bit) { true }));
    return $tmp171;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp178;
    org$pandalanguage$pandac$Type* $tmp175 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp175->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp175->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp178);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp175, &$s177, ((panda$core$Int64) { 10 }), $tmp178, ((panda$core$Bit) { true }));
    return $tmp175;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp182;
    org$pandalanguage$pandac$Type* $tmp179 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp179->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp179->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp182);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp179, &$s181, ((panda$core$Int64) { 10 }), $tmp182, ((panda$core$Bit) { true }));
    return $tmp179;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp186;
    org$pandalanguage$pandac$Type* $tmp183 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp183->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp183->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp186);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp183, &$s185, ((panda$core$Int64) { 10 }), $tmp186, ((panda$core$Bit) { true }));
    return $tmp183;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Position $tmp190;
    org$pandalanguage$pandac$Type* $tmp187 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp187->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp187->refCount.value = 1;
    panda$core$String* $tmp189 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    org$pandalanguage$pandac$Position$init(&$tmp190);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp187, $tmp189, ((panda$core$Int64) { 15 }), $tmp190, ((panda$core$Bit) { true }));
    return $tmp187;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Position $tmp196;
    org$pandalanguage$pandac$Type* $tmp191 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp191->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp191->refCount.value = 1;
    panda$core$String* $tmp194 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    panda$core$String* $tmp195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s193, $tmp194);
    org$pandalanguage$pandac$Position$init(&$tmp196);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp191, $tmp195, ((panda$core$Int64) { 15 }), $tmp196, ((panda$core$Bit) { true }));
    return $tmp191;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 p_value) {
    org$pandalanguage$pandac$Position $tmp200;
    org$pandalanguage$pandac$Type* $tmp197 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp197->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp197->refCount.value = 1;
    panda$core$String* $tmp199 = panda$core$Real64$convert$R$panda$core$String(p_value);
    org$pandalanguage$pandac$Position$init(&$tmp200);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp197, $tmp199, ((panda$core$Int64) { 26 }), $tmp200, ((panda$core$Bit) { true }));
    return $tmp197;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp204;
    org$pandalanguage$pandac$Type* $tmp201 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp201->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp201->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp204);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp201, &$s203, ((panda$core$Int64) { 18 }), $tmp204, ((panda$core$Bit) { true }));
    return $tmp201;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp208;
    org$pandalanguage$pandac$Type* $tmp205 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp205->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp205->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp208);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp205, &$s207, ((panda$core$Int64) { 19 }), $tmp208, ((panda$core$Bit) { true }));
    return $tmp205;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp212;
    org$pandalanguage$pandac$Type* $tmp209 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp209->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp209->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp212);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp209, &$s211, ((panda$core$Int64) { 10 }), $tmp212, ((panda$core$Bit) { true }));
    return $tmp209;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp216;
    org$pandalanguage$pandac$Type* $tmp213 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp213->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp213->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp216);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp213, &$s215, ((panda$core$Int64) { 10 }), $tmp216, ((panda$core$Bit) { true }));
    return $tmp213;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp220;
    org$pandalanguage$pandac$Type* $tmp217 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp217->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp217->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp220);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp217, &$s219, ((panda$core$Int64) { 10 }), $tmp220, ((panda$core$Bit) { true }));
    return $tmp217;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children221;
    org$pandalanguage$pandac$Position $tmp227;
    org$pandalanguage$pandac$Type* tmp2228;
    panda$collections$Array* $tmp222 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp222->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp222->refCount.value = 1;
    panda$collections$Array$init($tmp222);
    children221 = $tmp222;
    org$pandalanguage$pandac$Type* $tmp224 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp224->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp224->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp227);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp224, &$s226, ((panda$core$Int64) { 10 }), $tmp227, ((panda$core$Bit) { true }));
    panda$collections$Array$add$panda$collections$Array$T(children221, ((panda$core$Object*) $tmp224));
    panda$collections$Array$add$panda$collections$Array$T(children221, ((panda$core$Object*) p_t));
    {
        org$pandalanguage$pandac$Type* $tmp229 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
        $tmp229->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp229->refCount.value = 1;
        panda$core$String* $tmp232 = panda$core$String$convert$R$panda$core$String(&$s231);
        panda$core$String* $tmp234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp232, &$s233);
        panda$core$String* $tmp235 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp234, ((panda$core$Object*) p_t));
        panda$core$String* $tmp237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp235, &$s236);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp229, $tmp237, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children221), p_t->resolved);
        tmp2228 = $tmp229;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children221));
        return tmp2228;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children238;
    org$pandalanguage$pandac$Position $tmp244;
    org$pandalanguage$pandac$Type* tmp3255;
    panda$collections$Array* $tmp239 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp239->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp239->refCount.value = 1;
    panda$collections$Array$init($tmp239);
    children238 = $tmp239;
    org$pandalanguage$pandac$Type* $tmp241 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp241->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp241->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp244);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp241, &$s243, ((panda$core$Int64) { 10 }), $tmp244, ((panda$core$Bit) { true }));
    panda$collections$Array$add$panda$collections$Array$T(children238, ((panda$core$Object*) $tmp241));
    panda$collections$Array$add$panda$collections$Array$T(children238, ((panda$core$Object*) p_t));
    org$pandalanguage$pandac$Type* $tmp245 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp246 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp245);
    if ($tmp246.value) {
    {
        org$pandalanguage$pandac$Type* $tmp247 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
        panda$collections$Array$add$panda$collections$Array$T(children238, ((panda$core$Object*) $tmp247));
    }
    }
    else {
    org$pandalanguage$pandac$Type* $tmp248 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp249 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp248);
    if ($tmp249.value) {
    {
        org$pandalanguage$pandac$Type* $tmp250 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
        panda$collections$Array$add$panda$collections$Array$T(children238, ((panda$core$Object*) $tmp250));
    }
    }
    else {
    org$pandalanguage$pandac$Type* $tmp251 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp252 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp251);
    if ($tmp252.value) {
    {
        org$pandalanguage$pandac$Type* $tmp253 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
        panda$collections$Array$add$panda$collections$Array$T(children238, ((panda$core$Object*) $tmp253));
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp254 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
        panda$collections$Array$add$panda$collections$Array$T(children238, ((panda$core$Object*) $tmp254));
    }
    }
    }
    }
    {
        org$pandalanguage$pandac$Type* $tmp256 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
        $tmp256->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp256->refCount.value = 1;
        panda$core$String* $tmp259 = panda$core$String$convert$R$panda$core$String(&$s258);
        panda$core$String* $tmp261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp259, &$s260);
        panda$core$String* $tmp262 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp261, ((panda$core$Object*) p_t));
        panda$core$String* $tmp264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp262, &$s263);
        org$pandalanguage$pandac$Type* $tmp265 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
        panda$core$String* $tmp266 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp264, ((panda$core$Object*) $tmp265));
        panda$core$String* $tmp268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp266, &$s267);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp256, $tmp268, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children238), p_t->resolved);
        tmp3255 = $tmp256;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children238));
        return tmp3255;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp272;
    org$pandalanguage$pandac$Type* $tmp269 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp269->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp269->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp272);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp269, &$s271, ((panda$core$Int64) { 16 }), $tmp272, ((panda$core$Bit) { true }));
    return $tmp269;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp276;
    org$pandalanguage$pandac$Type* $tmp273 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
    $tmp273->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp273->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp276);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp273, &$s275, ((panda$core$Int64) { 16 }), $tmp276, ((panda$core$Bit) { true }));
    return $tmp273;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp282 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s281);
    bool $tmp280 = $tmp282.value;
    if ($tmp280) goto $l283;
    panda$core$Bit $tmp285 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s284);
    $tmp280 = $tmp285.value;
    $l283:;
    panda$core$Bit $tmp286 = { $tmp280 };
    bool $tmp279 = $tmp286.value;
    if ($tmp279) goto $l287;
    panda$core$Bit $tmp289 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s288);
    $tmp279 = $tmp289.value;
    $l287:;
    panda$core$Bit $tmp290 = { $tmp279 };
    bool $tmp278 = $tmp290.value;
    if ($tmp278) goto $l291;
    panda$core$Bit $tmp292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp278 = $tmp292.value;
    $l291:;
    panda$core$Bit $tmp293 = { $tmp278 };
    bool $tmp277 = $tmp293.value;
    if ($tmp277) goto $l294;
    panda$core$Bit $tmp295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
    $tmp277 = $tmp295.value;
    $l294:;
    panda$core$Bit $tmp296 = { $tmp277 };
    return $tmp296;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp299 = $tmp300.value;
    if ($tmp299) goto $l301;
    panda$core$Bit $tmp302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp299 = $tmp302.value;
    $l301:;
    panda$core$Bit $tmp303 = { $tmp299 };
    bool $tmp298 = $tmp303.value;
    if ($tmp298) goto $l304;
    panda$core$Bit $tmp305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 20 }));
    $tmp298 = $tmp305.value;
    $l304:;
    panda$core$Bit $tmp306 = { $tmp298 };
    bool $tmp297 = $tmp306.value;
    if ($tmp297) goto $l307;
    panda$core$Bit $tmp308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp297 = $tmp308.value;
    $l307:;
    panda$core$Bit $tmp309 = { $tmp297 };
    return $tmp309;
}
panda$core$Bit org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
    bool $tmp310 = $tmp311.value;
    if ($tmp310) goto $l312;
    panda$core$Bit $tmp314 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s313);
    $tmp310 = $tmp314.value;
    $l312:;
    panda$core$Bit $tmp315 = { $tmp310 };
    return $tmp315;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp317 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s316);
    return $tmp317;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp319 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp318 = $tmp319.value;
    if ($tmp318) goto $l320;
    panda$core$Bit $tmp321 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(self);
    $tmp318 = $tmp321.value;
    $l320:;
    panda$core$Bit $tmp322 = { $tmp318 };
    return $tmp322;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $match$371_13323;
    {
        $match$371_13323 = self->typeKind;
        panda$core$Bit $tmp327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$371_13323, ((panda$core$Int64) { 10 }));
        bool $tmp326 = $tmp327.value;
        if ($tmp326) goto $l328;
        panda$core$Bit $tmp329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$371_13323, ((panda$core$Int64) { 11 }));
        $tmp326 = $tmp329.value;
        $l328:;
        panda$core$Bit $tmp330 = { $tmp326 };
        bool $tmp325 = $tmp330.value;
        if ($tmp325) goto $l331;
        panda$core$Bit $tmp332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$371_13323, ((panda$core$Int64) { 21 }));
        $tmp325 = $tmp332.value;
        $l331:;
        panda$core$Bit $tmp333 = { $tmp325 };
        bool $tmp324 = $tmp333.value;
        if ($tmp324) goto $l334;
        panda$core$Bit $tmp335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$371_13323, ((panda$core$Int64) { 22 }));
        $tmp324 = $tmp335.value;
        $l334:;
        panda$core$Bit $tmp336 = { $tmp324 };
        if ($tmp336.value) {
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
    panda$core$Bit $tmp338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp337 = $tmp338.value;
    if ($tmp337) goto $l339;
    panda$core$Bit $tmp340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
    $tmp337 = $tmp340.value;
    $l339:;
    panda$core$Bit $tmp341 = { $tmp337 };
    return $tmp341;
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp343 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s342);
    return $tmp343;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp344.value) {
    {
        panda$core$Object* $tmp345 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp346 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp345));
        return $tmp346;
    }
    }
    panda$core$Bit $tmp348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp347 = $tmp348.value;
    if (!$tmp347) goto $l349;
    panda$core$Object* $tmp350 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp352 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp350))->name, &$s351);
    $tmp347 = $tmp352.value;
    $l349:;
    panda$core$Bit $tmp353 = { $tmp347 };
    return $tmp353;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp354.value) {
    {
        panda$core$Object* $tmp355 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp356 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp355));
        return $tmp356;
    }
    }
    panda$core$Bit $tmp358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp357 = $tmp358.value;
    if (!$tmp357) goto $l359;
    panda$core$Object* $tmp360 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp362 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp360))->name, &$s361);
    $tmp357 = $tmp362.value;
    $l359:;
    panda$core$Bit $tmp363 = { $tmp357 };
    return $tmp363;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$collections$Array* subtypes365;
    org$pandalanguage$pandac$Type* tmp4368;
    org$pandalanguage$pandac$Position $tmp374;
    panda$core$Bit $tmp364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp364.value) {
    {
        return self;
    }
    }
    panda$collections$Array* $tmp366 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp366->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp366->refCount.value = 1;
    panda$collections$Array$init($tmp366);
    subtypes365 = $tmp366;
    panda$collections$Array$add$panda$collections$Array$T(subtypes365, ((panda$core$Object*) self));
    {
        org$pandalanguage$pandac$Type* $tmp369 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
        $tmp369->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp369->refCount.value = 1;
        panda$core$String* $tmp371 = panda$core$String$convert$R$panda$core$String(self->name);
        panda$core$String* $tmp373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp371, &$s372);
        org$pandalanguage$pandac$Position$init(&$tmp374);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp369, $tmp373, ((panda$core$Int64) { 11 }), $tmp374, ((panda$collections$ListView*) subtypes365), ((panda$core$Bit) { true }));
        tmp4368 = $tmp369;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes365));
        return tmp4368;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp375 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp375.value) {
    {
        return self;
    }
    }
    panda$core$Object* $tmp376 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    return ((org$pandalanguage$pandac$Type*) $tmp376);
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_other) {
    org$pandalanguage$pandac$Type* t1426;
    org$pandalanguage$pandac$Type* t2428;
    panda$collections$Set* ancestors435;
    org$pandalanguage$pandac$Type* t438;
    org$pandalanguage$pandac$ClassDecl* cl439;
    org$pandalanguage$pandac$Type* tmp5449;
    org$pandalanguage$pandac$Type* tmp6450;
    org$pandalanguage$pandac$Type* tmp7453;
    panda$core$Bit $tmp377 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
    if ($tmp377.value) {
    {
        return self;
    }
    }
    org$pandalanguage$pandac$Type* $tmp378 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp379 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp378);
    if ($tmp379.value) {
    {
        panda$core$Bit $tmp380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp380.value) {
        {
            return p_other;
        }
        }
        org$pandalanguage$pandac$Type* $tmp381 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
        return $tmp381;
    }
    }
    org$pandalanguage$pandac$Type* $tmp382 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp383 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp382);
    if ($tmp383.value) {
    {
        panda$core$Bit $tmp384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp384.value) {
        {
            return self;
        }
        }
        org$pandalanguage$pandac$Type* $tmp385 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
        return $tmp385;
    }
    }
    panda$core$Bit $tmp387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp386 = $tmp387.value;
    if (!$tmp386) goto $l388;
    panda$core$Bit $tmp389 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
    $tmp386 = $tmp389.value;
    $l388:;
    panda$core$Bit $tmp390 = { $tmp386 };
    if ($tmp390.value) {
    {
        return p_other;
    }
    }
    panda$core$Bit $tmp392 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp391 = $tmp392.value;
    if (!$tmp391) goto $l393;
    panda$core$Bit $tmp394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 15 }));
    $tmp391 = $tmp394.value;
    $l393:;
    panda$core$Bit $tmp395 = { $tmp391 };
    if ($tmp395.value) {
    {
        return self;
    }
    }
    panda$core$Bit $tmp396 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
    if ($tmp396.value) {
    {
        panda$core$Bit $tmp398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 15 }));
        bool $tmp397 = $tmp398.value;
        if ($tmp397) goto $l399;
        panda$core$Bit $tmp400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 26 }));
        $tmp397 = $tmp400.value;
        $l399:;
        panda$core$Bit $tmp401 = { $tmp397 };
        if ($tmp401.value) {
        {
            return self;
        }
        }
        panda$core$Bit $tmp402 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        if ($tmp402.value) {
        {
            panda$core$Bit $tmp404 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s403);
            if ($tmp404.value) {
            {
                org$pandalanguage$pandac$Type* $tmp405 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                return $tmp405;
            }
            }
            org$pandalanguage$pandac$Type* $tmp406 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
            return $tmp406;
        }
        }
    }
    }
    panda$core$Bit $tmp407 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
    if ($tmp407.value) {
    {
        panda$core$Bit $tmp409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
        bool $tmp408 = $tmp409.value;
        if ($tmp408) goto $l410;
        panda$core$Bit $tmp411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
        $tmp408 = $tmp411.value;
        $l410:;
        panda$core$Bit $tmp412 = { $tmp408 };
        if ($tmp412.value) {
        {
            return p_other;
        }
        }
        panda$core$Bit $tmp413 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        if ($tmp413.value) {
        {
            panda$core$Bit $tmp415 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s414);
            if ($tmp415.value) {
            {
                org$pandalanguage$pandac$Type* $tmp416 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                return $tmp416;
            }
            }
            org$pandalanguage$pandac$Type* $tmp417 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
            return $tmp417;
        }
        }
    }
    }
    panda$core$Bit $tmp418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp418.value) {
    {
        panda$core$Object* $tmp419 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp420 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp419), p_compiler, p_other);
        org$pandalanguage$pandac$Type* $tmp421 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp420);
        return $tmp421;
    }
    }
    panda$core$Bit $tmp422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp422.value) {
    {
        panda$core$Object* $tmp423 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp424 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_compiler, ((org$pandalanguage$pandac$Type*) $tmp423));
        org$pandalanguage$pandac$Type* $tmp425 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp424);
        return $tmp425;
    }
    }
    org$pandalanguage$pandac$Type* $tmp427 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self);
    t1426 = $tmp427;
    org$pandalanguage$pandac$Type* $tmp429 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_other);
    t2428 = $tmp429;
    panda$core$Bit $tmp431 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t1426);
    bool $tmp430 = $tmp431.value;
    if (!$tmp430) goto $l432;
    panda$core$Bit $tmp433 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t2428);
    $tmp430 = $tmp433.value;
    $l432:;
    panda$core$Bit $tmp434 = { $tmp430 };
    if ($tmp434.value) {
    {
        panda$collections$Set* $tmp436 = (panda$collections$Set*) pandaZAlloc(24);
        $tmp436->$class = (panda$core$Class*) &panda$collections$Set$class;
        $tmp436->refCount.value = 1;
        panda$collections$Set$init($tmp436);
        ancestors435 = $tmp436;
        t438 = self;
        org$pandalanguage$pandac$ClassDecl* $tmp440 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1426);
        cl439 = $tmp440;
        $l441:;
        if (!((panda$core$Bit) { cl439 != NULL }).value) goto $l442;
        {
            panda$collections$Set$add$panda$collections$Set$T(ancestors435, ((panda$collections$Key*) t438));
            if (((panda$core$Bit) { cl439->rawSuper != NULL }).value) {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t438));
                    org$pandalanguage$pandac$Type* $tmp443 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t438, cl439->rawSuper);
                    t438 = $tmp443;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl439));
                    org$pandalanguage$pandac$ClassDecl* $tmp444 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t438);
                    cl439 = $tmp444;
                }
            }
            }
            else {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl439));
                    cl439 = NULL;
                }
            }
            }
        }
        goto $l441;
        $l442:;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t438));
            t438 = p_other;
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl439));
            org$pandalanguage$pandac$ClassDecl* $tmp445 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t2428);
            cl439 = $tmp445;
        }
        $l446:;
        if (!((panda$core$Bit) { cl439 != NULL }).value) goto $l447;
        {
            panda$core$Bit $tmp448 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(ancestors435, ((panda$collections$Key*) t438));
            if ($tmp448.value) {
            {
                {
                    tmp5449 = t438;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t438));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors435));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl439));
                    }
                    {
                        tmp6450 = tmp5449;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1426));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2428));
                        }
                        return tmp6450;
                    }
                }
            }
            }
            if (((panda$core$Bit) { cl439->rawSuper != NULL }).value) {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t438));
                    org$pandalanguage$pandac$Type* $tmp451 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t438, cl439->rawSuper);
                    t438 = $tmp451;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl439));
                    org$pandalanguage$pandac$ClassDecl* $tmp452 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t438);
                    cl439 = $tmp452;
                }
            }
            }
            else {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl439));
                    cl439 = NULL;
                }
            }
            }
        }
        goto $l446;
        $l447:;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t438));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors435));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl439));
        }
    }
    }
    {
        org$pandalanguage$pandac$Type* $tmp454 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        tmp7453 = $tmp454;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1426));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2428));
        }
        return tmp7453;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    panda$core$Int64 $match$506_13457;
    org$pandalanguage$pandac$Type* found459;
    panda$collections$Array* remapped462;
    panda$core$MutableString* name465;
    panda$core$Char8 $tmp469;
    panda$core$String* separator470;
    panda$core$Range$LTpanda$core$Int64$GT $tmp472;
    org$pandalanguage$pandac$Type* child487;
    panda$core$Char8 $tmp498;
    panda$collections$Array* remapped511;
    panda$core$MutableString* name514;
    panda$core$String* separator518;
    panda$core$Range$LTpanda$core$Int64$GT $tmp522;
    org$pandalanguage$pandac$Type* child538;
    org$pandalanguage$pandac$Type* child556;
    panda$core$Char8 $tmp562;
    panda$core$Int64 $tmp455 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp455, ((panda$core$Int64) { 0 }));
    if ($tmp456.value) {
    {
        return self;
    }
    }
    {
        $match$506_13457 = self->typeKind;
        panda$core$Bit $tmp458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_13457, ((panda$core$Int64) { 22 }));
        if ($tmp458.value) {
        {
            panda$core$Object* $tmp460 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
            found459 = ((org$pandalanguage$pandac$Type*) $tmp460);
            if (((panda$core$Bit) { found459 != NULL }).value) {
            {
                return found459;
            }
            }
            return self;
        }
        }
        else {
        panda$core$Bit $tmp461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_13457, ((panda$core$Int64) { 21 }));
        if ($tmp461.value) {
        {
            panda$collections$Array* $tmp463 = (panda$collections$Array*) pandaZAlloc(40);
            $tmp463->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp463->refCount.value = 1;
            panda$collections$Array$init($tmp463);
            remapped462 = $tmp463;
            panda$core$MutableString* $tmp466 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp466->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp466->refCount.value = 1;
            panda$core$Object* $tmp468 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp466, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp468))->name);
            name465 = $tmp466;
            panda$core$Char8$init$panda$core$UInt8(&$tmp469, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(name465, $tmp469);
            separator470 = &$s471;
            panda$core$Int64 $tmp473 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp472, ((panda$core$Int64) { 0 }), $tmp473, ((panda$core$Bit) { false }));
            int64_t $tmp475 = $tmp472.min.value;
            panda$core$Int64 i474 = { $tmp475 };
            int64_t $tmp477 = $tmp472.max.value;
            bool $tmp478 = $tmp472.inclusive.value;
            if ($tmp478) goto $l485; else goto $l486;
            $l485:;
            if ($tmp475 <= $tmp477) goto $l479; else goto $l481;
            $l486:;
            if ($tmp475 < $tmp477) goto $l479; else goto $l481;
            $l479:;
            {
                panda$core$Object* $tmp488 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i474);
                org$pandalanguage$pandac$Type* $tmp489 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp488), p_types);
                child487 = $tmp489;
                panda$collections$Array$add$panda$collections$Array$T(remapped462, ((panda$core$Object*) child487));
                panda$core$Bit $tmp490 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i474, ((panda$core$Int64) { 0 }));
                if ($tmp490.value) {
                {
                    panda$core$MutableString$append$panda$core$String(name465, separator470);
                    panda$core$MutableString$append$panda$core$String(name465, ((org$pandalanguage$pandac$Symbol*) child487)->name);
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator470));
                        separator470 = &$s491;
                    }
                }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child487));
            }
            $l482:;
            int64_t $tmp493 = $tmp477 - i474.value;
            if ($tmp478) goto $l494; else goto $l495;
            $l494:;
            if ((uint64_t) $tmp493 >= 1) goto $l492; else goto $l481;
            $l495:;
            if ((uint64_t) $tmp493 > 1) goto $l492; else goto $l481;
            $l492:;
            i474.value += 1;
            goto $l479;
            $l481:;
            panda$core$Char8$init$panda$core$UInt8(&$tmp498, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name465, $tmp498);
            org$pandalanguage$pandac$Type* $tmp499 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
            $tmp499->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp499->refCount.value = 1;
            panda$core$String* $tmp501 = panda$core$MutableString$finish$R$panda$core$String(name465);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp499, $tmp501, ((panda$core$Int64) { 21 }), self->position, ((panda$collections$ListView*) remapped462), self->resolved);
            return $tmp499;
        }
        }
        else {
        panda$core$Bit $tmp502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_13457, ((panda$core$Int64) { 11 }));
        if ($tmp502.value) {
        {
            panda$core$Object* $tmp503 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp504 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp503), p_types);
            org$pandalanguage$pandac$Type* $tmp505 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp504);
            return $tmp505;
        }
        }
        else {
        panda$core$Bit $tmp507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_13457, ((panda$core$Int64) { 25 }));
        bool $tmp506 = $tmp507.value;
        if ($tmp506) goto $l508;
        panda$core$Bit $tmp509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_13457, ((panda$core$Int64) { 24 }));
        $tmp506 = $tmp509.value;
        $l508:;
        panda$core$Bit $tmp510 = { $tmp506 };
        if ($tmp510.value) {
        {
            panda$collections$Array* $tmp512 = (panda$collections$Array*) pandaZAlloc(40);
            $tmp512->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp512->refCount.value = 1;
            panda$collections$Array$init($tmp512);
            remapped511 = $tmp512;
            panda$core$MutableString* $tmp515 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp515->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp515->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp515, &$s517);
            name514 = $tmp515;
            separator518 = &$s519;
            panda$core$Int64 $tmp520 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Bit $tmp521 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp520, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp521.value);
            panda$core$Int64 $tmp523 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp524 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp523, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp522, ((panda$core$Int64) { 0 }), $tmp524, ((panda$core$Bit) { false }));
            int64_t $tmp526 = $tmp522.min.value;
            panda$core$Int64 i525 = { $tmp526 };
            int64_t $tmp528 = $tmp522.max.value;
            bool $tmp529 = $tmp522.inclusive.value;
            if ($tmp529) goto $l536; else goto $l537;
            $l536:;
            if ($tmp526 <= $tmp528) goto $l530; else goto $l532;
            $l537:;
            if ($tmp526 < $tmp528) goto $l530; else goto $l532;
            $l530:;
            {
                panda$core$Object* $tmp539 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i525);
                org$pandalanguage$pandac$Type* $tmp540 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp539), p_types);
                child538 = $tmp540;
                panda$core$MutableString$append$panda$core$String(name514, separator518);
                panda$core$MutableString$append$panda$core$String(name514, ((org$pandalanguage$pandac$Symbol*) child538)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped511, ((panda$core$Object*) child538));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator518));
                    separator518 = &$s541;
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child538));
            }
            $l533:;
            int64_t $tmp543 = $tmp528 - i525.value;
            if ($tmp529) goto $l544; else goto $l545;
            $l544:;
            if ((uint64_t) $tmp543 >= 1) goto $l542; else goto $l532;
            $l545:;
            if ((uint64_t) $tmp543 > 1) goto $l542; else goto $l532;
            $l542:;
            i525.value += 1;
            goto $l530;
            $l532:;
            panda$core$Bit $tmp548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
            if ($tmp548.value) {
            {
                panda$core$MutableString$append$panda$core$String(name514, &$s549);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(name514, &$s550);
            }
            }
            panda$core$Int64 $tmp551 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp552 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp551, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp553 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp552);
            org$pandalanguage$pandac$Type* $tmp554 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp555 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp553), $tmp554);
            if ($tmp555.value) {
            {
                panda$core$Int64 $tmp557 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp558 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp557, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp559 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp558);
                org$pandalanguage$pandac$Type* $tmp560 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp559), p_types);
                child556 = $tmp560;
                panda$core$MutableString$append$panda$core$String(name514, ((org$pandalanguage$pandac$Symbol*) child556)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped511, ((panda$core$Object*) child556));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child556));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp561 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                panda$collections$Array$add$panda$collections$Array$T(remapped511, ((panda$core$Object*) $tmp561));
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp562, ((panda$core$UInt8) { 41 }));
            panda$core$MutableString$append$panda$core$Char8(name514, $tmp562);
            org$pandalanguage$pandac$Type* $tmp563 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
            $tmp563->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp563->refCount.value = 1;
            panda$core$String* $tmp565 = panda$core$MutableString$finish$R$panda$core$String(name514);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp563, $tmp565, self->typeKind, self->position, ((panda$collections$ListView*) remapped511), self->resolved);
            return $tmp563;
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
    panda$core$Int64 $tmp566 = panda$core$String$hash$R$panda$core$Int64(self->name);
    return $tmp566;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    return self->name;
}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->subtypes));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->test));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameter));
}

