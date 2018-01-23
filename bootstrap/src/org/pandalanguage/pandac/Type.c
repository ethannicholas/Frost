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
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };

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
    panda$collections$Iterator* t$Iter25;
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
        t$Iter25 = $tmp29;
        $l30:;
        ITable* $tmp32 = t$Iter25->$class->itable;
        while ($tmp32->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp32 = $tmp32->next;
        }
        $fn34 $tmp33 = $tmp32->methods[0];
        panda$core$Bit $tmp35 = $tmp33(t$Iter25);
        panda$core$Bit $tmp36 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp35);
        if (!$tmp36.value) goto $l31;
        {
            ITable* $tmp38 = t$Iter25->$class->itable;
            while ($tmp38->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp38 = $tmp38->next;
            }
            $fn40 $tmp39 = $tmp38->methods[1];
            panda$core$Object* $tmp41 = $tmp39(t$Iter25);
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
        }
        goto $l30;
        $l31:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
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
    panda$core$Int64 $match$371_13272;
    {
        $match$371_13272 = self->typeKind;
        panda$core$Bit $tmp276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$371_13272, ((panda$core$Int64) { 10 }));
        bool $tmp275 = $tmp276.value;
        if ($tmp275) goto $l277;
        panda$core$Bit $tmp278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$371_13272, ((panda$core$Int64) { 11 }));
        $tmp275 = $tmp278.value;
        $l277:;
        panda$core$Bit $tmp279 = { $tmp275 };
        bool $tmp274 = $tmp279.value;
        if ($tmp274) goto $l280;
        panda$core$Bit $tmp281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$371_13272, ((panda$core$Int64) { 21 }));
        $tmp274 = $tmp281.value;
        $l280:;
        panda$core$Bit $tmp282 = { $tmp274 };
        bool $tmp273 = $tmp282.value;
        if ($tmp273) goto $l283;
        panda$core$Bit $tmp284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$371_13272, ((panda$core$Int64) { 22 }));
        $tmp273 = $tmp284.value;
        $l283:;
        panda$core$Bit $tmp285 = { $tmp273 };
        if ($tmp285.value) {
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
    panda$core$Bit $tmp287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp286 = $tmp287.value;
    if ($tmp286) goto $l288;
    panda$core$Bit $tmp289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
    $tmp286 = $tmp289.value;
    $l288:;
    panda$core$Bit $tmp290 = { $tmp286 };
    return $tmp290;
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp292 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s291);
    return $tmp292;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp293.value) {
    {
        panda$core$Object* $tmp294 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp295 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp294));
        return $tmp295;
    }
    }
    panda$core$Bit $tmp297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp296 = $tmp297.value;
    if (!$tmp296) goto $l298;
    panda$core$Object* $tmp299 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp301 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp299))->name, &$s300);
    $tmp296 = $tmp301.value;
    $l298:;
    panda$core$Bit $tmp302 = { $tmp296 };
    return $tmp302;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp303.value) {
    {
        panda$core$Object* $tmp304 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp305 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp304));
        return $tmp305;
    }
    }
    panda$core$Bit $tmp307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp306 = $tmp307.value;
    if (!$tmp306) goto $l308;
    panda$core$Object* $tmp309 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp311 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp309))->name, &$s310);
    $tmp306 = $tmp311.value;
    $l308:;
    panda$core$Bit $tmp312 = { $tmp306 };
    return $tmp312;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$collections$Array* subtypes314;
    org$pandalanguage$pandac$Type* tmp4316;
    org$pandalanguage$pandac$Position $tmp321;
    panda$core$Bit $tmp313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp313.value) {
    {
        return self;
    }
    }
    panda$collections$Array* $tmp315 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp315);
    subtypes314 = $tmp315;
    panda$collections$Array$add$panda$collections$Array$T(subtypes314, ((panda$core$Object*) self));
    {
        org$pandalanguage$pandac$Type* $tmp317 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp318 = panda$core$String$convert$R$panda$core$String(self->name);
        panda$core$String* $tmp320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp318, &$s319);
        org$pandalanguage$pandac$Position$init(&$tmp321);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp317, $tmp320, ((panda$core$Int64) { 11 }), $tmp321, ((panda$collections$ListView*) subtypes314), ((panda$core$Bit) { true }));
        tmp4316 = $tmp317;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes314));
        return tmp4316;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp322 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp322.value) {
    {
        return self;
    }
    }
    panda$core$Object* $tmp323 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    return ((org$pandalanguage$pandac$Type*) $tmp323);
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_other) {
    org$pandalanguage$pandac$Type* t1373;
    org$pandalanguage$pandac$Type* t2375;
    panda$collections$Set* ancestors382;
    org$pandalanguage$pandac$Type* t384;
    org$pandalanguage$pandac$ClassDecl* cl385;
    org$pandalanguage$pandac$Type* tmp5395;
    org$pandalanguage$pandac$Type* tmp6396;
    org$pandalanguage$pandac$Type* tmp7399;
    panda$core$Bit $tmp324 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
    if ($tmp324.value) {
    {
        return self;
    }
    }
    org$pandalanguage$pandac$Type* $tmp325 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp326 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp325);
    if ($tmp326.value) {
    {
        panda$core$Bit $tmp327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp327.value) {
        {
            return p_other;
        }
        }
        org$pandalanguage$pandac$Type* $tmp328 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
        return $tmp328;
    }
    }
    org$pandalanguage$pandac$Type* $tmp329 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp330 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp329);
    if ($tmp330.value) {
    {
        panda$core$Bit $tmp331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp331.value) {
        {
            return self;
        }
        }
        org$pandalanguage$pandac$Type* $tmp332 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
        return $tmp332;
    }
    }
    panda$core$Bit $tmp334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp333 = $tmp334.value;
    if (!$tmp333) goto $l335;
    panda$core$Bit $tmp336 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
    $tmp333 = $tmp336.value;
    $l335:;
    panda$core$Bit $tmp337 = { $tmp333 };
    if ($tmp337.value) {
    {
        return p_other;
    }
    }
    panda$core$Bit $tmp339 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp338 = $tmp339.value;
    if (!$tmp338) goto $l340;
    panda$core$Bit $tmp341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 15 }));
    $tmp338 = $tmp341.value;
    $l340:;
    panda$core$Bit $tmp342 = { $tmp338 };
    if ($tmp342.value) {
    {
        return self;
    }
    }
    panda$core$Bit $tmp343 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
    if ($tmp343.value) {
    {
        panda$core$Bit $tmp345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 15 }));
        bool $tmp344 = $tmp345.value;
        if ($tmp344) goto $l346;
        panda$core$Bit $tmp347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 26 }));
        $tmp344 = $tmp347.value;
        $l346:;
        panda$core$Bit $tmp348 = { $tmp344 };
        if ($tmp348.value) {
        {
            return self;
        }
        }
        panda$core$Bit $tmp349 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        if ($tmp349.value) {
        {
            panda$core$Bit $tmp351 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s350);
            if ($tmp351.value) {
            {
                org$pandalanguage$pandac$Type* $tmp352 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                return $tmp352;
            }
            }
            org$pandalanguage$pandac$Type* $tmp353 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
            return $tmp353;
        }
        }
    }
    }
    panda$core$Bit $tmp354 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
    if ($tmp354.value) {
    {
        panda$core$Bit $tmp356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
        bool $tmp355 = $tmp356.value;
        if ($tmp355) goto $l357;
        panda$core$Bit $tmp358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 26 }));
        $tmp355 = $tmp358.value;
        $l357:;
        panda$core$Bit $tmp359 = { $tmp355 };
        if ($tmp359.value) {
        {
            return p_other;
        }
        }
        panda$core$Bit $tmp360 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        if ($tmp360.value) {
        {
            panda$core$Bit $tmp362 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s361);
            if ($tmp362.value) {
            {
                org$pandalanguage$pandac$Type* $tmp363 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                return $tmp363;
            }
            }
            org$pandalanguage$pandac$Type* $tmp364 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
            return $tmp364;
        }
        }
    }
    }
    panda$core$Bit $tmp365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp365.value) {
    {
        panda$core$Object* $tmp366 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp367 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp366), p_compiler, p_other);
        org$pandalanguage$pandac$Type* $tmp368 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp367);
        return $tmp368;
    }
    }
    panda$core$Bit $tmp369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp369.value) {
    {
        panda$core$Object* $tmp370 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp371 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_compiler, ((org$pandalanguage$pandac$Type*) $tmp370));
        org$pandalanguage$pandac$Type* $tmp372 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp371);
        return $tmp372;
    }
    }
    org$pandalanguage$pandac$Type* $tmp374 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self);
    t1373 = $tmp374;
    org$pandalanguage$pandac$Type* $tmp376 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_other);
    t2375 = $tmp376;
    panda$core$Bit $tmp378 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t1373);
    bool $tmp377 = $tmp378.value;
    if (!$tmp377) goto $l379;
    panda$core$Bit $tmp380 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t2375);
    $tmp377 = $tmp380.value;
    $l379:;
    panda$core$Bit $tmp381 = { $tmp377 };
    if ($tmp381.value) {
    {
        panda$collections$Set* $tmp383 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
        panda$collections$Set$init($tmp383);
        ancestors382 = $tmp383;
        t384 = self;
        org$pandalanguage$pandac$ClassDecl* $tmp386 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1373);
        cl385 = $tmp386;
        $l387:;
        if (!((panda$core$Bit) { cl385 != NULL }).value) goto $l388;
        {
            panda$collections$Set$add$panda$collections$Set$T(ancestors382, ((panda$collections$Key*) t384));
            if (((panda$core$Bit) { cl385->rawSuper != NULL }).value) {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t384));
                    org$pandalanguage$pandac$Type* $tmp389 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t384, cl385->rawSuper);
                    t384 = $tmp389;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl385));
                    org$pandalanguage$pandac$ClassDecl* $tmp390 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t384);
                    cl385 = $tmp390;
                }
            }
            }
            else {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl385));
                    cl385 = NULL;
                }
            }
            }
        }
        goto $l387;
        $l388:;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t384));
            t384 = p_other;
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl385));
            org$pandalanguage$pandac$ClassDecl* $tmp391 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t2375);
            cl385 = $tmp391;
        }
        $l392:;
        if (!((panda$core$Bit) { cl385 != NULL }).value) goto $l393;
        {
            panda$core$Bit $tmp394 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(ancestors382, ((panda$collections$Key*) t384));
            if ($tmp394.value) {
            {
                {
                    tmp5395 = t384;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t384));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors382));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl385));
                    }
                    {
                        tmp6396 = tmp5395;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1373));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2375));
                        }
                        return tmp6396;
                    }
                }
            }
            }
            if (((panda$core$Bit) { cl385->rawSuper != NULL }).value) {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t384));
                    org$pandalanguage$pandac$Type* $tmp397 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t384, cl385->rawSuper);
                    t384 = $tmp397;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl385));
                    org$pandalanguage$pandac$ClassDecl* $tmp398 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t384);
                    cl385 = $tmp398;
                }
            }
            }
            else {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl385));
                    cl385 = NULL;
                }
            }
            }
        }
        goto $l392;
        $l393:;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t384));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors382));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl385));
        }
    }
    }
    {
        org$pandalanguage$pandac$Type* $tmp400 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        tmp7399 = $tmp400;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1373));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2375));
        }
        return tmp7399;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    panda$core$Int64 $match$506_13403;
    org$pandalanguage$pandac$Type* found405;
    panda$collections$Array* remapped408;
    panda$core$MutableString* name410;
    panda$core$Char8 $tmp413;
    panda$core$String* separator414;
    panda$core$Range$LTpanda$core$Int64$GT $tmp416;
    org$pandalanguage$pandac$Type* child431;
    panda$core$Char8 $tmp442;
    panda$collections$Array* remapped454;
    panda$core$MutableString* name456;
    panda$core$String* separator459;
    panda$core$Range$LTpanda$core$Int64$GT $tmp463;
    org$pandalanguage$pandac$Type* child479;
    org$pandalanguage$pandac$Type* child497;
    panda$core$Char8 $tmp503;
    panda$core$Int64 $tmp401 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp401, ((panda$core$Int64) { 0 }));
    if ($tmp402.value) {
    {
        return self;
    }
    }
    {
        $match$506_13403 = self->typeKind;
        panda$core$Bit $tmp404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_13403, ((panda$core$Int64) { 22 }));
        if ($tmp404.value) {
        {
            panda$core$Object* $tmp406 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
            found405 = ((org$pandalanguage$pandac$Type*) $tmp406);
            if (((panda$core$Bit) { found405 != NULL }).value) {
            {
                return found405;
            }
            }
            return self;
        }
        }
        else {
        panda$core$Bit $tmp407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_13403, ((panda$core$Int64) { 21 }));
        if ($tmp407.value) {
        {
            panda$collections$Array* $tmp409 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp409);
            remapped408 = $tmp409;
            panda$core$MutableString* $tmp411 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$Object* $tmp412 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp411, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp412))->name);
            name410 = $tmp411;
            panda$core$Char8$init$panda$core$UInt8(&$tmp413, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(name410, $tmp413);
            separator414 = &$s415;
            panda$core$Int64 $tmp417 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp416, ((panda$core$Int64) { 0 }), $tmp417, ((panda$core$Bit) { false }));
            int64_t $tmp419 = $tmp416.min.value;
            panda$core$Int64 i418 = { $tmp419 };
            int64_t $tmp421 = $tmp416.max.value;
            bool $tmp422 = $tmp416.inclusive.value;
            if ($tmp422) goto $l429; else goto $l430;
            $l429:;
            if ($tmp419 <= $tmp421) goto $l423; else goto $l425;
            $l430:;
            if ($tmp419 < $tmp421) goto $l423; else goto $l425;
            $l423:;
            {
                panda$core$Object* $tmp432 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i418);
                org$pandalanguage$pandac$Type* $tmp433 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp432), p_types);
                child431 = $tmp433;
                panda$collections$Array$add$panda$collections$Array$T(remapped408, ((panda$core$Object*) child431));
                panda$core$Bit $tmp434 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i418, ((panda$core$Int64) { 0 }));
                if ($tmp434.value) {
                {
                    panda$core$MutableString$append$panda$core$String(name410, separator414);
                    panda$core$MutableString$append$panda$core$String(name410, ((org$pandalanguage$pandac$Symbol*) child431)->name);
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator414));
                        separator414 = &$s435;
                    }
                }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child431));
            }
            $l426:;
            int64_t $tmp437 = $tmp421 - i418.value;
            if ($tmp422) goto $l438; else goto $l439;
            $l438:;
            if ((uint64_t) $tmp437 >= 1) goto $l436; else goto $l425;
            $l439:;
            if ((uint64_t) $tmp437 > 1) goto $l436; else goto $l425;
            $l436:;
            i418.value += 1;
            goto $l423;
            $l425:;
            panda$core$Char8$init$panda$core$UInt8(&$tmp442, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name410, $tmp442);
            org$pandalanguage$pandac$Type* $tmp443 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
            panda$core$String* $tmp444 = panda$core$MutableString$finish$R$panda$core$String(name410);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp443, $tmp444, ((panda$core$Int64) { 21 }), self->position, ((panda$collections$ListView*) remapped408), self->resolved);
            return $tmp443;
        }
        }
        else {
        panda$core$Bit $tmp445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_13403, ((panda$core$Int64) { 11 }));
        if ($tmp445.value) {
        {
            panda$core$Object* $tmp446 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp447 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp446), p_types);
            org$pandalanguage$pandac$Type* $tmp448 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp447);
            return $tmp448;
        }
        }
        else {
        panda$core$Bit $tmp450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_13403, ((panda$core$Int64) { 25 }));
        bool $tmp449 = $tmp450.value;
        if ($tmp449) goto $l451;
        panda$core$Bit $tmp452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_13403, ((panda$core$Int64) { 24 }));
        $tmp449 = $tmp452.value;
        $l451:;
        panda$core$Bit $tmp453 = { $tmp449 };
        if ($tmp453.value) {
        {
            panda$collections$Array* $tmp455 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp455);
            remapped454 = $tmp455;
            panda$core$MutableString* $tmp457 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init$panda$core$String($tmp457, &$s458);
            name456 = $tmp457;
            separator459 = &$s460;
            panda$core$Int64 $tmp461 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Bit $tmp462 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp461, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp462.value);
            panda$core$Int64 $tmp464 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp465 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp464, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp463, ((panda$core$Int64) { 0 }), $tmp465, ((panda$core$Bit) { false }));
            int64_t $tmp467 = $tmp463.min.value;
            panda$core$Int64 i466 = { $tmp467 };
            int64_t $tmp469 = $tmp463.max.value;
            bool $tmp470 = $tmp463.inclusive.value;
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
                panda$core$MutableString$append$panda$core$String(name456, separator459);
                panda$core$MutableString$append$panda$core$String(name456, ((org$pandalanguage$pandac$Symbol*) child479)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped454, ((panda$core$Object*) child479));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator459));
                    separator459 = &$s482;
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child479));
            }
            $l474:;
            int64_t $tmp484 = $tmp469 - i466.value;
            if ($tmp470) goto $l485; else goto $l486;
            $l485:;
            if ((uint64_t) $tmp484 >= 1) goto $l483; else goto $l473;
            $l486:;
            if ((uint64_t) $tmp484 > 1) goto $l483; else goto $l473;
            $l483:;
            i466.value += 1;
            goto $l471;
            $l473:;
            panda$core$Bit $tmp489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
            if ($tmp489.value) {
            {
                panda$core$MutableString$append$panda$core$String(name456, &$s490);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(name456, &$s491);
            }
            }
            panda$core$Int64 $tmp492 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp493 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp492, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp494 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp493);
            org$pandalanguage$pandac$Type* $tmp495 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp496 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp494), $tmp495);
            if ($tmp496.value) {
            {
                panda$core$Int64 $tmp498 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp499 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp498, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp500 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp499);
                org$pandalanguage$pandac$Type* $tmp501 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp500), p_types);
                child497 = $tmp501;
                panda$core$MutableString$append$panda$core$String(name456, ((org$pandalanguage$pandac$Symbol*) child497)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped454, ((panda$core$Object*) child497));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child497));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp502 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                panda$collections$Array$add$panda$collections$Array$T(remapped454, ((panda$core$Object*) $tmp502));
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp503, ((panda$core$UInt8) { 41 }));
            panda$core$MutableString$append$panda$core$Char8(name456, $tmp503);
            org$pandalanguage$pandac$Type* $tmp504 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
            panda$core$String* $tmp505 = panda$core$MutableString$finish$R$panda$core$String(name456);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp504, $tmp505, self->typeKind, self->position, ((panda$collections$ListView*) remapped454), self->resolved);
            return $tmp504;
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
    panda$core$Int64 $tmp506 = panda$core$String$hash$R$panda$core$Int64(self->name);
    return $tmp506;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    return self->name;
}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->subtypes));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->test));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameter));
}

