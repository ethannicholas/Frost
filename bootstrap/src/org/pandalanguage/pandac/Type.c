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
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim(org$pandalanguage$pandac$Type* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p0, ((org$pandalanguage$pandac$Type*) p1));

    return result;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim(org$pandalanguage$pandac$Type* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p0, ((org$pandalanguage$pandac$Type*) p1));

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Type$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { org$pandalanguage$pandac$Type$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$pandac$Type$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$collections$Key, { org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim} };

static panda$core$String $s1;
org$pandalanguage$pandac$Type$class_type org$pandalanguage$pandac$Type$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, (ITable*) &org$pandalanguage$pandac$Type$_panda$core$Equatable, { org$pandalanguage$pandac$Type$convert$R$panda$core$String, org$pandalanguage$pandac$Type$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$Type$size$R$panda$core$Int64, org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit$shim, org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit, org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit, org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit, org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit, org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit, org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit, org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit, org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit, org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$returnType$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Type$hash$R$panda$core$Int64} };

typedef panda$collections$Iterator* (*$fn90)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn97)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn108)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn161)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn168)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn179)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn230)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn237)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn248)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 29, -3248623696866231612, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65\x3a\x20\x6e\x61\x6d\x65\x3d", 19, -7541892356805735546, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x3d", 11, 4555205210328637565, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x74\x79\x70\x65\x3a\x20\x6e\x61\x6d\x65\x3d", 19, -7541892356805735546, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x3d", 10, -7078666603951044273, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x3c", 11, 184897716878203264, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, 14840062047, NULL };
static panda$core$String $s266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, 1498821743785, NULL };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x74\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x3a\x20", 14, 7608231477062723026, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f", 18, 6054680304062974916, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 20, 4030834267849819614, NULL };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 28, 5895082338763246016, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x69\x6e\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x75\x69\x6e\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x33\x32", 15, -8746881330279772990, NULL };
static panda$core$String $s461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x66\x6c\x6f\x61\x74\x36\x34", 15, -8746881330279772685, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s484 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28", 15, -3021679630176935088, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x65\x67\x65\x72\x4c\x69\x74\x65\x72\x61\x6c\x28\x2d", 16, 8405006605191933629, NULL };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x61\x6c\x4c\x69\x74\x65\x72\x61\x6c\x28", 12, -1124881342984568394, NULL };
static panda$core$String $s616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x62\x69\x74\x5f\x6c\x69\x74\x65\x72\x61\x6c", 12, 7795433833837333484, NULL };
static panda$core$String $s633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, -1766462995282165597, NULL };
static panda$core$String $s673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, -1180377256514028899, NULL };
static panda$core$String $s686 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s697 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, 1602004586453922362, NULL };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s702 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x63\x68\x6f\x69\x63\x65\x20\x64\x61\x74\x61\x3e", 13, -7696597129364788656, NULL };
static panda$core$String $s794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x69\x6e\x76\x61\x6c\x69\x64\x3e", 9, 1754774734872970466, NULL };
static panda$core$String $s803 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c", 15, 1602004586448770858, NULL };
static panda$core$String $s844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s905 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s919 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s956 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s986 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2e\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65", 106, -1489654704582770111, NULL };
static panda$core$String $s1053 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1075 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s1276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x54\x79\x70\x65\x2e\x70\x61\x6e\x64\x61", 10, 739962874310944505, NULL };
static panda$core$String $s1312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s1324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s1326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, 14840062047, NULL };
static panda$core$String $s1328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, 1498821743785, NULL };

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
    org$pandalanguage$pandac$Position $tmp11;
    panda$collections$Array* $tmp12;
    panda$collections$Array* $tmp13;
    org$pandalanguage$pandac$Symbol$Kind $tmp14;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    panda$core$Bit $tmp6 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s5);
    panda$core$Bit $tmp7 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6);
    if ($tmp7.value) goto $l8; else goto $l9;
    $l9:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s10, (panda$core$Int64) { 49 });
    abort();
    $l8:;
    self->typeKind = p_typeKind;
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp11, p_size, p_size);
    ((org$pandalanguage$pandac$Symbol*) self)->position = $tmp11;
    self->resolved = ((panda$core$Bit) { true });
    {
        $tmp12 = self->subtypes;
        $tmp13 = NULL;
        self->subtypes = $tmp13;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp13));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    }
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp14, ((panda$core$Int64) { 6 }));
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp14, self->position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit(org$pandalanguage$pandac$Type* self, panda$core$String* p_name, org$pandalanguage$pandac$Type$Kind p_typeKind, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_subtypes, panda$core$Bit p_resolved) {
    panda$core$String* $tmp22;
    panda$core$String* $tmp23;
    panda$core$String* $tmp24;
    panda$core$String* $tmp25;
    panda$core$Object* $tmp30;
    panda$core$String* $tmp43;
    panda$core$String* $tmp44;
    panda$core$String* $tmp45;
    panda$core$String* $tmp46;
    panda$core$Object* $tmp51;
    panda$collections$Array* $tmp61;
    panda$collections$Array* $tmp62;
    panda$collections$Array* $tmp63;
    org$pandalanguage$pandac$Symbol$Kind $tmp65;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    panda$core$Bit $tmp15 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp17 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s16);
    panda$core$Bit $tmp18 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp15, $tmp17);
    if ($tmp18.value) goto $l19; else goto $l20;
    $l20:;
    panda$core$String* $tmp27 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s26, p_name);
    $tmp25 = $tmp27;
    panda$core$String* $tmp29 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp25, &$s28);
    $tmp24 = $tmp29;
    panda$core$Bit $tmp31 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    panda$core$Bit$wrapper* $tmp32;
    $tmp32 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp32->value = $tmp31;
    $tmp30 = ((panda$core$Object*) $tmp32);
    panda$core$String* $tmp33 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp24, $tmp30);
    $tmp23 = $tmp33;
    panda$core$String* $tmp35 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp23, &$s34);
    $tmp22 = $tmp35;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s21, (panda$core$Int64) { 58 }, $tmp22);
    abort();
    $l19:;
    panda$core$Bit $tmp36 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind.$rawValue, ((panda$core$Int64) { 11 }));
    panda$core$Bit $tmp38 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(p_name, &$s37);
    panda$core$Bit $tmp39 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit($tmp36, $tmp38);
    if ($tmp39.value) goto $l40; else goto $l41;
    $l41:;
    panda$core$String* $tmp48 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s47, p_name);
    $tmp46 = $tmp48;
    panda$core$String* $tmp50 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp46, &$s49);
    $tmp45 = $tmp50;
    panda$core$Bit $tmp52 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_typeKind.$rawValue, ((panda$core$Int64) { 11 }));
    panda$core$Bit$wrapper* $tmp53;
    $tmp53 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp53->value = $tmp52;
    $tmp51 = ((panda$core$Object*) $tmp53);
    panda$core$String* $tmp54 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp45, $tmp51);
    $tmp44 = $tmp54;
    panda$core$String* $tmp56 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp44, &$s55);
    $tmp43 = $tmp56;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s42, (panda$core$Int64) { 60 }, $tmp43);
    abort();
    $l40:;
    panda$core$Bit $tmp57 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_typeKind.$rawValue, ((panda$core$Int64) { 12 }));
    if ($tmp57.value) goto $l58; else goto $l59;
    $l59:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s60, (panda$core$Int64) { 62 });
    abort();
    $l58:;
    self->typeKind = p_typeKind;
    ((org$pandalanguage$pandac$Symbol*) self)->position = p_position;
    self->resolved = p_resolved;
    {
        $tmp61 = self->subtypes;
        panda$collections$Array* $tmp64 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp64, p_subtypes);
        $tmp63 = $tmp64;
        $tmp62 = $tmp63;
        self->subtypes = $tmp62;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp62));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp63));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp61));
    }
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp65, ((panda$core$Int64) { 6 }));
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp65, p_position, p_name);
}
void org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Type* self, panda$collections$ListView* p_subtypes) {
    org$pandalanguage$pandac$Type$Kind $tmp69;
    panda$collections$Array* $tmp70;
    panda$collections$Array* $tmp71;
    panda$collections$Array* $tmp72;
    panda$core$MutableString* name74 = NULL;
    panda$core$MutableString* $tmp75;
    panda$core$MutableString* $tmp76;
    panda$core$String* separator79 = NULL;
    panda$core$String* $tmp80;
    panda$collections$Iterator* Iter$76$985 = NULL;
    panda$collections$Iterator* $tmp86;
    panda$collections$Iterator* $tmp87;
    org$pandalanguage$pandac$Type* t103 = NULL;
    org$pandalanguage$pandac$Type* $tmp104;
    panda$core$Object* $tmp105;
    panda$core$String* $tmp110;
    panda$core$String* $tmp111;
    panda$core$Char8 $tmp118;
    org$pandalanguage$pandac$Symbol$Kind $tmp119;
    panda$core$String* $tmp120;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    int $tmp68;
    {
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp69, ((panda$core$Int64) { 7 }));
        self->typeKind = $tmp69;
        {
            $tmp70 = self->subtypes;
            panda$collections$Array* $tmp73 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp73, p_subtypes);
            $tmp72 = $tmp73;
            $tmp71 = $tmp72;
            self->subtypes = $tmp71;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp71));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp70));
        }
        panda$core$MutableString* $tmp77 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp77, &$s78);
        $tmp76 = $tmp77;
        $tmp75 = $tmp76;
        name74 = $tmp75;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp75));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp76));
        $tmp80 = &$s81;
        separator79 = $tmp80;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp80));
        self->resolved = ((panda$core$Bit) { true });
        {
            int $tmp84;
            {
                ITable* $tmp88 = ((panda$collections$Iterable*) p_subtypes)->$class->itable;
                while ($tmp88->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp88 = $tmp88->next;
                }
                $fn90 $tmp89 = $tmp88->methods[0];
                panda$collections$Iterator* $tmp91 = $tmp89(((panda$collections$Iterable*) p_subtypes));
                $tmp87 = $tmp91;
                $tmp86 = $tmp87;
                Iter$76$985 = $tmp86;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp86));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
                $l92:;
                ITable* $tmp95 = Iter$76$985->$class->itable;
                while ($tmp95->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp95 = $tmp95->next;
                }
                $fn97 $tmp96 = $tmp95->methods[0];
                panda$core$Bit $tmp98 = $tmp96(Iter$76$985);
                panda$core$Bit $tmp99 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp98);
                bool $tmp94 = $tmp99.value;
                if (!$tmp94) goto $l93;
                {
                    int $tmp102;
                    {
                        ITable* $tmp106 = Iter$76$985->$class->itable;
                        while ($tmp106->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp106 = $tmp106->next;
                        }
                        $fn108 $tmp107 = $tmp106->methods[1];
                        panda$core$Object* $tmp109 = $tmp107(Iter$76$985);
                        $tmp105 = $tmp109;
                        $tmp104 = ((org$pandalanguage$pandac$Type*) $tmp105);
                        t103 = $tmp104;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp104));
                        panda$core$Panda$unref$panda$core$Object($tmp105);
                        panda$core$MutableString$append$panda$core$String(name74, separator79);
                        panda$core$MutableString$append$panda$core$Object(name74, ((panda$core$Object*) t103));
                        {
                            $tmp110 = separator79;
                            $tmp111 = &$s112;
                            separator79 = $tmp111;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp111));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp110));
                        }
                        bool $tmp113 = self->resolved.value;
                        if (!$tmp113) goto $l114;
                        $tmp113 = t103->resolved.value;
                        $l114:;
                        panda$core$Bit $tmp115 = { $tmp113 };
                        self->resolved = $tmp115;
                    }
                    $tmp102 = -1;
                    goto $l100;
                    $l100:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t103));
                    t103 = NULL;
                    switch ($tmp102) {
                        case -1: goto $l116;
                    }
                    $l116:;
                }
                goto $l92;
                $l93:;
            }
            $tmp84 = -1;
            goto $l82;
            $l82:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$76$985));
            Iter$76$985 = NULL;
            switch ($tmp84) {
                case -1: goto $l117;
            }
            $l117:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp118, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name74, $tmp118);
        org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp119, ((panda$core$Int64) { 6 }));
        panda$core$String* $tmp121 = panda$core$MutableString$finish$R$panda$core$String(name74);
        $tmp120 = $tmp121;
        org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp119, self->position, $tmp120);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp120));
    }
    $tmp68 = -1;
    goto $l66;
    $l66:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator79));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name74));
    name74 = NULL;
    separator79 = NULL;
    switch ($tmp68) {
        case -1: goto $l122;
    }
    $l122:;
}
void org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$ClassDecl$GenericParameter* p_param) {
    org$pandalanguage$pandac$Type$Kind $tmp123;
    panda$core$Weak* $tmp124;
    panda$core$Weak* $tmp125;
    panda$core$Weak* $tmp126;
    panda$collections$Array* $tmp128;
    panda$collections$Array* $tmp129;
    org$pandalanguage$pandac$Symbol$Kind $tmp130;
    panda$core$String* $tmp131;
    panda$core$String* $tmp132;
    panda$core$String* $tmp133;
    panda$core$String* $tmp134;
    self->name = NULL;
    self->subtypes = NULL;
    self->parameter = NULL;
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp123, ((panda$core$Int64) { 12 }));
    self->typeKind = $tmp123;
    {
        $tmp124 = self->parameter;
        panda$core$Weak* $tmp127 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp127, ((panda$core$Object*) p_param));
        $tmp126 = $tmp127;
        $tmp125 = $tmp126;
        self->parameter = $tmp125;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp125));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp126));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp124));
    }
    self->resolved = ((panda$core$Bit) { true });
    {
        $tmp128 = self->subtypes;
        $tmp129 = NULL;
        self->subtypes = $tmp129;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp129));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp128));
    }
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp130, ((panda$core$Int64) { 6 }));
    panda$core$String* $tmp135 = panda$core$String$convert$R$panda$core$String(p_param->owner);
    $tmp134 = $tmp135;
    panda$core$String* $tmp137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp134, &$s136);
    $tmp133 = $tmp137;
    panda$core$String* $tmp138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp133, ((org$pandalanguage$pandac$Symbol*) p_param)->name);
    $tmp132 = $tmp138;
    panda$core$String* $tmp140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp132, &$s139);
    $tmp131 = $tmp140;
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp130, self->position, $tmp131);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp132));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp133));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp134));
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_base, panda$collections$ListView* p_arguments) {
    panda$core$Bit resolved144;
    panda$core$MutableString* name145 = NULL;
    panda$core$MutableString* $tmp146;
    panda$core$MutableString* $tmp147;
    panda$core$Char8 $tmp149;
    panda$core$String* separator150 = NULL;
    panda$core$String* $tmp151;
    panda$collections$Iterator* Iter$101$9156 = NULL;
    panda$collections$Iterator* $tmp157;
    panda$collections$Iterator* $tmp158;
    org$pandalanguage$pandac$Type* a174 = NULL;
    org$pandalanguage$pandac$Type* $tmp175;
    panda$core$Object* $tmp176;
    panda$core$String* $tmp184;
    panda$core$String* $tmp185;
    panda$core$Char8 $tmp189;
    panda$collections$Array* subtypes190 = NULL;
    panda$collections$Array* $tmp191;
    panda$collections$Array* $tmp192;
    org$pandalanguage$pandac$Type* $returnValue194;
    org$pandalanguage$pandac$Type* $tmp195;
    org$pandalanguage$pandac$Type* $tmp196;
    panda$core$String* $tmp198;
    org$pandalanguage$pandac$Type$Kind $tmp200;
    panda$collections$ImmutableArray* $tmp201;
    int $tmp143;
    {
        resolved144 = p_base->resolved;
        panda$core$MutableString* $tmp148 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp148);
        $tmp147 = $tmp148;
        $tmp146 = $tmp147;
        name145 = $tmp146;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp146));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp147));
        panda$core$MutableString$append$panda$core$String(name145, ((org$pandalanguage$pandac$Symbol*) p_base)->name);
        panda$core$Char8$init$panda$core$UInt8(&$tmp149, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name145, $tmp149);
        $tmp151 = &$s152;
        separator150 = $tmp151;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp151));
        {
            int $tmp155;
            {
                ITable* $tmp159 = ((panda$collections$Iterable*) p_arguments)->$class->itable;
                while ($tmp159->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp159 = $tmp159->next;
                }
                $fn161 $tmp160 = $tmp159->methods[0];
                panda$collections$Iterator* $tmp162 = $tmp160(((panda$collections$Iterable*) p_arguments));
                $tmp158 = $tmp162;
                $tmp157 = $tmp158;
                Iter$101$9156 = $tmp157;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp157));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp158));
                $l163:;
                ITable* $tmp166 = Iter$101$9156->$class->itable;
                while ($tmp166->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp166 = $tmp166->next;
                }
                $fn168 $tmp167 = $tmp166->methods[0];
                panda$core$Bit $tmp169 = $tmp167(Iter$101$9156);
                panda$core$Bit $tmp170 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp169);
                bool $tmp165 = $tmp170.value;
                if (!$tmp165) goto $l164;
                {
                    int $tmp173;
                    {
                        ITable* $tmp177 = Iter$101$9156->$class->itable;
                        while ($tmp177->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp177 = $tmp177->next;
                        }
                        $fn179 $tmp178 = $tmp177->methods[1];
                        panda$core$Object* $tmp180 = $tmp178(Iter$101$9156);
                        $tmp176 = $tmp180;
                        $tmp175 = ((org$pandalanguage$pandac$Type*) $tmp176);
                        a174 = $tmp175;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp175));
                        panda$core$Panda$unref$panda$core$Object($tmp176);
                        bool $tmp181 = resolved144.value;
                        if (!$tmp181) goto $l182;
                        $tmp181 = a174->resolved.value;
                        $l182:;
                        panda$core$Bit $tmp183 = { $tmp181 };
                        resolved144 = $tmp183;
                        panda$core$MutableString$append$panda$core$String(name145, separator150);
                        panda$core$MutableString$append$panda$core$String(name145, ((org$pandalanguage$pandac$Symbol*) a174)->name);
                        {
                            $tmp184 = separator150;
                            $tmp185 = &$s186;
                            separator150 = $tmp185;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp185));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp184));
                        }
                    }
                    $tmp173 = -1;
                    goto $l171;
                    $l171:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a174));
                    a174 = NULL;
                    switch ($tmp173) {
                        case -1: goto $l187;
                    }
                    $l187:;
                }
                goto $l163;
                $l164:;
            }
            $tmp155 = -1;
            goto $l153;
            $l153:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$101$9156));
            Iter$101$9156 = NULL;
            switch ($tmp155) {
                case -1: goto $l188;
            }
            $l188:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp189, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name145, $tmp189);
        panda$collections$Array* $tmp193 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp193);
        $tmp192 = $tmp193;
        $tmp191 = $tmp192;
        subtypes190 = $tmp191;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp191));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
        panda$collections$Array$add$panda$collections$Array$T(subtypes190, ((panda$core$Object*) p_base));
        panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(subtypes190, ((panda$collections$CollectionView*) p_arguments));
        org$pandalanguage$pandac$Type* $tmp197 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp199 = panda$core$MutableString$finish$R$panda$core$String(name145);
        $tmp198 = $tmp199;
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp200, ((panda$core$Int64) { 11 }));
        panda$collections$ImmutableArray* $tmp202 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes190);
        $tmp201 = $tmp202;
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp197, $tmp198, $tmp200, ((org$pandalanguage$pandac$Symbol*) p_base)->position, ((panda$collections$ListView*) $tmp201), resolved144);
        $tmp196 = $tmp197;
        $tmp195 = $tmp196;
        $returnValue194 = $tmp195;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp195));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp196));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp201));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp198));
        $tmp143 = 0;
        goto $l141;
        $l203:;
        return $returnValue194;
    }
    $l141:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes190));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator150));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name145));
    name145 = NULL;
    separator150 = NULL;
    subtypes190 = NULL;
    switch ($tmp143) {
        case 0: goto $l203;
    }
    $l205:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type$Kind p_kind, panda$collections$ListView* p_parameterTypes, org$pandalanguage$pandac$Type* p_returnType) {
    panda$core$Bit resolved209;
    panda$core$MutableString* name210 = NULL;
    panda$core$MutableString* $tmp211;
    panda$core$MutableString* $tmp212;
    panda$collections$Array* subtypes215 = NULL;
    panda$collections$Array* $tmp216;
    panda$collections$Array* $tmp217;
    panda$core$String* separator219 = NULL;
    panda$core$String* $tmp220;
    panda$collections$Iterator* Iter$121$9225 = NULL;
    panda$collections$Iterator* $tmp226;
    panda$collections$Iterator* $tmp227;
    org$pandalanguage$pandac$Type* p243 = NULL;
    org$pandalanguage$pandac$Type* $tmp244;
    panda$core$Object* $tmp245;
    panda$core$String* $tmp253;
    panda$core$String* $tmp254;
    org$pandalanguage$pandac$Type$Kind $match$128_9258;
    org$pandalanguage$pandac$Type* $tmp270;
    panda$core$Char8 $tmp273;
    org$pandalanguage$pandac$Type* $returnValue274;
    org$pandalanguage$pandac$Type* $tmp275;
    org$pandalanguage$pandac$Type* $tmp276;
    panda$core$String* $tmp278;
    panda$collections$ImmutableArray* $tmp280;
    int $tmp208;
    {
        resolved209 = p_returnType->resolved;
        panda$core$MutableString* $tmp213 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init$panda$core$String($tmp213, &$s214);
        $tmp212 = $tmp213;
        $tmp211 = $tmp212;
        name210 = $tmp211;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp211));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp212));
        panda$collections$Array* $tmp218 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp218);
        $tmp217 = $tmp218;
        $tmp216 = $tmp217;
        subtypes215 = $tmp216;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp216));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp217));
        $tmp220 = &$s221;
        separator219 = $tmp220;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp220));
        {
            int $tmp224;
            {
                ITable* $tmp228 = ((panda$collections$Iterable*) p_parameterTypes)->$class->itable;
                while ($tmp228->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp228 = $tmp228->next;
                }
                $fn230 $tmp229 = $tmp228->methods[0];
                panda$collections$Iterator* $tmp231 = $tmp229(((panda$collections$Iterable*) p_parameterTypes));
                $tmp227 = $tmp231;
                $tmp226 = $tmp227;
                Iter$121$9225 = $tmp226;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp226));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp227));
                $l232:;
                ITable* $tmp235 = Iter$121$9225->$class->itable;
                while ($tmp235->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp235 = $tmp235->next;
                }
                $fn237 $tmp236 = $tmp235->methods[0];
                panda$core$Bit $tmp238 = $tmp236(Iter$121$9225);
                panda$core$Bit $tmp239 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp238);
                bool $tmp234 = $tmp239.value;
                if (!$tmp234) goto $l233;
                {
                    int $tmp242;
                    {
                        ITable* $tmp246 = Iter$121$9225->$class->itable;
                        while ($tmp246->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp246 = $tmp246->next;
                        }
                        $fn248 $tmp247 = $tmp246->methods[1];
                        panda$core$Object* $tmp249 = $tmp247(Iter$121$9225);
                        $tmp245 = $tmp249;
                        $tmp244 = ((org$pandalanguage$pandac$Type*) $tmp245);
                        p243 = $tmp244;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp244));
                        panda$core$Panda$unref$panda$core$Object($tmp245);
                        panda$collections$Array$add$panda$collections$Array$T(subtypes215, ((panda$core$Object*) p243));
                        bool $tmp250 = resolved209.value;
                        if (!$tmp250) goto $l251;
                        $tmp250 = p243->resolved.value;
                        $l251:;
                        panda$core$Bit $tmp252 = { $tmp250 };
                        resolved209 = $tmp252;
                        panda$core$MutableString$append$panda$core$String(name210, separator219);
                        panda$core$MutableString$append$panda$core$String(name210, ((org$pandalanguage$pandac$Symbol*) p243)->name);
                        {
                            $tmp253 = separator219;
                            $tmp254 = &$s255;
                            separator219 = $tmp254;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp254));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp253));
                        }
                    }
                    $tmp242 = -1;
                    goto $l240;
                    $l240:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p243));
                    p243 = NULL;
                    switch ($tmp242) {
                        case -1: goto $l256;
                    }
                    $l256:;
                }
                goto $l232;
                $l233:;
            }
            $tmp224 = -1;
            goto $l222;
            $l222:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$121$9225));
            Iter$121$9225 = NULL;
            switch ($tmp224) {
                case -1: goto $l257;
            }
            $l257:;
        }
        {
            $match$128_9258 = p_kind;
            panda$core$Bit $tmp259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9258.$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp259.value) {
            {
                panda$core$MutableString$append$panda$core$String(name210, &$s260);
            }
            }
            else {
            panda$core$Bit $tmp261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9258.$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp261.value) {
            {
                panda$core$MutableString$append$panda$core$String(name210, &$s262);
            }
            }
            else {
            panda$core$Bit $tmp263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9258.$rawValue, ((panda$core$Int64) { 16 }));
            if ($tmp263.value) {
            {
                panda$core$MutableString$append$panda$core$String(name210, &$s264);
            }
            }
            else {
            panda$core$Bit $tmp265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$128_9258.$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp265.value) {
            {
                panda$core$MutableString$append$panda$core$String(name210, &$s266);
            }
            }
            else {
            {
                if (((panda$core$Bit) { false }).value) goto $l267; else goto $l268;
                $l268:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s269, (panda$core$Int64) { 138 });
                abort();
                $l267:;
            }
            }
            }
            }
            }
        }
        panda$collections$Array$add$panda$collections$Array$T(subtypes215, ((panda$core$Object*) p_returnType));
        org$pandalanguage$pandac$Type* $tmp271 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp270 = $tmp271;
        panda$core$Bit $tmp272 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_returnType, $tmp270);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp270));
        if ($tmp272.value) {
        {
            panda$core$MutableString$append$panda$core$String(name210, ((org$pandalanguage$pandac$Symbol*) p_returnType)->name);
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp273, ((panda$core$UInt8) { 41 }));
        panda$core$MutableString$append$panda$core$Char8(name210, $tmp273);
        org$pandalanguage$pandac$Type* $tmp277 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp279 = panda$core$MutableString$finish$R$panda$core$String(name210);
        $tmp278 = $tmp279;
        panda$collections$ImmutableArray* $tmp281 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes215);
        $tmp280 = $tmp281;
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp277, $tmp278, p_kind, p_position, ((panda$collections$ListView*) $tmp280), resolved209);
        $tmp276 = $tmp277;
        $tmp275 = $tmp276;
        $returnValue274 = $tmp275;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp275));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp276));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp280));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp278));
        $tmp208 = 0;
        goto $l206;
        $l282:;
        return $returnValue274;
    }
    $l206:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator219));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes215));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name210));
    name210 = NULL;
    subtypes215 = NULL;
    separator219 = NULL;
    switch ($tmp208) {
        case 0: goto $l282;
    }
    $l284:;
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$Type$size$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$String* $tmp297;
    panda$core$String* $tmp298;
    panda$core$Int64 $returnValue303;
    panda$core$Bit $tmp287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp286 = $tmp287.value;
    if ($tmp286) goto $l288;
    panda$core$Bit $tmp289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 3 }));
    $tmp286 = $tmp289.value;
    $l288:;
    panda$core$Bit $tmp290 = { $tmp286 };
    bool $tmp285 = $tmp290.value;
    if ($tmp285) goto $l291;
    panda$core$Bit $tmp292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 10 }));
    $tmp285 = $tmp292.value;
    $l291:;
    panda$core$Bit $tmp293 = { $tmp285 };
    if ($tmp293.value) goto $l294; else goto $l295;
    $l295:;
    panda$core$String* $tmp300 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s299, ((panda$core$Object*) self));
    $tmp298 = $tmp300;
    panda$core$String* $tmp302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp298, &$s301);
    $tmp297 = $tmp302;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s296, (panda$core$Int64) { 149 }, $tmp297);
    abort();
    $l294:;
    $returnValue303 = self->position.line;
    return $returnValue303;
}
panda$core$Bit org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $returnValue305;
    panda$core$Bit $tmp306 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    $returnValue305 = $tmp306;
    return $returnValue305;
}
panda$core$Bit org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Type* p_other) {
    panda$core$Bit $returnValue308;
    panda$core$Bit $tmp309 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self->name, ((org$pandalanguage$pandac$Symbol*) p_other)->name);
    $returnValue308 = $tmp309;
    return $returnValue308;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue311;
    org$pandalanguage$pandac$Type* $tmp312;
    org$pandalanguage$pandac$Type* $tmp313;
    org$pandalanguage$pandac$Type$Kind $tmp316;
    org$pandalanguage$pandac$Position $tmp317;
    org$pandalanguage$pandac$Type* $tmp314 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp316, ((panda$core$Int64) { 4 }));
    org$pandalanguage$pandac$Position$init(&$tmp317);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp314, &$s315, $tmp316, $tmp317, ((panda$core$Bit) { true }));
    $tmp313 = $tmp314;
    $tmp312 = $tmp313;
    $returnValue311 = $tmp312;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp312));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp313));
    return $returnValue311;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue319;
    org$pandalanguage$pandac$Type* $tmp320;
    org$pandalanguage$pandac$Type* $tmp321;
    org$pandalanguage$pandac$Type$Kind $tmp324;
    org$pandalanguage$pandac$Position $tmp325;
    org$pandalanguage$pandac$Type* $tmp322 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp324, ((panda$core$Int64) { 13 }));
    org$pandalanguage$pandac$Position$init(&$tmp325);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp322, &$s323, $tmp324, $tmp325, ((panda$core$Bit) { true }));
    $tmp321 = $tmp322;
    $tmp320 = $tmp321;
    $returnValue319 = $tmp320;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp320));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp321));
    return $returnValue319;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue327;
    org$pandalanguage$pandac$Type* $tmp328;
    org$pandalanguage$pandac$Type* $tmp329;
    org$pandalanguage$pandac$Type$Kind $tmp332;
    org$pandalanguage$pandac$Position $tmp333;
    org$pandalanguage$pandac$Type* $tmp330 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp332, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp333);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp330, &$s331, $tmp332, $tmp333, ((panda$core$Bit) { true }));
    $tmp329 = $tmp330;
    $tmp328 = $tmp329;
    $returnValue327 = $tmp328;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp328));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp329));
    return $returnValue327;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type() {
    panda$collections$Array* subtypes338 = NULL;
    panda$collections$Array* $tmp339;
    panda$collections$Array* $tmp340;
    org$pandalanguage$pandac$Type* $tmp342;
    org$pandalanguage$pandac$Type* $returnValue344;
    org$pandalanguage$pandac$Type* $tmp345;
    org$pandalanguage$pandac$Type* $tmp346;
    org$pandalanguage$pandac$Type$Kind $tmp349;
    org$pandalanguage$pandac$Position $tmp350;
    int $tmp337;
    {
        panda$collections$Array* $tmp341 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp341);
        $tmp340 = $tmp341;
        $tmp339 = $tmp340;
        subtypes338 = $tmp339;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp339));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp340));
        org$pandalanguage$pandac$Type* $tmp343 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp342 = $tmp343;
        panda$collections$Array$add$panda$collections$Array$T(subtypes338, ((panda$core$Object*) $tmp342));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp342));
        org$pandalanguage$pandac$Type* $tmp347 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp349, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Position$init(&$tmp350);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp347, &$s348, $tmp349, $tmp350, ((panda$collections$ListView*) subtypes338), ((panda$core$Bit) { true }));
        $tmp346 = $tmp347;
        $tmp345 = $tmp346;
        $returnValue344 = $tmp345;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp345));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp346));
        $tmp337 = 0;
        goto $l335;
        $l351:;
        return $returnValue344;
    }
    $l335:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes338));
    subtypes338 = NULL;
    switch ($tmp337) {
        case 0: goto $l351;
    }
    $l353:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue354;
    org$pandalanguage$pandac$Type* $tmp355;
    org$pandalanguage$pandac$Type* $tmp356;
    org$pandalanguage$pandac$Type$Kind $tmp359;
    org$pandalanguage$pandac$Position $tmp360;
    org$pandalanguage$pandac$Type* $tmp357 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp359, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp360);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp357, &$s358, $tmp359, $tmp360, ((panda$core$Bit) { true }));
    $tmp356 = $tmp357;
    $tmp355 = $tmp356;
    $returnValue354 = $tmp355;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp355));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp356));
    return $returnValue354;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Immutable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue362;
    org$pandalanguage$pandac$Type* $tmp363;
    org$pandalanguage$pandac$Type* $tmp364;
    org$pandalanguage$pandac$Type$Kind $tmp367;
    org$pandalanguage$pandac$Position $tmp368;
    org$pandalanguage$pandac$Type* $tmp365 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp367, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp368);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp365, &$s366, $tmp367, $tmp368, ((panda$core$Bit) { true }));
    $tmp364 = $tmp365;
    $tmp363 = $tmp364;
    $returnValue362 = $tmp363;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp363));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp364));
    return $returnValue362;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue370;
    org$pandalanguage$pandac$Type* $tmp371;
    org$pandalanguage$pandac$Type* $tmp372;
    org$pandalanguage$pandac$Type$Kind $tmp375;
    org$pandalanguage$pandac$Position $tmp376;
    org$pandalanguage$pandac$Type* $tmp373 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp375, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp376);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp373, &$s374, $tmp375, $tmp376, ((panda$core$Bit) { true }));
    $tmp372 = $tmp373;
    $tmp371 = $tmp372;
    $returnValue370 = $tmp371;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp371));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp372));
    return $returnValue370;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue378;
    org$pandalanguage$pandac$Type* $tmp379;
    org$pandalanguage$pandac$Type* $tmp380;
    org$pandalanguage$pandac$Type$Kind $tmp383;
    org$pandalanguage$pandac$Position $tmp384;
    org$pandalanguage$pandac$Type* $tmp381 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp383, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp384);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp381, &$s382, $tmp383, $tmp384, ((panda$core$Bit) { true }));
    $tmp380 = $tmp381;
    $tmp379 = $tmp380;
    $returnValue378 = $tmp379;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp379));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp380));
    return $returnValue378;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RegularExpression$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue386;
    org$pandalanguage$pandac$Type* $tmp387;
    org$pandalanguage$pandac$Type* $tmp388;
    org$pandalanguage$pandac$Type$Kind $tmp391;
    org$pandalanguage$pandac$Position $tmp392;
    org$pandalanguage$pandac$Type* $tmp389 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp391, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp392);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp389, &$s390, $tmp391, $tmp392, ((panda$core$Bit) { true }));
    $tmp388 = $tmp389;
    $tmp387 = $tmp388;
    $returnValue386 = $tmp387;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp387));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp388));
    return $returnValue386;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue394;
    org$pandalanguage$pandac$Type* $tmp395;
    org$pandalanguage$pandac$Type* $tmp396;
    org$pandalanguage$pandac$Type$Kind $tmp399;
    org$pandalanguage$pandac$Type* $tmp397 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp399, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp397, &$s398, $tmp399, ((panda$core$Int64) { 8 }));
    $tmp396 = $tmp397;
    $tmp395 = $tmp396;
    $returnValue394 = $tmp395;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp395));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp396));
    return $returnValue394;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue401;
    org$pandalanguage$pandac$Type* $tmp402;
    org$pandalanguage$pandac$Type* $tmp403;
    org$pandalanguage$pandac$Type$Kind $tmp406;
    org$pandalanguage$pandac$Type* $tmp404 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp406, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp404, &$s405, $tmp406, ((panda$core$Int64) { 16 }));
    $tmp403 = $tmp404;
    $tmp402 = $tmp403;
    $returnValue401 = $tmp402;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp402));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp403));
    return $returnValue401;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue408;
    org$pandalanguage$pandac$Type* $tmp409;
    org$pandalanguage$pandac$Type* $tmp410;
    org$pandalanguage$pandac$Type$Kind $tmp413;
    org$pandalanguage$pandac$Type* $tmp411 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp413, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp411, &$s412, $tmp413, ((panda$core$Int64) { 32 }));
    $tmp410 = $tmp411;
    $tmp409 = $tmp410;
    $returnValue408 = $tmp409;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp409));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp410));
    return $returnValue408;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue415;
    org$pandalanguage$pandac$Type* $tmp416;
    org$pandalanguage$pandac$Type* $tmp417;
    org$pandalanguage$pandac$Type$Kind $tmp420;
    org$pandalanguage$pandac$Type* $tmp418 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp420, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp418, &$s419, $tmp420, ((panda$core$Int64) { 64 }));
    $tmp417 = $tmp418;
    $tmp416 = $tmp417;
    $returnValue415 = $tmp416;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp416));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
    return $returnValue415;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue422;
    org$pandalanguage$pandac$Type* $tmp423;
    org$pandalanguage$pandac$Type* $tmp424;
    org$pandalanguage$pandac$Type$Kind $tmp427;
    org$pandalanguage$pandac$Type* $tmp425 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp427, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp425, &$s426, $tmp427, ((panda$core$Int64) { 8 }));
    $tmp424 = $tmp425;
    $tmp423 = $tmp424;
    $returnValue422 = $tmp423;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp423));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp424));
    return $returnValue422;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue429;
    org$pandalanguage$pandac$Type* $tmp430;
    org$pandalanguage$pandac$Type* $tmp431;
    org$pandalanguage$pandac$Type$Kind $tmp434;
    org$pandalanguage$pandac$Type* $tmp432 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp434, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp432, &$s433, $tmp434, ((panda$core$Int64) { 16 }));
    $tmp431 = $tmp432;
    $tmp430 = $tmp431;
    $returnValue429 = $tmp430;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp430));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp431));
    return $returnValue429;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue436;
    org$pandalanguage$pandac$Type* $tmp437;
    org$pandalanguage$pandac$Type* $tmp438;
    org$pandalanguage$pandac$Type$Kind $tmp441;
    org$pandalanguage$pandac$Type* $tmp439 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp441, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp439, &$s440, $tmp441, ((panda$core$Int64) { 32 }));
    $tmp438 = $tmp439;
    $tmp437 = $tmp438;
    $returnValue436 = $tmp437;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp437));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp438));
    return $returnValue436;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue443;
    org$pandalanguage$pandac$Type* $tmp444;
    org$pandalanguage$pandac$Type* $tmp445;
    org$pandalanguage$pandac$Type$Kind $tmp448;
    org$pandalanguage$pandac$Type* $tmp446 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp448, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp446, &$s447, $tmp448, ((panda$core$Int64) { 64 }));
    $tmp445 = $tmp446;
    $tmp444 = $tmp445;
    $returnValue443 = $tmp444;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp444));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp445));
    return $returnValue443;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue450;
    org$pandalanguage$pandac$Type* $tmp451;
    org$pandalanguage$pandac$Type* $tmp452;
    org$pandalanguage$pandac$Type$Kind $tmp455;
    org$pandalanguage$pandac$Type* $tmp453 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp455, ((panda$core$Int64) { 10 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp453, &$s454, $tmp455, ((panda$core$Int64) { 32 }));
    $tmp452 = $tmp453;
    $tmp451 = $tmp452;
    $returnValue450 = $tmp451;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp451));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp452));
    return $returnValue450;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue457;
    org$pandalanguage$pandac$Type* $tmp458;
    org$pandalanguage$pandac$Type* $tmp459;
    org$pandalanguage$pandac$Type$Kind $tmp462;
    org$pandalanguage$pandac$Type* $tmp460 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp462, ((panda$core$Int64) { 10 }));
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$panda$core$Int64($tmp460, &$s461, $tmp462, ((panda$core$Int64) { 64 }));
    $tmp459 = $tmp460;
    $tmp458 = $tmp459;
    $returnValue457 = $tmp458;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp458));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp459));
    return $returnValue457;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue464;
    org$pandalanguage$pandac$Type* $tmp465;
    org$pandalanguage$pandac$Type* $tmp466;
    org$pandalanguage$pandac$Type$Kind $tmp469;
    org$pandalanguage$pandac$Position $tmp470;
    org$pandalanguage$pandac$Type* $tmp467 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp469, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp470);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp467, &$s468, $tmp469, $tmp470, ((panda$core$Bit) { true }));
    $tmp466 = $tmp467;
    $tmp465 = $tmp466;
    $returnValue464 = $tmp465;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp465));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp466));
    return $returnValue464;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue472;
    org$pandalanguage$pandac$Type* $tmp473;
    org$pandalanguage$pandac$Type* $tmp474;
    org$pandalanguage$pandac$Type$Kind $tmp477;
    org$pandalanguage$pandac$Position $tmp478;
    org$pandalanguage$pandac$Type* $tmp475 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp477, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp478);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp475, &$s476, $tmp477, $tmp478, ((panda$core$Bit) { true }));
    $tmp474 = $tmp475;
    $tmp473 = $tmp474;
    $returnValue472 = $tmp473;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp473));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp474));
    return $returnValue472;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue480;
    org$pandalanguage$pandac$Type* $tmp481;
    org$pandalanguage$pandac$Type* $tmp482;
    org$pandalanguage$pandac$Type$Kind $tmp485;
    org$pandalanguage$pandac$Position $tmp486;
    org$pandalanguage$pandac$Type* $tmp483 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp485, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp486);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp483, &$s484, $tmp485, $tmp486, ((panda$core$Bit) { true }));
    $tmp482 = $tmp483;
    $tmp481 = $tmp482;
    $returnValue480 = $tmp481;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp481));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp482));
    return $returnValue480;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue488;
    org$pandalanguage$pandac$Type* $tmp489;
    org$pandalanguage$pandac$Type* $tmp490;
    org$pandalanguage$pandac$Type$Kind $tmp493;
    org$pandalanguage$pandac$Position $tmp494;
    org$pandalanguage$pandac$Type* $tmp491 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp493, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp494);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp491, &$s492, $tmp493, $tmp494, ((panda$core$Bit) { true }));
    $tmp490 = $tmp491;
    $tmp489 = $tmp490;
    $returnValue488 = $tmp489;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp489));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp490));
    return $returnValue488;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue496;
    org$pandalanguage$pandac$Type* $tmp497;
    org$pandalanguage$pandac$Type* $tmp498;
    org$pandalanguage$pandac$Type$Kind $tmp501;
    org$pandalanguage$pandac$Position $tmp502;
    org$pandalanguage$pandac$Type* $tmp499 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp501, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp502);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp499, &$s500, $tmp501, $tmp502, ((panda$core$Bit) { true }));
    $tmp498 = $tmp499;
    $tmp497 = $tmp498;
    $returnValue496 = $tmp497;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp497));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp498));
    return $returnValue496;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue504;
    org$pandalanguage$pandac$Type* $tmp505;
    org$pandalanguage$pandac$Type* $tmp506;
    org$pandalanguage$pandac$Type$Kind $tmp509;
    org$pandalanguage$pandac$Position $tmp510;
    org$pandalanguage$pandac$Type* $tmp507 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp509, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp510);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp507, &$s508, $tmp509, $tmp510, ((panda$core$Bit) { true }));
    $tmp506 = $tmp507;
    $tmp505 = $tmp506;
    $returnValue504 = $tmp505;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp505));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp506));
    return $returnValue504;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue512;
    org$pandalanguage$pandac$Type* $tmp513;
    org$pandalanguage$pandac$Type* $tmp514;
    org$pandalanguage$pandac$Type$Kind $tmp517;
    org$pandalanguage$pandac$Position $tmp518;
    org$pandalanguage$pandac$Type* $tmp515 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp517, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp518);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp515, &$s516, $tmp517, $tmp518, ((panda$core$Bit) { true }));
    $tmp514 = $tmp515;
    $tmp513 = $tmp514;
    $returnValue512 = $tmp513;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp513));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp514));
    return $returnValue512;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue520;
    org$pandalanguage$pandac$Type* $tmp521;
    org$pandalanguage$pandac$Type* $tmp522;
    org$pandalanguage$pandac$Type$Kind $tmp525;
    org$pandalanguage$pandac$Position $tmp526;
    org$pandalanguage$pandac$Type* $tmp523 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp525, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp526);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp523, &$s524, $tmp525, $tmp526, ((panda$core$Bit) { true }));
    $tmp522 = $tmp523;
    $tmp521 = $tmp522;
    $returnValue520 = $tmp521;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp521));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp522));
    return $returnValue520;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue528;
    org$pandalanguage$pandac$Type* $tmp529;
    org$pandalanguage$pandac$Type* $tmp530;
    org$pandalanguage$pandac$Type$Kind $tmp533;
    org$pandalanguage$pandac$Position $tmp534;
    org$pandalanguage$pandac$Type* $tmp531 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp533, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp534);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp531, &$s532, $tmp533, $tmp534, ((panda$core$Bit) { true }));
    $tmp530 = $tmp531;
    $tmp529 = $tmp530;
    $returnValue528 = $tmp529;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp529));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp530));
    return $returnValue528;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue536;
    org$pandalanguage$pandac$Type* $tmp537;
    org$pandalanguage$pandac$Type* $tmp538;
    org$pandalanguage$pandac$Type$Kind $tmp541;
    org$pandalanguage$pandac$Position $tmp542;
    org$pandalanguage$pandac$Type* $tmp539 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp541, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp542);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp539, &$s540, $tmp541, $tmp542, ((panda$core$Bit) { true }));
    $tmp538 = $tmp539;
    $tmp537 = $tmp538;
    $returnValue536 = $tmp537;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp537));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp538));
    return $returnValue536;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue544;
    org$pandalanguage$pandac$Type* $tmp545;
    org$pandalanguage$pandac$Type* $tmp546;
    org$pandalanguage$pandac$Type$Kind $tmp549;
    org$pandalanguage$pandac$Position $tmp550;
    org$pandalanguage$pandac$Type* $tmp547 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp549, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp550);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp547, &$s548, $tmp549, $tmp550, ((panda$core$Bit) { true }));
    $tmp546 = $tmp547;
    $tmp545 = $tmp546;
    $returnValue544 = $tmp545;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp545));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp546));
    return $returnValue544;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue552;
    org$pandalanguage$pandac$Type* $tmp553;
    org$pandalanguage$pandac$Type* $tmp554;
    org$pandalanguage$pandac$Type$Kind $tmp557;
    org$pandalanguage$pandac$Position $tmp558;
    org$pandalanguage$pandac$Type* $tmp555 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp557, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp558);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp555, &$s556, $tmp557, $tmp558, ((panda$core$Bit) { true }));
    $tmp554 = $tmp555;
    $tmp553 = $tmp554;
    $returnValue552 = $tmp553;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp553));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp554));
    return $returnValue552;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue560;
    org$pandalanguage$pandac$Type* $tmp561;
    org$pandalanguage$pandac$Type* $tmp562;
    org$pandalanguage$pandac$Type$Kind $tmp565;
    org$pandalanguage$pandac$Position $tmp566;
    org$pandalanguage$pandac$Type* $tmp563 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp565, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp566);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp563, &$s564, $tmp565, $tmp566, ((panda$core$Bit) { true }));
    $tmp562 = $tmp563;
    $tmp561 = $tmp562;
    $returnValue560 = $tmp561;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp561));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp562));
    return $returnValue560;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue568;
    org$pandalanguage$pandac$Type* $tmp569;
    org$pandalanguage$pandac$Type* $tmp570;
    org$pandalanguage$pandac$Type$Kind $tmp573;
    org$pandalanguage$pandac$Position $tmp574;
    org$pandalanguage$pandac$Type* $tmp571 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp573, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp574);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp571, &$s572, $tmp573, $tmp574, ((panda$core$Bit) { true }));
    $tmp570 = $tmp571;
    $tmp569 = $tmp570;
    $returnValue568 = $tmp569;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp569));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp570));
    return $returnValue568;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue576;
    org$pandalanguage$pandac$Type* $tmp577;
    org$pandalanguage$pandac$Type* $tmp578;
    panda$core$String* $tmp580;
    panda$core$String* $tmp581;
    panda$core$Object* $tmp583;
    org$pandalanguage$pandac$Type$Kind $tmp588;
    org$pandalanguage$pandac$Position $tmp589;
    org$pandalanguage$pandac$Type* $tmp579 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$UInt64$wrapper* $tmp584;
    $tmp584 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
    $tmp584->value = p_value;
    $tmp583 = ((panda$core$Object*) $tmp584);
    panda$core$String* $tmp585 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s582, $tmp583);
    $tmp581 = $tmp585;
    panda$core$String* $tmp587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp581, &$s586);
    $tmp580 = $tmp587;
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp588, ((panda$core$Int64) { 5 }));
    org$pandalanguage$pandac$Position$init(&$tmp589);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp579, $tmp580, $tmp588, $tmp589, ((panda$core$Bit) { true }));
    $tmp578 = $tmp579;
    $tmp577 = $tmp578;
    $returnValue576 = $tmp577;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp577));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp578));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp580));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp581));
    panda$core$Panda$unref$panda$core$Object($tmp583);
    return $returnValue576;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(panda$core$UInt64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue591;
    org$pandalanguage$pandac$Type* $tmp592;
    org$pandalanguage$pandac$Type* $tmp593;
    panda$core$String* $tmp595;
    panda$core$String* $tmp596;
    panda$core$String* $tmp598;
    org$pandalanguage$pandac$Type$Kind $tmp603;
    org$pandalanguage$pandac$Position $tmp604;
    org$pandalanguage$pandac$Type* $tmp594 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp599 = panda$core$UInt64$convert$R$panda$core$String(p_value);
    $tmp598 = $tmp599;
    panda$core$String* $tmp600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s597, $tmp598);
    $tmp596 = $tmp600;
    panda$core$String* $tmp602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp596, &$s601);
    $tmp595 = $tmp602;
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp603, ((panda$core$Int64) { 5 }));
    org$pandalanguage$pandac$Position$init(&$tmp604);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp594, $tmp595, $tmp603, $tmp604, ((panda$core$Bit) { true }));
    $tmp593 = $tmp594;
    $tmp592 = $tmp593;
    $returnValue591 = $tmp592;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp592));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp593));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp595));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp596));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp598));
    return $returnValue591;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(panda$core$Real64 p_value) {
    org$pandalanguage$pandac$Type* $returnValue606;
    org$pandalanguage$pandac$Type* $tmp607;
    org$pandalanguage$pandac$Type* $tmp608;
    panda$core$String* $tmp610;
    panda$core$String* $tmp611;
    panda$core$String* $tmp613;
    org$pandalanguage$pandac$Type$Kind $tmp618;
    org$pandalanguage$pandac$Position $tmp619;
    org$pandalanguage$pandac$Type* $tmp609 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    panda$core$String* $tmp614 = panda$core$Real64$convert$R$panda$core$String(p_value);
    $tmp613 = $tmp614;
    panda$core$String* $tmp615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s612, $tmp613);
    $tmp611 = $tmp615;
    panda$core$String* $tmp617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp611, &$s616);
    $tmp610 = $tmp617;
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp618, ((panda$core$Int64) { 18 }));
    org$pandalanguage$pandac$Position$init(&$tmp619);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp609, $tmp610, $tmp618, $tmp619, ((panda$core$Bit) { true }));
    $tmp608 = $tmp609;
    $tmp607 = $tmp608;
    $returnValue606 = $tmp607;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp607));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp608));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp610));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp611));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp613));
    return $returnValue606;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue621;
    org$pandalanguage$pandac$Type* $tmp622;
    org$pandalanguage$pandac$Type* $tmp623;
    org$pandalanguage$pandac$Type$Kind $tmp626;
    org$pandalanguage$pandac$Position $tmp627;
    org$pandalanguage$pandac$Type* $tmp624 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp626, ((panda$core$Int64) { 8 }));
    org$pandalanguage$pandac$Position$init(&$tmp627);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp624, &$s625, $tmp626, $tmp627, ((panda$core$Bit) { true }));
    $tmp623 = $tmp624;
    $tmp622 = $tmp623;
    $returnValue621 = $tmp622;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp622));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp623));
    return $returnValue621;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue629;
    org$pandalanguage$pandac$Type* $tmp630;
    org$pandalanguage$pandac$Type* $tmp631;
    org$pandalanguage$pandac$Type$Kind $tmp634;
    org$pandalanguage$pandac$Position $tmp635;
    org$pandalanguage$pandac$Type* $tmp632 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp634, ((panda$core$Int64) { 9 }));
    org$pandalanguage$pandac$Position$init(&$tmp635);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp632, &$s633, $tmp634, $tmp635, ((panda$core$Bit) { true }));
    $tmp631 = $tmp632;
    $tmp630 = $tmp631;
    $returnValue629 = $tmp630;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp630));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp631));
    return $returnValue629;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue637;
    org$pandalanguage$pandac$Type* $tmp638;
    org$pandalanguage$pandac$Type* $tmp639;
    org$pandalanguage$pandac$Type$Kind $tmp642;
    org$pandalanguage$pandac$Position $tmp643;
    org$pandalanguage$pandac$Type* $tmp640 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp642, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp643);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp640, &$s641, $tmp642, $tmp643, ((panda$core$Bit) { true }));
    $tmp639 = $tmp640;
    $tmp638 = $tmp639;
    $returnValue637 = $tmp638;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp638));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp639));
    return $returnValue637;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue645;
    org$pandalanguage$pandac$Type* $tmp646;
    org$pandalanguage$pandac$Type* $tmp647;
    org$pandalanguage$pandac$Type$Kind $tmp650;
    org$pandalanguage$pandac$Position $tmp651;
    org$pandalanguage$pandac$Type* $tmp648 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp650, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp651);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp648, &$s649, $tmp650, $tmp651, ((panda$core$Bit) { true }));
    $tmp647 = $tmp648;
    $tmp646 = $tmp647;
    $returnValue645 = $tmp646;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp646));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp647));
    return $returnValue645;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue653;
    org$pandalanguage$pandac$Type* $tmp654;
    org$pandalanguage$pandac$Type* $tmp655;
    org$pandalanguage$pandac$Type$Kind $tmp658;
    org$pandalanguage$pandac$Position $tmp659;
    org$pandalanguage$pandac$Type* $tmp656 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp658, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp659);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp656, &$s657, $tmp658, $tmp659, ((panda$core$Bit) { true }));
    $tmp655 = $tmp656;
    $tmp654 = $tmp655;
    $returnValue653 = $tmp654;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp654));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp655));
    return $returnValue653;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Method$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue661;
    org$pandalanguage$pandac$Type* $tmp662;
    org$pandalanguage$pandac$Type* $tmp663;
    org$pandalanguage$pandac$Type$Kind $tmp666;
    org$pandalanguage$pandac$Position $tmp667;
    org$pandalanguage$pandac$Type* $tmp664 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp666, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp667);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp664, &$s665, $tmp666, $tmp667, ((panda$core$Bit) { true }));
    $tmp663 = $tmp664;
    $tmp662 = $tmp663;
    $returnValue661 = $tmp662;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp662));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp663));
    return $returnValue661;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$MutableMethod$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue669;
    org$pandalanguage$pandac$Type* $tmp670;
    org$pandalanguage$pandac$Type* $tmp671;
    org$pandalanguage$pandac$Type$Kind $tmp674;
    org$pandalanguage$pandac$Position $tmp675;
    org$pandalanguage$pandac$Type* $tmp672 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp674, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Position$init(&$tmp675);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp672, &$s673, $tmp674, $tmp675, ((panda$core$Bit) { true }));
    $tmp671 = $tmp672;
    $tmp670 = $tmp671;
    $returnValue669 = $tmp670;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp670));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp671));
    return $returnValue669;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$WeakOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children680 = NULL;
    panda$collections$Array* $tmp681;
    panda$collections$Array* $tmp682;
    org$pandalanguage$pandac$Type* $tmp684;
    org$pandalanguage$pandac$Type$Kind $tmp687;
    org$pandalanguage$pandac$Position $tmp688;
    org$pandalanguage$pandac$Type* $returnValue689;
    org$pandalanguage$pandac$Type* $tmp690;
    org$pandalanguage$pandac$Type* $tmp691;
    panda$core$String* $tmp693;
    panda$core$String* $tmp694;
    panda$core$String* $tmp695;
    panda$core$String* $tmp696;
    org$pandalanguage$pandac$Type$Kind $tmp704;
    int $tmp679;
    {
        panda$collections$Array* $tmp683 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp683);
        $tmp682 = $tmp683;
        $tmp681 = $tmp682;
        children680 = $tmp681;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp681));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp682));
        org$pandalanguage$pandac$Type* $tmp685 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp687, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp688);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp685, &$s686, $tmp687, $tmp688, ((panda$core$Bit) { true }));
        $tmp684 = $tmp685;
        panda$collections$Array$add$panda$collections$Array$T(children680, ((panda$core$Object*) $tmp684));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp684));
        panda$collections$Array$add$panda$collections$Array$T(children680, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp692 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp698 = panda$core$String$convert$R$panda$core$String(&$s697);
        $tmp696 = $tmp698;
        panda$core$String* $tmp700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp696, &$s699);
        $tmp695 = $tmp700;
        panda$core$String* $tmp701 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp695, ((panda$core$Object*) p_t));
        $tmp694 = $tmp701;
        panda$core$String* $tmp703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp694, &$s702);
        $tmp693 = $tmp703;
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp704, ((panda$core$Int64) { 11 }));
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp692, $tmp693, $tmp704, ((org$pandalanguage$pandac$Symbol*) p_t)->position, ((panda$collections$ListView*) children680), p_t->resolved);
        $tmp691 = $tmp692;
        $tmp690 = $tmp691;
        $returnValue689 = $tmp690;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp690));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp691));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp693));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp694));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp695));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp696));
        $tmp679 = 0;
        goto $l677;
        $l705:;
        return $returnValue689;
    }
    $l677:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children680));
    children680 = NULL;
    switch ($tmp679) {
        case 0: goto $l705;
    }
    $l707:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$pointerTo$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children711 = NULL;
    panda$collections$Array* $tmp712;
    panda$collections$Array* $tmp713;
    org$pandalanguage$pandac$Type* $returnValue715;
    org$pandalanguage$pandac$Type* $tmp716;
    org$pandalanguage$pandac$Type* $tmp717;
    org$pandalanguage$pandac$Type* $tmp718;
    org$pandalanguage$pandac$Type$Kind $tmp721;
    org$pandalanguage$pandac$Position $tmp722;
    int $tmp710;
    {
        panda$collections$Array* $tmp714 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp714);
        $tmp713 = $tmp714;
        $tmp712 = $tmp713;
        children711 = $tmp712;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp712));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp713));
        panda$collections$Array$add$panda$collections$Array$T(children711, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp719 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp721, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp722);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp719, &$s720, $tmp721, $tmp722, ((panda$core$Bit) { true }));
        $tmp718 = $tmp719;
        org$pandalanguage$pandac$Type* $tmp723 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp718, ((panda$collections$ListView*) children711));
        $tmp717 = $tmp723;
        $tmp716 = $tmp717;
        $returnValue715 = $tmp716;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp716));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp717));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp718));
        $tmp710 = 0;
        goto $l708;
        $l724:;
        return $returnValue715;
    }
    $l708:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children711));
    children711 = NULL;
    switch ($tmp710) {
        case 0: goto $l724;
    }
    $l726:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children730 = NULL;
    panda$collections$Array* $tmp731;
    panda$collections$Array* $tmp732;
    org$pandalanguage$pandac$Type* $returnValue734;
    org$pandalanguage$pandac$Type* $tmp735;
    org$pandalanguage$pandac$Type* $tmp736;
    org$pandalanguage$pandac$Type* $tmp737;
    org$pandalanguage$pandac$Type$Kind $tmp740;
    org$pandalanguage$pandac$Position $tmp741;
    int $tmp729;
    {
        panda$collections$Array* $tmp733 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp733);
        $tmp732 = $tmp733;
        $tmp731 = $tmp732;
        children730 = $tmp731;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp731));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp732));
        panda$collections$Array$add$panda$collections$Array$T(children730, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp738 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp740, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp741);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp738, &$s739, $tmp740, $tmp741, ((panda$core$Bit) { true }));
        $tmp737 = $tmp738;
        org$pandalanguage$pandac$Type* $tmp742 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp737, ((panda$collections$ListView*) children730));
        $tmp736 = $tmp742;
        $tmp735 = $tmp736;
        $returnValue734 = $tmp735;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp735));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp736));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp737));
        $tmp729 = 0;
        goto $l727;
        $l743:;
        return $returnValue734;
    }
    $l727:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children730));
    children730 = NULL;
    switch ($tmp729) {
        case 0: goto $l743;
    }
    $l745:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* p_t) {
    panda$collections$Array* children749 = NULL;
    panda$collections$Array* $tmp750;
    panda$collections$Array* $tmp751;
    org$pandalanguage$pandac$Type* $tmp753;
    org$pandalanguage$pandac$Type* $tmp756;
    org$pandalanguage$pandac$Type* $tmp758;
    org$pandalanguage$pandac$Type* $tmp761;
    org$pandalanguage$pandac$Type* $tmp763;
    org$pandalanguage$pandac$Type* $tmp766;
    org$pandalanguage$pandac$Type* $tmp768;
    org$pandalanguage$pandac$Type* $returnValue770;
    org$pandalanguage$pandac$Type* $tmp771;
    org$pandalanguage$pandac$Type* $tmp772;
    org$pandalanguage$pandac$Type* $tmp773;
    org$pandalanguage$pandac$Type$Kind $tmp776;
    org$pandalanguage$pandac$Position $tmp777;
    int $tmp748;
    {
        panda$collections$Array* $tmp752 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp752);
        $tmp751 = $tmp752;
        $tmp750 = $tmp751;
        children749 = $tmp750;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp750));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp751));
        panda$collections$Array$add$panda$collections$Array$T(children749, ((panda$core$Object*) p_t));
        org$pandalanguage$pandac$Type* $tmp754 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
        $tmp753 = $tmp754;
        panda$core$Bit $tmp755 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp753);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp753));
        if ($tmp755.value) {
        {
            org$pandalanguage$pandac$Type* $tmp757 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
            $tmp756 = $tmp757;
            panda$collections$Array$add$panda$collections$Array$T(children749, ((panda$core$Object*) $tmp756));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp756));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp759 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
        $tmp758 = $tmp759;
        panda$core$Bit $tmp760 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp758);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp758));
        if ($tmp760.value) {
        {
            org$pandalanguage$pandac$Type* $tmp762 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
            $tmp761 = $tmp762;
            panda$collections$Array$add$panda$collections$Array$T(children749, ((panda$core$Object*) $tmp761));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp761));
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp764 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
        $tmp763 = $tmp764;
        panda$core$Bit $tmp765 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp763);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp763));
        if ($tmp765.value) {
        {
            org$pandalanguage$pandac$Type* $tmp767 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
            $tmp766 = $tmp767;
            panda$collections$Array$add$panda$collections$Array$T(children749, ((panda$core$Object*) $tmp766));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp766));
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp769 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_t);
            $tmp768 = $tmp769;
            panda$collections$Array$add$panda$collections$Array$T(children749, ((panda$core$Object*) $tmp768));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp768));
        }
        }
        }
        }
        org$pandalanguage$pandac$Type* $tmp774 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp776, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Position$init(&$tmp777);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp774, &$s775, $tmp776, $tmp777, ((panda$core$Bit) { true }));
        $tmp773 = $tmp774;
        org$pandalanguage$pandac$Type* $tmp778 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp773, ((panda$collections$ListView*) children749));
        $tmp772 = $tmp778;
        $tmp771 = $tmp772;
        $returnValue770 = $tmp771;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp771));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp772));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp773));
        $tmp748 = 0;
        goto $l746;
        $l779:;
        return $returnValue770;
    }
    $l746:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children749));
    children749 = NULL;
    switch ($tmp748) {
        case 0: goto $l779;
    }
    $l781:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue782;
    org$pandalanguage$pandac$Type* $tmp783;
    org$pandalanguage$pandac$Type* $tmp784;
    org$pandalanguage$pandac$Type$Kind $tmp787;
    org$pandalanguage$pandac$Position $tmp788;
    org$pandalanguage$pandac$Type* $tmp785 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp787, ((panda$core$Int64) { 6 }));
    org$pandalanguage$pandac$Position$init(&$tmp788);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp785, &$s786, $tmp787, $tmp788, ((panda$core$Bit) { true }));
    $tmp784 = $tmp785;
    $tmp783 = $tmp784;
    $returnValue782 = $tmp783;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp783));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp784));
    return $returnValue782;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type() {
    org$pandalanguage$pandac$Type* $returnValue790;
    org$pandalanguage$pandac$Type* $tmp791;
    org$pandalanguage$pandac$Type* $tmp792;
    org$pandalanguage$pandac$Type$Kind $tmp795;
    org$pandalanguage$pandac$Position $tmp796;
    org$pandalanguage$pandac$Type* $tmp793 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
    org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp795, ((panda$core$Int64) { 6 }));
    org$pandalanguage$pandac$Position$init(&$tmp796);
    org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp793, &$s794, $tmp795, $tmp796, ((panda$core$Bit) { true }));
    $tmp792 = $tmp793;
    $tmp791 = $tmp792;
    $returnValue790 = $tmp791;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp791));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp792));
    return $returnValue790;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue798;
    panda$core$Bit $tmp804 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s803);
    bool $tmp802 = $tmp804.value;
    if ($tmp802) goto $l805;
    panda$core$Bit $tmp807 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s806);
    $tmp802 = $tmp807.value;
    $l805:;
    panda$core$Bit $tmp808 = { $tmp802 };
    bool $tmp801 = $tmp808.value;
    if ($tmp801) goto $l809;
    panda$core$Bit $tmp811 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s810);
    $tmp801 = $tmp811.value;
    $l809:;
    panda$core$Bit $tmp812 = { $tmp801 };
    bool $tmp800 = $tmp812.value;
    if ($tmp800) goto $l813;
    panda$core$Bit $tmp814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
    $tmp800 = $tmp814.value;
    $l813:;
    panda$core$Bit $tmp815 = { $tmp800 };
    bool $tmp799 = $tmp815.value;
    if ($tmp799) goto $l816;
    panda$core$Bit $tmp817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 18 }));
    $tmp799 = $tmp817.value;
    $l816:;
    panda$core$Bit $tmp818 = { $tmp799 };
    $returnValue798 = $tmp818;
    return $returnValue798;
}
panda$core$Bit org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue820;
    panda$core$Bit $tmp824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp823 = $tmp824.value;
    if ($tmp823) goto $l825;
    panda$core$Bit $tmp826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 3 }));
    $tmp823 = $tmp826.value;
    $l825:;
    panda$core$Bit $tmp827 = { $tmp823 };
    bool $tmp822 = $tmp827.value;
    if ($tmp822) goto $l828;
    panda$core$Bit $tmp829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 10 }));
    $tmp822 = $tmp829.value;
    $l828:;
    panda$core$Bit $tmp830 = { $tmp822 };
    bool $tmp821 = $tmp830.value;
    if ($tmp821) goto $l831;
    panda$core$Bit $tmp832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
    $tmp821 = $tmp832.value;
    $l831:;
    panda$core$Bit $tmp833 = { $tmp821 };
    $returnValue820 = $tmp833;
    return $returnValue820;
}
panda$core$Bit org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue835;
    panda$core$Bit $tmp837 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 18 }));
    bool $tmp836 = $tmp837.value;
    if ($tmp836) goto $l838;
    panda$core$Bit $tmp840 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s839);
    $tmp836 = $tmp840.value;
    $l838:;
    panda$core$Bit $tmp841 = { $tmp836 };
    $returnValue835 = $tmp841;
    return $returnValue835;
}
panda$core$Bit org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue843;
    panda$core$Bit $tmp845 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s844);
    $returnValue843 = $tmp845;
    return $returnValue843;
}
panda$core$Bit org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue847;
    panda$core$Bit $tmp849 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
    bool $tmp848 = $tmp849.value;
    if ($tmp848) goto $l850;
    panda$core$Bit $tmp851 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(self);
    $tmp848 = $tmp851.value;
    $l850:;
    panda$core$Bit $tmp852 = { $tmp848 };
    $returnValue847 = $tmp852;
    return $returnValue847;
}
panda$core$Bit org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$456_9854;
    panda$core$Bit $returnValue884;
    {
        $match$456_9854 = self->typeKind;
        panda$core$Bit $tmp862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9854.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp861 = $tmp862.value;
        if ($tmp861) goto $l863;
        panda$core$Bit $tmp864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9854.$rawValue, ((panda$core$Int64) { 1 }));
        $tmp861 = $tmp864.value;
        $l863:;
        panda$core$Bit $tmp865 = { $tmp861 };
        bool $tmp860 = $tmp865.value;
        if ($tmp860) goto $l866;
        panda$core$Bit $tmp867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9854.$rawValue, ((panda$core$Int64) { 11 }));
        $tmp860 = $tmp867.value;
        $l866:;
        panda$core$Bit $tmp868 = { $tmp860 };
        bool $tmp859 = $tmp868.value;
        if ($tmp859) goto $l869;
        panda$core$Bit $tmp870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9854.$rawValue, ((panda$core$Int64) { 12 }));
        $tmp859 = $tmp870.value;
        $l869:;
        panda$core$Bit $tmp871 = { $tmp859 };
        bool $tmp858 = $tmp871.value;
        if ($tmp858) goto $l872;
        panda$core$Bit $tmp873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9854.$rawValue, ((panda$core$Int64) { 15 }));
        $tmp858 = $tmp873.value;
        $l872:;
        panda$core$Bit $tmp874 = { $tmp858 };
        bool $tmp857 = $tmp874.value;
        if ($tmp857) goto $l875;
        panda$core$Bit $tmp876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9854.$rawValue, ((panda$core$Int64) { 14 }));
        $tmp857 = $tmp876.value;
        $l875:;
        panda$core$Bit $tmp877 = { $tmp857 };
        bool $tmp856 = $tmp877.value;
        if ($tmp856) goto $l878;
        panda$core$Bit $tmp879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9854.$rawValue, ((panda$core$Int64) { 17 }));
        $tmp856 = $tmp879.value;
        $l878:;
        panda$core$Bit $tmp880 = { $tmp856 };
        bool $tmp855 = $tmp880.value;
        if ($tmp855) goto $l881;
        panda$core$Bit $tmp882 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_9854.$rawValue, ((panda$core$Int64) { 16 }));
        $tmp855 = $tmp882.value;
        $l881:;
        panda$core$Bit $tmp883 = { $tmp855 };
        if ($tmp883.value) {
        {
            $returnValue884 = ((panda$core$Bit) { true });
            return $returnValue884;
        }
        }
        else {
        {
            $returnValue884 = ((panda$core$Bit) { false });
            return $returnValue884;
        }
        }
    }
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type$Kind $match$466_9887;
    panda$core$Bit $returnValue901;
    {
        $match$466_9887 = self->typeKind;
        panda$core$Bit $tmp891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_9887.$rawValue, ((panda$core$Int64) { 15 }));
        bool $tmp890 = $tmp891.value;
        if ($tmp890) goto $l892;
        panda$core$Bit $tmp893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_9887.$rawValue, ((panda$core$Int64) { 14 }));
        $tmp890 = $tmp893.value;
        $l892:;
        panda$core$Bit $tmp894 = { $tmp890 };
        bool $tmp889 = $tmp894.value;
        if ($tmp889) goto $l895;
        panda$core$Bit $tmp896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_9887.$rawValue, ((panda$core$Int64) { 17 }));
        $tmp889 = $tmp896.value;
        $l895:;
        panda$core$Bit $tmp897 = { $tmp889 };
        bool $tmp888 = $tmp897.value;
        if ($tmp888) goto $l898;
        panda$core$Bit $tmp899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466_9887.$rawValue, ((panda$core$Int64) { 16 }));
        $tmp888 = $tmp899.value;
        $l898:;
        panda$core$Bit $tmp900 = { $tmp888 };
        if ($tmp900.value) {
        {
            $returnValue901 = ((panda$core$Bit) { true });
            return $returnValue901;
        }
        }
        else {
        {
            $returnValue901 = ((panda$core$Bit) { false });
            return $returnValue901;
        }
        }
    }
    abort();
}
panda$core$Bit org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue904;
    panda$core$Bit $tmp906 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(self->name, &$s905);
    $returnValue904 = $tmp906;
    return $returnValue904;
}
panda$core$Bit org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue909;
    panda$core$Object* $tmp910;
    panda$core$Object* $tmp917;
    panda$core$Bit $tmp908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp908.value) {
    {
        panda$core$Object* $tmp911 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        $tmp910 = $tmp911;
        panda$core$Bit $tmp912 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp910));
        $returnValue909 = $tmp912;
        panda$core$Panda$unref$panda$core$Object($tmp910);
        return $returnValue909;
    }
    }
    panda$core$Bit $tmp915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 11 }));
    bool $tmp914 = $tmp915.value;
    if (!$tmp914) goto $l916;
    panda$core$Object* $tmp918 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp917 = $tmp918;
    panda$core$Bit $tmp920 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp917))->name, &$s919);
    $tmp914 = $tmp920.value;
    panda$core$Panda$unref$panda$core$Object($tmp917);
    $l916:;
    panda$core$Bit $tmp921 = { $tmp914 };
    $returnValue909 = $tmp921;
    return $returnValue909;
}
panda$core$Bit org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(org$pandalanguage$pandac$Type* self) {
    panda$core$Bit $returnValue924;
    panda$core$Object* $tmp925;
    panda$core$Object* $tmp932;
    panda$core$Bit $tmp923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp923.value) {
    {
        panda$core$Object* $tmp926 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
        $tmp925 = $tmp926;
        panda$core$Bit $tmp927 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp925));
        $returnValue924 = $tmp927;
        panda$core$Panda$unref$panda$core$Object($tmp925);
        return $returnValue924;
    }
    }
    panda$core$Bit $tmp930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 11 }));
    bool $tmp929 = $tmp930.value;
    if (!$tmp929) goto $l931;
    panda$core$Object* $tmp933 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp932 = $tmp933;
    panda$core$Bit $tmp935 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp932))->name, &$s934);
    $tmp929 = $tmp935.value;
    panda$core$Panda$unref$panda$core$Object($tmp932);
    $l931:;
    panda$core$Bit $tmp936 = { $tmp929 };
    $returnValue924 = $tmp936;
    return $returnValue924;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type* $returnValue942;
    org$pandalanguage$pandac$Type* $tmp943;
    panda$collections$Array* subtypes946 = NULL;
    panda$collections$Array* $tmp947;
    panda$collections$Array* $tmp948;
    org$pandalanguage$pandac$Type* $tmp950;
    org$pandalanguage$pandac$Type* $tmp951;
    panda$core$String* $tmp953;
    panda$core$String* $tmp954;
    org$pandalanguage$pandac$Type$Kind $tmp958;
    org$pandalanguage$pandac$Position $tmp959;
    int $tmp940;
    {
        panda$core$Bit $tmp941 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp941.value) {
        {
            $tmp943 = self;
            $returnValue942 = $tmp943;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp943));
            $tmp940 = 0;
            goto $l938;
            $l944:;
            return $returnValue942;
        }
        }
        panda$collections$Array* $tmp949 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp949);
        $tmp948 = $tmp949;
        $tmp947 = $tmp948;
        subtypes946 = $tmp947;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp947));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp948));
        panda$collections$Array$add$panda$collections$Array$T(subtypes946, ((panda$core$Object*) self));
        org$pandalanguage$pandac$Type* $tmp952 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
        panda$core$String* $tmp955 = panda$core$String$convert$R$panda$core$String(self->name);
        $tmp954 = $tmp955;
        panda$core$String* $tmp957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp954, &$s956);
        $tmp953 = $tmp957;
        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp958, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Position$init(&$tmp959);
        org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp952, $tmp953, $tmp958, $tmp959, ((panda$collections$ListView*) subtypes946), ((panda$core$Bit) { true }));
        $tmp951 = $tmp952;
        $tmp950 = $tmp951;
        $returnValue942 = $tmp950;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp950));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp951));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp953));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp954));
        $tmp940 = 1;
        goto $l938;
        $l960:;
        return $returnValue942;
    }
    $l938:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes946));
    subtypes946 = NULL;
    switch ($tmp940) {
        case 1: goto $l960;
        case 0: goto $l944;
    }
    $l962:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type* $returnValue964;
    org$pandalanguage$pandac$Type* $tmp965;
    org$pandalanguage$pandac$Type* $tmp967;
    panda$core$Object* $tmp968;
    panda$core$Bit $tmp963 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp963.value) {
    {
        $tmp965 = self;
        $returnValue964 = $tmp965;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp965));
        return $returnValue964;
    }
    }
    panda$core$Object* $tmp969 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
    $tmp968 = $tmp969;
    $tmp967 = ((org$pandalanguage$pandac$Type*) $tmp968);
    $returnValue964 = $tmp967;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp967));
    panda$core$Panda$unref$panda$core$Object($tmp968);
    return $returnValue964;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self) {
    org$pandalanguage$pandac$Type* $returnValue988;
    org$pandalanguage$pandac$Type* $tmp989;
    panda$core$Object* $tmp990;
    panda$core$Bit $tmp974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 14 }));
    bool $tmp973 = $tmp974.value;
    if ($tmp973) goto $l975;
    panda$core$Bit $tmp976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 15 }));
    $tmp973 = $tmp976.value;
    $l975:;
    panda$core$Bit $tmp977 = { $tmp973 };
    bool $tmp972 = $tmp977.value;
    if ($tmp972) goto $l978;
    panda$core$Bit $tmp979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 16 }));
    $tmp972 = $tmp979.value;
    $l978:;
    panda$core$Bit $tmp980 = { $tmp972 };
    bool $tmp971 = $tmp980.value;
    if ($tmp971) goto $l981;
    panda$core$Bit $tmp982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 17 }));
    $tmp971 = $tmp982.value;
    $l981:;
    panda$core$Bit $tmp983 = { $tmp971 };
    if ($tmp983.value) goto $l984; else goto $l985;
    $l985:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s986, (panda$core$Int64) { 510 }, &$s987);
    abort();
    $l984:;
    panda$core$Int64 $tmp991 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
    panda$core$Int64 $tmp992 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp991, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp993 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp992);
    $tmp990 = $tmp993;
    $tmp989 = ((org$pandalanguage$pandac$Type*) $tmp990);
    $returnValue988 = $tmp989;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp989));
    panda$core$Panda$unref$panda$core$Object($tmp990);
    return $returnValue988;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$Type* p_other) {
    org$pandalanguage$pandac$Type* $returnValue999;
    org$pandalanguage$pandac$Type* $tmp1000;
    org$pandalanguage$pandac$Type* $tmp1003;
    org$pandalanguage$pandac$Type* $tmp1007;
    org$pandalanguage$pandac$Type* $tmp1010;
    org$pandalanguage$pandac$Type* $tmp1011;
    org$pandalanguage$pandac$Type* $tmp1015;
    org$pandalanguage$pandac$Type* $tmp1019;
    org$pandalanguage$pandac$Type* $tmp1022;
    org$pandalanguage$pandac$Type* $tmp1023;
    org$pandalanguage$pandac$Type* $tmp1032;
    org$pandalanguage$pandac$Type* $tmp1040;
    org$pandalanguage$pandac$Type* $tmp1049;
    org$pandalanguage$pandac$Type* $tmp1055;
    org$pandalanguage$pandac$Type* $tmp1056;
    org$pandalanguage$pandac$Type* $tmp1060;
    org$pandalanguage$pandac$Type* $tmp1061;
    org$pandalanguage$pandac$Type* $tmp1071;
    org$pandalanguage$pandac$Type* $tmp1077;
    org$pandalanguage$pandac$Type* $tmp1078;
    org$pandalanguage$pandac$Type* $tmp1082;
    org$pandalanguage$pandac$Type* $tmp1083;
    org$pandalanguage$pandac$Type* $tmp1088;
    org$pandalanguage$pandac$Type* $tmp1089;
    org$pandalanguage$pandac$Type* $tmp1090;
    panda$core$Object* $tmp1091;
    org$pandalanguage$pandac$Type* $tmp1098;
    org$pandalanguage$pandac$Type* $tmp1099;
    org$pandalanguage$pandac$Type* $tmp1100;
    panda$core$Object* $tmp1101;
    org$pandalanguage$pandac$Type* t11107 = NULL;
    org$pandalanguage$pandac$Type* $tmp1108;
    org$pandalanguage$pandac$Type* $tmp1109;
    org$pandalanguage$pandac$Type* t21111 = NULL;
    org$pandalanguage$pandac$Type* $tmp1112;
    org$pandalanguage$pandac$Type* $tmp1113;
    panda$collections$Set* ancestors1123 = NULL;
    panda$collections$Set* $tmp1124;
    panda$collections$Set* $tmp1125;
    org$pandalanguage$pandac$Type* t1127 = NULL;
    org$pandalanguage$pandac$Type* $tmp1128;
    org$pandalanguage$pandac$ClassDecl* cl1129 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1130;
    org$pandalanguage$pandac$ClassDecl* $tmp1131;
    org$pandalanguage$pandac$Type* $tmp1136;
    org$pandalanguage$pandac$Type* $tmp1137;
    org$pandalanguage$pandac$Type* $tmp1138;
    org$pandalanguage$pandac$ClassDecl* $tmp1140;
    org$pandalanguage$pandac$ClassDecl* $tmp1141;
    org$pandalanguage$pandac$ClassDecl* $tmp1142;
    org$pandalanguage$pandac$ClassDecl* $tmp1144;
    org$pandalanguage$pandac$ClassDecl* $tmp1145;
    org$pandalanguage$pandac$Type* $tmp1146;
    org$pandalanguage$pandac$Type* $tmp1147;
    org$pandalanguage$pandac$ClassDecl* $tmp1148;
    org$pandalanguage$pandac$ClassDecl* $tmp1149;
    org$pandalanguage$pandac$ClassDecl* $tmp1150;
    org$pandalanguage$pandac$Type* $tmp1156;
    org$pandalanguage$pandac$Type* $tmp1160;
    org$pandalanguage$pandac$Type* $tmp1161;
    org$pandalanguage$pandac$Type* $tmp1162;
    org$pandalanguage$pandac$ClassDecl* $tmp1164;
    org$pandalanguage$pandac$ClassDecl* $tmp1165;
    org$pandalanguage$pandac$ClassDecl* $tmp1166;
    org$pandalanguage$pandac$ClassDecl* $tmp1168;
    org$pandalanguage$pandac$ClassDecl* $tmp1169;
    org$pandalanguage$pandac$Type* $tmp1171;
    org$pandalanguage$pandac$Type* $tmp1172;
    int $tmp997;
    {
        panda$core$Bit $tmp998 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_other);
        if ($tmp998.value) {
        {
            $tmp1000 = self;
            $returnValue999 = $tmp1000;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1000));
            $tmp997 = 0;
            goto $l995;
            $l1001:;
            return $returnValue999;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1004 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp1003 = $tmp1004;
        panda$core$Bit $tmp1005 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp1003);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1003));
        if ($tmp1005.value) {
        {
            panda$core$Bit $tmp1006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp1006.value) {
            {
                $tmp1007 = p_other;
                $returnValue999 = $tmp1007;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1007));
                $tmp997 = 1;
                goto $l995;
                $l1008:;
                return $returnValue999;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1012 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(p_other);
            $tmp1011 = $tmp1012;
            $tmp1010 = $tmp1011;
            $returnValue999 = $tmp1010;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1010));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1011));
            $tmp997 = 2;
            goto $l995;
            $l1013:;
            return $returnValue999;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1016 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        $tmp1015 = $tmp1016;
        panda$core$Bit $tmp1017 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_other, $tmp1015);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1015));
        if ($tmp1017.value) {
        {
            panda$core$Bit $tmp1018 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp1018.value) {
            {
                $tmp1019 = self;
                $returnValue999 = $tmp1019;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1019));
                $tmp997 = 3;
                goto $l995;
                $l1020:;
                return $returnValue999;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1024 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type(self);
            $tmp1023 = $tmp1024;
            $tmp1022 = $tmp1023;
            $returnValue999 = $tmp1022;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1022));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1023));
            $tmp997 = 4;
            goto $l995;
            $l1025:;
            return $returnValue999;
        }
        }
        panda$core$Bit $tmp1028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
        bool $tmp1027 = $tmp1028.value;
        if (!$tmp1027) goto $l1029;
        panda$core$Bit $tmp1030 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
        $tmp1027 = $tmp1030.value;
        $l1029:;
        panda$core$Bit $tmp1031 = { $tmp1027 };
        if ($tmp1031.value) {
        {
            $tmp1032 = p_other;
            $returnValue999 = $tmp1032;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1032));
            $tmp997 = 5;
            goto $l995;
            $l1033:;
            return $returnValue999;
        }
        }
        panda$core$Bit $tmp1036 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
        bool $tmp1035 = $tmp1036.value;
        if (!$tmp1035) goto $l1037;
        panda$core$Bit $tmp1038 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
        $tmp1035 = $tmp1038.value;
        $l1037:;
        panda$core$Bit $tmp1039 = { $tmp1035 };
        if ($tmp1039.value) {
        {
            $tmp1040 = self;
            $returnValue999 = $tmp1040;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1040));
            $tmp997 = 6;
            goto $l995;
            $l1041:;
            return $returnValue999;
        }
        }
        panda$core$Bit $tmp1043 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(self);
        if ($tmp1043.value) {
        {
            panda$core$Bit $tmp1045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
            bool $tmp1044 = $tmp1045.value;
            if ($tmp1044) goto $l1046;
            panda$core$Bit $tmp1047 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 18 }));
            $tmp1044 = $tmp1047.value;
            $l1046:;
            panda$core$Bit $tmp1048 = { $tmp1044 };
            if ($tmp1048.value) {
            {
                $tmp1049 = self;
                $returnValue999 = $tmp1049;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1049));
                $tmp997 = 7;
                goto $l995;
                $l1050:;
                return $returnValue999;
            }
            }
            panda$core$Bit $tmp1052 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_other);
            if ($tmp1052.value) {
            {
                panda$core$Bit $tmp1054 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_other)->name, &$s1053);
                if ($tmp1054.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1057 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp1056 = $tmp1057;
                    $tmp1055 = $tmp1056;
                    $returnValue999 = $tmp1055;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1055));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1056));
                    $tmp997 = 8;
                    goto $l995;
                    $l1058:;
                    return $returnValue999;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1062 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp1061 = $tmp1062;
                $tmp1060 = $tmp1061;
                $returnValue999 = $tmp1060;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1060));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1061));
                $tmp997 = 9;
                goto $l995;
                $l1063:;
                return $returnValue999;
            }
            }
        }
        }
        panda$core$Bit $tmp1065 = org$pandalanguage$pandac$Type$isReal$R$panda$core$Bit(p_other);
        if ($tmp1065.value) {
        {
            panda$core$Bit $tmp1067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 5 }));
            bool $tmp1066 = $tmp1067.value;
            if ($tmp1066) goto $l1068;
            panda$core$Bit $tmp1069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 18 }));
            $tmp1066 = $tmp1069.value;
            $l1068:;
            panda$core$Bit $tmp1070 = { $tmp1066 };
            if ($tmp1070.value) {
            {
                $tmp1071 = p_other;
                $returnValue999 = $tmp1071;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1071));
                $tmp997 = 10;
                goto $l995;
                $l1072:;
                return $returnValue999;
            }
            }
            panda$core$Bit $tmp1074 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(self);
            if ($tmp1074.value) {
            {
                panda$core$Bit $tmp1076 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(self->name, &$s1075);
                if ($tmp1076.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1079 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
                    $tmp1078 = $tmp1079;
                    $tmp1077 = $tmp1078;
                    $returnValue999 = $tmp1077;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1077));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1078));
                    $tmp997 = 11;
                    goto $l995;
                    $l1080:;
                    return $returnValue999;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1084 = org$pandalanguage$pandac$Type$Real32$R$org$pandalanguage$pandac$Type();
                $tmp1083 = $tmp1084;
                $tmp1082 = $tmp1083;
                $returnValue999 = $tmp1082;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1082));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1083));
                $tmp997 = 12;
                goto $l995;
                $l1085:;
                return $returnValue999;
            }
            }
        }
        }
        panda$core$Bit $tmp1087 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1087.value) {
        {
            panda$core$Object* $tmp1092 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            $tmp1091 = $tmp1092;
            org$pandalanguage$pandac$Type* $tmp1093 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1091), p_compiler, p_other);
            $tmp1090 = $tmp1093;
            org$pandalanguage$pandac$Type* $tmp1094 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1090);
            $tmp1089 = $tmp1094;
            $tmp1088 = $tmp1089;
            $returnValue999 = $tmp1088;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1088));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1089));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1090));
            panda$core$Panda$unref$panda$core$Object($tmp1091);
            $tmp997 = 13;
            goto $l995;
            $l1095:;
            return $returnValue999;
        }
        }
        panda$core$Bit $tmp1097 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->typeKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1097.value) {
        {
            panda$core$Object* $tmp1102 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_other->subtypes, ((panda$core$Int64) { 0 }));
            $tmp1101 = $tmp1102;
            org$pandalanguage$pandac$Type* $tmp1103 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_compiler, ((org$pandalanguage$pandac$Type*) $tmp1101));
            $tmp1100 = $tmp1103;
            org$pandalanguage$pandac$Type* $tmp1104 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1100);
            $tmp1099 = $tmp1104;
            $tmp1098 = $tmp1099;
            $returnValue999 = $tmp1098;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1098));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1099));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1100));
            panda$core$Panda$unref$panda$core$Object($tmp1101);
            $tmp997 = 14;
            goto $l995;
            $l1105:;
            return $returnValue999;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1110 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, self);
        $tmp1109 = $tmp1110;
        $tmp1108 = $tmp1109;
        t11107 = $tmp1108;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1108));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1109));
        org$pandalanguage$pandac$Type* $tmp1114 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, p_other);
        $tmp1113 = $tmp1114;
        $tmp1112 = $tmp1113;
        t21111 = $tmp1112;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1112));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1113));
        panda$core$Bit $tmp1116 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t11107);
        bool $tmp1115 = $tmp1116.value;
        if (!$tmp1115) goto $l1117;
        panda$core$Bit $tmp1118 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(t21111);
        $tmp1115 = $tmp1118.value;
        $l1117:;
        panda$core$Bit $tmp1119 = { $tmp1115 };
        if ($tmp1119.value) {
        {
            int $tmp1122;
            {
                panda$collections$Set* $tmp1126 = (panda$collections$Set*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Set$class);
                panda$collections$Set$init($tmp1126);
                $tmp1125 = $tmp1126;
                $tmp1124 = $tmp1125;
                ancestors1123 = $tmp1124;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1124));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1125));
                $tmp1128 = self;
                t1127 = $tmp1128;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1128));
                org$pandalanguage$pandac$ClassDecl* $tmp1132 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t11107);
                $tmp1131 = $tmp1132;
                $tmp1130 = $tmp1131;
                cl1129 = $tmp1130;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1130));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1131));
                $l1133:;
                bool $tmp1135 = ((panda$core$Bit) { cl1129 != NULL }).value;
                if (!$tmp1135) goto $l1134;
                {
                    panda$collections$Set$add$panda$collections$Set$T(ancestors1123, ((panda$collections$Key*) t1127));
                    if (((panda$core$Bit) { cl1129->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp1136 = t1127;
                            org$pandalanguage$pandac$Type* $tmp1139 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t1127, cl1129->rawSuper);
                            $tmp1138 = $tmp1139;
                            $tmp1137 = $tmp1138;
                            t1127 = $tmp1137;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1137));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1138));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1136));
                        }
                        {
                            $tmp1140 = cl1129;
                            org$pandalanguage$pandac$ClassDecl* $tmp1143 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1127);
                            $tmp1142 = $tmp1143;
                            $tmp1141 = $tmp1142;
                            cl1129 = $tmp1141;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1141));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1142));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1140));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1144 = cl1129;
                            $tmp1145 = NULL;
                            cl1129 = $tmp1145;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1145));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1144));
                        }
                    }
                    }
                }
                goto $l1133;
                $l1134:;
                {
                    $tmp1146 = t1127;
                    $tmp1147 = p_other;
                    t1127 = $tmp1147;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1147));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1146));
                }
                {
                    $tmp1148 = cl1129;
                    org$pandalanguage$pandac$ClassDecl* $tmp1151 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t21111);
                    $tmp1150 = $tmp1151;
                    $tmp1149 = $tmp1150;
                    cl1129 = $tmp1149;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1149));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1150));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1148));
                }
                $l1152:;
                bool $tmp1154 = ((panda$core$Bit) { cl1129 != NULL }).value;
                if (!$tmp1154) goto $l1153;
                {
                    panda$core$Bit $tmp1155 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(ancestors1123, ((panda$collections$Key*) t1127));
                    if ($tmp1155.value) {
                    {
                        $tmp1156 = t1127;
                        $returnValue999 = $tmp1156;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1156));
                        $tmp1122 = 0;
                        goto $l1120;
                        $l1157:;
                        $tmp997 = 15;
                        goto $l995;
                        $l1158:;
                        return $returnValue999;
                    }
                    }
                    if (((panda$core$Bit) { cl1129->rawSuper != NULL }).value) {
                    {
                        {
                            $tmp1160 = t1127;
                            org$pandalanguage$pandac$Type* $tmp1163 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(p_compiler, t1127, cl1129->rawSuper);
                            $tmp1162 = $tmp1163;
                            $tmp1161 = $tmp1162;
                            t1127 = $tmp1161;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1161));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1162));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1160));
                        }
                        {
                            $tmp1164 = cl1129;
                            org$pandalanguage$pandac$ClassDecl* $tmp1167 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(p_compiler, t1127);
                            $tmp1166 = $tmp1167;
                            $tmp1165 = $tmp1166;
                            cl1129 = $tmp1165;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1165));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1166));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1164));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1168 = cl1129;
                            $tmp1169 = NULL;
                            cl1129 = $tmp1169;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1169));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1168));
                        }
                    }
                    }
                }
                goto $l1152;
                $l1153:;
            }
            $tmp1122 = -1;
            goto $l1120;
            $l1120:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1129));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1127));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestors1123));
            ancestors1123 = NULL;
            t1127 = NULL;
            cl1129 = NULL;
            switch ($tmp1122) {
                case 0: goto $l1157;
                case -1: goto $l1170;
            }
            $l1170:;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1173 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        $tmp1172 = $tmp1173;
        $tmp1171 = $tmp1172;
        $returnValue999 = $tmp1171;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1171));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1172));
        $tmp997 = 16;
        goto $l995;
        $l1174:;
        return $returnValue999;
    }
    $l995:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t21111));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t11107));
    t11107 = NULL;
    t21111 = NULL;
    switch ($tmp997) {
        case 1: goto $l1008;
        case 4: goto $l1025;
        case 8: goto $l1058;
        case 12: goto $l1085;
        case 11: goto $l1080;
        case 2: goto $l1013;
        case 5: goto $l1033;
        case 6: goto $l1041;
        case 10: goto $l1072;
        case 16: goto $l1174;
        case 15: goto $l1158;
        case 14: goto $l1105;
        case 7: goto $l1050;
        case 3: goto $l1020;
        case 13: goto $l1095;
        case 0: goto $l1001;
        case 9: goto $l1063;
    }
    $l1176:;
    abort();
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* self, panda$collections$HashMap* p_types) {
    org$pandalanguage$pandac$Type* $returnValue1179;
    org$pandalanguage$pandac$Type* $tmp1180;
    org$pandalanguage$pandac$Type$Kind $match$603_91182;
    org$pandalanguage$pandac$Type* found1187 = NULL;
    org$pandalanguage$pandac$Type* $tmp1188;
    panda$core$Object* $tmp1189;
    org$pandalanguage$pandac$Type* $tmp1191;
    org$pandalanguage$pandac$Type* $tmp1194;
    org$pandalanguage$pandac$Type* base1202 = NULL;
    org$pandalanguage$pandac$Type* $tmp1203;
    org$pandalanguage$pandac$Type* $tmp1204;
    panda$core$Object* $tmp1205;
    panda$collections$Array* remappedArgs1208 = NULL;
    panda$collections$Array* $tmp1209;
    panda$collections$Array* $tmp1210;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1212;
    org$pandalanguage$pandac$Type* $tmp1227;
    panda$core$Object* $tmp1228;
    org$pandalanguage$pandac$Type* $tmp1237;
    org$pandalanguage$pandac$Type* $tmp1238;
    org$pandalanguage$pandac$Type* $tmp1244;
    org$pandalanguage$pandac$Type* $tmp1245;
    org$pandalanguage$pandac$Type* $tmp1246;
    panda$core$Object* $tmp1247;
    panda$collections$Array* remapped1268 = NULL;
    panda$collections$Array* $tmp1269;
    panda$collections$Array* $tmp1270;
    panda$core$MutableString* name1272 = NULL;
    panda$core$MutableString* $tmp1273;
    panda$core$MutableString* $tmp1274;
    panda$core$String* separator1277 = NULL;
    panda$core$String* $tmp1278;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1285;
    org$pandalanguage$pandac$Type* child1304 = NULL;
    org$pandalanguage$pandac$Type* $tmp1305;
    org$pandalanguage$pandac$Type* $tmp1306;
    panda$core$Object* $tmp1307;
    panda$core$String* $tmp1310;
    panda$core$String* $tmp1311;
    org$pandalanguage$pandac$Type$Kind $match$631_171320;
    panda$core$Object* $tmp1329;
    org$pandalanguage$pandac$Type* $tmp1333;
    org$pandalanguage$pandac$Type* child1339 = NULL;
    org$pandalanguage$pandac$Type* $tmp1340;
    org$pandalanguage$pandac$Type* $tmp1341;
    panda$core$Object* $tmp1342;
    org$pandalanguage$pandac$Type* $tmp1348;
    panda$core$Char8 $tmp1350;
    org$pandalanguage$pandac$Type* $tmp1351;
    org$pandalanguage$pandac$Type* $tmp1352;
    panda$core$String* $tmp1354;
    org$pandalanguage$pandac$Type* $tmp1359;
    panda$core$Int64 $tmp1177 = panda$collections$HashMap$get_count$R$panda$core$Int64(p_types);
    panda$core$Bit $tmp1178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1177, ((panda$core$Int64) { 0 }));
    if ($tmp1178.value) {
    {
        $tmp1180 = self;
        $returnValue1179 = $tmp1180;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1180));
        return $returnValue1179;
    }
    }
    {
        $match$603_91182 = self->typeKind;
        panda$core$Bit $tmp1183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91182.$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1183.value) {
        {
            int $tmp1186;
            {
                panda$core$Object* $tmp1190 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p_types, ((panda$collections$Key*) self->name));
                $tmp1189 = $tmp1190;
                $tmp1188 = ((org$pandalanguage$pandac$Type*) $tmp1189);
                found1187 = $tmp1188;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1188));
                panda$core$Panda$unref$panda$core$Object($tmp1189);
                if (((panda$core$Bit) { found1187 != NULL }).value) {
                {
                    $tmp1191 = found1187;
                    $returnValue1179 = $tmp1191;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1191));
                    $tmp1186 = 0;
                    goto $l1184;
                    $l1192:;
                    return $returnValue1179;
                }
                }
                $tmp1194 = self;
                $returnValue1179 = $tmp1194;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1194));
                $tmp1186 = 1;
                goto $l1184;
                $l1195:;
                return $returnValue1179;
            }
            $l1184:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) found1187));
            found1187 = NULL;
            switch ($tmp1186) {
                case 1: goto $l1195;
                case 0: goto $l1192;
            }
            $l1197:;
        }
        }
        else {
        panda$core$Bit $tmp1198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91182.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1198.value) {
        {
            int $tmp1201;
            {
                panda$core$Object* $tmp1206 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
                $tmp1205 = $tmp1206;
                org$pandalanguage$pandac$Type* $tmp1207 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1205), p_types);
                $tmp1204 = $tmp1207;
                $tmp1203 = $tmp1204;
                base1202 = $tmp1203;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1203));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1204));
                panda$core$Panda$unref$panda$core$Object($tmp1205);
                panda$collections$Array* $tmp1211 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1211);
                $tmp1210 = $tmp1211;
                $tmp1209 = $tmp1210;
                remappedArgs1208 = $tmp1209;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1209));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1210));
                panda$core$Int64 $tmp1213 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1212, ((panda$core$Int64) { 1 }), $tmp1213, ((panda$core$Bit) { false }));
                int64_t $tmp1215 = $tmp1212.min.value;
                panda$core$Int64 i1214 = { $tmp1215 };
                int64_t $tmp1217 = $tmp1212.max.value;
                bool $tmp1218 = $tmp1212.inclusive.value;
                if ($tmp1218) goto $l1225; else goto $l1226;
                $l1225:;
                if ($tmp1215 <= $tmp1217) goto $l1219; else goto $l1221;
                $l1226:;
                if ($tmp1215 < $tmp1217) goto $l1219; else goto $l1221;
                $l1219:;
                {
                    panda$core$Object* $tmp1229 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1214);
                    $tmp1228 = $tmp1229;
                    org$pandalanguage$pandac$Type* $tmp1230 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1228), p_types);
                    $tmp1227 = $tmp1230;
                    panda$collections$Array$add$panda$collections$Array$T(remappedArgs1208, ((panda$core$Object*) $tmp1227));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1227));
                    panda$core$Panda$unref$panda$core$Object($tmp1228);
                }
                $l1222:;
                int64_t $tmp1232 = $tmp1217 - i1214.value;
                if ($tmp1218) goto $l1233; else goto $l1234;
                $l1233:;
                if ((uint64_t) $tmp1232 >= 1) goto $l1231; else goto $l1221;
                $l1234:;
                if ((uint64_t) $tmp1232 > 1) goto $l1231; else goto $l1221;
                $l1231:;
                i1214.value += 1;
                goto $l1219;
                $l1221:;
                org$pandalanguage$pandac$Type* $tmp1239 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(base1202, ((panda$collections$ListView*) remappedArgs1208));
                $tmp1238 = $tmp1239;
                $tmp1237 = $tmp1238;
                $returnValue1179 = $tmp1237;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1237));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1238));
                $tmp1201 = 0;
                goto $l1199;
                $l1240:;
                return $returnValue1179;
            }
            $l1199:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remappedArgs1208));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1202));
            base1202 = NULL;
            remappedArgs1208 = NULL;
            switch ($tmp1201) {
                case 0: goto $l1240;
            }
            $l1242:;
        }
        }
        else {
        panda$core$Bit $tmp1243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91182.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1243.value) {
        {
            panda$core$Object* $tmp1248 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, ((panda$core$Int64) { 0 }));
            $tmp1247 = $tmp1248;
            org$pandalanguage$pandac$Type* $tmp1249 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1247), p_types);
            $tmp1246 = $tmp1249;
            org$pandalanguage$pandac$Type* $tmp1250 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1246);
            $tmp1245 = $tmp1250;
            $tmp1244 = $tmp1245;
            $returnValue1179 = $tmp1244;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1244));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1245));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1246));
            panda$core$Panda$unref$panda$core$Object($tmp1247);
            return $returnValue1179;
        }
        }
        else {
        panda$core$Bit $tmp1255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91182.$rawValue, ((panda$core$Int64) { 15 }));
        bool $tmp1254 = $tmp1255.value;
        if ($tmp1254) goto $l1256;
        panda$core$Bit $tmp1257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91182.$rawValue, ((panda$core$Int64) { 14 }));
        $tmp1254 = $tmp1257.value;
        $l1256:;
        panda$core$Bit $tmp1258 = { $tmp1254 };
        bool $tmp1253 = $tmp1258.value;
        if ($tmp1253) goto $l1259;
        panda$core$Bit $tmp1260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91182.$rawValue, ((panda$core$Int64) { 17 }));
        $tmp1253 = $tmp1260.value;
        $l1259:;
        panda$core$Bit $tmp1261 = { $tmp1253 };
        bool $tmp1252 = $tmp1261.value;
        if ($tmp1252) goto $l1262;
        panda$core$Bit $tmp1263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$603_91182.$rawValue, ((panda$core$Int64) { 16 }));
        $tmp1252 = $tmp1263.value;
        $l1262:;
        panda$core$Bit $tmp1264 = { $tmp1252 };
        if ($tmp1264.value) {
        {
            int $tmp1267;
            {
                panda$collections$Array* $tmp1271 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1271);
                $tmp1270 = $tmp1271;
                $tmp1269 = $tmp1270;
                remapped1268 = $tmp1269;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1269));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1270));
                panda$core$MutableString* $tmp1275 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1275, &$s1276);
                $tmp1274 = $tmp1275;
                $tmp1273 = $tmp1274;
                name1272 = $tmp1273;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1273));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1274));
                $tmp1278 = &$s1279;
                separator1277 = $tmp1278;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1278));
                panda$core$Int64 $tmp1280 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Bit $tmp1281 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1280, ((panda$core$Int64) { 1 }));
                if ($tmp1281.value) goto $l1282; else goto $l1283;
                $l1283:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1284, (panda$core$Int64) { 623 });
                abort();
                $l1282:;
                panda$core$Int64 $tmp1286 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp1287 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1286, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1285, ((panda$core$Int64) { 0 }), $tmp1287, ((panda$core$Bit) { false }));
                int64_t $tmp1289 = $tmp1285.min.value;
                panda$core$Int64 i1288 = { $tmp1289 };
                int64_t $tmp1291 = $tmp1285.max.value;
                bool $tmp1292 = $tmp1285.inclusive.value;
                if ($tmp1292) goto $l1299; else goto $l1300;
                $l1299:;
                if ($tmp1289 <= $tmp1291) goto $l1293; else goto $l1295;
                $l1300:;
                if ($tmp1289 < $tmp1291) goto $l1293; else goto $l1295;
                $l1293:;
                {
                    int $tmp1303;
                    {
                        panda$core$Object* $tmp1308 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, i1288);
                        $tmp1307 = $tmp1308;
                        org$pandalanguage$pandac$Type* $tmp1309 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1307), p_types);
                        $tmp1306 = $tmp1309;
                        $tmp1305 = $tmp1306;
                        child1304 = $tmp1305;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1305));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1306));
                        panda$core$Panda$unref$panda$core$Object($tmp1307);
                        panda$core$MutableString$append$panda$core$String(name1272, separator1277);
                        panda$core$MutableString$append$panda$core$String(name1272, ((org$pandalanguage$pandac$Symbol*) child1304)->name);
                        panda$collections$Array$add$panda$collections$Array$T(remapped1268, ((panda$core$Object*) child1304));
                        {
                            $tmp1310 = separator1277;
                            $tmp1311 = &$s1312;
                            separator1277 = $tmp1311;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1311));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1310));
                        }
                    }
                    $tmp1303 = -1;
                    goto $l1301;
                    $l1301:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child1304));
                    child1304 = NULL;
                    switch ($tmp1303) {
                        case -1: goto $l1313;
                    }
                    $l1313:;
                }
                $l1296:;
                int64_t $tmp1315 = $tmp1291 - i1288.value;
                if ($tmp1292) goto $l1316; else goto $l1317;
                $l1316:;
                if ((uint64_t) $tmp1315 >= 1) goto $l1314; else goto $l1295;
                $l1317:;
                if ((uint64_t) $tmp1315 > 1) goto $l1314; else goto $l1295;
                $l1314:;
                i1288.value += 1;
                goto $l1293;
                $l1295:;
                {
                    $match$631_171320 = self->typeKind;
                    panda$core$Bit $tmp1321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$631_171320.$rawValue, ((panda$core$Int64) { 14 }));
                    if ($tmp1321.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(name1272, &$s1322);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$631_171320.$rawValue, ((panda$core$Int64) { 15 }));
                    if ($tmp1323.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(name1272, &$s1324);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$631_171320.$rawValue, ((panda$core$Int64) { 16 }));
                    if ($tmp1325.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(name1272, &$s1326);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$631_171320.$rawValue, ((panda$core$Int64) { 17 }));
                    if ($tmp1327.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(name1272, &$s1328);
                    }
                    }
                    }
                    }
                    }
                }
                panda$core$Int64 $tmp1330 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                panda$core$Int64 $tmp1331 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1330, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1332 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1331);
                $tmp1329 = $tmp1332;
                org$pandalanguage$pandac$Type* $tmp1334 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1333 = $tmp1334;
                panda$core$Bit $tmp1335 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1329), $tmp1333);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1333));
                panda$core$Panda$unref$panda$core$Object($tmp1329);
                if ($tmp1335.value) {
                {
                    int $tmp1338;
                    {
                        panda$core$Int64 $tmp1343 = panda$collections$Array$get_count$R$panda$core$Int64(self->subtypes);
                        panda$core$Int64 $tmp1344 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1343, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1345 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->subtypes, $tmp1344);
                        $tmp1342 = $tmp1345;
                        org$pandalanguage$pandac$Type* $tmp1346 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1342), p_types);
                        $tmp1341 = $tmp1346;
                        $tmp1340 = $tmp1341;
                        child1339 = $tmp1340;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1340));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1341));
                        panda$core$Panda$unref$panda$core$Object($tmp1342);
                        panda$core$MutableString$append$panda$core$String(name1272, ((org$pandalanguage$pandac$Symbol*) child1339)->name);
                        panda$collections$Array$add$panda$collections$Array$T(remapped1268, ((panda$core$Object*) child1339));
                    }
                    $tmp1338 = -1;
                    goto $l1336;
                    $l1336:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) child1339));
                    child1339 = NULL;
                    switch ($tmp1338) {
                        case -1: goto $l1347;
                    }
                    $l1347:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1349 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                    $tmp1348 = $tmp1349;
                    panda$collections$Array$add$panda$collections$Array$T(remapped1268, ((panda$core$Object*) $tmp1348));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1348));
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1350, ((panda$core$UInt8) { 41 }));
                panda$core$MutableString$append$panda$core$Char8(name1272, $tmp1350);
                org$pandalanguage$pandac$Type* $tmp1353 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$String* $tmp1355 = panda$core$MutableString$finish$R$panda$core$String(name1272);
                $tmp1354 = $tmp1355;
                org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp1353, $tmp1354, self->typeKind, self->position, ((panda$collections$ListView*) remapped1268), self->resolved);
                $tmp1352 = $tmp1353;
                $tmp1351 = $tmp1352;
                $returnValue1179 = $tmp1351;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1351));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1352));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1354));
                $tmp1267 = 0;
                goto $l1265;
                $l1356:;
                return $returnValue1179;
            }
            $l1265:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1277));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1272));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) remapped1268));
            remapped1268 = NULL;
            name1272 = NULL;
            separator1277 = NULL;
            switch ($tmp1267) {
                case 0: goto $l1356;
            }
            $l1358:;
        }
        }
        else {
        {
            $tmp1359 = self;
            $returnValue1179 = $tmp1359;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1359));
            return $returnValue1179;
        }
        }
        }
        }
        }
    }
    abort();
}
panda$core$Int64 org$pandalanguage$pandac$Type$hash$R$panda$core$Int64(org$pandalanguage$pandac$Type* self) {
    panda$core$Int64 $returnValue1361;
    panda$core$Int64 $tmp1362 = panda$core$String$hash$R$panda$core$Int64(self->name);
    $returnValue1361 = $tmp1362;
    return $returnValue1361;
}
panda$core$String* org$pandalanguage$pandac$Type$convert$R$panda$core$String(org$pandalanguage$pandac$Type* self) {
    panda$core$String* $returnValue1364;
    panda$core$String* $tmp1365;
    $tmp1365 = self->name;
    $returnValue1364 = $tmp1365;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1365));
    return $returnValue1364;
}
void org$pandalanguage$pandac$Type$cleanup(org$pandalanguage$pandac$Type* self) {
    int $tmp1369;
    {
    }
    $tmp1369 = -1;
    goto $l1367;
    $l1367:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp1369) {
        case -1: goto $l1370;
    }
    $l1370:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->subtypes));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->parameter));
}

