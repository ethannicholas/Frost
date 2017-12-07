#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/collections/Array.h"
#include "panda/collections/ListView.h"
#include "panda/core/UInt64.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/MutableString.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"


org$pandalanguage$pandac$ASTNode$class_type org$pandalanguage$pandac$ASTNode$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String, panda$core$Object$cleanup} };

typedef panda$core$String* (*$fn68)(panda$core$Object*);
typedef panda$core$String* (*$fn71)(panda$core$Object*);
typedef panda$core$String* (*$fn75)(panda$core$Object*);
typedef panda$core$String* (*$fn170)(panda$core$Object*);
typedef panda$core$String* (*$fn182)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn272)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn278)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn284)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn305)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn325)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn331)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn337)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn351)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn357)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn363)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn368)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn377)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn383)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn389)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn417)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn423)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn429)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn443)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn449)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn455)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn469)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn475)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn481)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn495)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn501)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn507)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn544)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn550)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn556)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn653)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn659)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn665)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn715)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn721)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn727)(panda$collections$Iterator*);

static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 1 };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 1 };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6F\x70\x65\x72\x61\x74\x6F\x72\x3A", 10, 1 };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x63\x6B\x61\x67\x65\x20", 8, 1 };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x73\x65\x73\x20", 5, 1 };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E\x2E", 3, 1 };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 1 };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E", 2, 1 };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 1 };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20", 3, 1 };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x6C\x73\x65\x20", 6, 1 };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x72\x20", 4, 1 };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20", 4, 1 };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20", 6, 1 };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x6F\x20", 3, 1 };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x68\x69\x6C\x65\x20", 7, 1 };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x6F\x6F\x70\x20", 5, 1 };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6B\x20", 6, 1 };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6B", 5, 1 };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 9, 1 };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x74\x69\x6E\x75\x65", 8, 1 };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 1 };
static panda$core$String $s261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E", 6, 1 };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x0A", 2, 1 };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x3D\x20", 4, 1 };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 1 };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 1 };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x72\x6F\x70\x65\x72\x74\x79\x20", 9, 1 };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 1 };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x65\x74\x68\x6F\x64\x20", 7, 1 };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6E\x63\x74\x69\x6F\x6E\x20", 9, 1 };
static panda$core$String $s625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x0A", 2, 1 };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20", 6, 1 };
static panda$core$String $s678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20", 3, 1 };
static panda$core$String $s687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, 1 };
static panda$core$String $s689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20", 6, 1 };
static panda$core$String $s701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4, 1 };
static panda$core$String $s734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 1 };
static panda$core$String $s736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x41\x53\x54\x4E\x6F\x64\x65\x3A", 9, 1 };
static panda$core$String $s739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };

