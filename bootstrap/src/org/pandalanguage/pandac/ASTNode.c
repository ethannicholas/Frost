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
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"


org$pandalanguage$pandac$ASTNode$class_type org$pandalanguage$pandac$ASTNode$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String, panda$core$Object$cleanup} };

typedef panda$core$String* (*$fn59)(panda$core$Object*);
typedef panda$core$String* (*$fn61)(panda$core$Object*);
typedef panda$core$String* (*$fn64)(panda$core$Object*);
typedef panda$core$String* (*$fn151)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn257)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn263)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn269)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn289)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn307)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn313)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn319)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn332)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn338)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn344)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn348)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn356)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn362)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn368)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn394)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn400)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn406)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn419)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn425)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn431)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn444)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn450)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn456)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn469)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn475)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn481)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn519)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn525)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn531)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn630)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn636)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn642)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn693)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn699)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn705)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6F\x70\x65\x72\x61\x74\x6F\x72\x3A", 10, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x63\x6B\x61\x67\x65\x20", 8, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x73\x65\x73\x20", 5, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E\x2E", 3, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E", 2, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20", 3, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x6C\x73\x65\x20", 6, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x72\x20", 4, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20", 4, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20", 6, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x6F\x20", 3, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x68\x69\x6C\x65\x20", 7, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x6F\x6F\x70\x20", 5, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6B\x20", 6, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6B", 5, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 9, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x74\x69\x6E\x75\x65", 8, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E", 6, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x0A", 2, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x3D\x20", 4, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x72\x20", 4, NULL };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x20", 4, NULL };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x72\x6F\x70\x65\x72\x74\x79\x20", 9, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, NULL };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x65\x74\x68\x6F\x64\x20", 7, NULL };
static panda$core$String $s571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, NULL };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6E\x63\x74\x69\x6F\x6E\x20", 9, NULL };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, NULL };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x0A", 2, NULL };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, NULL };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20", 6, NULL };
static panda$core$String $s656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20", 3, NULL };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, NULL };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20", 6, NULL };
static panda$core$String $s680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, NULL };
static panda$core$String $s709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4, NULL };
static panda$core$String $s710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, NULL };
static panda$core$String $s711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x41\x53\x54\x4E\x6F\x64\x65\x3A", 9, NULL };
static panda$core$String $s714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };

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
    panda$core$Range$LTpanda$core$Int64$GT $tmp118;
    panda$core$String* result170;
    panda$core$MutableString* result250;
    panda$collections$Iterator* child$Iter254;
    org$pandalanguage$pandac$ASTNode* child266;
    panda$core$String* c271;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp280;
    panda$core$MutableString* result294;
    panda$core$String* separator300;
    panda$collections$Iterator* c$Iter302;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp303;
    org$pandalanguage$pandac$ASTNode* c316;
    panda$core$MutableString* result324;
    panda$core$String* separator327;
    panda$collections$Iterator* c$Iter329;
    org$pandalanguage$pandac$ASTNode* c341;
    panda$core$MutableString* result350;
    panda$collections$Iterator* c$Iter353;
    org$pandalanguage$pandac$ASTNode* c365;
    panda$core$MutableString* result385;
    panda$core$String* separator389;
    panda$collections$Iterator* c$Iter391;
    org$pandalanguage$pandac$ASTNode* c403;
    panda$core$MutableString* result410;
    panda$core$String* separator414;
    panda$collections$Iterator* c$Iter416;
    org$pandalanguage$pandac$ASTNode* c428;
    panda$core$MutableString* result435;
    panda$core$String* separator439;
    panda$collections$Iterator* c$Iter441;
    org$pandalanguage$pandac$ASTNode* c453;
    panda$core$MutableString* result460;
    panda$core$String* separator464;
    panda$collections$Iterator* c$Iter466;
    org$pandalanguage$pandac$ASTNode* c478;
    panda$core$MutableString* result510;
    panda$core$String* separator514;
    panda$collections$Iterator* c$Iter516;
    org$pandalanguage$pandac$ASTNode* c528;
    panda$core$MutableString* result623;
    panda$collections$Iterator* c$Iter627;
    org$pandalanguage$pandac$ASTNode* c639;
    panda$core$MutableString* result649;
    panda$core$MutableString* result673;
    panda$core$MutableString* result687;
    panda$collections$Iterator* c$Iter690;
    org$pandalanguage$pandac$ASTNode* c702;
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
            panda$core$String* $tmp90 = panda$core$MutableString$finish$R$panda$core$String(result79);
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
            panda$core$String* $tmp107 = panda$core$MutableString$finish$R$panda$core$String(result93);
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
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp118, ((panda$core$Int64) { 1 }), $tmp119, ((panda$core$Bit) { false }));
            int64_t $tmp121 = $tmp118.min.value;
            panda$core$Int64 i120 = { $tmp121 };
            int64_t $tmp123 = $tmp118.max.value;
            bool $tmp124 = $tmp118.inclusive.value;
            if ($tmp124) goto $l131; else goto $l132;
            $l131:;
            if ($tmp121 <= $tmp123) goto $l125; else goto $l127;
            $l132:;
            if ($tmp121 < $tmp123) goto $l125; else goto $l127;
            $l125:;
            {
                panda$core$MutableString$append$panda$core$String(result110, separator116);
                panda$core$Object* $tmp133 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, i120);
                panda$core$MutableString$append$panda$core$Object(result110, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp133)));
                separator116 = &$s134;
            }
            $l128:;
            int64_t $tmp136 = $tmp123 - i120.value;
            if ($tmp124) goto $l137; else goto $l138;
            $l137:;
            if ($tmp136 >= 1) goto $l135; else goto $l127;
            $l138:;
            if ($tmp136 > 1) goto $l135; else goto $l127;
            $l135:;
            i120.value += 1;
            goto $l125;
            $l127:;
            panda$core$MutableString$append$panda$core$String(result110, &$s141);
            panda$core$String* $tmp142 = panda$core$MutableString$finish$R$panda$core$String(result110);
            return $tmp142;
        }
        break;
        case 106:
        {
            panda$core$Int64 $tmp143 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp143, ((panda$core$Int64) { 1 }));
            if ($tmp144.value) {
            {
                panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(self->payload, &$s145);
                panda$core$Object* $tmp147 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp148 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp146, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp147)));
                return $tmp148;
            }
            }
            panda$core$Int64 $tmp149 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp149, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp150.value);
            panda$core$String* $tmp152 = (($fn151) self->payload->$class->vtable[0])(self->payload);
            return $tmp152;
        }
        break;
        case 108:
        {
            panda$core$Int64 $tmp153 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp153, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp154.value);
            panda$core$Object* $tmp156 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp157 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s155, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp156)));
            panda$core$String* $tmp159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp157, &$s158);
            panda$core$String* $tmp160 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp159, self->payload);
            panda$core$String* $tmp162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp160, &$s161);
            return $tmp162;
        }
        break;
        case 118:
        {
            panda$core$Int64 $tmp164 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp164, ((panda$core$Int64) { 2 }));
            bool $tmp163 = $tmp165.value;
            if ($tmp163) goto $l166;
            panda$core$Int64 $tmp167 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp167, ((panda$core$Int64) { 3 }));
            $tmp163 = $tmp168.value;
            $l166:;
            panda$core$Bit $tmp169 = { $tmp163 };
            PANDA_ASSERT($tmp169.value);
            panda$core$Object* $tmp172 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp173 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s171, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp172)));
            panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp173, &$s174);
            panda$core$Object* $tmp176 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp175, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp176)));
            panda$core$String* $tmp179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp177, &$s178);
            result170 = $tmp179;
            panda$core$Int64 $tmp180 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp180, ((panda$core$Int64) { 3 }));
            if ($tmp181.value) {
            {
                panda$core$Object* $tmp183 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$String* $tmp184 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s182, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp183)));
                panda$core$String* $tmp186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp184, &$s185);
                panda$core$String* $tmp187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result170, $tmp186);
                return $tmp187;
            }
            }
            return result170;
        }
        break;
        case 119:
        {
            panda$core$Int64 $tmp188 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp188, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp189.value);
            panda$core$Object* $tmp191 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp192 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s190, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp191)));
            panda$core$String* $tmp194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp192, &$s193);
            panda$core$Object* $tmp195 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp194, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp195)));
            panda$core$String* $tmp198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp196, &$s197);
            panda$core$Object* $tmp199 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp200 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp198, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp199)));
            panda$core$String* $tmp202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp200, &$s201);
            return $tmp202;
        }
        break;
        case 121:
        {
            panda$core$Int64 $tmp203 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp203, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp204.value);
            panda$core$Object* $tmp206 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp207 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s205, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp206)));
            panda$core$String* $tmp209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp207, &$s208);
            panda$core$Object* $tmp210 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp211 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp209, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp210)));
            panda$core$String* $tmp213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp211, &$s212);
            return $tmp213;
        }
        break;
        case 120:
        {
            panda$core$Int64 $tmp214 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp214, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp215.value);
            panda$core$Object* $tmp217 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp218 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s216, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp217)));
            panda$core$String* $tmp220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp218, &$s219);
            panda$core$Object* $tmp221 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp222 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp220, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp221)));
            panda$core$String* $tmp224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp222, &$s223);
            return $tmp224;
        }
        break;
        case 122:
        {
            panda$core$Int64 $tmp225 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp225, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp226.value);
            panda$core$Object* $tmp228 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp229 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s227, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp228)));
            panda$core$String* $tmp231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp229, &$s230);
            return $tmp231;
        }
        break;
        case 134:
        {
            if (((panda$core$Bit) { self->payload != NULL }).value) {
            {
                panda$core$String* $tmp233 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s232, self->payload);
                panda$core$String* $tmp235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp233, &$s234);
                return $tmp235;
            }
            }
            return &$s236;
        }
        break;
        case 135:
        {
            if (((panda$core$Bit) { self->payload != NULL }).value) {
            {
                panda$core$String* $tmp238 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s237, self->payload);
                panda$core$String* $tmp240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp238, &$s239);
                return $tmp240;
            }
            }
            return &$s241;
        }
        break;
        case 136:
        {
            panda$core$Int64 $tmp242 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp242, ((panda$core$Int64) { 1 }));
            if ($tmp243.value) {
            {
                panda$core$Object* $tmp245 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp246 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s244, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp245)));
                panda$core$String* $tmp248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp246, &$s247);
                return $tmp248;
            }
            }
            return &$s249;
        }
        break;
        case 126:
        {
            panda$core$MutableString* $tmp251 = (panda$core$MutableString*) malloc(40);
            $tmp251->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp251->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp251, &$s253);
            result250 = $tmp251;
            {
                ITable* $tmp255 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp255->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp255 = $tmp255->next;
                }
                $fn257 $tmp256 = $tmp255->methods[0];
                panda$collections$Iterator* $tmp258 = $tmp256(((panda$collections$Iterable*) self->children));
                child$Iter254 = $tmp258;
                $l259:;
                ITable* $tmp261 = child$Iter254->$class->itable;
                while ($tmp261->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp261 = $tmp261->next;
                }
                $fn263 $tmp262 = $tmp261->methods[0];
                panda$core$Bit $tmp264 = $tmp262(child$Iter254);
                panda$core$Bit $tmp265 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp264);
                if (!$tmp265.value) goto $l260;
                {
                    ITable* $tmp267 = child$Iter254->$class->itable;
                    while ($tmp267->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp267 = $tmp267->next;
                    }
                    $fn269 $tmp268 = $tmp267->methods[1];
                    panda$core$Object* $tmp270 = $tmp268(child$Iter254);
                    child266 = ((org$pandalanguage$pandac$ASTNode*) $tmp270);
                    panda$core$String* $tmp272 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(child266);
                    c271 = $tmp272;
                    panda$core$Bit $tmp275 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(c271, &$s274);
                    bool $tmp273 = $tmp275.value;
                    if (!$tmp273) goto $l276;
                    panda$core$Bit $tmp278 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(c271, &$s277);
                    $tmp273 = $tmp278.value;
                    $l276:;
                    panda$core$Bit $tmp279 = { $tmp273 };
                    if ($tmp279.value) {
                    {
                        panda$core$String$Index $tmp281 = panda$core$String$start$R$panda$core$String$Index(c271);
                        panda$core$String$Index $tmp282 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(c271, $tmp281);
                        panda$core$String$Index $tmp283 = panda$core$String$end$R$panda$core$String$Index(c271);
                        panda$core$String$Index $tmp284 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(c271, $tmp283);
                        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp280, $tmp282, $tmp284, ((panda$core$Bit) { false }));
                        panda$core$String* $tmp285 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(c271, $tmp280);
                        panda$core$MutableString$append$panda$core$String(result250, $tmp285);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$Object(result250, ((panda$core$Object*) child266));
                    }
                    }
                    panda$core$MutableString$append$panda$core$String(result250, &$s286);
                }
                goto $l259;
                $l260:;
            }
            panda$core$MutableString$append$panda$core$String(result250, &$s287);
            panda$core$String* $tmp288 = panda$core$MutableString$finish$R$panda$core$String(result250);
            return $tmp288;
        }
        break;
        case 109:
        {
            panda$core$String* $tmp290 = (($fn289) self->payload->$class->vtable[0])(self->payload);
            return $tmp290;
        }
        break;
        case 110:
        {
            panda$core$Object* $tmp291 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp293 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp291)), &$s292);
            return $tmp293;
        }
        break;
        case 154:
        {
            panda$core$MutableString* $tmp295 = (panda$core$MutableString*) malloc(40);
            $tmp295->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp295->refCount.value = 1;
            panda$core$Object* $tmp297 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp298 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp297));
            panda$core$MutableString$init$panda$core$String($tmp295, $tmp298);
            result294 = $tmp295;
            panda$core$MutableString$append$panda$core$String(result294, &$s299);
            separator300 = &$s301;
            {
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp303, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$collections$ImmutableArray* $tmp304 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(self->children, $tmp303);
                ITable* $tmp305 = ((panda$collections$Iterable*) $tmp304)->$class->itable;
                while ($tmp305->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp305 = $tmp305->next;
                }
                $fn307 $tmp306 = $tmp305->methods[0];
                panda$collections$Iterator* $tmp308 = $tmp306(((panda$collections$Iterable*) $tmp304));
                c$Iter302 = $tmp308;
                $l309:;
                ITable* $tmp311 = c$Iter302->$class->itable;
                while ($tmp311->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp311 = $tmp311->next;
                }
                $fn313 $tmp312 = $tmp311->methods[0];
                panda$core$Bit $tmp314 = $tmp312(c$Iter302);
                panda$core$Bit $tmp315 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp314);
                if (!$tmp315.value) goto $l310;
                {
                    ITable* $tmp317 = c$Iter302->$class->itable;
                    while ($tmp317->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp317 = $tmp317->next;
                    }
                    $fn319 $tmp318 = $tmp317->methods[1];
                    panda$core$Object* $tmp320 = $tmp318(c$Iter302);
                    c316 = ((org$pandalanguage$pandac$ASTNode*) $tmp320);
                    panda$core$MutableString$append$panda$core$String(result294, separator300);
                    panda$core$MutableString$append$panda$core$Object(result294, ((panda$core$Object*) c316));
                    separator300 = &$s321;
                }
                goto $l309;
                $l310:;
            }
            panda$core$MutableString$append$panda$core$String(result294, &$s322);
            panda$core$String* $tmp323 = panda$core$MutableString$finish$R$panda$core$String(result294);
            return $tmp323;
        }
        break;
        case 139:
        {
            panda$core$MutableString* $tmp325 = (panda$core$MutableString*) malloc(40);
            $tmp325->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp325->refCount.value = 1;
            panda$core$MutableString$init($tmp325);
            result324 = $tmp325;
            separator327 = &$s328;
            {
                ITable* $tmp330 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp330->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp330 = $tmp330->next;
                }
                $fn332 $tmp331 = $tmp330->methods[0];
                panda$collections$Iterator* $tmp333 = $tmp331(((panda$collections$Iterable*) self->children));
                c$Iter329 = $tmp333;
                $l334:;
                ITable* $tmp336 = c$Iter329->$class->itable;
                while ($tmp336->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp336 = $tmp336->next;
                }
                $fn338 $tmp337 = $tmp336->methods[0];
                panda$core$Bit $tmp339 = $tmp337(c$Iter329);
                panda$core$Bit $tmp340 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp339);
                if (!$tmp340.value) goto $l335;
                {
                    ITable* $tmp342 = c$Iter329->$class->itable;
                    while ($tmp342->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp342 = $tmp342->next;
                    }
                    $fn344 $tmp343 = $tmp342->methods[1];
                    panda$core$Object* $tmp345 = $tmp343(c$Iter329);
                    c341 = ((org$pandalanguage$pandac$ASTNode*) $tmp345);
                    panda$core$MutableString$append$panda$core$String(result324, separator327);
                    panda$core$MutableString$append$panda$core$Object(result324, ((panda$core$Object*) c341));
                    separator327 = &$s346;
                }
                goto $l334;
                $l335:;
            }
            panda$core$String* $tmp347 = panda$core$MutableString$finish$R$panda$core$String(result324);
            return $tmp347;
        }
        break;
        case 143:
        {
            panda$core$String* $tmp349 = (($fn348) self->payload->$class->vtable[0])(self->payload);
            return $tmp349;
        }
        break;
        case 144:
        {
            panda$core$MutableString* $tmp351 = (panda$core$MutableString*) malloc(40);
            $tmp351->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp351->refCount.value = 1;
            panda$core$MutableString$init($tmp351);
            result350 = $tmp351;
            {
                ITable* $tmp354 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp354->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp354 = $tmp354->next;
                }
                $fn356 $tmp355 = $tmp354->methods[0];
                panda$collections$Iterator* $tmp357 = $tmp355(((panda$collections$Iterable*) self->children));
                c$Iter353 = $tmp357;
                $l358:;
                ITable* $tmp360 = c$Iter353->$class->itable;
                while ($tmp360->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp360 = $tmp360->next;
                }
                $fn362 $tmp361 = $tmp360->methods[0];
                panda$core$Bit $tmp363 = $tmp361(c$Iter353);
                panda$core$Bit $tmp364 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp363);
                if (!$tmp364.value) goto $l359;
                {
                    ITable* $tmp366 = c$Iter353->$class->itable;
                    while ($tmp366->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp366 = $tmp366->next;
                    }
                    $fn368 $tmp367 = $tmp366->methods[1];
                    panda$core$Object* $tmp369 = $tmp367(c$Iter353);
                    c365 = ((org$pandalanguage$pandac$ASTNode*) $tmp369);
                    panda$core$MutableString$append$panda$core$Object(result350, ((panda$core$Object*) c365));
                    panda$core$MutableString$append$panda$core$String(result350, &$s370);
                }
                goto $l358;
                $l359:;
            }
            panda$core$String* $tmp371 = panda$core$MutableString$finish$R$panda$core$String(result350);
            return $tmp371;
        }
        break;
        case 129:
        {
            panda$core$Int64 $tmp372 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp372, ((panda$core$Int64) { 1 }));
            if ($tmp373.value) {
            {
                panda$core$Object* $tmp374 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp375 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp374));
                return $tmp375;
            }
            }
            panda$core$Object* $tmp377 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp378 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s376, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp377)));
            panda$core$String* $tmp380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp378, &$s379);
            panda$core$Object* $tmp381 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp382 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp380, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp381)));
            panda$core$String* $tmp384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp382, &$s383);
            return $tmp384;
        }
        break;
        case 130:
        {
            panda$core$MutableString* $tmp386 = (panda$core$MutableString*) malloc(40);
            $tmp386->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp386->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp386, &$s388);
            result385 = $tmp386;
            separator389 = &$s390;
            {
                ITable* $tmp392 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp392->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp392 = $tmp392->next;
                }
                $fn394 $tmp393 = $tmp392->methods[0];
                panda$collections$Iterator* $tmp395 = $tmp393(((panda$collections$Iterable*) self->children));
                c$Iter391 = $tmp395;
                $l396:;
                ITable* $tmp398 = c$Iter391->$class->itable;
                while ($tmp398->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp398 = $tmp398->next;
                }
                $fn400 $tmp399 = $tmp398->methods[0];
                panda$core$Bit $tmp401 = $tmp399(c$Iter391);
                panda$core$Bit $tmp402 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp401);
                if (!$tmp402.value) goto $l397;
                {
                    ITable* $tmp404 = c$Iter391->$class->itable;
                    while ($tmp404->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp404 = $tmp404->next;
                    }
                    $fn406 $tmp405 = $tmp404->methods[1];
                    panda$core$Object* $tmp407 = $tmp405(c$Iter391);
                    c403 = ((org$pandalanguage$pandac$ASTNode*) $tmp407);
                    panda$core$MutableString$append$panda$core$String(result385, separator389);
                    panda$core$MutableString$append$panda$core$Object(result385, ((panda$core$Object*) c403));
                    separator389 = &$s408;
                }
                goto $l396;
                $l397:;
            }
            panda$core$String* $tmp409 = panda$core$MutableString$finish$R$panda$core$String(result385);
            return $tmp409;
        }
        break;
        case 131:
        {
            panda$core$MutableString* $tmp411 = (panda$core$MutableString*) malloc(40);
            $tmp411->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp411->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp411, &$s413);
            result410 = $tmp411;
            separator414 = &$s415;
            {
                ITable* $tmp417 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp417->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp417 = $tmp417->next;
                }
                $fn419 $tmp418 = $tmp417->methods[0];
                panda$collections$Iterator* $tmp420 = $tmp418(((panda$collections$Iterable*) self->children));
                c$Iter416 = $tmp420;
                $l421:;
                ITable* $tmp423 = c$Iter416->$class->itable;
                while ($tmp423->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp423 = $tmp423->next;
                }
                $fn425 $tmp424 = $tmp423->methods[0];
                panda$core$Bit $tmp426 = $tmp424(c$Iter416);
                panda$core$Bit $tmp427 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp426);
                if (!$tmp427.value) goto $l422;
                {
                    ITable* $tmp429 = c$Iter416->$class->itable;
                    while ($tmp429->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp429 = $tmp429->next;
                    }
                    $fn431 $tmp430 = $tmp429->methods[1];
                    panda$core$Object* $tmp432 = $tmp430(c$Iter416);
                    c428 = ((org$pandalanguage$pandac$ASTNode*) $tmp432);
                    panda$core$MutableString$append$panda$core$String(result410, separator414);
                    panda$core$MutableString$append$panda$core$Object(result410, ((panda$core$Object*) c428));
                    separator414 = &$s433;
                }
                goto $l421;
                $l422:;
            }
            panda$core$String* $tmp434 = panda$core$MutableString$finish$R$panda$core$String(result410);
            return $tmp434;
        }
        break;
        case 133:
        {
            panda$core$MutableString* $tmp436 = (panda$core$MutableString*) malloc(40);
            $tmp436->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp436->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp436, &$s438);
            result435 = $tmp436;
            separator439 = &$s440;
            {
                ITable* $tmp442 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp442->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp442 = $tmp442->next;
                }
                $fn444 $tmp443 = $tmp442->methods[0];
                panda$collections$Iterator* $tmp445 = $tmp443(((panda$collections$Iterable*) self->children));
                c$Iter441 = $tmp445;
                $l446:;
                ITable* $tmp448 = c$Iter441->$class->itable;
                while ($tmp448->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp448 = $tmp448->next;
                }
                $fn450 $tmp449 = $tmp448->methods[0];
                panda$core$Bit $tmp451 = $tmp449(c$Iter441);
                panda$core$Bit $tmp452 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp451);
                if (!$tmp452.value) goto $l447;
                {
                    ITable* $tmp454 = c$Iter441->$class->itable;
                    while ($tmp454->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp454 = $tmp454->next;
                    }
                    $fn456 $tmp455 = $tmp454->methods[1];
                    panda$core$Object* $tmp457 = $tmp455(c$Iter441);
                    c453 = ((org$pandalanguage$pandac$ASTNode*) $tmp457);
                    panda$core$MutableString$append$panda$core$String(result435, separator439);
                    panda$core$MutableString$append$panda$core$Object(result435, ((panda$core$Object*) c453));
                    separator439 = &$s458;
                }
                goto $l446;
                $l447:;
            }
            panda$core$String* $tmp459 = panda$core$MutableString$finish$R$panda$core$String(result435);
            return $tmp459;
        }
        break;
        case 132:
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
            panda$core$String* $tmp484 = panda$core$MutableString$finish$R$panda$core$String(result460);
            return $tmp484;
        }
        break;
        case 148:
        {
            panda$core$Int64 $tmp485 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp485, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp486.value);
            panda$core$Object* $tmp488 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp489 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s487, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp488)));
            panda$core$String* $tmp491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp489, &$s490);
            panda$core$Object* $tmp492 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp493 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp491, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp492)));
            panda$core$String* $tmp495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp493, &$s494);
            panda$core$Object* $tmp496 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp497 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp495, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp496)));
            panda$core$String* $tmp499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp497, &$s498);
            return $tmp499;
        }
        break;
        case 149:
        {
            panda$core$Int64 $tmp500 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp500, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp501.value);
            panda$core$String* $tmp503 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s502, self->payload);
            panda$core$String* $tmp505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp503, &$s504);
            panda$core$Object* $tmp506 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp507 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp505, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp506)));
            panda$core$String* $tmp509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp507, &$s508);
            return $tmp509;
        }
        break;
        case 150:
        {
            panda$core$MutableString* $tmp511 = (panda$core$MutableString*) malloc(40);
            $tmp511->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp511->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp511, &$s513);
            result510 = $tmp511;
            separator514 = &$s515;
            {
                ITable* $tmp517 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp517->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp517 = $tmp517->next;
                }
                $fn519 $tmp518 = $tmp517->methods[0];
                panda$collections$Iterator* $tmp520 = $tmp518(((panda$collections$Iterable*) self->children));
                c$Iter516 = $tmp520;
                $l521:;
                ITable* $tmp523 = c$Iter516->$class->itable;
                while ($tmp523->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp523 = $tmp523->next;
                }
                $fn525 $tmp524 = $tmp523->methods[0];
                panda$core$Bit $tmp526 = $tmp524(c$Iter516);
                panda$core$Bit $tmp527 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp526);
                if (!$tmp527.value) goto $l522;
                {
                    ITable* $tmp529 = c$Iter516->$class->itable;
                    while ($tmp529->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp529 = $tmp529->next;
                    }
                    $fn531 $tmp530 = $tmp529->methods[1];
                    panda$core$Object* $tmp532 = $tmp530(c$Iter516);
                    c528 = ((org$pandalanguage$pandac$ASTNode*) $tmp532);
                    panda$core$MutableString$append$panda$core$String(result510, separator514);
                    panda$core$MutableString$append$panda$core$Object(result510, ((panda$core$Object*) c528));
                    separator514 = &$s533;
                }
                goto $l521;
                $l522:;
            }
            panda$core$MutableString$append$panda$core$String(result510, &$s534);
            panda$core$String* $tmp535 = panda$core$MutableString$finish$R$panda$core$String(result510);
            return $tmp535;
        }
        break;
        case 147:
        {
            panda$core$Int64 $tmp536 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp536, ((panda$core$Int64) { 5 }));
            PANDA_ASSERT($tmp537.value);
            panda$core$Object* $tmp539 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp540 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s538, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp539)));
            panda$core$String* $tmp542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp540, &$s541);
            panda$core$Object* $tmp543 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp544 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp542, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp543)));
            panda$core$String* $tmp546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp544, &$s545);
            panda$core$Object* $tmp547 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp548 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp546, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp547)));
            panda$core$String* $tmp550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp548, &$s549);
            panda$core$Object* $tmp551 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp552 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp550, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp551)));
            panda$core$String* $tmp554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp552, &$s553);
            panda$core$Object* $tmp555 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp556 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp554, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp555)));
            panda$core$String* $tmp558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp556, &$s557);
            return $tmp558;
        }
        break;
        case 145:
        {
            panda$core$Int64 $tmp559 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp559, ((panda$core$Int64) { 6 }));
            PANDA_ASSERT($tmp560.value);
            panda$core$Object* $tmp562 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp563 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s561, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp562)));
            panda$core$String* $tmp565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp563, &$s564);
            panda$core$Object* $tmp566 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp567 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp565, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp566)));
            panda$core$String* $tmp569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp567, &$s568);
            panda$core$String* $tmp570 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp569, self->payload);
            panda$core$String* $tmp572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp570, &$s571);
            panda$core$Object* $tmp573 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp574 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp572, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp573)));
            panda$core$String* $tmp576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp574, &$s575);
            panda$core$Object* $tmp578 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s577, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp578)));
            panda$core$String* $tmp581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp579, &$s580);
            panda$core$Object* $tmp582 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp583 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp581, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp582)));
            panda$core$String* $tmp585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp583, &$s584);
            panda$core$Object* $tmp586 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$String* $tmp587 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp585, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp586)));
            panda$core$String* $tmp589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp587, &$s588);
            panda$core$String* $tmp590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp576, $tmp589);
            return $tmp590;
        }
        break;
        case 146:
        {
            panda$core$Int64 $tmp591 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp591, ((panda$core$Int64) { 6 }));
            PANDA_ASSERT($tmp592.value);
            panda$core$Object* $tmp594 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp595 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s593, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp594)));
            panda$core$String* $tmp597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp595, &$s596);
            panda$core$Object* $tmp598 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp599 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp597, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp598)));
            panda$core$String* $tmp601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp599, &$s600);
            panda$core$String* $tmp602 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp601, self->payload);
            panda$core$String* $tmp604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp602, &$s603);
            panda$core$Object* $tmp605 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp606 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp604, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp605)));
            panda$core$String* $tmp608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp606, &$s607);
            panda$core$Object* $tmp610 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp611 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s609, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp610)));
            panda$core$String* $tmp613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp611, &$s612);
            panda$core$Object* $tmp614 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp615 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp613, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp614)));
            panda$core$String* $tmp617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp615, &$s616);
            panda$core$Object* $tmp618 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$String* $tmp619 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp617, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp618)));
            panda$core$String* $tmp621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp619, &$s620);
            panda$core$String* $tmp622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp608, $tmp621);
            return $tmp622;
        }
        break;
        case 140:
        {
            panda$core$MutableString* $tmp624 = (panda$core$MutableString*) malloc(40);
            $tmp624->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp624->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp624, &$s626);
            result623 = $tmp624;
            {
                ITable* $tmp628 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp628->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp628 = $tmp628->next;
                }
                $fn630 $tmp629 = $tmp628->methods[0];
                panda$collections$Iterator* $tmp631 = $tmp629(((panda$collections$Iterable*) self->children));
                c$Iter627 = $tmp631;
                $l632:;
                ITable* $tmp634 = c$Iter627->$class->itable;
                while ($tmp634->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp634 = $tmp634->next;
                }
                $fn636 $tmp635 = $tmp634->methods[0];
                panda$core$Bit $tmp637 = $tmp635(c$Iter627);
                panda$core$Bit $tmp638 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp637);
                if (!$tmp638.value) goto $l633;
                {
                    ITable* $tmp640 = c$Iter627->$class->itable;
                    while ($tmp640->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp640 = $tmp640->next;
                    }
                    $fn642 $tmp641 = $tmp640->methods[1];
                    panda$core$Object* $tmp643 = $tmp641(c$Iter627);
                    c639 = ((org$pandalanguage$pandac$ASTNode*) $tmp643);
                    panda$core$MutableString$append$panda$core$Object(result623, ((panda$core$Object*) c639));
                    panda$core$MutableString$append$panda$core$String(result623, &$s644);
                }
                goto $l632;
                $l633:;
            }
            panda$core$MutableString$append$panda$core$String(result623, &$s645);
            panda$core$String* $tmp646 = panda$core$MutableString$finish$R$panda$core$String(result623);
            return $tmp646;
        }
        break;
        case 142:
        {
            panda$core$Int64 $tmp647 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp647, ((panda$core$Int64) { 6 }));
            PANDA_ASSERT($tmp648.value);
            panda$core$MutableString* $tmp650 = (panda$core$MutableString*) malloc(40);
            $tmp650->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp650->refCount.value = 1;
            panda$core$MutableString$init($tmp650);
            result649 = $tmp650;
            panda$core$Object* $tmp652 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$append$panda$core$Object(result649, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp652)));
            panda$core$Object* $tmp653 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$MutableString$append$panda$core$Object(result649, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp653)));
            panda$core$String* $tmp655 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s654, self->payload);
            panda$core$String* $tmp657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp655, &$s656);
            panda$core$MutableString$append$panda$core$String(result649, $tmp657);
            panda$core$Object* $tmp658 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$MutableString$append$panda$core$Object(result649, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp658)));
            panda$core$Object* $tmp659 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$Bit $tmp660 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp659)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp660.value) {
            {
                panda$core$MutableString$append$panda$core$String(result649, &$s661);
                panda$core$Object* $tmp662 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
                panda$core$MutableString$append$panda$core$Object(result649, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp662)));
            }
            }
            panda$core$Object* $tmp663 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$Bit $tmp664 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp663)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp664.value) {
            {
                panda$core$MutableString$append$panda$core$String(result649, &$s665);
                panda$core$Object* $tmp666 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
                panda$core$MutableString$append$panda$core$Object(result649, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp666)));
                panda$core$MutableString$append$panda$core$String(result649, &$s667);
            }
            }
            panda$core$MutableString$append$panda$core$String(result649, &$s668);
            panda$core$Object* $tmp669 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$MutableString$append$panda$core$Object(result649, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp669)));
            panda$core$String* $tmp670 = panda$core$MutableString$finish$R$panda$core$String(result649);
            return $tmp670;
        }
        break;
        case 151:
        {
            panda$core$Int64 $tmp671 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp671, ((panda$core$Int64) { 5 }));
            PANDA_ASSERT($tmp672.value);
            panda$core$MutableString* $tmp674 = (panda$core$MutableString*) malloc(40);
            $tmp674->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp674->refCount.value = 1;
            panda$core$MutableString$init($tmp674);
            result673 = $tmp674;
            panda$core$Object* $tmp676 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$append$panda$core$Object(result673, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp676)));
            panda$core$Object* $tmp677 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$MutableString$append$panda$core$Object(result673, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp677)));
            panda$core$String* $tmp679 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s678, self->payload);
            panda$core$String* $tmp681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp679, &$s680);
            panda$core$MutableString$append$panda$core$String(result673, $tmp681);
            panda$core$Object* $tmp682 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$MutableString$append$panda$core$Object(result673, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp682)));
            panda$core$MutableString$append$panda$core$String(result673, &$s683);
            panda$core$Object* $tmp684 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$MutableString$append$panda$core$Object(result673, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp684)));
            panda$core$Object* $tmp685 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$MutableString$append$panda$core$Object(result673, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp685)));
            panda$core$String* $tmp686 = panda$core$MutableString$finish$R$panda$core$String(result673);
            return $tmp686;
        }
        break;
        case 152:
        {
            panda$core$MutableString* $tmp688 = (panda$core$MutableString*) malloc(40);
            $tmp688->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp688->refCount.value = 1;
            panda$core$MutableString$init($tmp688);
            result687 = $tmp688;
            {
                ITable* $tmp691 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp691->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp691 = $tmp691->next;
                }
                $fn693 $tmp692 = $tmp691->methods[0];
                panda$collections$Iterator* $tmp694 = $tmp692(((panda$collections$Iterable*) self->children));
                c$Iter690 = $tmp694;
                $l695:;
                ITable* $tmp697 = c$Iter690->$class->itable;
                while ($tmp697->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp697 = $tmp697->next;
                }
                $fn699 $tmp698 = $tmp697->methods[0];
                panda$core$Bit $tmp700 = $tmp698(c$Iter690);
                panda$core$Bit $tmp701 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp700);
                if (!$tmp701.value) goto $l696;
                {
                    ITable* $tmp703 = c$Iter690->$class->itable;
                    while ($tmp703->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp703 = $tmp703->next;
                    }
                    $fn705 $tmp704 = $tmp703->methods[1];
                    panda$core$Object* $tmp706 = $tmp704(c$Iter690);
                    c702 = ((org$pandalanguage$pandac$ASTNode*) $tmp706);
                    panda$core$MutableString$append$panda$core$Object(result687, ((panda$core$Object*) c702));
                    panda$core$MutableString$append$panda$core$String(result687, &$s707);
                }
                goto $l695;
                $l696:;
            }
            panda$core$String* $tmp708 = panda$core$MutableString$finish$R$panda$core$String(result687);
            return $tmp708;
        }
        break;
        case 114:
        {
            return &$s709;
        }
        break;
        case 115:
        {
            return &$s710;
        }
        break;
        case 138:
        {
            return &$s711;
        }
        break;
        default:
        {
            panda$core$String* $tmp713 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s712, ((panda$core$Object*) wrap_panda$core$Int64(self->kind)));
            panda$core$String* $tmp715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp713, &$s714);
            return $tmp715;
        }
    }
}

