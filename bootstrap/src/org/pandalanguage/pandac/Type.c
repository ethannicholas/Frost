#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/Array.h"
#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/core/Weak.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/UInt64.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim(org$pandalanguage$pandac$Type* self, panda$core$Equatable* p0) {
    panda$core$Bit result = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Type*) p0));
    return result;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim(org$pandalanguage$pandac$Type* self, panda$core$Equatable* p0) {
    panda$core$Bit result = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Type*) p0));
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Type$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { org$pandalanguage$pandac$Type$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$pandac$Type$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$collections$Key, { org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim} };

static panda$core$String $s1;
org$pandalanguage$pandac$Type$class_type org$pandalanguage$pandac$Type$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$core$Equatable, { org$pandalanguage$pandac$Type$convert$R$panda$core$String, org$pandalanguage$pandac$Type$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$Type$size$R$panda$core$Int64, org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit, org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit, org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit, org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit, org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit, org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit, org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$hash$R$panda$core$Int64} };

typedef panda$collections$Iterator* (*$fn50)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn57)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn68)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn121)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn128)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn139)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn190)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn197)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn208)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 29, -3248623696866231612, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x3c", 11, 184897716878203264, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, 14840062047, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, 1498821743785, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 6054680304062974916, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 20, 4030834267849819614, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 28, 5895082338763246016, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28", 15, -3021679630176935088, NULL };
static panda$core$String $s534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28\x2d", 16, 8405006605191933629, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x61\x6c\x4c\x69\x74\x65\x72\x61\x6c\x28", 12, -1124881342984568394, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s605 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, -1766462995282165597, NULL };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, -1180377256514028899, NULL };
static panda$core$String $s634 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s687 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s723 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s758 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s853 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s999 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s1245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s1247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, 14840062047, NULL };
static panda$core$String $s1249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, 1498821743785, NULL };