panda$core$String* org$pandalanguage$pandac$ASTNode$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    panda$core$Int64 $match$23991;
    {
        $match$23991 = p_op;
        panda$core$Bit $tmp2 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23991, ((panda$core$Int64) { 51 }));
        if ($tmp2.value) {
        {
            return &$s3;
        }
        }
        else {
        panda$core$Bit $tmp4 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23991, ((panda$core$Int64) { 66 }));
        if ($tmp4.value) {
        {
            return &$s5;
        }
        }
        else {
        panda$core$Bit $tmp6 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23991, ((panda$core$Int64) { 54 }));
        if ($tmp6.value) {
        {
            return &$s7;
        }
        }
        else {
        panda$core$Bit $tmp8 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23991, ((panda$core$Int64) { 55 }));
        if ($tmp8.value) {
        {
            return &$s9;
        }
        }
        else {
        panda$core$Bit $tmp10 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23991, ((panda$core$Int64) { 53 }));
        if ($tmp10.value) {
        {
            return &$s11;
        }
        }
        else {
        panda$core$Bit $tmp12 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23991, ((panda$core$Int64) { 52 }));
        if ($tmp12.value) {
        {
            return &$s13;
        }
        }
        else {
        panda$core$Bit $tmp14 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23991, ((panda$core$Int64) { 68 }));
        if ($tmp14.value) {
        {
            return &$s15;
        }
        }
        else {
        panda$core$Bit $tmp16 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23991, ((panda$core$Int64) { 73 }));
        if ($tmp16.value) {
        {
            return &$s17;
        }
        }
        else {
        {
            panda$core$String* $tmp19 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s18, ((panda$core$Object*) wrap_panda$core$Int64(p_op)));
            panda$core$String* $tmp21 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp19, &$s20);
            return $tmp21;
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset) {
    panda$collections$Array* $tmp22 = (panda$collections$Array*) malloc(40);
    $tmp22->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp22->refCount.value = 1;
    panda$collections$Array$init($tmp22);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(self, p_kind, p_offset, NULL, ((panda$collections$ListView*) $tmp22));
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$UInt64 p_payload) {
    panda$collections$Array* $tmp24 = (panda$collections$Array*) malloc(40);
    $tmp24->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp24->refCount.value = 1;
    panda$collections$Array$init($tmp24);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(self, p_kind, p_offset, ((panda$core$Object*) wrap_panda$core$UInt64(p_payload)), ((panda$collections$ListView*) $tmp24));
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$String* p_payload) {
    panda$collections$Array* $tmp26 = (panda$collections$Array*) malloc(40);
    $tmp26->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp26->refCount.value = 1;
    panda$collections$Array$init($tmp26);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(self, p_kind, p_offset, ((panda$core$Object*) p_payload), ((panda$collections$ListView*) $tmp26));
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$Bit p_payload) {
    panda$collections$Array* $tmp28 = (panda$collections$Array*) malloc(40);
    $tmp28->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp28->refCount.value = 1;
    panda$collections$Array$init($tmp28);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(self, p_kind, p_offset, ((panda$core$Object*) wrap_panda$core$Bit(p_payload)), ((panda$collections$ListView*) $tmp28));
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$collections$ListView* p_children) {
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(self, p_kind, p_offset, NULL, p_children);
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$Object* p_payload, panda$collections$ListView* p_children) {
    self->kind = p_kind;
    self->offset = p_offset;
    self->payload = p_payload;
    panda$collections$ImmutableArray* $tmp30 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp30->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp30->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp30, p_children);
    self->children = $tmp30;
}
panda$core$String* org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(org$pandalanguage$pandac$ASTNode* self) {
    panda$core$Int64 $match$382332;
    panda$core$MutableString* result91;
    panda$core$MutableString* result104;
    panda$core$MutableString* result120;
    panda$core$String* separator126;
    panda$core$Range$LTpanda$core$Int64$GT $tmp128;
    panda$core$String* result185;
    panda$core$MutableString* result265;
    panda$collections$Iterator* child$Iter269;
    org$pandalanguage$pandac$ASTNode* child281;
    panda$core$String* c286;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp295;
    panda$core$MutableString* result312;
    panda$core$String* separator318;
    panda$collections$Iterator* c$Iter320;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp321;
    org$pandalanguage$pandac$ASTNode* c334;
    panda$core$MutableString* result343;
    panda$core$String* separator346;
    panda$collections$Iterator* c$Iter348;
    org$pandalanguage$pandac$ASTNode* c360;
    panda$core$MutableString* result371;
    panda$collections$Iterator* c$Iter374;
    org$pandalanguage$pandac$ASTNode* c386;
    panda$core$MutableString* result408;
    panda$core$String* separator412;
    panda$collections$Iterator* c$Iter414;
    org$pandalanguage$pandac$ASTNode* c426;
    panda$core$MutableString* result434;
    panda$core$String* separator438;
    panda$collections$Iterator* c$Iter440;
    org$pandalanguage$pandac$ASTNode* c452;
    panda$core$MutableString* result460;
    panda$core$String* separator464;
    panda$collections$Iterator* c$Iter466;
    org$pandalanguage$pandac$ASTNode* c478;
    panda$core$MutableString* result486;
    panda$core$String* separator490;
    panda$collections$Iterator* c$Iter492;
    org$pandalanguage$pandac$ASTNode* c504;
    panda$core$MutableString* result535;
    panda$core$String* separator539;
    panda$collections$Iterator* c$Iter541;
    org$pandalanguage$pandac$ASTNode* c553;
    panda$core$MutableString* result646;
    panda$collections$Iterator* c$Iter650;
    org$pandalanguage$pandac$ASTNode* c662;
    panda$core$MutableString* result671;
    panda$core$MutableString* result694;
    panda$core$MutableString* result709;
    panda$collections$Iterator* c$Iter712;
    org$pandalanguage$pandac$ASTNode* c724;
    {
        $match$382332 = self->kind;
        panda$core$Bit $tmp33 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 112 }));
        if ($tmp33.value) {
        {
            panda$core$String* $tmp35 = org$pandalanguage$pandac$ASTNode$operatorName$panda$core$Int64$R$panda$core$String(((panda$core$Int64$wrapper*) self->payload)->value);
            panda$core$String* $tmp36 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s34, $tmp35);
            panda$core$String* $tmp38 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp36, &$s37);
            panda$core$Object* $tmp39 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp40 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp38, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp39)));
            panda$core$String* $tmp42 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp40, &$s41);
            return $tmp42;
        }
        }
        else {
        panda$core$Bit $tmp43 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 103 }));
        if ($tmp43.value) {
        {
            panda$core$Bit $tmp44 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64$wrapper*) self->payload)->value, ((panda$core$Int64) { 101 }));
            if ($tmp44.value) {
            {
                panda$core$Object* $tmp46 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp47 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s45, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp46)));
                panda$core$String* $tmp49 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp47, &$s48);
                panda$core$Object* $tmp50 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp51 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp49, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp50)));
                panda$core$String* $tmp53 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp51, &$s52);
                return $tmp53;
            }
            }
            panda$core$Object* $tmp55 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp56 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s54, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp55)));
            panda$core$String* $tmp58 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp56, &$s57);
            panda$core$String* $tmp59 = org$pandalanguage$pandac$ASTNode$operatorName$panda$core$Int64$R$panda$core$String(((panda$core$Int64$wrapper*) self->payload)->value);
            panda$core$String* $tmp60 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp58, $tmp59);
            panda$core$String* $tmp62 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp60, &$s61);
            panda$core$Object* $tmp63 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp62, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp63)));
            panda$core$String* $tmp66 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp64, &$s65);
            return $tmp66;
        }
        }
        else {
        panda$core$Bit $tmp67 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 102 }));
        if ($tmp67.value) {
        {
            panda$core$String* $tmp69 = (($fn68) self->payload->$class->vtable[0])(self->payload);
            return $tmp69;
        }
        }
        else {
        panda$core$Bit $tmp70 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 116 }));
        if ($tmp70.value) {
        {
            panda$core$String* $tmp72 = (($fn71) self->payload->$class->vtable[0])(self->payload);
            return $tmp72;
        }
        }
        else {
        panda$core$Bit $tmp73 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 113 }));
        if ($tmp73.value) {
        {
            panda$core$String* $tmp76 = (($fn75) self->payload->$class->vtable[0])(self->payload);
            panda$core$String* $tmp77 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s74, $tmp76);
            panda$core$String* $tmp79 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp77, &$s78);
            return $tmp79;
        }
        }
        else {
        panda$core$Bit $tmp80 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 100 }));
        if ($tmp80.value) {
        {
            panda$core$String* $tmp82 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s81, self->payload);
            panda$core$String* $tmp84 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp82, &$s83);
            return $tmp84;
        }
        }
        else {
        panda$core$Bit $tmp85 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 101 }));
        if ($tmp85.value) {
        {
            panda$core$String* $tmp87 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s86, self->payload);
            panda$core$String* $tmp89 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp87, &$s88);
            return $tmp89;
        }
        }
        else {
        panda$core$Bit $tmp90 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 104 }));
        if ($tmp90.value) {
        {
            panda$core$MutableString* $tmp92 = (panda$core$MutableString*) malloc(40);
            $tmp92->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp92->refCount.value = 1;
            panda$core$MutableString$init($tmp92);
            result91 = $tmp92;
            panda$core$Object* $tmp94 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp94) != NULL }).value) {
            {
                panda$core$Object* $tmp95 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$MutableString$append$panda$core$Object(result91, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp95)));
            }
            }
            panda$core$MutableString$append$panda$core$String(result91, &$s96);
            panda$core$Object* $tmp97 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp97) != NULL }).value) {
            {
                panda$core$Object* $tmp98 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$MutableString$append$panda$core$Object(result91, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp98)));
            }
            }
            panda$core$Object* $tmp99 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp99) != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$String(result91, &$s100);
                panda$core$Object* $tmp101 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$MutableString$append$panda$core$Object(result91, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp101)));
            }
            }
            panda$core$String* $tmp102 = panda$core$MutableString$convert$R$panda$core$String(result91);
            return $tmp102;
        }
        }
        else {
        panda$core$Bit $tmp103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 105 }));
        if ($tmp103.value) {
        {
            panda$core$MutableString* $tmp105 = (panda$core$MutableString*) malloc(40);
            $tmp105->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp105->refCount.value = 1;
            panda$core$MutableString$init($tmp105);
            result104 = $tmp105;
            panda$core$Object* $tmp107 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp108 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp107)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp108.value) {
            {
                panda$core$Object* $tmp109 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$MutableString$append$panda$core$Object(result104, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp109)));
            }
            }
            panda$core$MutableString$append$panda$core$String(result104, &$s110);
            panda$core$Object* $tmp111 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp112 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp111)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp112.value) {
            {
                panda$core$Object* $tmp113 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$MutableString$append$panda$core$Object(result104, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp113)));
            }
            }
            panda$core$Object* $tmp114 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$Bit $tmp115 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp114)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp115.value) {
            {
                panda$core$MutableString$append$panda$core$String(result104, &$s116);
                panda$core$Object* $tmp117 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$MutableString$append$panda$core$Object(result104, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp117)));
            }
            }
            panda$core$String* $tmp118 = panda$core$MutableString$convert$R$panda$core$String(result104);
            return $tmp118;
        }
        }
        else {
        panda$core$Bit $tmp119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 107 }));
        if ($tmp119.value) {
        {
            panda$core$MutableString* $tmp121 = (panda$core$MutableString*) malloc(40);
            $tmp121->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp121->refCount.value = 1;
            panda$core$Object* $tmp123 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp124 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp123));
            panda$core$MutableString$init$panda$core$String($tmp121, $tmp124);
            result120 = $tmp121;
            panda$core$MutableString$append$panda$core$String(result120, &$s125);
            separator126 = &$s127;
            panda$core$Int64 $tmp129 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp128, ((panda$core$Int64) { 1 }), $tmp129, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp131 = $tmp128.start.value;
            panda$core$Int64 i130 = { $tmp131 };
            int64_t $tmp133 = $tmp128.end.value;
            int64_t $tmp134 = $tmp128.step.value;
            bool $tmp135 = $tmp128.inclusive.value;
            bool $tmp142 = $tmp134 > 0;
            if ($tmp142) goto $l140; else goto $l141;
            $l140:;
            if ($tmp135) goto $l143; else goto $l144;
            $l143:;
            if ($tmp131 <= $tmp133) goto $l136; else goto $l138;
            $l144:;
            if ($tmp131 < $tmp133) goto $l136; else goto $l138;
            $l141:;
            if ($tmp135) goto $l145; else goto $l146;
            $l145:;
            if ($tmp131 >= $tmp133) goto $l136; else goto $l138;
            $l146:;
            if ($tmp131 > $tmp133) goto $l136; else goto $l138;
            $l136:;
            {
                panda$core$MutableString$append$panda$core$String(result120, separator126);
                panda$core$Object* $tmp148 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, i130);
                panda$core$MutableString$append$panda$core$Object(result120, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp148)));
                separator126 = &$s149;
            }
            $l139:;
            if ($tmp142) goto $l151; else goto $l152;
            $l151:;
            int64_t $tmp153 = $tmp133 - i130.value;
            if ($tmp135) goto $l154; else goto $l155;
            $l154:;
            if ($tmp153 >= $tmp134) goto $l150; else goto $l138;
            $l155:;
            if ($tmp153 > $tmp134) goto $l150; else goto $l138;
            $l152:;
            int64_t $tmp157 = i130.value - $tmp133;
            if ($tmp135) goto $l158; else goto $l159;
            $l158:;
            if ($tmp157 >= -$tmp134) goto $l150; else goto $l138;
            $l159:;
            if ($tmp157 > -$tmp134) goto $l150; else goto $l138;
            $l150:;
            i130.value += $tmp134;
            goto $l136;
            $l138:;
            panda$core$MutableString$append$panda$core$String(result120, &$s161);
            panda$core$String* $tmp162 = panda$core$MutableString$convert$R$panda$core$String(result120);
            return $tmp162;
        }
        }
        else {
        panda$core$Bit $tmp163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 106 }));
        if ($tmp163.value) {
        {
            panda$core$Int64 $tmp164 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp164, ((panda$core$Int64) { 1 }));
            if ($tmp165.value) {
            {
                panda$core$String* $tmp167 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(self->payload, &$s166);
                panda$core$Object* $tmp168 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp169 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp167, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp168)));
                return $tmp169;
            }
            }
            panda$core$String* $tmp171 = (($fn170) self->payload->$class->vtable[0])(self->payload);
            return $tmp171;
        }
        }
        else {
        panda$core$Bit $tmp172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 108 }));
        if ($tmp172.value) {
        {
            panda$core$Object* $tmp174 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s173, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp174)));
            panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp175, &$s176);
            panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp177, self->payload);
            panda$core$String* $tmp180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp178, &$s179);
            return $tmp180;
        }
        }
        else {
        panda$core$Bit $tmp181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 116 }));
        if ($tmp181.value) {
        {
            panda$core$String* $tmp183 = (($fn182) self->payload->$class->vtable[0])(self->payload);
            return $tmp183;
        }
        }
        else {
        panda$core$Bit $tmp184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 118 }));
        if ($tmp184.value) {
        {
            panda$core$Object* $tmp187 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp188 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s186, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp187)));
            panda$core$String* $tmp190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp188, &$s189);
            panda$core$Object* $tmp191 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp192 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp190, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp191)));
            panda$core$String* $tmp194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp192, &$s193);
            result185 = $tmp194;
            panda$core$Int64 $tmp195 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp195, ((panda$core$Int64) { 3 }));
            if ($tmp196.value) {
            {
                panda$core$Object* $tmp198 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$String* $tmp199 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s197, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp198)));
                panda$core$String* $tmp201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp199, &$s200);
                panda$core$String* $tmp202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result185, $tmp201);
                return $tmp202;
            }
            }
            return result185;
        }
        }
        else {
        panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 119 }));
        if ($tmp203.value) {
        {
            panda$core$Object* $tmp205 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp206 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s204, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp205)));
            panda$core$String* $tmp208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp206, &$s207);
            panda$core$Object* $tmp209 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp210 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp208, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp209)));
            panda$core$String* $tmp212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp210, &$s211);
            panda$core$Object* $tmp213 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp214 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp212, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp213)));
            panda$core$String* $tmp216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp214, &$s215);
            return $tmp216;
        }
        }
        else {
        panda$core$Bit $tmp217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 121 }));
        if ($tmp217.value) {
        {
            panda$core$Object* $tmp219 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp220 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s218, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp219)));
            panda$core$String* $tmp222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp220, &$s221);
            panda$core$Object* $tmp223 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp224 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp222, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp223)));
            panda$core$String* $tmp226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp224, &$s225);
            return $tmp226;
        }
        }
        else {
        panda$core$Bit $tmp227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 120 }));
        if ($tmp227.value) {
        {
            panda$core$Object* $tmp229 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp230 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s228, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp229)));
            panda$core$String* $tmp232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp230, &$s231);
            panda$core$Object* $tmp233 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp234 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp232, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp233)));
            panda$core$String* $tmp236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp234, &$s235);
            return $tmp236;
        }
        }
        else {
        panda$core$Bit $tmp237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 122 }));
        if ($tmp237.value) {
        {
            panda$core$Object* $tmp239 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp240 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s238, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp239)));
            panda$core$String* $tmp242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp240, &$s241);
            return $tmp242;
        }
        }
        else {
        panda$core$Bit $tmp243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 134 }));
        if ($tmp243.value) {
        {
            if (((panda$core$Bit) { self->payload != NULL }).value) {
            {
                panda$core$String* $tmp245 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s244, self->payload);
                panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp245, &$s246);
                return $tmp247;
            }
            }
            return &$s248;
        }
        }
        else {
        panda$core$Bit $tmp249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 135 }));
        if ($tmp249.value) {
        {
            if (((panda$core$Bit) { self->payload != NULL }).value) {
            {
                panda$core$String* $tmp251 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s250, self->payload);
                panda$core$String* $tmp253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp251, &$s252);
                return $tmp253;
            }
            }
            return &$s254;
        }
        }
        else {
        panda$core$Bit $tmp255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 136 }));
        if ($tmp255.value) {
        {
            panda$core$Int64 $tmp256 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp256, ((panda$core$Int64) { 1 }));
            if ($tmp257.value) {
            {
                panda$core$Object* $tmp259 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp260 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s258, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp259)));
                panda$core$String* $tmp262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp260, &$s261);
                return $tmp262;
            }
            }
            return &$s263;
        }
        }
        else {
        panda$core$Bit $tmp264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 126 }));
        if ($tmp264.value) {
        {
            panda$core$MutableString* $tmp266 = (panda$core$MutableString*) malloc(40);
            $tmp266->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp266->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp266, &$s268);
            result265 = $tmp266;
            {
                ITable* $tmp270 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp270->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp270 = $tmp270->next;
                }
                $fn272 $tmp271 = $tmp270->methods[0];
                panda$collections$Iterator* $tmp273 = $tmp271(((panda$collections$Iterable*) self->children));
                child$Iter269 = $tmp273;
                $l274:;
                ITable* $tmp276 = child$Iter269->$class->itable;
                while ($tmp276->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp276 = $tmp276->next;
                }
                $fn278 $tmp277 = $tmp276->methods[0];
                panda$core$Bit $tmp279 = $tmp277(child$Iter269);
                panda$core$Bit $tmp280 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp279);
                if (!$tmp280.value) goto $l275;
                {
                    ITable* $tmp282 = child$Iter269->$class->itable;
                    while ($tmp282->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp282 = $tmp282->next;
                    }
                    $fn284 $tmp283 = $tmp282->methods[1];
                    panda$core$Object* $tmp285 = $tmp283(child$Iter269);
                    child281 = ((org$pandalanguage$pandac$ASTNode*) $tmp285);
                    panda$core$String* $tmp287 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(child281);
                    c286 = $tmp287;
                    panda$core$Bit $tmp290 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(c286, &$s289);
                    bool $tmp288 = $tmp290.value;
                    if (!$tmp288) goto $l291;
                    panda$core$Bit $tmp293 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(c286, &$s292);
                    $tmp288 = $tmp293.value;
                    $l291:;
                    panda$core$Bit $tmp294 = { $tmp288 };
                    if ($tmp294.value) {
                    {
                        panda$core$String$Index $tmp296 = panda$core$String$start$R$panda$core$String$Index(c286);
                        panda$core$String$Index $tmp297 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(c286, $tmp296);
                        panda$core$String$Index $tmp298 = panda$core$String$end$R$panda$core$String$Index(c286);
                        panda$core$String$Index $tmp299 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(c286, $tmp298);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp295, ((panda$core$String$Index$nullable) { $tmp297, true }), ((panda$core$String$Index$nullable) { $tmp299, true }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp300 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(c286, $tmp295);
                        panda$core$MutableString$append$panda$core$String(result265, $tmp300);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$Object(result265, ((panda$core$Object*) child281));
                    }
                    }
                    panda$core$MutableString$append$panda$core$String(result265, &$s301);
                }
                goto $l274;
                $l275:;
            }
            panda$core$MutableString$append$panda$core$String(result265, &$s302);
            panda$core$String* $tmp303 = panda$core$MutableString$convert$R$panda$core$String(result265);
            return $tmp303;
        }
        }
        else {
        panda$core$Bit $tmp304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 109 }));
        if ($tmp304.value) {
        {
            panda$core$String* $tmp306 = (($fn305) self->payload->$class->vtable[0])(self->payload);
            return $tmp306;
        }
        }
        else {
        panda$core$Bit $tmp307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 110 }));
        if ($tmp307.value) {
        {
            panda$core$Object* $tmp308 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp310 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp308)), &$s309);
            return $tmp310;
        }
        }
        else {
        panda$core$Bit $tmp311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 154 }));
        if ($tmp311.value) {
        {
            panda$core$MutableString* $tmp313 = (panda$core$MutableString*) malloc(40);
            $tmp313->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp313->refCount.value = 1;
            panda$core$Object* $tmp315 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp316 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp315));
            panda$core$MutableString$init$panda$core$String($tmp313, $tmp316);
            result312 = $tmp313;
            panda$core$MutableString$append$panda$core$String(result312, &$s317);
            separator318 = &$s319;
            {
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp321, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                panda$collections$ImmutableArray* $tmp322 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(self->children, $tmp321);
                ITable* $tmp323 = ((panda$collections$Iterable*) $tmp322)->$class->itable;
                while ($tmp323->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp323 = $tmp323->next;
                }
                $fn325 $tmp324 = $tmp323->methods[0];
                panda$collections$Iterator* $tmp326 = $tmp324(((panda$collections$Iterable*) $tmp322));
                c$Iter320 = $tmp326;
                $l327:;
                ITable* $tmp329 = c$Iter320->$class->itable;
                while ($tmp329->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp329 = $tmp329->next;
                }
                $fn331 $tmp330 = $tmp329->methods[0];
                panda$core$Bit $tmp332 = $tmp330(c$Iter320);
                panda$core$Bit $tmp333 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp332);
                if (!$tmp333.value) goto $l328;
                {
                    ITable* $tmp335 = c$Iter320->$class->itable;
                    while ($tmp335->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp335 = $tmp335->next;
                    }
                    $fn337 $tmp336 = $tmp335->methods[1];
                    panda$core$Object* $tmp338 = $tmp336(c$Iter320);
                    c334 = ((org$pandalanguage$pandac$ASTNode*) $tmp338);
                    panda$core$MutableString$append$panda$core$String(result312, separator318);
                    panda$core$MutableString$append$panda$core$Object(result312, ((panda$core$Object*) c334));
                    separator318 = &$s339;
                }
                goto $l327;
                $l328:;
            }
            panda$core$MutableString$append$panda$core$String(result312, &$s340);
            panda$core$String* $tmp341 = panda$core$MutableString$convert$R$panda$core$String(result312);
            return $tmp341;
        }
        }
        else {
        panda$core$Bit $tmp342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 139 }));
        if ($tmp342.value) {
        {
            panda$core$MutableString* $tmp344 = (panda$core$MutableString*) malloc(40);
            $tmp344->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp344->refCount.value = 1;
            panda$core$MutableString$init($tmp344);
            result343 = $tmp344;
            separator346 = &$s347;
            {
                ITable* $tmp349 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp349->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp349 = $tmp349->next;
                }
                $fn351 $tmp350 = $tmp349->methods[0];
                panda$collections$Iterator* $tmp352 = $tmp350(((panda$collections$Iterable*) self->children));
                c$Iter348 = $tmp352;
                $l353:;
                ITable* $tmp355 = c$Iter348->$class->itable;
                while ($tmp355->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp355 = $tmp355->next;
                }
                $fn357 $tmp356 = $tmp355->methods[0];
                panda$core$Bit $tmp358 = $tmp356(c$Iter348);
                panda$core$Bit $tmp359 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp358);
                if (!$tmp359.value) goto $l354;
                {
                    ITable* $tmp361 = c$Iter348->$class->itable;
                    while ($tmp361->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp361 = $tmp361->next;
                    }
                    $fn363 $tmp362 = $tmp361->methods[1];
                    panda$core$Object* $tmp364 = $tmp362(c$Iter348);
                    c360 = ((org$pandalanguage$pandac$ASTNode*) $tmp364);
                    panda$core$MutableString$append$panda$core$String(result343, separator346);
                    panda$core$MutableString$append$panda$core$Object(result343, ((panda$core$Object*) c360));
                    separator346 = &$s365;
                }
                goto $l353;
                $l354:;
            }
            panda$core$String* $tmp366 = panda$core$MutableString$convert$R$panda$core$String(result343);
            return $tmp366;
        }
        }
        else {
        panda$core$Bit $tmp367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 143 }));
        if ($tmp367.value) {
        {
            panda$core$String* $tmp369 = (($fn368) self->payload->$class->vtable[0])(self->payload);
            return $tmp369;
        }
        }
        else {
        panda$core$Bit $tmp370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 144 }));
        if ($tmp370.value) {
        {
            panda$core$MutableString* $tmp372 = (panda$core$MutableString*) malloc(40);
            $tmp372->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp372->refCount.value = 1;
            panda$core$MutableString$init($tmp372);
            result371 = $tmp372;
            {
                ITable* $tmp375 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp375->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp375 = $tmp375->next;
                }
                $fn377 $tmp376 = $tmp375->methods[0];
                panda$collections$Iterator* $tmp378 = $tmp376(((panda$collections$Iterable*) self->children));
                c$Iter374 = $tmp378;
                $l379:;
                ITable* $tmp381 = c$Iter374->$class->itable;
                while ($tmp381->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp381 = $tmp381->next;
                }
                $fn383 $tmp382 = $tmp381->methods[0];
                panda$core$Bit $tmp384 = $tmp382(c$Iter374);
                panda$core$Bit $tmp385 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp384);
                if (!$tmp385.value) goto $l380;
                {
                    ITable* $tmp387 = c$Iter374->$class->itable;
                    while ($tmp387->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp387 = $tmp387->next;
                    }
                    $fn389 $tmp388 = $tmp387->methods[1];
                    panda$core$Object* $tmp390 = $tmp388(c$Iter374);
                    c386 = ((org$pandalanguage$pandac$ASTNode*) $tmp390);
                    panda$core$MutableString$append$panda$core$Object(result371, ((panda$core$Object*) c386));
                    panda$core$MutableString$append$panda$core$String(result371, &$s391);
                }
                goto $l379;
                $l380:;
            }
            panda$core$String* $tmp392 = panda$core$MutableString$convert$R$panda$core$String(result371);
            return $tmp392;
        }
        }
        else {
        panda$core$Bit $tmp393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 129 }));
        if ($tmp393.value) {
        {
            panda$core$Int64 $tmp394 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp394, ((panda$core$Int64) { 1 }));
            if ($tmp395.value) {
            {
                panda$core$Object* $tmp396 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp397 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp396));
                return $tmp397;
            }
            }
            panda$core$Object* $tmp399 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp400 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s398, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp399)));
            panda$core$String* $tmp402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp400, &$s401);
            panda$core$Object* $tmp403 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp404 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp402, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp403)));
            panda$core$String* $tmp406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp404, &$s405);
            return $tmp406;
        }
        }
        else {
        panda$core$Bit $tmp407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 130 }));
        if ($tmp407.value) {
        {
            panda$core$MutableString* $tmp409 = (panda$core$MutableString*) malloc(40);
            $tmp409->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp409->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp409, &$s411);
            result408 = $tmp409;
            separator412 = &$s413;
            {
                ITable* $tmp415 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp415->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp415 = $tmp415->next;
                }
                $fn417 $tmp416 = $tmp415->methods[0];
                panda$collections$Iterator* $tmp418 = $tmp416(((panda$collections$Iterable*) self->children));
                c$Iter414 = $tmp418;
                $l419:;
                ITable* $tmp421 = c$Iter414->$class->itable;
                while ($tmp421->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp421 = $tmp421->next;
                }
                $fn423 $tmp422 = $tmp421->methods[0];
                panda$core$Bit $tmp424 = $tmp422(c$Iter414);
                panda$core$Bit $tmp425 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp424);
                if (!$tmp425.value) goto $l420;
                {
                    ITable* $tmp427 = c$Iter414->$class->itable;
                    while ($tmp427->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp427 = $tmp427->next;
                    }
                    $fn429 $tmp428 = $tmp427->methods[1];
                    panda$core$Object* $tmp430 = $tmp428(c$Iter414);
                    c426 = ((org$pandalanguage$pandac$ASTNode*) $tmp430);
                    panda$core$MutableString$append$panda$core$String(result408, separator412);
                    panda$core$MutableString$append$panda$core$Object(result408, ((panda$core$Object*) c426));
                    separator412 = &$s431;
                }
                goto $l419;
                $l420:;
            }
            panda$core$String* $tmp432 = panda$core$MutableString$convert$R$panda$core$String(result408);
            return $tmp432;
        }
        }
        else {
        panda$core$Bit $tmp433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 131 }));
        if ($tmp433.value) {
        {
            panda$core$MutableString* $tmp435 = (panda$core$MutableString*) malloc(40);
            $tmp435->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp435->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp435, &$s437);
            result434 = $tmp435;
            separator438 = &$s439;
            {
                ITable* $tmp441 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp441->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp441 = $tmp441->next;
                }
                $fn443 $tmp442 = $tmp441->methods[0];
                panda$collections$Iterator* $tmp444 = $tmp442(((panda$collections$Iterable*) self->children));
                c$Iter440 = $tmp444;
                $l445:;
                ITable* $tmp447 = c$Iter440->$class->itable;
                while ($tmp447->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp447 = $tmp447->next;
                }
                $fn449 $tmp448 = $tmp447->methods[0];
                panda$core$Bit $tmp450 = $tmp448(c$Iter440);
                panda$core$Bit $tmp451 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp450);
                if (!$tmp451.value) goto $l446;
                {
                    ITable* $tmp453 = c$Iter440->$class->itable;
                    while ($tmp453->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp453 = $tmp453->next;
                    }
                    $fn455 $tmp454 = $tmp453->methods[1];
                    panda$core$Object* $tmp456 = $tmp454(c$Iter440);
                    c452 = ((org$pandalanguage$pandac$ASTNode*) $tmp456);
                    panda$core$MutableString$append$panda$core$String(result434, separator438);
                    panda$core$MutableString$append$panda$core$Object(result434, ((panda$core$Object*) c452));
                    separator438 = &$s457;
                }
                goto $l445;
                $l446:;
            }
            panda$core$String* $tmp458 = panda$core$MutableString$convert$R$panda$core$String(result434);
            return $tmp458;
        }
        }
        else {
        panda$core$Bit $tmp459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 133 }));
        if ($tmp459.value) {
        {
            panda$core$MutableString* $tmp461 = (panda$core$MutableString*) malloc(40);
            $tmp461->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp461->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp461, &$s463);
            result460 = $tmp461;
            separator464 = &$s465;
            {
                ITable* $tmp467 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp467->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp467 = $tmp467->next;
                }
                $fn469 $tmp468 = $tmp467->methods[0];
                panda$collections$Iterator* $tmp470 = $tmp468(((panda$collections$Iterable*) self->children));
                c$Iter466 = $tmp470;
                $l471:;
                ITable* $tmp473 = c$Iter466->$class->itable;
                while ($tmp473->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp473 = $tmp473->next;
                }
                $fn475 $tmp474 = $tmp473->methods[0];
                panda$core$Bit $tmp476 = $tmp474(c$Iter466);
                panda$core$Bit $tmp477 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp476);
                if (!$tmp477.value) goto $l472;
                {
                    ITable* $tmp479 = c$Iter466->$class->itable;
                    while ($tmp479->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp479 = $tmp479->next;
                    }
                    $fn481 $tmp480 = $tmp479->methods[1];
                    panda$core$Object* $tmp482 = $tmp480(c$Iter466);
                    c478 = ((org$pandalanguage$pandac$ASTNode*) $tmp482);
                    panda$core$MutableString$append$panda$core$String(result460, separator464);
                    panda$core$MutableString$append$panda$core$Object(result460, ((panda$core$Object*) c478));
                    separator464 = &$s483;
                }
                goto $l471;
                $l472:;
            }
            panda$core$String* $tmp484 = panda$core$MutableString$convert$R$panda$core$String(result460);
            return $tmp484;
        }
        }
        else {
        panda$core$Bit $tmp485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 132 }));
        if ($tmp485.value) {
        {
            panda$core$MutableString* $tmp487 = (panda$core$MutableString*) malloc(40);
            $tmp487->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp487->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp487, &$s489);
            result486 = $tmp487;
            separator490 = &$s491;
            {
                ITable* $tmp493 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp493->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp493 = $tmp493->next;
                }
                $fn495 $tmp494 = $tmp493->methods[0];
                panda$collections$Iterator* $tmp496 = $tmp494(((panda$collections$Iterable*) self->children));
                c$Iter492 = $tmp496;
                $l497:;
                ITable* $tmp499 = c$Iter492->$class->itable;
                while ($tmp499->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp499 = $tmp499->next;
                }
                $fn501 $tmp500 = $tmp499->methods[0];
                panda$core$Bit $tmp502 = $tmp500(c$Iter492);
                panda$core$Bit $tmp503 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp502);
                if (!$tmp503.value) goto $l498;
                {
                    ITable* $tmp505 = c$Iter492->$class->itable;
                    while ($tmp505->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp505 = $tmp505->next;
                    }
                    $fn507 $tmp506 = $tmp505->methods[1];
                    panda$core$Object* $tmp508 = $tmp506(c$Iter492);
                    c504 = ((org$pandalanguage$pandac$ASTNode*) $tmp508);
                    panda$core$MutableString$append$panda$core$String(result486, separator490);
                    panda$core$MutableString$append$panda$core$Object(result486, ((panda$core$Object*) c504));
                    separator490 = &$s509;
                }
                goto $l497;
                $l498:;
            }
            panda$core$String* $tmp510 = panda$core$MutableString$convert$R$panda$core$String(result486);
            return $tmp510;
        }
        }
        else {
        panda$core$Bit $tmp511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 148 }));
        if ($tmp511.value) {
        {
            panda$core$Object* $tmp513 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp514 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s512, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp513)));
            panda$core$String* $tmp516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp514, &$s515);
            panda$core$Object* $tmp517 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp518 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp516, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp517)));
            panda$core$String* $tmp520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp518, &$s519);
            panda$core$Object* $tmp521 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp522 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp520, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp521)));
            panda$core$String* $tmp524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp522, &$s523);
            return $tmp524;
        }
        }
        else {
        panda$core$Bit $tmp525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 149 }));
        if ($tmp525.value) {
        {
            panda$core$String* $tmp527 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s526, self->payload);
            panda$core$String* $tmp529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp527, &$s528);
            panda$core$Object* $tmp530 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp531 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp529, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp530)));
            panda$core$String* $tmp533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp531, &$s532);
            return $tmp533;
        }
        }
        else {
        panda$core$Bit $tmp534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 150 }));
        if ($tmp534.value) {
        {
            panda$core$MutableString* $tmp536 = (panda$core$MutableString*) malloc(40);
            $tmp536->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp536->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp536, &$s538);
            result535 = $tmp536;
            separator539 = &$s540;
            {
                ITable* $tmp542 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp542->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp542 = $tmp542->next;
                }
                $fn544 $tmp543 = $tmp542->methods[0];
                panda$collections$Iterator* $tmp545 = $tmp543(((panda$collections$Iterable*) self->children));
                c$Iter541 = $tmp545;
                $l546:;
                ITable* $tmp548 = c$Iter541->$class->itable;
                while ($tmp548->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp548 = $tmp548->next;
                }
                $fn550 $tmp549 = $tmp548->methods[0];
                panda$core$Bit $tmp551 = $tmp549(c$Iter541);
                panda$core$Bit $tmp552 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp551);
                if (!$tmp552.value) goto $l547;
                {
                    ITable* $tmp554 = c$Iter541->$class->itable;
                    while ($tmp554->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp554 = $tmp554->next;
                    }
                    $fn556 $tmp555 = $tmp554->methods[1];
                    panda$core$Object* $tmp557 = $tmp555(c$Iter541);
                    c553 = ((org$pandalanguage$pandac$ASTNode*) $tmp557);
                    panda$core$MutableString$append$panda$core$String(result535, separator539);
                    panda$core$MutableString$append$panda$core$Object(result535, ((panda$core$Object*) c553));
                    separator539 = &$s558;
                }
                goto $l546;
                $l547:;
            }
            panda$core$MutableString$append$panda$core$String(result535, &$s559);
            panda$core$String* $tmp560 = panda$core$MutableString$convert$R$panda$core$String(result535);
            return $tmp560;
        }
        }
        else {
        panda$core$Bit $tmp561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 147 }));
        if ($tmp561.value) {
        {
            panda$core$Object* $tmp563 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp564 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s562, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp563)));
            panda$core$String* $tmp566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp564, &$s565);
            panda$core$Object* $tmp567 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp568 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp566, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp567)));
            panda$core$String* $tmp570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp568, &$s569);
            panda$core$Object* $tmp571 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp572 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp570, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp571)));
            panda$core$String* $tmp574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp572, &$s573);
            panda$core$Object* $tmp575 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp576 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp574, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp575)));
            panda$core$String* $tmp578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp576, &$s577);
            panda$core$Object* $tmp579 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp580 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp578, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp579)));
            panda$core$String* $tmp582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp580, &$s581);
            return $tmp582;
        }
        }
        else {
        panda$core$Bit $tmp583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 145 }));
        if ($tmp583.value) {
        {
            panda$core$Object* $tmp585 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp586 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s584, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp585)));
            panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp586, &$s587);
            panda$core$Object* $tmp589 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp590 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp588, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp589)));
            panda$core$String* $tmp592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp590, &$s591);
            panda$core$String* $tmp593 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp592, self->payload);
            panda$core$String* $tmp595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp593, &$s594);
            panda$core$Object* $tmp596 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp597 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp595, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp596)));
            panda$core$String* $tmp599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp597, &$s598);
            panda$core$Object* $tmp601 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp602 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s600, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp601)));
            panda$core$String* $tmp604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp602, &$s603);
            panda$core$Object* $tmp605 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp606 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp604, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp605)));
            panda$core$String* $tmp608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp606, &$s607);
            panda$core$Object* $tmp609 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$String* $tmp610 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp608, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp609)));
            panda$core$String* $tmp612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp610, &$s611);
            panda$core$String* $tmp613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp599, $tmp612);
            return $tmp613;
        }
        }
        else {
        panda$core$Bit $tmp614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 146 }));
        if ($tmp614.value) {
        {
            panda$core$Object* $tmp616 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp617 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s615, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp616)));
            panda$core$String* $tmp619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp617, &$s618);
            panda$core$Object* $tmp620 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp621 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp619, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp620)));
            panda$core$String* $tmp623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp621, &$s622);
            panda$core$String* $tmp624 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp623, self->payload);
            panda$core$String* $tmp626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp624, &$s625);
            panda$core$Object* $tmp627 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp628 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp626, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp627)));
            panda$core$String* $tmp630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp628, &$s629);
            panda$core$Object* $tmp632 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp633 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s631, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp632)));
            panda$core$String* $tmp635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp633, &$s634);
            panda$core$Object* $tmp636 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp637 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp635, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp636)));
            panda$core$String* $tmp639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp637, &$s638);
            panda$core$Object* $tmp640 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$String* $tmp641 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp639, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp640)));
            panda$core$String* $tmp643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp641, &$s642);
            panda$core$String* $tmp644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp630, $tmp643);
            return $tmp644;
        }
        }
        else {
        panda$core$Bit $tmp645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 140 }));
        if ($tmp645.value) {
        {
            panda$core$MutableString* $tmp647 = (panda$core$MutableString*) malloc(40);
            $tmp647->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp647->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp647, &$s649);
            result646 = $tmp647;
            {
                ITable* $tmp651 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp651->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp651 = $tmp651->next;
                }
                $fn653 $tmp652 = $tmp651->methods[0];
                panda$collections$Iterator* $tmp654 = $tmp652(((panda$collections$Iterable*) self->children));
                c$Iter650 = $tmp654;
                $l655:;
                ITable* $tmp657 = c$Iter650->$class->itable;
                while ($tmp657->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp657 = $tmp657->next;
                }
                $fn659 $tmp658 = $tmp657->methods[0];
                panda$core$Bit $tmp660 = $tmp658(c$Iter650);
                panda$core$Bit $tmp661 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp660);
                if (!$tmp661.value) goto $l656;
                {
                    ITable* $tmp663 = c$Iter650->$class->itable;
                    while ($tmp663->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp663 = $tmp663->next;
                    }
                    $fn665 $tmp664 = $tmp663->methods[1];
                    panda$core$Object* $tmp666 = $tmp664(c$Iter650);
                    c662 = ((org$pandalanguage$pandac$ASTNode*) $tmp666);
                    panda$core$MutableString$append$panda$core$Object(result646, ((panda$core$Object*) c662));
                    panda$core$MutableString$append$panda$core$String(result646, &$s667);
                }
                goto $l655;
                $l656:;
            }
            panda$core$MutableString$append$panda$core$String(result646, &$s668);
            panda$core$String* $tmp669 = panda$core$MutableString$convert$R$panda$core$String(result646);
            return $tmp669;
        }
        }
        else {
        panda$core$Bit $tmp670 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 142 }));
        if ($tmp670.value) {
        {
            panda$core$MutableString* $tmp672 = (panda$core$MutableString*) malloc(40);
            $tmp672->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp672->refCount.value = 1;
            panda$core$MutableString$init($tmp672);
            result671 = $tmp672;
            panda$core$Object* $tmp674 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$append$panda$core$Object(result671, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp674)));
            panda$core$Object* $tmp675 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$MutableString$append$panda$core$Object(result671, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp675)));
            panda$core$String* $tmp677 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s676, self->payload);
            panda$core$String* $tmp679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp677, &$s678);
            panda$core$MutableString$append$panda$core$String(result671, $tmp679);
            panda$core$Object* $tmp680 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$MutableString$append$panda$core$Object(result671, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp680)));
            panda$core$Object* $tmp681 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$Bit $tmp682 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp681)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp682.value) {
            {
                panda$core$MutableString$append$panda$core$String(result671, &$s683);
                panda$core$Object* $tmp684 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
                panda$core$MutableString$append$panda$core$Object(result671, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp684)));
            }
            }
            panda$core$Object* $tmp685 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$Bit $tmp686 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp685)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp686.value) {
            {
                panda$core$MutableString$append$panda$core$String(result671, &$s687);
                panda$core$Object* $tmp688 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
                panda$core$MutableString$append$panda$core$Object(result671, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp688)));
                panda$core$MutableString$append$panda$core$String(result671, &$s689);
            }
            }
            panda$core$MutableString$append$panda$core$String(result671, &$s690);
            panda$core$Object* $tmp691 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$MutableString$append$panda$core$Object(result671, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp691)));
            panda$core$String* $tmp692 = panda$core$MutableString$convert$R$panda$core$String(result671);
            return $tmp692;
        }
        }
        else {
        panda$core$Bit $tmp693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 151 }));
        if ($tmp693.value) {
        {
            panda$core$MutableString* $tmp695 = (panda$core$MutableString*) malloc(40);
            $tmp695->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp695->refCount.value = 1;
            panda$core$MutableString$init($tmp695);
            result694 = $tmp695;
            panda$core$Object* $tmp697 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$append$panda$core$Object(result694, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp697)));
            panda$core$Object* $tmp698 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$MutableString$append$panda$core$Object(result694, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp698)));
            panda$core$String* $tmp700 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s699, self->payload);
            panda$core$String* $tmp702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp700, &$s701);
            panda$core$MutableString$append$panda$core$String(result694, $tmp702);
            panda$core$Object* $tmp703 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$MutableString$append$panda$core$Object(result694, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp703)));
            panda$core$MutableString$append$panda$core$String(result694, &$s704);
            panda$core$Object* $tmp705 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$MutableString$append$panda$core$Object(result694, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp705)));
            panda$core$Object* $tmp706 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$MutableString$append$panda$core$Object(result694, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp706)));
            panda$core$String* $tmp707 = panda$core$MutableString$convert$R$panda$core$String(result694);
            return $tmp707;
        }
        }
        else {
        panda$core$Bit $tmp708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 152 }));
        if ($tmp708.value) {
        {
            panda$core$MutableString* $tmp710 = (panda$core$MutableString*) malloc(40);
            $tmp710->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp710->refCount.value = 1;
            panda$core$MutableString$init($tmp710);
            result709 = $tmp710;
            {
                ITable* $tmp713 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp713->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp713 = $tmp713->next;
                }
                $fn715 $tmp714 = $tmp713->methods[0];
                panda$collections$Iterator* $tmp716 = $tmp714(((panda$collections$Iterable*) self->children));
                c$Iter712 = $tmp716;
                $l717:;
                ITable* $tmp719 = c$Iter712->$class->itable;
                while ($tmp719->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp719 = $tmp719->next;
                }
                $fn721 $tmp720 = $tmp719->methods[0];
                panda$core$Bit $tmp722 = $tmp720(c$Iter712);
                panda$core$Bit $tmp723 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp722);
                if (!$tmp723.value) goto $l718;
                {
                    ITable* $tmp725 = c$Iter712->$class->itable;
                    while ($tmp725->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp725 = $tmp725->next;
                    }
                    $fn727 $tmp726 = $tmp725->methods[1];
                    panda$core$Object* $tmp728 = $tmp726(c$Iter712);
                    c724 = ((org$pandalanguage$pandac$ASTNode*) $tmp728);
                    panda$core$MutableString$append$panda$core$Object(result709, ((panda$core$Object*) c724));
                    panda$core$MutableString$append$panda$core$String(result709, &$s729);
                }
                goto $l717;
                $l718:;
            }
            panda$core$String* $tmp730 = panda$core$MutableString$convert$R$panda$core$String(result709);
            return $tmp730;
        }
        }
        else {
        panda$core$Bit $tmp731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 114 }));
        if ($tmp731.value) {
        {
            return &$s732;
        }
        }
        else {
        panda$core$Bit $tmp733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 115 }));
        if ($tmp733.value) {
        {
            return &$s734;
        }
        }
        else {
        panda$core$Bit $tmp735 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382332, ((panda$core$Int64) { 138 }));
        if ($tmp735.value) {
        {
            return &$s736;
        }
        }
        else {
        {
            panda$core$String* $tmp738 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s737, ((panda$core$Object*) wrap_panda$core$Int64(self->kind)));
            panda$core$String* $tmp740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp738, &$s739);
            return $tmp740;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
}

