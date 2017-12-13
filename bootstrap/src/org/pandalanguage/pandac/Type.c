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
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 226778935, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 218598044, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74\x3F", 18, 6054680304062974916, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6C\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x72\x69\x6E\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, -6710647184408424492, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x62\x69\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, 7795433833837333484, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x74\x6F\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x62\x6C\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x50\x61\x6E\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x76\x61\x6C\x69\x64\x3E", 9, 1754774734872970466, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 164, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 146931305, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 14839819243, NULL };

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
    panda$core$Bit $tmp57 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp56 = $tmp57.value;
    if ($tmp56) goto $l58;
    panda$core$Bit $tmp59 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp56 = $tmp59.value;
    $l58:;
    panda$core$Bit $tmp60 = { $tmp56 };
    PANDA_ASSERT($tmp60.value);
    return self->position.line;
}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp61 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    return $tmp61;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp62 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    return $tmp62;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp66;
    org$pandalanguage$pandac$Type* $tmp63 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp63->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp63->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp66);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp63, &$s65, ((panda$core$Int64) { 14 }), $tmp66, ((panda$core$Bit) { true }));
    return $tmp63;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp70;
    org$pandalanguage$pandac$Type* $tmp67 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp67->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp67->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp70);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp67, &$s69, ((panda$core$Int64) { 23 }), $tmp70, ((panda$core$Bit) { true }));
    return $tmp67;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp74;
    org$pandalanguage$pandac$Type* $tmp71 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp71->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp71->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp74);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp71, &$s73, ((panda$core$Int64) { 10 }), $tmp74, ((panda$core$Bit) { true }));
    return $tmp71;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes75;
    org$pandalanguage$pandac$Position $tmp82;
    panda$collections$Array* $tmp76 = (panda$collections$Array*) malloc(40);
    $tmp76->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp76->refCount.value = 1;
    panda$collections$Array$init($tmp76);
    subtypes75 = $tmp76;
    org$pandalanguage$pandac$Type* $tmp78 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes75, ((panda$core$Object*) $tmp78));
    org$pandalanguage$pandac$Type* $tmp79 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp79->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp79->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp82);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp79, &$s81, ((panda$core$Int64) { 11 }), $tmp82, ((panda$collections$ListView*) subtypes75), ((panda$core$Bit) { true }));
    return $tmp79;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp86;
    org$pandalanguage$pandac$Type* $tmp83 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp83->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp83->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp86);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp83, &$s85, ((panda$core$Int64) { 10 }), $tmp86, ((panda$core$Bit) { true }));
    return $tmp83;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp90;
    org$pandalanguage$pandac$Type* $tmp87 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp87->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp87->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp90);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp87, &$s89, ((panda$core$Int64) { 10 }), $tmp90, ((panda$core$Bit) { true }));
    return $tmp87;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp94;
    org$pandalanguage$pandac$Type* $tmp91 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp91->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp91->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp94);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp91, &$s93, ((panda$core$Int64) { 10 }), $tmp94, ((panda$core$Bit) { true }));
    return $tmp91;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp95 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp95->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp95->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp95, &$s97, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 8 }));
    return $tmp95;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp98 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp98->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp98->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp98, &$s100, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 16 }));
    return $tmp98;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp101 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp101->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp101->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp101, &$s103, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 32 }));
    return $tmp101;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp104 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp104->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp104->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp104, &$s106, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 64 }));
    return $tmp104;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp107 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp107->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp107->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp107, &$s109, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 8 }));
    return $tmp107;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp110 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp110->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp110->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp110, &$s112, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 16 }));
    return $tmp110;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp113 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp113->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp113->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp113, &$s115, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 32 }));
    return $tmp113;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $tmp116 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp116->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp116->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp116, &$s118, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 64 }));
    return $tmp116;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp122;
    org$pandalanguage$pandac$Type* $tmp119 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp119->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp119->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp122);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp119, &$s121, ((panda$core$Int64) { 10 }), $tmp122, ((panda$core$Bit) { true }));
    return $tmp119;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp126;
    org$pandalanguage$pandac$Type* $tmp123 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp123->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp123->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp126);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp123, &$s125, ((panda$core$Int64) { 10 }), $tmp126, ((panda$core$Bit) { true }));
    return $tmp123;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp130;
    org$pandalanguage$pandac$Type* $tmp127 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp127->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp127->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp130);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp127, &$s129, ((panda$core$Int64) { 10 }), $tmp130, ((panda$core$Bit) { true }));
    return $tmp127;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp134;
    org$pandalanguage$pandac$Type* $tmp131 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp131->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp131->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp134);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp131, &$s133, ((panda$core$Int64) { 10 }), $tmp134, ((panda$core$Bit) { true }));
    return $tmp131;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp138;
    org$pandalanguage$pandac$Type* $tmp135 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp135->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp135->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp138);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp135, &$s137, ((panda$core$Int64) { 10 }), $tmp138, ((panda$core$Bit) { true }));
    return $tmp135;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp142;
    org$pandalanguage$pandac$Type* $tmp139 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp139->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp139->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp142);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp139, &$s141, ((panda$core$Int64) { 10 }), $tmp142, ((panda$core$Bit) { true }));
    return $tmp139;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp146;
    org$pandalanguage$pandac$Type* $tmp143 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp143->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp143->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp146);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp143, &$s145, ((panda$core$Int64) { 10 }), $tmp146, ((panda$core$Bit) { true }));
    return $tmp143;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp150;
    org$pandalanguage$pandac$Type* $tmp147 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp147->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp147->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp150);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp147, &$s149, ((panda$core$Int64) { 10 }), $tmp150, ((panda$core$Bit) { true }));
    return $tmp147;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp154;
    org$pandalanguage$pandac$Type* $tmp151 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp151->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp151->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp154);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp151, &$s153, ((panda$core$Int64) { 10 }), $tmp154, ((panda$core$Bit) { true }));
    return $tmp151;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp158;
    org$pandalanguage$pandac$Type* $tmp155 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp155->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp155->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp158);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp155, &$s157, ((panda$core$Int64) { 10 }), $tmp158, ((panda$core$Bit) { true }));
    return $tmp155;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp162;
    org$pandalanguage$pandac$Type* $tmp159 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp159->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp159->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp162);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp159, &$s161, ((panda$core$Int64) { 10 }), $tmp162, ((panda$core$Bit) { true }));
    return $tmp159;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp166;
    org$pandalanguage$pandac$Type* $tmp163 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp163->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp163->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp166);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp163, &$s165, ((panda$core$Int64) { 10 }), $tmp166, ((panda$core$Bit) { true }));
    return $tmp163;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp170;
    org$pandalanguage$pandac$Type* $tmp167 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp167->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp167->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp170);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp167, &$s169, ((panda$core$Int64) { 15 }), $tmp170, ((panda$core$Bit) { true }));
    return $tmp167;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp174;
    org$pandalanguage$pandac$Type* $tmp171 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp171->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp171->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp174);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp171, &$s173, ((panda$core$Int64) { 18 }), $tmp174, ((panda$core$Bit) { true }));
    return $tmp171;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp178;
    org$pandalanguage$pandac$Type* $tmp175 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp175->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp175->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp178);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp175, &$s177, ((panda$core$Int64) { 19 }), $tmp178, ((panda$core$Bit) { true }));
    return $tmp175;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp182;
    org$pandalanguage$pandac$Type* $tmp179 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp179->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp179->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp182);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp179, &$s181, ((panda$core$Int64) { 10 }), $tmp182, ((panda$core$Bit) { true }));
    return $tmp179;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp186;
    org$pandalanguage$pandac$Type* $tmp183 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp183->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp183->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp186);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp183, &$s185, ((panda$core$Int64) { 10 }), $tmp186, ((panda$core$Bit) { true }));
    return $tmp183;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp190;
    org$pandalanguage$pandac$Type* $tmp187 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp187->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp187->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp190);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp187, &$s189, ((panda$core$Int64) { 10 }), $tmp190, ((panda$core$Bit) { true }));
    return $tmp187;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children191;
    org$pandalanguage$pandac$Position $tmp197;
    panda$collections$Array* $tmp192 = (panda$collections$Array*) malloc(40);
    $tmp192->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp192->refCount.value = 1;
    panda$collections$Array$init($tmp192);
    children191 = $tmp192;
    org$pandalanguage$pandac$Type* $tmp194 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp194->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp194->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp197);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp194, &$s196, ((panda$core$Int64) { 10 }), $tmp197, ((panda$core$Bit) { true }));
    panda$collections$Array$add$panda$collections$Array$T(children191, ((panda$core$Object*) $tmp194));
    panda$collections$Array$add$panda$collections$Array$T(children191, ((panda$core$Object*) p_t));
    org$pandalanguage$pandac$Type* $tmp198 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp198->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp198->refCount.value = 1;
    panda$core$String* $tmp201 = panda$core$String$convert$R$panda$core$String(&$s200);
    panda$core$String* $tmp203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp201, &$s202);
    panda$core$String* $tmp204 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp203, ((panda$core$Object*) p_t));
    panda$core$String* $tmp206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp204, &$s205);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp198, $tmp206, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children191), p_t->resolved);
    return $tmp198;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_endPoint, org$pandalanguage$pandac$Type* p_step) {
    panda$collections$Array* children207;
    org$pandalanguage$pandac$Position $tmp213;
    panda$collections$Array* $tmp208 = (panda$collections$Array*) malloc(40);
    $tmp208->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp208->refCount.value = 1;
    panda$collections$Array$init($tmp208);
    children207 = $tmp208;
    org$pandalanguage$pandac$Type* $tmp210 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp210->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp210->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp213);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp210, &$s212, ((panda$core$Int64) { 10 }), $tmp213, ((panda$core$Bit) { true }));
    panda$collections$Array$add$panda$collections$Array$T(children207, ((panda$core$Object*) $tmp210));
    panda$collections$Array$add$panda$collections$Array$T(children207, ((panda$core$Object*) p_endPoint));
    panda$collections$Array$add$panda$collections$Array$T(children207, ((panda$core$Object*) p_step));
    org$pandalanguage$pandac$Type* $tmp214 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp214->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp214->refCount.value = 1;
    panda$core$String* $tmp217 = panda$core$String$convert$R$panda$core$String(&$s216);
    panda$core$String* $tmp219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp217, &$s218);
    panda$core$String* $tmp220 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp219, ((panda$core$Object*) p_endPoint));
    panda$core$String* $tmp222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp220, &$s221);
    panda$core$String* $tmp223 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp222, ((panda$core$Object*) p_step));
    panda$core$String* $tmp225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp223, &$s224);
    bool $tmp226 = p_endPoint->resolved.value;
    if (!$tmp226) goto $l227;
    $tmp226 = p_step->resolved.value;
    $l227:;
    panda$core$Bit $tmp228 = { $tmp226 };
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp214, $tmp225, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_endPoint)->position, ((panda$collections$ListView*) children207), $tmp228);
    return $tmp214;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Position $tmp232;
    org$pandalanguage$pandac$Type* $tmp229 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp229->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp229->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp232);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp229, &$s231, ((panda$core$Int64) { 16 }), $tmp232, ((panda$core$Bit) { true }));
    return $tmp229;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp235 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s234);
    bool $tmp233 = $tmp235.value;
    if ($tmp233) goto $l236;
    panda$core$Bit $tmp238 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s237);
    $tmp233 = $tmp238.value;
    $l236:;
    panda$core$Bit $tmp239 = { $tmp233 };
    return $tmp239;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 12 }));
    bool $tmp241 = $tmp242.value;
    if ($tmp241) goto $l243;
    panda$core$Bit $tmp244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 13 }));
    $tmp241 = $tmp244.value;
    $l243:;
    panda$core$Bit $tmp245 = { $tmp241 };
    bool $tmp240 = $tmp245.value;
    if ($tmp240) goto $l246;
    panda$core$Bit $tmp247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 15 }));
    $tmp240 = $tmp247.value;
    $l246:;
    panda$core$Bit $tmp248 = { $tmp240 };
    return $tmp248;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp250 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s249);
    return $tmp250;
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
    panda$core$Bit $tmp252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 25 }));
    bool $tmp251 = $tmp252.value;
    if ($tmp251) goto $l253;
    panda$core$Bit $tmp254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
    $tmp251 = $tmp254.value;
    $l253:;
    panda$core$Bit $tmp255 = { $tmp251 };
    return $tmp255;
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp257 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s256);
    return $tmp257;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp258.value) {
    {
        panda$core$Object* $tmp259 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp260 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp259));
        return $tmp260;
    }
    }
    panda$core$Bit $tmp262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp261 = $tmp262.value;
    if (!$tmp261) goto $l263;
    panda$core$Object* $tmp264 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp266 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp264))->name, &$s265);
    $tmp261 = $tmp266.value;
    $l263:;
    panda$core$Bit $tmp267 = { $tmp261 };
    return $tmp267;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $tmp268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp268.value) {
    {
        panda$core$Object* $tmp269 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp270 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp269));
        return $tmp270;
    }
    }
    panda$core$Bit $tmp272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp271 = $tmp272.value;
    if (!$tmp271) goto $l273;
    panda$core$Object* $tmp274 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp276 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp274))->name, &$s275);
    $tmp271 = $tmp276.value;
    $l273:;
    panda$core$Bit $tmp277 = { $tmp271 };
    return $tmp277;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    panda$collections$Array* subtypes279;
    org$pandalanguage$pandac$Position $tmp287;
    panda$core$Bit $tmp278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp278.value) {
    {
        return self;
    }
    }
    panda$collections$Array* $tmp280 = (panda$collections$Array*) malloc(40);
    $tmp280->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp280->refCount.value = 1;
    panda$collections$Array$init($tmp280);
    subtypes279 = $tmp280;
    panda$collections$Array$add$panda$collections$Array$T(subtypes279, ((panda$core$Object*) self));
    org$pandalanguage$pandac$Type* $tmp282 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp282->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp282->refCount.value = 1;
    panda$core$String* $tmp284 = panda$core$String$convert$R$panda$core$String(self->name);
    panda$core$String* $tmp286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp284, &$s285);
    org$pandalanguage$pandac$Position$init(&$tmp287);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp282, $tmp286, ((panda$core$Int64) { 11 }), $tmp287, ((panda$collections$ListView*) subtypes279), ((panda$core$Bit) { true }));
    return $tmp282;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $tmp288 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
    if ($tmp288.value) {
    {
        return self;
    }
    }
    org$pandalanguage$pandac$Type* $tmp289 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp290 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp289);
    if ($tmp290.value) {
    {
        panda$core$Bit $tmp291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp291.value) {
        {
            return p_other;
        }
        }
        org$pandalanguage$pandac$Type* $tmp292 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
        return $tmp292;
    }
    }
    org$pandalanguage$pandac$Type* $tmp293 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp294 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp293);
    if ($tmp294.value) {
    {
        panda$core$Bit $tmp295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp295.value) {
        {
            return self;
        }
        }
        org$pandalanguage$pandac$Type* $tmp296 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
        return $tmp296;
    }
    }
    org$pandalanguage$pandac$Type* $tmp298 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp299 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp298);
    bool $tmp297 = $tmp299.value;
    if (!$tmp297) goto $l300;
    panda$core$Bit $tmp301 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
    $tmp297 = $tmp301.value;
    $l300:;
    panda$core$Bit $tmp302 = { $tmp297 };
    if ($tmp302.value) {
    {
        return p_other;
    }
    }
    panda$core$Bit $tmp304 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp303 = $tmp304.value;
    if (!$tmp303) goto $l305;
    org$pandalanguage$pandac$Type* $tmp306 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp307 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp306);
    $tmp303 = $tmp307.value;
    $l305:;
    panda$core$Bit $tmp308 = { $tmp303 };
    if ($tmp308.value) {
    {
        return self;
    }
    }
    panda$core$Bit $tmp309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp309.value) {
    {
        panda$core$Object* $tmp310 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp311 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp310), p_other);
        org$pandalanguage$pandac$Type* $tmp312 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp311);
        return $tmp312;
    }
    }
    panda$core$Bit $tmp313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp313.value) {
    {
        panda$core$Object* $tmp314 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp315 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp314));
        org$pandalanguage$pandac$Type* $tmp316 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp315);
        return $tmp316;
    }
    }
    org$pandalanguage$pandac$Type* $tmp317 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
    return $tmp317;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    org$pandalanguage$pandac$Type* found320;
    panda$collections$Array* remapped322;
    panda$core$MutableString* name325;
    panda$core$Char8 $tmp329;
    panda$core$String* separator330;
    panda$core$Range$LTpanda$core$Int64$GT $tmp332;
    org$pandalanguage$pandac$Type* child347;
    panda$core$Char8 $tmp358;
    panda$collections$Array* remapped365;
    panda$core$MutableString* name368;
    panda$core$String* separator372;
    panda$core$Range$LTpanda$core$Int64$GT $tmp376;
    org$pandalanguage$pandac$Type* child392;
    org$pandalanguage$pandac$Type* child410;
    panda$core$Char8 $tmp416;
    panda$core$Int64 $tmp318 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp318, ((panda$core$Int64) { 0 }));
    if ($tmp319.value) {
    {
        return self;
    }
    }
    switch (self->typeKind.value) {
        case 22:
        {
            panda$core$Object* $tmp321 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
            found320 = ((org$pandalanguage$pandac$Type*) $tmp321);
            if (((panda$core$Bit) { found320 != NULL }).value) {
            {
                return found320;
            }
            }
            return self;
        }
        break;
        case 21:
        {
            panda$collections$Array* $tmp323 = (panda$collections$Array*) malloc(40);
            $tmp323->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp323->refCount.value = 1;
            panda$collections$Array$init($tmp323);
            remapped322 = $tmp323;
            panda$core$MutableString* $tmp326 = (panda$core$MutableString*) malloc(48);
            $tmp326->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp326->refCount.value = 1;
            panda$core$Object* $tmp328 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp326, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp328))->name);
            name325 = $tmp326;
            panda$core$Char8$init$panda$core$UInt8(&$tmp329, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(name325, $tmp329);
            separator330 = &$s331;
            panda$core$Int64 $tmp333 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp332, ((panda$core$Int64) { 0 }), $tmp333, ((panda$core$Bit) { false }));
            int64_t $tmp335 = $tmp332.min.value;
            panda$core$Int64 i334 = { $tmp335 };
            int64_t $tmp337 = $tmp332.max.value;
            bool $tmp338 = $tmp332.inclusive.value;
            if ($tmp338) goto $l345; else goto $l346;
            $l345:;
            if ($tmp335 <= $tmp337) goto $l339; else goto $l341;
            $l346:;
            if ($tmp335 < $tmp337) goto $l339; else goto $l341;
            $l339:;
            {
                panda$core$Object* $tmp348 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i334);
                org$pandalanguage$pandac$Type* $tmp349 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp348), p_types);
                child347 = $tmp349;
                panda$collections$Array$add$panda$collections$Array$T(remapped322, ((panda$core$Object*) child347));
                panda$core$Bit $tmp350 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i334, ((panda$core$Int64) { 0 }));
                if ($tmp350.value) {
                {
                    panda$core$MutableString$append$panda$core$String(name325, separator330);
                    panda$core$MutableString$append$panda$core$String(name325, ((org$pandalanguage$pandac$Symbol*) child347)->name);
                    separator330 = &$s351;
                }
                }
            }
            $l342:;
            int64_t $tmp353 = $tmp337 - i334.value;
            if ($tmp338) goto $l354; else goto $l355;
            $l354:;
            if ($tmp353 >= 1) goto $l352; else goto $l341;
            $l355:;
            if ($tmp353 > 1) goto $l352; else goto $l341;
            $l352:;
            i334.value += 1;
            goto $l339;
            $l341:;
            panda$core$Char8$init$panda$core$UInt8(&$tmp358, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name325, $tmp358);
            org$pandalanguage$pandac$Type* $tmp359 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp359->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp359->refCount.value = 1;
            panda$core$String* $tmp361 = panda$core$MutableString$finish$R$panda$core$String(name325);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp359, $tmp361, ((panda$core$Int64) { 21 }), self->position, ((panda$collections$ListView*) remapped322), self->resolved);
            return $tmp359;
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp362 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp363 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp362), p_types);
            org$pandalanguage$pandac$Type* $tmp364 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp363);
            return $tmp364;
        }
        break;
        case 25:
        case 24:
        {
            panda$collections$Array* $tmp366 = (panda$collections$Array*) malloc(40);
            $tmp366->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp366->refCount.value = 1;
            panda$collections$Array$init($tmp366);
            remapped365 = $tmp366;
            panda$core$MutableString* $tmp369 = (panda$core$MutableString*) malloc(48);
            $tmp369->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp369->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp369, &$s371);
            name368 = $tmp369;
            separator372 = &$s373;
            panda$core$Int64 $tmp374 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Bit $tmp375 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp374, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp375.value);
            panda$core$Int64 $tmp377 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp378 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp377, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp376, ((panda$core$Int64) { 0 }), $tmp378, ((panda$core$Bit) { false }));
            int64_t $tmp380 = $tmp376.min.value;
            panda$core$Int64 i379 = { $tmp380 };
            int64_t $tmp382 = $tmp376.max.value;
            bool $tmp383 = $tmp376.inclusive.value;
            if ($tmp383) goto $l390; else goto $l391;
            $l390:;
            if ($tmp380 <= $tmp382) goto $l384; else goto $l386;
            $l391:;
            if ($tmp380 < $tmp382) goto $l384; else goto $l386;
            $l384:;
            {
                panda$core$Object* $tmp393 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i379);
                org$pandalanguage$pandac$Type* $tmp394 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp393), p_types);
                child392 = $tmp394;
                panda$core$MutableString$append$panda$core$String(name368, separator372);
                panda$core$MutableString$append$panda$core$String(name368, ((org$pandalanguage$pandac$Symbol*) child392)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped365, ((panda$core$Object*) child392));
                separator372 = &$s395;
            }
            $l387:;
            int64_t $tmp397 = $tmp382 - i379.value;
            if ($tmp383) goto $l398; else goto $l399;
            $l398:;
            if ($tmp397 >= 1) goto $l396; else goto $l386;
            $l399:;
            if ($tmp397 > 1) goto $l396; else goto $l386;
            $l396:;
            i379.value += 1;
            goto $l384;
            $l386:;
            panda$core$Bit $tmp402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind, ((panda$core$Int64) { 24 }));
            if ($tmp402.value) {
            {
                panda$core$MutableString$append$panda$core$String(name368, &$s403);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(name368, &$s404);
            }
            }
            panda$core$Int64 $tmp405 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
            panda$core$Int64 $tmp406 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp405, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp407 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp406);
            org$pandalanguage$pandac$Type* $tmp408 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp409 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp407), $tmp408);
            if ($tmp409.value) {
            {
                panda$core$Int64 $tmp411 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp412 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp411, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp413 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp412);
                org$pandalanguage$pandac$Type* $tmp414 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp413), p_types);
                child410 = $tmp414;
                panda$core$MutableString$append$panda$core$String(name368, ((org$pandalanguage$pandac$Symbol*) child410)->name);
                panda$collections$Array$add$panda$collections$Array$T(remapped365, ((panda$core$Object*) child410));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp415 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                panda$collections$Array$add$panda$collections$Array$T(remapped365, ((panda$core$Object*) $tmp415));
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp416, ((panda$core$UInt8) { 41 }));
            panda$core$MutableString$append$panda$core$Char8(name368, $tmp416);
            org$pandalanguage$pandac$Type* $tmp417 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp417->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp417->refCount.value = 1;
            panda$core$String* $tmp419 = panda$core$MutableString$finish$R$panda$core$String(name368);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp417, $tmp419, self->typeKind, self->position, ((panda$collections$ListView*) remapped365), self->resolved);
            return $tmp417;
        }
        break;
        default:
        {
            return self;
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $tmp420 = panda$core$String$hash$R$panda$core$Int64(self->name);
    return $tmp420;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    return self->name;
}

