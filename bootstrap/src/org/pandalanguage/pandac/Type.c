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

typedef panda$collections$Iterator* (*$fn28)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn34)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn40)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 29, -3248623696866231612, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x3c", 11, 184897716878203264, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 6054680304062974916, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };

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
        panda$collections$Array* $tmp18 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp18, p_subtypes);
        self->subtypes = $tmp18;
    }
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), p_position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Type* self, panda$collections$ListView* p_subtypes) {
    panda$core$MutableString* name20;
    panda$core$String* separator23;
    panda$collections$Iterator* Iter$76$925;
    org$pandalanguage$pandac$Type* t37;
    panda$core$Char8 $tmp46;
    self->parameter = NULL;
    self->typeKind = ((panda$core$Int64) { 17 });
    {
        panda$collections$Array* $tmp19 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp19, p_subtypes);
        self->subtypes = $tmp19;
    }
    panda$core$MutableString* $tmp21 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init$panda$core$String($tmp21, &$s22);
    name20 = $tmp21;
    separator23 = &$s24;
    self->resolved = ((panda$core$Bit) { true });
    {
        ITable* $tmp26 = ((panda$collections$Iterable*) p_subtypes)->$class->itable;
        while ($tmp26->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp26 = $tmp26->next;
        }
        $fn28 $tmp27 = $tmp26->methods[0];
        panda$collections$Iterator* $tmp29 = $tmp27(((panda$collections$Iterable*) p_subtypes));
        Iter$76$925 = $tmp29;
        $l30:;
        ITable* $tmp32 = Iter$76$925->$class->itable;
        while ($tmp32->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp32 = $tmp32->next;
        }
        $fn34 $tmp33 = $tmp32->methods[0];
        panda$core$Bit $tmp35 = $tmp33(Iter$76$925);
        panda$core$Bit $tmp36 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp35);
        if (!$tmp36.value) goto $l31;
        {
            ITable* $tmp38 = Iter$76$925->$class->itable;
            while ($tmp38->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp38 = $tmp38->next;
            }
            $fn40 $tmp39 = $tmp38->methods[1];
            panda$core$Object* $tmp41 = $tmp39(Iter$76$925);
            t37 = ((org$pandalanguage$pandac$Type*) $tmp41);
            panda$core$MutableString$append$panda$core$String(name20, separator23);
            panda$core$MutableString$append$panda$core$Object(name20, ((panda$core$Object*) t37));
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator23));
                separator23 = &$s42;
            }
            bool $tmp43 = self->resolved.value;
            if (!$tmp43) goto $l44;
            $tmp43 = t37->resolved.value;
            $l44:;
            panda$core$Bit $tmp45 = { $tmp43 };
            self->resolved = $tmp45;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t37));
        }
        goto $l30;
        $l31:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$76$925));
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp46, ((panda$core$UInt8) { 62 }));
    panda$core$MutableString$append$panda$core$Char8(name20, $tmp46);
    panda$core$String* $tmp47 = panda$core$MutableString$finish$R$panda$core$String(name20);
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 207 }), self->position, $tmp47);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator23));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name20));
    }
}
void org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$ClassDecl$GenericParameter* p_param) {
    self->parameter = NULL;
    {
        panda$core$String* $tmp48 = panda$core$String$convert$R$panda$core$String(p_param->owner);
        panda$core$String* $tmp50 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp48, &$s49);
        panda$core$String* $tmp51 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp50, ((org$pandalanguage$pandac$Symbol*) p_param)->name);
        panda$core$String* $tmp53 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp51, &$s52);
        ((org$pandalanguage$pandac$Symbol*) self)->name = $tmp53;
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
    panda$core$Bit $tmp56 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp55 = $tmp56.value;
    if ($tmp55) goto $l57;
    panda$core$Bit $tmp58 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp55 = $tmp58.value;
    $l57:;
    panda$core$Bit $tmp59 = { $tmp55 };
    bool $tmp54 = $tmp59.value;
    if ($tmp54) goto $l60;
    panda$core$Bit $tmp61 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 20 }));
    $tmp54 = $tmp61.value;
    $l60:;
    panda$core$Bit $tmp62 = { $tmp54 };
    PANDA_ASSERT($tmp62.value);
    return self->position.line;
}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp63 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    return $tmp63;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp64 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    return $tmp64;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp67;
    org$pandalanguage$pandac$Type* $tmp65 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp67);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp65, &$s66, ((panda$core$Int64) { 14 }), $tmp67, ((panda$core$Bit) { true }));
    return $tmp65;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp70;
    org$pandalanguage$pandac$Type* $tmp68 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp70);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp68, &$s69, ((panda$core$Int64) { 23 }), $tmp70, ((panda$core$Bit) { true }));
    return $tmp68;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp73;
    org$pandalanguage$pandac$Type* $tmp71 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp73);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp71, &$s72, ((panda$core$Int64) { 10 }), $tmp73, ((panda$core$Bit) { true }));
    return $tmp71;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes74;
    org$pandalanguage$pandac$Type* tmp177;
    org$pandalanguage$pandac$Position $tmp80;
    panda$collections$Array* $tmp75 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp75);
    subtypes74 = $tmp75;
    org$pandalanguage$pandac$Type* $tmp76 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes74, ((panda$core$Object*) $tmp76));
    {
        org$pandalanguage$pandac$Type* $tmp78 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Position$init(&$tmp80);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp78, &$s79, ((panda$core$Int64) { 11 }), $tmp80, ((panda$collections$ListView*) subtypes74), ((panda$core$Bit) { true }));
        tmp177 = $tmp78;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes74));
        return tmp177;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp83;
    org$pandalanguage$pandac$Type* $tmp81 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp83);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp81, &$s82, ((panda$core$Int64) { 10 }), $tmp83, ((panda$core$Bit) { true }));
    return $tmp81;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp86;
    org$pandalanguage$pandac$Type* $tmp84 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp86);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp84, &$s85, ((panda$core$Int64) { 10 }), $tmp86, ((panda$core$Bit) { true }));
    return $tmp84;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp89;
    org$pandalanguage$pandac$Type* $tmp87 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp89);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp87, &$s88, ((panda$core$Int64) { 10 }), $tmp89, ((panda$core$Bit) { true }));
    return $tmp87;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp90 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp90, &$s91, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 8 }));
    return $tmp90;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp92 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp92, &$s93, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 16 }));
    return $tmp92;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp94 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp94, &$s95, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 32 }));
    return $tmp94;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp96 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp96, &$s97, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 64 }));
    return $tmp96;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp98 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp98, &$s99, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 8 }));
    return $tmp98;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp100 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp100, &$s101, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 16 }));
    return $tmp100;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp102 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp102, &$s103, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 32 }));
    return $tmp102;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp104 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp104, &$s105, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 64 }));
    return $tmp104;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp106 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp106, &$s107, ((panda$core$Int64) { 20 }), ((panda$core$Int64) { 32 }));
    return $tmp106;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp108 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp108, &$s109, ((panda$core$Int64) { 20 }), ((panda$core$Int64) { 64 }));
    return $tmp108;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp112;
    org$pandalanguage$pandac$Type* $tmp110 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp112);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp110, &$s111, ((panda$core$Int64) { 10 }), $tmp112, ((panda$core$Bit) { true }));
    return $tmp110;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp115;
    org$pandalanguage$pandac$Type* $tmp113 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp115);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp113, &$s114, ((panda$core$Int64) { 10 }), $tmp115, ((panda$core$Bit) { true }));
    return $tmp113;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp118;
    org$pandalanguage$pandac$Type* $tmp116 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp118);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp116, &$s117, ((panda$core$Int64) { 10 }), $tmp118, ((panda$core$Bit) { true }));
    return $tmp116;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp121;
    org$pandalanguage$pandac$Type* $tmp119 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp121);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp119, &$s120, ((panda$core$Int64) { 10 }), $tmp121, ((panda$core$Bit) { true }));
    return $tmp119;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp124;
    org$pandalanguage$pandac$Type* $tmp122 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp124);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp122, &$s123, ((panda$core$Int64) { 10 }), $tmp124, ((panda$core$Bit) { true }));
    return $tmp122;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp127;
    org$pandalanguage$pandac$Type* $tmp125 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp127);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp125, &$s126, ((panda$core$Int64) { 10 }), $tmp127, ((panda$core$Bit) { true }));
    return $tmp125;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp130;
    org$pandalanguage$pandac$Type* $tmp128 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp130);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp128, &$s129, ((panda$core$Int64) { 10 }), $tmp130, ((panda$core$Bit) { true }));
    return $tmp128;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp133;
    org$pandalanguage$pandac$Type* $tmp131 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp133);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp131, &$s132, ((panda$core$Int64) { 10 }), $tmp133, ((panda$core$Bit) { true }));
    return $tmp131;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp136;
    org$pandalanguage$pandac$Type* $tmp134 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp136);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp134, &$s135, ((panda$core$Int64) { 10 }), $tmp136, ((panda$core$Bit) { true }));
    return $tmp134;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp139;
    org$pandalanguage$pandac$Type* $tmp137 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp139);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp137, &$s138, ((panda$core$Int64) { 10 }), $tmp139, ((panda$core$Bit) { true }));
    return $tmp137;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp142;
    org$pandalanguage$pandac$Type* $tmp140 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp142);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp140, &$s141, ((panda$core$Int64) { 10 }), $tmp142, ((panda$core$Bit) { true }));
    return $tmp140;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp145;
    org$pandalanguage$pandac$Type* $tmp143 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp145);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp143, &$s144, ((panda$core$Int64) { 10 }), $tmp145, ((panda$core$Bit) { true }));
    return $tmp143;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp148;
    org$pandalanguage$pandac$Type* $tmp146 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp148);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp146, &$s147, ((panda$core$Int64) { 10 }), $tmp148, ((panda$core$Bit) { true }));
    return $tmp146;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp151;
    org$pandalanguage$pandac$Type* $tmp149 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp151);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp149, &$s150, ((panda$core$Int64) { 10 }), $tmp151, ((panda$core$Bit) { true }));
    return $tmp149;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Position $tmp154;
    org$pandalanguage$pandac$Type* $tmp152 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp153 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    org$pandalanguage$pandac$Position$init(&$tmp154);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp152, $tmp153, ((panda$core$Int64) { 15 }), $tmp154, ((panda$core$Bit) { true }));
    return $tmp152;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Position $tmp159;
    org$pandalanguage$pandac$Type* $tmp155 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp157 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    panda$core$String* $tmp158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s156, $tmp157);
    org$pandalanguage$pandac$Position$init(&$tmp159);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp155, $tmp158, ((panda$core$Int64) { 15 }), $tmp159, ((panda$core$Bit) { true }));
    return $tmp155;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 p_value) {
    org$pandalanguage$pandac$Position $tmp162;
    org$pandalanguage$pandac$Type* $tmp160 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp161 = panda$core$Real64$convert$R$panda$core$String(p_value);
    org$pandalanguage$pandac$Position$init(&$tmp162);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp160, $tmp161, ((panda$core$Int64) { 26 }), $tmp162, ((panda$core$Bit) { true }));
    return $tmp160;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp165;
    org$pandalanguage$pandac$Type* $tmp163 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp165);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp163, &$s164, ((panda$core$Int64) { 18 }), $tmp165, ((panda$core$Bit) { true }));
    return $tmp163;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp168;
    org$pandalanguage$pandac$Type* $tmp166 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp168);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp166, &$s167, ((panda$core$Int64) { 19 }), $tmp168, ((panda$core$Bit) { true }));
    return $tmp166;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp171;
    org$pandalanguage$pandac$Type* $tmp169 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp171);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp169, &$s170, ((panda$core$Int64) { 10 }), $tmp171, ((panda$core$Bit) { true }));
    return $tmp169;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp174;
    org$pandalanguage$pandac$Type* $tmp172 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp174);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp172, &$s173, ((panda$core$Int64) { 10 }), $tmp174, ((panda$core$Bit) { true }));
    return $tmp172;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp177;
    org$pandalanguage$pandac$Type* $tmp175 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp177);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp175, &$s176, ((panda$core$Int64) { 10 }), $tmp177, ((panda$core$Bit) { true }));
    return $tmp175;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children178;
    org$pandalanguage$pandac$Position $tmp182;
    org$pandalanguage$pandac$Type* tmp2183;
    panda$collections$Array* $tmp179 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp179);
    children178 = $tmp179;
    org$pandalanguage$pandac$Type* $tmp180 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp182);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp180, &$s181, ((panda$core$Int64) { 10 }), $tmp182, ((panda$core$Bit) { true }));
    panda$collections$Array$add$panda$collections$Array$T(children178, ((panda$core$Object*) $tmp180));
    panda$collections$Array$add$panda$collections$Array$T(children178, ((panda$core$Object*) p_t));
    {
        org$pandalanguage$pandac$Type* $tmp184 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp186 = panda$core$String$convert$R$panda$core$String(&$s185);
        panda$core$String* $tmp188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp186, &$s187);
        panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp188, ((panda$core$Object*) p_t));
        panda$core$String* $tmp191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp189, &$s190);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp184, $tmp191, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children178), p_t->resolved);
        tmp2183 = $tmp184;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children178));
        return tmp2183;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children192;
    org$pandalanguage$pandac$Position $tmp196;
    org$pandalanguage$pandac$Type* tmp3207;
    panda$collections$Array* $tmp193 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp193);
    children192 = $tmp193;
    org$pandalanguage$pandac$Type* $tmp194 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp196);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp194, &$s195, ((panda$core$Int64) { 10 }), $tmp196, ((panda$core$Bit) { true }));
    panda$collections$Array$add$panda$collections$Array$T(children192, ((panda$core$Object*) $tmp194));
    panda$collections$Array$add$panda$collections$Array$T(children192, ((panda$core$Object*) p_t));
    org$pandalanguage$pandac$Type* $tmp197 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp198 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp197);
    if ($tmp198.value) {
    {
        org$pandalanguage$pandac$Type* $tmp199 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
        panda$collections$Array$add$panda$collections$Array$T(children192, ((panda$core$Object*) $tmp199));
    }
    }
    else {
    org$pandalanguage$pandac$Type* $tmp200 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp201 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp200);
    if ($tmp201.value) {
    {
        org$pandalanguage$pandac$Type* $tmp202 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
        panda$collections$Array$add$panda$collections$Array$T(children192, ((panda$core$Object*) $tmp202));
    }
    }
    else {
    org$pandalanguage$pandac$Type* $tmp203 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp204 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp203);
    if ($tmp204.value) {
    {
        org$pandalanguage$pandac$Type* $tmp205 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
        panda$collections$Array$add$panda$collections$Array$T(children192, ((panda$core$Object*) $tmp205));
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp206 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
        panda$collections$Array$add$panda$collections$Array$T(children192, ((panda$core$Object*) $tmp206));
    }
    }
    }
    }
    {
        org$pandalanguage$pandac$Type* $tmp208 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp210 = panda$core$String$convert$R$panda$core$String(&$s209);
        panda$core$String* $tmp212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp210, &$s211);
        panda$core$String* $tmp213 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp212, ((panda$core$Object*) p_t));
        panda$core$String* $tmp215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp213, &$s214);
        org$pandalanguage$pandac$Type* $tmp216 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
        panda$core$String* $tmp217 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp215, ((panda$core$Object*) $tmp216));
        panda$core$String* $tmp219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp217, &$s218);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp208, $tmp219, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children192), p_t->resolved);
        tmp3207 = $tmp208;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children192));
        return tmp3207;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp222;
    org$pandalanguage$pandac$Type* $tmp220 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp222);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp220, &$s221, ((panda$core$Int64) { 16 }), $tmp222, ((panda$core$Bit) { true }));
    return $tmp220;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp225;
    org$pandalanguage$pandac$Type* $tmp223 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Position$init(&$tmp225);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp223, &$s224, ((panda$core$Int64) { 16 }), $tmp225, ((panda$core$Bit) { true }));
    return $tmp223;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp231 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s230);
    bool $tmp229 = $tmp231.value;
    if ($tmp229) goto $l232;
    panda$core$Bit $tmp234 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s233);
    $tmp229 = $tmp234.value;
    $l232:;
    panda$core$Bit $tmp235 = { $tmp229 };
    bool $tmp228 = $tmp235.value;
    if ($tmp228) goto $l236;
    panda$core$Bit $tmp238 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s237);
    $tmp228 = $tmp238.value;
    $l236:;
    panda$core$Bit $tmp239 = { $tmp228 };
    bool $tmp227 = $tmp239.value;
    if ($tmp227) goto $l240;
    panda$core$Bit $tmp241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp227 = $tmp241.value;
    $l240:;
    panda$core$Bit $tmp242 = { $tmp227 };
    bool $tmp226 = $tmp242.value;
    if ($tmp226) goto $l243;
    panda$core$Bit $tmp244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
    $tmp226 = $tmp244.value;
    $l243:;
    panda$core$Bit $tmp245 = { $tmp226 };
    return $tmp245;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp248 = $tmp249.value;
    if ($tmp248) goto $l250;
    panda$core$Bit $tmp251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp248 = $tmp251.value;
    $l250:;
    panda$core$Bit $tmp252 = { $tmp248 };
    bool $tmp247 = $tmp252.value;
    if ($tmp247) goto $l253;
    panda$core$Bit $tmp254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 20 }));
    $tmp247 = $tmp254.value;
    $l253:;
    panda$core$Bit $tmp255 = { $tmp247 };
    bool $tmp246 = $tmp255.value;
    if ($tmp246) goto $l256;
    panda$core$Bit $tmp257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp246 = $tmp257.value;
    $l256:;
    panda$core$Bit $tmp258 = { $tmp246 };
    return $tmp258;
}
panda$core$Bit org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
    bool $tmp259 = $tmp260.value;
    if ($tmp259) goto $l261;
    panda$core$Bit $tmp263 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s262);
    $tmp259 = $tmp263.value;
    $l261:;
    panda$core$Bit $tmp264 = { $tmp259 };
    return $tmp264;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp266 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s265);
    return $tmp266;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp268 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp267 = $tmp268.value;
    if ($tmp267) goto $l269;
    panda$core$Bit $tmp270 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(self);
    $tmp267 = $tmp270.value;
    $l269:;
    panda$core$Bit $tmp271 = { $tmp267 };
    return $tmp271;
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
    panda$core$Bit $tmp273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp272 = $tmp273.value;
    if ($tmp272) goto $l274;
    panda$core$Bit $tmp275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
    $tmp272 = $tmp275.value;
    $l274:;
    panda$core$Bit $tmp276 = { $tmp272 };
    return $tmp276;
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp278 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s277);
    return $tmp278;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp279.value) {
    {
        panda$core$Object* $tmp280 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp281 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp280));
        return $tmp281;
    }
    }
    panda$core$Bit $tmp283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp282 = $tmp283.value;
    if (!$tmp282) goto $l284;
    panda$core$Object* $tmp285 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp287 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp285))->name, &$s286);
    $tmp282 = $tmp287.value;
    $l284:;
    panda$core$Bit $tmp288 = { $tmp282 };
    return $tmp288;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp289.value) {
    {
        panda$core$Object* $tmp290 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp291 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp290));
        return $tmp291;
    }
    }
    panda$core$Bit $tmp293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp292 = $tmp293.value;
    if (!$tmp292) goto $l294;
    panda$core$Object* $tmp295 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp297 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp295))->name, &$s296);
    $tmp292 = $tmp297.value;
    $l294:;
    panda$core$Bit $tmp298 = { $tmp292 };
    return $tmp298;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$collections$Array* subtypes300;
    org$pandalanguage$pandac$Type* tmp4302;
    org$pandalanguage$pandac$Position $tmp307;
    panda$core$Bit $tmp299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp299.value) {
    {
        return self;
    }
    }
    panda$collections$Array* $tmp301 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp301);
    subtypes300 = $tmp301;
    panda$collections$Array$add$panda$collections$Array$T(subtypes300, ((panda$core$Object*) self));
    {
        org$pandalanguage$pandac$Type* $tmp303 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp304 = panda$core$String$convert$R$panda$core$String(self->name);
        panda$core$String* $tmp306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp304, &$s305);
        org$pandalanguage$pandac$Position$init(&$tmp307);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp303, $tmp306, ((panda$core$Int64) { 11 }), $tmp307, ((panda$collections$ListView*) subtypes300), ((panda$core$Bit) { true }));
        tmp4302 = $tmp303;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes300));
        return tmp4302;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp308 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp308.value) {
    {
        return self;
    }
    }
    panda$core$Object* $tmp309 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    return ((org$pandalanguage$pandac$Type*) $tmp309);
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_other) {
    org$pandalanguage$pandac$Type* t1359;
    org$pandalanguage$pandac$Type* t2361;
    panda$collections$Set* ancestors368;
    org$pandalanguage$pandac$Type* t370;
    org$pandalanguage$pandac$ClassDecl* cl371;
    org$pandalanguage$pandac$Type* tmp5381;
    org$pandalanguage$pandac$Type* tmp6382;
    org$pandalanguage$pandac$Type* tmp7385;
    panda$core$Bit $tmp310 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
    if ($tmp310.value) {
    {
        return self;
    }
    }
    org$pandalanguage$pandac$Type* $tmp311 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp312 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp311);
    if ($tmp312.value) {
    {
        panda$core$Bit $tmp313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp313.value) {
        {
            return p_other;
        }
        }
        org$pandalanguage$pandac$Type* $tmp314 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
        return $tmp314;
    }
    }
    org$pandalanguage$pandac$Type* $tmp315 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp316 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp315);
    if ($tmp316.value) {
    {
        panda$core$Bit $tmp317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp317.value) {
        {
            return self;
        }
        }
        org$pandalanguage$pandac$Type* $tmp318 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
        return $tmp318;
    }
    }
    panda$core$Bit $tmp320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp319 = $tmp320.value;
    if (!$tmp319) goto $l321;
    panda$core$Bit $tmp322 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
    $tmp319 = $tmp322.value;
    $l321:;
    panda$core$Bit $tmp323 = { $tmp319 };
    if ($tmp323.value) {
    {
        return p_other;
    }
    }
    panda$core$Bit $tmp325 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp324 = $tmp325.value;
    if (!$tmp324) goto $l326;
    panda$core$Bit $tmp327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 15 }));
    $tmp324 = $tmp327.value;
    $l326:;
    panda$core$Bit $tmp328 = { $tmp324 };
    if ($tmp328.value) {
    {
        return self;
    }
    }
    panda$core$Bit $tmp329 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
    if ($tmp329.value) {
    {
        panda$core$Bit $tmp331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 15 }));
        bool $tmp330 = $tmp331.value;
        if ($tmp330) goto $l332;
        panda$core$Bit $tmp333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 26 }));
        $tmp330 = $tmp333.value;
        $l332:;
        panda$core$Bit $tmp334 = { $tmp330 };
        if ($tmp334.value) {
        {
            return self;
        }
        }
        panda$core$Bit $tmp335 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        if ($tmp335.value) {
        {
            panda$core$Bit $tmp337 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s336);
            if ($tmp337.value) {
            {
                org$pandalanguage$pandac$Type* $tmp338 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                return $tmp338;
            }
            }
            org$pandalanguage$pandac$Type* $tmp339 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
            return $tmp339;
        }
        }
    }
    }
    panda$core$Bit $tmp340 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
    if ($tmp340.value) {
    {
        panda$core$Bit $tmp342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
        bool $tmp341 = $tmp342.value;
        if ($tmp341) goto $l343;
        panda$core$Bit $tmp344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
        $tmp341 = $tmp344.value;
        $l343:;
        panda$core$Bit $tmp345 = { $tmp341 };
        if ($tmp345.value) {
        {
            return p_other;
        }
        }
        panda$core$Bit $tmp346 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        if ($tmp346.value) {
        {
            panda$core$Bit $tmp348 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s347);
            if ($tmp348.value) {
            {
                org$pandalanguage$pandac$Type* $tmp349 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                return $tmp349;
            }
            }
            org$pandalanguage$pandac$Type* $tmp350 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
            return $tmp350;
        }
        }
    }
    }
    panda$core$Bit $tmp351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp351.value) {
    {
        panda$core$Object* $tmp352 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp353 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp352), p_compiler, p_other);
        org$pandalanguage$pandac$Type* $tmp354 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp353);
        return $tmp354;
    }
    }
    panda$core$Bit $tmp355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp355.value) {
    {
        panda$core$Object* $tmp356 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp357 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_compiler, ((org$pandalanguage$pandac$Type*) $tmp356));
        org$pandalanguage$pandac$Type* $tmp358 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp357);
        return $tmp358;
    }
    }
    org$pandalanguage$pandac$Type* $tmp360 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self);
    t1359 = $tmp360;
    org$pandalanguage$pandac$Type* $tmp362 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_other);
    t2361 = $tmp362;
    panda$core$Bit $tmp364 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t1359);
    bool $tmp363 = $tmp364.value;
    if (!$tmp363) goto $l365;
    panda$core$Bit $tmp366 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t2361);
    $tmp363 = $tmp366.value;
    $l365:;
    panda$core$Bit $tmp367 = { $tmp363 };
    if ($tmp367.value) {
    {
        panda$collections$Set* $tmp369 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
        panda$collections$Set$init($tmp369);
        ancestors368 = $tmp369;
        t370 = self;
        org$pandalanguage$pandac$ClassDecl* $tmp372 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1359);
        cl371 = $tmp372;
        $l373:;
        if (!((panda$core$Bit) { cl371 != NULL }).value) goto $l374;
        {
            panda$collections$Set$add$panda$collections$Set$T(ancestors368, ((panda$collections$Key*) t370));
            if (((panda$core$Bit) { cl371->rawSuper != NULL }).value) {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t370));
                    org$pandalanguage$pandac$Type* $tmp375 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t370, cl371->rawSuper);
                    t370 = $tmp375;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl371));
                    org$pandalanguage$pandac$ClassDecl* $tmp376 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t370);
                    cl371 = $tmp376;
                }
            }
            }
            else {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl371));
                    cl371 = NULL;
                }
            }
            }
        }
        goto $l373;
        $l374:;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t370));
            t370 = p_other;
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl371));
            org$pandalanguage$pandac$ClassDecl* $tmp377 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t2361);
            cl371 = $tmp377;
        }
        $l378:;
        if (!((panda$core$Bit) { cl371 != NULL }).value) goto $l379;
        {
            panda$core$Bit $tmp380 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(ancestors368, ((panda$collections$Key*) t370));
            if ($tmp380.value) {
            {
                {
                    tmp5381 = t370;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t370));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors368));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl371));
                    }
                    {
                        tmp6382 = tmp5381;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1359));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2361));
                        }
                        return tmp6382;
                    }
                }
            }
            }
            if (((panda$core$Bit) { cl371->rawSuper != NULL }).value) {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t370));
                    org$pandalanguage$pandac$Type* $tmp383 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t370, cl371->rawSuper);
                    t370 = $tmp383;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl371));
                    org$pandalanguage$pandac$ClassDecl* $tmp384 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t370);
                    cl371 = $tmp384;
                }
            }
            }
            else {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl371));
                    cl371 = NULL;
                }
            }
            }
        }
        goto $l378;
        $l379:;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t370));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors368));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl371));
        }
    }
    }
    {
        org$pandalanguage$pandac$Type* $tmp386 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        tmp7385 = $tmp386;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1359));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2361));
        }
        return tmp7385;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    org$pandalanguage$pandac$Type* found389;
    org$pandalanguage$pandac$Type* tmp8391;
    org$pandalanguage$pandac$Type* tmp9392;
    panda$collections$Array* remapped393;
    panda$core$MutableString* name395;
    panda$core$Char8 $tmp398;
    panda$core$String* separator399;
    panda$core$Range$LTpanda$core$Int64$GT $tmp401;
    org$pandalanguage$pandac$Type* child416;
    panda$core$Char8 $tmp427;
    org$pandalanguage$pandac$Type* tmp10428;
    panda$collections$Array* remapped434;
    panda$core$MutableString* name436;
    panda$core$String* separator439;
    panda$core$Range$LTpanda$core$Int64$GT $tmp443;
    org$pandalanguage$pandac$Type* child459;
    org$pandalanguage$pandac$Type* child477;
    panda$core$Char8 $tmp483;
    org$pandalanguage$pandac$Type* tmp11484;
    panda$core$Int64 $tmp387 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp387, ((panda$core$Int64) { 0 }));
    if ($tmp388.value) {
    {
        return self;
    }
    }
    switch (self->typeKind.value) {
        case 22:
        {
            panda$core$Object* $tmp390 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
            found389 = ((org$pandalanguage$pandac$Type*) $tmp390);
            if (((panda$core$Bit) { found389 != NULL }).value) {
            {
                {
                    tmp8391 = found389;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found389));
                    return tmp8391;
                }
            }
            }
            {
                tmp9392 = self;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found389));
                return tmp9392;
            }
        }
        break;
        case 21:
        {
            panda$collections$Array* $tmp394 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp394);
            remapped393 = $tmp394;
            panda$core$MutableString* $tmp396 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$Object* $tmp397 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp396, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp397))->name);
            name395 = $tmp396;
            panda$core$Char8$init$panda$core$UInt8(&$tmp398, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(name395, $tmp398);
            separator399 = &$s400;
            panda$core$Int64 $tmp402 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp401, ((panda$core$Int64) { 0 }), $tmp402, ((panda$core$Bit) { false }));
            int64_t $tmp404 = $tmp401.min.value;
            panda$core$Int64 i403 = { $tmp404 };
            int64_t $tmp406 = $tmp401.max.value;
            bool $tmp407 = $tmp401.inclusive.value;
            if ($tmp407) goto $l414; else goto $l415;
            $l414:;
            if ($tmp404 <= $tmp406) goto $l408; else goto $l410;
            $l415:;
            if ($tmp404 < $tmp406) goto $l408; else goto $l410;
            $l408:;
            {
                panda$core$Object* $tmp417 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i403);
                org$pandalanguage$pandac$Type* $tmp418 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp417), p_types);
                child416 = $tmp418;
                panda$collections$Array$add$panda$collections$Array$T(remapped393, ((panda$core$Object*) child416));
                panda$core$Bit $tmp419 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i403, ((panda$core$Int64) { 0 }));
                if ($tmp419.value) {
                {
                    panda$core$MutableString$append$panda$core$String(name395, separator399);
                    panda$core$MutableString$append$panda$core$String(name395, ((org$pandalanguage$pandac$Symbol*) child416)->name);
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator399));
                        separator399 = &$s420;
                    }
                }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child416));
            }
            $l411:;
            int64_t $tmp422 = $tmp406 - i403.value;
            if ($tmp407) goto $l423; else goto $l424;
            $l423:;
            if ((uint64_t) $tmp422 >= 1) goto $l421; else goto $l410;
            $l424:;
            if ((uint64_t) $tmp422 > 1) goto $l421; else goto $l410;
            $l421:;
            i403.value += 1;
            goto $l408;
            $l410:;
            panda$core$Char8$init$panda$core$UInt8(&$tmp427, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name395, $tmp427);
            {
                org$pandalanguage$pandac$Type* $tmp429 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$String* $tmp430 = panda$core$MutableString$finish$R$panda$core$String(name395);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp429, $tmp430, ((panda$core$Int64) { 21 }), self->position, ((panda$collections$ListView*) remapped393), self->resolved);
                tmp10428 = $tmp429;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator399));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remapped393));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name395));
                }
                return tmp10428;
            }
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp431 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp432 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp431), p_types);
            org$pandalanguage$pandac$Type* $tmp433 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp432);
            return $tmp433;
        }
        break;
        case 25:
        case 24:
        {
            panda$collections$Array* $tmp435 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp435);
            remapped434 = $tmp435;
            panda$core$MutableString* $tmp437 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init$panda$core$String($tmp437, &$s438);
            name436 = $tmp437;
            separator439 = &$s440;
            panda$core$Int64 $tmp441 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Bit $tmp442 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp441, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp442.value);
            panda$core$Int64 $tmp444 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp445 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp444, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp443, ((panda$core$Int64) { 0 }), $tmp445, ((panda$core$Bit) { false }));
            int64_t $tmp447 = $tmp443.min.value;
            panda$core$Int64 i446 = { $tmp447 };
            int64_t $tmp449 = $tmp443.max.value;
            bool $tmp450 = $tmp443.inclusive.value;
            if ($tmp450) goto $l457; else goto $l458;
            $l457:;
            if ($tmp447 <= $tmp449) goto $l451; else goto $l453;
            $l458:;
            if ($tmp447 < $tmp449) goto $l451; else goto $l453;
            $l451:;
            {
                panda$core$Object* $tmp460 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i446);
                org$pandalanguage$pandac$Type* $tmp461 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp460), p_types);
                child459 = $tmp461;
                panda$core$MutableString$append$panda$core$String(name436, separator439);
                panda$core$MutableString$append$panda$core$String(name436, ((org$pandalanguage$pandac$Symbol*) child459)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped434, ((panda$core$Object*) child459));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator439));
                    separator439 = &$s462;
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child459));
            }
            $l454:;
            int64_t $tmp464 = $tmp449 - i446.value;
            if ($tmp450) goto $l465; else goto $l466;
            $l465:;
            if ((uint64_t) $tmp464 >= 1) goto $l463; else goto $l453;
            $l466:;
            if ((uint64_t) $tmp464 > 1) goto $l463; else goto $l453;
            $l463:;
            i446.value += 1;
            goto $l451;
            $l453:;
            panda$core$Bit $tmp469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
            if ($tmp469.value) {
            {
                panda$core$MutableString$append$panda$core$String(name436, &$s470);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(name436, &$s471);
            }
            }
            panda$core$Int64 $tmp472 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp473 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp472, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp474 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp473);
            org$pandalanguage$pandac$Type* $tmp475 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp476 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp474), $tmp475);
            if ($tmp476.value) {
            {
                panda$core$Int64 $tmp478 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp479 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp478, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp480 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp479);
                org$pandalanguage$pandac$Type* $tmp481 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp480), p_types);
                child477 = $tmp481;
                panda$core$MutableString$append$panda$core$String(name436, ((org$pandalanguage$pandac$Symbol*) child477)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped434, ((panda$core$Object*) child477));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child477));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp482 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                panda$collections$Array$add$panda$collections$Array$T(remapped434, ((panda$core$Object*) $tmp482));
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp483, ((panda$core$UInt8) { 41 }));
            panda$core$MutableString$append$panda$core$Char8(name436, $tmp483);
            {
                org$pandalanguage$pandac$Type* $tmp485 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$String* $tmp486 = panda$core$MutableString$finish$R$panda$core$String(name436);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp485, $tmp486, self->typeKind, self->position, ((panda$collections$ListView*) remapped434), self->resolved);
                tmp11484 = $tmp485;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator439));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remapped434));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name436));
                }
                return tmp11484;
            }
        }
        break;
        default:
        {
            return self;
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp487 = panda$core$String$hash$R$panda$core$Int64(self->name);
    return $tmp487;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    return self->name;
}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->subtypes));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->test));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameter));
}

