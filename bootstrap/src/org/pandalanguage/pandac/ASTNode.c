#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/collections/Array.h"
#include "panda/collections/ListView.h"
#include "panda/core/UInt64.h"
#include "panda/core/Bit.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/MutableString.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"


org$pandalanguage$pandac$ASTNode$class_type org$pandalanguage$pandac$ASTNode$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String, panda$core$Object$cleanup} };

typedef panda$core$String* (*$fn59)(panda$core$Object*);
typedef panda$core$String* (*$fn61)(panda$core$Object*);
typedef panda$core$String* (*$fn64)(panda$core$Object*);
typedef panda$core$String* (*$fn161)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn267)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn273)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn279)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn299)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn317)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn323)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn329)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn342)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn348)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn354)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn358)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn366)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn372)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn378)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn404)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn410)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn416)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn429)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn435)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn441)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn454)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn460)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn466)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn479)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn485)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn491)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn529)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn535)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn541)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn640)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn646)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn652)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn703)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn709)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn715)(panda$collections$Iterator*);

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
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20", 3, 1 };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x6C\x73\x65\x20", 6, 1 };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x72\x20", 4, 1 };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20", 4, 1 };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20", 6, 1 };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x6F\x20", 3, 1 };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x68\x69\x6C\x65\x20", 7, 1 };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x6F\x6F\x70\x20", 5, 1 };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6B\x20", 6, 1 };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6B", 5, 1 };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 9, 1 };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x74\x69\x6E\x75\x65", 8, 1 };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 1 };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E", 6, 1 };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x0A", 2, 1 };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x3D\x20", 4, 1 };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 1 };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 1 };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x72\x6F\x70\x65\x72\x74\x79\x20", 9, 1 };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 1 };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x65\x74\x68\x6F\x64\x20", 7, 1 };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6E\x63\x74\x69\x6F\x6E\x20", 9, 1 };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x0A", 2, 1 };
static panda$core$String $s654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20", 6, 1 };
static panda$core$String $s666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20", 3, 1 };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, 1 };
static panda$core$String $s677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20", 6, 1 };
static panda$core$String $s690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4, 1 };
static panda$core$String $s720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 1 };
static panda$core$String $s721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x41\x53\x54\x4E\x6F\x64\x65\x3A", 9, 1 };
static panda$core$String $s724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };

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
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset) {
    panda$collections$Array* $tmp13 = (panda$collections$Array*) malloc(40);
    $tmp13->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp13->refCount.value = 1;
    panda$collections$Array$init($tmp13);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(self, p_kind, p_offset, NULL, ((panda$collections$ListView*) $tmp13));
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$UInt64 p_payload) {
    panda$collections$Array* $tmp15 = (panda$collections$Array*) malloc(40);
    $tmp15->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp15->refCount.value = 1;
    panda$collections$Array$init($tmp15);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(self, p_kind, p_offset, ((panda$core$Object*) wrap_panda$core$UInt64(p_payload)), ((panda$collections$ListView*) $tmp15));
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$String* p_payload) {
    panda$collections$Array* $tmp17 = (panda$collections$Array*) malloc(40);
    $tmp17->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp17->refCount.value = 1;
    panda$collections$Array$init($tmp17);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(self, p_kind, p_offset, ((panda$core$Object*) p_payload), ((panda$collections$ListView*) $tmp17));
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$Bit p_payload) {
    panda$collections$Array* $tmp19 = (panda$collections$Array*) malloc(40);
    $tmp19->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp19->refCount.value = 1;
    panda$collections$Array$init($tmp19);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(self, p_kind, p_offset, ((panda$core$Object*) wrap_panda$core$Bit(p_payload)), ((panda$collections$ListView*) $tmp19));
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$collections$ListView* p_children) {
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(self, p_kind, p_offset, NULL, p_children);
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$Object* p_payload, panda$collections$ListView* p_children) {
    self->kind = p_kind;
    self->offset = p_offset;
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
    panda$core$String* result180;
    panda$core$MutableString* result260;
    panda$collections$Iterator* child$Iter264;
    org$pandalanguage$pandac$ASTNode* child276;
    panda$core$String* c281;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp290;
    panda$core$MutableString* result304;
    panda$core$String* separator310;
    panda$collections$Iterator* c$Iter312;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp313;
    org$pandalanguage$pandac$ASTNode* c326;
    panda$core$MutableString* result334;
    panda$core$String* separator337;
    panda$collections$Iterator* c$Iter339;
    org$pandalanguage$pandac$ASTNode* c351;
    panda$core$MutableString* result360;
    panda$collections$Iterator* c$Iter363;
    org$pandalanguage$pandac$ASTNode* c375;
    panda$core$MutableString* result395;
    panda$core$String* separator399;
    panda$collections$Iterator* c$Iter401;
    org$pandalanguage$pandac$ASTNode* c413;
    panda$core$MutableString* result420;
    panda$core$String* separator424;
    panda$collections$Iterator* c$Iter426;
    org$pandalanguage$pandac$ASTNode* c438;
    panda$core$MutableString* result445;
    panda$core$String* separator449;
    panda$collections$Iterator* c$Iter451;
    org$pandalanguage$pandac$ASTNode* c463;
    panda$core$MutableString* result470;
    panda$core$String* separator474;
    panda$collections$Iterator* c$Iter476;
    org$pandalanguage$pandac$ASTNode* c488;
    panda$core$MutableString* result520;
    panda$core$String* separator524;
    panda$collections$Iterator* c$Iter526;
    org$pandalanguage$pandac$ASTNode* c538;
    panda$core$MutableString* result633;
    panda$collections$Iterator* c$Iter637;
    org$pandalanguage$pandac$ASTNode* c649;
    panda$core$MutableString* result659;
    panda$core$MutableString* result683;
    panda$core$MutableString* result697;
    panda$collections$Iterator* c$Iter700;
    org$pandalanguage$pandac$ASTNode* c712;
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
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp118, ((panda$core$Int64) { 1 }), $tmp119, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp121 = $tmp118.start.value;
            panda$core$Int64 i120 = { $tmp121 };
            int64_t $tmp123 = $tmp118.end.value;
            int64_t $tmp124 = $tmp118.step.value;
            bool $tmp125 = $tmp118.inclusive.value;
            bool $tmp132 = $tmp124 > 0;
            if ($tmp132) goto $l130; else goto $l131;
            $l130:;
            if ($tmp125) goto $l133; else goto $l134;
            $l133:;
            if ($tmp121 <= $tmp123) goto $l126; else goto $l128;
            $l134:;
            if ($tmp121 < $tmp123) goto $l126; else goto $l128;
            $l131:;
            if ($tmp125) goto $l135; else goto $l136;
            $l135:;
            if ($tmp121 >= $tmp123) goto $l126; else goto $l128;
            $l136:;
            if ($tmp121 > $tmp123) goto $l126; else goto $l128;
            $l126:;
            {
                panda$core$MutableString$append$panda$core$String(result110, separator116);
                panda$core$Object* $tmp138 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, i120);
                panda$core$MutableString$append$panda$core$Object(result110, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp138)));
                separator116 = &$s139;
            }
            $l129:;
            if ($tmp132) goto $l141; else goto $l142;
            $l141:;
            int64_t $tmp143 = $tmp123 - i120.value;
            if ($tmp125) goto $l144; else goto $l145;
            $l144:;
            if ($tmp143 >= $tmp124) goto $l140; else goto $l128;
            $l145:;
            if ($tmp143 > $tmp124) goto $l140; else goto $l128;
            $l142:;
            int64_t $tmp147 = i120.value - $tmp123;
            if ($tmp125) goto $l148; else goto $l149;
            $l148:;
            if ($tmp147 >= -$tmp124) goto $l140; else goto $l128;
            $l149:;
            if ($tmp147 > -$tmp124) goto $l140; else goto $l128;
            $l140:;
            i120.value += $tmp124;
            goto $l126;
            $l128:;
            panda$core$MutableString$append$panda$core$String(result110, &$s151);
            panda$core$String* $tmp152 = panda$core$MutableString$convert$R$panda$core$String(result110);
            return $tmp152;
        }
        break;
        case 106:
        {
            panda$core$Int64 $tmp153 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp153, ((panda$core$Int64) { 1 }));
            if ($tmp154.value) {
            {
                panda$core$String* $tmp156 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(self->payload, &$s155);
                panda$core$Object* $tmp157 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp158 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp156, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp157)));
                return $tmp158;
            }
            }
            panda$core$Int64 $tmp159 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp159, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp160.value);
            panda$core$String* $tmp162 = (($fn161) self->payload->$class->vtable[0])(self->payload);
            return $tmp162;
        }
        break;
        case 108:
        {
            panda$core$Int64 $tmp163 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp163, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp164.value);
            panda$core$Object* $tmp166 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp167 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s165, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp166)));
            panda$core$String* $tmp169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp167, &$s168);
            panda$core$String* $tmp170 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp169, self->payload);
            panda$core$String* $tmp172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp170, &$s171);
            return $tmp172;
        }
        break;
        case 118:
        {
            panda$core$Int64 $tmp174 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp174, ((panda$core$Int64) { 2 }));
            bool $tmp173 = $tmp175.value;
            if ($tmp173) goto $l176;
            panda$core$Int64 $tmp177 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp177, ((panda$core$Int64) { 3 }));
            $tmp173 = $tmp178.value;
            $l176:;
            panda$core$Bit $tmp179 = { $tmp173 };
            PANDA_ASSERT($tmp179.value);
            panda$core$Object* $tmp182 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s181, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp182)));
            panda$core$String* $tmp185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp183, &$s184);
            panda$core$Object* $tmp186 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp187 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp185, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp186)));
            panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp187, &$s188);
            result180 = $tmp189;
            panda$core$Int64 $tmp190 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp190, ((panda$core$Int64) { 3 }));
            if ($tmp191.value) {
            {
                panda$core$Object* $tmp193 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$String* $tmp194 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s192, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp193)));
                panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp194, &$s195);
                panda$core$String* $tmp197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result180, $tmp196);
                return $tmp197;
            }
            }
            return result180;
        }
        break;
        case 119:
        {
            panda$core$Int64 $tmp198 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp198, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp199.value);
            panda$core$Object* $tmp201 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp202 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s200, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp201)));
            panda$core$String* $tmp204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp202, &$s203);
            panda$core$Object* $tmp205 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp206 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp204, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp205)));
            panda$core$String* $tmp208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp206, &$s207);
            panda$core$Object* $tmp209 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp210 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp208, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp209)));
            panda$core$String* $tmp212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp210, &$s211);
            return $tmp212;
        }
        break;
        case 121:
        {
            panda$core$Int64 $tmp213 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp213, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp214.value);
            panda$core$Object* $tmp216 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp217 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s215, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp216)));
            panda$core$String* $tmp219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp217, &$s218);
            panda$core$Object* $tmp220 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp221 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp219, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp220)));
            panda$core$String* $tmp223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp221, &$s222);
            return $tmp223;
        }
        break;
        case 120:
        {
            panda$core$Int64 $tmp224 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp224, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp225.value);
            panda$core$Object* $tmp227 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp228 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s226, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp227)));
            panda$core$String* $tmp230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp228, &$s229);
            panda$core$Object* $tmp231 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp232 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp230, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp231)));
            panda$core$String* $tmp234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp232, &$s233);
            return $tmp234;
        }
        break;
        case 122:
        {
            panda$core$Int64 $tmp235 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp235, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp236.value);
            panda$core$Object* $tmp238 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp239 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s237, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp238)));
            panda$core$String* $tmp241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp239, &$s240);
            return $tmp241;
        }
        break;
        case 134:
        {
            if (((panda$core$Bit) { self->payload != NULL }).value) {
            {
                panda$core$String* $tmp243 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s242, self->payload);
                panda$core$String* $tmp245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp243, &$s244);
                return $tmp245;
            }
            }
            return &$s246;
        }
        break;
        case 135:
        {
            if (((panda$core$Bit) { self->payload != NULL }).value) {
            {
                panda$core$String* $tmp248 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s247, self->payload);
                panda$core$String* $tmp250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp248, &$s249);
                return $tmp250;
            }
            }
            return &$s251;
        }
        break;
        case 136:
        {
            panda$core$Int64 $tmp252 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp252, ((panda$core$Int64) { 1 }));
            if ($tmp253.value) {
            {
                panda$core$Object* $tmp255 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp256 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s254, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp255)));
                panda$core$String* $tmp258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp256, &$s257);
                return $tmp258;
            }
            }
            return &$s259;
        }
        break;
        case 126:
        {
            panda$core$MutableString* $tmp261 = (panda$core$MutableString*) malloc(40);
            $tmp261->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp261->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp261, &$s263);
            result260 = $tmp261;
            {
                ITable* $tmp265 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp265->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp265 = $tmp265->next;
                }
                $fn267 $tmp266 = $tmp265->methods[0];
                panda$collections$Iterator* $tmp268 = $tmp266(((panda$collections$Iterable*) self->children));
                child$Iter264 = $tmp268;
                $l269:;
                ITable* $tmp271 = child$Iter264->$class->itable;
                while ($tmp271->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp271 = $tmp271->next;
                }
                $fn273 $tmp272 = $tmp271->methods[0];
                panda$core$Bit $tmp274 = $tmp272(child$Iter264);
                panda$core$Bit $tmp275 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp274);
                if (!$tmp275.value) goto $l270;
                {
                    ITable* $tmp277 = child$Iter264->$class->itable;
                    while ($tmp277->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp277 = $tmp277->next;
                    }
                    $fn279 $tmp278 = $tmp277->methods[1];
                    panda$core$Object* $tmp280 = $tmp278(child$Iter264);
                    child276 = ((org$pandalanguage$pandac$ASTNode*) $tmp280);
                    panda$core$String* $tmp282 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(child276);
                    c281 = $tmp282;
                    panda$core$Bit $tmp285 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(c281, &$s284);
                    bool $tmp283 = $tmp285.value;
                    if (!$tmp283) goto $l286;
                    panda$core$Bit $tmp288 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(c281, &$s287);
                    $tmp283 = $tmp288.value;
                    $l286:;
                    panda$core$Bit $tmp289 = { $tmp283 };
                    if ($tmp289.value) {
                    {
                        panda$core$String$Index $tmp291 = panda$core$String$start$R$panda$core$String$Index(c281);
                        panda$core$String$Index $tmp292 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(c281, $tmp291);
                        panda$core$String$Index $tmp293 = panda$core$String$end$R$panda$core$String$Index(c281);
                        panda$core$String$Index $tmp294 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(c281, $tmp293);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp290, ((panda$core$String$Index$nullable) { $tmp292, true }), ((panda$core$String$Index$nullable) { $tmp294, true }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp295 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(c281, $tmp290);
                        panda$core$MutableString$append$panda$core$String(result260, $tmp295);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$Object(result260, ((panda$core$Object*) child276));
                    }
                    }
                    panda$core$MutableString$append$panda$core$String(result260, &$s296);
                }
                goto $l269;
                $l270:;
            }
            panda$core$MutableString$append$panda$core$String(result260, &$s297);
            panda$core$String* $tmp298 = panda$core$MutableString$convert$R$panda$core$String(result260);
            return $tmp298;
        }
        break;
        case 109:
        {
            panda$core$String* $tmp300 = (($fn299) self->payload->$class->vtable[0])(self->payload);
            return $tmp300;
        }
        break;
        case 110:
        {
            panda$core$Object* $tmp301 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp303 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp301)), &$s302);
            return $tmp303;
        }
        break;
        case 154:
        {
            panda$core$MutableString* $tmp305 = (panda$core$MutableString*) malloc(40);
            $tmp305->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp305->refCount.value = 1;
            panda$core$Object* $tmp307 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp308 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp307));
            panda$core$MutableString$init$panda$core$String($tmp305, $tmp308);
            result304 = $tmp305;
            panda$core$MutableString$append$panda$core$String(result304, &$s309);
            separator310 = &$s311;
            {
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp313, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                panda$collections$ImmutableArray* $tmp314 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(self->children, $tmp313);
                ITable* $tmp315 = ((panda$collections$Iterable*) $tmp314)->$class->itable;
                while ($tmp315->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp315 = $tmp315->next;
                }
                $fn317 $tmp316 = $tmp315->methods[0];
                panda$collections$Iterator* $tmp318 = $tmp316(((panda$collections$Iterable*) $tmp314));
                c$Iter312 = $tmp318;
                $l319:;
                ITable* $tmp321 = c$Iter312->$class->itable;
                while ($tmp321->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp321 = $tmp321->next;
                }
                $fn323 $tmp322 = $tmp321->methods[0];
                panda$core$Bit $tmp324 = $tmp322(c$Iter312);
                panda$core$Bit $tmp325 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp324);
                if (!$tmp325.value) goto $l320;
                {
                    ITable* $tmp327 = c$Iter312->$class->itable;
                    while ($tmp327->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp327 = $tmp327->next;
                    }
                    $fn329 $tmp328 = $tmp327->methods[1];
                    panda$core$Object* $tmp330 = $tmp328(c$Iter312);
                    c326 = ((org$pandalanguage$pandac$ASTNode*) $tmp330);
                    panda$core$MutableString$append$panda$core$String(result304, separator310);
                    panda$core$MutableString$append$panda$core$Object(result304, ((panda$core$Object*) c326));
                    separator310 = &$s331;
                }
                goto $l319;
                $l320:;
            }
            panda$core$MutableString$append$panda$core$String(result304, &$s332);
            panda$core$String* $tmp333 = panda$core$MutableString$convert$R$panda$core$String(result304);
            return $tmp333;
        }
        break;
        case 139:
        {
            panda$core$MutableString* $tmp335 = (panda$core$MutableString*) malloc(40);
            $tmp335->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp335->refCount.value = 1;
            panda$core$MutableString$init($tmp335);
            result334 = $tmp335;
            separator337 = &$s338;
            {
                ITable* $tmp340 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp340->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp340 = $tmp340->next;
                }
                $fn342 $tmp341 = $tmp340->methods[0];
                panda$collections$Iterator* $tmp343 = $tmp341(((panda$collections$Iterable*) self->children));
                c$Iter339 = $tmp343;
                $l344:;
                ITable* $tmp346 = c$Iter339->$class->itable;
                while ($tmp346->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp346 = $tmp346->next;
                }
                $fn348 $tmp347 = $tmp346->methods[0];
                panda$core$Bit $tmp349 = $tmp347(c$Iter339);
                panda$core$Bit $tmp350 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp349);
                if (!$tmp350.value) goto $l345;
                {
                    ITable* $tmp352 = c$Iter339->$class->itable;
                    while ($tmp352->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp352 = $tmp352->next;
                    }
                    $fn354 $tmp353 = $tmp352->methods[1];
                    panda$core$Object* $tmp355 = $tmp353(c$Iter339);
                    c351 = ((org$pandalanguage$pandac$ASTNode*) $tmp355);
                    panda$core$MutableString$append$panda$core$String(result334, separator337);
                    panda$core$MutableString$append$panda$core$Object(result334, ((panda$core$Object*) c351));
                    separator337 = &$s356;
                }
                goto $l344;
                $l345:;
            }
            panda$core$String* $tmp357 = panda$core$MutableString$convert$R$panda$core$String(result334);
            return $tmp357;
        }
        break;
        case 143:
        {
            panda$core$String* $tmp359 = (($fn358) self->payload->$class->vtable[0])(self->payload);
            return $tmp359;
        }
        break;
        case 144:
        {
            panda$core$MutableString* $tmp361 = (panda$core$MutableString*) malloc(40);
            $tmp361->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp361->refCount.value = 1;
            panda$core$MutableString$init($tmp361);
            result360 = $tmp361;
            {
                ITable* $tmp364 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp364->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp364 = $tmp364->next;
                }
                $fn366 $tmp365 = $tmp364->methods[0];
                panda$collections$Iterator* $tmp367 = $tmp365(((panda$collections$Iterable*) self->children));
                c$Iter363 = $tmp367;
                $l368:;
                ITable* $tmp370 = c$Iter363->$class->itable;
                while ($tmp370->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp370 = $tmp370->next;
                }
                $fn372 $tmp371 = $tmp370->methods[0];
                panda$core$Bit $tmp373 = $tmp371(c$Iter363);
                panda$core$Bit $tmp374 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp373);
                if (!$tmp374.value) goto $l369;
                {
                    ITable* $tmp376 = c$Iter363->$class->itable;
                    while ($tmp376->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp376 = $tmp376->next;
                    }
                    $fn378 $tmp377 = $tmp376->methods[1];
                    panda$core$Object* $tmp379 = $tmp377(c$Iter363);
                    c375 = ((org$pandalanguage$pandac$ASTNode*) $tmp379);
                    panda$core$MutableString$append$panda$core$Object(result360, ((panda$core$Object*) c375));
                    panda$core$MutableString$append$panda$core$String(result360, &$s380);
                }
                goto $l368;
                $l369:;
            }
            panda$core$String* $tmp381 = panda$core$MutableString$convert$R$panda$core$String(result360);
            return $tmp381;
        }
        break;
        case 129:
        {
            panda$core$Int64 $tmp382 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp382, ((panda$core$Int64) { 1 }));
            if ($tmp383.value) {
            {
                panda$core$Object* $tmp384 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp385 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp384));
                return $tmp385;
            }
            }
            panda$core$Object* $tmp387 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp388 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s386, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp387)));
            panda$core$String* $tmp390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp388, &$s389);
            panda$core$Object* $tmp391 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp392 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp390, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp391)));
            panda$core$String* $tmp394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp392, &$s393);
            return $tmp394;
        }
        break;
        case 130:
        {
            panda$core$MutableString* $tmp396 = (panda$core$MutableString*) malloc(40);
            $tmp396->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp396->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp396, &$s398);
            result395 = $tmp396;
            separator399 = &$s400;
            {
                ITable* $tmp402 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp402->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp402 = $tmp402->next;
                }
                $fn404 $tmp403 = $tmp402->methods[0];
                panda$collections$Iterator* $tmp405 = $tmp403(((panda$collections$Iterable*) self->children));
                c$Iter401 = $tmp405;
                $l406:;
                ITable* $tmp408 = c$Iter401->$class->itable;
                while ($tmp408->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp408 = $tmp408->next;
                }
                $fn410 $tmp409 = $tmp408->methods[0];
                panda$core$Bit $tmp411 = $tmp409(c$Iter401);
                panda$core$Bit $tmp412 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp411);
                if (!$tmp412.value) goto $l407;
                {
                    ITable* $tmp414 = c$Iter401->$class->itable;
                    while ($tmp414->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp414 = $tmp414->next;
                    }
                    $fn416 $tmp415 = $tmp414->methods[1];
                    panda$core$Object* $tmp417 = $tmp415(c$Iter401);
                    c413 = ((org$pandalanguage$pandac$ASTNode*) $tmp417);
                    panda$core$MutableString$append$panda$core$String(result395, separator399);
                    panda$core$MutableString$append$panda$core$Object(result395, ((panda$core$Object*) c413));
                    separator399 = &$s418;
                }
                goto $l406;
                $l407:;
            }
            panda$core$String* $tmp419 = panda$core$MutableString$convert$R$panda$core$String(result395);
            return $tmp419;
        }
        break;
        case 131:
        {
            panda$core$MutableString* $tmp421 = (panda$core$MutableString*) malloc(40);
            $tmp421->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp421->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp421, &$s423);
            result420 = $tmp421;
            separator424 = &$s425;
            {
                ITable* $tmp427 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp427->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp427 = $tmp427->next;
                }
                $fn429 $tmp428 = $tmp427->methods[0];
                panda$collections$Iterator* $tmp430 = $tmp428(((panda$collections$Iterable*) self->children));
                c$Iter426 = $tmp430;
                $l431:;
                ITable* $tmp433 = c$Iter426->$class->itable;
                while ($tmp433->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp433 = $tmp433->next;
                }
                $fn435 $tmp434 = $tmp433->methods[0];
                panda$core$Bit $tmp436 = $tmp434(c$Iter426);
                panda$core$Bit $tmp437 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp436);
                if (!$tmp437.value) goto $l432;
                {
                    ITable* $tmp439 = c$Iter426->$class->itable;
                    while ($tmp439->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp439 = $tmp439->next;
                    }
                    $fn441 $tmp440 = $tmp439->methods[1];
                    panda$core$Object* $tmp442 = $tmp440(c$Iter426);
                    c438 = ((org$pandalanguage$pandac$ASTNode*) $tmp442);
                    panda$core$MutableString$append$panda$core$String(result420, separator424);
                    panda$core$MutableString$append$panda$core$Object(result420, ((panda$core$Object*) c438));
                    separator424 = &$s443;
                }
                goto $l431;
                $l432:;
            }
            panda$core$String* $tmp444 = panda$core$MutableString$convert$R$panda$core$String(result420);
            return $tmp444;
        }
        break;
        case 133:
        {
            panda$core$MutableString* $tmp446 = (panda$core$MutableString*) malloc(40);
            $tmp446->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp446->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp446, &$s448);
            result445 = $tmp446;
            separator449 = &$s450;
            {
                ITable* $tmp452 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp452->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp452 = $tmp452->next;
                }
                $fn454 $tmp453 = $tmp452->methods[0];
                panda$collections$Iterator* $tmp455 = $tmp453(((panda$collections$Iterable*) self->children));
                c$Iter451 = $tmp455;
                $l456:;
                ITable* $tmp458 = c$Iter451->$class->itable;
                while ($tmp458->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp458 = $tmp458->next;
                }
                $fn460 $tmp459 = $tmp458->methods[0];
                panda$core$Bit $tmp461 = $tmp459(c$Iter451);
                panda$core$Bit $tmp462 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp461);
                if (!$tmp462.value) goto $l457;
                {
                    ITable* $tmp464 = c$Iter451->$class->itable;
                    while ($tmp464->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp464 = $tmp464->next;
                    }
                    $fn466 $tmp465 = $tmp464->methods[1];
                    panda$core$Object* $tmp467 = $tmp465(c$Iter451);
                    c463 = ((org$pandalanguage$pandac$ASTNode*) $tmp467);
                    panda$core$MutableString$append$panda$core$String(result445, separator449);
                    panda$core$MutableString$append$panda$core$Object(result445, ((panda$core$Object*) c463));
                    separator449 = &$s468;
                }
                goto $l456;
                $l457:;
            }
            panda$core$String* $tmp469 = panda$core$MutableString$convert$R$panda$core$String(result445);
            return $tmp469;
        }
        break;
        case 132:
        {
            panda$core$MutableString* $tmp471 = (panda$core$MutableString*) malloc(40);
            $tmp471->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp471->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp471, &$s473);
            result470 = $tmp471;
            separator474 = &$s475;
            {
                ITable* $tmp477 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp477->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp477 = $tmp477->next;
                }
                $fn479 $tmp478 = $tmp477->methods[0];
                panda$collections$Iterator* $tmp480 = $tmp478(((panda$collections$Iterable*) self->children));
                c$Iter476 = $tmp480;
                $l481:;
                ITable* $tmp483 = c$Iter476->$class->itable;
                while ($tmp483->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp483 = $tmp483->next;
                }
                $fn485 $tmp484 = $tmp483->methods[0];
                panda$core$Bit $tmp486 = $tmp484(c$Iter476);
                panda$core$Bit $tmp487 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp486);
                if (!$tmp487.value) goto $l482;
                {
                    ITable* $tmp489 = c$Iter476->$class->itable;
                    while ($tmp489->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp489 = $tmp489->next;
                    }
                    $fn491 $tmp490 = $tmp489->methods[1];
                    panda$core$Object* $tmp492 = $tmp490(c$Iter476);
                    c488 = ((org$pandalanguage$pandac$ASTNode*) $tmp492);
                    panda$core$MutableString$append$panda$core$String(result470, separator474);
                    panda$core$MutableString$append$panda$core$Object(result470, ((panda$core$Object*) c488));
                    separator474 = &$s493;
                }
                goto $l481;
                $l482:;
            }
            panda$core$String* $tmp494 = panda$core$MutableString$convert$R$panda$core$String(result470);
            return $tmp494;
        }
        break;
        case 148:
        {
            panda$core$Int64 $tmp495 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp495, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp496.value);
            panda$core$Object* $tmp498 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp499 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s497, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp498)));
            panda$core$String* $tmp501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp499, &$s500);
            panda$core$Object* $tmp502 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp503 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp501, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp502)));
            panda$core$String* $tmp505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp503, &$s504);
            panda$core$Object* $tmp506 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp507 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp505, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp506)));
            panda$core$String* $tmp509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp507, &$s508);
            return $tmp509;
        }
        break;
        case 149:
        {
            panda$core$Int64 $tmp510 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp510, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp511.value);
            panda$core$String* $tmp513 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s512, self->payload);
            panda$core$String* $tmp515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp513, &$s514);
            panda$core$Object* $tmp516 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp517 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp515, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp516)));
            panda$core$String* $tmp519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp517, &$s518);
            return $tmp519;
        }
        break;
        case 150:
        {
            panda$core$MutableString* $tmp521 = (panda$core$MutableString*) malloc(40);
            $tmp521->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp521->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp521, &$s523);
            result520 = $tmp521;
            separator524 = &$s525;
            {
                ITable* $tmp527 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp527->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp527 = $tmp527->next;
                }
                $fn529 $tmp528 = $tmp527->methods[0];
                panda$collections$Iterator* $tmp530 = $tmp528(((panda$collections$Iterable*) self->children));
                c$Iter526 = $tmp530;
                $l531:;
                ITable* $tmp533 = c$Iter526->$class->itable;
                while ($tmp533->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp533 = $tmp533->next;
                }
                $fn535 $tmp534 = $tmp533->methods[0];
                panda$core$Bit $tmp536 = $tmp534(c$Iter526);
                panda$core$Bit $tmp537 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp536);
                if (!$tmp537.value) goto $l532;
                {
                    ITable* $tmp539 = c$Iter526->$class->itable;
                    while ($tmp539->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp539 = $tmp539->next;
                    }
                    $fn541 $tmp540 = $tmp539->methods[1];
                    panda$core$Object* $tmp542 = $tmp540(c$Iter526);
                    c538 = ((org$pandalanguage$pandac$ASTNode*) $tmp542);
                    panda$core$MutableString$append$panda$core$String(result520, separator524);
                    panda$core$MutableString$append$panda$core$Object(result520, ((panda$core$Object*) c538));
                    separator524 = &$s543;
                }
                goto $l531;
                $l532:;
            }
            panda$core$MutableString$append$panda$core$String(result520, &$s544);
            panda$core$String* $tmp545 = panda$core$MutableString$convert$R$panda$core$String(result520);
            return $tmp545;
        }
        break;
        case 147:
        {
            panda$core$Int64 $tmp546 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp546, ((panda$core$Int64) { 5 }));
            PANDA_ASSERT($tmp547.value);
            panda$core$Object* $tmp549 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp550 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s548, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp549)));
            panda$core$String* $tmp552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp550, &$s551);
            panda$core$Object* $tmp553 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp554 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp552, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp553)));
            panda$core$String* $tmp556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp554, &$s555);
            panda$core$Object* $tmp557 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp558 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp556, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp557)));
            panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp558, &$s559);
            panda$core$Object* $tmp561 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp562 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp560, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp561)));
            panda$core$String* $tmp564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp562, &$s563);
            panda$core$Object* $tmp565 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp566 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp564, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp565)));
            panda$core$String* $tmp568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp566, &$s567);
            return $tmp568;
        }
        break;
        case 145:
        {
            panda$core$Int64 $tmp569 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp569, ((panda$core$Int64) { 6 }));
            PANDA_ASSERT($tmp570.value);
            panda$core$Object* $tmp572 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp573 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s571, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp572)));
            panda$core$String* $tmp575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp573, &$s574);
            panda$core$Object* $tmp576 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp577 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp575, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp576)));
            panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp577, &$s578);
            panda$core$String* $tmp580 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp579, self->payload);
            panda$core$String* $tmp582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp580, &$s581);
            panda$core$Object* $tmp583 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp584 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp582, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp583)));
            panda$core$String* $tmp586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp584, &$s585);
            panda$core$Object* $tmp588 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp589 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s587, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp588)));
            panda$core$String* $tmp591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp589, &$s590);
            panda$core$Object* $tmp592 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp593 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp591, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp592)));
            panda$core$String* $tmp595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp593, &$s594);
            panda$core$Object* $tmp596 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$String* $tmp597 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp595, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp596)));
            panda$core$String* $tmp599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp597, &$s598);
            panda$core$String* $tmp600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp586, $tmp599);
            return $tmp600;
        }
        break;
        case 146:
        {
            panda$core$Int64 $tmp601 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp601, ((panda$core$Int64) { 6 }));
            PANDA_ASSERT($tmp602.value);
            panda$core$Object* $tmp604 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp605 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s603, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp604)));
            panda$core$String* $tmp607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp605, &$s606);
            panda$core$Object* $tmp608 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp609 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp607, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp608)));
            panda$core$String* $tmp611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp609, &$s610);
            panda$core$String* $tmp612 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp611, self->payload);
            panda$core$String* $tmp614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp612, &$s613);
            panda$core$Object* $tmp615 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp616 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp614, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp615)));
            panda$core$String* $tmp618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp616, &$s617);
            panda$core$Object* $tmp620 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp621 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s619, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp620)));
            panda$core$String* $tmp623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp621, &$s622);
            panda$core$Object* $tmp624 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp625 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp623, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp624)));
            panda$core$String* $tmp627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp625, &$s626);
            panda$core$Object* $tmp628 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$String* $tmp629 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp627, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp628)));
            panda$core$String* $tmp631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp629, &$s630);
            panda$core$String* $tmp632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp618, $tmp631);
            return $tmp632;
        }
        break;
        case 140:
        {
            panda$core$MutableString* $tmp634 = (panda$core$MutableString*) malloc(40);
            $tmp634->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp634->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp634, &$s636);
            result633 = $tmp634;
            {
                ITable* $tmp638 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp638->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp638 = $tmp638->next;
                }
                $fn640 $tmp639 = $tmp638->methods[0];
                panda$collections$Iterator* $tmp641 = $tmp639(((panda$collections$Iterable*) self->children));
                c$Iter637 = $tmp641;
                $l642:;
                ITable* $tmp644 = c$Iter637->$class->itable;
                while ($tmp644->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp644 = $tmp644->next;
                }
                $fn646 $tmp645 = $tmp644->methods[0];
                panda$core$Bit $tmp647 = $tmp645(c$Iter637);
                panda$core$Bit $tmp648 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp647);
                if (!$tmp648.value) goto $l643;
                {
                    ITable* $tmp650 = c$Iter637->$class->itable;
                    while ($tmp650->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp650 = $tmp650->next;
                    }
                    $fn652 $tmp651 = $tmp650->methods[1];
                    panda$core$Object* $tmp653 = $tmp651(c$Iter637);
                    c649 = ((org$pandalanguage$pandac$ASTNode*) $tmp653);
                    panda$core$MutableString$append$panda$core$Object(result633, ((panda$core$Object*) c649));
                    panda$core$MutableString$append$panda$core$String(result633, &$s654);
                }
                goto $l642;
                $l643:;
            }
            panda$core$MutableString$append$panda$core$String(result633, &$s655);
            panda$core$String* $tmp656 = panda$core$MutableString$convert$R$panda$core$String(result633);
            return $tmp656;
        }
        break;
        case 142:
        {
            panda$core$Int64 $tmp657 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp657, ((panda$core$Int64) { 6 }));
            PANDA_ASSERT($tmp658.value);
            panda$core$MutableString* $tmp660 = (panda$core$MutableString*) malloc(40);
            $tmp660->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp660->refCount.value = 1;
            panda$core$MutableString$init($tmp660);
            result659 = $tmp660;
            panda$core$Object* $tmp662 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$append$panda$core$Object(result659, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp662)));
            panda$core$Object* $tmp663 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$MutableString$append$panda$core$Object(result659, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp663)));
            panda$core$String* $tmp665 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s664, self->payload);
            panda$core$String* $tmp667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp665, &$s666);
            panda$core$MutableString$append$panda$core$String(result659, $tmp667);
            panda$core$Object* $tmp668 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$MutableString$append$panda$core$Object(result659, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp668)));
            panda$core$Object* $tmp669 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$Bit $tmp670 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp669)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp670.value) {
            {
                panda$core$MutableString$append$panda$core$String(result659, &$s671);
                panda$core$Object* $tmp672 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
                panda$core$MutableString$append$panda$core$Object(result659, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp672)));
            }
            }
            panda$core$Object* $tmp673 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$Bit $tmp674 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp673)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp674.value) {
            {
                panda$core$MutableString$append$panda$core$String(result659, &$s675);
                panda$core$Object* $tmp676 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
                panda$core$MutableString$append$panda$core$Object(result659, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp676)));
                panda$core$MutableString$append$panda$core$String(result659, &$s677);
            }
            }
            panda$core$MutableString$append$panda$core$String(result659, &$s678);
            panda$core$Object* $tmp679 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$MutableString$append$panda$core$Object(result659, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp679)));
            panda$core$String* $tmp680 = panda$core$MutableString$convert$R$panda$core$String(result659);
            return $tmp680;
        }
        break;
        case 151:
        {
            panda$core$Int64 $tmp681 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp681, ((panda$core$Int64) { 5 }));
            PANDA_ASSERT($tmp682.value);
            panda$core$MutableString* $tmp684 = (panda$core$MutableString*) malloc(40);
            $tmp684->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp684->refCount.value = 1;
            panda$core$MutableString$init($tmp684);
            result683 = $tmp684;
            panda$core$Object* $tmp686 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$append$panda$core$Object(result683, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp686)));
            panda$core$Object* $tmp687 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$MutableString$append$panda$core$Object(result683, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp687)));
            panda$core$String* $tmp689 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s688, self->payload);
            panda$core$String* $tmp691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp689, &$s690);
            panda$core$MutableString$append$panda$core$String(result683, $tmp691);
            panda$core$Object* $tmp692 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$MutableString$append$panda$core$Object(result683, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp692)));
            panda$core$MutableString$append$panda$core$String(result683, &$s693);
            panda$core$Object* $tmp694 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$MutableString$append$panda$core$Object(result683, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp694)));
            panda$core$Object* $tmp695 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$MutableString$append$panda$core$Object(result683, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp695)));
            panda$core$String* $tmp696 = panda$core$MutableString$convert$R$panda$core$String(result683);
            return $tmp696;
        }
        break;
        case 152:
        {
            panda$core$MutableString* $tmp698 = (panda$core$MutableString*) malloc(40);
            $tmp698->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp698->refCount.value = 1;
            panda$core$MutableString$init($tmp698);
            result697 = $tmp698;
            {
                ITable* $tmp701 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp701->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp701 = $tmp701->next;
                }
                $fn703 $tmp702 = $tmp701->methods[0];
                panda$collections$Iterator* $tmp704 = $tmp702(((panda$collections$Iterable*) self->children));
                c$Iter700 = $tmp704;
                $l705:;
                ITable* $tmp707 = c$Iter700->$class->itable;
                while ($tmp707->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp707 = $tmp707->next;
                }
                $fn709 $tmp708 = $tmp707->methods[0];
                panda$core$Bit $tmp710 = $tmp708(c$Iter700);
                panda$core$Bit $tmp711 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp710);
                if (!$tmp711.value) goto $l706;
                {
                    ITable* $tmp713 = c$Iter700->$class->itable;
                    while ($tmp713->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp713 = $tmp713->next;
                    }
                    $fn715 $tmp714 = $tmp713->methods[1];
                    panda$core$Object* $tmp716 = $tmp714(c$Iter700);
                    c712 = ((org$pandalanguage$pandac$ASTNode*) $tmp716);
                    panda$core$MutableString$append$panda$core$Object(result697, ((panda$core$Object*) c712));
                    panda$core$MutableString$append$panda$core$String(result697, &$s717);
                }
                goto $l705;
                $l706:;
            }
            panda$core$String* $tmp718 = panda$core$MutableString$convert$R$panda$core$String(result697);
            return $tmp718;
        }
        break;
        case 114:
        {
            return &$s719;
        }
        break;
        case 115:
        {
            return &$s720;
        }
        break;
        case 138:
        {
            return &$s721;
        }
        break;
        default:
        {
            panda$core$String* $tmp723 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s722, ((panda$core$Object*) wrap_panda$core$Int64(self->kind)));
            panda$core$String* $tmp725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp723, &$s724);
            return $tmp725;
        }
    }
}

