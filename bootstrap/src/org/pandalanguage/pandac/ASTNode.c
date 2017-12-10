#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/Array.h"
#include "panda/collections/ListView.h"
#include "panda/core/UInt64.h"
#include "panda/core/Bit.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/MutableString.h"
#include "panda/core/SimpleRange.LTpanda/core/Int64.GT.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/SimpleRange.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/String/Index.h"
#include "panda/core/SimpleRange.LTpanda/core/Int64.Q.GT.h"


org$pandalanguage$pandac$ASTNode$class_type org$pandalanguage$pandac$ASTNode$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String, panda$core$Object$cleanup} };

typedef panda$core$String* (*$fn59)(panda$core$Object*);
typedef panda$core$String* (*$fn61)(panda$core$Object*);
typedef panda$core$String* (*$fn64)(panda$core$Object*);
typedef panda$core$String* (*$fn160)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn266)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn272)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn278)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn298)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn316)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn322)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn328)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn341)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn347)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn353)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn357)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn365)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn371)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn377)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn403)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn409)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn415)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn428)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn434)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn440)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn453)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn459)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn465)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn478)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn484)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn490)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn528)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn534)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn540)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn639)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn645)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn651)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn702)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn708)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn714)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 1 };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 1 };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6F\x70\x65\x72\x61\x74\x6F\x72\x3A", 10, 1 };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x63\x6B\x61\x67\x65\x20", 8, 1 };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x73\x65\x73\x20", 5, 1 };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E\x2E", 3, 1 };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 1 };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E", 2, 1 };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 1 };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20", 3, 1 };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x6C\x73\x65\x20", 6, 1 };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x72\x20", 4, 1 };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20", 4, 1 };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20", 6, 1 };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x6F\x20", 3, 1 };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x68\x69\x6C\x65\x20", 7, 1 };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x6F\x6F\x70\x20", 5, 1 };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6B\x20", 6, 1 };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6B", 5, 1 };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 9, 1 };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x74\x69\x6E\x75\x65", 8, 1 };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 1 };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E", 6, 1 };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x0A", 2, 1 };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x3D\x20", 4, 1 };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 1 };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 1 };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x72\x6F\x70\x65\x72\x74\x79\x20", 9, 1 };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 1 };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x65\x74\x68\x6F\x64\x20", 7, 1 };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6E\x63\x74\x69\x6F\x6E\x20", 9, 1 };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x0A", 2, 1 };
static panda$core$String $s653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20", 6, 1 };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20", 3, 1 };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, 1 };
static panda$core$String $s676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20", 6, 1 };
static panda$core$String $s689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4, 1 };
static panda$core$String $s719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 1 };
static panda$core$String $s720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x41\x53\x54\x4E\x6F\x64\x65\x3A", 9, 1 };
static panda$core$String $s723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };

