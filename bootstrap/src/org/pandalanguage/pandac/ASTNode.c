#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/UInt64.h"
#include "panda/core/Bit.h"
#include "panda/collections/ListView.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/MutableString.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"


org$pandalanguage$pandac$ASTNode$class_type org$pandalanguage$pandac$ASTNode$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String, panda$core$Object$cleanup} };

typedef panda$core$String* (*$fn49)(panda$core$Object*);
typedef panda$core$String* (*$fn51)(panda$core$Object*);
typedef panda$core$String* (*$fn54)(panda$core$Object*);
typedef panda$core$String* (*$fn141)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn246)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn252)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn258)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn278)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn296)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn302)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn308)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn321)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn327)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn333)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn337)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn345)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn351)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn357)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn382)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn388)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn394)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn407)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn413)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn419)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn432)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn438)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn444)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn457)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn463)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn469)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn489)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn506)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn512)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn518)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn612)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn618)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn624)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn675)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn681)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn687)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 144, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 14995, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 16120, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6F\x70\x65\x72\x61\x74\x6F\x72\x3A", 10, -7170024553821458165, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x63\x6B\x61\x67\x65\x20", 8, 22940502189900249, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x73\x65\x73\x20", 5, 22804693981, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E\x2E", 3, 1504239, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E", 2, 14893, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x6C\x73\x65\x20", 6, 1408465922990, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x72\x20", 4, 210294960, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20", 4, 138112280, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x6F\x20", 3, 2061644, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x68\x69\x6C\x65\x20", 7, 142443813564802, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x6F\x6F\x70\x20", 5, 21864130875, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6B\x20", 6, 2103477946150, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6B", 5, 20826514318, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x74\x69\x6E\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 229300545255605, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E", 6, 2270302428273, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x0A", 2, 22634, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 111, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 164, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 111, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x3D\x20", 4, 137627884, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x72\x6F\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 213374837, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x65\x74\x68\x6F\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6E\x63\x74\x69\x6F\x6E\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x0A", 2, 22634, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 111, NULL };
static panda$core$String $s627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20", 3, 1362623, NULL };
static panda$core$String $s647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, 13473, NULL };
static panda$core$String $s649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 111, NULL };
static panda$core$String $s691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4, 223586327, NULL };
static panda$core$String $s692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, 14808, NULL };
static panda$core$String $s700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x41\x53\x54\x4E\x6F\x64\x65\x3A", 9, 1750457173102951541, NULL };
static panda$core$String $s704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };

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
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_kind, p_position, NULL, NULL);
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$UInt64 p_payload) {
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_kind, p_position, ((panda$core$Object*) wrap_panda$core$UInt64(p_payload)), NULL);
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$String* p_payload) {
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_kind, p_position, ((panda$core$Object*) p_payload), NULL);
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_payload) {
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_kind, p_position, ((panda$core$Object*) wrap_panda$core$Bit(p_payload)), NULL);
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
        panda$collections$ImmutableArray* $tmp13 = (panda$collections$ImmutableArray*) malloc(32);
        $tmp13->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
        $tmp13->refCount.value = 1;
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp13, p_children);
        self->children = $tmp13;
    }
    }
    else {
    {
        self->children = NULL;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(org$pandalanguage$pandac$ASTNode* self) {
    panda$core$MutableString* result69;
    panda$core$MutableString* result83;
    panda$core$MutableString* result100;
    panda$core$String* separator106;
    panda$core$Range$LTpanda$core$Int64$GT $tmp108;
    panda$core$String* result159;
    panda$core$MutableString* result239;
    panda$collections$Iterator* child$Iter243;
    org$pandalanguage$pandac$ASTNode* child255;
    panda$core$String* c260;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp269;
    panda$core$MutableString* result283;
    panda$core$String* separator289;
    panda$collections$Iterator* c$Iter291;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp292;
    org$pandalanguage$pandac$ASTNode* c305;
    panda$core$MutableString* result313;
    panda$core$String* separator316;
    panda$collections$Iterator* c$Iter318;
    org$pandalanguage$pandac$ASTNode* c330;
    panda$core$MutableString* result339;
    panda$collections$Iterator* c$Iter342;
    org$pandalanguage$pandac$ASTNode* c354;
    panda$core$MutableString* result373;
    panda$core$String* separator377;
    panda$collections$Iterator* c$Iter379;
    org$pandalanguage$pandac$ASTNode* c391;
    panda$core$MutableString* result398;
    panda$core$String* separator402;
    panda$collections$Iterator* c$Iter404;
    org$pandalanguage$pandac$ASTNode* c416;
    panda$core$MutableString* result423;
    panda$core$String* separator427;
    panda$collections$Iterator* c$Iter429;
    org$pandalanguage$pandac$ASTNode* c441;
    panda$core$MutableString* result448;
    panda$core$String* separator452;
    panda$collections$Iterator* c$Iter454;
    org$pandalanguage$pandac$ASTNode* c466;
    panda$core$MutableString* result497;
    panda$core$String* separator501;
    panda$collections$Iterator* c$Iter503;
    org$pandalanguage$pandac$ASTNode* c515;
    panda$core$MutableString* result605;
    panda$collections$Iterator* c$Iter609;
    org$pandalanguage$pandac$ASTNode* c621;
    panda$core$MutableString* result631;
    panda$core$MutableString* result655;
    panda$core$MutableString* result669;
    panda$collections$Iterator* c$Iter672;
    org$pandalanguage$pandac$ASTNode* c684;
    switch (self->kind.value) {
        case 112:
        {
            panda$core$Int64 $tmp15 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp16 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp15, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp16.value);
            panda$core$String* $tmp17 = org$pandalanguage$pandac$ASTNode$operatorName$panda$core$Int64$R$panda$core$String(((panda$core$Int64$wrapper*) self->payload)->value);
            panda$core$String* $tmp18 = panda$core$String$convert$R$panda$core$String($tmp17);
            panda$core$String* $tmp20 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp18, &$s19);
            panda$core$Object* $tmp21 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp22 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp20, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp21)));
            panda$core$String* $tmp24 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp22, &$s23);
            return $tmp24;
        }
        break;
        case 103:
        {
            panda$core$Int64 $tmp25 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp26 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp25, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp26.value);
            panda$core$Bit $tmp27 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64$wrapper*) self->payload)->value, ((panda$core$Int64) { 101 }));
            if ($tmp27.value) {
            {
                panda$core$Object* $tmp28 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp29 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp28));
                panda$core$String* $tmp31 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp29, &$s30);
                panda$core$Object* $tmp32 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp33 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp31, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp32)));
                panda$core$String* $tmp35 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp33, &$s34);
                return $tmp35;
            }
            }
            panda$core$Object* $tmp37 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp38 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s36, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp37)));
            panda$core$String* $tmp40 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp38, &$s39);
            panda$core$String* $tmp41 = org$pandalanguage$pandac$ASTNode$operatorName$panda$core$Int64$R$panda$core$String(((panda$core$Int64$wrapper*) self->payload)->value);
            panda$core$String* $tmp42 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp40, $tmp41);
            panda$core$String* $tmp44 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp42, &$s43);
            panda$core$Object* $tmp45 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp46 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp44, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp45)));
            panda$core$String* $tmp48 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp46, &$s47);
            return $tmp48;
        }
        break;
        case 102:
        {
            panda$core$String* $tmp50 = (($fn49) self->payload->$class->vtable[0])(self->payload);
            return $tmp50;
        }
        break;
        case 116:
        {
            panda$core$String* $tmp52 = (($fn51) self->payload->$class->vtable[0])(self->payload);
            return $tmp52;
        }
        break;
        case 113:
        {
            panda$core$String* $tmp55 = (($fn54) self->payload->$class->vtable[0])(self->payload);
            panda$core$String* $tmp56 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s53, $tmp55);
            panda$core$String* $tmp58 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp56, &$s57);
            return $tmp58;
        }
        break;
        case 100:
        {
            panda$core$String* $tmp60 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s59, self->payload);
            panda$core$String* $tmp62 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp60, &$s61);
            return $tmp62;
        }
        break;
        case 101:
        {
            panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s63, self->payload);
            panda$core$String* $tmp66 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp64, &$s65);
            return $tmp66;
        }
        break;
        case 104:
        {
            panda$core$Int64 $tmp67 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp68 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp67, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp68.value);
            panda$core$MutableString* $tmp70 = (panda$core$MutableString*) malloc(40);
            $tmp70->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp70->refCount.value = 1;
            panda$core$MutableString$init($tmp70);
            result69 = $tmp70;
            panda$core$Object* $tmp72 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp72) != NULL }).value) {
            {
                panda$core$Object* $tmp73 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$MutableString$append$panda$core$Object(result69, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp73)));
            }
            }
            panda$core$MutableString$append$panda$core$String(result69, &$s74);
            panda$core$Object* $tmp75 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp75) != NULL }).value) {
            {
                panda$core$Object* $tmp76 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$MutableString$append$panda$core$Object(result69, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp76)));
            }
            }
            panda$core$Object* $tmp77 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp77) != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$String(result69, &$s78);
                panda$core$Object* $tmp79 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$MutableString$append$panda$core$Object(result69, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp79)));
            }
            }
            panda$core$String* $tmp80 = panda$core$MutableString$finish$R$panda$core$String(result69);
            return $tmp80;
        }
        break;
        case 105:
        {
            panda$core$Int64 $tmp81 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp82 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp81, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp82.value);
            panda$core$MutableString* $tmp84 = (panda$core$MutableString*) malloc(40);
            $tmp84->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp84->refCount.value = 1;
            panda$core$MutableString$init($tmp84);
            result83 = $tmp84;
            panda$core$Object* $tmp86 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp87 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp86)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp87.value) {
            {
                panda$core$Object* $tmp88 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$MutableString$append$panda$core$Object(result83, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp88)));
            }
            }
            panda$core$MutableString$append$panda$core$String(result83, &$s89);
            panda$core$Object* $tmp90 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp91 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp90)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp91.value) {
            {
                panda$core$Object* $tmp92 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$MutableString$append$panda$core$Object(result83, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp92)));
            }
            }
            panda$core$Object* $tmp93 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$Bit $tmp94 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp93)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp94.value) {
            {
                panda$core$MutableString$append$panda$core$String(result83, &$s95);
                panda$core$Object* $tmp96 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$MutableString$append$panda$core$Object(result83, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp96)));
            }
            }
            panda$core$String* $tmp97 = panda$core$MutableString$finish$R$panda$core$String(result83);
            return $tmp97;
        }
        break;
        case 107:
        {
            panda$core$Int64 $tmp98 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp99 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp98, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp99.value);
            panda$core$MutableString* $tmp101 = (panda$core$MutableString*) malloc(40);
            $tmp101->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp101->refCount.value = 1;
            panda$core$Object* $tmp103 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp104 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp103));
            panda$core$MutableString$init$panda$core$String($tmp101, $tmp104);
            result100 = $tmp101;
            panda$core$MutableString$append$panda$core$String(result100, &$s105);
            separator106 = &$s107;
            panda$core$Int64 $tmp109 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp108, ((panda$core$Int64) { 1 }), $tmp109, ((panda$core$Bit) { false }));
            int64_t $tmp111 = $tmp108.min.value;
            panda$core$Int64 i110 = { $tmp111 };
            int64_t $tmp113 = $tmp108.max.value;
            bool $tmp114 = $tmp108.inclusive.value;
            if ($tmp114) goto $l121; else goto $l122;
            $l121:;
            if ($tmp111 <= $tmp113) goto $l115; else goto $l117;
            $l122:;
            if ($tmp111 < $tmp113) goto $l115; else goto $l117;
            $l115:;
            {
                panda$core$MutableString$append$panda$core$String(result100, separator106);
                panda$core$Object* $tmp123 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, i110);
                panda$core$MutableString$append$panda$core$Object(result100, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp123)));
                separator106 = &$s124;
            }
            $l118:;
            int64_t $tmp126 = $tmp113 - i110.value;
            if ($tmp114) goto $l127; else goto $l128;
            $l127:;
            if ($tmp126 >= 1) goto $l125; else goto $l117;
            $l128:;
            if ($tmp126 > 1) goto $l125; else goto $l117;
            $l125:;
            i110.value += 1;
            goto $l115;
            $l117:;
            panda$core$MutableString$append$panda$core$String(result100, &$s131);
            panda$core$String* $tmp132 = panda$core$MutableString$finish$R$panda$core$String(result100);
            return $tmp132;
        }
        break;
        case 106:
        {
            panda$core$Int64 $tmp133 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp133, ((panda$core$Int64) { 1 }));
            if ($tmp134.value) {
            {
                panda$core$String* $tmp136 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(self->payload, &$s135);
                panda$core$Object* $tmp137 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp138 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp136, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp137)));
                return $tmp138;
            }
            }
            panda$core$Int64 $tmp139 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp139, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp140.value);
            panda$core$String* $tmp142 = (($fn141) self->payload->$class->vtable[0])(self->payload);
            return $tmp142;
        }
        break;
        case 108:
        {
            panda$core$Int64 $tmp143 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp143, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp144.value);
            panda$core$Object* $tmp145 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp146 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp145));
            panda$core$String* $tmp148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp146, &$s147);
            panda$core$String* $tmp149 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp148, self->payload);
            panda$core$String* $tmp151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp149, &$s150);
            return $tmp151;
        }
        break;
        case 118:
        {
            panda$core$Int64 $tmp153 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp153, ((panda$core$Int64) { 2 }));
            bool $tmp152 = $tmp154.value;
            if ($tmp152) goto $l155;
            panda$core$Int64 $tmp156 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp156, ((panda$core$Int64) { 3 }));
            $tmp152 = $tmp157.value;
            $l155:;
            panda$core$Bit $tmp158 = { $tmp152 };
            PANDA_ASSERT($tmp158.value);
            panda$core$Object* $tmp161 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp162 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s160, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp161)));
            panda$core$String* $tmp164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp162, &$s163);
            panda$core$Object* $tmp165 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp166 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp164, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp165)));
            panda$core$String* $tmp168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp166, &$s167);
            result159 = $tmp168;
            panda$core$Int64 $tmp169 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp169, ((panda$core$Int64) { 3 }));
            if ($tmp170.value) {
            {
                panda$core$Object* $tmp172 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$String* $tmp173 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s171, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp172)));
                panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp173, &$s174);
                panda$core$String* $tmp176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result159, $tmp175);
                return $tmp176;
            }
            }
            return result159;
        }
        break;
        case 119:
        {
            panda$core$Int64 $tmp177 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp177, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp178.value);
            panda$core$Object* $tmp180 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp181 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s179, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp180)));
            panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp181, &$s182);
            panda$core$Object* $tmp184 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp185 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp183, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp184)));
            panda$core$String* $tmp187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp185, &$s186);
            panda$core$Object* $tmp188 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp187, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp188)));
            panda$core$String* $tmp191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp189, &$s190);
            return $tmp191;
        }
        break;
        case 121:
        {
            panda$core$Int64 $tmp192 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp192, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp193.value);
            panda$core$Object* $tmp195 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s194, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp195)));
            panda$core$String* $tmp198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp196, &$s197);
            panda$core$Object* $tmp199 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp200 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp198, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp199)));
            panda$core$String* $tmp202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp200, &$s201);
            return $tmp202;
        }
        break;
        case 120:
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
        case 122:
        {
            panda$core$Int64 $tmp214 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp214, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp215.value);
            panda$core$Object* $tmp217 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp218 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s216, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp217)));
            panda$core$String* $tmp220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp218, &$s219);
            return $tmp220;
        }
        break;
        case 134:
        {
            if (((panda$core$Bit) { self->payload != NULL }).value) {
            {
                panda$core$String* $tmp222 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s221, self->payload);
                panda$core$String* $tmp224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp222, &$s223);
                return $tmp224;
            }
            }
            return &$s225;
        }
        break;
        case 135:
        {
            if (((panda$core$Bit) { self->payload != NULL }).value) {
            {
                panda$core$String* $tmp227 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s226, self->payload);
                panda$core$String* $tmp229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp227, &$s228);
                return $tmp229;
            }
            }
            return &$s230;
        }
        break;
        case 136:
        {
            panda$core$Int64 $tmp231 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp231, ((panda$core$Int64) { 1 }));
            if ($tmp232.value) {
            {
                panda$core$Object* $tmp234 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp235 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s233, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp234)));
                panda$core$String* $tmp237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp235, &$s236);
                return $tmp237;
            }
            }
            return &$s238;
        }
        break;
        case 126:
        {
            panda$core$MutableString* $tmp240 = (panda$core$MutableString*) malloc(40);
            $tmp240->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp240->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp240, &$s242);
            result239 = $tmp240;
            {
                ITable* $tmp244 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp244->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp244 = $tmp244->next;
                }
                $fn246 $tmp245 = $tmp244->methods[0];
                panda$collections$Iterator* $tmp247 = $tmp245(((panda$collections$Iterable*) self->children));
                child$Iter243 = $tmp247;
                $l248:;
                ITable* $tmp250 = child$Iter243->$class->itable;
                while ($tmp250->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp250 = $tmp250->next;
                }
                $fn252 $tmp251 = $tmp250->methods[0];
                panda$core$Bit $tmp253 = $tmp251(child$Iter243);
                panda$core$Bit $tmp254 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp253);
                if (!$tmp254.value) goto $l249;
                {
                    ITable* $tmp256 = child$Iter243->$class->itable;
                    while ($tmp256->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp256 = $tmp256->next;
                    }
                    $fn258 $tmp257 = $tmp256->methods[1];
                    panda$core$Object* $tmp259 = $tmp257(child$Iter243);
                    child255 = ((org$pandalanguage$pandac$ASTNode*) $tmp259);
                    panda$core$String* $tmp261 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(child255);
                    c260 = $tmp261;
                    panda$core$Bit $tmp264 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(c260, &$s263);
                    bool $tmp262 = $tmp264.value;
                    if (!$tmp262) goto $l265;
                    panda$core$Bit $tmp267 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(c260, &$s266);
                    $tmp262 = $tmp267.value;
                    $l265:;
                    panda$core$Bit $tmp268 = { $tmp262 };
                    if ($tmp268.value) {
                    {
                        panda$core$String$Index $tmp270 = panda$core$String$start$R$panda$core$String$Index(c260);
                        panda$core$String$Index $tmp271 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(c260, $tmp270);
                        panda$core$String$Index $tmp272 = panda$core$String$end$R$panda$core$String$Index(c260);
                        panda$core$String$Index $tmp273 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(c260, $tmp272);
                        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp269, $tmp271, $tmp273, ((panda$core$Bit) { false }));
                        panda$core$String* $tmp274 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(c260, $tmp269);
                        panda$core$MutableString$append$panda$core$String(result239, $tmp274);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$Object(result239, ((panda$core$Object*) child255));
                    }
                    }
                    panda$core$MutableString$append$panda$core$String(result239, &$s275);
                }
                goto $l248;
                $l249:;
            }
            panda$core$MutableString$append$panda$core$String(result239, &$s276);
            panda$core$String* $tmp277 = panda$core$MutableString$finish$R$panda$core$String(result239);
            return $tmp277;
        }
        break;
        case 109:
        {
            panda$core$String* $tmp279 = (($fn278) self->payload->$class->vtable[0])(self->payload);
            return $tmp279;
        }
        break;
        case 110:
        {
            panda$core$Object* $tmp280 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp282 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp280)), &$s281);
            return $tmp282;
        }
        break;
        case 154:
        {
            panda$core$MutableString* $tmp284 = (panda$core$MutableString*) malloc(40);
            $tmp284->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp284->refCount.value = 1;
            panda$core$Object* $tmp286 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp287 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp286));
            panda$core$MutableString$init$panda$core$String($tmp284, $tmp287);
            result283 = $tmp284;
            panda$core$MutableString$append$panda$core$String(result283, &$s288);
            separator289 = &$s290;
            {
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp292, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$collections$ImmutableArray* $tmp293 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(self->children, $tmp292);
                ITable* $tmp294 = ((panda$collections$Iterable*) $tmp293)->$class->itable;
                while ($tmp294->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp294 = $tmp294->next;
                }
                $fn296 $tmp295 = $tmp294->methods[0];
                panda$collections$Iterator* $tmp297 = $tmp295(((panda$collections$Iterable*) $tmp293));
                c$Iter291 = $tmp297;
                $l298:;
                ITable* $tmp300 = c$Iter291->$class->itable;
                while ($tmp300->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp300 = $tmp300->next;
                }
                $fn302 $tmp301 = $tmp300->methods[0];
                panda$core$Bit $tmp303 = $tmp301(c$Iter291);
                panda$core$Bit $tmp304 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp303);
                if (!$tmp304.value) goto $l299;
                {
                    ITable* $tmp306 = c$Iter291->$class->itable;
                    while ($tmp306->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp306 = $tmp306->next;
                    }
                    $fn308 $tmp307 = $tmp306->methods[1];
                    panda$core$Object* $tmp309 = $tmp307(c$Iter291);
                    c305 = ((org$pandalanguage$pandac$ASTNode*) $tmp309);
                    panda$core$MutableString$append$panda$core$String(result283, separator289);
                    panda$core$MutableString$append$panda$core$Object(result283, ((panda$core$Object*) c305));
                    separator289 = &$s310;
                }
                goto $l298;
                $l299:;
            }
            panda$core$MutableString$append$panda$core$String(result283, &$s311);
            panda$core$String* $tmp312 = panda$core$MutableString$finish$R$panda$core$String(result283);
            return $tmp312;
        }
        break;
        case 139:
        {
            panda$core$MutableString* $tmp314 = (panda$core$MutableString*) malloc(40);
            $tmp314->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp314->refCount.value = 1;
            panda$core$MutableString$init($tmp314);
            result313 = $tmp314;
            separator316 = &$s317;
            {
                ITable* $tmp319 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp319->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp319 = $tmp319->next;
                }
                $fn321 $tmp320 = $tmp319->methods[0];
                panda$collections$Iterator* $tmp322 = $tmp320(((panda$collections$Iterable*) self->children));
                c$Iter318 = $tmp322;
                $l323:;
                ITable* $tmp325 = c$Iter318->$class->itable;
                while ($tmp325->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp325 = $tmp325->next;
                }
                $fn327 $tmp326 = $tmp325->methods[0];
                panda$core$Bit $tmp328 = $tmp326(c$Iter318);
                panda$core$Bit $tmp329 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp328);
                if (!$tmp329.value) goto $l324;
                {
                    ITable* $tmp331 = c$Iter318->$class->itable;
                    while ($tmp331->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp331 = $tmp331->next;
                    }
                    $fn333 $tmp332 = $tmp331->methods[1];
                    panda$core$Object* $tmp334 = $tmp332(c$Iter318);
                    c330 = ((org$pandalanguage$pandac$ASTNode*) $tmp334);
                    panda$core$MutableString$append$panda$core$String(result313, separator316);
                    panda$core$MutableString$append$panda$core$Object(result313, ((panda$core$Object*) c330));
                    separator316 = &$s335;
                }
                goto $l323;
                $l324:;
            }
            panda$core$String* $tmp336 = panda$core$MutableString$finish$R$panda$core$String(result313);
            return $tmp336;
        }
        break;
        case 143:
        {
            panda$core$String* $tmp338 = (($fn337) self->payload->$class->vtable[0])(self->payload);
            return $tmp338;
        }
        break;
        case 144:
        {
            panda$core$MutableString* $tmp340 = (panda$core$MutableString*) malloc(40);
            $tmp340->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp340->refCount.value = 1;
            panda$core$MutableString$init($tmp340);
            result339 = $tmp340;
            {
                ITable* $tmp343 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp343->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp343 = $tmp343->next;
                }
                $fn345 $tmp344 = $tmp343->methods[0];
                panda$collections$Iterator* $tmp346 = $tmp344(((panda$collections$Iterable*) self->children));
                c$Iter342 = $tmp346;
                $l347:;
                ITable* $tmp349 = c$Iter342->$class->itable;
                while ($tmp349->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp349 = $tmp349->next;
                }
                $fn351 $tmp350 = $tmp349->methods[0];
                panda$core$Bit $tmp352 = $tmp350(c$Iter342);
                panda$core$Bit $tmp353 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp352);
                if (!$tmp353.value) goto $l348;
                {
                    ITable* $tmp355 = c$Iter342->$class->itable;
                    while ($tmp355->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp355 = $tmp355->next;
                    }
                    $fn357 $tmp356 = $tmp355->methods[1];
                    panda$core$Object* $tmp358 = $tmp356(c$Iter342);
                    c354 = ((org$pandalanguage$pandac$ASTNode*) $tmp358);
                    panda$core$MutableString$append$panda$core$Object(result339, ((panda$core$Object*) c354));
                    panda$core$MutableString$append$panda$core$String(result339, &$s359);
                }
                goto $l347;
                $l348:;
            }
            panda$core$String* $tmp360 = panda$core$MutableString$finish$R$panda$core$String(result339);
            return $tmp360;
        }
        break;
        case 129:
        {
            panda$core$Int64 $tmp361 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp361, ((panda$core$Int64) { 1 }));
            if ($tmp362.value) {
            {
                panda$core$Object* $tmp363 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp364 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp363));
                return $tmp364;
            }
            }
            panda$core$Object* $tmp365 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp366 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp365));
            panda$core$String* $tmp368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp366, &$s367);
            panda$core$Object* $tmp369 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp370 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp368, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp369)));
            panda$core$String* $tmp372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp370, &$s371);
            return $tmp372;
        }
        break;
        case 130:
        {
            panda$core$MutableString* $tmp374 = (panda$core$MutableString*) malloc(40);
            $tmp374->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp374->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp374, &$s376);
            result373 = $tmp374;
            separator377 = &$s378;
            {
                ITable* $tmp380 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp380->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp380 = $tmp380->next;
                }
                $fn382 $tmp381 = $tmp380->methods[0];
                panda$collections$Iterator* $tmp383 = $tmp381(((panda$collections$Iterable*) self->children));
                c$Iter379 = $tmp383;
                $l384:;
                ITable* $tmp386 = c$Iter379->$class->itable;
                while ($tmp386->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp386 = $tmp386->next;
                }
                $fn388 $tmp387 = $tmp386->methods[0];
                panda$core$Bit $tmp389 = $tmp387(c$Iter379);
                panda$core$Bit $tmp390 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp389);
                if (!$tmp390.value) goto $l385;
                {
                    ITable* $tmp392 = c$Iter379->$class->itable;
                    while ($tmp392->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp392 = $tmp392->next;
                    }
                    $fn394 $tmp393 = $tmp392->methods[1];
                    panda$core$Object* $tmp395 = $tmp393(c$Iter379);
                    c391 = ((org$pandalanguage$pandac$ASTNode*) $tmp395);
                    panda$core$MutableString$append$panda$core$String(result373, separator377);
                    panda$core$MutableString$append$panda$core$Object(result373, ((panda$core$Object*) c391));
                    separator377 = &$s396;
                }
                goto $l384;
                $l385:;
            }
            panda$core$String* $tmp397 = panda$core$MutableString$finish$R$panda$core$String(result373);
            return $tmp397;
        }
        break;
        case 131:
        {
            panda$core$MutableString* $tmp399 = (panda$core$MutableString*) malloc(40);
            $tmp399->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp399->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp399, &$s401);
            result398 = $tmp399;
            separator402 = &$s403;
            {
                ITable* $tmp405 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp405->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp405 = $tmp405->next;
                }
                $fn407 $tmp406 = $tmp405->methods[0];
                panda$collections$Iterator* $tmp408 = $tmp406(((panda$collections$Iterable*) self->children));
                c$Iter404 = $tmp408;
                $l409:;
                ITable* $tmp411 = c$Iter404->$class->itable;
                while ($tmp411->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp411 = $tmp411->next;
                }
                $fn413 $tmp412 = $tmp411->methods[0];
                panda$core$Bit $tmp414 = $tmp412(c$Iter404);
                panda$core$Bit $tmp415 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp414);
                if (!$tmp415.value) goto $l410;
                {
                    ITable* $tmp417 = c$Iter404->$class->itable;
                    while ($tmp417->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp417 = $tmp417->next;
                    }
                    $fn419 $tmp418 = $tmp417->methods[1];
                    panda$core$Object* $tmp420 = $tmp418(c$Iter404);
                    c416 = ((org$pandalanguage$pandac$ASTNode*) $tmp420);
                    panda$core$MutableString$append$panda$core$String(result398, separator402);
                    panda$core$MutableString$append$panda$core$Object(result398, ((panda$core$Object*) c416));
                    separator402 = &$s421;
                }
                goto $l409;
                $l410:;
            }
            panda$core$String* $tmp422 = panda$core$MutableString$finish$R$panda$core$String(result398);
            return $tmp422;
        }
        break;
        case 133:
        {
            panda$core$MutableString* $tmp424 = (panda$core$MutableString*) malloc(40);
            $tmp424->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp424->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp424, &$s426);
            result423 = $tmp424;
            separator427 = &$s428;
            {
                ITable* $tmp430 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp430->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp430 = $tmp430->next;
                }
                $fn432 $tmp431 = $tmp430->methods[0];
                panda$collections$Iterator* $tmp433 = $tmp431(((panda$collections$Iterable*) self->children));
                c$Iter429 = $tmp433;
                $l434:;
                ITable* $tmp436 = c$Iter429->$class->itable;
                while ($tmp436->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp436 = $tmp436->next;
                }
                $fn438 $tmp437 = $tmp436->methods[0];
                panda$core$Bit $tmp439 = $tmp437(c$Iter429);
                panda$core$Bit $tmp440 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp439);
                if (!$tmp440.value) goto $l435;
                {
                    ITable* $tmp442 = c$Iter429->$class->itable;
                    while ($tmp442->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp442 = $tmp442->next;
                    }
                    $fn444 $tmp443 = $tmp442->methods[1];
                    panda$core$Object* $tmp445 = $tmp443(c$Iter429);
                    c441 = ((org$pandalanguage$pandac$ASTNode*) $tmp445);
                    panda$core$MutableString$append$panda$core$String(result423, separator427);
                    panda$core$MutableString$append$panda$core$Object(result423, ((panda$core$Object*) c441));
                    separator427 = &$s446;
                }
                goto $l434;
                $l435:;
            }
            panda$core$String* $tmp447 = panda$core$MutableString$finish$R$panda$core$String(result423);
            return $tmp447;
        }
        break;
        case 132:
        {
            panda$core$MutableString* $tmp449 = (panda$core$MutableString*) malloc(40);
            $tmp449->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp449->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp449, &$s451);
            result448 = $tmp449;
            separator452 = &$s453;
            {
                ITable* $tmp455 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp455->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp455 = $tmp455->next;
                }
                $fn457 $tmp456 = $tmp455->methods[0];
                panda$collections$Iterator* $tmp458 = $tmp456(((panda$collections$Iterable*) self->children));
                c$Iter454 = $tmp458;
                $l459:;
                ITable* $tmp461 = c$Iter454->$class->itable;
                while ($tmp461->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp461 = $tmp461->next;
                }
                $fn463 $tmp462 = $tmp461->methods[0];
                panda$core$Bit $tmp464 = $tmp462(c$Iter454);
                panda$core$Bit $tmp465 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp464);
                if (!$tmp465.value) goto $l460;
                {
                    ITable* $tmp467 = c$Iter454->$class->itable;
                    while ($tmp467->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp467 = $tmp467->next;
                    }
                    $fn469 $tmp468 = $tmp467->methods[1];
                    panda$core$Object* $tmp470 = $tmp468(c$Iter454);
                    c466 = ((org$pandalanguage$pandac$ASTNode*) $tmp470);
                    panda$core$MutableString$append$panda$core$String(result448, separator452);
                    panda$core$MutableString$append$panda$core$Object(result448, ((panda$core$Object*) c466));
                    separator452 = &$s471;
                }
                goto $l459;
                $l460:;
            }
            panda$core$String* $tmp472 = panda$core$MutableString$finish$R$panda$core$String(result448);
            return $tmp472;
        }
        break;
        case 148:
        {
            panda$core$Int64 $tmp473 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp473, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp474.value);
            panda$core$Object* $tmp475 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp476 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp475));
            panda$core$String* $tmp478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp476, &$s477);
            panda$core$Object* $tmp479 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp480 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp478, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp479)));
            panda$core$String* $tmp482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp480, &$s481);
            panda$core$Object* $tmp483 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp484 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp482, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp483)));
            panda$core$String* $tmp486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp484, &$s485);
            return $tmp486;
        }
        break;
        case 149:
        {
            panda$core$Int64 $tmp487 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp487, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp488.value);
            panda$core$String* $tmp490 = (($fn489) self->payload->$class->vtable[0])(self->payload);
            panda$core$String* $tmp492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp490, &$s491);
            panda$core$Object* $tmp493 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp494 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp492, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp493)));
            panda$core$String* $tmp496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp494, &$s495);
            return $tmp496;
        }
        break;
        case 150:
        {
            panda$core$MutableString* $tmp498 = (panda$core$MutableString*) malloc(40);
            $tmp498->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp498->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp498, &$s500);
            result497 = $tmp498;
            separator501 = &$s502;
            {
                ITable* $tmp504 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp504->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp504 = $tmp504->next;
                }
                $fn506 $tmp505 = $tmp504->methods[0];
                panda$collections$Iterator* $tmp507 = $tmp505(((panda$collections$Iterable*) self->children));
                c$Iter503 = $tmp507;
                $l508:;
                ITable* $tmp510 = c$Iter503->$class->itable;
                while ($tmp510->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp510 = $tmp510->next;
                }
                $fn512 $tmp511 = $tmp510->methods[0];
                panda$core$Bit $tmp513 = $tmp511(c$Iter503);
                panda$core$Bit $tmp514 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp513);
                if (!$tmp514.value) goto $l509;
                {
                    ITable* $tmp516 = c$Iter503->$class->itable;
                    while ($tmp516->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp516 = $tmp516->next;
                    }
                    $fn518 $tmp517 = $tmp516->methods[1];
                    panda$core$Object* $tmp519 = $tmp517(c$Iter503);
                    c515 = ((org$pandalanguage$pandac$ASTNode*) $tmp519);
                    panda$core$MutableString$append$panda$core$String(result497, separator501);
                    panda$core$MutableString$append$panda$core$Object(result497, ((panda$core$Object*) c515));
                    separator501 = &$s520;
                }
                goto $l508;
                $l509:;
            }
            panda$core$MutableString$append$panda$core$String(result497, &$s521);
            panda$core$String* $tmp522 = panda$core$MutableString$finish$R$panda$core$String(result497);
            return $tmp522;
        }
        break;
        case 147:
        {
            panda$core$Int64 $tmp523 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp523, ((panda$core$Int64) { 5 }));
            PANDA_ASSERT($tmp524.value);
            panda$core$Object* $tmp525 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp526 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp525));
            panda$core$String* $tmp528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp526, &$s527);
            panda$core$Object* $tmp529 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp530 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp528, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp529)));
            panda$core$String* $tmp532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp530, &$s531);
            panda$core$Object* $tmp533 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp534 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp532, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp533)));
            panda$core$String* $tmp536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp534, &$s535);
            panda$core$Object* $tmp537 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp538 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp536, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp537)));
            panda$core$String* $tmp540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp538, &$s539);
            panda$core$Object* $tmp541 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp542 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp540, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp541)));
            panda$core$String* $tmp544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp542, &$s543);
            return $tmp544;
        }
        break;
        case 145:
        {
            panda$core$Int64 $tmp545 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp545, ((panda$core$Int64) { 6 }));
            PANDA_ASSERT($tmp546.value);
            panda$core$Object* $tmp547 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp548 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp547));
            panda$core$String* $tmp550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp548, &$s549);
            panda$core$Object* $tmp551 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp552 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp550, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp551)));
            panda$core$String* $tmp554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp552, &$s553);
            panda$core$String* $tmp555 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp554, self->payload);
            panda$core$String* $tmp557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp555, &$s556);
            panda$core$Object* $tmp558 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp559 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp557, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp558)));
            panda$core$String* $tmp561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp559, &$s560);
            panda$core$Object* $tmp562 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp563 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp562));
            panda$core$String* $tmp565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp563, &$s564);
            panda$core$Object* $tmp566 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp567 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp565, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp566)));
            panda$core$String* $tmp569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp567, &$s568);
            panda$core$Object* $tmp570 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$String* $tmp571 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp569, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp570)));
            panda$core$String* $tmp573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp571, &$s572);
            panda$core$String* $tmp574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp561, $tmp573);
            return $tmp574;
        }
        break;
        case 146:
        {
            panda$core$Int64 $tmp575 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp575, ((panda$core$Int64) { 6 }));
            PANDA_ASSERT($tmp576.value);
            panda$core$Object* $tmp577 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp578 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp577));
            panda$core$String* $tmp580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp578, &$s579);
            panda$core$Object* $tmp581 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp582 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp580, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp581)));
            panda$core$String* $tmp584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp582, &$s583);
            panda$core$String* $tmp585 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp584, self->payload);
            panda$core$String* $tmp587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp585, &$s586);
            panda$core$Object* $tmp588 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp589 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp587, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp588)));
            panda$core$String* $tmp591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp589, &$s590);
            panda$core$Object* $tmp592 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp593 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp592));
            panda$core$String* $tmp595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp593, &$s594);
            panda$core$Object* $tmp596 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp597 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp595, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp596)));
            panda$core$String* $tmp599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp597, &$s598);
            panda$core$Object* $tmp600 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$String* $tmp601 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp599, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp600)));
            panda$core$String* $tmp603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp601, &$s602);
            panda$core$String* $tmp604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp591, $tmp603);
            return $tmp604;
        }
        break;
        case 140:
        {
            panda$core$MutableString* $tmp606 = (panda$core$MutableString*) malloc(40);
            $tmp606->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp606->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp606, &$s608);
            result605 = $tmp606;
            {
                ITable* $tmp610 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp610->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp610 = $tmp610->next;
                }
                $fn612 $tmp611 = $tmp610->methods[0];
                panda$collections$Iterator* $tmp613 = $tmp611(((panda$collections$Iterable*) self->children));
                c$Iter609 = $tmp613;
                $l614:;
                ITable* $tmp616 = c$Iter609->$class->itable;
                while ($tmp616->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp616 = $tmp616->next;
                }
                $fn618 $tmp617 = $tmp616->methods[0];
                panda$core$Bit $tmp619 = $tmp617(c$Iter609);
                panda$core$Bit $tmp620 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp619);
                if (!$tmp620.value) goto $l615;
                {
                    ITable* $tmp622 = c$Iter609->$class->itable;
                    while ($tmp622->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp622 = $tmp622->next;
                    }
                    $fn624 $tmp623 = $tmp622->methods[1];
                    panda$core$Object* $tmp625 = $tmp623(c$Iter609);
                    c621 = ((org$pandalanguage$pandac$ASTNode*) $tmp625);
                    panda$core$MutableString$append$panda$core$Object(result605, ((panda$core$Object*) c621));
                    panda$core$MutableString$append$panda$core$String(result605, &$s626);
                }
                goto $l614;
                $l615:;
            }
            panda$core$MutableString$append$panda$core$String(result605, &$s627);
            panda$core$String* $tmp628 = panda$core$MutableString$finish$R$panda$core$String(result605);
            return $tmp628;
        }
        break;
        case 142:
        {
            panda$core$Int64 $tmp629 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp629, ((panda$core$Int64) { 6 }));
            PANDA_ASSERT($tmp630.value);
            panda$core$MutableString* $tmp632 = (panda$core$MutableString*) malloc(40);
            $tmp632->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp632->refCount.value = 1;
            panda$core$MutableString$init($tmp632);
            result631 = $tmp632;
            panda$core$Object* $tmp634 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$append$panda$core$Object(result631, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp634)));
            panda$core$Object* $tmp635 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$MutableString$append$panda$core$Object(result631, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp635)));
            panda$core$String* $tmp637 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s636, self->payload);
            panda$core$String* $tmp639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp637, &$s638);
            panda$core$MutableString$append$panda$core$String(result631, $tmp639);
            panda$core$Object* $tmp640 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$MutableString$append$panda$core$Object(result631, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp640)));
            panda$core$Object* $tmp641 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$Bit $tmp642 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp641)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp642.value) {
            {
                panda$core$MutableString$append$panda$core$String(result631, &$s643);
                panda$core$Object* $tmp644 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
                panda$core$MutableString$append$panda$core$Object(result631, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp644)));
            }
            }
            panda$core$Object* $tmp645 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$Bit $tmp646 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp645)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp646.value) {
            {
                panda$core$MutableString$append$panda$core$String(result631, &$s647);
                panda$core$Object* $tmp648 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
                panda$core$MutableString$append$panda$core$Object(result631, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp648)));
                panda$core$MutableString$append$panda$core$String(result631, &$s649);
            }
            }
            panda$core$MutableString$append$panda$core$String(result631, &$s650);
            panda$core$Object* $tmp651 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$MutableString$append$panda$core$Object(result631, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp651)));
            panda$core$String* $tmp652 = panda$core$MutableString$finish$R$panda$core$String(result631);
            return $tmp652;
        }
        break;
        case 151:
        {
            panda$core$Int64 $tmp653 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp653, ((panda$core$Int64) { 5 }));
            PANDA_ASSERT($tmp654.value);
            panda$core$MutableString* $tmp656 = (panda$core$MutableString*) malloc(40);
            $tmp656->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp656->refCount.value = 1;
            panda$core$MutableString$init($tmp656);
            result655 = $tmp656;
            panda$core$Object* $tmp658 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$append$panda$core$Object(result655, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp658)));
            panda$core$Object* $tmp659 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$MutableString$append$panda$core$Object(result655, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp659)));
            panda$core$String* $tmp661 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s660, self->payload);
            panda$core$String* $tmp663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp661, &$s662);
            panda$core$MutableString$append$panda$core$String(result655, $tmp663);
            panda$core$Object* $tmp664 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$MutableString$append$panda$core$Object(result655, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp664)));
            panda$core$MutableString$append$panda$core$String(result655, &$s665);
            panda$core$Object* $tmp666 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$MutableString$append$panda$core$Object(result655, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp666)));
            panda$core$Object* $tmp667 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$MutableString$append$panda$core$Object(result655, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp667)));
            panda$core$String* $tmp668 = panda$core$MutableString$finish$R$panda$core$String(result655);
            return $tmp668;
        }
        break;
        case 152:
        {
            panda$core$MutableString* $tmp670 = (panda$core$MutableString*) malloc(40);
            $tmp670->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp670->refCount.value = 1;
            panda$core$MutableString$init($tmp670);
            result669 = $tmp670;
            {
                ITable* $tmp673 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp673->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp673 = $tmp673->next;
                }
                $fn675 $tmp674 = $tmp673->methods[0];
                panda$collections$Iterator* $tmp676 = $tmp674(((panda$collections$Iterable*) self->children));
                c$Iter672 = $tmp676;
                $l677:;
                ITable* $tmp679 = c$Iter672->$class->itable;
                while ($tmp679->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp679 = $tmp679->next;
                }
                $fn681 $tmp680 = $tmp679->methods[0];
                panda$core$Bit $tmp682 = $tmp680(c$Iter672);
                panda$core$Bit $tmp683 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp682);
                if (!$tmp683.value) goto $l678;
                {
                    ITable* $tmp685 = c$Iter672->$class->itable;
                    while ($tmp685->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp685 = $tmp685->next;
                    }
                    $fn687 $tmp686 = $tmp685->methods[1];
                    panda$core$Object* $tmp688 = $tmp686(c$Iter672);
                    c684 = ((org$pandalanguage$pandac$ASTNode*) $tmp688);
                    panda$core$MutableString$append$panda$core$Object(result669, ((panda$core$Object*) c684));
                    panda$core$MutableString$append$panda$core$String(result669, &$s689);
                }
                goto $l677;
                $l678:;
            }
            panda$core$String* $tmp690 = panda$core$MutableString$finish$R$panda$core$String(result669);
            return $tmp690;
        }
        break;
        case 114:
        {
            return &$s691;
        }
        break;
        case 115:
        {
            return &$s692;
        }
        break;
        case 138:
        {
            return &$s693;
        }
        break;
        case 111:
        {
            panda$core$Object* $tmp694 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp695 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp694));
            panda$core$String* $tmp697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp695, &$s696);
            panda$core$Object* $tmp698 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp699 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp697, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp698)));
            panda$core$String* $tmp701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp699, &$s700);
            return $tmp701;
        }
        break;
        default:
        {
            panda$core$String* $tmp703 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s702, ((panda$core$Object*) wrap_panda$core$Int64(self->kind)));
            panda$core$String* $tmp705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp703, &$s704);
            return $tmp705;
        }
    }
}

