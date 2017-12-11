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

typedef panda$core$String* (*$fn57)(panda$core$Object*);
typedef panda$core$String* (*$fn59)(panda$core$Object*);
typedef panda$core$String* (*$fn62)(panda$core$Object*);
typedef panda$core$String* (*$fn149)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn254)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn260)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn266)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn286)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn304)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn310)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn316)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn329)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn335)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn341)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn345)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn353)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn359)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn365)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn390)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn396)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn402)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn415)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn421)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn427)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn440)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn446)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn452)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn465)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn471)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn477)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn497)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn514)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn520)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn526)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn620)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn626)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn632)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn683)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn689)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn695)(panda$collections$Iterator*);

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
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x63\x6B\x61\x67\x65\x20", 8, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x73\x65\x73\x20", 5, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E\x2E", 3, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E", 2, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20", 3, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x6C\x73\x65\x20", 6, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x72\x20", 4, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20", 4, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20", 6, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x6F\x20", 3, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x68\x69\x6C\x65\x20", 7, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x6F\x6F\x70\x20", 5, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6B\x20", 6, NULL };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6B", 5, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 9, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x74\x69\x6E\x75\x65", 8, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E", 6, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x0A", 2, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, NULL };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x3D\x20", 4, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x72\x20", 4, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x20", 4, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x72\x6F\x70\x65\x72\x74\x79\x20", 9, NULL };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, NULL };
static panda$core$String $s461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, NULL };
static panda$core$String $s503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, NULL };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x65\x74\x68\x6F\x64\x20", 7, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, NULL };
static panda$core$String $s572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6E\x63\x74\x69\x6F\x6E\x20", 9, NULL };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, NULL };
static panda$core$String $s602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x0A", 2, NULL };
static panda$core$String $s634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, NULL };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20", 6, NULL };
static panda$core$String $s646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20", 3, NULL };
static panda$core$String $s655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, NULL };
static panda$core$String $s657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20", 6, NULL };
static panda$core$String $s670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, NULL };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4, NULL };
static panda$core$String $s700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, NULL };
static panda$core$String $s701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, NULL };
static panda$core$String $s708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x41\x53\x54\x4E\x6F\x64\x65\x3A", 9, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };

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
    panda$core$MutableString* result77;
    panda$core$MutableString* result91;
    panda$core$MutableString* result108;
    panda$core$String* separator114;
    panda$core$Range$LTpanda$core$Int64$GT $tmp116;
    panda$core$String* result167;
    panda$core$MutableString* result247;
    panda$collections$Iterator* child$Iter251;
    org$pandalanguage$pandac$ASTNode* child263;
    panda$core$String* c268;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp277;
    panda$core$MutableString* result291;
    panda$core$String* separator297;
    panda$collections$Iterator* c$Iter299;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp300;
    org$pandalanguage$pandac$ASTNode* c313;
    panda$core$MutableString* result321;
    panda$core$String* separator324;
    panda$collections$Iterator* c$Iter326;
    org$pandalanguage$pandac$ASTNode* c338;
    panda$core$MutableString* result347;
    panda$collections$Iterator* c$Iter350;
    org$pandalanguage$pandac$ASTNode* c362;
    panda$core$MutableString* result381;
    panda$core$String* separator385;
    panda$collections$Iterator* c$Iter387;
    org$pandalanguage$pandac$ASTNode* c399;
    panda$core$MutableString* result406;
    panda$core$String* separator410;
    panda$collections$Iterator* c$Iter412;
    org$pandalanguage$pandac$ASTNode* c424;
    panda$core$MutableString* result431;
    panda$core$String* separator435;
    panda$collections$Iterator* c$Iter437;
    org$pandalanguage$pandac$ASTNode* c449;
    panda$core$MutableString* result456;
    panda$core$String* separator460;
    panda$collections$Iterator* c$Iter462;
    org$pandalanguage$pandac$ASTNode* c474;
    panda$core$MutableString* result505;
    panda$core$String* separator509;
    panda$collections$Iterator* c$Iter511;
    org$pandalanguage$pandac$ASTNode* c523;
    panda$core$MutableString* result613;
    panda$collections$Iterator* c$Iter617;
    org$pandalanguage$pandac$ASTNode* c629;
    panda$core$MutableString* result639;
    panda$core$MutableString* result663;
    panda$core$MutableString* result677;
    panda$collections$Iterator* c$Iter680;
    org$pandalanguage$pandac$ASTNode* c692;
    switch (self->kind.value) {
        case 112:
        {
            panda$core$Int64 $tmp23 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp24 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp23, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp24.value);
            panda$core$String* $tmp25 = org$pandalanguage$pandac$ASTNode$operatorName$panda$core$Int64$R$panda$core$String(((panda$core$Int64$wrapper*) self->payload)->value);
            panda$core$String* $tmp26 = panda$core$String$convert$R$panda$core$String($tmp25);
            panda$core$String* $tmp28 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp26, &$s27);
            panda$core$Object* $tmp29 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp30 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp28, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp29)));
            panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp30, &$s31);
            return $tmp32;
        }
        break;
        case 103:
        {
            panda$core$Int64 $tmp33 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp34 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp33, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp34.value);
            panda$core$Bit $tmp35 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64$wrapper*) self->payload)->value, ((panda$core$Int64) { 101 }));
            if ($tmp35.value) {
            {
                panda$core$Object* $tmp36 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp37 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp36));
                panda$core$String* $tmp39 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp37, &$s38);
                panda$core$Object* $tmp40 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp41 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp39, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp40)));
                panda$core$String* $tmp43 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp41, &$s42);
                return $tmp43;
            }
            }
            panda$core$Object* $tmp45 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp46 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s44, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp45)));
            panda$core$String* $tmp48 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp46, &$s47);
            panda$core$String* $tmp49 = org$pandalanguage$pandac$ASTNode$operatorName$panda$core$Int64$R$panda$core$String(((panda$core$Int64$wrapper*) self->payload)->value);
            panda$core$String* $tmp50 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp48, $tmp49);
            panda$core$String* $tmp52 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp50, &$s51);
            panda$core$Object* $tmp53 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp54 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp52, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp53)));
            panda$core$String* $tmp56 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp54, &$s55);
            return $tmp56;
        }
        break;
        case 102:
        {
            panda$core$String* $tmp58 = (($fn57) self->payload->$class->vtable[0])(self->payload);
            return $tmp58;
        }
        break;
        case 116:
        {
            panda$core$String* $tmp60 = (($fn59) self->payload->$class->vtable[0])(self->payload);
            return $tmp60;
        }
        break;
        case 113:
        {
            panda$core$String* $tmp63 = (($fn62) self->payload->$class->vtable[0])(self->payload);
            panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s61, $tmp63);
            panda$core$String* $tmp66 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp64, &$s65);
            return $tmp66;
        }
        break;
        case 100:
        {
            panda$core$String* $tmp68 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s67, self->payload);
            panda$core$String* $tmp70 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp68, &$s69);
            return $tmp70;
        }
        break;
        case 101:
        {
            panda$core$String* $tmp72 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s71, self->payload);
            panda$core$String* $tmp74 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp72, &$s73);
            return $tmp74;
        }
        break;
        case 104:
        {
            panda$core$Int64 $tmp75 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp76 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp75, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp76.value);
            panda$core$MutableString* $tmp78 = (panda$core$MutableString*) malloc(40);
            $tmp78->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp78->refCount.value = 1;
            panda$core$MutableString$init($tmp78);
            result77 = $tmp78;
            panda$core$Object* $tmp80 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp80) != NULL }).value) {
            {
                panda$core$Object* $tmp81 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$MutableString$append$panda$core$Object(result77, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp81)));
            }
            }
            panda$core$MutableString$append$panda$core$String(result77, &$s82);
            panda$core$Object* $tmp83 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp83) != NULL }).value) {
            {
                panda$core$Object* $tmp84 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$MutableString$append$panda$core$Object(result77, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp84)));
            }
            }
            panda$core$Object* $tmp85 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp85) != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$String(result77, &$s86);
                panda$core$Object* $tmp87 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$MutableString$append$panda$core$Object(result77, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp87)));
            }
            }
            panda$core$String* $tmp88 = panda$core$MutableString$finish$R$panda$core$String(result77);
            return $tmp88;
        }
        break;
        case 105:
        {
            panda$core$Int64 $tmp89 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp90 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp89, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp90.value);
            panda$core$MutableString* $tmp92 = (panda$core$MutableString*) malloc(40);
            $tmp92->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp92->refCount.value = 1;
            panda$core$MutableString$init($tmp92);
            result91 = $tmp92;
            panda$core$Object* $tmp94 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp95 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp94)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp95.value) {
            {
                panda$core$Object* $tmp96 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$MutableString$append$panda$core$Object(result91, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp96)));
            }
            }
            panda$core$MutableString$append$panda$core$String(result91, &$s97);
            panda$core$Object* $tmp98 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp99 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp98)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp99.value) {
            {
                panda$core$Object* $tmp100 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$MutableString$append$panda$core$Object(result91, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp100)));
            }
            }
            panda$core$Object* $tmp101 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$Bit $tmp102 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp101)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp102.value) {
            {
                panda$core$MutableString$append$panda$core$String(result91, &$s103);
                panda$core$Object* $tmp104 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$MutableString$append$panda$core$Object(result91, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp104)));
            }
            }
            panda$core$String* $tmp105 = panda$core$MutableString$finish$R$panda$core$String(result91);
            return $tmp105;
        }
        break;
        case 107:
        {
            panda$core$Int64 $tmp106 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp107 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp106, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp107.value);
            panda$core$MutableString* $tmp109 = (panda$core$MutableString*) malloc(40);
            $tmp109->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp109->refCount.value = 1;
            panda$core$Object* $tmp111 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp112 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp111));
            panda$core$MutableString$init$panda$core$String($tmp109, $tmp112);
            result108 = $tmp109;
            panda$core$MutableString$append$panda$core$String(result108, &$s113);
            separator114 = &$s115;
            panda$core$Int64 $tmp117 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp116, ((panda$core$Int64) { 1 }), $tmp117, ((panda$core$Bit) { false }));
            int64_t $tmp119 = $tmp116.min.value;
            panda$core$Int64 i118 = { $tmp119 };
            int64_t $tmp121 = $tmp116.max.value;
            bool $tmp122 = $tmp116.inclusive.value;
            if ($tmp122) goto $l129; else goto $l130;
            $l129:;
            if ($tmp119 <= $tmp121) goto $l123; else goto $l125;
            $l130:;
            if ($tmp119 < $tmp121) goto $l123; else goto $l125;
            $l123:;
            {
                panda$core$MutableString$append$panda$core$String(result108, separator114);
                panda$core$Object* $tmp131 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, i118);
                panda$core$MutableString$append$panda$core$Object(result108, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp131)));
                separator114 = &$s132;
            }
            $l126:;
            int64_t $tmp134 = $tmp121 - i118.value;
            if ($tmp122) goto $l135; else goto $l136;
            $l135:;
            if ($tmp134 >= 1) goto $l133; else goto $l125;
            $l136:;
            if ($tmp134 > 1) goto $l133; else goto $l125;
            $l133:;
            i118.value += 1;
            goto $l123;
            $l125:;
            panda$core$MutableString$append$panda$core$String(result108, &$s139);
            panda$core$String* $tmp140 = panda$core$MutableString$finish$R$panda$core$String(result108);
            return $tmp140;
        }
        break;
        case 106:
        {
            panda$core$Int64 $tmp141 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp141, ((panda$core$Int64) { 1 }));
            if ($tmp142.value) {
            {
                panda$core$String* $tmp144 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(self->payload, &$s143);
                panda$core$Object* $tmp145 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp144, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp145)));
                return $tmp146;
            }
            }
            panda$core$Int64 $tmp147 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp147, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp148.value);
            panda$core$String* $tmp150 = (($fn149) self->payload->$class->vtable[0])(self->payload);
            return $tmp150;
        }
        break;
        case 108:
        {
            panda$core$Int64 $tmp151 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp151, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp152.value);
            panda$core$Object* $tmp153 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp154 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp153));
            panda$core$String* $tmp156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp154, &$s155);
            panda$core$String* $tmp157 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp156, self->payload);
            panda$core$String* $tmp159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp157, &$s158);
            return $tmp159;
        }
        break;
        case 118:
        {
            panda$core$Int64 $tmp161 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp161, ((panda$core$Int64) { 2 }));
            bool $tmp160 = $tmp162.value;
            if ($tmp160) goto $l163;
            panda$core$Int64 $tmp164 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp164, ((panda$core$Int64) { 3 }));
            $tmp160 = $tmp165.value;
            $l163:;
            panda$core$Bit $tmp166 = { $tmp160 };
            PANDA_ASSERT($tmp166.value);
            panda$core$Object* $tmp169 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp170 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s168, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp169)));
            panda$core$String* $tmp172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp170, &$s171);
            panda$core$Object* $tmp173 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp174 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp172, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp173)));
            panda$core$String* $tmp176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp174, &$s175);
            result167 = $tmp176;
            panda$core$Int64 $tmp177 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp177, ((panda$core$Int64) { 3 }));
            if ($tmp178.value) {
            {
                panda$core$Object* $tmp180 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$String* $tmp181 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s179, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp180)));
                panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp181, &$s182);
                panda$core$String* $tmp184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result167, $tmp183);
                return $tmp184;
            }
            }
            return result167;
        }
        break;
        case 119:
        {
            panda$core$Int64 $tmp185 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp185, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp186.value);
            panda$core$Object* $tmp188 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s187, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp188)));
            panda$core$String* $tmp191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp189, &$s190);
            panda$core$Object* $tmp192 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp191, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp192)));
            panda$core$String* $tmp195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp193, &$s194);
            panda$core$Object* $tmp196 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp197 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp195, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp196)));
            panda$core$String* $tmp199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp197, &$s198);
            return $tmp199;
        }
        break;
        case 121:
        {
            panda$core$Int64 $tmp200 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp200, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp201.value);
            panda$core$Object* $tmp203 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp204 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s202, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp203)));
            panda$core$String* $tmp206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp204, &$s205);
            panda$core$Object* $tmp207 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp208 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp206, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp207)));
            panda$core$String* $tmp210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp208, &$s209);
            return $tmp210;
        }
        break;
        case 120:
        {
            panda$core$Int64 $tmp211 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp211, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp212.value);
            panda$core$Object* $tmp214 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp215 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s213, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp214)));
            panda$core$String* $tmp217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp215, &$s216);
            panda$core$Object* $tmp218 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp219 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp217, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp218)));
            panda$core$String* $tmp221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp219, &$s220);
            return $tmp221;
        }
        break;
        case 122:
        {
            panda$core$Int64 $tmp222 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp222, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp223.value);
            panda$core$Object* $tmp225 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp226 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s224, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp225)));
            panda$core$String* $tmp228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp226, &$s227);
            return $tmp228;
        }
        break;
        case 134:
        {
            if (((panda$core$Bit) { self->payload != NULL }).value) {
            {
                panda$core$String* $tmp230 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s229, self->payload);
                panda$core$String* $tmp232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp230, &$s231);
                return $tmp232;
            }
            }
            return &$s233;
        }
        break;
        case 135:
        {
            if (((panda$core$Bit) { self->payload != NULL }).value) {
            {
                panda$core$String* $tmp235 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s234, self->payload);
                panda$core$String* $tmp237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp235, &$s236);
                return $tmp237;
            }
            }
            return &$s238;
        }
        break;
        case 136:
        {
            panda$core$Int64 $tmp239 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp239, ((panda$core$Int64) { 1 }));
            if ($tmp240.value) {
            {
                panda$core$Object* $tmp242 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp243 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s241, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp242)));
                panda$core$String* $tmp245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp243, &$s244);
                return $tmp245;
            }
            }
            return &$s246;
        }
        break;
        case 126:
        {
            panda$core$MutableString* $tmp248 = (panda$core$MutableString*) malloc(40);
            $tmp248->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp248->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp248, &$s250);
            result247 = $tmp248;
            {
                ITable* $tmp252 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp252->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp252 = $tmp252->next;
                }
                $fn254 $tmp253 = $tmp252->methods[0];
                panda$collections$Iterator* $tmp255 = $tmp253(((panda$collections$Iterable*) self->children));
                child$Iter251 = $tmp255;
                $l256:;
                ITable* $tmp258 = child$Iter251->$class->itable;
                while ($tmp258->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp258 = $tmp258->next;
                }
                $fn260 $tmp259 = $tmp258->methods[0];
                panda$core$Bit $tmp261 = $tmp259(child$Iter251);
                panda$core$Bit $tmp262 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp261);
                if (!$tmp262.value) goto $l257;
                {
                    ITable* $tmp264 = child$Iter251->$class->itable;
                    while ($tmp264->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp264 = $tmp264->next;
                    }
                    $fn266 $tmp265 = $tmp264->methods[1];
                    panda$core$Object* $tmp267 = $tmp265(child$Iter251);
                    child263 = ((org$pandalanguage$pandac$ASTNode*) $tmp267);
                    panda$core$String* $tmp269 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(child263);
                    c268 = $tmp269;
                    panda$core$Bit $tmp272 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(c268, &$s271);
                    bool $tmp270 = $tmp272.value;
                    if (!$tmp270) goto $l273;
                    panda$core$Bit $tmp275 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(c268, &$s274);
                    $tmp270 = $tmp275.value;
                    $l273:;
                    panda$core$Bit $tmp276 = { $tmp270 };
                    if ($tmp276.value) {
                    {
                        panda$core$String$Index $tmp278 = panda$core$String$start$R$panda$core$String$Index(c268);
                        panda$core$String$Index $tmp279 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(c268, $tmp278);
                        panda$core$String$Index $tmp280 = panda$core$String$end$R$panda$core$String$Index(c268);
                        panda$core$String$Index $tmp281 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(c268, $tmp280);
                        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp277, $tmp279, $tmp281, ((panda$core$Bit) { false }));
                        panda$core$String* $tmp282 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(c268, $tmp277);
                        panda$core$MutableString$append$panda$core$String(result247, $tmp282);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$Object(result247, ((panda$core$Object*) child263));
                    }
                    }
                    panda$core$MutableString$append$panda$core$String(result247, &$s283);
                }
                goto $l256;
                $l257:;
            }
            panda$core$MutableString$append$panda$core$String(result247, &$s284);
            panda$core$String* $tmp285 = panda$core$MutableString$finish$R$panda$core$String(result247);
            return $tmp285;
        }
        break;
        case 109:
        {
            panda$core$String* $tmp287 = (($fn286) self->payload->$class->vtable[0])(self->payload);
            return $tmp287;
        }
        break;
        case 110:
        {
            panda$core$Object* $tmp288 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp290 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp288)), &$s289);
            return $tmp290;
        }
        break;
        case 154:
        {
            panda$core$MutableString* $tmp292 = (panda$core$MutableString*) malloc(40);
            $tmp292->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp292->refCount.value = 1;
            panda$core$Object* $tmp294 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp295 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp294));
            panda$core$MutableString$init$panda$core$String($tmp292, $tmp295);
            result291 = $tmp292;
            panda$core$MutableString$append$panda$core$String(result291, &$s296);
            separator297 = &$s298;
            {
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp300, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$collections$ImmutableArray* $tmp301 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(self->children, $tmp300);
                ITable* $tmp302 = ((panda$collections$Iterable*) $tmp301)->$class->itable;
                while ($tmp302->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp302 = $tmp302->next;
                }
                $fn304 $tmp303 = $tmp302->methods[0];
                panda$collections$Iterator* $tmp305 = $tmp303(((panda$collections$Iterable*) $tmp301));
                c$Iter299 = $tmp305;
                $l306:;
                ITable* $tmp308 = c$Iter299->$class->itable;
                while ($tmp308->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp308 = $tmp308->next;
                }
                $fn310 $tmp309 = $tmp308->methods[0];
                panda$core$Bit $tmp311 = $tmp309(c$Iter299);
                panda$core$Bit $tmp312 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp311);
                if (!$tmp312.value) goto $l307;
                {
                    ITable* $tmp314 = c$Iter299->$class->itable;
                    while ($tmp314->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp314 = $tmp314->next;
                    }
                    $fn316 $tmp315 = $tmp314->methods[1];
                    panda$core$Object* $tmp317 = $tmp315(c$Iter299);
                    c313 = ((org$pandalanguage$pandac$ASTNode*) $tmp317);
                    panda$core$MutableString$append$panda$core$String(result291, separator297);
                    panda$core$MutableString$append$panda$core$Object(result291, ((panda$core$Object*) c313));
                    separator297 = &$s318;
                }
                goto $l306;
                $l307:;
            }
            panda$core$MutableString$append$panda$core$String(result291, &$s319);
            panda$core$String* $tmp320 = panda$core$MutableString$finish$R$panda$core$String(result291);
            return $tmp320;
        }
        break;
        case 139:
        {
            panda$core$MutableString* $tmp322 = (panda$core$MutableString*) malloc(40);
            $tmp322->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp322->refCount.value = 1;
            panda$core$MutableString$init($tmp322);
            result321 = $tmp322;
            separator324 = &$s325;
            {
                ITable* $tmp327 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp327->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp327 = $tmp327->next;
                }
                $fn329 $tmp328 = $tmp327->methods[0];
                panda$collections$Iterator* $tmp330 = $tmp328(((panda$collections$Iterable*) self->children));
                c$Iter326 = $tmp330;
                $l331:;
                ITable* $tmp333 = c$Iter326->$class->itable;
                while ($tmp333->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp333 = $tmp333->next;
                }
                $fn335 $tmp334 = $tmp333->methods[0];
                panda$core$Bit $tmp336 = $tmp334(c$Iter326);
                panda$core$Bit $tmp337 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp336);
                if (!$tmp337.value) goto $l332;
                {
                    ITable* $tmp339 = c$Iter326->$class->itable;
                    while ($tmp339->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp339 = $tmp339->next;
                    }
                    $fn341 $tmp340 = $tmp339->methods[1];
                    panda$core$Object* $tmp342 = $tmp340(c$Iter326);
                    c338 = ((org$pandalanguage$pandac$ASTNode*) $tmp342);
                    panda$core$MutableString$append$panda$core$String(result321, separator324);
                    panda$core$MutableString$append$panda$core$Object(result321, ((panda$core$Object*) c338));
                    separator324 = &$s343;
                }
                goto $l331;
                $l332:;
            }
            panda$core$String* $tmp344 = panda$core$MutableString$finish$R$panda$core$String(result321);
            return $tmp344;
        }
        break;
        case 143:
        {
            panda$core$String* $tmp346 = (($fn345) self->payload->$class->vtable[0])(self->payload);
            return $tmp346;
        }
        break;
        case 144:
        {
            panda$core$MutableString* $tmp348 = (panda$core$MutableString*) malloc(40);
            $tmp348->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp348->refCount.value = 1;
            panda$core$MutableString$init($tmp348);
            result347 = $tmp348;
            {
                ITable* $tmp351 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp351->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp351 = $tmp351->next;
                }
                $fn353 $tmp352 = $tmp351->methods[0];
                panda$collections$Iterator* $tmp354 = $tmp352(((panda$collections$Iterable*) self->children));
                c$Iter350 = $tmp354;
                $l355:;
                ITable* $tmp357 = c$Iter350->$class->itable;
                while ($tmp357->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp357 = $tmp357->next;
                }
                $fn359 $tmp358 = $tmp357->methods[0];
                panda$core$Bit $tmp360 = $tmp358(c$Iter350);
                panda$core$Bit $tmp361 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp360);
                if (!$tmp361.value) goto $l356;
                {
                    ITable* $tmp363 = c$Iter350->$class->itable;
                    while ($tmp363->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp363 = $tmp363->next;
                    }
                    $fn365 $tmp364 = $tmp363->methods[1];
                    panda$core$Object* $tmp366 = $tmp364(c$Iter350);
                    c362 = ((org$pandalanguage$pandac$ASTNode*) $tmp366);
                    panda$core$MutableString$append$panda$core$Object(result347, ((panda$core$Object*) c362));
                    panda$core$MutableString$append$panda$core$String(result347, &$s367);
                }
                goto $l355;
                $l356:;
            }
            panda$core$String* $tmp368 = panda$core$MutableString$finish$R$panda$core$String(result347);
            return $tmp368;
        }
        break;
        case 129:
        {
            panda$core$Int64 $tmp369 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp369, ((panda$core$Int64) { 1 }));
            if ($tmp370.value) {
            {
                panda$core$Object* $tmp371 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp372 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp371));
                return $tmp372;
            }
            }
            panda$core$Object* $tmp373 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp374 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp373));
            panda$core$String* $tmp376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp374, &$s375);
            panda$core$Object* $tmp377 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp378 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp376, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp377)));
            panda$core$String* $tmp380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp378, &$s379);
            return $tmp380;
        }
        break;
        case 130:
        {
            panda$core$MutableString* $tmp382 = (panda$core$MutableString*) malloc(40);
            $tmp382->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp382->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp382, &$s384);
            result381 = $tmp382;
            separator385 = &$s386;
            {
                ITable* $tmp388 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp388->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp388 = $tmp388->next;
                }
                $fn390 $tmp389 = $tmp388->methods[0];
                panda$collections$Iterator* $tmp391 = $tmp389(((panda$collections$Iterable*) self->children));
                c$Iter387 = $tmp391;
                $l392:;
                ITable* $tmp394 = c$Iter387->$class->itable;
                while ($tmp394->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp394 = $tmp394->next;
                }
                $fn396 $tmp395 = $tmp394->methods[0];
                panda$core$Bit $tmp397 = $tmp395(c$Iter387);
                panda$core$Bit $tmp398 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp397);
                if (!$tmp398.value) goto $l393;
                {
                    ITable* $tmp400 = c$Iter387->$class->itable;
                    while ($tmp400->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp400 = $tmp400->next;
                    }
                    $fn402 $tmp401 = $tmp400->methods[1];
                    panda$core$Object* $tmp403 = $tmp401(c$Iter387);
                    c399 = ((org$pandalanguage$pandac$ASTNode*) $tmp403);
                    panda$core$MutableString$append$panda$core$String(result381, separator385);
                    panda$core$MutableString$append$panda$core$Object(result381, ((panda$core$Object*) c399));
                    separator385 = &$s404;
                }
                goto $l392;
                $l393:;
            }
            panda$core$String* $tmp405 = panda$core$MutableString$finish$R$panda$core$String(result381);
            return $tmp405;
        }
        break;
        case 131:
        {
            panda$core$MutableString* $tmp407 = (panda$core$MutableString*) malloc(40);
            $tmp407->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp407->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp407, &$s409);
            result406 = $tmp407;
            separator410 = &$s411;
            {
                ITable* $tmp413 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp413->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp413 = $tmp413->next;
                }
                $fn415 $tmp414 = $tmp413->methods[0];
                panda$collections$Iterator* $tmp416 = $tmp414(((panda$collections$Iterable*) self->children));
                c$Iter412 = $tmp416;
                $l417:;
                ITable* $tmp419 = c$Iter412->$class->itable;
                while ($tmp419->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp419 = $tmp419->next;
                }
                $fn421 $tmp420 = $tmp419->methods[0];
                panda$core$Bit $tmp422 = $tmp420(c$Iter412);
                panda$core$Bit $tmp423 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp422);
                if (!$tmp423.value) goto $l418;
                {
                    ITable* $tmp425 = c$Iter412->$class->itable;
                    while ($tmp425->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp425 = $tmp425->next;
                    }
                    $fn427 $tmp426 = $tmp425->methods[1];
                    panda$core$Object* $tmp428 = $tmp426(c$Iter412);
                    c424 = ((org$pandalanguage$pandac$ASTNode*) $tmp428);
                    panda$core$MutableString$append$panda$core$String(result406, separator410);
                    panda$core$MutableString$append$panda$core$Object(result406, ((panda$core$Object*) c424));
                    separator410 = &$s429;
                }
                goto $l417;
                $l418:;
            }
            panda$core$String* $tmp430 = panda$core$MutableString$finish$R$panda$core$String(result406);
            return $tmp430;
        }
        break;
        case 133:
        {
            panda$core$MutableString* $tmp432 = (panda$core$MutableString*) malloc(40);
            $tmp432->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp432->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp432, &$s434);
            result431 = $tmp432;
            separator435 = &$s436;
            {
                ITable* $tmp438 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp438->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp438 = $tmp438->next;
                }
                $fn440 $tmp439 = $tmp438->methods[0];
                panda$collections$Iterator* $tmp441 = $tmp439(((panda$collections$Iterable*) self->children));
                c$Iter437 = $tmp441;
                $l442:;
                ITable* $tmp444 = c$Iter437->$class->itable;
                while ($tmp444->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp444 = $tmp444->next;
                }
                $fn446 $tmp445 = $tmp444->methods[0];
                panda$core$Bit $tmp447 = $tmp445(c$Iter437);
                panda$core$Bit $tmp448 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp447);
                if (!$tmp448.value) goto $l443;
                {
                    ITable* $tmp450 = c$Iter437->$class->itable;
                    while ($tmp450->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp450 = $tmp450->next;
                    }
                    $fn452 $tmp451 = $tmp450->methods[1];
                    panda$core$Object* $tmp453 = $tmp451(c$Iter437);
                    c449 = ((org$pandalanguage$pandac$ASTNode*) $tmp453);
                    panda$core$MutableString$append$panda$core$String(result431, separator435);
                    panda$core$MutableString$append$panda$core$Object(result431, ((panda$core$Object*) c449));
                    separator435 = &$s454;
                }
                goto $l442;
                $l443:;
            }
            panda$core$String* $tmp455 = panda$core$MutableString$finish$R$panda$core$String(result431);
            return $tmp455;
        }
        break;
        case 132:
        {
            panda$core$MutableString* $tmp457 = (panda$core$MutableString*) malloc(40);
            $tmp457->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp457->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp457, &$s459);
            result456 = $tmp457;
            separator460 = &$s461;
            {
                ITable* $tmp463 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp463->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp463 = $tmp463->next;
                }
                $fn465 $tmp464 = $tmp463->methods[0];
                panda$collections$Iterator* $tmp466 = $tmp464(((panda$collections$Iterable*) self->children));
                c$Iter462 = $tmp466;
                $l467:;
                ITable* $tmp469 = c$Iter462->$class->itable;
                while ($tmp469->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp469 = $tmp469->next;
                }
                $fn471 $tmp470 = $tmp469->methods[0];
                panda$core$Bit $tmp472 = $tmp470(c$Iter462);
                panda$core$Bit $tmp473 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp472);
                if (!$tmp473.value) goto $l468;
                {
                    ITable* $tmp475 = c$Iter462->$class->itable;
                    while ($tmp475->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp475 = $tmp475->next;
                    }
                    $fn477 $tmp476 = $tmp475->methods[1];
                    panda$core$Object* $tmp478 = $tmp476(c$Iter462);
                    c474 = ((org$pandalanguage$pandac$ASTNode*) $tmp478);
                    panda$core$MutableString$append$panda$core$String(result456, separator460);
                    panda$core$MutableString$append$panda$core$Object(result456, ((panda$core$Object*) c474));
                    separator460 = &$s479;
                }
                goto $l467;
                $l468:;
            }
            panda$core$String* $tmp480 = panda$core$MutableString$finish$R$panda$core$String(result456);
            return $tmp480;
        }
        break;
        case 148:
        {
            panda$core$Int64 $tmp481 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp481, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp482.value);
            panda$core$Object* $tmp483 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp484 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp483));
            panda$core$String* $tmp486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp484, &$s485);
            panda$core$Object* $tmp487 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp488 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp486, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp487)));
            panda$core$String* $tmp490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp488, &$s489);
            panda$core$Object* $tmp491 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp492 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp490, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp491)));
            panda$core$String* $tmp494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp492, &$s493);
            return $tmp494;
        }
        break;
        case 149:
        {
            panda$core$Int64 $tmp495 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp495, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp496.value);
            panda$core$String* $tmp498 = (($fn497) self->payload->$class->vtable[0])(self->payload);
            panda$core$String* $tmp500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp498, &$s499);
            panda$core$Object* $tmp501 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp502 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp500, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp501)));
            panda$core$String* $tmp504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp502, &$s503);
            return $tmp504;
        }
        break;
        case 150:
        {
            panda$core$MutableString* $tmp506 = (panda$core$MutableString*) malloc(40);
            $tmp506->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp506->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp506, &$s508);
            result505 = $tmp506;
            separator509 = &$s510;
            {
                ITable* $tmp512 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp512->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp512 = $tmp512->next;
                }
                $fn514 $tmp513 = $tmp512->methods[0];
                panda$collections$Iterator* $tmp515 = $tmp513(((panda$collections$Iterable*) self->children));
                c$Iter511 = $tmp515;
                $l516:;
                ITable* $tmp518 = c$Iter511->$class->itable;
                while ($tmp518->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp518 = $tmp518->next;
                }
                $fn520 $tmp519 = $tmp518->methods[0];
                panda$core$Bit $tmp521 = $tmp519(c$Iter511);
                panda$core$Bit $tmp522 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp521);
                if (!$tmp522.value) goto $l517;
                {
                    ITable* $tmp524 = c$Iter511->$class->itable;
                    while ($tmp524->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp524 = $tmp524->next;
                    }
                    $fn526 $tmp525 = $tmp524->methods[1];
                    panda$core$Object* $tmp527 = $tmp525(c$Iter511);
                    c523 = ((org$pandalanguage$pandac$ASTNode*) $tmp527);
                    panda$core$MutableString$append$panda$core$String(result505, separator509);
                    panda$core$MutableString$append$panda$core$Object(result505, ((panda$core$Object*) c523));
                    separator509 = &$s528;
                }
                goto $l516;
                $l517:;
            }
            panda$core$MutableString$append$panda$core$String(result505, &$s529);
            panda$core$String* $tmp530 = panda$core$MutableString$finish$R$panda$core$String(result505);
            return $tmp530;
        }
        break;
        case 147:
        {
            panda$core$Int64 $tmp531 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp531, ((panda$core$Int64) { 5 }));
            PANDA_ASSERT($tmp532.value);
            panda$core$Object* $tmp533 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp534 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp533));
            panda$core$String* $tmp536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp534, &$s535);
            panda$core$Object* $tmp537 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp538 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp536, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp537)));
            panda$core$String* $tmp540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp538, &$s539);
            panda$core$Object* $tmp541 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp542 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp540, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp541)));
            panda$core$String* $tmp544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp542, &$s543);
            panda$core$Object* $tmp545 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp546 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp544, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp545)));
            panda$core$String* $tmp548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp546, &$s547);
            panda$core$Object* $tmp549 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp550 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp548, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp549)));
            panda$core$String* $tmp552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp550, &$s551);
            return $tmp552;
        }
        break;
        case 145:
        {
            panda$core$Int64 $tmp553 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp553, ((panda$core$Int64) { 6 }));
            PANDA_ASSERT($tmp554.value);
            panda$core$Object* $tmp555 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp556 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp555));
            panda$core$String* $tmp558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp556, &$s557);
            panda$core$Object* $tmp559 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp558, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp559)));
            panda$core$String* $tmp562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp560, &$s561);
            panda$core$String* $tmp563 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp562, self->payload);
            panda$core$String* $tmp565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp563, &$s564);
            panda$core$Object* $tmp566 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp567 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp565, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp566)));
            panda$core$String* $tmp569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp567, &$s568);
            panda$core$Object* $tmp570 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp571 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp570));
            panda$core$String* $tmp573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp571, &$s572);
            panda$core$Object* $tmp574 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp575 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp573, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp574)));
            panda$core$String* $tmp577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp575, &$s576);
            panda$core$Object* $tmp578 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp577, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp578)));
            panda$core$String* $tmp581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp579, &$s580);
            panda$core$String* $tmp582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp569, $tmp581);
            return $tmp582;
        }
        break;
        case 146:
        {
            panda$core$Int64 $tmp583 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp583, ((panda$core$Int64) { 6 }));
            PANDA_ASSERT($tmp584.value);
            panda$core$Object* $tmp585 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp586 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp585));
            panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp586, &$s587);
            panda$core$Object* $tmp589 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp590 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp588, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp589)));
            panda$core$String* $tmp592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp590, &$s591);
            panda$core$String* $tmp593 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp592, self->payload);
            panda$core$String* $tmp595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp593, &$s594);
            panda$core$Object* $tmp596 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp597 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp595, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp596)));
            panda$core$String* $tmp599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp597, &$s598);
            panda$core$Object* $tmp600 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp601 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp600));
            panda$core$String* $tmp603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp601, &$s602);
            panda$core$Object* $tmp604 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp605 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp603, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp604)));
            panda$core$String* $tmp607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp605, &$s606);
            panda$core$Object* $tmp608 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$String* $tmp609 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp607, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp608)));
            panda$core$String* $tmp611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp609, &$s610);
            panda$core$String* $tmp612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp599, $tmp611);
            return $tmp612;
        }
        break;
        case 140:
        {
            panda$core$MutableString* $tmp614 = (panda$core$MutableString*) malloc(40);
            $tmp614->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp614->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp614, &$s616);
            result613 = $tmp614;
            {
                ITable* $tmp618 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp618->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp618 = $tmp618->next;
                }
                $fn620 $tmp619 = $tmp618->methods[0];
                panda$collections$Iterator* $tmp621 = $tmp619(((panda$collections$Iterable*) self->children));
                c$Iter617 = $tmp621;
                $l622:;
                ITable* $tmp624 = c$Iter617->$class->itable;
                while ($tmp624->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp624 = $tmp624->next;
                }
                $fn626 $tmp625 = $tmp624->methods[0];
                panda$core$Bit $tmp627 = $tmp625(c$Iter617);
                panda$core$Bit $tmp628 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp627);
                if (!$tmp628.value) goto $l623;
                {
                    ITable* $tmp630 = c$Iter617->$class->itable;
                    while ($tmp630->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp630 = $tmp630->next;
                    }
                    $fn632 $tmp631 = $tmp630->methods[1];
                    panda$core$Object* $tmp633 = $tmp631(c$Iter617);
                    c629 = ((org$pandalanguage$pandac$ASTNode*) $tmp633);
                    panda$core$MutableString$append$panda$core$Object(result613, ((panda$core$Object*) c629));
                    panda$core$MutableString$append$panda$core$String(result613, &$s634);
                }
                goto $l622;
                $l623:;
            }
            panda$core$MutableString$append$panda$core$String(result613, &$s635);
            panda$core$String* $tmp636 = panda$core$MutableString$finish$R$panda$core$String(result613);
            return $tmp636;
        }
        break;
        case 142:
        {
            panda$core$Int64 $tmp637 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp637, ((panda$core$Int64) { 6 }));
            PANDA_ASSERT($tmp638.value);
            panda$core$MutableString* $tmp640 = (panda$core$MutableString*) malloc(40);
            $tmp640->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp640->refCount.value = 1;
            panda$core$MutableString$init($tmp640);
            result639 = $tmp640;
            panda$core$Object* $tmp642 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$append$panda$core$Object(result639, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp642)));
            panda$core$Object* $tmp643 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$MutableString$append$panda$core$Object(result639, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp643)));
            panda$core$String* $tmp645 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s644, self->payload);
            panda$core$String* $tmp647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp645, &$s646);
            panda$core$MutableString$append$panda$core$String(result639, $tmp647);
            panda$core$Object* $tmp648 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$MutableString$append$panda$core$Object(result639, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp648)));
            panda$core$Object* $tmp649 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$Bit $tmp650 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp649)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp650.value) {
            {
                panda$core$MutableString$append$panda$core$String(result639, &$s651);
                panda$core$Object* $tmp652 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
                panda$core$MutableString$append$panda$core$Object(result639, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp652)));
            }
            }
            panda$core$Object* $tmp653 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$Bit $tmp654 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp653)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp654.value) {
            {
                panda$core$MutableString$append$panda$core$String(result639, &$s655);
                panda$core$Object* $tmp656 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
                panda$core$MutableString$append$panda$core$Object(result639, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp656)));
                panda$core$MutableString$append$panda$core$String(result639, &$s657);
            }
            }
            panda$core$MutableString$append$panda$core$String(result639, &$s658);
            panda$core$Object* $tmp659 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$MutableString$append$panda$core$Object(result639, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp659)));
            panda$core$String* $tmp660 = panda$core$MutableString$finish$R$panda$core$String(result639);
            return $tmp660;
        }
        break;
        case 151:
        {
            panda$core$Int64 $tmp661 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp661, ((panda$core$Int64) { 5 }));
            PANDA_ASSERT($tmp662.value);
            panda$core$MutableString* $tmp664 = (panda$core$MutableString*) malloc(40);
            $tmp664->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp664->refCount.value = 1;
            panda$core$MutableString$init($tmp664);
            result663 = $tmp664;
            panda$core$Object* $tmp666 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$append$panda$core$Object(result663, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp666)));
            panda$core$Object* $tmp667 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$MutableString$append$panda$core$Object(result663, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp667)));
            panda$core$String* $tmp669 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s668, self->payload);
            panda$core$String* $tmp671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp669, &$s670);
            panda$core$MutableString$append$panda$core$String(result663, $tmp671);
            panda$core$Object* $tmp672 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$MutableString$append$panda$core$Object(result663, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp672)));
            panda$core$MutableString$append$panda$core$String(result663, &$s673);
            panda$core$Object* $tmp674 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$MutableString$append$panda$core$Object(result663, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp674)));
            panda$core$Object* $tmp675 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$MutableString$append$panda$core$Object(result663, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp675)));
            panda$core$String* $tmp676 = panda$core$MutableString$finish$R$panda$core$String(result663);
            return $tmp676;
        }
        break;
        case 152:
        {
            panda$core$MutableString* $tmp678 = (panda$core$MutableString*) malloc(40);
            $tmp678->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp678->refCount.value = 1;
            panda$core$MutableString$init($tmp678);
            result677 = $tmp678;
            {
                ITable* $tmp681 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp681->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp681 = $tmp681->next;
                }
                $fn683 $tmp682 = $tmp681->methods[0];
                panda$collections$Iterator* $tmp684 = $tmp682(((panda$collections$Iterable*) self->children));
                c$Iter680 = $tmp684;
                $l685:;
                ITable* $tmp687 = c$Iter680->$class->itable;
                while ($tmp687->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp687 = $tmp687->next;
                }
                $fn689 $tmp688 = $tmp687->methods[0];
                panda$core$Bit $tmp690 = $tmp688(c$Iter680);
                panda$core$Bit $tmp691 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp690);
                if (!$tmp691.value) goto $l686;
                {
                    ITable* $tmp693 = c$Iter680->$class->itable;
                    while ($tmp693->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp693 = $tmp693->next;
                    }
                    $fn695 $tmp694 = $tmp693->methods[1];
                    panda$core$Object* $tmp696 = $tmp694(c$Iter680);
                    c692 = ((org$pandalanguage$pandac$ASTNode*) $tmp696);
                    panda$core$MutableString$append$panda$core$Object(result677, ((panda$core$Object*) c692));
                    panda$core$MutableString$append$panda$core$String(result677, &$s697);
                }
                goto $l685;
                $l686:;
            }
            panda$core$String* $tmp698 = panda$core$MutableString$finish$R$panda$core$String(result677);
            return $tmp698;
        }
        break;
        case 114:
        {
            return &$s699;
        }
        break;
        case 115:
        {
            return &$s700;
        }
        break;
        case 138:
        {
            return &$s701;
        }
        break;
        case 111:
        {
            panda$core$Object* $tmp702 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp703 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp702));
            panda$core$String* $tmp705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp703, &$s704);
            panda$core$Object* $tmp706 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp707 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp705, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp706)));
            panda$core$String* $tmp709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp707, &$s708);
            return $tmp709;
        }
        break;
        default:
        {
            panda$core$String* $tmp711 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s710, ((panda$core$Object*) wrap_panda$core$Int64(self->kind)));
            panda$core$String* $tmp713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp711, &$s712);
            return $tmp713;
        }
    }
}