panda$core$String* org$pandalanguage$pandac$ASTNode$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s1;
        }
        break;
        case 66:
        {
            return &$s2;
        }
        break;
        case 54:
        {
            return &$s3;
        }
        break;
        case 55:
        {
            return &$s4;
        }
        break;
        case 53:
        {
            return &$s5;
        }
        break;
        case 52:
        {
            return &$s6;
        }
        break;
        case 68:
        {
            return &$s7;
        }
        break;
        case 73:
        {
            return &$s8;
        }
        break;
        default:
        {
            panda$core$String* $tmp10 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s9, ((panda$core$Object*) wrap_panda$core$Int64(p_op)));
            panda$core$String* $tmp12 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp10, &$s11);
            return $tmp12;
        }
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position) {
    panda$collections$Array* $tmp13 = (panda$collections$Array*) malloc(40);
    $tmp13->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp13->refCount.value = 1;
    panda$collections$Array$init($tmp13);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(self, p_kind, p_position, NULL, ((panda$collections$ListView*) $tmp13));
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$UInt64 p_payload) {
    panda$collections$Array* $tmp15 = (panda$collections$Array*) malloc(40);
    $tmp15->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp15->refCount.value = 1;
    panda$collections$Array$init($tmp15);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(self, p_kind, p_position, ((panda$core$Object*) wrap_panda$core$UInt64(p_payload)), ((panda$collections$ListView*) $tmp15));
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$String* p_payload) {
    panda$collections$Array* $tmp17 = (panda$collections$Array*) malloc(40);
    $tmp17->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp17->refCount.value = 1;
    panda$collections$Array$init($tmp17);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(self, p_kind, p_position, ((panda$core$Object*) p_payload), ((panda$collections$ListView*) $tmp17));
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_payload) {
    panda$collections$Array* $tmp19 = (panda$collections$Array*) malloc(40);
    $tmp19->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp19->refCount.value = 1;
    panda$collections$Array$init($tmp19);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(self, p_kind, p_position, ((panda$core$Object*) wrap_panda$core$Bit(p_payload)), ((panda$collections$ListView*) $tmp19));
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_children) {
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(self, p_kind, p_position, NULL, p_children);
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$Object* p_payload, panda$collections$ListView* p_children) {
    self->kind = p_kind;
    self->position = p_position;
    self->payload = p_payload;
    panda$collections$ImmutableArray* $tmp21 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp21->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp21->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp21, p_children);
    self->children = $tmp21;
}
panda$core$String* org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(org$pandalanguage$pandac$ASTNode* self) {
    panda$core$MutableString* result79;
    panda$core$MutableString* result93;
    panda$core$MutableString* result110;
    panda$core$String* separator116;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp118;
    panda$core$String* result179;
    panda$core$MutableString* result259;
    panda$collections$Iterator* child$Iter263;
    org$pandalanguage$pandac$ASTNode* child275;
    panda$core$String* c280;
    panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT $tmp289;
    panda$core$MutableString* result303;
    panda$core$String* separator309;
    panda$collections$Iterator* c$Iter311;
    panda$core$SimpleRange$LTpanda$core$Int64$Q$GT $tmp312;
    org$pandalanguage$pandac$ASTNode* c325;
    panda$core$MutableString* result333;
    panda$core$String* separator336;
    panda$collections$Iterator* c$Iter338;
    org$pandalanguage$pandac$ASTNode* c350;
    panda$core$MutableString* result359;
    panda$collections$Iterator* c$Iter362;
    org$pandalanguage$pandac$ASTNode* c374;
    panda$core$MutableString* result394;
    panda$core$String* separator398;
    panda$collections$Iterator* c$Iter400;
    org$pandalanguage$pandac$ASTNode* c412;
    panda$core$MutableString* result419;
    panda$core$String* separator423;
    panda$collections$Iterator* c$Iter425;
    org$pandalanguage$pandac$ASTNode* c437;
    panda$core$MutableString* result444;
    panda$core$String* separator448;
    panda$collections$Iterator* c$Iter450;
    org$pandalanguage$pandac$ASTNode* c462;
    panda$core$MutableString* result469;
    panda$core$String* separator473;
    panda$collections$Iterator* c$Iter475;
    org$pandalanguage$pandac$ASTNode* c487;
    panda$core$MutableString* result519;
    panda$core$String* separator523;
    panda$collections$Iterator* c$Iter525;
    org$pandalanguage$pandac$ASTNode* c537;
    panda$core$MutableString* result632;
    panda$collections$Iterator* c$Iter636;
    org$pandalanguage$pandac$ASTNode* c648;
    panda$core$MutableString* result658;
    panda$core$MutableString* result682;
    panda$core$MutableString* result696;
    panda$collections$Iterator* c$Iter699;
    org$pandalanguage$pandac$ASTNode* c711;
    switch (self->kind.value) {
        case 112:
        {
            panda$core$Int64 $tmp23 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp24 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp23, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp24.value);
            panda$core$String* $tmp26 = org$pandalanguage$pandac$ASTNode$operatorName$panda$core$Int64$R$panda$core$String(((panda$core$Int64$wrapper*) self->payload)->value);
            panda$core$String* $tmp27 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s25, $tmp26);
            panda$core$String* $tmp29 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp27, &$s28);
            panda$core$Object* $tmp30 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp31 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp29, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp30)));
            panda$core$String* $tmp33 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp31, &$s32);
            return $tmp33;
        }
        break;
        case 103:
        {
            panda$core$Int64 $tmp34 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp35 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp34, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp35.value);
            panda$core$Bit $tmp36 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64$wrapper*) self->payload)->value, ((panda$core$Int64) { 101 }));
            if ($tmp36.value) {
            {
                panda$core$Object* $tmp38 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp39 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s37, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp38)));
                panda$core$String* $tmp41 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp39, &$s40);
                panda$core$Object* $tmp42 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp43 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp41, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp42)));
                panda$core$String* $tmp45 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp43, &$s44);
                return $tmp45;
            }
            }
            panda$core$Object* $tmp47 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp48 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s46, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp47)));
            panda$core$String* $tmp50 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp48, &$s49);
            panda$core$String* $tmp51 = org$pandalanguage$pandac$ASTNode$operatorName$panda$core$Int64$R$panda$core$String(((panda$core$Int64$wrapper*) self->payload)->value);
            panda$core$String* $tmp52 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp50, $tmp51);
            panda$core$String* $tmp54 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp52, &$s53);
            panda$core$Object* $tmp55 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp56 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp54, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp55)));
            panda$core$String* $tmp58 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp56, &$s57);
            return $tmp58;
        }
        break;
        case 102:
        {
            panda$core$String* $tmp60 = (($fn59) self->payload->$class->vtable[0])(self->payload);
            return $tmp60;
        }
        break;
        case 116:
        {
            panda$core$String* $tmp62 = (($fn61) self->payload->$class->vtable[0])(self->payload);
            return $tmp62;
        }
        break;
        case 113:
        {
            panda$core$String* $tmp65 = (($fn64) self->payload->$class->vtable[0])(self->payload);
            panda$core$String* $tmp66 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s63, $tmp65);
            panda$core$String* $tmp68 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp66, &$s67);
            return $tmp68;
        }
        break;
        case 100:
        {
            panda$core$String* $tmp70 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s69, self->payload);
            panda$core$String* $tmp72 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp70, &$s71);
            return $tmp72;
        }
        break;
        case 101:
        {
            panda$core$String* $tmp74 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s73, self->payload);
            panda$core$String* $tmp76 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp74, &$s75);
            return $tmp76;
        }
        break;
        case 104:
        {
            panda$core$Int64 $tmp77 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp78 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp77, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp78.value);
            panda$core$MutableString* $tmp80 = (panda$core$MutableString*) malloc(40);
            $tmp80->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp80->refCount.value = 1;
            panda$core$MutableString$init($tmp80);
            result79 = $tmp80;
            panda$core$Object* $tmp82 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp82) != NULL }).value) {
            {
                panda$core$Object* $tmp83 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$MutableString$append$panda$core$Object(result79, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp83)));
            }
            }
            panda$core$MutableString$append$panda$core$String(result79, &$s84);
            panda$core$Object* $tmp85 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp85) != NULL }).value) {
            {
                panda$core$Object* $tmp86 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$MutableString$append$panda$core$Object(result79, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp86)));
            }
            }
            panda$core$Object* $tmp87 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp87) != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$String(result79, &$s88);
                panda$core$Object* $tmp89 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$MutableString$append$panda$core$Object(result79, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp89)));
            }
            }
            panda$core$String* $tmp90 = panda$core$MutableString$convert$R$panda$core$String(result79);
            return $tmp90;
        }
        break;
        case 105:
        {
            panda$core$Int64 $tmp91 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp92 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp91, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp92.value);
            panda$core$MutableString* $tmp94 = (panda$core$MutableString*) malloc(40);
            $tmp94->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp94->refCount.value = 1;
            panda$core$MutableString$init($tmp94);
            result93 = $tmp94;
            panda$core$Object* $tmp96 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp97 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp96)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp97.value) {
            {
                panda$core$Object* $tmp98 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$MutableString$append$panda$core$Object(result93, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp98)));
            }
            }
            panda$core$MutableString$append$panda$core$String(result93, &$s99);
            panda$core$Object* $tmp100 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp101 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp100)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp101.value) {
            {
                panda$core$Object* $tmp102 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$MutableString$append$panda$core$Object(result93, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp102)));
            }
            }
            panda$core$Object* $tmp103 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$Bit $tmp104 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp103)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp104.value) {
            {
                panda$core$MutableString$append$panda$core$String(result93, &$s105);
                panda$core$Object* $tmp106 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$MutableString$append$panda$core$Object(result93, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp106)));
            }
            }
            panda$core$String* $tmp107 = panda$core$MutableString$convert$R$panda$core$String(result93);
            return $tmp107;
        }
        break;
        case 107:
        {
            panda$core$Int64 $tmp108 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp109 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp108, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp109.value);
            panda$core$MutableString* $tmp111 = (panda$core$MutableString*) malloc(40);
            $tmp111->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp111->refCount.value = 1;
            panda$core$Object* $tmp113 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp114 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp113));
            panda$core$MutableString$init$panda$core$String($tmp111, $tmp114);
            result110 = $tmp111;
            panda$core$MutableString$append$panda$core$String(result110, &$s115);
            separator116 = &$s117;
            panda$core$Int64 $tmp119 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp118, ((panda$core$Int64) { 1 }), $tmp119, ((panda$core$Bit) { false }));
            int64_t $tmp121 = $tmp118.min.value;
            panda$core$Int64 i120 = { $tmp121 };
            int64_t $tmp123 = $tmp118.max.value;
            bool $tmp124 = $tmp118.inclusive.value;
            bool $tmp131 = 1 > 0;
            if ($tmp131) goto $l129; else goto $l130;
            $l129:;
            if ($tmp124) goto $l132; else goto $l133;
            $l132:;
            if ($tmp121 <= $tmp123) goto $l125; else goto $l127;
            $l133:;
            if ($tmp121 < $tmp123) goto $l125; else goto $l127;
            $l130:;
            if ($tmp124) goto $l134; else goto $l135;
            $l134:;
            if ($tmp121 >= $tmp123) goto $l125; else goto $l127;
            $l135:;
            if ($tmp121 > $tmp123) goto $l125; else goto $l127;
            $l125:;
            {
                panda$core$MutableString$append$panda$core$String(result110, separator116);
                panda$core$Object* $tmp137 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, i120);
                panda$core$MutableString$append$panda$core$Object(result110, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp137)));
                separator116 = &$s138;
            }
            $l128:;
            if ($tmp131) goto $l140; else goto $l141;
            $l140:;
            int64_t $tmp142 = $tmp123 - i120.value;
            if ($tmp124) goto $l143; else goto $l144;
            $l143:;
            if ($tmp142 >= 1) goto $l139; else goto $l127;
            $l144:;
            if ($tmp142 > 1) goto $l139; else goto $l127;
            $l141:;
            int64_t $tmp146 = i120.value - $tmp123;
            if ($tmp124) goto $l147; else goto $l148;
            $l147:;
            if ($tmp146 >= -1) goto $l139; else goto $l127;
            $l148:;
            if ($tmp146 > -1) goto $l139; else goto $l127;
            $l139:;
            i120.value += 1;
            goto $l125;
            $l127:;
            panda$core$MutableString$append$panda$core$String(result110, &$s150);
            panda$core$String* $tmp151 = panda$core$MutableString$convert$R$panda$core$String(result110);
            return $tmp151;
        }
        break;
        case 106:
        {
            panda$core$Int64 $tmp152 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp152, ((panda$core$Int64) { 1 }));
            if ($tmp153.value) {
            {
                panda$core$String* $tmp155 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(self->payload, &$s154);
                panda$core$Object* $tmp156 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp157 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp155, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp156)));
                return $tmp157;
            }
            }
            panda$core$Int64 $tmp158 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp158, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp159.value);
            panda$core$String* $tmp161 = (($fn160) self->payload->$class->vtable[0])(self->payload);
            return $tmp161;
        }
        break;
        case 108:
        {
            panda$core$Int64 $tmp162 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp162, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp163.value);
            panda$core$Object* $tmp165 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp166 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s164, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp165)));
            panda$core$String* $tmp168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp166, &$s167);
            panda$core$String* $tmp169 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp168, self->payload);
            panda$core$String* $tmp171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp169, &$s170);
            return $tmp171;
        }
        break;
        case 118:
        {
            panda$core$Int64 $tmp173 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp173, ((panda$core$Int64) { 2 }));
            bool $tmp172 = $tmp174.value;
            if ($tmp172) goto $l175;
            panda$core$Int64 $tmp176 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp176, ((panda$core$Int64) { 3 }));
            $tmp172 = $tmp177.value;
            $l175:;
            panda$core$Bit $tmp178 = { $tmp172 };
            PANDA_ASSERT($tmp178.value);
            panda$core$Object* $tmp181 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp182 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s180, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp181)));
            panda$core$String* $tmp184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp182, &$s183);
            panda$core$Object* $tmp185 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp186 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp184, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp185)));
            panda$core$String* $tmp188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp186, &$s187);
            result179 = $tmp188;
            panda$core$Int64 $tmp189 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp189, ((panda$core$Int64) { 3 }));
            if ($tmp190.value) {
            {
                panda$core$Object* $tmp192 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s191, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp192)));
                panda$core$String* $tmp195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp193, &$s194);
                panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result179, $tmp195);
                return $tmp196;
            }
            }
            return result179;
        }
        break;
        case 119:
        {
            panda$core$Int64 $tmp197 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp197, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp198.value);
            panda$core$Object* $tmp200 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp201 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s199, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp200)));
            panda$core$String* $tmp203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp201, &$s202);
            panda$core$Object* $tmp204 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp205 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp203, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp204)));
            panda$core$String* $tmp207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp205, &$s206);
            panda$core$Object* $tmp208 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp209 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp207, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp208)));
            panda$core$String* $tmp211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp209, &$s210);
            return $tmp211;
        }
        break;
        case 121:
        {
            panda$core$Int64 $tmp212 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp212, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp213.value);
            panda$core$Object* $tmp215 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp216 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s214, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp215)));
            panda$core$String* $tmp218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp216, &$s217);
            panda$core$Object* $tmp219 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp220 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp218, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp219)));
            panda$core$String* $tmp222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp220, &$s221);
            return $tmp222;
        }
        break;
        case 120:
        {
            panda$core$Int64 $tmp223 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp223, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp224.value);
            panda$core$Object* $tmp226 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp227 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s225, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp226)));
            panda$core$String* $tmp229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp227, &$s228);
            panda$core$Object* $tmp230 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp231 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp229, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp230)));
            panda$core$String* $tmp233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp231, &$s232);
            return $tmp233;
        }
        break;
        case 122:
        {
            panda$core$Int64 $tmp234 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp234, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp235.value);
            panda$core$Object* $tmp237 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp238 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s236, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp237)));
            panda$core$String* $tmp240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp238, &$s239);
            return $tmp240;
        }
        break;
        case 134:
        {
            if (((panda$core$Bit) { self->payload != NULL }).value) {
            {
                panda$core$String* $tmp242 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s241, self->payload);
                panda$core$String* $tmp244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp242, &$s243);
                return $tmp244;
            }
            }
            return &$s245;
        }
        break;
        case 135:
        {
            if (((panda$core$Bit) { self->payload != NULL }).value) {
            {
                panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s246, self->payload);
                panda$core$String* $tmp249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp247, &$s248);
                return $tmp249;
            }
            }
            return &$s250;
        }
        break;
        case 136:
        {
            panda$core$Int64 $tmp251 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp251, ((panda$core$Int64) { 1 }));
            if ($tmp252.value) {
            {
                panda$core$Object* $tmp254 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp255 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s253, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp254)));
                panda$core$String* $tmp257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp255, &$s256);
                return $tmp257;
            }
            }
            return &$s258;
        }
        break;
        case 126:
        {
            panda$core$MutableString* $tmp260 = (panda$core$MutableString*) malloc(40);
            $tmp260->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp260->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp260, &$s262);
            result259 = $tmp260;
            {
                ITable* $tmp264 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp264->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp264 = $tmp264->next;
                }
                $fn266 $tmp265 = $tmp264->methods[0];
                panda$collections$Iterator* $tmp267 = $tmp265(((panda$collections$Iterable*) self->children));
                child$Iter263 = $tmp267;
                $l268:;
                ITable* $tmp270 = child$Iter263->$class->itable;
                while ($tmp270->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp270 = $tmp270->next;
                }
                $fn272 $tmp271 = $tmp270->methods[0];
                panda$core$Bit $tmp273 = $tmp271(child$Iter263);
                panda$core$Bit $tmp274 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp273);
                if (!$tmp274.value) goto $l269;
                {
                    ITable* $tmp276 = child$Iter263->$class->itable;
                    while ($tmp276->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp276 = $tmp276->next;
                    }
                    $fn278 $tmp277 = $tmp276->methods[1];
                    panda$core$Object* $tmp279 = $tmp277(child$Iter263);
                    child275 = ((org$pandalanguage$pandac$ASTNode*) $tmp279);
                    panda$core$String* $tmp281 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(child275);
                    c280 = $tmp281;
                    panda$core$Bit $tmp284 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(c280, &$s283);
                    bool $tmp282 = $tmp284.value;
                    if (!$tmp282) goto $l285;
                    panda$core$Bit $tmp287 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(c280, &$s286);
                    $tmp282 = $tmp287.value;
                    $l285:;
                    panda$core$Bit $tmp288 = { $tmp282 };
                    if ($tmp288.value) {
                    {
                        panda$core$String$Index $tmp290 = panda$core$String$start$R$panda$core$String$Index(c280);
                        panda$core$String$Index $tmp291 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(c280, $tmp290);
                        panda$core$String$Index $tmp292 = panda$core$String$end$R$panda$core$String$Index(c280);
                        panda$core$String$Index $tmp293 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(c280, $tmp292);
                        panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp289, ((panda$core$String$Index$nullable) { $tmp291, true }), ((panda$core$String$Index$nullable) { $tmp293, true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp294 = panda$core$String$$IDX$panda$core$SimpleRange$LTpanda$core$String$Index$Q$GT$R$panda$core$String(c280, $tmp289);
                        panda$core$MutableString$append$panda$core$String(result259, $tmp294);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$Object(result259, ((panda$core$Object*) child275));
                    }
                    }
                    panda$core$MutableString$append$panda$core$String(result259, &$s295);
                }
                goto $l268;
                $l269:;
            }
            panda$core$MutableString$append$panda$core$String(result259, &$s296);
            panda$core$String* $tmp297 = panda$core$MutableString$convert$R$panda$core$String(result259);
            return $tmp297;
        }
        break;
        case 109:
        {
            panda$core$String* $tmp299 = (($fn298) self->payload->$class->vtable[0])(self->payload);
            return $tmp299;
        }
        break;
        case 110:
        {
            panda$core$Object* $tmp300 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp302 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp300)), &$s301);
            return $tmp302;
        }
        break;
        case 154:
        {
            panda$core$MutableString* $tmp304 = (panda$core$MutableString*) malloc(40);
            $tmp304->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp304->refCount.value = 1;
            panda$core$Object* $tmp306 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp307 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp306));
            panda$core$MutableString$init$panda$core$String($tmp304, $tmp307);
            result303 = $tmp304;
            panda$core$MutableString$append$panda$core$String(result303, &$s308);
            separator309 = &$s310;
            {
                panda$core$SimpleRange$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp312, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$collections$ImmutableArray* $tmp313 = panda$collections$ImmutableArray$$IDX$panda$core$SimpleRange$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(self->children, $tmp312);
                ITable* $tmp314 = ((panda$collections$Iterable*) $tmp313)->$class->itable;
                while ($tmp314->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp314 = $tmp314->next;
                }
                $fn316 $tmp315 = $tmp314->methods[0];
                panda$collections$Iterator* $tmp317 = $tmp315(((panda$collections$Iterable*) $tmp313));
                c$Iter311 = $tmp317;
                $l318:;
                ITable* $tmp320 = c$Iter311->$class->itable;
                while ($tmp320->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp320 = $tmp320->next;
                }
                $fn322 $tmp321 = $tmp320->methods[0];
                panda$core$Bit $tmp323 = $tmp321(c$Iter311);
                panda$core$Bit $tmp324 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp323);
                if (!$tmp324.value) goto $l319;
                {
                    ITable* $tmp326 = c$Iter311->$class->itable;
                    while ($tmp326->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp326 = $tmp326->next;
                    }
                    $fn328 $tmp327 = $tmp326->methods[1];
                    panda$core$Object* $tmp329 = $tmp327(c$Iter311);
                    c325 = ((org$pandalanguage$pandac$ASTNode*) $tmp329);
                    panda$core$MutableString$append$panda$core$String(result303, separator309);
                    panda$core$MutableString$append$panda$core$Object(result303, ((panda$core$Object*) c325));
                    separator309 = &$s330;
                }
                goto $l318;
                $l319:;
            }
            panda$core$MutableString$append$panda$core$String(result303, &$s331);
            panda$core$String* $tmp332 = panda$core$MutableString$convert$R$panda$core$String(result303);
            return $tmp332;
        }
        break;
        case 139:
        {
            panda$core$MutableString* $tmp334 = (panda$core$MutableString*) malloc(40);
            $tmp334->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp334->refCount.value = 1;
            panda$core$MutableString$init($tmp334);
            result333 = $tmp334;
            separator336 = &$s337;
            {
                ITable* $tmp339 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp339->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp339 = $tmp339->next;
                }
                $fn341 $tmp340 = $tmp339->methods[0];
                panda$collections$Iterator* $tmp342 = $tmp340(((panda$collections$Iterable*) self->children));
                c$Iter338 = $tmp342;
                $l343:;
                ITable* $tmp345 = c$Iter338->$class->itable;
                while ($tmp345->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp345 = $tmp345->next;
                }
                $fn347 $tmp346 = $tmp345->methods[0];
                panda$core$Bit $tmp348 = $tmp346(c$Iter338);
                panda$core$Bit $tmp349 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp348);
                if (!$tmp349.value) goto $l344;
                {
                    ITable* $tmp351 = c$Iter338->$class->itable;
                    while ($tmp351->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp351 = $tmp351->next;
                    }
                    $fn353 $tmp352 = $tmp351->methods[1];
                    panda$core$Object* $tmp354 = $tmp352(c$Iter338);
                    c350 = ((org$pandalanguage$pandac$ASTNode*) $tmp354);
                    panda$core$MutableString$append$panda$core$String(result333, separator336);
                    panda$core$MutableString$append$panda$core$Object(result333, ((panda$core$Object*) c350));
                    separator336 = &$s355;
                }
                goto $l343;
                $l344:;
            }
            panda$core$String* $tmp356 = panda$core$MutableString$convert$R$panda$core$String(result333);
            return $tmp356;
        }
        break;
        case 143:
        {
            panda$core$String* $tmp358 = (($fn357) self->payload->$class->vtable[0])(self->payload);
            return $tmp358;
        }
        break;
        case 144:
        {
            panda$core$MutableString* $tmp360 = (panda$core$MutableString*) malloc(40);
            $tmp360->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp360->refCount.value = 1;
            panda$core$MutableString$init($tmp360);
            result359 = $tmp360;
            {
                ITable* $tmp363 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp363->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp363 = $tmp363->next;
                }
                $fn365 $tmp364 = $tmp363->methods[0];
                panda$collections$Iterator* $tmp366 = $tmp364(((panda$collections$Iterable*) self->children));
                c$Iter362 = $tmp366;
                $l367:;
                ITable* $tmp369 = c$Iter362->$class->itable;
                while ($tmp369->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp369 = $tmp369->next;
                }
                $fn371 $tmp370 = $tmp369->methods[0];
                panda$core$Bit $tmp372 = $tmp370(c$Iter362);
                panda$core$Bit $tmp373 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp372);
                if (!$tmp373.value) goto $l368;
                {
                    ITable* $tmp375 = c$Iter362->$class->itable;
                    while ($tmp375->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp375 = $tmp375->next;
                    }
                    $fn377 $tmp376 = $tmp375->methods[1];
                    panda$core$Object* $tmp378 = $tmp376(c$Iter362);
                    c374 = ((org$pandalanguage$pandac$ASTNode*) $tmp378);
                    panda$core$MutableString$append$panda$core$Object(result359, ((panda$core$Object*) c374));
                    panda$core$MutableString$append$panda$core$String(result359, &$s379);
                }
                goto $l367;
                $l368:;
            }
            panda$core$String* $tmp380 = panda$core$MutableString$convert$R$panda$core$String(result359);
            return $tmp380;
        }
        break;
        case 129:
        {
            panda$core$Int64 $tmp381 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp381, ((panda$core$Int64) { 1 }));
            if ($tmp382.value) {
            {
                panda$core$Object* $tmp383 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp384 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp383));
                return $tmp384;
            }
            }
            panda$core$Object* $tmp386 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp387 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s385, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp386)));
            panda$core$String* $tmp389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp387, &$s388);
            panda$core$Object* $tmp390 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp391 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp389, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp390)));
            panda$core$String* $tmp393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp391, &$s392);
            return $tmp393;
        }
        break;
        case 130:
        {
            panda$core$MutableString* $tmp395 = (panda$core$MutableString*) malloc(40);
            $tmp395->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp395->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp395, &$s397);
            result394 = $tmp395;
            separator398 = &$s399;
            {
                ITable* $tmp401 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp401->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp401 = $tmp401->next;
                }
                $fn403 $tmp402 = $tmp401->methods[0];
                panda$collections$Iterator* $tmp404 = $tmp402(((panda$collections$Iterable*) self->children));
                c$Iter400 = $tmp404;
                $l405:;
                ITable* $tmp407 = c$Iter400->$class->itable;
                while ($tmp407->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp407 = $tmp407->next;
                }
                $fn409 $tmp408 = $tmp407->methods[0];
                panda$core$Bit $tmp410 = $tmp408(c$Iter400);
                panda$core$Bit $tmp411 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp410);
                if (!$tmp411.value) goto $l406;
                {
                    ITable* $tmp413 = c$Iter400->$class->itable;
                    while ($tmp413->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp413 = $tmp413->next;
                    }
                    $fn415 $tmp414 = $tmp413->methods[1];
                    panda$core$Object* $tmp416 = $tmp414(c$Iter400);
                    c412 = ((org$pandalanguage$pandac$ASTNode*) $tmp416);
                    panda$core$MutableString$append$panda$core$String(result394, separator398);
                    panda$core$MutableString$append$panda$core$Object(result394, ((panda$core$Object*) c412));
                    separator398 = &$s417;
                }
                goto $l405;
                $l406:;
            }
            panda$core$String* $tmp418 = panda$core$MutableString$convert$R$panda$core$String(result394);
            return $tmp418;
        }
        break;
        case 131:
        {
            panda$core$MutableString* $tmp420 = (panda$core$MutableString*) malloc(40);
            $tmp420->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp420->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp420, &$s422);
            result419 = $tmp420;
            separator423 = &$s424;
            {
                ITable* $tmp426 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp426->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp426 = $tmp426->next;
                }
                $fn428 $tmp427 = $tmp426->methods[0];
                panda$collections$Iterator* $tmp429 = $tmp427(((panda$collections$Iterable*) self->children));
                c$Iter425 = $tmp429;
                $l430:;
                ITable* $tmp432 = c$Iter425->$class->itable;
                while ($tmp432->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp432 = $tmp432->next;
                }
                $fn434 $tmp433 = $tmp432->methods[0];
                panda$core$Bit $tmp435 = $tmp433(c$Iter425);
                panda$core$Bit $tmp436 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp435);
                if (!$tmp436.value) goto $l431;
                {
                    ITable* $tmp438 = c$Iter425->$class->itable;
                    while ($tmp438->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp438 = $tmp438->next;
                    }
                    $fn440 $tmp439 = $tmp438->methods[1];
                    panda$core$Object* $tmp441 = $tmp439(c$Iter425);
                    c437 = ((org$pandalanguage$pandac$ASTNode*) $tmp441);
                    panda$core$MutableString$append$panda$core$String(result419, separator423);
                    panda$core$MutableString$append$panda$core$Object(result419, ((panda$core$Object*) c437));
                    separator423 = &$s442;
                }
                goto $l430;
                $l431:;
            }
            panda$core$String* $tmp443 = panda$core$MutableString$convert$R$panda$core$String(result419);
            return $tmp443;
        }
        break;
        case 133:
        {
            panda$core$MutableString* $tmp445 = (panda$core$MutableString*) malloc(40);
            $tmp445->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp445->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp445, &$s447);
            result444 = $tmp445;
            separator448 = &$s449;
            {
                ITable* $tmp451 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp451->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp451 = $tmp451->next;
                }
                $fn453 $tmp452 = $tmp451->methods[0];
                panda$collections$Iterator* $tmp454 = $tmp452(((panda$collections$Iterable*) self->children));
                c$Iter450 = $tmp454;
                $l455:;
                ITable* $tmp457 = c$Iter450->$class->itable;
                while ($tmp457->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp457 = $tmp457->next;
                }
                $fn459 $tmp458 = $tmp457->methods[0];
                panda$core$Bit $tmp460 = $tmp458(c$Iter450);
                panda$core$Bit $tmp461 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp460);
                if (!$tmp461.value) goto $l456;
                {
                    ITable* $tmp463 = c$Iter450->$class->itable;
                    while ($tmp463->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp463 = $tmp463->next;
                    }
                    $fn465 $tmp464 = $tmp463->methods[1];
                    panda$core$Object* $tmp466 = $tmp464(c$Iter450);
                    c462 = ((org$pandalanguage$pandac$ASTNode*) $tmp466);
                    panda$core$MutableString$append$panda$core$String(result444, separator448);
                    panda$core$MutableString$append$panda$core$Object(result444, ((panda$core$Object*) c462));
                    separator448 = &$s467;
                }
                goto $l455;
                $l456:;
            }
            panda$core$String* $tmp468 = panda$core$MutableString$convert$R$panda$core$String(result444);
            return $tmp468;
        }
        break;
        case 132:
        {
            panda$core$MutableString* $tmp470 = (panda$core$MutableString*) malloc(40);
            $tmp470->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp470->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp470, &$s472);
            result469 = $tmp470;
            separator473 = &$s474;
            {
                ITable* $tmp476 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp476->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp476 = $tmp476->next;
                }
                $fn478 $tmp477 = $tmp476->methods[0];
                panda$collections$Iterator* $tmp479 = $tmp477(((panda$collections$Iterable*) self->children));
                c$Iter475 = $tmp479;
                $l480:;
                ITable* $tmp482 = c$Iter475->$class->itable;
                while ($tmp482->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp482 = $tmp482->next;
                }
                $fn484 $tmp483 = $tmp482->methods[0];
                panda$core$Bit $tmp485 = $tmp483(c$Iter475);
                panda$core$Bit $tmp486 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp485);
                if (!$tmp486.value) goto $l481;
                {
                    ITable* $tmp488 = c$Iter475->$class->itable;
                    while ($tmp488->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp488 = $tmp488->next;
                    }
                    $fn490 $tmp489 = $tmp488->methods[1];
                    panda$core$Object* $tmp491 = $tmp489(c$Iter475);
                    c487 = ((org$pandalanguage$pandac$ASTNode*) $tmp491);
                    panda$core$MutableString$append$panda$core$String(result469, separator473);
                    panda$core$MutableString$append$panda$core$Object(result469, ((panda$core$Object*) c487));
                    separator473 = &$s492;
                }
                goto $l480;
                $l481:;
            }
            panda$core$String* $tmp493 = panda$core$MutableString$convert$R$panda$core$String(result469);
            return $tmp493;
        }
        break;
        case 148:
        {
            panda$core$Int64 $tmp494 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp494, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp495.value);
            panda$core$Object* $tmp497 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp498 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s496, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp497)));
            panda$core$String* $tmp500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp498, &$s499);
            panda$core$Object* $tmp501 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp502 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp500, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp501)));
            panda$core$String* $tmp504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp502, &$s503);
            panda$core$Object* $tmp505 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp506 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp504, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp505)));
            panda$core$String* $tmp508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp506, &$s507);
            return $tmp508;
        }
        break;
        case 149:
        {
            panda$core$Int64 $tmp509 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp509, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp510.value);
            panda$core$String* $tmp512 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s511, self->payload);
            panda$core$String* $tmp514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp512, &$s513);
            panda$core$Object* $tmp515 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp516 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp514, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp515)));
            panda$core$String* $tmp518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp516, &$s517);
            return $tmp518;
        }
        break;
        case 150:
        {
            panda$core$MutableString* $tmp520 = (panda$core$MutableString*) malloc(40);
            $tmp520->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp520->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp520, &$s522);
            result519 = $tmp520;
            separator523 = &$s524;
            {
                ITable* $tmp526 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp526->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp526 = $tmp526->next;
                }
                $fn528 $tmp527 = $tmp526->methods[0];
                panda$collections$Iterator* $tmp529 = $tmp527(((panda$collections$Iterable*) self->children));
                c$Iter525 = $tmp529;
                $l530:;
                ITable* $tmp532 = c$Iter525->$class->itable;
                while ($tmp532->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp532 = $tmp532->next;
                }
                $fn534 $tmp533 = $tmp532->methods[0];
                panda$core$Bit $tmp535 = $tmp533(c$Iter525);
                panda$core$Bit $tmp536 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp535);
                if (!$tmp536.value) goto $l531;
                {
                    ITable* $tmp538 = c$Iter525->$class->itable;
                    while ($tmp538->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp538 = $tmp538->next;
                    }
                    $fn540 $tmp539 = $tmp538->methods[1];
                    panda$core$Object* $tmp541 = $tmp539(c$Iter525);
                    c537 = ((org$pandalanguage$pandac$ASTNode*) $tmp541);
                    panda$core$MutableString$append$panda$core$String(result519, separator523);
                    panda$core$MutableString$append$panda$core$Object(result519, ((panda$core$Object*) c537));
                    separator523 = &$s542;
                }
                goto $l530;
                $l531:;
            }
            panda$core$MutableString$append$panda$core$String(result519, &$s543);
            panda$core$String* $tmp544 = panda$core$MutableString$convert$R$panda$core$String(result519);
            return $tmp544;
        }
        break;
        case 147:
        {
            panda$core$Int64 $tmp545 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp545, ((panda$core$Int64) { 5 }));
            PANDA_ASSERT($tmp546.value);
            panda$core$Object* $tmp548 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp549 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s547, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp548)));
            panda$core$String* $tmp551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp549, &$s550);
            panda$core$Object* $tmp552 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp553 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp551, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp552)));
            panda$core$String* $tmp555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp553, &$s554);
            panda$core$Object* $tmp556 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp557 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp555, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp556)));
            panda$core$String* $tmp559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp557, &$s558);
            panda$core$Object* $tmp560 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp561 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp559, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp560)));
            panda$core$String* $tmp563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp561, &$s562);
            panda$core$Object* $tmp564 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp565 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp563, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp564)));
            panda$core$String* $tmp567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp565, &$s566);
            return $tmp567;
        }
        break;
        case 145:
        {
            panda$core$Int64 $tmp568 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp568, ((panda$core$Int64) { 6 }));
            PANDA_ASSERT($tmp569.value);
            panda$core$Object* $tmp571 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp572 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s570, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp571)));
            panda$core$String* $tmp574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp572, &$s573);
            panda$core$Object* $tmp575 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp576 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp574, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp575)));
            panda$core$String* $tmp578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp576, &$s577);
            panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp578, self->payload);
            panda$core$String* $tmp581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp579, &$s580);
            panda$core$Object* $tmp582 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp583 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp581, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp582)));
            panda$core$String* $tmp585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp583, &$s584);
            panda$core$Object* $tmp587 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s586, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp587)));
            panda$core$String* $tmp590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp588, &$s589);
            panda$core$Object* $tmp591 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp592 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp590, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp591)));
            panda$core$String* $tmp594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp592, &$s593);
            panda$core$Object* $tmp595 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$String* $tmp596 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp594, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp595)));
            panda$core$String* $tmp598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp596, &$s597);
            panda$core$String* $tmp599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp585, $tmp598);
            return $tmp599;
        }
        break;
        case 146:
        {
            panda$core$Int64 $tmp600 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp600, ((panda$core$Int64) { 6 }));
            PANDA_ASSERT($tmp601.value);
            panda$core$Object* $tmp603 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp604 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s602, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp603)));
            panda$core$String* $tmp606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp604, &$s605);
            panda$core$Object* $tmp607 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp608 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp606, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp607)));
            panda$core$String* $tmp610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp608, &$s609);
            panda$core$String* $tmp611 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp610, self->payload);
            panda$core$String* $tmp613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp611, &$s612);
            panda$core$Object* $tmp614 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp615 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp613, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp614)));
            panda$core$String* $tmp617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp615, &$s616);
            panda$core$Object* $tmp619 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp620 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s618, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp619)));
            panda$core$String* $tmp622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp620, &$s621);
            panda$core$Object* $tmp623 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp624 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp622, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp623)));
            panda$core$String* $tmp626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp624, &$s625);
            panda$core$Object* $tmp627 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$String* $tmp628 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp626, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp627)));
            panda$core$String* $tmp630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp628, &$s629);
            panda$core$String* $tmp631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp617, $tmp630);
            return $tmp631;
        }
        break;
        case 140:
        {
            panda$core$MutableString* $tmp633 = (panda$core$MutableString*) malloc(40);
            $tmp633->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp633->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp633, &$s635);
            result632 = $tmp633;
            {
                ITable* $tmp637 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp637->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp637 = $tmp637->next;
                }
                $fn639 $tmp638 = $tmp637->methods[0];
                panda$collections$Iterator* $tmp640 = $tmp638(((panda$collections$Iterable*) self->children));
                c$Iter636 = $tmp640;
                $l641:;
                ITable* $tmp643 = c$Iter636->$class->itable;
                while ($tmp643->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp643 = $tmp643->next;
                }
                $fn645 $tmp644 = $tmp643->methods[0];
                panda$core$Bit $tmp646 = $tmp644(c$Iter636);
                panda$core$Bit $tmp647 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp646);
                if (!$tmp647.value) goto $l642;
                {
                    ITable* $tmp649 = c$Iter636->$class->itable;
                    while ($tmp649->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp649 = $tmp649->next;
                    }
                    $fn651 $tmp650 = $tmp649->methods[1];
                    panda$core$Object* $tmp652 = $tmp650(c$Iter636);
                    c648 = ((org$pandalanguage$pandac$ASTNode*) $tmp652);
                    panda$core$MutableString$append$panda$core$Object(result632, ((panda$core$Object*) c648));
                    panda$core$MutableString$append$panda$core$String(result632, &$s653);
                }
                goto $l641;
                $l642:;
            }
            panda$core$MutableString$append$panda$core$String(result632, &$s654);
            panda$core$String* $tmp655 = panda$core$MutableString$convert$R$panda$core$String(result632);
            return $tmp655;
        }
        break;
        case 142:
        {
            panda$core$Int64 $tmp656 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp656, ((panda$core$Int64) { 6 }));
            PANDA_ASSERT($tmp657.value);
            panda$core$MutableString* $tmp659 = (panda$core$MutableString*) malloc(40);
            $tmp659->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp659->refCount.value = 1;
            panda$core$MutableString$init($tmp659);
            result658 = $tmp659;
            panda$core$Object* $tmp661 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$append$panda$core$Object(result658, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp661)));
            panda$core$Object* $tmp662 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$MutableString$append$panda$core$Object(result658, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp662)));
            panda$core$String* $tmp664 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s663, self->payload);
            panda$core$String* $tmp666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp664, &$s665);
            panda$core$MutableString$append$panda$core$String(result658, $tmp666);
            panda$core$Object* $tmp667 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$MutableString$append$panda$core$Object(result658, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp667)));
            panda$core$Object* $tmp668 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$Bit $tmp669 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp668)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp669.value) {
            {
                panda$core$MutableString$append$panda$core$String(result658, &$s670);
                panda$core$Object* $tmp671 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
                panda$core$MutableString$append$panda$core$Object(result658, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp671)));
            }
            }
            panda$core$Object* $tmp672 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$Bit $tmp673 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp672)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp673.value) {
            {
                panda$core$MutableString$append$panda$core$String(result658, &$s674);
                panda$core$Object* $tmp675 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
                panda$core$MutableString$append$panda$core$Object(result658, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp675)));
                panda$core$MutableString$append$panda$core$String(result658, &$s676);
            }
            }
            panda$core$MutableString$append$panda$core$String(result658, &$s677);
            panda$core$Object* $tmp678 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$MutableString$append$panda$core$Object(result658, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp678)));
            panda$core$String* $tmp679 = panda$core$MutableString$convert$R$panda$core$String(result658);
            return $tmp679;
        }
        break;
        case 151:
        {
            panda$core$Int64 $tmp680 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp680, ((panda$core$Int64) { 5 }));
            PANDA_ASSERT($tmp681.value);
            panda$core$MutableString* $tmp683 = (panda$core$MutableString*) malloc(40);
            $tmp683->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp683->refCount.value = 1;
            panda$core$MutableString$init($tmp683);
            result682 = $tmp683;
            panda$core$Object* $tmp685 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$append$panda$core$Object(result682, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp685)));
            panda$core$Object* $tmp686 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$MutableString$append$panda$core$Object(result682, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp686)));
            panda$core$String* $tmp688 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s687, self->payload);
            panda$core$String* $tmp690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp688, &$s689);
            panda$core$MutableString$append$panda$core$String(result682, $tmp690);
            panda$core$Object* $tmp691 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$MutableString$append$panda$core$Object(result682, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp691)));
            panda$core$MutableString$append$panda$core$String(result682, &$s692);
            panda$core$Object* $tmp693 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$MutableString$append$panda$core$Object(result682, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp693)));
            panda$core$Object* $tmp694 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$MutableString$append$panda$core$Object(result682, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp694)));
            panda$core$String* $tmp695 = panda$core$MutableString$convert$R$panda$core$String(result682);
            return $tmp695;
        }
        break;
        case 152:
        {
            panda$core$MutableString* $tmp697 = (panda$core$MutableString*) malloc(40);
            $tmp697->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp697->refCount.value = 1;
            panda$core$MutableString$init($tmp697);
            result696 = $tmp697;
            {
                ITable* $tmp700 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp700->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp700 = $tmp700->next;
                }
                $fn702 $tmp701 = $tmp700->methods[0];
                panda$collections$Iterator* $tmp703 = $tmp701(((panda$collections$Iterable*) self->children));
                c$Iter699 = $tmp703;
                $l704:;
                ITable* $tmp706 = c$Iter699->$class->itable;
                while ($tmp706->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp706 = $tmp706->next;
                }
                $fn708 $tmp707 = $tmp706->methods[0];
                panda$core$Bit $tmp709 = $tmp707(c$Iter699);
                panda$core$Bit $tmp710 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp709);
                if (!$tmp710.value) goto $l705;
                {
                    ITable* $tmp712 = c$Iter699->$class->itable;
                    while ($tmp712->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp712 = $tmp712->next;
                    }
                    $fn714 $tmp713 = $tmp712->methods[1];
                    panda$core$Object* $tmp715 = $tmp713(c$Iter699);
                    c711 = ((org$pandalanguage$pandac$ASTNode*) $tmp715);
                    panda$core$MutableString$append$panda$core$Object(result696, ((panda$core$Object*) c711));
                    panda$core$MutableString$append$panda$core$String(result696, &$s716);
                }
                goto $l704;
                $l705:;
            }
            panda$core$String* $tmp717 = panda$core$MutableString$convert$R$panda$core$String(result696);
            return $tmp717;
        }
        break;
        case 114:
        {
            return &$s718;
        }
        break;
        case 115:
        {
            return &$s719;
        }
        break;
        case 138:
        {
            return &$s720;
        }
        break;
        default:
        {
            panda$core$String* $tmp722 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s721, ((panda$core$Object*) wrap_panda$core$Int64(self->kind)));
            panda$core$String* $tmp724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp722, &$s723);
            return $tmp724;
        }
    }
}

