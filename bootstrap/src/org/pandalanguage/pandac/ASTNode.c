#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/UInt64.h"
#include "panda/core/Real64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "panda/collections/ListView.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/io/Console.h"


org$pandalanguage$pandac$ASTNode$class_type org$pandalanguage$pandac$ASTNode$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String, panda$core$Object$cleanup} };

typedef panda$core$String* (*$fn41)(panda$core$Object*);
typedef panda$core$String* (*$fn43)(panda$core$Object*);
typedef panda$core$String* (*$fn46)(panda$core$Object*);
typedef panda$core$String* (*$fn131)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn236)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn242)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn248)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn268)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn286)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn292)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn298)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn311)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn317)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn323)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn327)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn335)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn341)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn347)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn372)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn378)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn384)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn397)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn403)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn409)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn422)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn428)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn434)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn447)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn453)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn459)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn479)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn496)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn502)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn508)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn570)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn576)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn582)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn619)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn625)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn631)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn682)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn688)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn694)(panda$collections$Iterator*);

static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x63\x6b\x61\x67\x65\x20", 8, 22940502189900249, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x73\x65\x73\x20", 5, 22804693981, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x6c\x73\x65\x20", 6, 1408465922990, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x6f\x20", 3, 2061644, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x68\x69\x6c\x65\x20", 7, 142443813564802, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20", 5, 21864130875, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, 13473, NULL };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x41\x53\x54\x4e\x6f\x64\x65\x3a", 9, 1750457173102951541, NULL };
static panda$core$String $s731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };

panda$core$String* org$pandalanguage$pandac$ASTNode$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(org$pandalanguage$pandac$parser$Token$Kind* p_op) {
    panda$core$String* $tmp1 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(p_op);
    return $tmp1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position) {
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_kind, p_position, NULL, NULL);
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$UInt64 p_payload) {
    panda$core$UInt64$wrapper* $tmp2;
    $tmp2 = (panda$core$UInt64$wrapper*) malloc(24);
    $tmp2->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
    $tmp2->refCount = 1;
    $tmp2->value = p_payload;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_kind, p_position, ((panda$core$Object*) $tmp2), NULL);
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$Real64 p_payload) {
    panda$core$Real64$wrapper* $tmp3;
    $tmp3 = (panda$core$Real64$wrapper*) malloc(24);
    $tmp3->cl = (panda$core$Class*) &panda$core$Real64$wrapperclass;
    $tmp3->refCount = 1;
    $tmp3->value = p_payload;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_kind, p_position, ((panda$core$Object*) $tmp3), NULL);
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$String* p_payload) {
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_kind, p_position, ((panda$core$Object*) p_payload), NULL);
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_payload) {
    panda$core$Bit$wrapper* $tmp4;
    $tmp4 = (panda$core$Bit$wrapper*) malloc(13);
    $tmp4->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
    $tmp4->refCount = 1;
    $tmp4->value = p_payload;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_kind, p_position, ((panda$core$Object*) $tmp4), NULL);
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Pair$LTorg$pandalanguage$pandac$ChoiceEntry$Cpanda$core$Int64$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Pair* p_payload) {
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_kind, p_position, ((panda$core$Object*) p_payload), NULL);
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_children) {
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_kind, p_position, NULL, p_children);
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$Object* p_payload, panda$collections$ListView* p_children) {
    self->kind = p_kind;
    self->position = p_position;
    self->payload = p_payload;
    if (((panda$core$Bit) { p_children != NULL }).value) {
    {
        panda$collections$ImmutableArray* $tmp5 = (panda$collections$ImmutableArray*) malloc(32);
        $tmp5->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
        $tmp5->refCount.value = 1;
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp5, p_children);
        self->children = $tmp5;
    }
    }
    else {
    {
        self->children = NULL;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(org$pandalanguage$pandac$ASTNode* self) {
    panda$core$MutableString* result61;
    panda$core$MutableString* result75;
    panda$core$MutableString* result92;
    panda$core$Char8 $tmp97;
    panda$core$String* separator98;
    panda$core$Range$LTpanda$core$Int64$GT $tmp100;
    panda$core$Char8 $tmp123;
    panda$core$String* result149;
    panda$core$MutableString* result229;
    panda$collections$Iterator* child$Iter233;
    org$pandalanguage$pandac$ASTNode* child245;
    panda$core$String* c250;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp259;
    panda$core$Char8 $tmp265;
    panda$core$Char8 $tmp266;
    panda$core$MutableString* result273;
    panda$core$Char8 $tmp278;
    panda$core$String* separator279;
    panda$collections$Iterator* c$Iter281;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp282;
    org$pandalanguage$pandac$ASTNode* c295;
    panda$core$Char8 $tmp301;
    panda$core$MutableString* result303;
    panda$core$String* separator306;
    panda$collections$Iterator* c$Iter308;
    org$pandalanguage$pandac$ASTNode* c320;
    panda$core$MutableString* result329;
    panda$collections$Iterator* c$Iter332;
    org$pandalanguage$pandac$ASTNode* c344;
    panda$core$Char8 $tmp349;
    panda$core$MutableString* result363;
    panda$core$String* separator367;
    panda$collections$Iterator* c$Iter369;
    org$pandalanguage$pandac$ASTNode* c381;
    panda$core$MutableString* result388;
    panda$core$String* separator392;
    panda$collections$Iterator* c$Iter394;
    org$pandalanguage$pandac$ASTNode* c406;
    panda$core$MutableString* result413;
    panda$core$String* separator417;
    panda$collections$Iterator* c$Iter419;
    org$pandalanguage$pandac$ASTNode* c431;
    panda$core$MutableString* result438;
    panda$core$String* separator442;
    panda$collections$Iterator* c$Iter444;
    org$pandalanguage$pandac$ASTNode* c456;
    panda$core$MutableString* result487;
    panda$core$String* separator491;
    panda$collections$Iterator* c$Iter493;
    org$pandalanguage$pandac$ASTNode* c505;
    panda$core$Char8 $tmp511;
    panda$collections$Iterator* c$Iter567;
    org$pandalanguage$pandac$ASTNode* c579;
    panda$core$MutableString* result612;
    panda$collections$Iterator* c$Iter616;
    org$pandalanguage$pandac$ASTNode* c628;
    panda$core$Char8 $tmp633;
    panda$core$Char8 $tmp634;
    panda$core$MutableString* result638;
    panda$core$Char8 $tmp656;
    panda$core$Char8 $tmp657;
    panda$core$MutableString* result662;
    panda$core$Char8 $tmp672;
    panda$core$MutableString* result676;
    panda$collections$Iterator* c$Iter679;
    org$pandalanguage$pandac$ASTNode* c691;
    panda$core$Char8 $tmp696;
    switch (self->kind.value) {
        case 112:
        {
            panda$core$Int64 $tmp7 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp8 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp7, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp8.value);
            panda$core$String* $tmp9 = org$pandalanguage$pandac$ASTNode$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(((org$pandalanguage$pandac$parser$Token$Kind*) self->payload));
            panda$core$String* $tmp10 = panda$core$String$convert$R$panda$core$String($tmp9);
            panda$core$String* $tmp12 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp10, &$s11);
            panda$core$Object* $tmp13 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp14 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp12, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp13)));
            panda$core$String* $tmp16 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp14, &$s15);
            return $tmp16;
        }
        break;
        case 103:
        {
            panda$core$Int64 $tmp17 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp18 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp17, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp18.value);
            panda$core$Bit $tmp19 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$parser$Token$Kind*) self->payload)->$rawValue, ((panda$core$Int64) { 101 }));
            if ($tmp19.value) {
            {
                panda$core$Object* $tmp20 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp21 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp20));
                panda$core$String* $tmp23 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp21, &$s22);
                panda$core$Object* $tmp24 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp25 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp23, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp24)));
                panda$core$String* $tmp27 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp25, &$s26);
                return $tmp27;
            }
            }
            panda$core$Object* $tmp29 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp30 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s28, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp29)));
            panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp30, &$s31);
            panda$core$String* $tmp33 = org$pandalanguage$pandac$ASTNode$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(((org$pandalanguage$pandac$parser$Token$Kind*) self->payload));
            panda$core$String* $tmp34 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp32, $tmp33);
            panda$core$String* $tmp36 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp34, &$s35);
            panda$core$Object* $tmp37 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp38 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp36, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp37)));
            panda$core$String* $tmp40 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp38, &$s39);
            return $tmp40;
        }
        break;
        case 102:
        {
            panda$core$String* $tmp42 = (($fn41) self->payload->$class->vtable[0])(self->payload);
            return $tmp42;
        }
        break;
        case 116:
        {
            panda$core$String* $tmp44 = (($fn43) self->payload->$class->vtable[0])(self->payload);
            return $tmp44;
        }
        break;
        case 113:
        {
            panda$core$String* $tmp47 = (($fn46) self->payload->$class->vtable[0])(self->payload);
            panda$core$String* $tmp48 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s45, $tmp47);
            panda$core$String* $tmp50 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp48, &$s49);
            return $tmp50;
        }
        break;
        case 100:
        {
            panda$core$String* $tmp52 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s51, self->payload);
            panda$core$String* $tmp54 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp52, &$s53);
            return $tmp54;
        }
        break;
        case 101:
        {
            panda$core$String* $tmp56 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s55, self->payload);
            panda$core$String* $tmp58 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp56, &$s57);
            return $tmp58;
        }
        break;
        case 104:
        {
            panda$core$Int64 $tmp59 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp60 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp59, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp60.value);
            panda$core$MutableString* $tmp62 = (panda$core$MutableString*) malloc(48);
            $tmp62->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp62->refCount.value = 1;
            panda$core$MutableString$init($tmp62);
            result61 = $tmp62;
            panda$core$Object* $tmp64 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp64) != NULL }).value) {
            {
                panda$core$Object* $tmp65 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$MutableString$append$panda$core$Object(result61, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp65)));
            }
            }
            panda$core$MutableString$append$panda$core$String(result61, &$s66);
            panda$core$Object* $tmp67 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp67) != NULL }).value) {
            {
                panda$core$Object* $tmp68 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$MutableString$append$panda$core$Object(result61, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp68)));
            }
            }
            panda$core$Object* $tmp69 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp69) != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$String(result61, &$s70);
                panda$core$Object* $tmp71 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$MutableString$append$panda$core$Object(result61, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp71)));
            }
            }
            panda$core$String* $tmp72 = panda$core$MutableString$finish$R$panda$core$String(result61);
            return $tmp72;
        }
        break;
        case 105:
        {
            panda$core$Int64 $tmp73 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp74 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp73, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp74.value);
            panda$core$MutableString* $tmp76 = (panda$core$MutableString*) malloc(48);
            $tmp76->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp76->refCount.value = 1;
            panda$core$MutableString$init($tmp76);
            result75 = $tmp76;
            panda$core$Object* $tmp78 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp79 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp78)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp79.value) {
            {
                panda$core$Object* $tmp80 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$MutableString$append$panda$core$Object(result75, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp80)));
            }
            }
            panda$core$MutableString$append$panda$core$String(result75, &$s81);
            panda$core$Object* $tmp82 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp83 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp82)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp83.value) {
            {
                panda$core$Object* $tmp84 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$MutableString$append$panda$core$Object(result75, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp84)));
            }
            }
            panda$core$Object* $tmp85 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$Bit $tmp86 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp85)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp86.value) {
            {
                panda$core$MutableString$append$panda$core$String(result75, &$s87);
                panda$core$Object* $tmp88 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$MutableString$append$panda$core$Object(result75, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp88)));
            }
            }
            panda$core$String* $tmp89 = panda$core$MutableString$finish$R$panda$core$String(result75);
            return $tmp89;
        }
        break;
        case 107:
        {
            panda$core$Int64 $tmp90 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp91 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp90, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp91.value);
            panda$core$MutableString* $tmp93 = (panda$core$MutableString*) malloc(48);
            $tmp93->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp93->refCount.value = 1;
            panda$core$Object* $tmp95 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp96 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp95));
            panda$core$MutableString$init$panda$core$String($tmp93, $tmp96);
            result92 = $tmp93;
            panda$core$Char8$init$panda$core$UInt8(&$tmp97, ((panda$core$UInt8) { 40 }));
            panda$core$MutableString$append$panda$core$Char8(result92, $tmp97);
            separator98 = &$s99;
            panda$core$Int64 $tmp101 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp100, ((panda$core$Int64) { 1 }), $tmp101, ((panda$core$Bit) { false }));
            int64_t $tmp103 = $tmp100.min.value;
            panda$core$Int64 i102 = { $tmp103 };
            int64_t $tmp105 = $tmp100.max.value;
            bool $tmp106 = $tmp100.inclusive.value;
            if ($tmp106) goto $l113; else goto $l114;
            $l113:;
            if ($tmp103 <= $tmp105) goto $l107; else goto $l109;
            $l114:;
            if ($tmp103 < $tmp105) goto $l107; else goto $l109;
            $l107:;
            {
                panda$core$MutableString$append$panda$core$String(result92, separator98);
                panda$core$Object* $tmp115 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, i102);
                panda$core$MutableString$append$panda$core$Object(result92, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp115)));
                separator98 = &$s116;
            }
            $l110:;
            int64_t $tmp118 = $tmp105 - i102.value;
            if ($tmp106) goto $l119; else goto $l120;
            $l119:;
            if ((uint64_t) $tmp118 >= 1) goto $l117; else goto $l109;
            $l120:;
            if ((uint64_t) $tmp118 > 1) goto $l117; else goto $l109;
            $l117:;
            i102.value += 1;
            goto $l107;
            $l109:;
            panda$core$Char8$init$panda$core$UInt8(&$tmp123, ((panda$core$UInt8) { 41 }));
            panda$core$MutableString$append$panda$core$Char8(result92, $tmp123);
            panda$core$String* $tmp124 = panda$core$MutableString$finish$R$panda$core$String(result92);
            return $tmp124;
        }
        break;
        case 106:
        {
            if (((panda$core$Bit) { self->children != NULL }).value) {
            {
                panda$core$Int64 $tmp125 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
                panda$core$Bit $tmp126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp125, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp126.value);
                panda$core$String* $tmp128 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(self->payload, &$s127);
                panda$core$Object* $tmp129 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp130 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp128, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp129)));
                return $tmp130;
            }
            }
            panda$core$String* $tmp132 = (($fn131) self->payload->$class->vtable[0])(self->payload);
            return $tmp132;
        }
        break;
        case 108:
        {
            panda$core$Int64 $tmp133 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp133, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp134.value);
            panda$core$Object* $tmp135 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp136 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp135));
            panda$core$String* $tmp138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp136, &$s137);
            panda$core$String* $tmp139 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp138, self->payload);
            panda$core$String* $tmp141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp139, &$s140);
            return $tmp141;
        }
        break;
        case 118:
        {
            panda$core$Int64 $tmp143 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp143, ((panda$core$Int64) { 2 }));
            bool $tmp142 = $tmp144.value;
            if ($tmp142) goto $l145;
            panda$core$Int64 $tmp146 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp146, ((panda$core$Int64) { 3 }));
            $tmp142 = $tmp147.value;
            $l145:;
            panda$core$Bit $tmp148 = { $tmp142 };
            PANDA_ASSERT($tmp148.value);
            panda$core$Object* $tmp151 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp152 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s150, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp151)));
            panda$core$String* $tmp154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp152, &$s153);
            panda$core$Object* $tmp155 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp156 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp154, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp155)));
            panda$core$String* $tmp158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp156, &$s157);
            result149 = $tmp158;
            panda$core$Int64 $tmp159 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp159, ((panda$core$Int64) { 3 }));
            if ($tmp160.value) {
            {
                panda$core$Object* $tmp162 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$String* $tmp163 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s161, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp162)));
                panda$core$String* $tmp165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp163, &$s164);
                panda$core$String* $tmp166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result149, $tmp165);
                return $tmp166;
            }
            }
            return result149;
        }
        break;
        case 119:
        {
            panda$core$Int64 $tmp167 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp167, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp168.value);
            panda$core$Object* $tmp170 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp171 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s169, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp170)));
            panda$core$String* $tmp173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp171, &$s172);
            panda$core$Object* $tmp174 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp173, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp174)));
            panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp175, &$s176);
            panda$core$Object* $tmp178 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp179 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp177, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp178)));
            panda$core$String* $tmp181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp179, &$s180);
            return $tmp181;
        }
        break;
        case 121:
        {
            panda$core$Int64 $tmp182 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp182, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp183.value);
            panda$core$Object* $tmp185 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp186 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s184, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp185)));
            panda$core$String* $tmp188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp186, &$s187);
            panda$core$Object* $tmp189 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp190 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp188, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp189)));
            panda$core$String* $tmp192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp190, &$s191);
            return $tmp192;
        }
        break;
        case 120:
        {
            panda$core$Int64 $tmp193 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp193, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp194.value);
            panda$core$Object* $tmp196 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp197 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s195, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp196)));
            panda$core$String* $tmp199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp197, &$s198);
            panda$core$Object* $tmp200 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp201 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp199, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp200)));
            panda$core$String* $tmp203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp201, &$s202);
            return $tmp203;
        }
        break;
        case 122:
        {
            panda$core$Int64 $tmp204 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp204, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp205.value);
            panda$core$Object* $tmp207 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp208 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s206, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp207)));
            panda$core$String* $tmp210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp208, &$s209);
            return $tmp210;
        }
        break;
        case 134:
        {
            if (((panda$core$Bit) { self->payload != NULL }).value) {
            {
                panda$core$String* $tmp212 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s211, self->payload);
                panda$core$String* $tmp214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp212, &$s213);
                return $tmp214;
            }
            }
            return &$s215;
        }
        break;
        case 135:
        {
            if (((panda$core$Bit) { self->payload != NULL }).value) {
            {
                panda$core$String* $tmp217 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s216, self->payload);
                panda$core$String* $tmp219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp217, &$s218);
                return $tmp219;
            }
            }
            return &$s220;
        }
        break;
        case 136:
        {
            if (((panda$core$Bit) { self->children != NULL }).value) {
            {
                panda$core$Int64 $tmp221 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
                panda$core$Bit $tmp222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp221, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp222.value);
                panda$core$Object* $tmp224 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp225 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s223, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp224)));
                panda$core$String* $tmp227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp225, &$s226);
                return $tmp227;
            }
            }
            return &$s228;
        }
        break;
        case 126:
        {
            panda$core$MutableString* $tmp230 = (panda$core$MutableString*) malloc(48);
            $tmp230->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp230->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp230, &$s232);
            result229 = $tmp230;
            {
                ITable* $tmp234 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp234->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp234 = $tmp234->next;
                }
                $fn236 $tmp235 = $tmp234->methods[0];
                panda$collections$Iterator* $tmp237 = $tmp235(((panda$collections$Iterable*) self->children));
                child$Iter233 = $tmp237;
                $l238:;
                ITable* $tmp240 = child$Iter233->$class->itable;
                while ($tmp240->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp240 = $tmp240->next;
                }
                $fn242 $tmp241 = $tmp240->methods[0];
                panda$core$Bit $tmp243 = $tmp241(child$Iter233);
                panda$core$Bit $tmp244 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp243);
                if (!$tmp244.value) goto $l239;
                {
                    ITable* $tmp246 = child$Iter233->$class->itable;
                    while ($tmp246->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp246 = $tmp246->next;
                    }
                    $fn248 $tmp247 = $tmp246->methods[1];
                    panda$core$Object* $tmp249 = $tmp247(child$Iter233);
                    child245 = ((org$pandalanguage$pandac$ASTNode*) $tmp249);
                    panda$core$String* $tmp251 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(child245);
                    c250 = $tmp251;
                    panda$core$Bit $tmp254 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(c250, &$s253);
                    bool $tmp252 = $tmp254.value;
                    if (!$tmp252) goto $l255;
                    panda$core$Bit $tmp257 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(c250, &$s256);
                    $tmp252 = $tmp257.value;
                    $l255:;
                    panda$core$Bit $tmp258 = { $tmp252 };
                    if ($tmp258.value) {
                    {
                        panda$core$String$Index $tmp260 = panda$core$String$start$R$panda$core$String$Index(c250);
                        panda$core$String$Index $tmp261 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(c250, $tmp260);
                        panda$core$String$Index $tmp262 = panda$core$String$end$R$panda$core$String$Index(c250);
                        panda$core$String$Index $tmp263 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(c250, $tmp262);
                        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp259, $tmp261, $tmp263, ((panda$core$Bit) { false }));
                        panda$core$String* $tmp264 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(c250, $tmp259);
                        panda$core$MutableString$append$panda$core$String(result229, $tmp264);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$Object(result229, ((panda$core$Object*) child245));
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp265, ((panda$core$UInt8) { 10 }));
                    panda$core$MutableString$append$panda$core$Char8(result229, $tmp265);
                }
                goto $l238;
                $l239:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp266, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result229, $tmp266);
            panda$core$String* $tmp267 = panda$core$MutableString$finish$R$panda$core$String(result229);
            return $tmp267;
        }
        break;
        case 109:
        {
            panda$core$String* $tmp269 = (($fn268) self->payload->$class->vtable[0])(self->payload);
            return $tmp269;
        }
        break;
        case 110:
        {
            panda$core$Object* $tmp270 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp272 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp270)), &$s271);
            return $tmp272;
        }
        break;
        case 154:
        {
            panda$core$MutableString* $tmp274 = (panda$core$MutableString*) malloc(48);
            $tmp274->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp274->refCount.value = 1;
            panda$core$Object* $tmp276 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp277 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp276));
            panda$core$MutableString$init$panda$core$String($tmp274, $tmp277);
            result273 = $tmp274;
            panda$core$Char8$init$panda$core$UInt8(&$tmp278, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(result273, $tmp278);
            separator279 = &$s280;
            {
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp282, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$collections$ImmutableArray* $tmp283 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(self->children, $tmp282);
                ITable* $tmp284 = ((panda$collections$Iterable*) $tmp283)->$class->itable;
                while ($tmp284->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp284 = $tmp284->next;
                }
                $fn286 $tmp285 = $tmp284->methods[0];
                panda$collections$Iterator* $tmp287 = $tmp285(((panda$collections$Iterable*) $tmp283));
                c$Iter281 = $tmp287;
                $l288:;
                ITable* $tmp290 = c$Iter281->$class->itable;
                while ($tmp290->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp290 = $tmp290->next;
                }
                $fn292 $tmp291 = $tmp290->methods[0];
                panda$core$Bit $tmp293 = $tmp291(c$Iter281);
                panda$core$Bit $tmp294 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp293);
                if (!$tmp294.value) goto $l289;
                {
                    ITable* $tmp296 = c$Iter281->$class->itable;
                    while ($tmp296->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp296 = $tmp296->next;
                    }
                    $fn298 $tmp297 = $tmp296->methods[1];
                    panda$core$Object* $tmp299 = $tmp297(c$Iter281);
                    c295 = ((org$pandalanguage$pandac$ASTNode*) $tmp299);
                    panda$core$MutableString$append$panda$core$String(result273, separator279);
                    panda$core$MutableString$append$panda$core$Object(result273, ((panda$core$Object*) c295));
                    separator279 = &$s300;
                }
                goto $l288;
                $l289:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp301, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(result273, $tmp301);
            panda$core$String* $tmp302 = panda$core$MutableString$finish$R$panda$core$String(result273);
            return $tmp302;
        }
        break;
        case 139:
        {
            panda$core$MutableString* $tmp304 = (panda$core$MutableString*) malloc(48);
            $tmp304->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp304->refCount.value = 1;
            panda$core$MutableString$init($tmp304);
            result303 = $tmp304;
            separator306 = &$s307;
            {
                ITable* $tmp309 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp309->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp309 = $tmp309->next;
                }
                $fn311 $tmp310 = $tmp309->methods[0];
                panda$collections$Iterator* $tmp312 = $tmp310(((panda$collections$Iterable*) self->children));
                c$Iter308 = $tmp312;
                $l313:;
                ITable* $tmp315 = c$Iter308->$class->itable;
                while ($tmp315->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp315 = $tmp315->next;
                }
                $fn317 $tmp316 = $tmp315->methods[0];
                panda$core$Bit $tmp318 = $tmp316(c$Iter308);
                panda$core$Bit $tmp319 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp318);
                if (!$tmp319.value) goto $l314;
                {
                    ITable* $tmp321 = c$Iter308->$class->itable;
                    while ($tmp321->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp321 = $tmp321->next;
                    }
                    $fn323 $tmp322 = $tmp321->methods[1];
                    panda$core$Object* $tmp324 = $tmp322(c$Iter308);
                    c320 = ((org$pandalanguage$pandac$ASTNode*) $tmp324);
                    panda$core$MutableString$append$panda$core$String(result303, separator306);
                    panda$core$MutableString$append$panda$core$Object(result303, ((panda$core$Object*) c320));
                    separator306 = &$s325;
                }
                goto $l313;
                $l314:;
            }
            panda$core$String* $tmp326 = panda$core$MutableString$finish$R$panda$core$String(result303);
            return $tmp326;
        }
        break;
        case 143:
        {
            panda$core$String* $tmp328 = (($fn327) self->payload->$class->vtable[0])(self->payload);
            return $tmp328;
        }
        break;
        case 144:
        {
            panda$core$MutableString* $tmp330 = (panda$core$MutableString*) malloc(48);
            $tmp330->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp330->refCount.value = 1;
            panda$core$MutableString$init($tmp330);
            result329 = $tmp330;
            {
                ITable* $tmp333 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp333->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp333 = $tmp333->next;
                }
                $fn335 $tmp334 = $tmp333->methods[0];
                panda$collections$Iterator* $tmp336 = $tmp334(((panda$collections$Iterable*) self->children));
                c$Iter332 = $tmp336;
                $l337:;
                ITable* $tmp339 = c$Iter332->$class->itable;
                while ($tmp339->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp339 = $tmp339->next;
                }
                $fn341 $tmp340 = $tmp339->methods[0];
                panda$core$Bit $tmp342 = $tmp340(c$Iter332);
                panda$core$Bit $tmp343 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp342);
                if (!$tmp343.value) goto $l338;
                {
                    ITable* $tmp345 = c$Iter332->$class->itable;
                    while ($tmp345->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp345 = $tmp345->next;
                    }
                    $fn347 $tmp346 = $tmp345->methods[1];
                    panda$core$Object* $tmp348 = $tmp346(c$Iter332);
                    c344 = ((org$pandalanguage$pandac$ASTNode*) $tmp348);
                    panda$core$MutableString$append$panda$core$Object(result329, ((panda$core$Object*) c344));
                    panda$core$Char8$init$panda$core$UInt8(&$tmp349, ((panda$core$UInt8) { 10 }));
                    panda$core$MutableString$append$panda$core$Char8(result329, $tmp349);
                }
                goto $l337;
                $l338:;
            }
            panda$core$String* $tmp350 = panda$core$MutableString$finish$R$panda$core$String(result329);
            return $tmp350;
        }
        break;
        case 129:
        {
            panda$core$Int64 $tmp351 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp351, ((panda$core$Int64) { 1 }));
            if ($tmp352.value) {
            {
                panda$core$Object* $tmp353 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp354 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp353));
                return $tmp354;
            }
            }
            panda$core$Object* $tmp355 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp356 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp355));
            panda$core$String* $tmp358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp356, &$s357);
            panda$core$Object* $tmp359 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp360 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp358, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp359)));
            panda$core$String* $tmp362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp360, &$s361);
            return $tmp362;
        }
        break;
        case 130:
        {
            panda$core$MutableString* $tmp364 = (panda$core$MutableString*) malloc(48);
            $tmp364->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp364->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp364, &$s366);
            result363 = $tmp364;
            separator367 = &$s368;
            {
                ITable* $tmp370 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp370->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp370 = $tmp370->next;
                }
                $fn372 $tmp371 = $tmp370->methods[0];
                panda$collections$Iterator* $tmp373 = $tmp371(((panda$collections$Iterable*) self->children));
                c$Iter369 = $tmp373;
                $l374:;
                ITable* $tmp376 = c$Iter369->$class->itable;
                while ($tmp376->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp376 = $tmp376->next;
                }
                $fn378 $tmp377 = $tmp376->methods[0];
                panda$core$Bit $tmp379 = $tmp377(c$Iter369);
                panda$core$Bit $tmp380 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp379);
                if (!$tmp380.value) goto $l375;
                {
                    ITable* $tmp382 = c$Iter369->$class->itable;
                    while ($tmp382->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp382 = $tmp382->next;
                    }
                    $fn384 $tmp383 = $tmp382->methods[1];
                    panda$core$Object* $tmp385 = $tmp383(c$Iter369);
                    c381 = ((org$pandalanguage$pandac$ASTNode*) $tmp385);
                    panda$core$MutableString$append$panda$core$String(result363, separator367);
                    panda$core$MutableString$append$panda$core$Object(result363, ((panda$core$Object*) c381));
                    separator367 = &$s386;
                }
                goto $l374;
                $l375:;
            }
            panda$core$String* $tmp387 = panda$core$MutableString$finish$R$panda$core$String(result363);
            return $tmp387;
        }
        break;
        case 131:
        {
            panda$core$MutableString* $tmp389 = (panda$core$MutableString*) malloc(48);
            $tmp389->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp389->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp389, &$s391);
            result388 = $tmp389;
            separator392 = &$s393;
            {
                ITable* $tmp395 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp395->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp395 = $tmp395->next;
                }
                $fn397 $tmp396 = $tmp395->methods[0];
                panda$collections$Iterator* $tmp398 = $tmp396(((panda$collections$Iterable*) self->children));
                c$Iter394 = $tmp398;
                $l399:;
                ITable* $tmp401 = c$Iter394->$class->itable;
                while ($tmp401->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp401 = $tmp401->next;
                }
                $fn403 $tmp402 = $tmp401->methods[0];
                panda$core$Bit $tmp404 = $tmp402(c$Iter394);
                panda$core$Bit $tmp405 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp404);
                if (!$tmp405.value) goto $l400;
                {
                    ITable* $tmp407 = c$Iter394->$class->itable;
                    while ($tmp407->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp407 = $tmp407->next;
                    }
                    $fn409 $tmp408 = $tmp407->methods[1];
                    panda$core$Object* $tmp410 = $tmp408(c$Iter394);
                    c406 = ((org$pandalanguage$pandac$ASTNode*) $tmp410);
                    panda$core$MutableString$append$panda$core$String(result388, separator392);
                    panda$core$MutableString$append$panda$core$Object(result388, ((panda$core$Object*) c406));
                    separator392 = &$s411;
                }
                goto $l399;
                $l400:;
            }
            panda$core$String* $tmp412 = panda$core$MutableString$finish$R$panda$core$String(result388);
            return $tmp412;
        }
        break;
        case 133:
        {
            panda$core$MutableString* $tmp414 = (panda$core$MutableString*) malloc(48);
            $tmp414->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp414->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp414, &$s416);
            result413 = $tmp414;
            separator417 = &$s418;
            {
                ITable* $tmp420 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp420->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp420 = $tmp420->next;
                }
                $fn422 $tmp421 = $tmp420->methods[0];
                panda$collections$Iterator* $tmp423 = $tmp421(((panda$collections$Iterable*) self->children));
                c$Iter419 = $tmp423;
                $l424:;
                ITable* $tmp426 = c$Iter419->$class->itable;
                while ($tmp426->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp426 = $tmp426->next;
                }
                $fn428 $tmp427 = $tmp426->methods[0];
                panda$core$Bit $tmp429 = $tmp427(c$Iter419);
                panda$core$Bit $tmp430 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp429);
                if (!$tmp430.value) goto $l425;
                {
                    ITable* $tmp432 = c$Iter419->$class->itable;
                    while ($tmp432->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp432 = $tmp432->next;
                    }
                    $fn434 $tmp433 = $tmp432->methods[1];
                    panda$core$Object* $tmp435 = $tmp433(c$Iter419);
                    c431 = ((org$pandalanguage$pandac$ASTNode*) $tmp435);
                    panda$core$MutableString$append$panda$core$String(result413, separator417);
                    panda$core$MutableString$append$panda$core$Object(result413, ((panda$core$Object*) c431));
                    separator417 = &$s436;
                }
                goto $l424;
                $l425:;
            }
            panda$core$String* $tmp437 = panda$core$MutableString$finish$R$panda$core$String(result413);
            return $tmp437;
        }
        break;
        case 132:
        {
            panda$core$MutableString* $tmp439 = (panda$core$MutableString*) malloc(48);
            $tmp439->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp439->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp439, &$s441);
            result438 = $tmp439;
            separator442 = &$s443;
            {
                ITable* $tmp445 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp445->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp445 = $tmp445->next;
                }
                $fn447 $tmp446 = $tmp445->methods[0];
                panda$collections$Iterator* $tmp448 = $tmp446(((panda$collections$Iterable*) self->children));
                c$Iter444 = $tmp448;
                $l449:;
                ITable* $tmp451 = c$Iter444->$class->itable;
                while ($tmp451->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp451 = $tmp451->next;
                }
                $fn453 $tmp452 = $tmp451->methods[0];
                panda$core$Bit $tmp454 = $tmp452(c$Iter444);
                panda$core$Bit $tmp455 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp454);
                if (!$tmp455.value) goto $l450;
                {
                    ITable* $tmp457 = c$Iter444->$class->itable;
                    while ($tmp457->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp457 = $tmp457->next;
                    }
                    $fn459 $tmp458 = $tmp457->methods[1];
                    panda$core$Object* $tmp460 = $tmp458(c$Iter444);
                    c456 = ((org$pandalanguage$pandac$ASTNode*) $tmp460);
                    panda$core$MutableString$append$panda$core$String(result438, separator442);
                    panda$core$MutableString$append$panda$core$Object(result438, ((panda$core$Object*) c456));
                    separator442 = &$s461;
                }
                goto $l449;
                $l450:;
            }
            panda$core$String* $tmp462 = panda$core$MutableString$finish$R$panda$core$String(result438);
            return $tmp462;
        }
        break;
        case 148:
        {
            panda$core$Int64 $tmp463 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp463, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp464.value);
            panda$core$Object* $tmp465 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp466 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp465));
            panda$core$String* $tmp468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp466, &$s467);
            panda$core$Object* $tmp469 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp470 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp468, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp469)));
            panda$core$String* $tmp472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp470, &$s471);
            panda$core$Object* $tmp473 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp474 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp472, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp473)));
            panda$core$String* $tmp476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp474, &$s475);
            return $tmp476;
        }
        break;
        case 149:
        {
            panda$core$Int64 $tmp477 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp477, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp478.value);
            panda$core$String* $tmp480 = (($fn479) self->payload->$class->vtable[0])(self->payload);
            panda$core$String* $tmp482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp480, &$s481);
            panda$core$Object* $tmp483 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp484 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp482, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp483)));
            panda$core$String* $tmp486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp484, &$s485);
            return $tmp486;
        }
        break;
        case 150:
        {
            panda$core$MutableString* $tmp488 = (panda$core$MutableString*) malloc(48);
            $tmp488->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp488->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp488, &$s490);
            result487 = $tmp488;
            separator491 = &$s492;
            {
                ITable* $tmp494 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp494->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp494 = $tmp494->next;
                }
                $fn496 $tmp495 = $tmp494->methods[0];
                panda$collections$Iterator* $tmp497 = $tmp495(((panda$collections$Iterable*) self->children));
                c$Iter493 = $tmp497;
                $l498:;
                ITable* $tmp500 = c$Iter493->$class->itable;
                while ($tmp500->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp500 = $tmp500->next;
                }
                $fn502 $tmp501 = $tmp500->methods[0];
                panda$core$Bit $tmp503 = $tmp501(c$Iter493);
                panda$core$Bit $tmp504 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp503);
                if (!$tmp504.value) goto $l499;
                {
                    ITable* $tmp506 = c$Iter493->$class->itable;
                    while ($tmp506->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp506 = $tmp506->next;
                    }
                    $fn508 $tmp507 = $tmp506->methods[1];
                    panda$core$Object* $tmp509 = $tmp507(c$Iter493);
                    c505 = ((org$pandalanguage$pandac$ASTNode*) $tmp509);
                    panda$core$MutableString$append$panda$core$String(result487, separator491);
                    panda$core$MutableString$append$panda$core$Object(result487, ((panda$core$Object*) c505));
                    separator491 = &$s510;
                }
                goto $l498;
                $l499:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp511, ((panda$core$UInt8) { 41 }));
            panda$core$MutableString$append$panda$core$Char8(result487, $tmp511);
            panda$core$String* $tmp512 = panda$core$MutableString$finish$R$panda$core$String(result487);
            return $tmp512;
        }
        break;
        case 147:
        {
            panda$core$Int64 $tmp513 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp513, ((panda$core$Int64) { 5 }));
            PANDA_ASSERT($tmp514.value);
            panda$core$Object* $tmp515 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp516 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp515));
            panda$core$String* $tmp518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp516, &$s517);
            panda$core$Object* $tmp519 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp520 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp518, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp519)));
            panda$core$String* $tmp522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp520, &$s521);
            panda$core$Object* $tmp523 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp524 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp522, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp523)));
            panda$core$String* $tmp526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp524, &$s525);
            panda$core$Object* $tmp527 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp528 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp526, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp527)));
            panda$core$String* $tmp530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp528, &$s529);
            panda$core$Object* $tmp531 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp532 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp530, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp531)));
            panda$core$String* $tmp534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp532, &$s533);
            return $tmp534;
        }
        break;
        case 145:
        {
            panda$core$Int64 $tmp535 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp535, ((panda$core$Int64) { 6 }));
            PANDA_ASSERT($tmp536.value);
            panda$core$Object* $tmp537 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp538 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp537));
            panda$core$String* $tmp540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp538, &$s539);
            panda$core$Object* $tmp541 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp542 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp540, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp541)));
            panda$core$String* $tmp544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp542, &$s543);
            panda$core$String* $tmp545 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp544, self->payload);
            panda$core$String* $tmp547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp545, &$s546);
            panda$core$Object* $tmp548 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp549 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp547, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp548)));
            panda$core$String* $tmp551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp549, &$s550);
            panda$core$Object* $tmp552 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp553 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp552));
            panda$core$String* $tmp555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp553, &$s554);
            panda$core$Object* $tmp556 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp557 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp555, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp556)));
            panda$core$String* $tmp559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp557, &$s558);
            panda$core$Object* $tmp560 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$String* $tmp561 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp559, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp560)));
            panda$core$String* $tmp563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp561, &$s562);
            panda$core$String* $tmp564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp551, $tmp563);
            return $tmp564;
        }
        break;
        case 146:
        {
            panda$core$Int64 $tmp565 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp565, ((panda$core$Int64) { 6 }));
            PANDA_ASSERT($tmp566.value);
            {
                ITable* $tmp568 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp568->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp568 = $tmp568->next;
                }
                $fn570 $tmp569 = $tmp568->methods[0];
                panda$collections$Iterator* $tmp571 = $tmp569(((panda$collections$Iterable*) self->children));
                c$Iter567 = $tmp571;
                $l572:;
                ITable* $tmp574 = c$Iter567->$class->itable;
                while ($tmp574->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp574 = $tmp574->next;
                }
                $fn576 $tmp575 = $tmp574->methods[0];
                panda$core$Bit $tmp577 = $tmp575(c$Iter567);
                panda$core$Bit $tmp578 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp577);
                if (!$tmp578.value) goto $l573;
                {
                    ITable* $tmp580 = c$Iter567->$class->itable;
                    while ($tmp580->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp580 = $tmp580->next;
                    }
                    $fn582 $tmp581 = $tmp580->methods[1];
                    panda$core$Object* $tmp583 = $tmp581(c$Iter567);
                    c579 = ((org$pandalanguage$pandac$ASTNode*) $tmp583);
                    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) c579));
                }
                goto $l572;
                $l573:;
            }
            panda$core$Object* $tmp584 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp585 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp584));
            panda$core$String* $tmp587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp585, &$s586);
            panda$core$Object* $tmp588 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp589 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp587, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp588)));
            panda$core$String* $tmp591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp589, &$s590);
            panda$core$String* $tmp592 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp591, self->payload);
            panda$core$String* $tmp594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp592, &$s593);
            panda$core$Object* $tmp595 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp596 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp594, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp595)));
            panda$core$String* $tmp598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp596, &$s597);
            panda$core$Object* $tmp599 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp600 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp599));
            panda$core$String* $tmp602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp600, &$s601);
            panda$core$Object* $tmp603 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp604 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp602, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp603)));
            panda$core$String* $tmp606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp604, &$s605);
            panda$core$Object* $tmp607 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$String* $tmp608 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp606, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp607)));
            panda$core$String* $tmp610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp608, &$s609);
            panda$core$String* $tmp611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp598, $tmp610);
            return $tmp611;
        }
        break;
        case 140:
        {
            panda$core$MutableString* $tmp613 = (panda$core$MutableString*) malloc(48);
            $tmp613->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp613->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp613, &$s615);
            result612 = $tmp613;
            {
                ITable* $tmp617 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp617->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp617 = $tmp617->next;
                }
                $fn619 $tmp618 = $tmp617->methods[0];
                panda$collections$Iterator* $tmp620 = $tmp618(((panda$collections$Iterable*) self->children));
                c$Iter616 = $tmp620;
                $l621:;
                ITable* $tmp623 = c$Iter616->$class->itable;
                while ($tmp623->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp623 = $tmp623->next;
                }
                $fn625 $tmp624 = $tmp623->methods[0];
                panda$core$Bit $tmp626 = $tmp624(c$Iter616);
                panda$core$Bit $tmp627 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp626);
                if (!$tmp627.value) goto $l622;
                {
                    ITable* $tmp629 = c$Iter616->$class->itable;
                    while ($tmp629->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp629 = $tmp629->next;
                    }
                    $fn631 $tmp630 = $tmp629->methods[1];
                    panda$core$Object* $tmp632 = $tmp630(c$Iter616);
                    c628 = ((org$pandalanguage$pandac$ASTNode*) $tmp632);
                    panda$core$MutableString$append$panda$core$Object(result612, ((panda$core$Object*) c628));
                    panda$core$Char8$init$panda$core$UInt8(&$tmp633, ((panda$core$UInt8) { 10 }));
                    panda$core$MutableString$append$panda$core$Char8(result612, $tmp633);
                }
                goto $l621;
                $l622:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp634, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result612, $tmp634);
            panda$core$String* $tmp635 = panda$core$MutableString$finish$R$panda$core$String(result612);
            return $tmp635;
        }
        break;
        case 142:
        {
            panda$core$Int64 $tmp636 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp636, ((panda$core$Int64) { 6 }));
            PANDA_ASSERT($tmp637.value);
            panda$core$MutableString* $tmp639 = (panda$core$MutableString*) malloc(48);
            $tmp639->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp639->refCount.value = 1;
            panda$core$MutableString$init($tmp639);
            result638 = $tmp639;
            panda$core$Object* $tmp641 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$append$panda$core$Object(result638, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp641)));
            panda$core$Object* $tmp642 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$MutableString$append$panda$core$Object(result638, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp642)));
            panda$core$String* $tmp644 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s643, self->payload);
            panda$core$String* $tmp646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp644, &$s645);
            panda$core$MutableString$append$panda$core$String(result638, $tmp646);
            panda$core$Object* $tmp647 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$MutableString$append$panda$core$Object(result638, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp647)));
            panda$core$Object* $tmp648 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$Bit $tmp649 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp648)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp649.value) {
            {
                panda$core$MutableString$append$panda$core$String(result638, &$s650);
                panda$core$Object* $tmp651 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
                panda$core$MutableString$append$panda$core$Object(result638, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp651)));
            }
            }
            panda$core$Object* $tmp652 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$Bit $tmp653 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp652)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp653.value) {
            {
                panda$core$MutableString$append$panda$core$String(result638, &$s654);
                panda$core$Object* $tmp655 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
                panda$core$MutableString$append$panda$core$Object(result638, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp655)));
                panda$core$Char8$init$panda$core$UInt8(&$tmp656, ((panda$core$UInt8) { 41 }));
                panda$core$MutableString$append$panda$core$Char8(result638, $tmp656);
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp657, ((panda$core$UInt8) { 32 }));
            panda$core$MutableString$append$panda$core$Char8(result638, $tmp657);
            panda$core$Object* $tmp658 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$MutableString$append$panda$core$Object(result638, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp658)));
            panda$core$String* $tmp659 = panda$core$MutableString$finish$R$panda$core$String(result638);
            return $tmp659;
        }
        break;
        case 151:
        {
            panda$core$Int64 $tmp660 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp660, ((panda$core$Int64) { 5 }));
            PANDA_ASSERT($tmp661.value);
            panda$core$MutableString* $tmp663 = (panda$core$MutableString*) malloc(48);
            $tmp663->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp663->refCount.value = 1;
            panda$core$MutableString$init($tmp663);
            result662 = $tmp663;
            panda$core$Object* $tmp665 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$append$panda$core$Object(result662, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp665)));
            panda$core$Object* $tmp666 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$MutableString$append$panda$core$Object(result662, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp666)));
            panda$core$String* $tmp668 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s667, self->payload);
            panda$core$String* $tmp670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp668, &$s669);
            panda$core$MutableString$append$panda$core$String(result662, $tmp670);
            panda$core$Object* $tmp671 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$MutableString$append$panda$core$Object(result662, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp671)));
            panda$core$Char8$init$panda$core$UInt8(&$tmp672, ((panda$core$UInt8) { 32 }));
            panda$core$MutableString$append$panda$core$Char8(result662, $tmp672);
            panda$core$Object* $tmp673 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$MutableString$append$panda$core$Object(result662, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp673)));
            panda$core$Object* $tmp674 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$MutableString$append$panda$core$Object(result662, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp674)));
            panda$core$String* $tmp675 = panda$core$MutableString$finish$R$panda$core$String(result662);
            return $tmp675;
        }
        break;
        case 152:
        {
            panda$core$MutableString* $tmp677 = (panda$core$MutableString*) malloc(48);
            $tmp677->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp677->refCount.value = 1;
            panda$core$MutableString$init($tmp677);
            result676 = $tmp677;
            {
                ITable* $tmp680 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp680->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp680 = $tmp680->next;
                }
                $fn682 $tmp681 = $tmp680->methods[0];
                panda$collections$Iterator* $tmp683 = $tmp681(((panda$collections$Iterable*) self->children));
                c$Iter679 = $tmp683;
                $l684:;
                ITable* $tmp686 = c$Iter679->$class->itable;
                while ($tmp686->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp686 = $tmp686->next;
                }
                $fn688 $tmp687 = $tmp686->methods[0];
                panda$core$Bit $tmp689 = $tmp687(c$Iter679);
                panda$core$Bit $tmp690 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp689);
                if (!$tmp690.value) goto $l685;
                {
                    ITable* $tmp692 = c$Iter679->$class->itable;
                    while ($tmp692->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp692 = $tmp692->next;
                    }
                    $fn694 $tmp693 = $tmp692->methods[1];
                    panda$core$Object* $tmp695 = $tmp693(c$Iter679);
                    c691 = ((org$pandalanguage$pandac$ASTNode*) $tmp695);
                    panda$core$MutableString$append$panda$core$Object(result676, ((panda$core$Object*) c691));
                    panda$core$Char8$init$panda$core$UInt8(&$tmp696, ((panda$core$UInt8) { 10 }));
                    panda$core$MutableString$append$panda$core$Char8(result676, $tmp696);
                }
                goto $l684;
                $l685:;
            }
            panda$core$String* $tmp697 = panda$core$MutableString$finish$R$panda$core$String(result676);
            return $tmp697;
        }
        break;
        case 114:
        {
            return &$s698;
        }
        break;
        case 115:
        {
            return &$s699;
        }
        break;
        case 138:
        {
            return &$s700;
        }
        break;
        case 117:
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
        case 123:
        {
            panda$core$Int64 $tmp710 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp710, ((panda$core$Int64) { 1 }));
            if ($tmp711.value) {
            {
                panda$core$Object* $tmp713 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp714 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s712, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp713)));
                panda$core$String* $tmp716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp714, &$s715);
                return $tmp716;
            }
            }
            panda$core$Int64 $tmp717 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp717, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp718.value);
            panda$core$Object* $tmp720 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp721 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s719, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp720)));
            panda$core$String* $tmp723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp721, &$s722);
            panda$core$Object* $tmp724 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp725 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp723, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp724)));
            panda$core$String* $tmp727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp725, &$s726);
            return $tmp727;
        }
        break;
        default:
        {
            panda$core$Int64$wrapper* $tmp729;
            $tmp729 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp729->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp729->refCount = 1;
            $tmp729->value = self->kind;
            panda$core$String* $tmp730 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s728, ((panda$core$Object*) $tmp729));
            panda$core$String* $tmp732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp730, &$s731);
            return $tmp732;
        }
    }
}