void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, org$pandalanguage$pandac$Type$Kind p_typeKind, org$pandalanguage$pandac$Position p_position) {
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit(self, p_name, p_typeKind, p_position, ((panda$core$Bit) { false }));
}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, org$pandalanguage$pandac$Type$Kind p_typeKind, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_resolved) {
    panda$collections$Array* $tmp2;
    panda$collections$Array* $tmp3;
    org$pandalanguage$pandac$Symbol$Kind $tmp4;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->position = p_position;
    self->resolved = p_resolved;
    {
        $tmp2 = self->subtypes;
        $tmp3 = NULL;
        self->subtypes = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp4, ((panda$core$Int64) { 6 }));
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp4, p_position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, org$pandalanguage$pandac$Type$Kind p_typeKind, panda$core$Int64 p_size) {
    org$pandalanguage$pandac$Position $tmp8;
    panda$collections$Array* $tmp9;
    panda$collections$Array* $tmp10;
    org$pandalanguage$pandac$Symbol$Kind $tmp11;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    panda$core$Bit $tmp6 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s5);
    panda$core$Bit $tmp7 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6);
    PANDA_ASSERT($tmp7.value);
    self->typeKind = p_typeKind;
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp8, p_size, p_size);
    ((org$pandalanguage$pandac$Symbol*) self)->position = $tmp8;
    self->resolved = ((panda$core$Bit) { true });
    {
        $tmp9 = self->subtypes;
        $tmp10 = NULL;
        self->subtypes = $tmp10;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
    }
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp11, ((panda$core$Int64) { 6 }));
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp11, self->position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, org$pandalanguage$pandac$Type$Kind p_typeKind, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_subtypes, panda$core$Bit p_resolved) {
    panda$collections$Array* $tmp21;
    panda$collections$Array* $tmp22;
    panda$collections$Array* $tmp23;
    org$pandalanguage$pandac$Symbol$Kind $tmp25;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    panda$core$Bit $tmp12 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp14 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s13);
    panda$core$Bit $tmp15 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp12, $tmp14);
    PANDA_ASSERT($tmp15.value);
    panda$core$Bit $tmp16 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind.$rawValue, ((panda$core$Int64) { 11 }));
    panda$core$Bit $tmp18 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s17);
    panda$core$Bit $tmp19 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp16, $tmp18);
    PANDA_ASSERT($tmp19.value);
    panda$core$Bit $tmp20 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_typeKind.$rawValue, ((panda$core$Int64) { 12 }));
    PANDA_ASSERT($tmp20.value);
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->position = p_position;
    self->resolved = p_resolved;
    {
        $tmp21 = self->subtypes;
        panda$collections$Array* $tmp24 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp24, p_subtypes);
        $tmp23 = $tmp24;
        $tmp22 = $tmp23;
        self->subtypes = $tmp22;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp22));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp23));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
    }
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp25, ((panda$core$Int64) { 6 }));
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp25, p_position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Type* self, panda$collections$ListView* p_subtypes) {
    org$pandalanguage$pandac$Type$Kind $tmp29;
    panda$collections$Array* $tmp30;
    panda$collections$Array* $tmp31;
    panda$collections$Array* $tmp32;
    panda$core$MutableString* name34 = NULL;
    panda$core$MutableString* $tmp35;
    panda$core$MutableString* $tmp36;
    panda$core$String* separator39 = NULL;
    panda$core$String* $tmp40;
    panda$collections$Iterator* Iter$76$945 = NULL;
    panda$collections$Iterator* $tmp46;
    panda$collections$Iterator* $tmp47;
    org$pandalanguage$pandac$Type* t63 = NULL;
    org$pandalanguage$pandac$Type* $tmp64;
    panda$core$Object* $tmp65;
    panda$core$String* $tmp70;
    panda$core$String* $tmp71;
    panda$core$Char8 $tmp78;
    org$pandalanguage$pandac$Symbol$Kind $tmp79;
    panda$core$String* $tmp80;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    int $tmp28;
    {
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp29, ((panda$core$Int64) { 7 }));
        self->typeKind = $tmp29;
        {
            $tmp30 = self->subtypes;
            panda$collections$Array* $tmp33 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp33, p_subtypes);
            $tmp32 = $tmp33;
            $tmp31 = $tmp32;
            self->subtypes = $tmp31;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp31));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp30));
        }
        panda$core$MutableString* $tmp37 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp37, &$s38);
        $tmp36 = $tmp37;
        $tmp35 = $tmp36;
        name34 = $tmp35;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
        $tmp40 = &$s41;
        separator39 = $tmp40;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp40));
        self->resolved = ((panda$core$Bit) { true });
        {
            int $tmp44;
            {
                ITable* $tmp48 = ((panda$collections$Iterable*) p_subtypes)->$class->itable;
                while ($tmp48->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp48 = $tmp48->next;
                }
                $fn50 $tmp49 = $tmp48->methods[0];
                panda$collections$Iterator* $tmp51 = $tmp49(((panda$collections$Iterable*) p_subtypes));
                $tmp47 = $tmp51;
                $tmp46 = $tmp47;
                Iter$76$945 = $tmp46;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp46));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
                $l52:;
                ITable* $tmp55 = Iter$76$945->$class->itable;
                while ($tmp55->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp55 = $tmp55->next;
                }
                $fn57 $tmp56 = $tmp55->methods[0];
                panda$core$Bit $tmp58 = $tmp56(Iter$76$945);
                panda$core$Bit $tmp59 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp58);
                bool $tmp54 = $tmp59.value;
                if (!$tmp54) goto $l53;
                {
                    int $tmp62;
                    {
                        ITable* $tmp66 = Iter$76$945->$class->itable;
                        while ($tmp66->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp66 = $tmp66->next;
                        }
                        $fn68 $tmp67 = $tmp66->methods[1];
                        panda$core$Object* $tmp69 = $tmp67(Iter$76$945);
                        $tmp65 = $tmp69;
                        $tmp64 = ((org$pandalanguage$pandac$Type*) $tmp65);
                        t63 = $tmp64;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp64));
                        panda$core$Panda$unref$panda$core$Object($tmp65);
                        panda$core$MutableString$append$panda$core$String(name34, separator39);
                        panda$core$MutableString$append$panda$core$Object(name34, ((panda$core$Object*) t63));
                        {
                            $tmp70 = separator39;
                            $tmp71 = &$s72;
                            separator39 = $tmp71;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp71));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp70));
                        }
                        bool $tmp73 = self->resolved.value;
                        if (!$tmp73) goto $l74;
                        $tmp73 = t63->resolved.value;
                        $l74:;
                        panda$core$Bit $tmp75 = { $tmp73 };
                        self->resolved = $tmp75;
                    }
                    $tmp62 = -1;
                    goto $l60;
                    $l60:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t63));
                    t63 = NULL;
                    switch ($tmp62) {
                        case -1: goto $l76;
                    }
                    $l76:;
                }
                goto $l52;
                $l53:;
            }
            $tmp44 = -1;
            goto $l42;
            $l42:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$76$945));
            Iter$76$945 = NULL;
            switch ($tmp44) {
                case -1: goto $l77;
            }
            $l77:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp78, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name34, $tmp78);
        org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp79, ((panda$core$Int64) { 6 }));
        panda$core$String* $tmp81 = panda$core$MutableString$finish$R$panda$core$String(name34);
        $tmp80 = $tmp81;
        org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp79, self->position, $tmp80);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
    }
    $tmp28 = -1;
    goto $l26;
    $l26:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator39));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name34));
    name34 = NULL;
    separator39 = NULL;
    switch ($tmp28) {
        case -1: goto $l82;
    }
    $l82:;
}
void org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$ClassDecl$GenericParameter* p_param) {
    org$pandalanguage$pandac$Type$Kind $tmp83;
    panda$core$Weak* $tmp84;
    panda$core$Weak* $tmp85;
    panda$core$Weak* $tmp86;
    panda$collections$Array* $tmp88;
    panda$collections$Array* $tmp89;
    org$pandalanguage$pandac$Symbol$Kind $tmp90;
    panda$core$String* $tmp91;
    panda$core$String* $tmp92;
    panda$core$String* $tmp93;
    panda$core$String* $tmp94;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp83, ((panda$core$Int64) { 12 }));
    self->typeKind = $tmp83;
    {
        $tmp84 = self->parameter;
        panda$core$Weak* $tmp87 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp87, ((panda$core$Object*) p_param));
        $tmp86 = $tmp87;
        $tmp85 = $tmp86;
        self->parameter = $tmp85;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp85));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
    }
    self->resolved = ((panda$core$Bit) { true });
    {
        $tmp88 = self->subtypes;
        $tmp89 = NULL;
        self->subtypes = $tmp89;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp89));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp88));
    }
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp90, ((panda$core$Int64) { 6 }));
    panda$core$String* $tmp95 = panda$core$String$convert$R$panda$core$String(p_param->owner);
    $tmp94 = $tmp95;
    panda$core$String* $tmp97 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp94, &$s96);
    $tmp93 = $tmp97;
    panda$core$String* $tmp98 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp93, ((org$pandalanguage$pandac$Symbol*) p_param)->name);
    $tmp92 = $tmp98;
    panda$core$String* $tmp100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp92, &$s99);
    $tmp91 = $tmp100;
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp90, self->position, $tmp91);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp91));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp92));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp93));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp94));
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_base, panda$collections$ListView* p_arguments) {
    panda$core$Bit resolved104;
    panda$core$MutableString* name105 = NULL;
    panda$core$MutableString* $tmp106;
    panda$core$MutableString* $tmp107;
    panda$core$Char8 $tmp109;
    panda$core$String* separator110 = NULL;
    panda$core$String* $tmp111;
    panda$collections$Iterator* Iter$101$9116 = NULL;
    panda$collections$Iterator* $tmp117;
    panda$collections$Iterator* $tmp118;
    org$pandalanguage$pandac$Type* a134 = NULL;
    org$pandalanguage$pandac$Type* $tmp135;
    panda$core$Object* $tmp136;
    panda$core$String* $tmp144;
    panda$core$String* $tmp145;
    panda$core$Char8 $tmp149;
    panda$collections$Array* subtypes150 = NULL;
    panda$collections$Array* $tmp151;
    panda$collections$Array* $tmp152;
    org$pandalanguage$pandac$Type* $returnValue154;
    org$pandalanguage$pandac$Type* $tmp155;
    org$pandalanguage$pandac$Type* $tmp156;
    panda$core$String* $tmp158;
    org$pandalanguage$pandac$Type$Kind $tmp160;
    panda$collections$ImmutableArray* $tmp161;
    int $tmp103;
    {
        resolved104 = p_base->resolved;
        panda$core$MutableString* $tmp108 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp108);
        $tmp107 = $tmp108;
        $tmp106 = $tmp107;
        name105 = $tmp106;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp106));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp107));
        panda$core$MutableString$append$panda$core$String(name105, ((org$pandalanguage$pandac$Symbol*) p_base)->name);
        panda$core$Char8$init$panda$core$UInt8(&$tmp109, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name105, $tmp109);
        $tmp111 = &$s112;
        separator110 = $tmp111;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp111));
        {
            int $tmp115;
            {
                ITable* $tmp119 = ((panda$collections$Iterable*) p_arguments)->$class->itable;
                while ($tmp119->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp119 = $tmp119->next;
                }
                $fn121 $tmp120 = $tmp119->methods[0];
                panda$collections$Iterator* $tmp122 = $tmp120(((panda$collections$Iterable*) p_arguments));
                $tmp118 = $tmp122;
                $tmp117 = $tmp118;
                Iter$101$9116 = $tmp117;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp117));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp118));
                $l123:;
                ITable* $tmp126 = Iter$101$9116->$class->itable;
                while ($tmp126->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp126 = $tmp126->next;
                }
                $fn128 $tmp127 = $tmp126->methods[0];
                panda$core$Bit $tmp129 = $tmp127(Iter$101$9116);
                panda$core$Bit $tmp130 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp129);
                bool $tmp125 = $tmp130.value;
                if (!$tmp125) goto $l124;
                {
                    int $tmp133;
                    {
                        ITable* $tmp137 = Iter$101$9116->$class->itable;
                        while ($tmp137->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp137 = $tmp137->next;
                        }
                        $fn139 $tmp138 = $tmp137->methods[1];
                        panda$core$Object* $tmp140 = $tmp138(Iter$101$9116);
                        $tmp136 = $tmp140;
                        $tmp135 = ((org$pandalanguage$pandac$Type*) $tmp136);
                        a134 = $tmp135;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp135));
                        panda$core$Panda$unref$panda$core$Object($tmp136);
                        bool $tmp141 = resolved104.value;
                        if (!$tmp141) goto $l142;
                        $tmp141 = a134->resolved.value;
                        $l142:;
                        panda$core$Bit $tmp143 = { $tmp141 };
                        resolved104 = $tmp143;
                        panda$core$MutableString$append$panda$core$String(name105, separator110);
                        panda$core$MutableString$append$panda$core$String(name105, ((org$pandalanguage$pandac$Symbol*) a134)->name);
                        {
                            $tmp144 = separator110;
                            $tmp145 = &$s146;
                            separator110 = $tmp145;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp145));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
                        }
                    }
                    $tmp133 = -1;
                    goto $l131;
                    $l131:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a134));
                    a134 = NULL;
                    switch ($tmp133) {
                        case -1: goto $l147;
                    }
                    $l147:;
                }
                goto $l123;
                $l124:;
            }
            $tmp115 = -1;
            goto $l113;
            $l113:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$101$9116));
            Iter$101$9116 = NULL;
            switch ($tmp115) {
                case -1: goto $l148;
            }
            $l148:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp149, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name105, $tmp149);
        panda$collections$Array* $tmp153 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp153);
        $tmp152 = $tmp153;
        $tmp151 = $tmp152;
        subtypes150 = $tmp151;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp151));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp152));
        panda$collections$Array$add$panda$collections$Array$T(subtypes150, ((panda$core$Object*) p_base));
        panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(subtypes150, ((panda$collections$CollectionView*) p_arguments));
        org$pandalanguage$pandac$Type* $tmp157 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp159 = panda$core$MutableString$finish$R$panda$core$String(name105);
        $tmp158 = $tmp159;
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp160, ((panda$core$Int64) { 11 }));
        panda$collections$ImmutableArray* $tmp162 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes150);
        $tmp161 = $tmp162;
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp157, $tmp158, $tmp160, ((org$pandalanguage$pandac$Symbol*) p_base)->position, ((panda$collections$ListView*) $tmp161), resolved104);
        $tmp156 = $tmp157;
        $tmp155 = $tmp156;
        $returnValue154 = $tmp155;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp155));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp156));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp161));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp158));
        $tmp103 = 0;
        goto $l101;
        $l163:;
        return $returnValue154;
    }
    $l101:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes150));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator110));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name105));
    name105 = NULL;
    separator110 = NULL;
    subtypes150 = NULL;
    switch ($tmp103) {
        case 0: goto $l163;
    }
    $l165:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type$Kind p_kind, panda$collections$ListView* p_parameterTypes, org$pandalanguage$pandac$Type* p_returnType) {
    panda$core$Bit resolved169;
    panda$core$MutableString* name170 = NULL;
    panda$core$MutableString* $tmp171;
    panda$core$MutableString* $tmp172;
    panda$collections$Array* subtypes175 = NULL;
    panda$collections$Array* $tmp176;
    panda$collections$Array* $tmp177;
    panda$core$String* separator179 = NULL;
    panda$core$String* $tmp180;
    panda$collections$Iterator* Iter$121$9185 = NULL;
    panda$collections$Iterator* $tmp186;
    panda$collections$Iterator* $tmp187;
    org$pandalanguage$pandac$Type* p203 = NULL;
    org$pandalanguage$pandac$Type* $tmp204;
    panda$core$Object* $tmp205;
    panda$core$String* $tmp213;
    panda$core$String* $tmp214;
    org$pandalanguage$pandac$Type$Kind $match$128_9218;
    org$pandalanguage$pandac$Type* $tmp227;
    panda$core$Char8 $tmp230;
    org$pandalanguage$pandac$Type* $returnValue231;
    org$pandalanguage$pandac$Type* $tmp232;
    org$pandalanguage$pandac$Type* $tmp233;
    panda$core$String* $tmp235;
    panda$collections$ImmutableArray* $tmp237;
    int $tmp168;
    {
        resolved169 = p_returnType->resolved;
        panda$core$MutableString* $tmp173 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp173, &$s174);
        $tmp172 = $tmp173;
        $tmp171 = $tmp172;
        name170 = $tmp171;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp171));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp172));
        panda$collections$Array* $tmp178 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp178);
        $tmp177 = $tmp178;
        $tmp176 = $tmp177;
        subtypes175 = $tmp176;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp176));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp177));
        $tmp180 = &$s181;
        separator179 = $tmp180;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp180));
        {
            int $tmp184;
            {
                ITable* $tmp188 = ((panda$collections$Iterable*) p_parameterTypes)->$class->itable;
                while ($tmp188->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp188 = $tmp188->next;
                }
                $fn190 $tmp189 = $tmp188->methods[0];
                panda$collections$Iterator* $tmp191 = $tmp189(((panda$collections$Iterable*) p_parameterTypes));
                $tmp187 = $tmp191;
                $tmp186 = $tmp187;
                Iter$121$9185 = $tmp186;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp186));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp187));
                $l192:;
                ITable* $tmp195 = Iter$121$9185->$class->itable;
                while ($tmp195->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp195 = $tmp195->next;
                }
                $fn197 $tmp196 = $tmp195->methods[0];
                panda$core$Bit $tmp198 = $tmp196(Iter$121$9185);
                panda$core$Bit $tmp199 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp198);
                bool $tmp194 = $tmp199.value;
                if (!$tmp194) goto $l193;
                {
                    int $tmp202;
                    {
                        ITable* $tmp206 = Iter$121$9185->$class->itable;
                        while ($tmp206->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp206 = $tmp206->next;
                        }
                        $fn208 $tmp207 = $tmp206->methods[1];
                        panda$core$Object* $tmp209 = $tmp207(Iter$121$9185);
                        $tmp205 = $tmp209;
                        $tmp204 = ((org$pandalanguage$pandac$Type*) $tmp205);
                        p203 = $tmp204;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp204));
                        panda$core$Panda$unref$panda$core$Object($tmp205);
                        panda$collections$Array$add$panda$collections$Array$T(subtypes175, ((panda$core$Object*) p203));
                        bool $tmp210 = resolved169.value;
                        if (!$tmp210) goto $l211;
                        $tmp210 = p203->resolved.value;
                        $l211:;
                        panda$core$Bit $tmp212 = { $tmp210 };
                        resolved169 = $tmp212;
                        panda$core$MutableString$append$panda$core$String(name170, separator179);
                        panda$core$MutableString$append$panda$core$String(name170, ((org$pandalanguage$pandac$Symbol*) p203)->name);
                        {
                            $tmp213 = separator179;
                            $tmp214 = &$s215;
                            separator179 = $tmp214;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp214));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp213));
                        }
                    }
                    $tmp202 = -1;
                    goto $l200;
                    $l200:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p203));
                    p203 = NULL;
                    switch ($tmp202) {
                        case -1: goto $l216;
                    }
                    $l216:;
                }
                goto $l192;
                $l193:;
            }
            $tmp184 = -1;
            goto $l182;
            $l182:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$121$9185));
            Iter$121$9185 = NULL;
            switch ($tmp184) {
                case -1: goto $l217;
            }
            $l217:;
        }
        {
            $match$128_9218 = p_kind;
            panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9218.$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp219.value) {
            {
                panda$core$MutableString$append$panda$core$String(name170, &$s220);
            }
            }
            else {
            panda$core$Bit $tmp221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9218.$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp221.value) {
            {
                panda$core$MutableString$append$panda$core$String(name170, &$s222);
            }
            }
            else {
            panda$core$Bit $tmp223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9218.$rawValue, ((panda$core$Int64) { 16 }));
            if ($tmp223.value) {
            {
                panda$core$MutableString$append$panda$core$String(name170, &$s224);
            }
            }
            else {
            panda$core$Bit $tmp225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9218.$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp225.value) {
            {
                panda$core$MutableString$append$panda$core$String(name170, &$s226);
            }
            }
            else {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
            }
            }
            }
        }
        panda$collections$Array$add$panda$collections$Array$T(subtypes175, ((panda$core$Object*) p_returnType));
        org$pandalanguage$pandac$Type* $tmp228 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp227 = $tmp228;
        panda$core$Bit $tmp229 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_returnType, $tmp227);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp227));
        if ($tmp229.value) {
        {
            panda$core$MutableString$append$panda$core$String(name170, ((org$pandalanguage$pandac$Symbol*) p_returnType)->name);
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp230, ((panda$core$UInt8) { 41 }));
        panda$core$MutableString$append$panda$core$Char8(name170, $tmp230);
        org$pandalanguage$pandac$Type* $tmp234 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp236 = panda$core$MutableString$finish$R$panda$core$String(name170);
        $tmp235 = $tmp236;
        panda$collections$ImmutableArray* $tmp238 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes175);
        $tmp237 = $tmp238;
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp234, $tmp235, p_kind, p_position, ((panda$collections$ListView*) $tmp237), resolved169);
        $tmp233 = $tmp234;
        $tmp232 = $tmp233;
        $returnValue231 = $tmp232;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp232));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp233));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp237));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp235));
        $tmp168 = 0;
        goto $l166;
        $l239:;
        return $returnValue231;
    }
    $l166:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator179));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes175));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name170));
    name170 = NULL;
    subtypes175 = NULL;
    separator179 = NULL;
    switch ($tmp168) {
        case 0: goto $l239;
    }
    $l241:;
}
panda$core$Int64 org$pandalanguage$pandac$Type$size$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $returnValue251;
    panda$core$Bit $tmp244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp243 = $tmp244.value;
    if ($tmp243) goto $l245;
    panda$core$Bit $tmp246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 3 }));
    $tmp243 = $tmp246.value;
    $l245:;
    panda$core$Bit $tmp247 = { $tmp243 };
    bool $tmp242 = $tmp247.value;
    if ($tmp242) goto $l248;
    panda$core$Bit $tmp249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 10 }));
    $tmp242 = $tmp249.value;
    $l248:;
    panda$core$Bit $tmp250 = { $tmp242 };
    PANDA_ASSERT($tmp250.value);
    $returnValue251 = self->position.line;
    return $returnValue251;
}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $returnValue253;
    panda$core$Bit $tmp254 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    $returnValue253 = $tmp254;
    return $returnValue253;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $returnValue256;
    panda$core$Bit $tmp257 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    $returnValue256 = $tmp257;
    return $returnValue256;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue259;
    org$pandalanguage$pandac$Type* $tmp260;
    org$pandalanguage$pandac$Type* $tmp261;
    org$pandalanguage$pandac$Type$Kind $tmp264;
    org$pandalanguage$pandac$Position $tmp265;
    org$pandalanguage$pandac$Type* $tmp262 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp264, ((panda$core$Int64) { 4 }));
    org$pandalanguage$pandac$Position$init(&$tmp265);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp262, &$s263, $tmp264, $tmp265, ((panda$core$Bit) { true }));
    $tmp261 = $tmp262;
    $tmp260 = $tmp261;
    $returnValue259 = $tmp260;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp260));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp261));
    return $returnValue259;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue267;
    org$pandalanguage$pandac$Type* $tmp268;
    org$pandalanguage$pandac$Type* $tmp269;
    org$pandalanguage$pandac$Type$Kind $tmp272;
    org$pandalanguage$pandac$Position $tmp273;
    org$pandalanguage$pandac$Type* $tmp270 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp272, ((panda$core$Int64) { 13 }));
    org$pandalanguage$pandac$Position$init(&$tmp273);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp270, &$s271, $tmp272, $tmp273, ((panda$core$Bit) { true }));
    $tmp269 = $tmp270;
    $tmp268 = $tmp269;
    $returnValue267 = $tmp268;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp268));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp269));
    return $returnValue267;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue275;
    org$pandalanguage$pandac$Type* $tmp276;
    org$pandalanguage$pandac$Type* $tmp277;
    org$pandalanguage$pandac$Type$Kind $tmp280;
    org$pandalanguage$pandac$Position $tmp281;
    org$pandalanguage$pandac$Type* $tmp278 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp280, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp281);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp278, &$s279, $tmp280, $tmp281, ((panda$core$Bit) { true }));
    $tmp277 = $tmp278;
    $tmp276 = $tmp277;
    $returnValue275 = $tmp276;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp276));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp277));
    return $returnValue275;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes286 = NULL;
    panda$collections$Array* $tmp287;
    panda$collections$Array* $tmp288;
    org$pandalanguage$pandac$Type* $tmp290;
    org$pandalanguage$pandac$Type* $returnValue292;
    org$pandalanguage$pandac$Type* $tmp293;
    org$pandalanguage$pandac$Type* $tmp294;
    org$pandalanguage$pandac$Type$Kind $tmp297;
    org$pandalanguage$pandac$Position $tmp298;
    int $tmp285;
    {
        panda$collections$Array* $tmp289 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp289);
        $tmp288 = $tmp289;
        $tmp287 = $tmp288;
        subtypes286 = $tmp287;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp287));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp288));
        org$pandalanguage$pandac$Type* $tmp291 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp290 = $tmp291;
        panda$collections$Array$add$panda$collections$Array$T(subtypes286, ((panda$core$Object*) $tmp290));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp290));
        org$pandalanguage$pandac$Type* $tmp295 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp297, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Position$init(&$tmp298);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp295, &$s296, $tmp297, $tmp298, ((panda$collections$ListView*) subtypes286), ((panda$core$Bit) { true }));
        $tmp294 = $tmp295;
        $tmp293 = $tmp294;
        $returnValue292 = $tmp293;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp293));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp294));
        $tmp285 = 0;
        goto $l283;
        $l299:;
        return $returnValue292;
    }
    $l283:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes286));
    subtypes286 = NULL;
    switch ($tmp285) {
        case 0: goto $l299;
    }
    $l301:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue302;
    org$pandalanguage$pandac$Type* $tmp303;
    org$pandalanguage$pandac$Type* $tmp304;
    org$pandalanguage$pandac$Type$Kind $tmp307;
    org$pandalanguage$pandac$Position $tmp308;
    org$pandalanguage$pandac$Type* $tmp305 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp307, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp308);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp305, &$s306, $tmp307, $tmp308, ((panda$core$Bit) { true }));
    $tmp304 = $tmp305;
    $tmp303 = $tmp304;
    $returnValue302 = $tmp303;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp303));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp304));
    return $returnValue302;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Immutable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue310;
    org$pandalanguage$pandac$Type* $tmp311;
    org$pandalanguage$pandac$Type* $tmp312;
    org$pandalanguage$pandac$Type$Kind $tmp315;
    org$pandalanguage$pandac$Position $tmp316;
    org$pandalanguage$pandac$Type* $tmp313 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp315, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp316);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp313, &$s314, $tmp315, $tmp316, ((panda$core$Bit) { true }));
    $tmp312 = $tmp313;
    $tmp311 = $tmp312;
    $returnValue310 = $tmp311;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp311));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
    return $returnValue310;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue318;
    org$pandalanguage$pandac$Type* $tmp319;
    org$pandalanguage$pandac$Type* $tmp320;
    org$pandalanguage$pandac$Type$Kind $tmp323;
    org$pandalanguage$pandac$Position $tmp324;
    org$pandalanguage$pandac$Type* $tmp321 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp323, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp324);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp321, &$s322, $tmp323, $tmp324, ((panda$core$Bit) { true }));
    $tmp320 = $tmp321;
    $tmp319 = $tmp320;
    $returnValue318 = $tmp319;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp319));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp320));
    return $returnValue318;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue326;
    org$pandalanguage$pandac$Type* $tmp327;
    org$pandalanguage$pandac$Type* $tmp328;
    org$pandalanguage$pandac$Type$Kind $tmp331;
    org$pandalanguage$pandac$Position $tmp332;
    org$pandalanguage$pandac$Type* $tmp329 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp331, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp332);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp329, &$s330, $tmp331, $tmp332, ((panda$core$Bit) { true }));
    $tmp328 = $tmp329;
    $tmp327 = $tmp328;
    $returnValue326 = $tmp327;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp327));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp328));
    return $returnValue326;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RegularExpression$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue334;
    org$pandalanguage$pandac$Type* $tmp335;
    org$pandalanguage$pandac$Type* $tmp336;
    org$pandalanguage$pandac$Type$Kind $tmp339;
    org$pandalanguage$pandac$Position $tmp340;
    org$pandalanguage$pandac$Type* $tmp337 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp339, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp340);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp337, &$s338, $tmp339, $tmp340, ((panda$core$Bit) { true }));
    $tmp336 = $tmp337;
    $tmp335 = $tmp336;
    $returnValue334 = $tmp335;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp335));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp336));
    return $returnValue334;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue342;
    org$pandalanguage$pandac$Type* $tmp343;
    org$pandalanguage$pandac$Type* $tmp344;
    org$pandalanguage$pandac$Type$Kind $tmp347;
    org$pandalanguage$pandac$Type* $tmp345 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp347, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp345, &$s346, $tmp347, ((panda$core$Int64) { 8 }));
    $tmp344 = $tmp345;
    $tmp343 = $tmp344;
    $returnValue342 = $tmp343;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp343));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp344));
    return $returnValue342;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue349;
    org$pandalanguage$pandac$Type* $tmp350;
    org$pandalanguage$pandac$Type* $tmp351;
    org$pandalanguage$pandac$Type$Kind $tmp354;
    org$pandalanguage$pandac$Type* $tmp352 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp354, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp352, &$s353, $tmp354, ((panda$core$Int64) { 16 }));
    $tmp351 = $tmp352;
    $tmp350 = $tmp351;
    $returnValue349 = $tmp350;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp350));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp351));
    return $returnValue349;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue356;
    org$pandalanguage$pandac$Type* $tmp357;
    org$pandalanguage$pandac$Type* $tmp358;
    org$pandalanguage$pandac$Type$Kind $tmp361;
    org$pandalanguage$pandac$Type* $tmp359 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp361, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp359, &$s360, $tmp361, ((panda$core$Int64) { 32 }));
    $tmp358 = $tmp359;
    $tmp357 = $tmp358;
    $returnValue356 = $tmp357;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp357));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp358));
    return $returnValue356;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue363;
    org$pandalanguage$pandac$Type* $tmp364;
    org$pandalanguage$pandac$Type* $tmp365;
    org$pandalanguage$pandac$Type$Kind $tmp368;
    org$pandalanguage$pandac$Type* $tmp366 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp368, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp366, &$s367, $tmp368, ((panda$core$Int64) { 64 }));
    $tmp365 = $tmp366;
    $tmp364 = $tmp365;
    $returnValue363 = $tmp364;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp364));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp365));
    return $returnValue363;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue370;
    org$pandalanguage$pandac$Type* $tmp371;
    org$pandalanguage$pandac$Type* $tmp372;
    org$pandalanguage$pandac$Type$Kind $tmp375;
    org$pandalanguage$pandac$Type* $tmp373 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp375, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp373, &$s374, $tmp375, ((panda$core$Int64) { 8 }));
    $tmp372 = $tmp373;
    $tmp371 = $tmp372;
    $returnValue370 = $tmp371;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp371));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp372));
    return $returnValue370;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue377;
    org$pandalanguage$pandac$Type* $tmp378;
    org$pandalanguage$pandac$Type* $tmp379;
    org$pandalanguage$pandac$Type$Kind $tmp382;
    org$pandalanguage$pandac$Type* $tmp380 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp382, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp380, &$s381, $tmp382, ((panda$core$Int64) { 16 }));
    $tmp379 = $tmp380;
    $tmp378 = $tmp379;
    $returnValue377 = $tmp378;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp378));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp379));
    return $returnValue377;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue384;
    org$pandalanguage$pandac$Type* $tmp385;
    org$pandalanguage$pandac$Type* $tmp386;
    org$pandalanguage$pandac$Type$Kind $tmp389;
    org$pandalanguage$pandac$Type* $tmp387 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp389, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp387, &$s388, $tmp389, ((panda$core$Int64) { 32 }));
    $tmp386 = $tmp387;
    $tmp385 = $tmp386;
    $returnValue384 = $tmp385;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp385));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp386));
    return $returnValue384;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue391;
    org$pandalanguage$pandac$Type* $tmp392;
    org$pandalanguage$pandac$Type* $tmp393;
    org$pandalanguage$pandac$Type$Kind $tmp396;
    org$pandalanguage$pandac$Type* $tmp394 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp396, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp394, &$s395, $tmp396, ((panda$core$Int64) { 64 }));
    $tmp393 = $tmp394;
    $tmp392 = $tmp393;
    $returnValue391 = $tmp392;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp392));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp393));
    return $returnValue391;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue398;
    org$pandalanguage$pandac$Type* $tmp399;
    org$pandalanguage$pandac$Type* $tmp400;
    org$pandalanguage$pandac$Type$Kind $tmp403;
    org$pandalanguage$pandac$Type* $tmp401 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp403, ((panda$core$Int64) { 10 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp401, &$s402, $tmp403, ((panda$core$Int64) { 32 }));
    $tmp400 = $tmp401;
    $tmp399 = $tmp400;
    $returnValue398 = $tmp399;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp399));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp400));
    return $returnValue398;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue405;
    org$pandalanguage$pandac$Type* $tmp406;
    org$pandalanguage$pandac$Type* $tmp407;
    org$pandalanguage$pandac$Type$Kind $tmp410;
    org$pandalanguage$pandac$Type* $tmp408 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp410, ((panda$core$Int64) { 10 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp408, &$s409, $tmp410, ((panda$core$Int64) { 64 }));
    $tmp407 = $tmp408;
    $tmp406 = $tmp407;
    $returnValue405 = $tmp406;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp406));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp407));
    return $returnValue405;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue412;
    org$pandalanguage$pandac$Type* $tmp413;
    org$pandalanguage$pandac$Type* $tmp414;
    org$pandalanguage$pandac$Type$Kind $tmp417;
    org$pandalanguage$pandac$Position $tmp418;
    org$pandalanguage$pandac$Type* $tmp415 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp417, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp418);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp415, &$s416, $tmp417, $tmp418, ((panda$core$Bit) { true }));
    $tmp414 = $tmp415;
    $tmp413 = $tmp414;
    $returnValue412 = $tmp413;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp413));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp414));
    return $returnValue412;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue420;
    org$pandalanguage$pandac$Type* $tmp421;
    org$pandalanguage$pandac$Type* $tmp422;
    org$pandalanguage$pandac$Type$Kind $tmp425;
    org$pandalanguage$pandac$Position $tmp426;
    org$pandalanguage$pandac$Type* $tmp423 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp425, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp426);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp423, &$s424, $tmp425, $tmp426, ((panda$core$Bit) { true }));
    $tmp422 = $tmp423;
    $tmp421 = $tmp422;
    $returnValue420 = $tmp421;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp421));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp422));
    return $returnValue420;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue428;
    org$pandalanguage$pandac$Type* $tmp429;
    org$pandalanguage$pandac$Type* $tmp430;
    org$pandalanguage$pandac$Type$Kind $tmp433;
    org$pandalanguage$pandac$Position $tmp434;
    org$pandalanguage$pandac$Type* $tmp431 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp433, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp434);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp431, &$s432, $tmp433, $tmp434, ((panda$core$Bit) { true }));
    $tmp430 = $tmp431;
    $tmp429 = $tmp430;
    $returnValue428 = $tmp429;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp429));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp430));
    return $returnValue428;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue436;
    org$pandalanguage$pandac$Type* $tmp437;
    org$pandalanguage$pandac$Type* $tmp438;
    org$pandalanguage$pandac$Type$Kind $tmp441;
    org$pandalanguage$pandac$Position $tmp442;
    org$pandalanguage$pandac$Type* $tmp439 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp441, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp442);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp439, &$s440, $tmp441, $tmp442, ((panda$core$Bit) { true }));
    $tmp438 = $tmp439;
    $tmp437 = $tmp438;
    $returnValue436 = $tmp437;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp437));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp438));
    return $returnValue436;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue444;
    org$pandalanguage$pandac$Type* $tmp445;
    org$pandalanguage$pandac$Type* $tmp446;
    org$pandalanguage$pandac$Type$Kind $tmp449;
    org$pandalanguage$pandac$Position $tmp450;
    org$pandalanguage$pandac$Type* $tmp447 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp449, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp450);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp447, &$s448, $tmp449, $tmp450, ((panda$core$Bit) { true }));
    $tmp446 = $tmp447;
    $tmp445 = $tmp446;
    $returnValue444 = $tmp445;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp445));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp446));
    return $returnValue444;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue452;
    org$pandalanguage$pandac$Type* $tmp453;
    org$pandalanguage$pandac$Type* $tmp454;
    org$pandalanguage$pandac$Type$Kind $tmp457;
    org$pandalanguage$pandac$Position $tmp458;
    org$pandalanguage$pandac$Type* $tmp455 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp457, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp458);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp455, &$s456, $tmp457, $tmp458, ((panda$core$Bit) { true }));
    $tmp454 = $tmp455;
    $tmp453 = $tmp454;
    $returnValue452 = $tmp453;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp453));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp454));
    return $returnValue452;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue460;
    org$pandalanguage$pandac$Type* $tmp461;
    org$pandalanguage$pandac$Type* $tmp462;
    org$pandalanguage$pandac$Type$Kind $tmp465;
    org$pandalanguage$pandac$Position $tmp466;
    org$pandalanguage$pandac$Type* $tmp463 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp465, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp466);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp463, &$s464, $tmp465, $tmp466, ((panda$core$Bit) { true }));
    $tmp462 = $tmp463;
    $tmp461 = $tmp462;
    $returnValue460 = $tmp461;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp461));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp462));
    return $returnValue460;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue468;
    org$pandalanguage$pandac$Type* $tmp469;
    org$pandalanguage$pandac$Type* $tmp470;
    org$pandalanguage$pandac$Type$Kind $tmp473;
    org$pandalanguage$pandac$Position $tmp474;
    org$pandalanguage$pandac$Type* $tmp471 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp473, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp474);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp471, &$s472, $tmp473, $tmp474, ((panda$core$Bit) { true }));
    $tmp470 = $tmp471;
    $tmp469 = $tmp470;
    $returnValue468 = $tmp469;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp469));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp470));
    return $returnValue468;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue476;
    org$pandalanguage$pandac$Type* $tmp477;
    org$pandalanguage$pandac$Type* $tmp478;
    org$pandalanguage$pandac$Type$Kind $tmp481;
    org$pandalanguage$pandac$Position $tmp482;
    org$pandalanguage$pandac$Type* $tmp479 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp481, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp482);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp479, &$s480, $tmp481, $tmp482, ((panda$core$Bit) { true }));
    $tmp478 = $tmp479;
    $tmp477 = $tmp478;
    $returnValue476 = $tmp477;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp477));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp478));
    return $returnValue476;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue484;
    org$pandalanguage$pandac$Type* $tmp485;
    org$pandalanguage$pandac$Type* $tmp486;
    org$pandalanguage$pandac$Type$Kind $tmp489;
    org$pandalanguage$pandac$Position $tmp490;
    org$pandalanguage$pandac$Type* $tmp487 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp489, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp490);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp487, &$s488, $tmp489, $tmp490, ((panda$core$Bit) { true }));
    $tmp486 = $tmp487;
    $tmp485 = $tmp486;
    $returnValue484 = $tmp485;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp485));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp486));
    return $returnValue484;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue492;
    org$pandalanguage$pandac$Type* $tmp493;
    org$pandalanguage$pandac$Type* $tmp494;
    org$pandalanguage$pandac$Type$Kind $tmp497;
    org$pandalanguage$pandac$Position $tmp498;
    org$pandalanguage$pandac$Type* $tmp495 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp497, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp498);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp495, &$s496, $tmp497, $tmp498, ((panda$core$Bit) { true }));
    $tmp494 = $tmp495;
    $tmp493 = $tmp494;
    $returnValue492 = $tmp493;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp493));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp494));
    return $returnValue492;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue500;
    org$pandalanguage$pandac$Type* $tmp501;
    org$pandalanguage$pandac$Type* $tmp502;
    org$pandalanguage$pandac$Type$Kind $tmp505;
    org$pandalanguage$pandac$Position $tmp506;
    org$pandalanguage$pandac$Type* $tmp503 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp505, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp506);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp503, &$s504, $tmp505, $tmp506, ((panda$core$Bit) { true }));
    $tmp502 = $tmp503;
    $tmp501 = $tmp502;
    $returnValue500 = $tmp501;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp501));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp502));
    return $returnValue500;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue508;
    org$pandalanguage$pandac$Type* $tmp509;
    org$pandalanguage$pandac$Type* $tmp510;
    org$pandalanguage$pandac$Type$Kind $tmp513;
    org$pandalanguage$pandac$Position $tmp514;
    org$pandalanguage$pandac$Type* $tmp511 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp513, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp514);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp511, &$s512, $tmp513, $tmp514, ((panda$core$Bit) { true }));
    $tmp510 = $tmp511;
    $tmp509 = $tmp510;
    $returnValue508 = $tmp509;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp509));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp510));
    return $returnValue508;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue516;
    org$pandalanguage$pandac$Type* $tmp517;
    org$pandalanguage$pandac$Type* $tmp518;
    org$pandalanguage$pandac$Type$Kind $tmp521;
    org$pandalanguage$pandac$Position $tmp522;
    org$pandalanguage$pandac$Type* $tmp519 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp521, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp522);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp519, &$s520, $tmp521, $tmp522, ((panda$core$Bit) { true }));
    $tmp518 = $tmp519;
    $tmp517 = $tmp518;
    $returnValue516 = $tmp517;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp517));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp518));
    return $returnValue516;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue524;
    org$pandalanguage$pandac$Type* $tmp525;
    org$pandalanguage$pandac$Type* $tmp526;
    panda$core$String* $tmp528;
    panda$core$String* $tmp529;
    panda$core$Object* $tmp531;
    org$pandalanguage$pandac$Type$Kind $tmp536;
    org$pandalanguage$pandac$Position $tmp537;
    org$pandalanguage$pandac$Type* $tmp527 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$UInt64$wrapper* $tmp532;
    $tmp532 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
    $tmp532->value = p_value;
    $tmp531 = ((panda$core$Object*) $tmp532);
    panda$core$String* $tmp533 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s530, $tmp531);
    $tmp529 = $tmp533;
    panda$core$String* $tmp535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp529, &$s534);
    $tmp528 = $tmp535;
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp536, ((panda$core$Int64) { 5 }));
    org$pandalanguage$pandac$Position$init(&$tmp537);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp527, $tmp528, $tmp536, $tmp537, ((panda$core$Bit) { true }));
    $tmp526 = $tmp527;
    $tmp525 = $tmp526;
    $returnValue524 = $tmp525;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp525));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp526));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp528));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp529));
    panda$core$Panda$unref$panda$core$Object($tmp531);
    return $returnValue524;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue539;
    org$pandalanguage$pandac$Type* $tmp540;
    org$pandalanguage$pandac$Type* $tmp541;
    panda$core$String* $tmp543;
    panda$core$String* $tmp544;
    panda$core$String* $tmp546;
    org$pandalanguage$pandac$Type$Kind $tmp551;
    org$pandalanguage$pandac$Position $tmp552;
    org$pandalanguage$pandac$Type* $tmp542 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp547 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    $tmp546 = $tmp547;
    panda$core$String* $tmp548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s545, $tmp546);
    $tmp544 = $tmp548;
    panda$core$String* $tmp550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp544, &$s549);
    $tmp543 = $tmp550;
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp551, ((panda$core$Int64) { 5 }));
    org$pandalanguage$pandac$Position$init(&$tmp552);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp542, $tmp543, $tmp551, $tmp552, ((panda$core$Bit) { true }));
    $tmp541 = $tmp542;
    $tmp540 = $tmp541;
    $returnValue539 = $tmp540;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp540));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp541));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp543));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp544));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp546));
    return $returnValue539;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue554;
    org$pandalanguage$pandac$Type* $tmp555;
    org$pandalanguage$pandac$Type* $tmp556;
    panda$core$String* $tmp558;
    panda$core$String* $tmp559;
    panda$core$String* $tmp561;
    org$pandalanguage$pandac$Type$Kind $tmp566;
    org$pandalanguage$pandac$Position $tmp567;
    org$pandalanguage$pandac$Type* $tmp557 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp562 = panda$core$Real64$convert$R$panda$core$String(p_value);
    $tmp561 = $tmp562;
    panda$core$String* $tmp563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s560, $tmp561);
    $tmp559 = $tmp563;
    panda$core$String* $tmp565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp559, &$s564);
    $tmp558 = $tmp565;
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp566, ((panda$core$Int64) { 18 }));
    org$pandalanguage$pandac$Position$init(&$tmp567);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp557, $tmp558, $tmp566, $tmp567, ((panda$core$Bit) { true }));
    $tmp556 = $tmp557;
    $tmp555 = $tmp556;
    $returnValue554 = $tmp555;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp555));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp556));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp558));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp559));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp561));
    return $returnValue554;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue569;
    org$pandalanguage$pandac$Type* $tmp570;
    org$pandalanguage$pandac$Type* $tmp571;
    org$pandalanguage$pandac$Type$Kind $tmp574;
    org$pandalanguage$pandac$Position $tmp575;
    org$pandalanguage$pandac$Type* $tmp572 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp574, ((panda$core$Int64) { 8 }));
    org$pandalanguage$pandac$Position$init(&$tmp575);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp572, &$s573, $tmp574, $tmp575, ((panda$core$Bit) { true }));
    $tmp571 = $tmp572;
    $tmp570 = $tmp571;
    $returnValue569 = $tmp570;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp570));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp571));
    return $returnValue569;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue577;
    org$pandalanguage$pandac$Type* $tmp578;
    org$pandalanguage$pandac$Type* $tmp579;
    org$pandalanguage$pandac$Type$Kind $tmp582;
    org$pandalanguage$pandac$Position $tmp583;
    org$pandalanguage$pandac$Type* $tmp580 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp582, ((panda$core$Int64) { 9 }));
    org$pandalanguage$pandac$Position$init(&$tmp583);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp580, &$s581, $tmp582, $tmp583, ((panda$core$Bit) { true }));
    $tmp579 = $tmp580;
    $tmp578 = $tmp579;
    $returnValue577 = $tmp578;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp578));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp579));
    return $returnValue577;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue585;
    org$pandalanguage$pandac$Type* $tmp586;
    org$pandalanguage$pandac$Type* $tmp587;
    org$pandalanguage$pandac$Type$Kind $tmp590;
    org$pandalanguage$pandac$Position $tmp591;
    org$pandalanguage$pandac$Type* $tmp588 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp590, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp591);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp588, &$s589, $tmp590, $tmp591, ((panda$core$Bit) { true }));
    $tmp587 = $tmp588;
    $tmp586 = $tmp587;
    $returnValue585 = $tmp586;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp586));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp587));
    return $returnValue585;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue593;
    org$pandalanguage$pandac$Type* $tmp594;
    org$pandalanguage$pandac$Type* $tmp595;
    org$pandalanguage$pandac$Type$Kind $tmp598;
    org$pandalanguage$pandac$Position $tmp599;
    org$pandalanguage$pandac$Type* $tmp596 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp598, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp599);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp596, &$s597, $tmp598, $tmp599, ((panda$core$Bit) { true }));
    $tmp595 = $tmp596;
    $tmp594 = $tmp595;
    $returnValue593 = $tmp594;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp594));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp595));
    return $returnValue593;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue601;
    org$pandalanguage$pandac$Type* $tmp602;
    org$pandalanguage$pandac$Type* $tmp603;
    org$pandalanguage$pandac$Type$Kind $tmp606;
    org$pandalanguage$pandac$Position $tmp607;
    org$pandalanguage$pandac$Type* $tmp604 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp606, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp607);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp604, &$s605, $tmp606, $tmp607, ((panda$core$Bit) { true }));
    $tmp603 = $tmp604;
    $tmp602 = $tmp603;
    $returnValue601 = $tmp602;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp602));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp603));
    return $returnValue601;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue609;
    org$pandalanguage$pandac$Type* $tmp610;
    org$pandalanguage$pandac$Type* $tmp611;
    org$pandalanguage$pandac$Type$Kind $tmp614;
    org$pandalanguage$pandac$Position $tmp615;
    org$pandalanguage$pandac$Type* $tmp612 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp614, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp615);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp612, &$s613, $tmp614, $tmp615, ((panda$core$Bit) { true }));
    $tmp611 = $tmp612;
    $tmp610 = $tmp611;
    $returnValue609 = $tmp610;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp610));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp611));
    return $returnValue609;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue617;
    org$pandalanguage$pandac$Type* $tmp618;
    org$pandalanguage$pandac$Type* $tmp619;
    org$pandalanguage$pandac$Type$Kind $tmp622;
    org$pandalanguage$pandac$Position $tmp623;
    org$pandalanguage$pandac$Type* $tmp620 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp622, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp623);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp620, &$s621, $tmp622, $tmp623, ((panda$core$Bit) { true }));
    $tmp619 = $tmp620;
    $tmp618 = $tmp619;
    $returnValue617 = $tmp618;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp618));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp619));
    return $returnValue617;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children628 = NULL;
    panda$collections$Array* $tmp629;
    panda$collections$Array* $tmp630;
    org$pandalanguage$pandac$Type* $tmp632;
    org$pandalanguage$pandac$Type$Kind $tmp635;
    org$pandalanguage$pandac$Position $tmp636;
    org$pandalanguage$pandac$Type* $returnValue637;
    org$pandalanguage$pandac$Type* $tmp638;
    org$pandalanguage$pandac$Type* $tmp639;
    panda$core$String* $tmp641;
    panda$core$String* $tmp642;
    panda$core$String* $tmp643;
    panda$core$String* $tmp644;
    org$pandalanguage$pandac$Type$Kind $tmp652;
    int $tmp627;
    {
        panda$collections$Array* $tmp631 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp631);
        $tmp630 = $tmp631;
        $tmp629 = $tmp630;
        children628 = $tmp629;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp629));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp630));
        org$pandalanguage$pandac$Type* $tmp633 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp635, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp636);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp633, &$s634, $tmp635, $tmp636, ((panda$core$Bit) { true }));
        $tmp632 = $tmp633;
        panda$collections$Array$add$panda$collections$Array$T(children628, ((panda$core$Object*) $tmp632));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp632));
        panda$collections$Array$add$panda$collections$Array$T(children628, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp640 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp646 = panda$core$String$convert$R$panda$core$String(&$s645);
        $tmp644 = $tmp646;
        panda$core$String* $tmp648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp644, &$s647);
        $tmp643 = $tmp648;
        panda$core$String* $tmp649 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp643, ((panda$core$Object*) p_t));
        $tmp642 = $tmp649;
        panda$core$String* $tmp651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp642, &$s650);
        $tmp641 = $tmp651;
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp652, ((panda$core$Int64) { 11 }));
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp640, $tmp641, $tmp652, ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children628), p_t->resolved);
        $tmp639 = $tmp640;
        $tmp638 = $tmp639;
        $returnValue637 = $tmp638;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp638));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp639));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp641));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp642));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp643));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp644));
        $tmp627 = 0;
        goto $l625;
        $l653:;
        return $returnValue637;
    }
    $l625:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children628));
    children628 = NULL;
    switch ($tmp627) {
        case 0: goto $l653;
    }
    $l655:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children659 = NULL;
    panda$collections$Array* $tmp660;
    panda$collections$Array* $tmp661;
    org$pandalanguage$pandac$Type* $returnValue663;
    org$pandalanguage$pandac$Type* $tmp664;
    org$pandalanguage$pandac$Type* $tmp665;
    org$pandalanguage$pandac$Type* $tmp666;
    org$pandalanguage$pandac$Type$Kind $tmp669;
    org$pandalanguage$pandac$Position $tmp670;
    int $tmp658;
    {
        panda$collections$Array* $tmp662 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp662);
        $tmp661 = $tmp662;
        $tmp660 = $tmp661;
        children659 = $tmp660;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp660));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp661));
        panda$collections$Array$add$panda$collections$Array$T(children659, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp667 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp669, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp670);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp667, &$s668, $tmp669, $tmp670, ((panda$core$Bit) { true }));
        $tmp666 = $tmp667;
        org$pandalanguage$pandac$Type* $tmp671 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp666, ((panda$collections$ListView*) children659));
        $tmp665 = $tmp671;
        $tmp664 = $tmp665;
        $returnValue663 = $tmp664;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp664));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp665));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp666));
        $tmp658 = 0;
        goto $l656;
        $l672:;
        return $returnValue663;
    }
    $l656:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children659));
    children659 = NULL;
    switch ($tmp658) {
        case 0: goto $l672;
    }
    $l674:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children678 = NULL;
    panda$collections$Array* $tmp679;
    panda$collections$Array* $tmp680;
    org$pandalanguage$pandac$Type* $returnValue682;
    org$pandalanguage$pandac$Type* $tmp683;
    org$pandalanguage$pandac$Type* $tmp684;
    org$pandalanguage$pandac$Type* $tmp685;
    org$pandalanguage$pandac$Type$Kind $tmp688;
    org$pandalanguage$pandac$Position $tmp689;
    int $tmp677;
    {
        panda$collections$Array* $tmp681 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp681);
        $tmp680 = $tmp681;
        $tmp679 = $tmp680;
        children678 = $tmp679;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp679));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp680));
        panda$collections$Array$add$panda$collections$Array$T(children678, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp686 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp688, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp689);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp686, &$s687, $tmp688, $tmp689, ((panda$core$Bit) { true }));
        $tmp685 = $tmp686;
        org$pandalanguage$pandac$Type* $tmp690 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp685, ((panda$collections$ListView*) children678));
        $tmp684 = $tmp690;
        $tmp683 = $tmp684;
        $returnValue682 = $tmp683;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp683));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp684));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp685));
        $tmp677 = 0;
        goto $l675;
        $l691:;
        return $returnValue682;
    }
    $l675:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children678));
    children678 = NULL;
    switch ($tmp677) {
        case 0: goto $l691;
    }
    $l693:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children697 = NULL;
    panda$collections$Array* $tmp698;
    panda$collections$Array* $tmp699;
    org$pandalanguage$pandac$Type* $tmp701;
    org$pandalanguage$pandac$Type* $tmp704;
    org$pandalanguage$pandac$Type* $tmp706;
    org$pandalanguage$pandac$Type* $tmp709;
    org$pandalanguage$pandac$Type* $tmp711;
    org$pandalanguage$pandac$Type* $tmp714;
    org$pandalanguage$pandac$Type* $tmp716;
    org$pandalanguage$pandac$Type* $returnValue718;
    org$pandalanguage$pandac$Type* $tmp719;
    org$pandalanguage$pandac$Type* $tmp720;
    org$pandalanguage$pandac$Type* $tmp721;
    org$pandalanguage$pandac$Type$Kind $tmp724;
    org$pandalanguage$pandac$Position $tmp725;
    int $tmp696;
    {
        panda$collections$Array* $tmp700 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp700);
        $tmp699 = $tmp700;
        $tmp698 = $tmp699;
        children697 = $tmp698;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp698));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp699));
        panda$collections$Array$add$panda$collections$Array$T(children697, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp702 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
        $tmp701 = $tmp702;
        panda$core$Bit $tmp703 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp701);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp701));
        if ($tmp703.value) {
        {
            org$pandalanguage$pandac$Type* $tmp705 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
            $tmp704 = $tmp705;
            panda$collections$Array$add$panda$collections$Array$T(children697, ((panda$core$Object*) $tmp704));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp704));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp707 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
        $tmp706 = $tmp707;
        panda$core$Bit $tmp708 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp706);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp706));
        if ($tmp708.value) {
        {
            org$pandalanguage$pandac$Type* $tmp710 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
            $tmp709 = $tmp710;
            panda$collections$Array$add$panda$collections$Array$T(children697, ((panda$core$Object*) $tmp709));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp709));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp712 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
        $tmp711 = $tmp712;
        panda$core$Bit $tmp713 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp711);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp711));
        if ($tmp713.value) {
        {
            org$pandalanguage$pandac$Type* $tmp715 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
            $tmp714 = $tmp715;
            panda$collections$Array$add$panda$collections$Array$T(children697, ((panda$core$Object*) $tmp714));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp714));
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp717 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
            $tmp716 = $tmp717;
            panda$collections$Array$add$panda$collections$Array$T(children697, ((panda$core$Object*) $tmp716));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp716));
        }
        }
        }
        }
        org$pandalanguage$pandac$Type* $tmp722 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp724, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp725);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp722, &$s723, $tmp724, $tmp725, ((panda$core$Bit) { true }));
        $tmp721 = $tmp722;
        org$pandalanguage$pandac$Type* $tmp726 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp721, ((panda$collections$ListView*) children697));
        $tmp720 = $tmp726;
        $tmp719 = $tmp720;
        $returnValue718 = $tmp719;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp719));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp720));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp721));
        $tmp696 = 0;
        goto $l694;
        $l727:;
        return $returnValue718;
    }
    $l694:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children697));
    children697 = NULL;
    switch ($tmp696) {
        case 0: goto $l727;
    }
    $l729:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue730;
    org$pandalanguage$pandac$Type* $tmp731;
    org$pandalanguage$pandac$Type* $tmp732;
    org$pandalanguage$pandac$Type$Kind $tmp735;
    org$pandalanguage$pandac$Position $tmp736;
    org$pandalanguage$pandac$Type* $tmp733 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp735, ((panda$core$Int64) { 6 }));
    org$pandalanguage$pandac$Position$init(&$tmp736);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp733, &$s734, $tmp735, $tmp736, ((panda$core$Bit) { true }));
    $tmp732 = $tmp733;
    $tmp731 = $tmp732;
    $returnValue730 = $tmp731;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp731));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp732));
    return $returnValue730;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue738;
    org$pandalanguage$pandac$Type* $tmp739;
    org$pandalanguage$pandac$Type* $tmp740;
    org$pandalanguage$pandac$Type$Kind $tmp743;
    org$pandalanguage$pandac$Position $tmp744;
    org$pandalanguage$pandac$Type* $tmp741 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp743, ((panda$core$Int64) { 6 }));
    org$pandalanguage$pandac$Position$init(&$tmp744);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp741, &$s742, $tmp743, $tmp744, ((panda$core$Bit) { true }));
    $tmp740 = $tmp741;
    $tmp739 = $tmp740;
    $returnValue738 = $tmp739;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp739));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp740));
    return $returnValue738;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue746;
    panda$core$Bit $tmp752 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s751);
    bool $tmp750 = $tmp752.value;
    if ($tmp750) goto $l753;
    panda$core$Bit $tmp755 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s754);
    $tmp750 = $tmp755.value;
    $l753:;
    panda$core$Bit $tmp756 = { $tmp750 };
    bool $tmp749 = $tmp756.value;
    if ($tmp749) goto $l757;
    panda$core$Bit $tmp759 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s758);
    $tmp749 = $tmp759.value;
    $l757:;
    panda$core$Bit $tmp760 = { $tmp749 };
    bool $tmp748 = $tmp760.value;
    if ($tmp748) goto $l761;
    panda$core$Bit $tmp762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
    $tmp748 = $tmp762.value;
    $l761:;
    panda$core$Bit $tmp763 = { $tmp748 };
    bool $tmp747 = $tmp763.value;
    if ($tmp747) goto $l764;
    panda$core$Bit $tmp765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 18 }));
    $tmp747 = $tmp765.value;
    $l764:;
    panda$core$Bit $tmp766 = { $tmp747 };
    $returnValue746 = $tmp766;
    return $returnValue746;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue768;
    panda$core$Bit $tmp772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp771 = $tmp772.value;
    if ($tmp771) goto $l773;
    panda$core$Bit $tmp774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 3 }));
    $tmp771 = $tmp774.value;
    $l773:;
    panda$core$Bit $tmp775 = { $tmp771 };
    bool $tmp770 = $tmp775.value;
    if ($tmp770) goto $l776;
    panda$core$Bit $tmp777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 10 }));
    $tmp770 = $tmp777.value;
    $l776:;
    panda$core$Bit $tmp778 = { $tmp770 };
    bool $tmp769 = $tmp778.value;
    if ($tmp769) goto $l779;
    panda$core$Bit $tmp780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
    $tmp769 = $tmp780.value;
    $l779:;
    panda$core$Bit $tmp781 = { $tmp769 };
    $returnValue768 = $tmp781;
    return $returnValue768;
}
panda$core$Bit org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue783;
    panda$core$Bit $tmp785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 18 }));
    bool $tmp784 = $tmp785.value;
    if ($tmp784) goto $l786;
    panda$core$Bit $tmp788 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s787);
    $tmp784 = $tmp788.value;
    $l786:;
    panda$core$Bit $tmp789 = { $tmp784 };
    $returnValue783 = $tmp789;
    return $returnValue783;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue791;
    panda$core$Bit $tmp793 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s792);
    $returnValue791 = $tmp793;
    return $returnValue791;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue795;
    panda$core$Bit $tmp797 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp796 = $tmp797.value;
    if ($tmp796) goto $l798;
    panda$core$Bit $tmp799 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(self);
    $tmp796 = $tmp799.value;
    $l798:;
    panda$core$Bit $tmp800 = { $tmp796 };
    $returnValue795 = $tmp800;
    return $returnValue795;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$456_9802;
    panda$core$Bit $returnValue832;
    {
        $match$456_9802 = self->typeKind;
        panda$core$Bit $tmp810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9802.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp809 = $tmp810.value;
        if ($tmp809) goto $l811;
        panda$core$Bit $tmp812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9802.$rawValue, ((panda$core$Int64) { 1 }));
        $tmp809 = $tmp812.value;
        $l811:;
        panda$core$Bit $tmp813 = { $tmp809 };
        bool $tmp808 = $tmp813.value;
        if ($tmp808) goto $l814;
        panda$core$Bit $tmp815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9802.$rawValue, ((panda$core$Int64) { 11 }));
        $tmp808 = $tmp815.value;
        $l814:;
        panda$core$Bit $tmp816 = { $tmp808 };
        bool $tmp807 = $tmp816.value;
        if ($tmp807) goto $l817;
        panda$core$Bit $tmp818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9802.$rawValue, ((panda$core$Int64) { 12 }));
        $tmp807 = $tmp818.value;
        $l817:;
        panda$core$Bit $tmp819 = { $tmp807 };
        bool $tmp806 = $tmp819.value;
        if ($tmp806) goto $l820;
        panda$core$Bit $tmp821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9802.$rawValue, ((panda$core$Int64) { 15 }));
        $tmp806 = $tmp821.value;
        $l820:;
        panda$core$Bit $tmp822 = { $tmp806 };
        bool $tmp805 = $tmp822.value;
        if ($tmp805) goto $l823;
        panda$core$Bit $tmp824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9802.$rawValue, ((panda$core$Int64) { 14 }));
        $tmp805 = $tmp824.value;
        $l823:;
        panda$core$Bit $tmp825 = { $tmp805 };
        bool $tmp804 = $tmp825.value;
        if ($tmp804) goto $l826;
        panda$core$Bit $tmp827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9802.$rawValue, ((panda$core$Int64) { 17 }));
        $tmp804 = $tmp827.value;
        $l826:;
        panda$core$Bit $tmp828 = { $tmp804 };
        bool $tmp803 = $tmp828.value;
        if ($tmp803) goto $l829;
        panda$core$Bit $tmp830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9802.$rawValue, ((panda$core$Int64) { 16 }));
        $tmp803 = $tmp830.value;
        $l829:;
        panda$core$Bit $tmp831 = { $tmp803 };
        if ($tmp831.value) {
        {
            $returnValue832 = ((panda$core$Bit) { true });
            return $returnValue832;
        }
        }
        else {
        {
            $returnValue832 = ((panda$core$Bit) { false });
            return $returnValue832;
        }
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$466_9835;
    panda$core$Bit $returnValue849;
    {
        $match$466_9835 = self->typeKind;
        panda$core$Bit $tmp839 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_9835.$rawValue, ((panda$core$Int64) { 15 }));
        bool $tmp838 = $tmp839.value;
        if ($tmp838) goto $l840;
        panda$core$Bit $tmp841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_9835.$rawValue, ((panda$core$Int64) { 14 }));
        $tmp838 = $tmp841.value;
        $l840:;
        panda$core$Bit $tmp842 = { $tmp838 };
        bool $tmp837 = $tmp842.value;
        if ($tmp837) goto $l843;
        panda$core$Bit $tmp844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_9835.$rawValue, ((panda$core$Int64) { 17 }));
        $tmp837 = $tmp844.value;
        $l843:;
        panda$core$Bit $tmp845 = { $tmp837 };
        bool $tmp836 = $tmp845.value;
        if ($tmp836) goto $l846;
        panda$core$Bit $tmp847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_9835.$rawValue, ((panda$core$Int64) { 16 }));
        $tmp836 = $tmp847.value;
        $l846:;
        panda$core$Bit $tmp848 = { $tmp836 };
        if ($tmp848.value) {
        {
            $returnValue849 = ((panda$core$Bit) { true });
            return $returnValue849;
        }
        }
        else {
        {
            $returnValue849 = ((panda$core$Bit) { false });
            return $returnValue849;
        }
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue852;
    panda$core$Bit $tmp854 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s853);
    $returnValue852 = $tmp854;
    return $returnValue852;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue857;
    panda$core$Object* $tmp858;
    panda$core$Object* $tmp865;
    panda$core$Bit $tmp856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp856.value) {
    {
        panda$core$Object* $tmp859 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        $tmp858 = $tmp859;
        panda$core$Bit $tmp860 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp858));
        $returnValue857 = $tmp860;
        panda$core$Panda$unref$panda$core$Object($tmp858);
        return $returnValue857;
    }
    }
    panda$core$Bit $tmp863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 11 }));
    bool $tmp862 = $tmp863.value;
    if (!$tmp862) goto $l864;
    panda$core$Object* $tmp866 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp865 = $tmp866;
    panda$core$Bit $tmp868 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp865))->name, &$s867);
    $tmp862 = $tmp868.value;
    panda$core$Panda$unref$panda$core$Object($tmp865);
    $l864:;
    panda$core$Bit $tmp869 = { $tmp862 };
    $returnValue857 = $tmp869;
    return $returnValue857;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue872;
    panda$core$Object* $tmp873;
    panda$core$Object* $tmp880;
    panda$core$Bit $tmp871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp871.value) {
    {
        panda$core$Object* $tmp874 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        $tmp873 = $tmp874;
        panda$core$Bit $tmp875 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp873));
        $returnValue872 = $tmp875;
        panda$core$Panda$unref$panda$core$Object($tmp873);
        return $returnValue872;
    }
    }
    panda$core$Bit $tmp878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 11 }));
    bool $tmp877 = $tmp878.value;
    if (!$tmp877) goto $l879;
    panda$core$Object* $tmp881 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp880 = $tmp881;
    panda$core$Bit $tmp883 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp880))->name, &$s882);
    $tmp877 = $tmp883.value;
    panda$core$Panda$unref$panda$core$Object($tmp880);
    $l879:;
    panda$core$Bit $tmp884 = { $tmp877 };
    $returnValue872 = $tmp884;
    return $returnValue872;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type* $returnValue890;
    org$pandalanguage$pandac$Type* $tmp891;
    panda$collections$Array* subtypes894 = NULL;
    panda$collections$Array* $tmp895;
    panda$collections$Array* $tmp896;
    org$pandalanguage$pandac$Type* $tmp898;
    org$pandalanguage$pandac$Type* $tmp899;
    panda$core$String* $tmp901;
    panda$core$String* $tmp902;
    org$pandalanguage$pandac$Type$Kind $tmp906;
    org$pandalanguage$pandac$Position $tmp907;
    int $tmp888;
    {
        panda$core$Bit $tmp889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp889.value) {
        {
            $tmp891 = self;
            $returnValue890 = $tmp891;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp891));
            $tmp888 = 0;
            goto $l886;
            $l892:;
            return $returnValue890;
        }
        }
        panda$collections$Array* $tmp897 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp897);
        $tmp896 = $tmp897;
        $tmp895 = $tmp896;
        subtypes894 = $tmp895;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp895));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp896));
        panda$collections$Array$add$panda$collections$Array$T(subtypes894, ((panda$core$Object*) self));
        org$pandalanguage$pandac$Type* $tmp900 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp903 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp902 = $tmp903;
        panda$core$String* $tmp905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp902, &$s904);
        $tmp901 = $tmp905;
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp906, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Position$init(&$tmp907);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp900, $tmp901, $tmp906, $tmp907, ((panda$collections$ListView*) subtypes894), ((panda$core$Bit) { true }));
        $tmp899 = $tmp900;
        $tmp898 = $tmp899;
        $returnValue890 = $tmp898;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp898));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp899));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp901));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp902));
        $tmp888 = 1;
        goto $l886;
        $l908:;
        return $returnValue890;
    }
    $l886:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes894));
    subtypes894 = NULL;
    switch ($tmp888) {
        case 1: goto $l908;
        case 0: goto $l892;
    }
    $l910:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type* $returnValue912;
    org$pandalanguage$pandac$Type* $tmp913;
    org$pandalanguage$pandac$Type* $tmp915;
    panda$core$Object* $tmp916;
    panda$core$Bit $tmp911 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp911.value) {
    {
        $tmp913 = self;
        $returnValue912 = $tmp913;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp913));
        return $returnValue912;
    }
    }
    panda$core$Object* $tmp917 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp916 = $tmp917;
    $tmp915 = ((org$pandalanguage$pandac$Type*) $tmp916);
    $returnValue912 = $tmp915;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp915));
    panda$core$Panda$unref$panda$core$Object($tmp916);
    return $returnValue912;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_other) {
    org$pandalanguage$pandac$Type* $returnValue923;
    org$pandalanguage$pandac$Type* $tmp924;
    org$pandalanguage$pandac$Type* $tmp927;
    org$pandalanguage$pandac$Type* $tmp931;
    org$pandalanguage$pandac$Type* $tmp934;
    org$pandalanguage$pandac$Type* $tmp935;
    org$pandalanguage$pandac$Type* $tmp939;
    org$pandalanguage$pandac$Type* $tmp943;
    org$pandalanguage$pandac$Type* $tmp946;
    org$pandalanguage$pandac$Type* $tmp947;
    org$pandalanguage$pandac$Type* $tmp956;
    org$pandalanguage$pandac$Type* $tmp964;
    org$pandalanguage$pandac$Type* $tmp973;
    org$pandalanguage$pandac$Type* $tmp979;
    org$pandalanguage$pandac$Type* $tmp980;
    org$pandalanguage$pandac$Type* $tmp984;
    org$pandalanguage$pandac$Type* $tmp985;
    org$pandalanguage$pandac$Type* $tmp995;
    org$pandalanguage$pandac$Type* $tmp1001;
    org$pandalanguage$pandac$Type* $tmp1002;
    org$pandalanguage$pandac$Type* $tmp1006;
    org$pandalanguage$pandac$Type* $tmp1007;
    org$pandalanguage$pandac$Type* $tmp1012;
    org$pandalanguage$pandac$Type* $tmp1013;
    org$pandalanguage$pandac$Type* $tmp1014;
    panda$core$Object* $tmp1015;
    org$pandalanguage$pandac$Type* $tmp1022;
    org$pandalanguage$pandac$Type* $tmp1023;
    org$pandalanguage$pandac$Type* $tmp1024;
    panda$core$Object* $tmp1025;
    org$pandalanguage$pandac$Type* t11031 = NULL;
    org$pandalanguage$pandac$Type* $tmp1032;
    org$pandalanguage$pandac$Type* $tmp1033;
    org$pandalanguage$pandac$Type* t21035 = NULL;
    org$pandalanguage$pandac$Type* $tmp1036;
    org$pandalanguage$pandac$Type* $tmp1037;
    panda$collections$Set* ancestors1047 = NULL;
    panda$collections$Set* $tmp1048;
    panda$collections$Set* $tmp1049;
    org$pandalanguage$pandac$Type* t1051 = NULL;
    org$pandalanguage$pandac$Type* $tmp1052;
    org$pandalanguage$pandac$ClassDecl* cl1053 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1054;
    org$pandalanguage$pandac$ClassDecl* $tmp1055;
    org$pandalanguage$pandac$Type* $tmp1060;
    org$pandalanguage$pandac$Type* $tmp1061;
    org$pandalanguage$pandac$Type* $tmp1062;
    org$pandalanguage$pandac$ClassDecl* $tmp1064;
    org$pandalanguage$pandac$ClassDecl* $tmp1065;
    org$pandalanguage$pandac$ClassDecl* $tmp1066;
    org$pandalanguage$pandac$ClassDecl* $tmp1068;
    org$pandalanguage$pandac$ClassDecl* $tmp1069;
    org$pandalanguage$pandac$Type* $tmp1070;
    org$pandalanguage$pandac$Type* $tmp1071;
    org$pandalanguage$pandac$ClassDecl* $tmp1072;
    org$pandalanguage$pandac$ClassDecl* $tmp1073;
    org$pandalanguage$pandac$ClassDecl* $tmp1074;
    org$pandalanguage$pandac$Type* $tmp1080;
    org$pandalanguage$pandac$Type* $tmp1084;
    org$pandalanguage$pandac$Type* $tmp1085;
    org$pandalanguage$pandac$Type* $tmp1086;
    org$pandalanguage$pandac$ClassDecl* $tmp1088;
    org$pandalanguage$pandac$ClassDecl* $tmp1089;
    org$pandalanguage$pandac$ClassDecl* $tmp1090;
    org$pandalanguage$pandac$ClassDecl* $tmp1092;
    org$pandalanguage$pandac$ClassDecl* $tmp1093;
    org$pandalanguage$pandac$Type* $tmp1095;
    org$pandalanguage$pandac$Type* $tmp1096;
    int $tmp921;
    {
        panda$core$Bit $tmp922 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
        if ($tmp922.value) {
        {
            $tmp924 = self;
            $returnValue923 = $tmp924;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp924));
            $tmp921 = 0;
            goto $l919;
            $l925:;
            return $returnValue923;
        }
        }
        org$pandalanguage$pandac$Type* $tmp928 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp927 = $tmp928;
        panda$core$Bit $tmp929 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp927);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp927));
        if ($tmp929.value) {
        {
            panda$core$Bit $tmp930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp930.value) {
            {
                $tmp931 = p_other;
                $returnValue923 = $tmp931;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp931));
                $tmp921 = 1;
                goto $l919;
                $l932:;
                return $returnValue923;
            }
            }
            org$pandalanguage$pandac$Type* $tmp936 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
            $tmp935 = $tmp936;
            $tmp934 = $tmp935;
            $returnValue923 = $tmp934;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp934));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp935));
            $tmp921 = 2;
            goto $l919;
            $l937:;
            return $returnValue923;
        }
        }
        org$pandalanguage$pandac$Type* $tmp940 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp939 = $tmp940;
        panda$core$Bit $tmp941 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp939);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp939));
        if ($tmp941.value) {
        {
            panda$core$Bit $tmp942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp942.value) {
            {
                $tmp943 = self;
                $returnValue923 = $tmp943;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp943));
                $tmp921 = 3;
                goto $l919;
                $l944:;
                return $returnValue923;
            }
            }
            org$pandalanguage$pandac$Type* $tmp948 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
            $tmp947 = $tmp948;
            $tmp946 = $tmp947;
            $returnValue923 = $tmp946;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp946));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp947));
            $tmp921 = 4;
            goto $l919;
            $l949:;
            return $returnValue923;
        }
        }
        panda$core$Bit $tmp952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
        bool $tmp951 = $tmp952.value;
        if (!$tmp951) goto $l953;
        panda$core$Bit $tmp954 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        $tmp951 = $tmp954.value;
        $l953:;
        panda$core$Bit $tmp955 = { $tmp951 };
        if ($tmp955.value) {
        {
            $tmp956 = p_other;
            $returnValue923 = $tmp956;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp956));
            $tmp921 = 5;
            goto $l919;
            $l957:;
            return $returnValue923;
        }
        }
        panda$core$Bit $tmp960 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        bool $tmp959 = $tmp960.value;
        if (!$tmp959) goto $l961;
        panda$core$Bit $tmp962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
        $tmp959 = $tmp962.value;
        $l961:;
        panda$core$Bit $tmp963 = { $tmp959 };
        if ($tmp963.value) {
        {
            $tmp964 = self;
            $returnValue923 = $tmp964;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp964));
            $tmp921 = 6;
            goto $l919;
            $l965:;
            return $returnValue923;
        }
        }
        panda$core$Bit $tmp967 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
        if ($tmp967.value) {
        {
            panda$core$Bit $tmp969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
            bool $tmp968 = $tmp969.value;
            if ($tmp968) goto $l970;
            panda$core$Bit $tmp971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 18 }));
            $tmp968 = $tmp971.value;
            $l970:;
            panda$core$Bit $tmp972 = { $tmp968 };
            if ($tmp972.value) {
            {
                $tmp973 = self;
                $returnValue923 = $tmp973;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp973));
                $tmp921 = 7;
                goto $l919;
                $l974:;
                return $returnValue923;
            }
            }
            panda$core$Bit $tmp976 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
            if ($tmp976.value) {
            {
                panda$core$Bit $tmp978 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s977);
                if ($tmp978.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp981 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp980 = $tmp981;
                    $tmp979 = $tmp980;
                    $returnValue923 = $tmp979;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp979));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp980));
                    $tmp921 = 8;
                    goto $l919;
                    $l982:;
                    return $returnValue923;
                }
                }
                org$pandalanguage$pandac$Type* $tmp986 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp985 = $tmp986;
                $tmp984 = $tmp985;
                $returnValue923 = $tmp984;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp984));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp985));
                $tmp921 = 9;
                goto $l919;
                $l987:;
                return $returnValue923;
            }
            }
        }
        }
        panda$core$Bit $tmp989 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
        if ($tmp989.value) {
        {
            panda$core$Bit $tmp991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
            bool $tmp990 = $tmp991.value;
            if ($tmp990) goto $l992;
            panda$core$Bit $tmp993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 18 }));
            $tmp990 = $tmp993.value;
            $l992:;
            panda$core$Bit $tmp994 = { $tmp990 };
            if ($tmp994.value) {
            {
                $tmp995 = p_other;
                $returnValue923 = $tmp995;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp995));
                $tmp921 = 10;
                goto $l919;
                $l996:;
                return $returnValue923;
            }
            }
            panda$core$Bit $tmp998 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
            if ($tmp998.value) {
            {
                panda$core$Bit $tmp1000 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s999);
                if ($tmp1000.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1003 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp1002 = $tmp1003;
                    $tmp1001 = $tmp1002;
                    $returnValue923 = $tmp1001;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1001));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1002));
                    $tmp921 = 11;
                    goto $l919;
                    $l1004:;
                    return $returnValue923;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1008 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp1007 = $tmp1008;
                $tmp1006 = $tmp1007;
                $returnValue923 = $tmp1006;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1006));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1007));
                $tmp921 = 12;
                goto $l919;
                $l1009:;
                return $returnValue923;
            }
            }
        }
        }
        panda$core$Bit $tmp1011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1011.value) {
        {
            panda$core$Object* $tmp1016 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            $tmp1015 = $tmp1016;
            org$pandalanguage$pandac$Type* $tmp1017 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1015), p_compiler, p_other);
            $tmp1014 = $tmp1017;
            org$pandalanguage$pandac$Type* $tmp1018 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1014);
            $tmp1013 = $tmp1018;
            $tmp1012 = $tmp1013;
            $returnValue923 = $tmp1012;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1012));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1013));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1014));
            panda$core$Panda$unref$panda$core$Object($tmp1015);
            $tmp921 = 13;
            goto $l919;
            $l1019:;
            return $returnValue923;
        }
        }
        panda$core$Bit $tmp1021 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1021.value) {
        {
            panda$core$Object* $tmp1026 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, ((panda$core$Int64) { 0 }));
            $tmp1025 = $tmp1026;
            org$pandalanguage$pandac$Type* $tmp1027 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_compiler, ((org$pandalanguage$pandac$Type*) $tmp1025));
            $tmp1024 = $tmp1027;
            org$pandalanguage$pandac$Type* $tmp1028 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1024);
            $tmp1023 = $tmp1028;
            $tmp1022 = $tmp1023;
            $returnValue923 = $tmp1022;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1022));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1023));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1024));
            panda$core$Panda$unref$panda$core$Object($tmp1025);
            $tmp921 = 14;
            goto $l919;
            $l1029:;
            return $returnValue923;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1034 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self);
        $tmp1033 = $tmp1034;
        $tmp1032 = $tmp1033;
        t11031 = $tmp1032;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1032));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1033));
        org$pandalanguage$pandac$Type* $tmp1038 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_other);
        $tmp1037 = $tmp1038;
        $tmp1036 = $tmp1037;
        t21035 = $tmp1036;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1036));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1037));
        panda$core$Bit $tmp1040 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t11031);
        bool $tmp1039 = $tmp1040.value;
        if (!$tmp1039) goto $l1041;
        panda$core$Bit $tmp1042 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t21035);
        $tmp1039 = $tmp1042.value;
        $l1041:;
        panda$core$Bit $tmp1043 = { $tmp1039 };
        if ($tmp1043.value) {
        {
            int $tmp1046;
            {
                panda$collections$Set* $tmp1050 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
                panda$collections$Set$init($tmp1050);
                $tmp1049 = $tmp1050;
                $tmp1048 = $tmp1049;
                ancestors1047 = $tmp1048;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1048));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1049));
                $tmp1052 = self;
                t1051 = $tmp1052;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1052));
                org$pandalanguage$pandac$ClassDecl* $tmp1056 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t11031);
                $tmp1055 = $tmp1056;
                $tmp1054 = $tmp1055;
                cl1053 = $tmp1054;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1054));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1055));
                $l1057:;
                bool $tmp1059 = ((panda$core$Bit) { cl1053 != NULL }).value;
                if (!$tmp1059) goto $l1058;
                {
                    panda$collections$Set$add$panda$collections$Set$T(ancestors1047, ((panda$collections$Key*) t1051));
                    if (((panda$core$Bit) { cl1053->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp1060 = t1051;
                            org$pandalanguage$pandac$Type* $tmp1063 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t1051, cl1053->rawSuper);
                            $tmp1062 = $tmp1063;
                            $tmp1061 = $tmp1062;
                            t1051 = $tmp1061;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1061));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1062));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1060));
                        }
                        {
                            $tmp1064 = cl1053;
                            org$pandalanguage$pandac$ClassDecl* $tmp1067 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1051);
                            $tmp1066 = $tmp1067;
                            $tmp1065 = $tmp1066;
                            cl1053 = $tmp1065;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1065));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1066));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1064));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1068 = cl1053;
                            $tmp1069 = NULL;
                            cl1053 = $tmp1069;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1069));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1068));
                        }
                    }
                    }
                }
                goto $l1057;
                $l1058:;
                {
                    $tmp1070 = t1051;
                    $tmp1071 = p_other;
                    t1051 = $tmp1071;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1071));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1070));
                }
                {
                    $tmp1072 = cl1053;
                    org$pandalanguage$pandac$ClassDecl* $tmp1075 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t21035);
                    $tmp1074 = $tmp1075;
                    $tmp1073 = $tmp1074;
                    cl1053 = $tmp1073;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1073));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1074));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1072));
                }
                $l1076:;
                bool $tmp1078 = ((panda$core$Bit) { cl1053 != NULL }).value;
                if (!$tmp1078) goto $l1077;
                {
                    panda$core$Bit $tmp1079 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(ancestors1047, ((panda$collections$Key*) t1051));
                    if ($tmp1079.value) {
                    {
                        $tmp1080 = t1051;
                        $returnValue923 = $tmp1080;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1080));
                        $tmp1046 = 0;
                        goto $l1044;
                        $l1081:;
                        $tmp921 = 15;
                        goto $l919;
                        $l1082:;
                        return $returnValue923;
                    }
                    }
                    if (((panda$core$Bit) { cl1053->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp1084 = t1051;
                            org$pandalanguage$pandac$Type* $tmp1087 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t1051, cl1053->rawSuper);
                            $tmp1086 = $tmp1087;
                            $tmp1085 = $tmp1086;
                            t1051 = $tmp1085;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1085));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1086));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1084));
                        }
                        {
                            $tmp1088 = cl1053;
                            org$pandalanguage$pandac$ClassDecl* $tmp1091 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1051);
                            $tmp1090 = $tmp1091;
                            $tmp1089 = $tmp1090;
                            cl1053 = $tmp1089;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1089));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1090));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1088));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1092 = cl1053;
                            $tmp1093 = NULL;
                            cl1053 = $tmp1093;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1093));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1092));
                        }
                    }
                    }
                }
                goto $l1076;
                $l1077:;
            }
            $tmp1046 = -1;
            goto $l1044;
            $l1044:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1053));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1051));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors1047));
            ancestors1047 = NULL;
            t1051 = NULL;
            cl1053 = NULL;
            switch ($tmp1046) {
                case 0: goto $l1081;
                case -1: goto $l1094;
            }
            $l1094:;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1097 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp1096 = $tmp1097;
        $tmp1095 = $tmp1096;
        $returnValue923 = $tmp1095;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1095));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1096));
        $tmp921 = 16;
        goto $l919;
        $l1098:;
        return $returnValue923;
    }
    $l919:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t21035));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t11031));
    t11031 = NULL;
    t21035 = NULL;
    switch ($tmp921) {
        case 16: goto $l1098;
        case 5: goto $l957;
        case 15: goto $l1082;
        case 3: goto $l944;
        case 9: goto $l987;
        case 1: goto $l932;
        case 13: goto $l1019;
        case 12: goto $l1009;
        case 14: goto $l1029;
        case 2: goto $l937;
        case 8: goto $l982;
        case 11: goto $l1004;
        case 4: goto $l949;
        case 7: goto $l974;
        case 10: goto $l996;
        case 6: goto $l965;
        case 0: goto $l925;
    }
    $l1100:;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    org$pandalanguage$pandac$Type* $returnValue1103;
    org$pandalanguage$pandac$Type* $tmp1104;
    org$pandalanguage$pandac$Type$Kind $match$597_91106;
    org$pandalanguage$pandac$Type* found1111 = NULL;
    org$pandalanguage$pandac$Type* $tmp1112;
    panda$core$Object* $tmp1113;
    org$pandalanguage$pandac$Type* $tmp1115;
    org$pandalanguage$pandac$Type* $tmp1118;
    org$pandalanguage$pandac$Type* base1126 = NULL;
    org$pandalanguage$pandac$Type* $tmp1127;
    org$pandalanguage$pandac$Type* $tmp1128;
    panda$core$Object* $tmp1129;
    panda$collections$Array* remappedArgs1132 = NULL;
    panda$collections$Array* $tmp1133;
    panda$collections$Array* $tmp1134;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1136;
    org$pandalanguage$pandac$Type* $tmp1151;
    panda$core$Object* $tmp1152;
    org$pandalanguage$pandac$Type* $tmp1161;
    org$pandalanguage$pandac$Type* $tmp1162;
    org$pandalanguage$pandac$Type* $tmp1168;
    org$pandalanguage$pandac$Type* $tmp1169;
    org$pandalanguage$pandac$Type* $tmp1170;
    panda$core$Object* $tmp1171;
    panda$collections$Array* remapped1192 = NULL;
    panda$collections$Array* $tmp1193;
    panda$collections$Array* $tmp1194;
    panda$core$MutableString* name1196 = NULL;
    panda$core$MutableString* $tmp1197;
    panda$core$MutableString* $tmp1198;
    panda$core$String* separator1201 = NULL;
    panda$core$String* $tmp1202;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1206;
    org$pandalanguage$pandac$Type* child1225 = NULL;
    org$pandalanguage$pandac$Type* $tmp1226;
    org$pandalanguage$pandac$Type* $tmp1227;
    panda$core$Object* $tmp1228;
    panda$core$String* $tmp1231;
    panda$core$String* $tmp1232;
    org$pandalanguage$pandac$Type$Kind $match$625_171241;
    panda$core$Object* $tmp1250;
    org$pandalanguage$pandac$Type* $tmp1254;
    org$pandalanguage$pandac$Type* child1260 = NULL;
    org$pandalanguage$pandac$Type* $tmp1261;
    org$pandalanguage$pandac$Type* $tmp1262;
    panda$core$Object* $tmp1263;
    org$pandalanguage$pandac$Type* $tmp1269;
    panda$core$Char8 $tmp1271;
    org$pandalanguage$pandac$Type* $tmp1272;
    org$pandalanguage$pandac$Type* $tmp1273;
    panda$core$String* $tmp1275;
    org$pandalanguage$pandac$Type* $tmp1280;
    panda$core$Int64 $tmp1101 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp1102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1101, ((panda$core$Int64) { 0 }));
    if ($tmp1102.value) {
    {
        $tmp1104 = self;
        $returnValue1103 = $tmp1104;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1104));
        return $returnValue1103;
    }
    }
    {
        $match$597_91106 = self->typeKind;
        panda$core$Bit $tmp1107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$597_91106.$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1107.value) {
        {
            int $tmp1110;
            {
                panda$core$Object* $tmp1114 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
                $tmp1113 = $tmp1114;
                $tmp1112 = ((org$pandalanguage$pandac$Type*) $tmp1113);
                found1111 = $tmp1112;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1112));
                panda$core$Panda$unref$panda$core$Object($tmp1113);
                if (((panda$core$Bit) { found1111 != NULL }).value) {
                {
                    $tmp1115 = found1111;
                    $returnValue1103 = $tmp1115;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1115));
                    $tmp1110 = 0;
                    goto $l1108;
                    $l1116:;
                    return $returnValue1103;
                }
                }
                $tmp1118 = self;
                $returnValue1103 = $tmp1118;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1118));
                $tmp1110 = 1;
                goto $l1108;
                $l1119:;
                return $returnValue1103;
            }
            $l1108:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found1111));
            found1111 = NULL;
            switch ($tmp1110) {
                case 1: goto $l1119;
                case 0: goto $l1116;
            }
            $l1121:;
        }
        }
        else {
        panda$core$Bit $tmp1122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$597_91106.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1122.value) {
        {
            int $tmp1125;
            {
                panda$core$Object* $tmp1130 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
                $tmp1129 = $tmp1130;
                org$pandalanguage$pandac$Type* $tmp1131 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1129), p_types);
                $tmp1128 = $tmp1131;
                $tmp1127 = $tmp1128;
                base1126 = $tmp1127;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1127));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1128));
                panda$core$Panda$unref$panda$core$Object($tmp1129);
                panda$collections$Array* $tmp1135 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1135);
                $tmp1134 = $tmp1135;
                $tmp1133 = $tmp1134;
                remappedArgs1132 = $tmp1133;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1133));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1134));
                panda$core$Int64 $tmp1137 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1136, ((panda$core$Int64) { 1 }), $tmp1137, ((panda$core$Bit) { false }));
                int64_t $tmp1139 = $tmp1136.min.value;
                panda$core$Int64 i1138 = { $tmp1139 };
                int64_t $tmp1141 = $tmp1136.max.value;
                bool $tmp1142 = $tmp1136.inclusive.value;
                if ($tmp1142) goto $l1149; else goto $l1150;
                $l1149:;
                if ($tmp1139 <= $tmp1141) goto $l1143; else goto $l1145;
                $l1150:;
                if ($tmp1139 < $tmp1141) goto $l1143; else goto $l1145;
                $l1143:;
                {
                    panda$core$Object* $tmp1153 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1138);
                    $tmp1152 = $tmp1153;
                    org$pandalanguage$pandac$Type* $tmp1154 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1152), p_types);
                    $tmp1151 = $tmp1154;
                    panda$collections$Array$add$panda$collections$Array$T(remappedArgs1132, ((panda$core$Object*) $tmp1151));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1151));
                    panda$core$Panda$unref$panda$core$Object($tmp1152);
                }
                $l1146:;
                int64_t $tmp1156 = $tmp1141 - i1138.value;
                if ($tmp1142) goto $l1157; else goto $l1158;
                $l1157:;
                if ((uint64_t) $tmp1156 >= 1) goto $l1155; else goto $l1145;
                $l1158:;
                if ((uint64_t) $tmp1156 > 1) goto $l1155; else goto $l1145;
                $l1155:;
                i1138.value += 1;
                goto $l1143;
                $l1145:;
                org$pandalanguage$pandac$Type* $tmp1163 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(base1126, ((panda$collections$ListView*) remappedArgs1132));
                $tmp1162 = $tmp1163;
                $tmp1161 = $tmp1162;
                $returnValue1103 = $tmp1161;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1161));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1162));
                $tmp1125 = 0;
                goto $l1123;
                $l1164:;
                return $returnValue1103;
            }
            $l1123:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remappedArgs1132));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1126));
            base1126 = NULL;
            remappedArgs1132 = NULL;
            switch ($tmp1125) {
                case 0: goto $l1164;
            }
            $l1166:;
        }
        }
        else {
        panda$core$Bit $tmp1167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$597_91106.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1167.value) {
        {
            panda$core$Object* $tmp1172 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            $tmp1171 = $tmp1172;
            org$pandalanguage$pandac$Type* $tmp1173 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1171), p_types);
            $tmp1170 = $tmp1173;
            org$pandalanguage$pandac$Type* $tmp1174 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1170);
            $tmp1169 = $tmp1174;
            $tmp1168 = $tmp1169;
            $returnValue1103 = $tmp1168;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1168));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1169));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1170));
            panda$core$Panda$unref$panda$core$Object($tmp1171);
            return $returnValue1103;
        }
        }
        else {
        panda$core$Bit $tmp1179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$597_91106.$rawValue, ((panda$core$Int64) { 15 }));
        bool $tmp1178 = $tmp1179.value;
        if ($tmp1178) goto $l1180;
        panda$core$Bit $tmp1181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$597_91106.$rawValue, ((panda$core$Int64) { 14 }));
        $tmp1178 = $tmp1181.value;
        $l1180:;
        panda$core$Bit $tmp1182 = { $tmp1178 };
        bool $tmp1177 = $tmp1182.value;
        if ($tmp1177) goto $l1183;
        panda$core$Bit $tmp1184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$597_91106.$rawValue, ((panda$core$Int64) { 17 }));
        $tmp1177 = $tmp1184.value;
        $l1183:;
        panda$core$Bit $tmp1185 = { $tmp1177 };
        bool $tmp1176 = $tmp1185.value;
        if ($tmp1176) goto $l1186;
        panda$core$Bit $tmp1187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$597_91106.$rawValue, ((panda$core$Int64) { 16 }));
        $tmp1176 = $tmp1187.value;
        $l1186:;
        panda$core$Bit $tmp1188 = { $tmp1176 };
        if ($tmp1188.value) {
        {
            int $tmp1191;
            {
                panda$collections$Array* $tmp1195 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1195);
                $tmp1194 = $tmp1195;
                $tmp1193 = $tmp1194;
                remapped1192 = $tmp1193;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1193));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1194));
                panda$core$MutableString* $tmp1199 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1199, &$s1200);
                $tmp1198 = $tmp1199;
                $tmp1197 = $tmp1198;
                name1196 = $tmp1197;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1197));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1198));
                $tmp1202 = &$s1203;
                separator1201 = $tmp1202;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1202));
                panda$core$Int64 $tmp1204 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Bit $tmp1205 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1204, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1205.value);
                panda$core$Int64 $tmp1207 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp1208 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1207, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1206, ((panda$core$Int64) { 0 }), $tmp1208, ((panda$core$Bit) { false }));
                int64_t $tmp1210 = $tmp1206.min.value;
                panda$core$Int64 i1209 = { $tmp1210 };
                int64_t $tmp1212 = $tmp1206.max.value;
                bool $tmp1213 = $tmp1206.inclusive.value;
                if ($tmp1213) goto $l1220; else goto $l1221;
                $l1220:;
                if ($tmp1210 <= $tmp1212) goto $l1214; else goto $l1216;
                $l1221:;
                if ($tmp1210 < $tmp1212) goto $l1214; else goto $l1216;
                $l1214:;
                {
                    int $tmp1224;
                    {
                        panda$core$Object* $tmp1229 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1209);
                        $tmp1228 = $tmp1229;
                        org$pandalanguage$pandac$Type* $tmp1230 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1228), p_types);
                        $tmp1227 = $tmp1230;
                        $tmp1226 = $tmp1227;
                        child1225 = $tmp1226;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1226));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1227));
                        panda$core$Panda$unref$panda$core$Object($tmp1228);
                        panda$core$MutableString$append$panda$core$String(name1196, separator1201);
                        panda$core$MutableString$append$panda$core$String(name1196, ((org$pandalanguage$pandac$Symbol*) child1225)->name);
                        panda$collections$Array$add$panda$collections$Array$T(remapped1192, ((panda$core$Object*) child1225));
                        {
                            $tmp1231 = separator1201;
                            $tmp1232 = &$s1233;
                            separator1201 = $tmp1232;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1232));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1231));
                        }
                    }
                    $tmp1224 = -1;
                    goto $l1222;
                    $l1222:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child1225));
                    child1225 = NULL;
                    switch ($tmp1224) {
                        case -1: goto $l1234;
                    }
                    $l1234:;
                }
                $l1217:;
                int64_t $tmp1236 = $tmp1212 - i1209.value;
                if ($tmp1213) goto $l1237; else goto $l1238;
                $l1237:;
                if ((uint64_t) $tmp1236 >= 1) goto $l1235; else goto $l1216;
                $l1238:;
                if ((uint64_t) $tmp1236 > 1) goto $l1235; else goto $l1216;
                $l1235:;
                i1209.value += 1;
                goto $l1214;
                $l1216:;
                {
                    $match$625_171241 = self->typeKind;
                    panda$core$Bit $tmp1242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$625_171241.$rawValue, ((panda$core$Int64) { 14 }));
                    if ($tmp1242.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(name1196, &$s1243);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$625_171241.$rawValue, ((panda$core$Int64) { 15 }));
                    if ($tmp1244.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(name1196, &$s1245);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$625_171241.$rawValue, ((panda$core$Int64) { 16 }));
                    if ($tmp1246.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(name1196, &$s1247);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$625_171241.$rawValue, ((panda$core$Int64) { 17 }));
                    if ($tmp1248.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(name1196, &$s1249);
                    }
                    }
                    }
                    }
                    }
                }
                panda$core$Int64 $tmp1251 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp1252 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1251, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1253 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1252);
                $tmp1250 = $tmp1253;
                org$pandalanguage$pandac$Type* $tmp1255 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1254 = $tmp1255;
                panda$core$Bit $tmp1256 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1250), $tmp1254);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1254));
                panda$core$Panda$unref$panda$core$Object($tmp1250);
                if ($tmp1256.value) {
                {
                    int $tmp1259;
                    {
                        panda$core$Int64 $tmp1264 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                        panda$core$Int64 $tmp1265 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1264, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1266 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1265);
                        $tmp1263 = $tmp1266;
                        org$pandalanguage$pandac$Type* $tmp1267 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1263), p_types);
                        $tmp1262 = $tmp1267;
                        $tmp1261 = $tmp1262;
                        child1260 = $tmp1261;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1261));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1262));
                        panda$core$Panda$unref$panda$core$Object($tmp1263);
                        panda$core$MutableString$append$panda$core$String(name1196, ((org$pandalanguage$pandac$Symbol*) child1260)->name);
                        panda$collections$Array$add$panda$collections$Array$T(remapped1192, ((panda$core$Object*) child1260));
                    }
                    $tmp1259 = -1;
                    goto $l1257;
                    $l1257:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child1260));
                    child1260 = NULL;
                    switch ($tmp1259) {
                        case -1: goto $l1268;
                    }
                    $l1268:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1270 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                    $tmp1269 = $tmp1270;
                    panda$collections$Array$add$panda$collections$Array$T(remapped1192, ((panda$core$Object*) $tmp1269));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1269));
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1271, ((panda$core$UInt8) { 41 }));
                panda$core$MutableString$append$panda$core$Char8(name1196, $tmp1271);
                org$pandalanguage$pandac$Type* $tmp1274 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$String* $tmp1276 = panda$core$MutableString$finish$R$panda$core$String(name1196);
                $tmp1275 = $tmp1276;
                org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp1274, $tmp1275, self->typeKind, self->position, ((panda$collections$ListView*) remapped1192), self->resolved);
                $tmp1273 = $tmp1274;
                $tmp1272 = $tmp1273;
                $returnValue1103 = $tmp1272;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1272));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1273));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1275));
                $tmp1191 = 0;
                goto $l1189;
                $l1277:;
                return $returnValue1103;
            }
            $l1189:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1201));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1196));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remapped1192));
            remapped1192 = NULL;
            name1196 = NULL;
            separator1201 = NULL;
            switch ($tmp1191) {
                case 0: goto $l1277;
            }
            $l1279:;
        }
        }
        else {
        {
            $tmp1280 = self;
            $returnValue1103 = $tmp1280;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1280));
            return $returnValue1103;
        }
        }
        }
        }
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $returnValue1282;
    panda$core$Int64 $tmp1283 = panda$core$String$hash$R$panda$core$Int64(self->name);
    $returnValue1282 = $tmp1283;
    return $returnValue1282;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    panda$core$String* $returnValue1285;
    panda$core$String* $tmp1286;
    $tmp1286 = self->name;
    $returnValue1285 = $tmp1286;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1286));
    return $returnValue1285;
}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* self) {
    int $tmp1290;
    {
    }
    $tmp1290 = -1;
    goto $l1288;
    $l1288:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp1290) {
        case -1: goto $l1291;
    }
    $l1291:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->subtypes));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameter));
}

