#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/String.h"
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

typedef panda$core$String* (*$fn65)(panda$core$Object*);
typedef panda$core$String* (*$fn67)(panda$core$Object*);
typedef panda$core$String* (*$fn70)(panda$core$Object*);
typedef panda$core$String* (*$fn155)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn260)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn266)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn272)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn292)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn310)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn316)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn322)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn335)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn341)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn347)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn351)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn359)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn365)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn371)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn396)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn402)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn408)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn421)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn427)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn433)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn446)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn452)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn458)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn471)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn477)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn483)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn503)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn520)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn526)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn532)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn594)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn600)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn606)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn643)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn649)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn655)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn706)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn712)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn718)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f\x2f", 2, 14995, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2b\x3d", 2, 14605, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x3d", 2, 14100, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f\x3d", 2, 15009, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f\x2f\x3d", 3, 1514556, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a\x3d", 2, 14504, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3d", 2, 14807, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x3d", 2, 16120, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x6f\x70\x65\x72\x61\x74\x6f\x72\x3a", 10, -7170024553821458165, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x63\x6b\x61\x67\x65\x20", 8, 22940502189900249, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x73\x65\x73\x20", 5, 22804693981, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x6c\x73\x65\x20", 6, 1408465922990, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x6f\x20", 3, 2061644, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x68\x69\x6c\x65\x20", 7, 142443813564802, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20", 5, 21864130875, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, 13473, NULL };
static panda$core$String $s691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x41\x53\x54\x4e\x6f\x64\x65\x3a", 9, 1750457173102951541, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };

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
        case 74:
        {
            return &$s7;
        }
        break;
        case 83:
        {
            return &$s8;
        }
        break;
        case 77:
        {
            return &$s9;
        }
        break;
        case 79:
        {
            return &$s10;
        }
        break;
        case 76:
        {
            return &$s11;
        }
        break;
        case 75:
        {
            return &$s12;
        }
        break;
        case 68:
        {
            return &$s13;
        }
        break;
        case 73:
        {
            return &$s14;
        }
        break;
        case 58:
        {
            return &$s15;
        }
        break;
        case 59:
        {
            return &$s16;
        }
        break;
        case 63:
        {
            return &$s17;
        }
        break;
        case 65:
        {
            return &$s18;
        }
        break;
        case 62:
        {
            return &$s19;
        }
        break;
        case 64:
        {
            return &$s20;
        }
        break;
        default:
        {
            panda$core$Int64$wrapper* $tmp22;
            $tmp22 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp22->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp22->refCount = 1;
            $tmp22->value = p_op;
            panda$core$String* $tmp23 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s21, ((panda$core$Object*) $tmp22));
            panda$core$String* $tmp25 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp23, &$s24);
            return $tmp25;
        }
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position) {
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_kind, p_position, NULL, NULL);
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$UInt64 p_payload) {
    panda$core$UInt64$wrapper* $tmp26;
    $tmp26 = (panda$core$UInt64$wrapper*) malloc(24);
    $tmp26->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
    $tmp26->refCount = 1;
    $tmp26->value = p_payload;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_kind, p_position, ((panda$core$Object*) $tmp26), NULL);
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$Real64 p_payload) {
    panda$core$Real64$wrapper* $tmp27;
    $tmp27 = (panda$core$Real64$wrapper*) malloc(24);
    $tmp27->cl = (panda$core$Class*) &panda$core$Real64$wrapperclass;
    $tmp27->refCount = 1;
    $tmp27->value = p_payload;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_kind, p_position, ((panda$core$Object*) $tmp27), NULL);
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$String* p_payload) {
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_kind, p_position, ((panda$core$Object*) p_payload), NULL);
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_payload) {
    panda$core$Bit$wrapper* $tmp28;
    $tmp28 = (panda$core$Bit$wrapper*) malloc(13);
    $tmp28->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
    $tmp28->refCount = 1;
    $tmp28->value = p_payload;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_kind, p_position, ((panda$core$Object*) $tmp28), NULL);
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
        panda$collections$ImmutableArray* $tmp29 = (panda$collections$ImmutableArray*) malloc(32);
        $tmp29->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
        $tmp29->refCount.value = 1;
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp29, p_children);
        self->children = $tmp29;
    }
    }
    else {
    {
        self->children = NULL;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(org$pandalanguage$pandac$ASTNode* self) {
    panda$core$MutableString* result85;
    panda$core$MutableString* result99;
    panda$core$MutableString* result116;
    panda$core$Char8 $tmp121;
    panda$core$String* separator122;
    panda$core$Range$LTpanda$core$Int64$GT $tmp124;
    panda$core$Char8 $tmp147;
    panda$core$String* result173;
    panda$core$MutableString* result253;
    panda$collections$Iterator* child$Iter257;
    org$pandalanguage$pandac$ASTNode* child269;
    panda$core$String* c274;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp283;
    panda$core$Char8 $tmp289;
    panda$core$Char8 $tmp290;
    panda$core$MutableString* result297;
    panda$core$Char8 $tmp302;
    panda$core$String* separator303;
    panda$collections$Iterator* c$Iter305;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp306;
    org$pandalanguage$pandac$ASTNode* c319;
    panda$core$Char8 $tmp325;
    panda$core$MutableString* result327;
    panda$core$String* separator330;
    panda$collections$Iterator* c$Iter332;
    org$pandalanguage$pandac$ASTNode* c344;
    panda$core$MutableString* result353;
    panda$collections$Iterator* c$Iter356;
    org$pandalanguage$pandac$ASTNode* c368;
    panda$core$Char8 $tmp373;
    panda$core$MutableString* result387;
    panda$core$String* separator391;
    panda$collections$Iterator* c$Iter393;
    org$pandalanguage$pandac$ASTNode* c405;
    panda$core$MutableString* result412;
    panda$core$String* separator416;
    panda$collections$Iterator* c$Iter418;
    org$pandalanguage$pandac$ASTNode* c430;
    panda$core$MutableString* result437;
    panda$core$String* separator441;
    panda$collections$Iterator* c$Iter443;
    org$pandalanguage$pandac$ASTNode* c455;
    panda$core$MutableString* result462;
    panda$core$String* separator466;
    panda$collections$Iterator* c$Iter468;
    org$pandalanguage$pandac$ASTNode* c480;
    panda$core$MutableString* result511;
    panda$core$String* separator515;
    panda$collections$Iterator* c$Iter517;
    org$pandalanguage$pandac$ASTNode* c529;
    panda$core$Char8 $tmp535;
    panda$collections$Iterator* c$Iter591;
    org$pandalanguage$pandac$ASTNode* c603;
    panda$core$MutableString* result636;
    panda$collections$Iterator* c$Iter640;
    org$pandalanguage$pandac$ASTNode* c652;
    panda$core$Char8 $tmp657;
    panda$core$Char8 $tmp658;
    panda$core$MutableString* result662;
    panda$core$Char8 $tmp680;
    panda$core$Char8 $tmp681;
    panda$core$MutableString* result686;
    panda$core$Char8 $tmp696;
    panda$core$MutableString* result700;
    panda$collections$Iterator* c$Iter703;
    org$pandalanguage$pandac$ASTNode* c715;
    panda$core$Char8 $tmp720;
    switch (self->kind.value) {
        case 112:
        {
            panda$core$Int64 $tmp31 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp32 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp31, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp32.value);
            panda$core$String* $tmp33 = org$pandalanguage$pandac$ASTNode$operatorName$panda$core$Int64$R$panda$core$String(((panda$core$Int64$wrapper*) self->payload)->value);
            panda$core$String* $tmp34 = panda$core$String$convert$R$panda$core$String($tmp33);
            panda$core$String* $tmp36 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp34, &$s35);
            panda$core$Object* $tmp37 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp38 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp36, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp37)));
            panda$core$String* $tmp40 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp38, &$s39);
            return $tmp40;
        }
        break;
        case 103:
        {
            panda$core$Int64 $tmp41 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp42 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp41, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp42.value);
            panda$core$Bit $tmp43 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64$wrapper*) self->payload)->value, ((panda$core$Int64) { 101 }));
            if ($tmp43.value) {
            {
                panda$core$Object* $tmp44 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp45 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp44));
                panda$core$String* $tmp47 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp45, &$s46);
                panda$core$Object* $tmp48 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp49 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp47, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp48)));
                panda$core$String* $tmp51 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp49, &$s50);
                return $tmp51;
            }
            }
            panda$core$Object* $tmp53 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp54 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s52, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp53)));
            panda$core$String* $tmp56 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp54, &$s55);
            panda$core$String* $tmp57 = org$pandalanguage$pandac$ASTNode$operatorName$panda$core$Int64$R$panda$core$String(((panda$core$Int64$wrapper*) self->payload)->value);
            panda$core$String* $tmp58 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp56, $tmp57);
            panda$core$String* $tmp60 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp58, &$s59);
            panda$core$Object* $tmp61 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp62 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp60, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp61)));
            panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp62, &$s63);
            return $tmp64;
        }
        break;
        case 102:
        {
            panda$core$String* $tmp66 = (($fn65) self->payload->$class->vtable[0])(self->payload);
            return $tmp66;
        }
        break;
        case 116:
        {
            panda$core$String* $tmp68 = (($fn67) self->payload->$class->vtable[0])(self->payload);
            return $tmp68;
        }
        break;
        case 113:
        {
            panda$core$String* $tmp71 = (($fn70) self->payload->$class->vtable[0])(self->payload);
            panda$core$String* $tmp72 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s69, $tmp71);
            panda$core$String* $tmp74 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp72, &$s73);
            return $tmp74;
        }
        break;
        case 100:
        {
            panda$core$String* $tmp76 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s75, self->payload);
            panda$core$String* $tmp78 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp76, &$s77);
            return $tmp78;
        }
        break;
        case 101:
        {
            panda$core$String* $tmp80 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s79, self->payload);
            panda$core$String* $tmp82 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp80, &$s81);
            return $tmp82;
        }
        break;
        case 104:
        {
            panda$core$Int64 $tmp83 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp84 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp83, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp84.value);
            panda$core$MutableString* $tmp86 = (panda$core$MutableString*) malloc(48);
            $tmp86->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp86->refCount.value = 1;
            panda$core$MutableString$init($tmp86);
            result85 = $tmp86;
            panda$core$Object* $tmp88 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp88) != NULL }).value) {
            {
                panda$core$Object* $tmp89 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$MutableString$append$panda$core$Object(result85, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp89)));
            }
            }
            panda$core$MutableString$append$panda$core$String(result85, &$s90);
            panda$core$Object* $tmp91 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp91) != NULL }).value) {
            {
                panda$core$Object* $tmp92 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$MutableString$append$panda$core$Object(result85, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp92)));
            }
            }
            panda$core$Object* $tmp93 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp93) != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$String(result85, &$s94);
                panda$core$Object* $tmp95 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$MutableString$append$panda$core$Object(result85, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp95)));
            }
            }
            panda$core$String* $tmp96 = panda$core$MutableString$finish$R$panda$core$String(result85);
            return $tmp96;
        }
        break;
        case 105:
        {
            panda$core$Int64 $tmp97 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp98 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp97, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp98.value);
            panda$core$MutableString* $tmp100 = (panda$core$MutableString*) malloc(48);
            $tmp100->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp100->refCount.value = 1;
            panda$core$MutableString$init($tmp100);
            result99 = $tmp100;
            panda$core$Object* $tmp102 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp103 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp102)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp103.value) {
            {
                panda$core$Object* $tmp104 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$MutableString$append$panda$core$Object(result99, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp104)));
            }
            }
            panda$core$MutableString$append$panda$core$String(result99, &$s105);
            panda$core$Object* $tmp106 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp107 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp106)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp107.value) {
            {
                panda$core$Object* $tmp108 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$MutableString$append$panda$core$Object(result99, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp108)));
            }
            }
            panda$core$Object* $tmp109 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$Bit $tmp110 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp109)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp110.value) {
            {
                panda$core$MutableString$append$panda$core$String(result99, &$s111);
                panda$core$Object* $tmp112 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$MutableString$append$panda$core$Object(result99, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp112)));
            }
            }
            panda$core$String* $tmp113 = panda$core$MutableString$finish$R$panda$core$String(result99);
            return $tmp113;
        }
        break;
        case 107:
        {
            panda$core$Int64 $tmp114 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp115 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp114, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp115.value);
            panda$core$MutableString* $tmp117 = (panda$core$MutableString*) malloc(48);
            $tmp117->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp117->refCount.value = 1;
            panda$core$Object* $tmp119 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp120 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp119));
            panda$core$MutableString$init$panda$core$String($tmp117, $tmp120);
            result116 = $tmp117;
            panda$core$Char8$init$panda$core$UInt8(&$tmp121, ((panda$core$UInt8) { 40 }));
            panda$core$MutableString$append$panda$core$Char8(result116, $tmp121);
            separator122 = &$s123;
            panda$core$Int64 $tmp125 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp124, ((panda$core$Int64) { 1 }), $tmp125, ((panda$core$Bit) { false }));
            int64_t $tmp127 = $tmp124.min.value;
            panda$core$Int64 i126 = { $tmp127 };
            int64_t $tmp129 = $tmp124.max.value;
            bool $tmp130 = $tmp124.inclusive.value;
            if ($tmp130) goto $l137; else goto $l138;
            $l137:;
            if ($tmp127 <= $tmp129) goto $l131; else goto $l133;
            $l138:;
            if ($tmp127 < $tmp129) goto $l131; else goto $l133;
            $l131:;
            {
                panda$core$MutableString$append$panda$core$String(result116, separator122);
                panda$core$Object* $tmp139 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, i126);
                panda$core$MutableString$append$panda$core$Object(result116, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp139)));
                separator122 = &$s140;
            }
            $l134:;
            int64_t $tmp142 = $tmp129 - i126.value;
            if ($tmp130) goto $l143; else goto $l144;
            $l143:;
            if ((uint64_t) $tmp142 >= 1) goto $l141; else goto $l133;
            $l144:;
            if ((uint64_t) $tmp142 > 1) goto $l141; else goto $l133;
            $l141:;
            i126.value += 1;
            goto $l131;
            $l133:;
            panda$core$Char8$init$panda$core$UInt8(&$tmp147, ((panda$core$UInt8) { 41 }));
            panda$core$MutableString$append$panda$core$Char8(result116, $tmp147);
            panda$core$String* $tmp148 = panda$core$MutableString$finish$R$panda$core$String(result116);
            return $tmp148;
        }
        break;
        case 106:
        {
            if (((panda$core$Bit) { self->children != NULL }).value) {
            {
                panda$core$Int64 $tmp149 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
                panda$core$Bit $tmp150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp149, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp150.value);
                panda$core$String* $tmp152 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(self->payload, &$s151);
                panda$core$Object* $tmp153 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp154 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp152, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp153)));
                return $tmp154;
            }
            }
            panda$core$String* $tmp156 = (($fn155) self->payload->$class->vtable[0])(self->payload);
            return $tmp156;
        }
        break;
        case 108:
        {
            panda$core$Int64 $tmp157 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp157, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp158.value);
            panda$core$Object* $tmp159 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp160 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp159));
            panda$core$String* $tmp162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp160, &$s161);
            panda$core$String* $tmp163 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp162, self->payload);
            panda$core$String* $tmp165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp163, &$s164);
            return $tmp165;
        }
        break;
        case 118:
        {
            panda$core$Int64 $tmp167 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp167, ((panda$core$Int64) { 2 }));
            bool $tmp166 = $tmp168.value;
            if ($tmp166) goto $l169;
            panda$core$Int64 $tmp170 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp170, ((panda$core$Int64) { 3 }));
            $tmp166 = $tmp171.value;
            $l169:;
            panda$core$Bit $tmp172 = { $tmp166 };
            PANDA_ASSERT($tmp172.value);
            panda$core$Object* $tmp175 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp176 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s174, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp175)));
            panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp176, &$s177);
            panda$core$Object* $tmp179 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp180 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp178, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp179)));
            panda$core$String* $tmp182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp180, &$s181);
            result173 = $tmp182;
            panda$core$Int64 $tmp183 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp183, ((panda$core$Int64) { 3 }));
            if ($tmp184.value) {
            {
                panda$core$Object* $tmp186 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$String* $tmp187 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s185, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp186)));
                panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp187, &$s188);
                panda$core$String* $tmp190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result173, $tmp189);
                return $tmp190;
            }
            }
            return result173;
        }
        break;
        case 119:
        {
            panda$core$Int64 $tmp191 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp191, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp192.value);
            panda$core$Object* $tmp194 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp195 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s193, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp194)));
            panda$core$String* $tmp197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp195, &$s196);
            panda$core$Object* $tmp198 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp199 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp197, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp198)));
            panda$core$String* $tmp201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp199, &$s200);
            panda$core$Object* $tmp202 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp203 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp201, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp202)));
            panda$core$String* $tmp205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp203, &$s204);
            return $tmp205;
        }
        break;
        case 121:
        {
            panda$core$Int64 $tmp206 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp206, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp207.value);
            panda$core$Object* $tmp209 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp210 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s208, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp209)));
            panda$core$String* $tmp212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp210, &$s211);
            panda$core$Object* $tmp213 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp214 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp212, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp213)));
            panda$core$String* $tmp216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp214, &$s215);
            return $tmp216;
        }
        break;
        case 120:
        {
            panda$core$Int64 $tmp217 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp217, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp218.value);
            panda$core$Object* $tmp220 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp221 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s219, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp220)));
            panda$core$String* $tmp223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp221, &$s222);
            panda$core$Object* $tmp224 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp225 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp223, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp224)));
            panda$core$String* $tmp227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp225, &$s226);
            return $tmp227;
        }
        break;
        case 122:
        {
            panda$core$Int64 $tmp228 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp228, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp229.value);
            panda$core$Object* $tmp231 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp232 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s230, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp231)));
            panda$core$String* $tmp234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp232, &$s233);
            return $tmp234;
        }
        break;
        case 134:
        {
            if (((panda$core$Bit) { self->payload != NULL }).value) {
            {
                panda$core$String* $tmp236 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s235, self->payload);
                panda$core$String* $tmp238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp236, &$s237);
                return $tmp238;
            }
            }
            return &$s239;
        }
        break;
        case 135:
        {
            if (((panda$core$Bit) { self->payload != NULL }).value) {
            {
                panda$core$String* $tmp241 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s240, self->payload);
                panda$core$String* $tmp243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp241, &$s242);
                return $tmp243;
            }
            }
            return &$s244;
        }
        break;
        case 136:
        {
            if (((panda$core$Bit) { self->children != NULL }).value) {
            {
                panda$core$Int64 $tmp245 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
                panda$core$Bit $tmp246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp245, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp246.value);
                panda$core$Object* $tmp248 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp249 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s247, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp248)));
                panda$core$String* $tmp251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp249, &$s250);
                return $tmp251;
            }
            }
            return &$s252;
        }
        break;
        case 126:
        {
            panda$core$MutableString* $tmp254 = (panda$core$MutableString*) malloc(48);
            $tmp254->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp254->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp254, &$s256);
            result253 = $tmp254;
            {
                ITable* $tmp258 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp258->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp258 = $tmp258->next;
                }
                $fn260 $tmp259 = $tmp258->methods[0];
                panda$collections$Iterator* $tmp261 = $tmp259(((panda$collections$Iterable*) self->children));
                child$Iter257 = $tmp261;
                $l262:;
                ITable* $tmp264 = child$Iter257->$class->itable;
                while ($tmp264->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp264 = $tmp264->next;
                }
                $fn266 $tmp265 = $tmp264->methods[0];
                panda$core$Bit $tmp267 = $tmp265(child$Iter257);
                panda$core$Bit $tmp268 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp267);
                if (!$tmp268.value) goto $l263;
                {
                    ITable* $tmp270 = child$Iter257->$class->itable;
                    while ($tmp270->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp270 = $tmp270->next;
                    }
                    $fn272 $tmp271 = $tmp270->methods[1];
                    panda$core$Object* $tmp273 = $tmp271(child$Iter257);
                    child269 = ((org$pandalanguage$pandac$ASTNode*) $tmp273);
                    panda$core$String* $tmp275 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(child269);
                    c274 = $tmp275;
                    panda$core$Bit $tmp278 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(c274, &$s277);
                    bool $tmp276 = $tmp278.value;
                    if (!$tmp276) goto $l279;
                    panda$core$Bit $tmp281 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(c274, &$s280);
                    $tmp276 = $tmp281.value;
                    $l279:;
                    panda$core$Bit $tmp282 = { $tmp276 };
                    if ($tmp282.value) {
                    {
                        panda$core$String$Index $tmp284 = panda$core$String$start$R$panda$core$String$Index(c274);
                        panda$core$String$Index $tmp285 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(c274, $tmp284);
                        panda$core$String$Index $tmp286 = panda$core$String$end$R$panda$core$String$Index(c274);
                        panda$core$String$Index $tmp287 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(c274, $tmp286);
                        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp283, $tmp285, $tmp287, ((panda$core$Bit) { false }));
                        panda$core$String* $tmp288 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(c274, $tmp283);
                        panda$core$MutableString$append$panda$core$String(result253, $tmp288);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$Object(result253, ((panda$core$Object*) child269));
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp289, ((panda$core$UInt8) { 10 }));
                    panda$core$MutableString$append$panda$core$Char8(result253, $tmp289);
                }
                goto $l262;
                $l263:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp290, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result253, $tmp290);
            panda$core$String* $tmp291 = panda$core$MutableString$finish$R$panda$core$String(result253);
            return $tmp291;
        }
        break;
        case 109:
        {
            panda$core$String* $tmp293 = (($fn292) self->payload->$class->vtable[0])(self->payload);
            return $tmp293;
        }
        break;
        case 110:
        {
            panda$core$Object* $tmp294 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp296 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp294)), &$s295);
            return $tmp296;
        }
        break;
        case 154:
        {
            panda$core$MutableString* $tmp298 = (panda$core$MutableString*) malloc(48);
            $tmp298->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp298->refCount.value = 1;
            panda$core$Object* $tmp300 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp301 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp300));
            panda$core$MutableString$init$panda$core$String($tmp298, $tmp301);
            result297 = $tmp298;
            panda$core$Char8$init$panda$core$UInt8(&$tmp302, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(result297, $tmp302);
            separator303 = &$s304;
            {
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp306, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$collections$ImmutableArray* $tmp307 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(self->children, $tmp306);
                ITable* $tmp308 = ((panda$collections$Iterable*) $tmp307)->$class->itable;
                while ($tmp308->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp308 = $tmp308->next;
                }
                $fn310 $tmp309 = $tmp308->methods[0];
                panda$collections$Iterator* $tmp311 = $tmp309(((panda$collections$Iterable*) $tmp307));
                c$Iter305 = $tmp311;
                $l312:;
                ITable* $tmp314 = c$Iter305->$class->itable;
                while ($tmp314->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp314 = $tmp314->next;
                }
                $fn316 $tmp315 = $tmp314->methods[0];
                panda$core$Bit $tmp317 = $tmp315(c$Iter305);
                panda$core$Bit $tmp318 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp317);
                if (!$tmp318.value) goto $l313;
                {
                    ITable* $tmp320 = c$Iter305->$class->itable;
                    while ($tmp320->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp320 = $tmp320->next;
                    }
                    $fn322 $tmp321 = $tmp320->methods[1];
                    panda$core$Object* $tmp323 = $tmp321(c$Iter305);
                    c319 = ((org$pandalanguage$pandac$ASTNode*) $tmp323);
                    panda$core$MutableString$append$panda$core$String(result297, separator303);
                    panda$core$MutableString$append$panda$core$Object(result297, ((panda$core$Object*) c319));
                    separator303 = &$s324;
                }
                goto $l312;
                $l313:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp325, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(result297, $tmp325);
            panda$core$String* $tmp326 = panda$core$MutableString$finish$R$panda$core$String(result297);
            return $tmp326;
        }
        break;
        case 139:
        {
            panda$core$MutableString* $tmp328 = (panda$core$MutableString*) malloc(48);
            $tmp328->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp328->refCount.value = 1;
            panda$core$MutableString$init($tmp328);
            result327 = $tmp328;
            separator330 = &$s331;
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
                    panda$core$MutableString$append$panda$core$String(result327, separator330);
                    panda$core$MutableString$append$panda$core$Object(result327, ((panda$core$Object*) c344));
                    separator330 = &$s349;
                }
                goto $l337;
                $l338:;
            }
            panda$core$String* $tmp350 = panda$core$MutableString$finish$R$panda$core$String(result327);
            return $tmp350;
        }
        break;
        case 143:
        {
            panda$core$String* $tmp352 = (($fn351) self->payload->$class->vtable[0])(self->payload);
            return $tmp352;
        }
        break;
        case 144:
        {
            panda$core$MutableString* $tmp354 = (panda$core$MutableString*) malloc(48);
            $tmp354->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp354->refCount.value = 1;
            panda$core$MutableString$init($tmp354);
            result353 = $tmp354;
            {
                ITable* $tmp357 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp357->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp357 = $tmp357->next;
                }
                $fn359 $tmp358 = $tmp357->methods[0];
                panda$collections$Iterator* $tmp360 = $tmp358(((panda$collections$Iterable*) self->children));
                c$Iter356 = $tmp360;
                $l361:;
                ITable* $tmp363 = c$Iter356->$class->itable;
                while ($tmp363->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp363 = $tmp363->next;
                }
                $fn365 $tmp364 = $tmp363->methods[0];
                panda$core$Bit $tmp366 = $tmp364(c$Iter356);
                panda$core$Bit $tmp367 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp366);
                if (!$tmp367.value) goto $l362;
                {
                    ITable* $tmp369 = c$Iter356->$class->itable;
                    while ($tmp369->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp369 = $tmp369->next;
                    }
                    $fn371 $tmp370 = $tmp369->methods[1];
                    panda$core$Object* $tmp372 = $tmp370(c$Iter356);
                    c368 = ((org$pandalanguage$pandac$ASTNode*) $tmp372);
                    panda$core$MutableString$append$panda$core$Object(result353, ((panda$core$Object*) c368));
                    panda$core$Char8$init$panda$core$UInt8(&$tmp373, ((panda$core$UInt8) { 10 }));
                    panda$core$MutableString$append$panda$core$Char8(result353, $tmp373);
                }
                goto $l361;
                $l362:;
            }
            panda$core$String* $tmp374 = panda$core$MutableString$finish$R$panda$core$String(result353);
            return $tmp374;
        }
        break;
        case 129:
        {
            panda$core$Int64 $tmp375 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp375, ((panda$core$Int64) { 1 }));
            if ($tmp376.value) {
            {
                panda$core$Object* $tmp377 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp378 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp377));
                return $tmp378;
            }
            }
            panda$core$Object* $tmp379 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp380 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp379));
            panda$core$String* $tmp382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp380, &$s381);
            panda$core$Object* $tmp383 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp384 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp382, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp383)));
            panda$core$String* $tmp386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp384, &$s385);
            return $tmp386;
        }
        break;
        case 130:
        {
            panda$core$MutableString* $tmp388 = (panda$core$MutableString*) malloc(48);
            $tmp388->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp388->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp388, &$s390);
            result387 = $tmp388;
            separator391 = &$s392;
            {
                ITable* $tmp394 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp394->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp394 = $tmp394->next;
                }
                $fn396 $tmp395 = $tmp394->methods[0];
                panda$collections$Iterator* $tmp397 = $tmp395(((panda$collections$Iterable*) self->children));
                c$Iter393 = $tmp397;
                $l398:;
                ITable* $tmp400 = c$Iter393->$class->itable;
                while ($tmp400->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp400 = $tmp400->next;
                }
                $fn402 $tmp401 = $tmp400->methods[0];
                panda$core$Bit $tmp403 = $tmp401(c$Iter393);
                panda$core$Bit $tmp404 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp403);
                if (!$tmp404.value) goto $l399;
                {
                    ITable* $tmp406 = c$Iter393->$class->itable;
                    while ($tmp406->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp406 = $tmp406->next;
                    }
                    $fn408 $tmp407 = $tmp406->methods[1];
                    panda$core$Object* $tmp409 = $tmp407(c$Iter393);
                    c405 = ((org$pandalanguage$pandac$ASTNode*) $tmp409);
                    panda$core$MutableString$append$panda$core$String(result387, separator391);
                    panda$core$MutableString$append$panda$core$Object(result387, ((panda$core$Object*) c405));
                    separator391 = &$s410;
                }
                goto $l398;
                $l399:;
            }
            panda$core$String* $tmp411 = panda$core$MutableString$finish$R$panda$core$String(result387);
            return $tmp411;
        }
        break;
        case 131:
        {
            panda$core$MutableString* $tmp413 = (panda$core$MutableString*) malloc(48);
            $tmp413->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp413->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp413, &$s415);
            result412 = $tmp413;
            separator416 = &$s417;
            {
                ITable* $tmp419 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp419->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp419 = $tmp419->next;
                }
                $fn421 $tmp420 = $tmp419->methods[0];
                panda$collections$Iterator* $tmp422 = $tmp420(((panda$collections$Iterable*) self->children));
                c$Iter418 = $tmp422;
                $l423:;
                ITable* $tmp425 = c$Iter418->$class->itable;
                while ($tmp425->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp425 = $tmp425->next;
                }
                $fn427 $tmp426 = $tmp425->methods[0];
                panda$core$Bit $tmp428 = $tmp426(c$Iter418);
                panda$core$Bit $tmp429 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp428);
                if (!$tmp429.value) goto $l424;
                {
                    ITable* $tmp431 = c$Iter418->$class->itable;
                    while ($tmp431->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp431 = $tmp431->next;
                    }
                    $fn433 $tmp432 = $tmp431->methods[1];
                    panda$core$Object* $tmp434 = $tmp432(c$Iter418);
                    c430 = ((org$pandalanguage$pandac$ASTNode*) $tmp434);
                    panda$core$MutableString$append$panda$core$String(result412, separator416);
                    panda$core$MutableString$append$panda$core$Object(result412, ((panda$core$Object*) c430));
                    separator416 = &$s435;
                }
                goto $l423;
                $l424:;
            }
            panda$core$String* $tmp436 = panda$core$MutableString$finish$R$panda$core$String(result412);
            return $tmp436;
        }
        break;
        case 133:
        {
            panda$core$MutableString* $tmp438 = (panda$core$MutableString*) malloc(48);
            $tmp438->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp438->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp438, &$s440);
            result437 = $tmp438;
            separator441 = &$s442;
            {
                ITable* $tmp444 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp444->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp444 = $tmp444->next;
                }
                $fn446 $tmp445 = $tmp444->methods[0];
                panda$collections$Iterator* $tmp447 = $tmp445(((panda$collections$Iterable*) self->children));
                c$Iter443 = $tmp447;
                $l448:;
                ITable* $tmp450 = c$Iter443->$class->itable;
                while ($tmp450->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp450 = $tmp450->next;
                }
                $fn452 $tmp451 = $tmp450->methods[0];
                panda$core$Bit $tmp453 = $tmp451(c$Iter443);
                panda$core$Bit $tmp454 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp453);
                if (!$tmp454.value) goto $l449;
                {
                    ITable* $tmp456 = c$Iter443->$class->itable;
                    while ($tmp456->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp456 = $tmp456->next;
                    }
                    $fn458 $tmp457 = $tmp456->methods[1];
                    panda$core$Object* $tmp459 = $tmp457(c$Iter443);
                    c455 = ((org$pandalanguage$pandac$ASTNode*) $tmp459);
                    panda$core$MutableString$append$panda$core$String(result437, separator441);
                    panda$core$MutableString$append$panda$core$Object(result437, ((panda$core$Object*) c455));
                    separator441 = &$s460;
                }
                goto $l448;
                $l449:;
            }
            panda$core$String* $tmp461 = panda$core$MutableString$finish$R$panda$core$String(result437);
            return $tmp461;
        }
        break;
        case 132:
        {
            panda$core$MutableString* $tmp463 = (panda$core$MutableString*) malloc(48);
            $tmp463->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp463->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp463, &$s465);
            result462 = $tmp463;
            separator466 = &$s467;
            {
                ITable* $tmp469 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp469->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp469 = $tmp469->next;
                }
                $fn471 $tmp470 = $tmp469->methods[0];
                panda$collections$Iterator* $tmp472 = $tmp470(((panda$collections$Iterable*) self->children));
                c$Iter468 = $tmp472;
                $l473:;
                ITable* $tmp475 = c$Iter468->$class->itable;
                while ($tmp475->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp475 = $tmp475->next;
                }
                $fn477 $tmp476 = $tmp475->methods[0];
                panda$core$Bit $tmp478 = $tmp476(c$Iter468);
                panda$core$Bit $tmp479 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp478);
                if (!$tmp479.value) goto $l474;
                {
                    ITable* $tmp481 = c$Iter468->$class->itable;
                    while ($tmp481->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp481 = $tmp481->next;
                    }
                    $fn483 $tmp482 = $tmp481->methods[1];
                    panda$core$Object* $tmp484 = $tmp482(c$Iter468);
                    c480 = ((org$pandalanguage$pandac$ASTNode*) $tmp484);
                    panda$core$MutableString$append$panda$core$String(result462, separator466);
                    panda$core$MutableString$append$panda$core$Object(result462, ((panda$core$Object*) c480));
                    separator466 = &$s485;
                }
                goto $l473;
                $l474:;
            }
            panda$core$String* $tmp486 = panda$core$MutableString$finish$R$panda$core$String(result462);
            return $tmp486;
        }
        break;
        case 148:
        {
            panda$core$Int64 $tmp487 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp487, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp488.value);
            panda$core$Object* $tmp489 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp490 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp489));
            panda$core$String* $tmp492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp490, &$s491);
            panda$core$Object* $tmp493 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp494 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp492, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp493)));
            panda$core$String* $tmp496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp494, &$s495);
            panda$core$Object* $tmp497 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp498 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp496, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp497)));
            panda$core$String* $tmp500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp498, &$s499);
            return $tmp500;
        }
        break;
        case 149:
        {
            panda$core$Int64 $tmp501 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp501, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp502.value);
            panda$core$String* $tmp504 = (($fn503) self->payload->$class->vtable[0])(self->payload);
            panda$core$String* $tmp506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp504, &$s505);
            panda$core$Object* $tmp507 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp508 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp506, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp507)));
            panda$core$String* $tmp510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp508, &$s509);
            return $tmp510;
        }
        break;
        case 150:
        {
            panda$core$MutableString* $tmp512 = (panda$core$MutableString*) malloc(48);
            $tmp512->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp512->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp512, &$s514);
            result511 = $tmp512;
            separator515 = &$s516;
            {
                ITable* $tmp518 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp518->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp518 = $tmp518->next;
                }
                $fn520 $tmp519 = $tmp518->methods[0];
                panda$collections$Iterator* $tmp521 = $tmp519(((panda$collections$Iterable*) self->children));
                c$Iter517 = $tmp521;
                $l522:;
                ITable* $tmp524 = c$Iter517->$class->itable;
                while ($tmp524->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp524 = $tmp524->next;
                }
                $fn526 $tmp525 = $tmp524->methods[0];
                panda$core$Bit $tmp527 = $tmp525(c$Iter517);
                panda$core$Bit $tmp528 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp527);
                if (!$tmp528.value) goto $l523;
                {
                    ITable* $tmp530 = c$Iter517->$class->itable;
                    while ($tmp530->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp530 = $tmp530->next;
                    }
                    $fn532 $tmp531 = $tmp530->methods[1];
                    panda$core$Object* $tmp533 = $tmp531(c$Iter517);
                    c529 = ((org$pandalanguage$pandac$ASTNode*) $tmp533);
                    panda$core$MutableString$append$panda$core$String(result511, separator515);
                    panda$core$MutableString$append$panda$core$Object(result511, ((panda$core$Object*) c529));
                    separator515 = &$s534;
                }
                goto $l522;
                $l523:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp535, ((panda$core$UInt8) { 41 }));
            panda$core$MutableString$append$panda$core$Char8(result511, $tmp535);
            panda$core$String* $tmp536 = panda$core$MutableString$finish$R$panda$core$String(result511);
            return $tmp536;
        }
        break;
        case 147:
        {
            panda$core$Int64 $tmp537 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp537, ((panda$core$Int64) { 5 }));
            PANDA_ASSERT($tmp538.value);
            panda$core$Object* $tmp539 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp540 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp539));
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
            panda$core$Object* $tmp561 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp562 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp561));
            panda$core$String* $tmp564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp562, &$s563);
            panda$core$Object* $tmp565 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp566 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp564, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp565)));
            panda$core$String* $tmp568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp566, &$s567);
            panda$core$String* $tmp569 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp568, self->payload);
            panda$core$String* $tmp571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp569, &$s570);
            panda$core$Object* $tmp572 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp573 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp571, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp572)));
            panda$core$String* $tmp575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp573, &$s574);
            panda$core$Object* $tmp576 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp577 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp576));
            panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp577, &$s578);
            panda$core$Object* $tmp580 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp581 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp579, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp580)));
            panda$core$String* $tmp583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp581, &$s582);
            panda$core$Object* $tmp584 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$String* $tmp585 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp583, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp584)));
            panda$core$String* $tmp587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp585, &$s586);
            panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp575, $tmp587);
            return $tmp588;
        }
        break;
        case 146:
        {
            panda$core$Int64 $tmp589 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp589, ((panda$core$Int64) { 6 }));
            PANDA_ASSERT($tmp590.value);
            {
                ITable* $tmp592 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp592->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp592 = $tmp592->next;
                }
                $fn594 $tmp593 = $tmp592->methods[0];
                panda$collections$Iterator* $tmp595 = $tmp593(((panda$collections$Iterable*) self->children));
                c$Iter591 = $tmp595;
                $l596:;
                ITable* $tmp598 = c$Iter591->$class->itable;
                while ($tmp598->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp598 = $tmp598->next;
                }
                $fn600 $tmp599 = $tmp598->methods[0];
                panda$core$Bit $tmp601 = $tmp599(c$Iter591);
                panda$core$Bit $tmp602 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp601);
                if (!$tmp602.value) goto $l597;
                {
                    ITable* $tmp604 = c$Iter591->$class->itable;
                    while ($tmp604->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp604 = $tmp604->next;
                    }
                    $fn606 $tmp605 = $tmp604->methods[1];
                    panda$core$Object* $tmp607 = $tmp605(c$Iter591);
                    c603 = ((org$pandalanguage$pandac$ASTNode*) $tmp607);
                    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) c603));
                }
                goto $l596;
                $l597:;
            }
            panda$core$Object* $tmp608 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp609 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp608));
            panda$core$String* $tmp611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp609, &$s610);
            panda$core$Object* $tmp612 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp613 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp611, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp612)));
            panda$core$String* $tmp615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp613, &$s614);
            panda$core$String* $tmp616 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp615, self->payload);
            panda$core$String* $tmp618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp616, &$s617);
            panda$core$Object* $tmp619 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp620 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp618, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp619)));
            panda$core$String* $tmp622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp620, &$s621);
            panda$core$Object* $tmp623 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp624 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp623));
            panda$core$String* $tmp626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp624, &$s625);
            panda$core$Object* $tmp627 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp628 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp626, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp627)));
            panda$core$String* $tmp630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp628, &$s629);
            panda$core$Object* $tmp631 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$String* $tmp632 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp630, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp631)));
            panda$core$String* $tmp634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp632, &$s633);
            panda$core$String* $tmp635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp622, $tmp634);
            return $tmp635;
        }
        break;
        case 140:
        {
            panda$core$MutableString* $tmp637 = (panda$core$MutableString*) malloc(48);
            $tmp637->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp637->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp637, &$s639);
            result636 = $tmp637;
            {
                ITable* $tmp641 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp641->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp641 = $tmp641->next;
                }
                $fn643 $tmp642 = $tmp641->methods[0];
                panda$collections$Iterator* $tmp644 = $tmp642(((panda$collections$Iterable*) self->children));
                c$Iter640 = $tmp644;
                $l645:;
                ITable* $tmp647 = c$Iter640->$class->itable;
                while ($tmp647->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp647 = $tmp647->next;
                }
                $fn649 $tmp648 = $tmp647->methods[0];
                panda$core$Bit $tmp650 = $tmp648(c$Iter640);
                panda$core$Bit $tmp651 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp650);
                if (!$tmp651.value) goto $l646;
                {
                    ITable* $tmp653 = c$Iter640->$class->itable;
                    while ($tmp653->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp653 = $tmp653->next;
                    }
                    $fn655 $tmp654 = $tmp653->methods[1];
                    panda$core$Object* $tmp656 = $tmp654(c$Iter640);
                    c652 = ((org$pandalanguage$pandac$ASTNode*) $tmp656);
                    panda$core$MutableString$append$panda$core$Object(result636, ((panda$core$Object*) c652));
                    panda$core$Char8$init$panda$core$UInt8(&$tmp657, ((panda$core$UInt8) { 10 }));
                    panda$core$MutableString$append$panda$core$Char8(result636, $tmp657);
                }
                goto $l645;
                $l646:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp658, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result636, $tmp658);
            panda$core$String* $tmp659 = panda$core$MutableString$finish$R$panda$core$String(result636);
            return $tmp659;
        }
        break;
        case 142:
        {
            panda$core$Int64 $tmp660 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp660, ((panda$core$Int64) { 6 }));
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
            panda$core$Object* $tmp672 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$Bit $tmp673 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp672)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp673.value) {
            {
                panda$core$MutableString$append$panda$core$String(result662, &$s674);
                panda$core$Object* $tmp675 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
                panda$core$MutableString$append$panda$core$Object(result662, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp675)));
            }
            }
            panda$core$Object* $tmp676 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$Bit $tmp677 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp676)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp677.value) {
            {
                panda$core$MutableString$append$panda$core$String(result662, &$s678);
                panda$core$Object* $tmp679 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
                panda$core$MutableString$append$panda$core$Object(result662, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp679)));
                panda$core$Char8$init$panda$core$UInt8(&$tmp680, ((panda$core$UInt8) { 41 }));
                panda$core$MutableString$append$panda$core$Char8(result662, $tmp680);
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp681, ((panda$core$UInt8) { 32 }));
            panda$core$MutableString$append$panda$core$Char8(result662, $tmp681);
            panda$core$Object* $tmp682 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$MutableString$append$panda$core$Object(result662, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp682)));
            panda$core$String* $tmp683 = panda$core$MutableString$finish$R$panda$core$String(result662);
            return $tmp683;
        }
        break;
        case 151:
        {
            panda$core$Int64 $tmp684 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp684, ((panda$core$Int64) { 5 }));
            PANDA_ASSERT($tmp685.value);
            panda$core$MutableString* $tmp687 = (panda$core$MutableString*) malloc(48);
            $tmp687->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp687->refCount.value = 1;
            panda$core$MutableString$init($tmp687);
            result686 = $tmp687;
            panda$core$Object* $tmp689 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$append$panda$core$Object(result686, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp689)));
            panda$core$Object* $tmp690 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$MutableString$append$panda$core$Object(result686, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp690)));
            panda$core$String* $tmp692 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s691, self->payload);
            panda$core$String* $tmp694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp692, &$s693);
            panda$core$MutableString$append$panda$core$String(result686, $tmp694);
            panda$core$Object* $tmp695 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$MutableString$append$panda$core$Object(result686, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp695)));
            panda$core$Char8$init$panda$core$UInt8(&$tmp696, ((panda$core$UInt8) { 32 }));
            panda$core$MutableString$append$panda$core$Char8(result686, $tmp696);
            panda$core$Object* $tmp697 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$MutableString$append$panda$core$Object(result686, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp697)));
            panda$core$Object* $tmp698 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$MutableString$append$panda$core$Object(result686, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp698)));
            panda$core$String* $tmp699 = panda$core$MutableString$finish$R$panda$core$String(result686);
            return $tmp699;
        }
        break;
        case 152:
        {
            panda$core$MutableString* $tmp701 = (panda$core$MutableString*) malloc(48);
            $tmp701->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp701->refCount.value = 1;
            panda$core$MutableString$init($tmp701);
            result700 = $tmp701;
            {
                ITable* $tmp704 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp704->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp704 = $tmp704->next;
                }
                $fn706 $tmp705 = $tmp704->methods[0];
                panda$collections$Iterator* $tmp707 = $tmp705(((panda$collections$Iterable*) self->children));
                c$Iter703 = $tmp707;
                $l708:;
                ITable* $tmp710 = c$Iter703->$class->itable;
                while ($tmp710->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp710 = $tmp710->next;
                }
                $fn712 $tmp711 = $tmp710->methods[0];
                panda$core$Bit $tmp713 = $tmp711(c$Iter703);
                panda$core$Bit $tmp714 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp713);
                if (!$tmp714.value) goto $l709;
                {
                    ITable* $tmp716 = c$Iter703->$class->itable;
                    while ($tmp716->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp716 = $tmp716->next;
                    }
                    $fn718 $tmp717 = $tmp716->methods[1];
                    panda$core$Object* $tmp719 = $tmp717(c$Iter703);
                    c715 = ((org$pandalanguage$pandac$ASTNode*) $tmp719);
                    panda$core$MutableString$append$panda$core$Object(result700, ((panda$core$Object*) c715));
                    panda$core$Char8$init$panda$core$UInt8(&$tmp720, ((panda$core$UInt8) { 10 }));
                    panda$core$MutableString$append$panda$core$Char8(result700, $tmp720);
                }
                goto $l708;
                $l709:;
            }
            panda$core$String* $tmp721 = panda$core$MutableString$finish$R$panda$core$String(result700);
            return $tmp721;
        }
        break;
        case 114:
        {
            return &$s722;
        }
        break;
        case 115:
        {
            return &$s723;
        }
        break;
        case 138:
        {
            return &$s724;
        }
        break;
        case 117:
        {
            return &$s725;
        }
        break;
        case 111:
        {
            panda$core$Object* $tmp726 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp727 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp726));
            panda$core$String* $tmp729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp727, &$s728);
            panda$core$Object* $tmp730 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp731 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp729, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp730)));
            panda$core$String* $tmp733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp731, &$s732);
            return $tmp733;
        }
        break;
        case 123:
        {
            panda$core$Int64 $tmp734 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp735 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, ((panda$core$Int64) { 1 }));
            if ($tmp735.value) {
            {
                panda$core$Object* $tmp737 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp738 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s736, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp737)));
                panda$core$String* $tmp740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp738, &$s739);
                return $tmp740;
            }
            }
            panda$core$Int64 $tmp741 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp741, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp742.value);
            panda$core$Object* $tmp744 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp745 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s743, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp744)));
            panda$core$String* $tmp747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp745, &$s746);
            panda$core$Object* $tmp748 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp749 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp747, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp748)));
            panda$core$String* $tmp751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp749, &$s750);
            return $tmp751;
        }
        break;
        default:
        {
            panda$core$Int64$wrapper* $tmp753;
            $tmp753 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp753->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp753->refCount = 1;
            $tmp753->value = self->kind;
            panda$core$String* $tmp754 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s752, ((panda$core$Object*) $tmp753));
            panda$core$String* $tmp756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp754, &$s755);
            return $tmp756;
        }
    }
}

