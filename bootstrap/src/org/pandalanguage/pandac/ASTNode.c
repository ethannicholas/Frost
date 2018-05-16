#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"


static panda$core$String $s1;
org$pandalanguage$pandac$ASTNode$class_type org$pandalanguage$pandac$ASTNode$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String, org$pandalanguage$pandac$ASTNode$cleanup, org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position} };

typedef org$pandalanguage$pandac$Position (*$fn136)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn318)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn360)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn367)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn378)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn423)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn486)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn533)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn540)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn551)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn590)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn597)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn608)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn653)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn665)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn697)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn704)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn715)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn747)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn781)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn788)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn799)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn832)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn839)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn850)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn903)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn910)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn921)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn993)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1000)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1011)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1048)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1078)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1085)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1096)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1140)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1147)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1158)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1210)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1217)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1228)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1268)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1275)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1286)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1357)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1551)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1558)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1569)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1592)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1599)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1610)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1658)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1665)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1676)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 32, -9211815390615587804, NULL };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s686 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static panda$core$String $s726 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s802 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s853 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s924 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s949 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s954 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s981 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s983 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1014 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1021 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1023 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1067 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1069 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1099 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s1239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s1246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s1539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s1542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1576 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1679 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

org$pandalanguage$pandac$Position org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$76_95 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp6;
    org$pandalanguage$pandac$Position position8;
    org$pandalanguage$pandac$Position $finallyReturn9;
    org$pandalanguage$pandac$Position position14;
    org$pandalanguage$pandac$Position $finallyReturn15;
    org$pandalanguage$pandac$Position position20;
    org$pandalanguage$pandac$Position $finallyReturn21;
    org$pandalanguage$pandac$Position position26;
    org$pandalanguage$pandac$Position $finallyReturn27;
    org$pandalanguage$pandac$Position position32;
    org$pandalanguage$pandac$Position $finallyReturn33;
    org$pandalanguage$pandac$Position position38;
    org$pandalanguage$pandac$Position $finallyReturn39;
    org$pandalanguage$pandac$Position position44;
    org$pandalanguage$pandac$Position $finallyReturn45;
    org$pandalanguage$pandac$Position position50;
    org$pandalanguage$pandac$Position $finallyReturn51;
    org$pandalanguage$pandac$Position position56;
    org$pandalanguage$pandac$Position $finallyReturn57;
    org$pandalanguage$pandac$Position position62;
    org$pandalanguage$pandac$Position $finallyReturn63;
    org$pandalanguage$pandac$Position position68;
    org$pandalanguage$pandac$Position $finallyReturn69;
    org$pandalanguage$pandac$Position position74;
    org$pandalanguage$pandac$Position $finallyReturn75;
    org$pandalanguage$pandac$Position position80;
    org$pandalanguage$pandac$Position $finallyReturn81;
    org$pandalanguage$pandac$Position position86;
    org$pandalanguage$pandac$Position $finallyReturn87;
    org$pandalanguage$pandac$Position position92;
    org$pandalanguage$pandac$Position $finallyReturn93;
    org$pandalanguage$pandac$Position $finallyReturn97;
    org$pandalanguage$pandac$Position $tmp99;
    org$pandalanguage$pandac$Position position103;
    org$pandalanguage$pandac$Position $finallyReturn104;
    org$pandalanguage$pandac$Position position109;
    org$pandalanguage$pandac$Position $finallyReturn110;
    org$pandalanguage$pandac$Position position115;
    org$pandalanguage$pandac$Position $finallyReturn116;
    org$pandalanguage$pandac$Position position121;
    org$pandalanguage$pandac$Position $finallyReturn122;
    org$pandalanguage$pandac$Position position127;
    org$pandalanguage$pandac$Position $finallyReturn128;
    org$pandalanguage$pandac$IRNode* ir133 = NULL;
    org$pandalanguage$pandac$Position $finallyReturn134;
    org$pandalanguage$pandac$Position position141;
    org$pandalanguage$pandac$Position $finallyReturn142;
    org$pandalanguage$pandac$Position position147;
    org$pandalanguage$pandac$Position $finallyReturn148;
    org$pandalanguage$pandac$Position position153;
    org$pandalanguage$pandac$Position $finallyReturn154;
    org$pandalanguage$pandac$Position position159;
    org$pandalanguage$pandac$Position $finallyReturn160;
    org$pandalanguage$pandac$Position position165;
    org$pandalanguage$pandac$Position $finallyReturn166;
    org$pandalanguage$pandac$Position position171;
    org$pandalanguage$pandac$Position $finallyReturn172;
    org$pandalanguage$pandac$Position position177;
    org$pandalanguage$pandac$Position $finallyReturn178;
    org$pandalanguage$pandac$Position position183;
    org$pandalanguage$pandac$Position $finallyReturn184;
    org$pandalanguage$pandac$Position position189;
    org$pandalanguage$pandac$Position $finallyReturn190;
    org$pandalanguage$pandac$Position position195;
    org$pandalanguage$pandac$Position $finallyReturn196;
    org$pandalanguage$pandac$Position position201;
    org$pandalanguage$pandac$Position $finallyReturn202;
    org$pandalanguage$pandac$Position position207;
    org$pandalanguage$pandac$Position $finallyReturn208;
    org$pandalanguage$pandac$Position position213;
    org$pandalanguage$pandac$Position $finallyReturn214;
    org$pandalanguage$pandac$Position position219;
    org$pandalanguage$pandac$Position $finallyReturn220;
    org$pandalanguage$pandac$Position position225;
    org$pandalanguage$pandac$Position $finallyReturn226;
    org$pandalanguage$pandac$Position position231;
    org$pandalanguage$pandac$Position $finallyReturn232;
    org$pandalanguage$pandac$Position position237;
    org$pandalanguage$pandac$Position $finallyReturn238;
    org$pandalanguage$pandac$Position position243;
    org$pandalanguage$pandac$Position $finallyReturn244;
    org$pandalanguage$pandac$Position position249;
    org$pandalanguage$pandac$Position $finallyReturn250;
    org$pandalanguage$pandac$Position position255;
    org$pandalanguage$pandac$Position $finallyReturn256;
    int $tmp4;
    {
        $tmp6 = self;
        $match$76_95 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp7.value) {
        {
            org$pandalanguage$pandac$Position* $tmp9 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position8 = *$tmp9;
            $finallyReturn9 = position8;
            $tmp4 = 0;
            goto $l2;
            $l11:;
            return $finallyReturn9;
        }
        }
        else {
        panda$core$Bit $tmp13 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp13.value) {
        {
            org$pandalanguage$pandac$Position* $tmp15 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position14 = *$tmp15;
            $finallyReturn15 = position14;
            $tmp4 = 1;
            goto $l2;
            $l17:;
            return $finallyReturn15;
        }
        }
        else {
        panda$core$Bit $tmp19 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp19.value) {
        {
            org$pandalanguage$pandac$Position* $tmp21 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position20 = *$tmp21;
            $finallyReturn21 = position20;
            $tmp4 = 2;
            goto $l2;
            $l23:;
            return $finallyReturn21;
        }
        }
        else {
        panda$core$Bit $tmp25 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp25.value) {
        {
            org$pandalanguage$pandac$Position* $tmp27 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position26 = *$tmp27;
            $finallyReturn27 = position26;
            $tmp4 = 3;
            goto $l2;
            $l29:;
            return $finallyReturn27;
        }
        }
        else {
        panda$core$Bit $tmp31 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp31.value) {
        {
            org$pandalanguage$pandac$Position* $tmp33 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position32 = *$tmp33;
            $finallyReturn33 = position32;
            $tmp4 = 4;
            goto $l2;
            $l35:;
            return $finallyReturn33;
        }
        }
        else {
        panda$core$Bit $tmp37 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp37.value) {
        {
            org$pandalanguage$pandac$Position* $tmp39 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position38 = *$tmp39;
            $finallyReturn39 = position38;
            $tmp4 = 5;
            goto $l2;
            $l41:;
            return $finallyReturn39;
        }
        }
        else {
        panda$core$Bit $tmp43 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp43.value) {
        {
            org$pandalanguage$pandac$Position* $tmp45 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position44 = *$tmp45;
            $finallyReturn45 = position44;
            $tmp4 = 6;
            goto $l2;
            $l47:;
            return $finallyReturn45;
        }
        }
        else {
        panda$core$Bit $tmp49 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp49.value) {
        {
            org$pandalanguage$pandac$Position* $tmp51 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position50 = *$tmp51;
            $finallyReturn51 = position50;
            $tmp4 = 7;
            goto $l2;
            $l53:;
            return $finallyReturn51;
        }
        }
        else {
        panda$core$Bit $tmp55 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp55.value) {
        {
            org$pandalanguage$pandac$Position* $tmp57 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position56 = *$tmp57;
            $finallyReturn57 = position56;
            $tmp4 = 8;
            goto $l2;
            $l59:;
            return $finallyReturn57;
        }
        }
        else {
        panda$core$Bit $tmp61 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp61.value) {
        {
            org$pandalanguage$pandac$Position* $tmp63 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position62 = *$tmp63;
            $finallyReturn63 = position62;
            $tmp4 = 9;
            goto $l2;
            $l65:;
            return $finallyReturn63;
        }
        }
        else {
        panda$core$Bit $tmp67 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp67.value) {
        {
            org$pandalanguage$pandac$Position* $tmp69 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position68 = *$tmp69;
            $finallyReturn69 = position68;
            $tmp4 = 10;
            goto $l2;
            $l71:;
            return $finallyReturn69;
        }
        }
        else {
        panda$core$Bit $tmp73 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp73.value) {
        {
            org$pandalanguage$pandac$Position* $tmp75 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position74 = *$tmp75;
            $finallyReturn75 = position74;
            $tmp4 = 11;
            goto $l2;
            $l77:;
            return $finallyReturn75;
        }
        }
        else {
        panda$core$Bit $tmp79 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp79.value) {
        {
            org$pandalanguage$pandac$Position* $tmp81 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position80 = *$tmp81;
            $finallyReturn81 = position80;
            $tmp4 = 12;
            goto $l2;
            $l83:;
            return $finallyReturn81;
        }
        }
        else {
        panda$core$Bit $tmp85 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp85.value) {
        {
            org$pandalanguage$pandac$Position* $tmp87 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position86 = *$tmp87;
            $finallyReturn87 = position86;
            $tmp4 = 13;
            goto $l2;
            $l89:;
            return $finallyReturn87;
        }
        }
        else {
        panda$core$Bit $tmp91 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp91.value) {
        {
            org$pandalanguage$pandac$Position* $tmp93 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position92 = *$tmp93;
            $finallyReturn93 = position92;
            $tmp4 = 14;
            goto $l2;
            $l95:;
            return $finallyReturn93;
        }
        }
        else {
        panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp97.value) {
        {
            org$pandalanguage$pandac$Position$init(&$tmp99);
            $finallyReturn97 = $tmp99;
            $tmp4 = 15;
            goto $l2;
            $l100:;
            return $finallyReturn97;
        }
        }
        else {
        panda$core$Bit $tmp102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp102.value) {
        {
            org$pandalanguage$pandac$Position* $tmp104 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position103 = *$tmp104;
            $finallyReturn104 = position103;
            $tmp4 = 16;
            goto $l2;
            $l106:;
            return $finallyReturn104;
        }
        }
        else {
        panda$core$Bit $tmp108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp108.value) {
        {
            org$pandalanguage$pandac$Position* $tmp110 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position109 = *$tmp110;
            $finallyReturn110 = position109;
            $tmp4 = 17;
            goto $l2;
            $l112:;
            return $finallyReturn110;
        }
        }
        else {
        panda$core$Bit $tmp114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp114.value) {
        {
            org$pandalanguage$pandac$Position* $tmp116 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position115 = *$tmp116;
            $finallyReturn116 = position115;
            $tmp4 = 18;
            goto $l2;
            $l118:;
            return $finallyReturn116;
        }
        }
        else {
        panda$core$Bit $tmp120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp120.value) {
        {
            org$pandalanguage$pandac$Position* $tmp122 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position121 = *$tmp122;
            $finallyReturn122 = position121;
            $tmp4 = 19;
            goto $l2;
            $l124:;
            return $finallyReturn122;
        }
        }
        else {
        panda$core$Bit $tmp126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp126.value) {
        {
            org$pandalanguage$pandac$Position* $tmp128 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position127 = *$tmp128;
            $finallyReturn128 = position127;
            $tmp4 = 20;
            goto $l2;
            $l130:;
            return $finallyReturn128;
        }
        }
        else {
        panda$core$Bit $tmp132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp132.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp134 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 0));
            ir133 = *$tmp134;
            org$pandalanguage$pandac$Position $tmp137 = (($fn136) ir133->$class->vtable[3])(ir133);
            $finallyReturn134 = $tmp137;
            $tmp4 = 21;
            goto $l2;
            $l138:;
            return $finallyReturn134;
        }
        }
        else {
        panda$core$Bit $tmp140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp140.value) {
        {
            org$pandalanguage$pandac$Position* $tmp142 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position141 = *$tmp142;
            $finallyReturn142 = position141;
            $tmp4 = 22;
            goto $l2;
            $l144:;
            return $finallyReturn142;
        }
        }
        else {
        panda$core$Bit $tmp146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp146.value) {
        {
            org$pandalanguage$pandac$Position* $tmp148 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position147 = *$tmp148;
            $finallyReturn148 = position147;
            $tmp4 = 23;
            goto $l2;
            $l150:;
            return $finallyReturn148;
        }
        }
        else {
        panda$core$Bit $tmp152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp152.value) {
        {
            org$pandalanguage$pandac$Position* $tmp154 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position153 = *$tmp154;
            $finallyReturn154 = position153;
            $tmp4 = 24;
            goto $l2;
            $l156:;
            return $finallyReturn154;
        }
        }
        else {
        panda$core$Bit $tmp158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp158.value) {
        {
            org$pandalanguage$pandac$Position* $tmp160 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position159 = *$tmp160;
            $finallyReturn160 = position159;
            $tmp4 = 25;
            goto $l2;
            $l162:;
            return $finallyReturn160;
        }
        }
        else {
        panda$core$Bit $tmp164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp164.value) {
        {
            org$pandalanguage$pandac$Position* $tmp166 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position165 = *$tmp166;
            $finallyReturn166 = position165;
            $tmp4 = 26;
            goto $l2;
            $l168:;
            return $finallyReturn166;
        }
        }
        else {
        panda$core$Bit $tmp170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp170.value) {
        {
            org$pandalanguage$pandac$Position* $tmp172 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position171 = *$tmp172;
            $finallyReturn172 = position171;
            $tmp4 = 27;
            goto $l2;
            $l174:;
            return $finallyReturn172;
        }
        }
        else {
        panda$core$Bit $tmp176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp176.value) {
        {
            org$pandalanguage$pandac$Position* $tmp178 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position177 = *$tmp178;
            $finallyReturn178 = position177;
            $tmp4 = 28;
            goto $l2;
            $l180:;
            return $finallyReturn178;
        }
        }
        else {
        panda$core$Bit $tmp182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp182.value) {
        {
            org$pandalanguage$pandac$Position* $tmp184 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position183 = *$tmp184;
            $finallyReturn184 = position183;
            $tmp4 = 29;
            goto $l2;
            $l186:;
            return $finallyReturn184;
        }
        }
        else {
        panda$core$Bit $tmp188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp188.value) {
        {
            org$pandalanguage$pandac$Position* $tmp190 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position189 = *$tmp190;
            $finallyReturn190 = position189;
            $tmp4 = 30;
            goto $l2;
            $l192:;
            return $finallyReturn190;
        }
        }
        else {
        panda$core$Bit $tmp194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp194.value) {
        {
            org$pandalanguage$pandac$Position* $tmp196 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position195 = *$tmp196;
            $finallyReturn196 = position195;
            $tmp4 = 31;
            goto $l2;
            $l198:;
            return $finallyReturn196;
        }
        }
        else {
        panda$core$Bit $tmp200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp200.value) {
        {
            org$pandalanguage$pandac$Position* $tmp202 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position201 = *$tmp202;
            $finallyReturn202 = position201;
            $tmp4 = 32;
            goto $l2;
            $l204:;
            return $finallyReturn202;
        }
        }
        else {
        panda$core$Bit $tmp206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp206.value) {
        {
            org$pandalanguage$pandac$Position* $tmp208 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position207 = *$tmp208;
            $finallyReturn208 = position207;
            $tmp4 = 33;
            goto $l2;
            $l210:;
            return $finallyReturn208;
        }
        }
        else {
        panda$core$Bit $tmp212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp212.value) {
        {
            org$pandalanguage$pandac$Position* $tmp214 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position213 = *$tmp214;
            $finallyReturn214 = position213;
            $tmp4 = 34;
            goto $l2;
            $l216:;
            return $finallyReturn214;
        }
        }
        else {
        panda$core$Bit $tmp218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp218.value) {
        {
            org$pandalanguage$pandac$Position* $tmp220 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position219 = *$tmp220;
            $finallyReturn220 = position219;
            $tmp4 = 35;
            goto $l2;
            $l222:;
            return $finallyReturn220;
        }
        }
        else {
        panda$core$Bit $tmp224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp224.value) {
        {
            org$pandalanguage$pandac$Position* $tmp226 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position225 = *$tmp226;
            $finallyReturn226 = position225;
            $tmp4 = 36;
            goto $l2;
            $l228:;
            return $finallyReturn226;
        }
        }
        else {
        panda$core$Bit $tmp230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp230.value) {
        {
            org$pandalanguage$pandac$Position* $tmp232 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position231 = *$tmp232;
            $finallyReturn232 = position231;
            $tmp4 = 37;
            goto $l2;
            $l234:;
            return $finallyReturn232;
        }
        }
        else {
        panda$core$Bit $tmp236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp236.value) {
        {
            org$pandalanguage$pandac$Position* $tmp238 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position237 = *$tmp238;
            $finallyReturn238 = position237;
            $tmp4 = 38;
            goto $l2;
            $l240:;
            return $finallyReturn238;
        }
        }
        else {
        panda$core$Bit $tmp242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp242.value) {
        {
            org$pandalanguage$pandac$Position* $tmp244 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position243 = *$tmp244;
            $finallyReturn244 = position243;
            $tmp4 = 39;
            goto $l2;
            $l246:;
            return $finallyReturn244;
        }
        }
        else {
        panda$core$Bit $tmp248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp248.value) {
        {
            org$pandalanguage$pandac$Position* $tmp250 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position249 = *$tmp250;
            $finallyReturn250 = position249;
            $tmp4 = 40;
            goto $l2;
            $l252:;
            return $finallyReturn250;
        }
        }
        else {
        panda$core$Bit $tmp254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp254.value) {
        {
            org$pandalanguage$pandac$Position* $tmp256 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_95->$data + 0));
            position255 = *$tmp256;
            $finallyReturn256 = position255;
            $tmp4 = 41;
            goto $l2;
            $l258:;
            return $finallyReturn256;
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
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    switch ($tmp4) {
        case 21: goto $l138;
        case 33: goto $l210;
        case 31: goto $l198;
        case 7: goto $l53;
        case 26: goto $l168;
        case 36: goto $l228;
        case 17: goto $l112;
        case 40: goto $l252;
        case 10: goto $l71;
        case 37: goto $l234;
        case 6: goto $l47;
        case 4: goto $l35;
        case 13: goto $l89;
        case 39: goto $l246;
        case 34: goto $l216;
        case 19: goto $l124;
        case 28: goto $l180;
        case 1: goto $l17;
        case 24: goto $l156;
        case 22: goto $l144;
        case 25: goto $l162;
        case 32: goto $l204;
        case 0: goto $l11;
        case 18: goto $l118;
        case 2: goto $l23;
        case 12: goto $l83;
        case 30: goto $l192;
        case 41: goto $l258;
        case 38: goto $l240;
        case 5: goto $l41;
        case 8: goto $l59;
        case 11: goto $l77;
        case -1: goto $l260;
        case 35: goto $l222;
        case 29: goto $l186;
        case 15: goto $l100;
        case 14: goto $l95;
        case 16: goto $l106;
        case 9: goto $l65;
        case 20: goto $l130;
        case 3: goto $l29;
        case 27: goto $l174;
        case 23: goto $l150;
    }
    $l260:;
}
panda$core$String* org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$167_9264 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp265;
    panda$core$String* name267 = NULL;
    panda$core$String* $finallyReturn268;
    panda$core$String* $tmp270;
    org$pandalanguage$pandac$ASTNode* test274 = NULL;
    org$pandalanguage$pandac$ASTNode* msg276 = NULL;
    panda$core$String* $finallyReturn277;
    panda$core$String* $tmp279;
    panda$core$String* $tmp280;
    panda$core$String* $tmp281;
    panda$core$String* $finallyReturn287;
    panda$core$String* $tmp289;
    panda$core$String* $tmp290;
    panda$core$String* $tmp291;
    panda$core$String* $tmp292;
    panda$core$String* $tmp293;
    org$pandalanguage$pandac$ASTNode* left304 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op306;
    org$pandalanguage$pandac$ASTNode* right308 = NULL;
    panda$core$String* $finallyReturn309;
    panda$core$String* $tmp311;
    panda$core$String* $tmp312;
    panda$core$String* $tmp313;
    panda$core$String* $tmp314;
    panda$core$String* $tmp315;
    panda$core$String* $tmp316;
    panda$core$String* $tmp317;
    panda$core$Object* $tmp322;
    panda$core$Bit value333;
    panda$core$String* $finallyReturn334;
    panda$core$String* $tmp336;
    panda$core$String* $tmp337;
    panda$collections$ImmutableArray* statements342 = NULL;
    panda$core$MutableString* result347 = NULL;
    panda$core$MutableString* $tmp348;
    panda$core$MutableString* $tmp349;
    panda$collections$Iterator* Iter$181$17355 = NULL;
    panda$collections$Iterator* $tmp356;
    panda$collections$Iterator* $tmp357;
    org$pandalanguage$pandac$ASTNode* s373 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp374;
    panda$core$Object* $tmp375;
    panda$core$String* $tmp380;
    panda$core$Char8 $tmp385;
    panda$core$String* $finallyReturn385;
    panda$core$String* $tmp387;
    panda$core$String* $tmp388;
    panda$core$String* label395 = NULL;
    panda$core$String* $finallyReturn396;
    panda$core$String* $tmp398;
    panda$core$String* $tmp399;
    panda$core$String* $tmp400;
    panda$core$String* $finallyReturn406;
    panda$core$String* $tmp408;
    org$pandalanguage$pandac$ASTNode* target413 = NULL;
    panda$collections$ImmutableArray* args415 = NULL;
    panda$core$String* $finallyReturn416;
    panda$core$String* $tmp418;
    panda$core$String* $tmp419;
    panda$core$String* $tmp420;
    panda$core$String* $tmp421;
    panda$core$String* $tmp422;
    panda$core$String* $tmp427;
    org$pandalanguage$pandac$ASTNode* dc435 = NULL;
    panda$core$String* name437 = NULL;
    panda$collections$ImmutableArray* fields439 = NULL;
    panda$core$MutableString* result444 = NULL;
    panda$core$MutableString* $tmp445;
    panda$core$MutableString* $tmp446;
    panda$core$String* $tmp448;
    panda$core$String* $tmp451;
    panda$core$String* $tmp452;
    panda$core$String* $tmp453;
    panda$core$String* $tmp454;
    panda$core$String* $tmp458;
    panda$core$String* $finallyReturn462;
    panda$core$String* $tmp464;
    panda$core$String* $tmp465;
    org$pandalanguage$pandac$ASTNode* base472 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce474 = NULL;
    panda$core$Int64 index476;
    panda$core$String* $finallyReturn477;
    panda$core$String* $tmp479;
    panda$core$String* $tmp480;
    panda$core$String* $tmp481;
    panda$core$String* $tmp482;
    panda$core$String* $tmp483;
    panda$core$String* $tmp484;
    panda$core$String* $tmp485;
    panda$core$Object* $tmp493;
    org$pandalanguage$pandac$ASTNode* dc501 = NULL;
    panda$collections$ImmutableArray* annotations503 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind505;
    panda$core$String* name507 = NULL;
    panda$collections$ImmutableArray* generics509 = NULL;
    panda$collections$ImmutableArray* supertypes511 = NULL;
    panda$collections$ImmutableArray* members513 = NULL;
    panda$core$MutableString* result518 = NULL;
    panda$core$MutableString* $tmp519;
    panda$core$MutableString* $tmp520;
    panda$core$String* $tmp522;
    panda$collections$Iterator* Iter$207$17528 = NULL;
    panda$collections$Iterator* $tmp529;
    panda$collections$Iterator* $tmp530;
    org$pandalanguage$pandac$ASTNode* a546 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp547;
    panda$core$Object* $tmp548;
    panda$core$String* $tmp553;
    org$pandalanguage$pandac$ClassDecl$Kind $match$210_17558;
    panda$core$String* $tmp565;
    panda$core$String* $tmp566;
    panda$core$String* $tmp568;
    panda$core$String* $tmp573;
    panda$core$String* $tmp574;
    panda$core$String* $tmp576;
    panda$collections$Iterator* Iter$223$17585 = NULL;
    panda$collections$Iterator* $tmp586;
    panda$collections$Iterator* $tmp587;
    org$pandalanguage$pandac$ASTNode* m603 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp604;
    panda$core$Object* $tmp605;
    panda$core$String* $tmp610;
    panda$core$Char8 $tmp615;
    panda$core$String* $finallyReturn615;
    panda$core$String* $tmp617;
    panda$core$String* $tmp618;
    panda$core$String* label625 = NULL;
    panda$core$String* $finallyReturn626;
    panda$core$String* $tmp628;
    panda$core$String* $tmp629;
    panda$core$String* $tmp630;
    panda$core$String* $finallyReturn636;
    panda$core$String* $tmp638;
    org$pandalanguage$pandac$ASTNode* target643 = NULL;
    org$pandalanguage$pandac$ASTNode* value645 = NULL;
    panda$core$String* $finallyReturn646;
    panda$core$String* $tmp648;
    panda$core$String* $tmp649;
    panda$core$String* $tmp650;
    panda$core$String* $tmp651;
    panda$core$String* $tmp652;
    panda$core$String* $finallyReturn661;
    panda$core$String* $tmp663;
    panda$core$String* $tmp664;
    panda$core$String* label670 = NULL;
    panda$collections$ImmutableArray* statements672 = NULL;
    org$pandalanguage$pandac$ASTNode* test674 = NULL;
    panda$core$MutableString* result679 = NULL;
    panda$core$MutableString* $tmp680;
    panda$core$MutableString* $tmp681;
    panda$core$String* $tmp683;
    panda$core$String* $tmp684;
    panda$collections$Iterator* Iter$244$17692 = NULL;
    panda$collections$Iterator* $tmp693;
    panda$collections$Iterator* $tmp694;
    org$pandalanguage$pandac$ASTNode* s710 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp711;
    panda$core$Object* $tmp712;
    panda$core$String* $tmp717;
    panda$core$String* $tmp722;
    panda$core$String* $tmp723;
    panda$core$String* $finallyReturn727;
    panda$core$String* $tmp729;
    panda$core$String* $tmp730;
    org$pandalanguage$pandac$ASTNode* base737 = NULL;
    panda$core$String* field739 = NULL;
    panda$core$String* $finallyReturn740;
    panda$core$String* $tmp742;
    panda$core$String* $tmp743;
    panda$core$String* $tmp744;
    panda$core$String* $tmp745;
    panda$core$String* $tmp746;
    org$pandalanguage$pandac$ASTNode* dc757 = NULL;
    panda$collections$ImmutableArray* annotations759 = NULL;
    org$pandalanguage$pandac$ASTNode* decl761 = NULL;
    panda$core$MutableString* result766 = NULL;
    panda$core$MutableString* $tmp767;
    panda$core$MutableString* $tmp768;
    panda$core$String* $tmp770;
    panda$collections$Iterator* Iter$256$17776 = NULL;
    panda$collections$Iterator* $tmp777;
    panda$collections$Iterator* $tmp778;
    org$pandalanguage$pandac$ASTNode* a794 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp795;
    panda$core$Object* $tmp796;
    panda$core$String* $tmp801;
    panda$core$String* $finallyReturn805;
    panda$core$String* $tmp807;
    panda$core$String* $tmp808;
    panda$collections$ImmutableArray* entries815 = NULL;
    panda$core$MutableString* result820 = NULL;
    panda$core$MutableString* $tmp821;
    panda$core$MutableString* $tmp822;
    panda$collections$Iterator* Iter$263$17827 = NULL;
    panda$collections$Iterator* $tmp828;
    panda$collections$Iterator* $tmp829;
    org$pandalanguage$pandac$ASTNode* e845 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp846;
    panda$core$Object* $tmp847;
    panda$core$String* $tmp852;
    panda$core$String* $finallyReturn856;
    panda$core$String* $tmp858;
    panda$core$String* $tmp859;
    panda$core$String* label866 = NULL;
    org$pandalanguage$pandac$ASTNode* target868 = NULL;
    org$pandalanguage$pandac$ASTNode* list870 = NULL;
    panda$collections$ImmutableArray* statements872 = NULL;
    panda$core$MutableString* result877 = NULL;
    panda$core$MutableString* $tmp878;
    panda$core$MutableString* $tmp879;
    panda$core$String* $tmp881;
    panda$core$String* $tmp884;
    panda$core$String* $tmp885;
    panda$core$String* $tmp886;
    panda$core$String* $tmp887;
    panda$collections$Iterator* Iter$273$17898 = NULL;
    panda$collections$Iterator* $tmp899;
    panda$collections$Iterator* $tmp900;
    org$pandalanguage$pandac$ASTNode* s916 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp917;
    panda$core$Object* $tmp918;
    panda$core$String* $tmp923;
    panda$core$Char8 $tmp928;
    panda$core$String* $finallyReturn928;
    panda$core$String* $tmp930;
    panda$core$String* $tmp931;
    panda$core$String* name938 = NULL;
    panda$collections$ImmutableArray* subtypes940 = NULL;
    panda$core$String* $finallyReturn941;
    panda$core$String* $tmp943;
    panda$core$String* $tmp944;
    panda$core$String* $tmp945;
    panda$core$String* $tmp946;
    panda$core$String* $tmp947;
    panda$core$String* $tmp951;
    panda$core$String* name959 = NULL;
    panda$core$String* $finallyReturn960;
    panda$core$String* $tmp962;
    org$pandalanguage$pandac$ASTNode* test966 = NULL;
    panda$collections$ImmutableArray* ifTrue968 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse970 = NULL;
    panda$core$MutableString* result975 = NULL;
    panda$core$MutableString* $tmp976;
    panda$core$MutableString* $tmp977;
    panda$core$String* $tmp979;
    panda$core$String* $tmp980;
    panda$collections$Iterator* Iter$284$17988 = NULL;
    panda$collections$Iterator* $tmp989;
    panda$collections$Iterator* $tmp990;
    org$pandalanguage$pandac$ASTNode* s1006 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1007;
    panda$core$Object* $tmp1008;
    panda$core$String* $tmp1013;
    panda$core$Char8 $tmp1018;
    panda$core$String* $tmp1019;
    panda$core$String* $tmp1020;
    panda$core$String* $finallyReturn1024;
    panda$core$String* $tmp1026;
    panda$core$String* $tmp1027;
    panda$core$UInt64 value1034;
    panda$core$String* $finallyReturn1035;
    panda$core$String* $tmp1037;
    panda$core$String* $tmp1038;
    org$pandalanguage$pandac$IRNode* ir1043 = NULL;
    panda$core$String* $finallyReturn1044;
    panda$core$String* $tmp1046;
    panda$core$String* $tmp1047;
    panda$core$String* label1053 = NULL;
    panda$collections$ImmutableArray* statements1055 = NULL;
    panda$core$MutableString* result1060 = NULL;
    panda$core$MutableString* $tmp1061;
    panda$core$MutableString* $tmp1062;
    panda$core$String* $tmp1064;
    panda$core$String* $tmp1065;
    panda$collections$Iterator* Iter$302$171073 = NULL;
    panda$collections$Iterator* $tmp1074;
    panda$collections$Iterator* $tmp1075;
    org$pandalanguage$pandac$ASTNode* s1091 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1092;
    panda$core$Object* $tmp1093;
    panda$core$String* $tmp1098;
    panda$core$Char8 $tmp1103;
    panda$core$String* $finallyReturn1103;
    panda$core$String* $tmp1105;
    panda$core$String* $tmp1106;
    org$pandalanguage$pandac$ASTNode* value1113 = NULL;
    panda$collections$ImmutableArray* whens1115 = NULL;
    panda$collections$ImmutableArray* other1117 = NULL;
    panda$core$MutableString* result1122 = NULL;
    panda$core$MutableString* $tmp1123;
    panda$core$MutableString* $tmp1124;
    panda$core$String* $tmp1126;
    panda$core$String* $tmp1127;
    panda$collections$Iterator* Iter$309$171135 = NULL;
    panda$collections$Iterator* $tmp1136;
    panda$collections$Iterator* $tmp1137;
    org$pandalanguage$pandac$ASTNode* w1153 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1154;
    panda$core$Object* $tmp1155;
    panda$core$String* $tmp1160;
    panda$core$String* $tmp1165;
    panda$core$Char8 $tmp1168;
    panda$core$String* $finallyReturn1168;
    panda$core$String* $tmp1170;
    panda$core$String* $tmp1171;
    org$pandalanguage$pandac$ASTNode* dc1178 = NULL;
    panda$collections$ImmutableArray* annotations1180 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1182;
    panda$core$String* name1184 = NULL;
    panda$collections$ImmutableArray* parameters1186 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1188 = NULL;
    panda$collections$ImmutableArray* statements1190 = NULL;
    panda$core$MutableString* result1195 = NULL;
    panda$core$MutableString* $tmp1196;
    panda$core$MutableString* $tmp1197;
    panda$core$String* $tmp1199;
    panda$collections$Iterator* Iter$322$171205 = NULL;
    panda$collections$Iterator* $tmp1206;
    panda$collections$Iterator* $tmp1207;
    org$pandalanguage$pandac$ASTNode* a1223 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1224;
    panda$core$Object* $tmp1225;
    panda$core$String* $tmp1230;
    org$pandalanguage$pandac$MethodDecl$Kind $match$325_171235;
    panda$core$String* $tmp1241;
    panda$core$String* $tmp1242;
    panda$core$String* $tmp1243;
    panda$core$String* $tmp1244;
    panda$core$String* $tmp1248;
    panda$core$String* $tmp1253;
    panda$core$String* $tmp1254;
    panda$collections$Iterator* Iter$336$211263 = NULL;
    panda$collections$Iterator* $tmp1264;
    panda$collections$Iterator* $tmp1265;
    org$pandalanguage$pandac$ASTNode* s1281 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1282;
    panda$core$Object* $tmp1283;
    panda$core$String* $tmp1288;
    panda$core$Char8 $tmp1293;
    panda$core$String* $finallyReturn1293;
    panda$core$String* $tmp1295;
    panda$core$String* $tmp1296;
    panda$core$String* $finallyReturn1302;
    panda$core$String* $tmp1304;
    org$pandalanguage$pandac$ASTNode* base1309 = NULL;
    panda$core$String* $finallyReturn1310;
    panda$core$String* $tmp1312;
    panda$core$String* $tmp1313;
    panda$core$String* name1319 = NULL;
    panda$core$String* $finallyReturn1320;
    panda$core$String* $tmp1322;
    panda$core$String* name1326 = NULL;
    org$pandalanguage$pandac$ASTNode* type1328 = NULL;
    panda$core$String* $finallyReturn1329;
    panda$core$String* $tmp1331;
    panda$core$String* $tmp1332;
    panda$core$String* $tmp1333;
    panda$core$String* $tmp1334;
    panda$core$String* $tmp1335;
    org$pandalanguage$pandac$parser$Token$Kind kind1345;
    org$pandalanguage$pandac$ASTNode* base1347 = NULL;
    panda$core$String* $finallyReturn1348;
    panda$core$String* $tmp1350;
    panda$core$String* $tmp1351;
    panda$core$String* $tmp1352;
    panda$core$String* $tmp1353;
    panda$core$String* $tmp1354;
    panda$core$Object* $tmp1355;
    org$pandalanguage$pandac$ASTNode* start1367 = NULL;
    org$pandalanguage$pandac$ASTNode* end1369 = NULL;
    panda$core$Bit inclusive1371;
    org$pandalanguage$pandac$ASTNode* step1373 = NULL;
    panda$core$MutableString* result1378 = NULL;
    panda$core$MutableString* $tmp1379;
    panda$core$MutableString* $tmp1380;
    org$pandalanguage$pandac$ASTNode* $tmp1382;
    org$pandalanguage$pandac$ASTNode* $tmp1390;
    org$pandalanguage$pandac$ASTNode* $tmp1396;
    panda$core$String* $tmp1402;
    panda$core$String* $finallyReturn1404;
    panda$core$String* $tmp1406;
    panda$core$String* $tmp1407;
    panda$core$Real64 value1414;
    panda$core$String* $finallyReturn1415;
    panda$core$String* $tmp1417;
    panda$core$String* $tmp1418;
    org$pandalanguage$pandac$ASTNode* value1423 = NULL;
    panda$core$String* $finallyReturn1424;
    panda$core$String* $tmp1426;
    panda$core$String* $tmp1427;
    panda$core$String* $tmp1428;
    panda$core$String* $finallyReturn1434;
    panda$core$String* $tmp1436;
    panda$core$String* $finallyReturn1440;
    panda$core$String* $tmp1442;
    panda$core$String* str1447 = NULL;
    panda$core$String* $finallyReturn1448;
    panda$core$String* $tmp1450;
    panda$core$String* $finallyReturn1453;
    panda$core$String* $tmp1455;
    panda$core$String* name1460 = NULL;
    panda$core$String* $finallyReturn1461;
    panda$core$String* $tmp1463;
    panda$core$String* name1467 = NULL;
    org$pandalanguage$pandac$ASTNode* type1469 = NULL;
    panda$core$String* $finallyReturn1470;
    panda$core$String* $tmp1472;
    panda$core$String* $tmp1473;
    panda$core$String* $tmp1474;
    panda$core$String* $tmp1475;
    panda$core$String* $tmp1476;
    panda$core$String* $finallyReturn1484;
    panda$core$String* $tmp1486;
    panda$core$String* name1490 = NULL;
    panda$core$String* $finallyReturn1491;
    panda$core$String* $tmp1493;
    org$pandalanguage$pandac$Variable$Kind kind1497;
    panda$collections$ImmutableArray* decls1499 = NULL;
    panda$core$MutableString* result1504 = NULL;
    panda$core$MutableString* $tmp1505;
    panda$core$MutableString* $tmp1506;
    org$pandalanguage$pandac$Variable$Kind $match$394_171508;
    panda$core$String* $tmp1517;
    panda$core$String* $finallyReturn1518;
    panda$core$String* $tmp1520;
    panda$core$String* $tmp1521;
    panda$collections$ImmutableArray* tests1528 = NULL;
    panda$collections$ImmutableArray* statements1530 = NULL;
    panda$core$MutableString* result1535 = NULL;
    panda$core$MutableString* $tmp1536;
    panda$core$MutableString* $tmp1537;
    panda$core$String* separator1540 = NULL;
    panda$core$String* $tmp1541;
    panda$collections$Iterator* Iter$405$171546 = NULL;
    panda$collections$Iterator* $tmp1547;
    panda$collections$Iterator* $tmp1548;
    org$pandalanguage$pandac$ASTNode* t1564 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1565;
    panda$core$Object* $tmp1566;
    panda$core$String* $tmp1571;
    panda$core$String* $tmp1572;
    panda$core$String* $tmp1573;
    panda$core$String* $tmp1574;
    panda$core$Char8 $tmp1583;
    panda$collections$Iterator* Iter$409$171587 = NULL;
    panda$collections$Iterator* $tmp1588;
    panda$collections$Iterator* $tmp1589;
    org$pandalanguage$pandac$ASTNode* s1605 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1606;
    panda$core$Object* $tmp1607;
    panda$core$String* $tmp1612;
    panda$core$String* $finallyReturn1616;
    panda$core$String* $tmp1618;
    panda$core$String* $tmp1619;
    panda$core$String* label1626 = NULL;
    org$pandalanguage$pandac$ASTNode* test1628 = NULL;
    panda$collections$ImmutableArray* statements1630 = NULL;
    panda$core$MutableString* result1635 = NULL;
    panda$core$MutableString* $tmp1636;
    panda$core$MutableString* $tmp1637;
    panda$core$String* $tmp1639;
    panda$core$String* $tmp1640;
    panda$core$String* $tmp1644;
    panda$core$String* $tmp1645;
    panda$collections$Iterator* Iter$419$171653 = NULL;
    panda$collections$Iterator* $tmp1654;
    panda$collections$Iterator* $tmp1655;
    org$pandalanguage$pandac$ASTNode* s1671 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1672;
    panda$core$Object* $tmp1673;
    panda$core$String* $tmp1678;
    panda$core$Char8 $tmp1683;
    panda$core$String* $finallyReturn1683;
    panda$core$String* $tmp1685;
    panda$core$String* $tmp1686;
    int $tmp263;
    {
        $tmp265 = self;
        $match$167_9264 = $tmp265;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp265));
        panda$core$Bit $tmp266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp266.value) {
        {
            panda$core$String** $tmp268 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            name267 = *$tmp268;
            $tmp270 = name267;
            $finallyReturn268 = $tmp270;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp270));
            $tmp263 = 0;
            goto $l261;
            $l271:;
            return $finallyReturn268;
        }
        }
        else {
        panda$core$Bit $tmp273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp273.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp275 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            test274 = *$tmp275;
            org$pandalanguage$pandac$ASTNode** $tmp277 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 24));
            msg276 = *$tmp277;
            if (((panda$core$Bit) { msg276 == NULL }).value) {
            {
                panda$core$String* $tmp283 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s282, ((panda$core$Object*) test274));
                $tmp281 = $tmp283;
                panda$core$String* $tmp285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp281, &$s284);
                $tmp280 = $tmp285;
                $tmp279 = $tmp280;
                $finallyReturn277 = $tmp279;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp279));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp280));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp281));
                $tmp263 = 1;
                goto $l261;
                $l286:;
                return $finallyReturn277;
            }
            }
            panda$core$String* $tmp295 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s294, ((panda$core$Object*) test274));
            $tmp293 = $tmp295;
            panda$core$String* $tmp297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp293, &$s296);
            $tmp292 = $tmp297;
            panda$core$String* $tmp298 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp292, ((panda$core$Object*) msg276));
            $tmp291 = $tmp298;
            panda$core$String* $tmp300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp291, &$s299);
            $tmp290 = $tmp300;
            $tmp289 = $tmp290;
            $finallyReturn287 = $tmp289;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp289));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp290));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp291));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp292));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp293));
            $tmp263 = 2;
            goto $l261;
            $l301:;
            return $finallyReturn287;
        }
        }
        else {
        panda$core$Bit $tmp303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp303.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp305 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            left304 = *$tmp305;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp307 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$167_9264->$data + 24));
            op306 = *$tmp307;
            org$pandalanguage$pandac$ASTNode** $tmp309 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 32));
            right308 = *$tmp309;
            panda$core$String* $tmp319 = (($fn318) left304->$class->vtable[0])(left304);
            $tmp317 = $tmp319;
            panda$core$String* $tmp321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp317, &$s320);
            $tmp316 = $tmp321;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp323;
            $tmp323 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp323->value = op306;
            $tmp322 = ((panda$core$Object*) $tmp323);
            panda$core$String* $tmp324 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp316, $tmp322);
            $tmp315 = $tmp324;
            panda$core$String* $tmp326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp315, &$s325);
            $tmp314 = $tmp326;
            panda$core$String* $tmp327 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp314, ((panda$core$Object*) right308));
            $tmp313 = $tmp327;
            panda$core$String* $tmp329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp313, &$s328);
            $tmp312 = $tmp329;
            $tmp311 = $tmp312;
            $finallyReturn309 = $tmp311;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp311));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp313));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp314));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp315));
            panda$core$Panda$unref$panda$core$Object($tmp322);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp316));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp317));
            $tmp263 = 3;
            goto $l261;
            $l330:;
            return $finallyReturn309;
        }
        }
        else {
        panda$core$Bit $tmp332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp332.value) {
        {
            panda$core$Bit* $tmp334 = ((panda$core$Bit*) ((char*) $match$167_9264->$data + 16));
            value333 = *$tmp334;
            panda$core$String* $tmp338 = panda$core$Bit$convert$R$panda$core$String(value333);
            $tmp337 = $tmp338;
            $tmp336 = $tmp337;
            $finallyReturn334 = $tmp336;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp336));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp337));
            $tmp263 = 4;
            goto $l261;
            $l339:;
            return $finallyReturn334;
        }
        }
        else {
        panda$core$Bit $tmp341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp341.value) {
        {
            panda$collections$ImmutableArray** $tmp343 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 16));
            statements342 = *$tmp343;
            int $tmp346;
            {
                panda$core$MutableString* $tmp350 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp350, &$s351);
                $tmp349 = $tmp350;
                $tmp348 = $tmp349;
                result347 = $tmp348;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp348));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp349));
                {
                    int $tmp354;
                    {
                        ITable* $tmp358 = ((panda$collections$Iterable*) statements342)->$class->itable;
                        while ($tmp358->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp358 = $tmp358->next;
                        }
                        $fn360 $tmp359 = $tmp358->methods[0];
                        panda$collections$Iterator* $tmp361 = $tmp359(((panda$collections$Iterable*) statements342));
                        $tmp357 = $tmp361;
                        $tmp356 = $tmp357;
                        Iter$181$17355 = $tmp356;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp356));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp357));
                        $l362:;
                        ITable* $tmp365 = Iter$181$17355->$class->itable;
                        while ($tmp365->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp365 = $tmp365->next;
                        }
                        $fn367 $tmp366 = $tmp365->methods[0];
                        panda$core$Bit $tmp368 = $tmp366(Iter$181$17355);
                        panda$core$Bit $tmp369 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp368);
                        bool $tmp364 = $tmp369.value;
                        if (!$tmp364) goto $l363;
                        {
                            int $tmp372;
                            {
                                ITable* $tmp376 = Iter$181$17355->$class->itable;
                                while ($tmp376->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp376 = $tmp376->next;
                                }
                                $fn378 $tmp377 = $tmp376->methods[1];
                                panda$core$Object* $tmp379 = $tmp377(Iter$181$17355);
                                $tmp375 = $tmp379;
                                $tmp374 = ((org$pandalanguage$pandac$ASTNode*) $tmp375);
                                s373 = $tmp374;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp374));
                                panda$core$Panda$unref$panda$core$Object($tmp375);
                                panda$core$String* $tmp382 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s373), &$s381);
                                $tmp380 = $tmp382;
                                panda$core$MutableString$append$panda$core$String(result347, $tmp380);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp380));
                            }
                            $tmp372 = -1;
                            goto $l370;
                            $l370:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s373));
                            s373 = NULL;
                            switch ($tmp372) {
                                case -1: goto $l383;
                            }
                            $l383:;
                        }
                        goto $l362;
                        $l363:;
                    }
                    $tmp354 = -1;
                    goto $l352;
                    $l352:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$181$17355));
                    Iter$181$17355 = NULL;
                    switch ($tmp354) {
                        case -1: goto $l384;
                    }
                    $l384:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp385, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result347, $tmp385);
                panda$core$String* $tmp389 = panda$core$MutableString$finish$R$panda$core$String(result347);
                $tmp388 = $tmp389;
                $tmp387 = $tmp388;
                $finallyReturn385 = $tmp387;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp387));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp388));
                $tmp346 = 0;
                goto $l344;
                $l390:;
                $tmp263 = 5;
                goto $l261;
                $l391:;
                return $finallyReturn385;
            }
            $l344:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result347));
            result347 = NULL;
            switch ($tmp346) {
                case 0: goto $l390;
            }
            $l393:;
        }
        }
        else {
        panda$core$Bit $tmp394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp394.value) {
        {
            panda$core$String** $tmp396 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            label395 = *$tmp396;
            if (((panda$core$Bit) { label395 != NULL }).value) {
            {
                panda$core$String* $tmp402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s401, label395);
                $tmp400 = $tmp402;
                panda$core$String* $tmp404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp400, &$s403);
                $tmp399 = $tmp404;
                $tmp398 = $tmp399;
                $finallyReturn396 = $tmp398;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp398));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp399));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp400));
                $tmp263 = 6;
                goto $l261;
                $l405:;
                return $finallyReturn396;
            }
            }
            $tmp408 = &$s409;
            $finallyReturn406 = $tmp408;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp408));
            $tmp263 = 7;
            goto $l261;
            $l410:;
            return $finallyReturn406;
        }
        }
        else {
        panda$core$Bit $tmp412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp412.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp414 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            target413 = *$tmp414;
            panda$collections$ImmutableArray** $tmp416 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 24));
            args415 = *$tmp416;
            panda$core$String* $tmp424 = (($fn423) target413->$class->vtable[0])(target413);
            $tmp422 = $tmp424;
            panda$core$String* $tmp426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp422, &$s425);
            $tmp421 = $tmp426;
            panda$core$String* $tmp428 = panda$collections$ImmutableArray$join$R$panda$core$String(args415);
            $tmp427 = $tmp428;
            panda$core$String* $tmp429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp421, $tmp427);
            $tmp420 = $tmp429;
            panda$core$String* $tmp431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp420, &$s430);
            $tmp419 = $tmp431;
            $tmp418 = $tmp419;
            $finallyReturn416 = $tmp418;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp418));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp419));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp420));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp427));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp421));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp422));
            $tmp263 = 8;
            goto $l261;
            $l432:;
            return $finallyReturn416;
        }
        }
        else {
        panda$core$Bit $tmp434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp434.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp436 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            dc435 = *$tmp436;
            panda$core$String** $tmp438 = ((panda$core$String**) ((char*) $match$167_9264->$data + 24));
            name437 = *$tmp438;
            panda$collections$ImmutableArray** $tmp440 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 32));
            fields439 = *$tmp440;
            int $tmp443;
            {
                panda$core$MutableString* $tmp447 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp447);
                $tmp446 = $tmp447;
                $tmp445 = $tmp446;
                result444 = $tmp445;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp445));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp446));
                if (((panda$core$Bit) { dc435 != NULL }).value) {
                {
                    panda$core$String* $tmp450 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc435), &$s449);
                    $tmp448 = $tmp450;
                    panda$core$MutableString$append$panda$core$String(result444, $tmp448);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp448));
                }
                }
                panda$core$String* $tmp455 = panda$core$String$convert$R$panda$core$String(name437);
                $tmp454 = $tmp455;
                panda$core$String* $tmp457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp454, &$s456);
                $tmp453 = $tmp457;
                panda$core$String* $tmp459 = panda$collections$ImmutableArray$join$R$panda$core$String(fields439);
                $tmp458 = $tmp459;
                panda$core$String* $tmp460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp453, $tmp458);
                $tmp452 = $tmp460;
                panda$core$String* $tmp462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp452, &$s461);
                $tmp451 = $tmp462;
                panda$core$MutableString$append$panda$core$String(result444, $tmp451);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp451));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp452));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp458));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp453));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp454));
                panda$core$String* $tmp466 = panda$core$MutableString$finish$R$panda$core$String(result444);
                $tmp465 = $tmp466;
                $tmp464 = $tmp465;
                $finallyReturn462 = $tmp464;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp464));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp465));
                $tmp443 = 0;
                goto $l441;
                $l467:;
                $tmp263 = 9;
                goto $l261;
                $l468:;
                return $finallyReturn462;
            }
            $l441:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result444));
            result444 = NULL;
            switch ($tmp443) {
                case 0: goto $l467;
            }
            $l470:;
        }
        }
        else {
        panda$core$Bit $tmp471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp471.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp473 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            base472 = *$tmp473;
            org$pandalanguage$pandac$ChoiceEntry** $tmp475 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$167_9264->$data + 24));
            ce474 = *$tmp475;
            panda$core$Int64* $tmp477 = ((panda$core$Int64*) ((char*) $match$167_9264->$data + 32));
            index476 = *$tmp477;
            panda$core$String* $tmp487 = (($fn486) base472->$class->vtable[0])(base472);
            $tmp485 = $tmp487;
            panda$core$String* $tmp489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp485, &$s488);
            $tmp484 = $tmp489;
            panda$core$String* $tmp490 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp484, ((panda$core$Object*) ce474));
            $tmp483 = $tmp490;
            panda$core$String* $tmp492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp483, &$s491);
            $tmp482 = $tmp492;
            panda$core$Int64$wrapper* $tmp494;
            $tmp494 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp494->value = index476;
            $tmp493 = ((panda$core$Object*) $tmp494);
            panda$core$String* $tmp495 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp482, $tmp493);
            $tmp481 = $tmp495;
            panda$core$String* $tmp497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp481, &$s496);
            $tmp480 = $tmp497;
            $tmp479 = $tmp480;
            $finallyReturn477 = $tmp479;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp479));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp480));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp481));
            panda$core$Panda$unref$panda$core$Object($tmp493);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp482));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp483));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp484));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp485));
            $tmp263 = 10;
            goto $l261;
            $l498:;
            return $finallyReturn477;
        }
        }
        else {
        panda$core$Bit $tmp500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp500.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp502 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            dc501 = *$tmp502;
            panda$collections$ImmutableArray** $tmp504 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 24));
            annotations503 = *$tmp504;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp506 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$167_9264->$data + 32));
            kind505 = *$tmp506;
            panda$core$String** $tmp508 = ((panda$core$String**) ((char*) $match$167_9264->$data + 40));
            name507 = *$tmp508;
            panda$collections$ImmutableArray** $tmp510 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 48));
            generics509 = *$tmp510;
            panda$collections$ImmutableArray** $tmp512 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 56));
            supertypes511 = *$tmp512;
            panda$collections$ImmutableArray** $tmp514 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 64));
            members513 = *$tmp514;
            int $tmp517;
            {
                panda$core$MutableString* $tmp521 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp521);
                $tmp520 = $tmp521;
                $tmp519 = $tmp520;
                result518 = $tmp519;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp519));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp520));
                if (((panda$core$Bit) { dc501 != NULL }).value) {
                {
                    panda$core$String* $tmp524 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc501), &$s523);
                    $tmp522 = $tmp524;
                    panda$core$MutableString$append$panda$core$String(result518, $tmp522);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp522));
                }
                }
                {
                    int $tmp527;
                    {
                        ITable* $tmp531 = ((panda$collections$Iterable*) annotations503)->$class->itable;
                        while ($tmp531->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp531 = $tmp531->next;
                        }
                        $fn533 $tmp532 = $tmp531->methods[0];
                        panda$collections$Iterator* $tmp534 = $tmp532(((panda$collections$Iterable*) annotations503));
                        $tmp530 = $tmp534;
                        $tmp529 = $tmp530;
                        Iter$207$17528 = $tmp529;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp529));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp530));
                        $l535:;
                        ITable* $tmp538 = Iter$207$17528->$class->itable;
                        while ($tmp538->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp538 = $tmp538->next;
                        }
                        $fn540 $tmp539 = $tmp538->methods[0];
                        panda$core$Bit $tmp541 = $tmp539(Iter$207$17528);
                        panda$core$Bit $tmp542 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp541);
                        bool $tmp537 = $tmp542.value;
                        if (!$tmp537) goto $l536;
                        {
                            int $tmp545;
                            {
                                ITable* $tmp549 = Iter$207$17528->$class->itable;
                                while ($tmp549->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp549 = $tmp549->next;
                                }
                                $fn551 $tmp550 = $tmp549->methods[1];
                                panda$core$Object* $tmp552 = $tmp550(Iter$207$17528);
                                $tmp548 = $tmp552;
                                $tmp547 = ((org$pandalanguage$pandac$ASTNode*) $tmp548);
                                a546 = $tmp547;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp547));
                                panda$core$Panda$unref$panda$core$Object($tmp548);
                                panda$core$String* $tmp555 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a546), &$s554);
                                $tmp553 = $tmp555;
                                panda$core$MutableString$append$panda$core$String(result518, $tmp553);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp553));
                            }
                            $tmp545 = -1;
                            goto $l543;
                            $l543:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a546));
                            a546 = NULL;
                            switch ($tmp545) {
                                case -1: goto $l556;
                            }
                            $l556:;
                        }
                        goto $l535;
                        $l536:;
                    }
                    $tmp527 = -1;
                    goto $l525;
                    $l525:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$207$17528));
                    Iter$207$17528 = NULL;
                    switch ($tmp527) {
                        case -1: goto $l557;
                    }
                    $l557:;
                }
                {
                    $match$210_17558 = kind505;
                    panda$core$Bit $tmp559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$210_17558.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp559.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result518, &$s560);
                    }
                    }
                    else {
                    panda$core$Bit $tmp561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$210_17558.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp561.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result518, &$s562);
                    }
                    }
                    else {
                    panda$core$Bit $tmp563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$210_17558.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp563.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result518, &$s564);
                    }
                    }
                    }
                    }
                }
                panda$core$MutableString$append$panda$core$String(result518, name507);
                if (((panda$core$Bit) { generics509 != NULL }).value) {
                {
                    panda$core$String* $tmp569 = panda$collections$ImmutableArray$join$R$panda$core$String(generics509);
                    $tmp568 = $tmp569;
                    panda$core$String* $tmp570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s567, $tmp568);
                    $tmp566 = $tmp570;
                    panda$core$String* $tmp572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp566, &$s571);
                    $tmp565 = $tmp572;
                    panda$core$MutableString$append$panda$core$String(result518, $tmp565);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp565));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp566));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp568));
                }
                }
                if (((panda$core$Bit) { supertypes511 != NULL }).value) {
                {
                    panda$core$String* $tmp577 = panda$collections$ImmutableArray$join$R$panda$core$String(supertypes511);
                    $tmp576 = $tmp577;
                    panda$core$String* $tmp578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s575, $tmp576);
                    $tmp574 = $tmp578;
                    panda$core$String* $tmp580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp574, &$s579);
                    $tmp573 = $tmp580;
                    panda$core$MutableString$append$panda$core$String(result518, $tmp573);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp573));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp574));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp576));
                }
                }
                panda$core$MutableString$append$panda$core$String(result518, &$s581);
                {
                    int $tmp584;
                    {
                        ITable* $tmp588 = ((panda$collections$Iterable*) members513)->$class->itable;
                        while ($tmp588->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp588 = $tmp588->next;
                        }
                        $fn590 $tmp589 = $tmp588->methods[0];
                        panda$collections$Iterator* $tmp591 = $tmp589(((panda$collections$Iterable*) members513));
                        $tmp587 = $tmp591;
                        $tmp586 = $tmp587;
                        Iter$223$17585 = $tmp586;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp586));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp587));
                        $l592:;
                        ITable* $tmp595 = Iter$223$17585->$class->itable;
                        while ($tmp595->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp595 = $tmp595->next;
                        }
                        $fn597 $tmp596 = $tmp595->methods[0];
                        panda$core$Bit $tmp598 = $tmp596(Iter$223$17585);
                        panda$core$Bit $tmp599 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp598);
                        bool $tmp594 = $tmp599.value;
                        if (!$tmp594) goto $l593;
                        {
                            int $tmp602;
                            {
                                ITable* $tmp606 = Iter$223$17585->$class->itable;
                                while ($tmp606->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp606 = $tmp606->next;
                                }
                                $fn608 $tmp607 = $tmp606->methods[1];
                                panda$core$Object* $tmp609 = $tmp607(Iter$223$17585);
                                $tmp605 = $tmp609;
                                $tmp604 = ((org$pandalanguage$pandac$ASTNode*) $tmp605);
                                m603 = $tmp604;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp604));
                                panda$core$Panda$unref$panda$core$Object($tmp605);
                                panda$core$String* $tmp612 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) m603), &$s611);
                                $tmp610 = $tmp612;
                                panda$core$MutableString$append$panda$core$String(result518, $tmp610);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp610));
                            }
                            $tmp602 = -1;
                            goto $l600;
                            $l600:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m603));
                            m603 = NULL;
                            switch ($tmp602) {
                                case -1: goto $l613;
                            }
                            $l613:;
                        }
                        goto $l592;
                        $l593:;
                    }
                    $tmp584 = -1;
                    goto $l582;
                    $l582:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$223$17585));
                    Iter$223$17585 = NULL;
                    switch ($tmp584) {
                        case -1: goto $l614;
                    }
                    $l614:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp615, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result518, $tmp615);
                panda$core$String* $tmp619 = panda$core$MutableString$finish$R$panda$core$String(result518);
                $tmp618 = $tmp619;
                $tmp617 = $tmp618;
                $finallyReturn615 = $tmp617;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp617));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp618));
                $tmp517 = 0;
                goto $l515;
                $l620:;
                $tmp263 = 11;
                goto $l261;
                $l621:;
                return $finallyReturn615;
            }
            $l515:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result518));
            result518 = NULL;
            switch ($tmp517) {
                case 0: goto $l620;
            }
            $l623:;
        }
        }
        else {
        panda$core$Bit $tmp624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp624.value) {
        {
            panda$core$String** $tmp626 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            label625 = *$tmp626;
            if (((panda$core$Bit) { label625 != NULL }).value) {
            {
                panda$core$String* $tmp632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s631, label625);
                $tmp630 = $tmp632;
                panda$core$String* $tmp634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp630, &$s633);
                $tmp629 = $tmp634;
                $tmp628 = $tmp629;
                $finallyReturn626 = $tmp628;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp628));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp629));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp630));
                $tmp263 = 12;
                goto $l261;
                $l635:;
                return $finallyReturn626;
            }
            }
            $tmp638 = &$s639;
            $finallyReturn636 = $tmp638;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp638));
            $tmp263 = 13;
            goto $l261;
            $l640:;
            return $finallyReturn636;
        }
        }
        else {
        panda$core$Bit $tmp642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp642.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp644 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            target643 = *$tmp644;
            org$pandalanguage$pandac$ASTNode** $tmp646 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 24));
            value645 = *$tmp646;
            if (((panda$core$Bit) { value645 != NULL }).value) {
            {
                panda$core$String* $tmp654 = (($fn653) target643->$class->vtable[0])(target643);
                $tmp652 = $tmp654;
                panda$core$String* $tmp656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp652, &$s655);
                $tmp651 = $tmp656;
                panda$core$String* $tmp657 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp651, ((panda$core$Object*) value645));
                $tmp650 = $tmp657;
                panda$core$String* $tmp659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp650, &$s658);
                $tmp649 = $tmp659;
                $tmp648 = $tmp649;
                $finallyReturn646 = $tmp648;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp648));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp649));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp650));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp651));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp652));
                $tmp263 = 14;
                goto $l261;
                $l660:;
                return $finallyReturn646;
            }
            }
            panda$core$String* $tmp666 = (($fn665) target643->$class->vtable[0])(target643);
            $tmp664 = $tmp666;
            $tmp663 = $tmp664;
            $finallyReturn661 = $tmp663;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp663));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp664));
            $tmp263 = 15;
            goto $l261;
            $l667:;
            return $finallyReturn661;
        }
        }
        else {
        panda$core$Bit $tmp669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp669.value) {
        {
            panda$core$String** $tmp671 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            label670 = *$tmp671;
            panda$collections$ImmutableArray** $tmp673 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 24));
            statements672 = *$tmp673;
            org$pandalanguage$pandac$ASTNode** $tmp675 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 32));
            test674 = *$tmp675;
            int $tmp678;
            {
                panda$core$MutableString* $tmp682 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp682);
                $tmp681 = $tmp682;
                $tmp680 = $tmp681;
                result679 = $tmp680;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp680));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp681));
                if (((panda$core$Bit) { label670 != NULL }).value) {
                {
                    panda$core$String* $tmp685 = panda$core$String$convert$R$panda$core$String(label670);
                    $tmp684 = $tmp685;
                    panda$core$String* $tmp687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp684, &$s686);
                    $tmp683 = $tmp687;
                    panda$core$MutableString$append$panda$core$String(result679, $tmp683);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp683));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp684));
                }
                }
                panda$core$MutableString$append$panda$core$String(result679, &$s688);
                {
                    int $tmp691;
                    {
                        ITable* $tmp695 = ((panda$collections$Iterable*) statements672)->$class->itable;
                        while ($tmp695->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp695 = $tmp695->next;
                        }
                        $fn697 $tmp696 = $tmp695->methods[0];
                        panda$collections$Iterator* $tmp698 = $tmp696(((panda$collections$Iterable*) statements672));
                        $tmp694 = $tmp698;
                        $tmp693 = $tmp694;
                        Iter$244$17692 = $tmp693;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp693));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp694));
                        $l699:;
                        ITable* $tmp702 = Iter$244$17692->$class->itable;
                        while ($tmp702->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp702 = $tmp702->next;
                        }
                        $fn704 $tmp703 = $tmp702->methods[0];
                        panda$core$Bit $tmp705 = $tmp703(Iter$244$17692);
                        panda$core$Bit $tmp706 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp705);
                        bool $tmp701 = $tmp706.value;
                        if (!$tmp701) goto $l700;
                        {
                            int $tmp709;
                            {
                                ITable* $tmp713 = Iter$244$17692->$class->itable;
                                while ($tmp713->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp713 = $tmp713->next;
                                }
                                $fn715 $tmp714 = $tmp713->methods[1];
                                panda$core$Object* $tmp716 = $tmp714(Iter$244$17692);
                                $tmp712 = $tmp716;
                                $tmp711 = ((org$pandalanguage$pandac$ASTNode*) $tmp712);
                                s710 = $tmp711;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp711));
                                panda$core$Panda$unref$panda$core$Object($tmp712);
                                panda$core$String* $tmp719 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s710), &$s718);
                                $tmp717 = $tmp719;
                                panda$core$MutableString$append$panda$core$String(result679, $tmp717);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp717));
                            }
                            $tmp709 = -1;
                            goto $l707;
                            $l707:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s710));
                            s710 = NULL;
                            switch ($tmp709) {
                                case -1: goto $l720;
                            }
                            $l720:;
                        }
                        goto $l699;
                        $l700:;
                    }
                    $tmp691 = -1;
                    goto $l689;
                    $l689:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$244$17692));
                    Iter$244$17692 = NULL;
                    switch ($tmp691) {
                        case -1: goto $l721;
                    }
                    $l721:;
                }
                panda$core$String* $tmp725 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s724, ((panda$core$Object*) test674));
                $tmp723 = $tmp725;
                panda$core$String* $tmp727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp723, &$s726);
                $tmp722 = $tmp727;
                panda$core$MutableString$append$panda$core$String(result679, $tmp722);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp722));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp723));
                panda$core$String* $tmp731 = panda$core$MutableString$finish$R$panda$core$String(result679);
                $tmp730 = $tmp731;
                $tmp729 = $tmp730;
                $finallyReturn727 = $tmp729;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp729));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp730));
                $tmp678 = 0;
                goto $l676;
                $l732:;
                $tmp263 = 16;
                goto $l261;
                $l733:;
                return $finallyReturn727;
            }
            $l676:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result679));
            result679 = NULL;
            switch ($tmp678) {
                case 0: goto $l732;
            }
            $l735:;
        }
        }
        else {
        panda$core$Bit $tmp736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp736.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp738 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            base737 = *$tmp738;
            panda$core$String** $tmp740 = ((panda$core$String**) ((char*) $match$167_9264->$data + 24));
            field739 = *$tmp740;
            panda$core$String* $tmp748 = (($fn747) base737->$class->vtable[0])(base737);
            $tmp746 = $tmp748;
            panda$core$String* $tmp750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp746, &$s749);
            $tmp745 = $tmp750;
            panda$core$String* $tmp751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp745, field739);
            $tmp744 = $tmp751;
            panda$core$String* $tmp753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp744, &$s752);
            $tmp743 = $tmp753;
            $tmp742 = $tmp743;
            $finallyReturn740 = $tmp742;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp742));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp743));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp744));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp745));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp746));
            $tmp263 = 17;
            goto $l261;
            $l754:;
            return $finallyReturn740;
        }
        }
        else {
        panda$core$Bit $tmp756 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp756.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp758 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            dc757 = *$tmp758;
            panda$collections$ImmutableArray** $tmp760 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 24));
            annotations759 = *$tmp760;
            org$pandalanguage$pandac$ASTNode** $tmp762 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 32));
            decl761 = *$tmp762;
            int $tmp765;
            {
                panda$core$MutableString* $tmp769 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp769);
                $tmp768 = $tmp769;
                $tmp767 = $tmp768;
                result766 = $tmp767;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp767));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp768));
                if (((panda$core$Bit) { dc757 != NULL }).value) {
                {
                    panda$core$String* $tmp772 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc757), &$s771);
                    $tmp770 = $tmp772;
                    panda$core$MutableString$append$panda$core$String(result766, $tmp770);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp770));
                }
                }
                {
                    int $tmp775;
                    {
                        ITable* $tmp779 = ((panda$collections$Iterable*) annotations759)->$class->itable;
                        while ($tmp779->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp779 = $tmp779->next;
                        }
                        $fn781 $tmp780 = $tmp779->methods[0];
                        panda$collections$Iterator* $tmp782 = $tmp780(((panda$collections$Iterable*) annotations759));
                        $tmp778 = $tmp782;
                        $tmp777 = $tmp778;
                        Iter$256$17776 = $tmp777;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp777));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp778));
                        $l783:;
                        ITable* $tmp786 = Iter$256$17776->$class->itable;
                        while ($tmp786->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp786 = $tmp786->next;
                        }
                        $fn788 $tmp787 = $tmp786->methods[0];
                        panda$core$Bit $tmp789 = $tmp787(Iter$256$17776);
                        panda$core$Bit $tmp790 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp789);
                        bool $tmp785 = $tmp790.value;
                        if (!$tmp785) goto $l784;
                        {
                            int $tmp793;
                            {
                                ITable* $tmp797 = Iter$256$17776->$class->itable;
                                while ($tmp797->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp797 = $tmp797->next;
                                }
                                $fn799 $tmp798 = $tmp797->methods[1];
                                panda$core$Object* $tmp800 = $tmp798(Iter$256$17776);
                                $tmp796 = $tmp800;
                                $tmp795 = ((org$pandalanguage$pandac$ASTNode*) $tmp796);
                                a794 = $tmp795;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp795));
                                panda$core$Panda$unref$panda$core$Object($tmp796);
                                panda$core$String* $tmp803 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a794), &$s802);
                                $tmp801 = $tmp803;
                                panda$core$MutableString$append$panda$core$String(result766, $tmp801);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp801));
                            }
                            $tmp793 = -1;
                            goto $l791;
                            $l791:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a794));
                            a794 = NULL;
                            switch ($tmp793) {
                                case -1: goto $l804;
                            }
                            $l804:;
                        }
                        goto $l783;
                        $l784:;
                    }
                    $tmp775 = -1;
                    goto $l773;
                    $l773:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$256$17776));
                    Iter$256$17776 = NULL;
                    switch ($tmp775) {
                        case -1: goto $l805;
                    }
                    $l805:;
                }
                panda$core$MutableString$append$panda$core$Object(result766, ((panda$core$Object*) decl761));
                panda$core$String* $tmp809 = panda$core$MutableString$finish$R$panda$core$String(result766);
                $tmp808 = $tmp809;
                $tmp807 = $tmp808;
                $finallyReturn805 = $tmp807;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp807));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp808));
                $tmp765 = 0;
                goto $l763;
                $l810:;
                $tmp263 = 18;
                goto $l261;
                $l811:;
                return $finallyReturn805;
            }
            $l763:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result766));
            result766 = NULL;
            switch ($tmp765) {
                case 0: goto $l810;
            }
            $l813:;
        }
        }
        else {
        panda$core$Bit $tmp814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp814.value) {
        {
            panda$collections$ImmutableArray** $tmp816 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 0));
            entries815 = *$tmp816;
            int $tmp819;
            {
                panda$core$MutableString* $tmp823 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp823);
                $tmp822 = $tmp823;
                $tmp821 = $tmp822;
                result820 = $tmp821;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp821));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp822));
                {
                    int $tmp826;
                    {
                        ITable* $tmp830 = ((panda$collections$Iterable*) entries815)->$class->itable;
                        while ($tmp830->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp830 = $tmp830->next;
                        }
                        $fn832 $tmp831 = $tmp830->methods[0];
                        panda$collections$Iterator* $tmp833 = $tmp831(((panda$collections$Iterable*) entries815));
                        $tmp829 = $tmp833;
                        $tmp828 = $tmp829;
                        Iter$263$17827 = $tmp828;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp828));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp829));
                        $l834:;
                        ITable* $tmp837 = Iter$263$17827->$class->itable;
                        while ($tmp837->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp837 = $tmp837->next;
                        }
                        $fn839 $tmp838 = $tmp837->methods[0];
                        panda$core$Bit $tmp840 = $tmp838(Iter$263$17827);
                        panda$core$Bit $tmp841 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp840);
                        bool $tmp836 = $tmp841.value;
                        if (!$tmp836) goto $l835;
                        {
                            int $tmp844;
                            {
                                ITable* $tmp848 = Iter$263$17827->$class->itable;
                                while ($tmp848->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp848 = $tmp848->next;
                                }
                                $fn850 $tmp849 = $tmp848->methods[1];
                                panda$core$Object* $tmp851 = $tmp849(Iter$263$17827);
                                $tmp847 = $tmp851;
                                $tmp846 = ((org$pandalanguage$pandac$ASTNode*) $tmp847);
                                e845 = $tmp846;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp846));
                                panda$core$Panda$unref$panda$core$Object($tmp847);
                                panda$core$String* $tmp854 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) e845), &$s853);
                                $tmp852 = $tmp854;
                                panda$core$MutableString$append$panda$core$String(result820, $tmp852);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp852));
                            }
                            $tmp844 = -1;
                            goto $l842;
                            $l842:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e845));
                            e845 = NULL;
                            switch ($tmp844) {
                                case -1: goto $l855;
                            }
                            $l855:;
                        }
                        goto $l834;
                        $l835:;
                    }
                    $tmp826 = -1;
                    goto $l824;
                    $l824:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$263$17827));
                    Iter$263$17827 = NULL;
                    switch ($tmp826) {
                        case -1: goto $l856;
                    }
                    $l856:;
                }
                panda$core$String* $tmp860 = panda$core$MutableString$finish$R$panda$core$String(result820);
                $tmp859 = $tmp860;
                $tmp858 = $tmp859;
                $finallyReturn856 = $tmp858;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp858));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp859));
                $tmp819 = 0;
                goto $l817;
                $l861:;
                $tmp263 = 19;
                goto $l261;
                $l862:;
                return $finallyReturn856;
            }
            $l817:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result820));
            result820 = NULL;
            switch ($tmp819) {
                case 0: goto $l861;
            }
            $l864:;
        }
        }
        else {
        panda$core$Bit $tmp865 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp865.value) {
        {
            panda$core$String** $tmp867 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            label866 = *$tmp867;
            org$pandalanguage$pandac$ASTNode** $tmp869 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 24));
            target868 = *$tmp869;
            org$pandalanguage$pandac$ASTNode** $tmp871 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 32));
            list870 = *$tmp871;
            panda$collections$ImmutableArray** $tmp873 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 40));
            statements872 = *$tmp873;
            int $tmp876;
            {
                panda$core$MutableString* $tmp880 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp880);
                $tmp879 = $tmp880;
                $tmp878 = $tmp879;
                result877 = $tmp878;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp878));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp879));
                if (((panda$core$Bit) { label866 != NULL }).value) {
                {
                    panda$core$String* $tmp883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(label866, &$s882);
                    $tmp881 = $tmp883;
                    panda$core$MutableString$append$panda$core$String(result877, $tmp881);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp881));
                }
                }
                panda$core$String* $tmp889 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s888, ((panda$core$Object*) target868));
                $tmp887 = $tmp889;
                panda$core$String* $tmp891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp887, &$s890);
                $tmp886 = $tmp891;
                panda$core$String* $tmp892 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp886, ((panda$core$Object*) list870));
                $tmp885 = $tmp892;
                panda$core$String* $tmp894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp885, &$s893);
                $tmp884 = $tmp894;
                panda$core$MutableString$append$panda$core$String(result877, $tmp884);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp884));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp885));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp886));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp887));
                {
                    int $tmp897;
                    {
                        ITable* $tmp901 = ((panda$collections$Iterable*) statements872)->$class->itable;
                        while ($tmp901->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp901 = $tmp901->next;
                        }
                        $fn903 $tmp902 = $tmp901->methods[0];
                        panda$collections$Iterator* $tmp904 = $tmp902(((panda$collections$Iterable*) statements872));
                        $tmp900 = $tmp904;
                        $tmp899 = $tmp900;
                        Iter$273$17898 = $tmp899;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp899));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp900));
                        $l905:;
                        ITable* $tmp908 = Iter$273$17898->$class->itable;
                        while ($tmp908->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp908 = $tmp908->next;
                        }
                        $fn910 $tmp909 = $tmp908->methods[0];
                        panda$core$Bit $tmp911 = $tmp909(Iter$273$17898);
                        panda$core$Bit $tmp912 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp911);
                        bool $tmp907 = $tmp912.value;
                        if (!$tmp907) goto $l906;
                        {
                            int $tmp915;
                            {
                                ITable* $tmp919 = Iter$273$17898->$class->itable;
                                while ($tmp919->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp919 = $tmp919->next;
                                }
                                $fn921 $tmp920 = $tmp919->methods[1];
                                panda$core$Object* $tmp922 = $tmp920(Iter$273$17898);
                                $tmp918 = $tmp922;
                                $tmp917 = ((org$pandalanguage$pandac$ASTNode*) $tmp918);
                                s916 = $tmp917;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp917));
                                panda$core$Panda$unref$panda$core$Object($tmp918);
                                panda$core$String* $tmp925 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s916), &$s924);
                                $tmp923 = $tmp925;
                                panda$core$MutableString$append$panda$core$String(result877, $tmp923);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp923));
                            }
                            $tmp915 = -1;
                            goto $l913;
                            $l913:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s916));
                            s916 = NULL;
                            switch ($tmp915) {
                                case -1: goto $l926;
                            }
                            $l926:;
                        }
                        goto $l905;
                        $l906:;
                    }
                    $tmp897 = -1;
                    goto $l895;
                    $l895:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$273$17898));
                    Iter$273$17898 = NULL;
                    switch ($tmp897) {
                        case -1: goto $l927;
                    }
                    $l927:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp928, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result877, $tmp928);
                panda$core$String* $tmp932 = panda$core$MutableString$finish$R$panda$core$String(result877);
                $tmp931 = $tmp932;
                $tmp930 = $tmp931;
                $finallyReturn928 = $tmp930;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp930));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp931));
                $tmp876 = 0;
                goto $l874;
                $l933:;
                $tmp263 = 20;
                goto $l261;
                $l934:;
                return $finallyReturn928;
            }
            $l874:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result877));
            result877 = NULL;
            switch ($tmp876) {
                case 0: goto $l933;
            }
            $l936:;
        }
        }
        else {
        panda$core$Bit $tmp937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp937.value) {
        {
            panda$core$String** $tmp939 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            name938 = *$tmp939;
            panda$collections$ImmutableArray** $tmp941 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 24));
            subtypes940 = *$tmp941;
            panda$core$String* $tmp948 = panda$core$String$convert$R$panda$core$String(name938);
            $tmp947 = $tmp948;
            panda$core$String* $tmp950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp947, &$s949);
            $tmp946 = $tmp950;
            panda$core$String* $tmp952 = panda$collections$ImmutableArray$join$R$panda$core$String(subtypes940);
            $tmp951 = $tmp952;
            panda$core$String* $tmp953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp946, $tmp951);
            $tmp945 = $tmp953;
            panda$core$String* $tmp955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp945, &$s954);
            $tmp944 = $tmp955;
            $tmp943 = $tmp944;
            $finallyReturn941 = $tmp943;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp943));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp944));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp945));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp951));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp946));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp947));
            $tmp263 = 21;
            goto $l261;
            $l956:;
            return $finallyReturn941;
        }
        }
        else {
        panda$core$Bit $tmp958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp958.value) {
        {
            panda$core$String** $tmp960 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            name959 = *$tmp960;
            $tmp962 = name959;
            $finallyReturn960 = $tmp962;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp962));
            $tmp263 = 22;
            goto $l261;
            $l963:;
            return $finallyReturn960;
        }
        }
        else {
        panda$core$Bit $tmp965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp965.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp967 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            test966 = *$tmp967;
            panda$collections$ImmutableArray** $tmp969 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 24));
            ifTrue968 = *$tmp969;
            org$pandalanguage$pandac$ASTNode** $tmp971 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 32));
            ifFalse970 = *$tmp971;
            int $tmp974;
            {
                panda$core$MutableString* $tmp978 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp982 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s981, ((panda$core$Object*) test966));
                $tmp980 = $tmp982;
                panda$core$String* $tmp984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp980, &$s983);
                $tmp979 = $tmp984;
                panda$core$MutableString$init$panda$core$String($tmp978, $tmp979);
                $tmp977 = $tmp978;
                $tmp976 = $tmp977;
                result975 = $tmp976;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp976));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp977));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp979));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp980));
                {
                    int $tmp987;
                    {
                        ITable* $tmp991 = ((panda$collections$Iterable*) ifTrue968)->$class->itable;
                        while ($tmp991->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp991 = $tmp991->next;
                        }
                        $fn993 $tmp992 = $tmp991->methods[0];
                        panda$collections$Iterator* $tmp994 = $tmp992(((panda$collections$Iterable*) ifTrue968));
                        $tmp990 = $tmp994;
                        $tmp989 = $tmp990;
                        Iter$284$17988 = $tmp989;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp989));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp990));
                        $l995:;
                        ITable* $tmp998 = Iter$284$17988->$class->itable;
                        while ($tmp998->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp998 = $tmp998->next;
                        }
                        $fn1000 $tmp999 = $tmp998->methods[0];
                        panda$core$Bit $tmp1001 = $tmp999(Iter$284$17988);
                        panda$core$Bit $tmp1002 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1001);
                        bool $tmp997 = $tmp1002.value;
                        if (!$tmp997) goto $l996;
                        {
                            int $tmp1005;
                            {
                                ITable* $tmp1009 = Iter$284$17988->$class->itable;
                                while ($tmp1009->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1009 = $tmp1009->next;
                                }
                                $fn1011 $tmp1010 = $tmp1009->methods[1];
                                panda$core$Object* $tmp1012 = $tmp1010(Iter$284$17988);
                                $tmp1008 = $tmp1012;
                                $tmp1007 = ((org$pandalanguage$pandac$ASTNode*) $tmp1008);
                                s1006 = $tmp1007;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1007));
                                panda$core$Panda$unref$panda$core$Object($tmp1008);
                                panda$core$String* $tmp1015 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1006), &$s1014);
                                $tmp1013 = $tmp1015;
                                panda$core$MutableString$append$panda$core$String(result975, $tmp1013);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1013));
                            }
                            $tmp1005 = -1;
                            goto $l1003;
                            $l1003:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1006));
                            s1006 = NULL;
                            switch ($tmp1005) {
                                case -1: goto $l1016;
                            }
                            $l1016:;
                        }
                        goto $l995;
                        $l996:;
                    }
                    $tmp987 = -1;
                    goto $l985;
                    $l985:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$284$17988));
                    Iter$284$17988 = NULL;
                    switch ($tmp987) {
                        case -1: goto $l1017;
                    }
                    $l1017:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1018, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result975, $tmp1018);
                if (((panda$core$Bit) { ifFalse970 != NULL }).value) {
                {
                    panda$core$String* $tmp1022 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1021, ((panda$core$Object*) ifFalse970));
                    $tmp1020 = $tmp1022;
                    panda$core$String* $tmp1024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1020, &$s1023);
                    $tmp1019 = $tmp1024;
                    panda$core$MutableString$append$panda$core$String(result975, $tmp1019);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1019));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1020));
                }
                }
                panda$core$String* $tmp1028 = panda$core$MutableString$finish$R$panda$core$String(result975);
                $tmp1027 = $tmp1028;
                $tmp1026 = $tmp1027;
                $finallyReturn1024 = $tmp1026;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1026));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1027));
                $tmp974 = 0;
                goto $l972;
                $l1029:;
                $tmp263 = 23;
                goto $l261;
                $l1030:;
                return $finallyReturn1024;
            }
            $l972:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result975));
            result975 = NULL;
            switch ($tmp974) {
                case 0: goto $l1029;
            }
            $l1032:;
        }
        }
        else {
        panda$core$Bit $tmp1033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1033.value) {
        {
            panda$core$UInt64* $tmp1035 = ((panda$core$UInt64*) ((char*) $match$167_9264->$data + 16));
            value1034 = *$tmp1035;
            panda$core$String* $tmp1039 = panda$core$UInt64$convert$R$panda$core$String(value1034);
            $tmp1038 = $tmp1039;
            $tmp1037 = $tmp1038;
            $finallyReturn1035 = $tmp1037;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1037));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1038));
            $tmp263 = 24;
            goto $l261;
            $l1040:;
            return $finallyReturn1035;
        }
        }
        else {
        panda$core$Bit $tmp1042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1042.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1044 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$167_9264->$data + 0));
            ir1043 = *$tmp1044;
            panda$core$String* $tmp1049 = (($fn1048) ir1043->$class->vtable[0])(ir1043);
            $tmp1047 = $tmp1049;
            $tmp1046 = $tmp1047;
            $finallyReturn1044 = $tmp1046;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1046));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1047));
            $tmp263 = 25;
            goto $l261;
            $l1050:;
            return $finallyReturn1044;
        }
        }
        else {
        panda$core$Bit $tmp1052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1052.value) {
        {
            panda$core$String** $tmp1054 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            label1053 = *$tmp1054;
            panda$collections$ImmutableArray** $tmp1056 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 24));
            statements1055 = *$tmp1056;
            int $tmp1059;
            {
                panda$core$MutableString* $tmp1063 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1063);
                $tmp1062 = $tmp1063;
                $tmp1061 = $tmp1062;
                result1060 = $tmp1061;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1061));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1062));
                if (((panda$core$Bit) { label1053 != NULL }).value) {
                {
                    panda$core$String* $tmp1066 = panda$core$String$convert$R$panda$core$String(label1053);
                    $tmp1065 = $tmp1066;
                    panda$core$String* $tmp1068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1065, &$s1067);
                    $tmp1064 = $tmp1068;
                    panda$core$MutableString$append$panda$core$String(result1060, $tmp1064);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1064));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1065));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1060, &$s1069);
                {
                    int $tmp1072;
                    {
                        ITable* $tmp1076 = ((panda$collections$Iterable*) statements1055)->$class->itable;
                        while ($tmp1076->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1076 = $tmp1076->next;
                        }
                        $fn1078 $tmp1077 = $tmp1076->methods[0];
                        panda$collections$Iterator* $tmp1079 = $tmp1077(((panda$collections$Iterable*) statements1055));
                        $tmp1075 = $tmp1079;
                        $tmp1074 = $tmp1075;
                        Iter$302$171073 = $tmp1074;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1074));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1075));
                        $l1080:;
                        ITable* $tmp1083 = Iter$302$171073->$class->itable;
                        while ($tmp1083->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1083 = $tmp1083->next;
                        }
                        $fn1085 $tmp1084 = $tmp1083->methods[0];
                        panda$core$Bit $tmp1086 = $tmp1084(Iter$302$171073);
                        panda$core$Bit $tmp1087 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1086);
                        bool $tmp1082 = $tmp1087.value;
                        if (!$tmp1082) goto $l1081;
                        {
                            int $tmp1090;
                            {
                                ITable* $tmp1094 = Iter$302$171073->$class->itable;
                                while ($tmp1094->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1094 = $tmp1094->next;
                                }
                                $fn1096 $tmp1095 = $tmp1094->methods[1];
                                panda$core$Object* $tmp1097 = $tmp1095(Iter$302$171073);
                                $tmp1093 = $tmp1097;
                                $tmp1092 = ((org$pandalanguage$pandac$ASTNode*) $tmp1093);
                                s1091 = $tmp1092;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1092));
                                panda$core$Panda$unref$panda$core$Object($tmp1093);
                                panda$core$String* $tmp1100 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1091), &$s1099);
                                $tmp1098 = $tmp1100;
                                panda$core$MutableString$append$panda$core$String(result1060, $tmp1098);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1098));
                            }
                            $tmp1090 = -1;
                            goto $l1088;
                            $l1088:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1091));
                            s1091 = NULL;
                            switch ($tmp1090) {
                                case -1: goto $l1101;
                            }
                            $l1101:;
                        }
                        goto $l1080;
                        $l1081:;
                    }
                    $tmp1072 = -1;
                    goto $l1070;
                    $l1070:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$302$171073));
                    Iter$302$171073 = NULL;
                    switch ($tmp1072) {
                        case -1: goto $l1102;
                    }
                    $l1102:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1103, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1060, $tmp1103);
                panda$core$String* $tmp1107 = panda$core$MutableString$finish$R$panda$core$String(result1060);
                $tmp1106 = $tmp1107;
                $tmp1105 = $tmp1106;
                $finallyReturn1103 = $tmp1105;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1105));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1106));
                $tmp1059 = 0;
                goto $l1057;
                $l1108:;
                $tmp263 = 26;
                goto $l261;
                $l1109:;
                return $finallyReturn1103;
            }
            $l1057:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1060));
            result1060 = NULL;
            switch ($tmp1059) {
                case 0: goto $l1108;
            }
            $l1111:;
        }
        }
        else {
        panda$core$Bit $tmp1112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1112.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1114 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            value1113 = *$tmp1114;
            panda$collections$ImmutableArray** $tmp1116 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 24));
            whens1115 = *$tmp1116;
            panda$collections$ImmutableArray** $tmp1118 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 32));
            other1117 = *$tmp1118;
            int $tmp1121;
            {
                panda$core$MutableString* $tmp1125 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1129 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1128, ((panda$core$Object*) value1113));
                $tmp1127 = $tmp1129;
                panda$core$String* $tmp1131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1127, &$s1130);
                $tmp1126 = $tmp1131;
                panda$core$MutableString$init$panda$core$String($tmp1125, $tmp1126);
                $tmp1124 = $tmp1125;
                $tmp1123 = $tmp1124;
                result1122 = $tmp1123;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1123));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1124));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1126));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1127));
                {
                    int $tmp1134;
                    {
                        ITable* $tmp1138 = ((panda$collections$Iterable*) whens1115)->$class->itable;
                        while ($tmp1138->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1138 = $tmp1138->next;
                        }
                        $fn1140 $tmp1139 = $tmp1138->methods[0];
                        panda$collections$Iterator* $tmp1141 = $tmp1139(((panda$collections$Iterable*) whens1115));
                        $tmp1137 = $tmp1141;
                        $tmp1136 = $tmp1137;
                        Iter$309$171135 = $tmp1136;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1136));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1137));
                        $l1142:;
                        ITable* $tmp1145 = Iter$309$171135->$class->itable;
                        while ($tmp1145->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1145 = $tmp1145->next;
                        }
                        $fn1147 $tmp1146 = $tmp1145->methods[0];
                        panda$core$Bit $tmp1148 = $tmp1146(Iter$309$171135);
                        panda$core$Bit $tmp1149 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1148);
                        bool $tmp1144 = $tmp1149.value;
                        if (!$tmp1144) goto $l1143;
                        {
                            int $tmp1152;
                            {
                                ITable* $tmp1156 = Iter$309$171135->$class->itable;
                                while ($tmp1156->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1156 = $tmp1156->next;
                                }
                                $fn1158 $tmp1157 = $tmp1156->methods[1];
                                panda$core$Object* $tmp1159 = $tmp1157(Iter$309$171135);
                                $tmp1155 = $tmp1159;
                                $tmp1154 = ((org$pandalanguage$pandac$ASTNode*) $tmp1155);
                                w1153 = $tmp1154;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1154));
                                panda$core$Panda$unref$panda$core$Object($tmp1155);
                                panda$core$String* $tmp1162 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w1153), &$s1161);
                                $tmp1160 = $tmp1162;
                                panda$core$MutableString$append$panda$core$String(result1122, $tmp1160);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1160));
                            }
                            $tmp1152 = -1;
                            goto $l1150;
                            $l1150:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1153));
                            w1153 = NULL;
                            switch ($tmp1152) {
                                case -1: goto $l1163;
                            }
                            $l1163:;
                        }
                        goto $l1142;
                        $l1143:;
                    }
                    $tmp1134 = -1;
                    goto $l1132;
                    $l1132:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$309$171135));
                    Iter$309$171135 = NULL;
                    switch ($tmp1134) {
                        case -1: goto $l1164;
                    }
                    $l1164:;
                }
                if (((panda$core$Bit) { other1117 != NULL }).value) {
                {
                    panda$core$String* $tmp1167 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) other1117), &$s1166);
                    $tmp1165 = $tmp1167;
                    panda$core$MutableString$append$panda$core$String(result1122, $tmp1165);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1165));
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1168, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1122, $tmp1168);
                panda$core$String* $tmp1172 = panda$core$MutableString$finish$R$panda$core$String(result1122);
                $tmp1171 = $tmp1172;
                $tmp1170 = $tmp1171;
                $finallyReturn1168 = $tmp1170;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1170));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1171));
                $tmp1121 = 0;
                goto $l1119;
                $l1173:;
                $tmp263 = 27;
                goto $l261;
                $l1174:;
                return $finallyReturn1168;
            }
            $l1119:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1122));
            result1122 = NULL;
            switch ($tmp1121) {
                case 0: goto $l1173;
            }
            $l1176:;
        }
        }
        else {
        panda$core$Bit $tmp1177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1177.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1179 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            dc1178 = *$tmp1179;
            panda$collections$ImmutableArray** $tmp1181 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 24));
            annotations1180 = *$tmp1181;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1183 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$167_9264->$data + 32));
            kind1182 = *$tmp1183;
            panda$core$String** $tmp1185 = ((panda$core$String**) ((char*) $match$167_9264->$data + 40));
            name1184 = *$tmp1185;
            panda$collections$ImmutableArray** $tmp1187 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 48));
            parameters1186 = *$tmp1187;
            org$pandalanguage$pandac$ASTNode** $tmp1189 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 56));
            returnType1188 = *$tmp1189;
            panda$collections$ImmutableArray** $tmp1191 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 64));
            statements1190 = *$tmp1191;
            int $tmp1194;
            {
                panda$core$MutableString* $tmp1198 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1198);
                $tmp1197 = $tmp1198;
                $tmp1196 = $tmp1197;
                result1195 = $tmp1196;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1196));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1197));
                if (((panda$core$Bit) { dc1178 != NULL }).value) {
                {
                    panda$core$String* $tmp1201 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc1178), &$s1200);
                    $tmp1199 = $tmp1201;
                    panda$core$MutableString$append$panda$core$String(result1195, $tmp1199);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1199));
                }
                }
                {
                    int $tmp1204;
                    {
                        ITable* $tmp1208 = ((panda$collections$Iterable*) annotations1180)->$class->itable;
                        while ($tmp1208->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1208 = $tmp1208->next;
                        }
                        $fn1210 $tmp1209 = $tmp1208->methods[0];
                        panda$collections$Iterator* $tmp1211 = $tmp1209(((panda$collections$Iterable*) annotations1180));
                        $tmp1207 = $tmp1211;
                        $tmp1206 = $tmp1207;
                        Iter$322$171205 = $tmp1206;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1206));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1207));
                        $l1212:;
                        ITable* $tmp1215 = Iter$322$171205->$class->itable;
                        while ($tmp1215->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1215 = $tmp1215->next;
                        }
                        $fn1217 $tmp1216 = $tmp1215->methods[0];
                        panda$core$Bit $tmp1218 = $tmp1216(Iter$322$171205);
                        panda$core$Bit $tmp1219 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1218);
                        bool $tmp1214 = $tmp1219.value;
                        if (!$tmp1214) goto $l1213;
                        {
                            int $tmp1222;
                            {
                                ITable* $tmp1226 = Iter$322$171205->$class->itable;
                                while ($tmp1226->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1226 = $tmp1226->next;
                                }
                                $fn1228 $tmp1227 = $tmp1226->methods[1];
                                panda$core$Object* $tmp1229 = $tmp1227(Iter$322$171205);
                                $tmp1225 = $tmp1229;
                                $tmp1224 = ((org$pandalanguage$pandac$ASTNode*) $tmp1225);
                                a1223 = $tmp1224;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1224));
                                panda$core$Panda$unref$panda$core$Object($tmp1225);
                                panda$core$String* $tmp1232 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a1223), &$s1231);
                                $tmp1230 = $tmp1232;
                                panda$core$MutableString$append$panda$core$String(result1195, $tmp1230);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1230));
                            }
                            $tmp1222 = -1;
                            goto $l1220;
                            $l1220:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1223));
                            a1223 = NULL;
                            switch ($tmp1222) {
                                case -1: goto $l1233;
                            }
                            $l1233:;
                        }
                        goto $l1212;
                        $l1213:;
                    }
                    $tmp1204 = -1;
                    goto $l1202;
                    $l1202:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$322$171205));
                    Iter$322$171205 = NULL;
                    switch ($tmp1204) {
                        case -1: goto $l1234;
                    }
                    $l1234:;
                }
                {
                    $match$325_171235 = kind1182;
                    panda$core$Bit $tmp1236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$325_171235.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp1236.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1195, &$s1237);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$325_171235.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp1238.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1195, &$s1239);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$325_171235.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1240.value) {
                    {
                    }
                    }
                    }
                    }
                }
                panda$core$String* $tmp1245 = panda$core$String$convert$R$panda$core$String(name1184);
                $tmp1244 = $tmp1245;
                panda$core$String* $tmp1247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1244, &$s1246);
                $tmp1243 = $tmp1247;
                panda$core$String* $tmp1249 = panda$collections$ImmutableArray$join$R$panda$core$String(parameters1186);
                $tmp1248 = $tmp1249;
                panda$core$String* $tmp1250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1243, $tmp1248);
                $tmp1242 = $tmp1250;
                panda$core$String* $tmp1252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1242, &$s1251);
                $tmp1241 = $tmp1252;
                panda$core$MutableString$append$panda$core$String(result1195, $tmp1241);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1241));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1242));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1248));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1243));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1244));
                if (((panda$core$Bit) { returnType1188 != NULL }).value) {
                {
                    panda$core$String* $tmp1256 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1255, ((panda$core$Object*) returnType1188));
                    $tmp1254 = $tmp1256;
                    panda$core$String* $tmp1258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1254, &$s1257);
                    $tmp1253 = $tmp1258;
                    panda$core$MutableString$append$panda$core$String(result1195, $tmp1253);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1253));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1254));
                }
                }
                if (((panda$core$Bit) { statements1190 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1195, &$s1259);
                    {
                        int $tmp1262;
                        {
                            ITable* $tmp1266 = ((panda$collections$Iterable*) statements1190)->$class->itable;
                            while ($tmp1266->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp1266 = $tmp1266->next;
                            }
                            $fn1268 $tmp1267 = $tmp1266->methods[0];
                            panda$collections$Iterator* $tmp1269 = $tmp1267(((panda$collections$Iterable*) statements1190));
                            $tmp1265 = $tmp1269;
                            $tmp1264 = $tmp1265;
                            Iter$336$211263 = $tmp1264;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1264));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1265));
                            $l1270:;
                            ITable* $tmp1273 = Iter$336$211263->$class->itable;
                            while ($tmp1273->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1273 = $tmp1273->next;
                            }
                            $fn1275 $tmp1274 = $tmp1273->methods[0];
                            panda$core$Bit $tmp1276 = $tmp1274(Iter$336$211263);
                            panda$core$Bit $tmp1277 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1276);
                            bool $tmp1272 = $tmp1277.value;
                            if (!$tmp1272) goto $l1271;
                            {
                                int $tmp1280;
                                {
                                    ITable* $tmp1284 = Iter$336$211263->$class->itable;
                                    while ($tmp1284->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp1284 = $tmp1284->next;
                                    }
                                    $fn1286 $tmp1285 = $tmp1284->methods[1];
                                    panda$core$Object* $tmp1287 = $tmp1285(Iter$336$211263);
                                    $tmp1283 = $tmp1287;
                                    $tmp1282 = ((org$pandalanguage$pandac$ASTNode*) $tmp1283);
                                    s1281 = $tmp1282;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1282));
                                    panda$core$Panda$unref$panda$core$Object($tmp1283);
                                    panda$core$String* $tmp1290 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1281), &$s1289);
                                    $tmp1288 = $tmp1290;
                                    panda$core$MutableString$append$panda$core$String(result1195, $tmp1288);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1288));
                                }
                                $tmp1280 = -1;
                                goto $l1278;
                                $l1278:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1281));
                                s1281 = NULL;
                                switch ($tmp1280) {
                                    case -1: goto $l1291;
                                }
                                $l1291:;
                            }
                            goto $l1270;
                            $l1271:;
                        }
                        $tmp1262 = -1;
                        goto $l1260;
                        $l1260:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$336$211263));
                        Iter$336$211263 = NULL;
                        switch ($tmp1262) {
                            case -1: goto $l1292;
                        }
                        $l1292:;
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp1293, ((panda$core$UInt8) { 125 }));
                    panda$core$MutableString$append$panda$core$Char8(result1195, $tmp1293);
                }
                }
                panda$core$String* $tmp1297 = panda$core$MutableString$finish$R$panda$core$String(result1195);
                $tmp1296 = $tmp1297;
                $tmp1295 = $tmp1296;
                $finallyReturn1293 = $tmp1295;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1295));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1296));
                $tmp1194 = 0;
                goto $l1192;
                $l1298:;
                $tmp263 = 28;
                goto $l261;
                $l1299:;
                return $finallyReturn1293;
            }
            $l1192:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1195));
            result1195 = NULL;
            switch ($tmp1194) {
                case 0: goto $l1298;
            }
            $l1301:;
        }
        }
        else {
        panda$core$Bit $tmp1302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1302.value) {
        {
            $tmp1304 = &$s1305;
            $finallyReturn1302 = $tmp1304;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1304));
            $tmp263 = 29;
            goto $l261;
            $l1306:;
            return $finallyReturn1302;
        }
        }
        else {
        panda$core$Bit $tmp1308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1308.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1310 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            base1309 = *$tmp1310;
            panda$core$String* $tmp1315 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) base1309), &$s1314);
            $tmp1313 = $tmp1315;
            $tmp1312 = $tmp1313;
            $finallyReturn1310 = $tmp1312;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1312));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1313));
            $tmp263 = 30;
            goto $l261;
            $l1316:;
            return $finallyReturn1310;
        }
        }
        else {
        panda$core$Bit $tmp1318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1318.value) {
        {
            panda$core$String** $tmp1320 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            name1319 = *$tmp1320;
            $tmp1322 = name1319;
            $finallyReturn1320 = $tmp1322;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1322));
            $tmp263 = 31;
            goto $l261;
            $l1323:;
            return $finallyReturn1320;
        }
        }
        else {
        panda$core$Bit $tmp1325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1325.value) {
        {
            panda$core$String** $tmp1327 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            name1326 = *$tmp1327;
            org$pandalanguage$pandac$ASTNode** $tmp1329 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 24));
            type1328 = *$tmp1329;
            panda$core$String* $tmp1336 = panda$core$String$convert$R$panda$core$String(name1326);
            $tmp1335 = $tmp1336;
            panda$core$String* $tmp1338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1335, &$s1337);
            $tmp1334 = $tmp1338;
            panda$core$String* $tmp1339 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1334, ((panda$core$Object*) type1328));
            $tmp1333 = $tmp1339;
            panda$core$String* $tmp1341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1333, &$s1340);
            $tmp1332 = $tmp1341;
            $tmp1331 = $tmp1332;
            $finallyReturn1329 = $tmp1331;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1331));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1332));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1333));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1334));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1335));
            $tmp263 = 32;
            goto $l261;
            $l1342:;
            return $finallyReturn1329;
        }
        }
        else {
        panda$core$Bit $tmp1344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1344.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1346 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$167_9264->$data + 16));
            kind1345 = *$tmp1346;
            org$pandalanguage$pandac$ASTNode** $tmp1348 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 24));
            base1347 = *$tmp1348;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1356;
            $tmp1356 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1356->value = kind1345;
            $tmp1355 = ((panda$core$Object*) $tmp1356);
            panda$core$String* $tmp1358 = (($fn1357) $tmp1355->$class->vtable[0])($tmp1355);
            $tmp1354 = $tmp1358;
            panda$core$String* $tmp1360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1354, &$s1359);
            $tmp1353 = $tmp1360;
            panda$core$String* $tmp1361 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1353, ((panda$core$Object*) base1347));
            $tmp1352 = $tmp1361;
            panda$core$String* $tmp1363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1352, &$s1362);
            $tmp1351 = $tmp1363;
            $tmp1350 = $tmp1351;
            $finallyReturn1348 = $tmp1350;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1350));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1351));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1352));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1353));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1354));
            panda$core$Panda$unref$panda$core$Object($tmp1355);
            $tmp263 = 33;
            goto $l261;
            $l1364:;
            return $finallyReturn1348;
        }
        }
        else {
        panda$core$Bit $tmp1366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1366.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1368 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            start1367 = *$tmp1368;
            org$pandalanguage$pandac$ASTNode** $tmp1370 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 24));
            end1369 = *$tmp1370;
            panda$core$Bit* $tmp1372 = ((panda$core$Bit*) ((char*) $match$167_9264->$data + 32));
            inclusive1371 = *$tmp1372;
            org$pandalanguage$pandac$ASTNode** $tmp1374 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 33));
            step1373 = *$tmp1374;
            int $tmp1377;
            {
                panda$core$MutableString* $tmp1381 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1381);
                $tmp1380 = $tmp1381;
                $tmp1379 = $tmp1380;
                result1378 = $tmp1379;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1379));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1380));
                $tmp1382 = start1367;
                panda$core$Bit $tmp1386;
                if (((panda$core$Bit) { $tmp1382 != NULL }).value) goto $l1383; else goto $l1384;
                $l1383:;
                panda$core$Bit $tmp1387 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1382->$rawValue, ((panda$core$Int64) { 25 }));
                $tmp1386 = $tmp1387;
                goto $l1385;
                $l1384:;
                $tmp1386 = ((panda$core$Bit) { true });
                goto $l1385;
                $l1385:;
                if ($tmp1386.value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1378, ((panda$core$Object*) start1367));
                }
                }
                if (inclusive1371.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1378, &$s1388);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result1378, &$s1389);
                }
                }
                $tmp1390 = end1369;
                panda$core$Bit $tmp1394;
                if (((panda$core$Bit) { $tmp1390 != NULL }).value) goto $l1391; else goto $l1392;
                $l1391:;
                panda$core$Bit $tmp1395 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1390->$rawValue, ((panda$core$Int64) { 25 }));
                $tmp1394 = $tmp1395;
                goto $l1393;
                $l1392:;
                $tmp1394 = ((panda$core$Bit) { true });
                goto $l1393;
                $l1393:;
                if ($tmp1394.value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1378, ((panda$core$Object*) end1369));
                }
                }
                $tmp1396 = step1373;
                panda$core$Bit $tmp1400;
                if (((panda$core$Bit) { $tmp1396 != NULL }).value) goto $l1397; else goto $l1398;
                $l1397:;
                panda$core$Bit $tmp1401 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1396->$rawValue, ((panda$core$Int64) { 25 }));
                $tmp1400 = $tmp1401;
                goto $l1399;
                $l1398:;
                $tmp1400 = ((panda$core$Bit) { true });
                goto $l1399;
                $l1399:;
                if ($tmp1400.value) {
                {
                    panda$core$String* $tmp1404 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1403, ((panda$core$Object*) step1373));
                    $tmp1402 = $tmp1404;
                    panda$core$MutableString$append$panda$core$String(result1378, $tmp1402);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1402));
                }
                }
                panda$core$String* $tmp1408 = panda$core$MutableString$finish$R$panda$core$String(result1378);
                $tmp1407 = $tmp1408;
                $tmp1406 = $tmp1407;
                $finallyReturn1404 = $tmp1406;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1406));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1407));
                $tmp1377 = 0;
                goto $l1375;
                $l1409:;
                $tmp263 = 34;
                goto $l261;
                $l1410:;
                return $finallyReturn1404;
            }
            $l1375:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1378));
            result1378 = NULL;
            switch ($tmp1377) {
                case 0: goto $l1409;
            }
            $l1412:;
        }
        }
        else {
        panda$core$Bit $tmp1413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1413.value) {
        {
            panda$core$Real64* $tmp1415 = ((panda$core$Real64*) ((char*) $match$167_9264->$data + 16));
            value1414 = *$tmp1415;
            panda$core$String* $tmp1419 = panda$core$Real64$convert$R$panda$core$String(value1414);
            $tmp1418 = $tmp1419;
            $tmp1417 = $tmp1418;
            $finallyReturn1415 = $tmp1417;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1417));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1418));
            $tmp263 = 35;
            goto $l261;
            $l1420:;
            return $finallyReturn1415;
        }
        }
        else {
        panda$core$Bit $tmp1422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1422.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1424 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            value1423 = *$tmp1424;
            if (((panda$core$Bit) { value1423 != NULL }).value) {
            {
                panda$core$String* $tmp1430 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1429, ((panda$core$Object*) value1423));
                $tmp1428 = $tmp1430;
                panda$core$String* $tmp1432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1428, &$s1431);
                $tmp1427 = $tmp1432;
                $tmp1426 = $tmp1427;
                $finallyReturn1424 = $tmp1426;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1426));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1427));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1428));
                $tmp263 = 36;
                goto $l261;
                $l1433:;
                return $finallyReturn1424;
            }
            }
            $tmp1436 = &$s1437;
            $finallyReturn1434 = $tmp1436;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1436));
            $tmp263 = 37;
            goto $l261;
            $l1438:;
            return $finallyReturn1434;
        }
        }
        else {
        panda$core$Bit $tmp1440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1440.value) {
        {
            $tmp1442 = &$s1443;
            $finallyReturn1440 = $tmp1442;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1442));
            $tmp263 = 38;
            goto $l261;
            $l1444:;
            return $finallyReturn1440;
        }
        }
        else {
        panda$core$Bit $tmp1446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1446.value) {
        {
            panda$core$String** $tmp1448 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            str1447 = *$tmp1448;
            $tmp1450 = str1447;
            $finallyReturn1448 = $tmp1450;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1450));
            $tmp263 = 39;
            goto $l261;
            $l1451:;
            return $finallyReturn1448;
        }
        }
        else {
        panda$core$Bit $tmp1453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1453.value) {
        {
            $tmp1455 = &$s1456;
            $finallyReturn1453 = $tmp1455;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1455));
            $tmp263 = 40;
            goto $l261;
            $l1457:;
            return $finallyReturn1453;
        }
        }
        else {
        panda$core$Bit $tmp1459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1459.value) {
        {
            panda$core$String** $tmp1461 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            name1460 = *$tmp1461;
            $tmp1463 = name1460;
            $finallyReturn1461 = $tmp1463;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1463));
            $tmp263 = 41;
            goto $l261;
            $l1464:;
            return $finallyReturn1461;
        }
        }
        else {
        panda$core$Bit $tmp1466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1466.value) {
        {
            panda$core$String** $tmp1468 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            name1467 = *$tmp1468;
            org$pandalanguage$pandac$ASTNode** $tmp1470 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 24));
            type1469 = *$tmp1470;
            if (((panda$core$Bit) { type1469 != NULL }).value) {
            {
                panda$core$String* $tmp1477 = panda$core$String$convert$R$panda$core$String(name1467);
                $tmp1476 = $tmp1477;
                panda$core$String* $tmp1479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1476, &$s1478);
                $tmp1475 = $tmp1479;
                panda$core$String* $tmp1480 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1475, ((panda$core$Object*) type1469));
                $tmp1474 = $tmp1480;
                panda$core$String* $tmp1482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1474, &$s1481);
                $tmp1473 = $tmp1482;
                $tmp1472 = $tmp1473;
                $finallyReturn1470 = $tmp1472;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1472));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1473));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1474));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1475));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1476));
                $tmp263 = 42;
                goto $l261;
                $l1483:;
                return $finallyReturn1470;
            }
            }
            $tmp1486 = name1467;
            $finallyReturn1484 = $tmp1486;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1486));
            $tmp263 = 43;
            goto $l261;
            $l1487:;
            return $finallyReturn1484;
        }
        }
        else {
        panda$core$Bit $tmp1489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1489.value) {
        {
            panda$core$String** $tmp1491 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            name1490 = *$tmp1491;
            $tmp1493 = name1490;
            $finallyReturn1491 = $tmp1493;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1493));
            $tmp263 = 44;
            goto $l261;
            $l1494:;
            return $finallyReturn1491;
        }
        }
        else {
        panda$core$Bit $tmp1496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1496.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1498 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$167_9264->$data + 16));
            kind1497 = *$tmp1498;
            panda$collections$ImmutableArray** $tmp1500 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 24));
            decls1499 = *$tmp1500;
            int $tmp1503;
            {
                panda$core$MutableString* $tmp1507 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1507);
                $tmp1506 = $tmp1507;
                $tmp1505 = $tmp1506;
                result1504 = $tmp1505;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1505));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1506));
                {
                    $match$394_171508 = kind1497;
                    panda$core$Bit $tmp1509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$394_171508.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp1509.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1504, &$s1510);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$394_171508.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp1511.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1504, &$s1512);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$394_171508.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1513.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1504, &$s1514);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$394_171508.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp1515.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1504, &$s1516);
                    }
                    }
                    }
                    }
                    }
                }
                panda$core$String* $tmp1518 = panda$collections$ImmutableArray$join$R$panda$core$String(decls1499);
                $tmp1517 = $tmp1518;
                panda$core$MutableString$append$panda$core$String(result1504, $tmp1517);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1517));
                panda$core$String* $tmp1522 = panda$core$MutableString$finish$R$panda$core$String(result1504);
                $tmp1521 = $tmp1522;
                $tmp1520 = $tmp1521;
                $finallyReturn1518 = $tmp1520;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1520));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1521));
                $tmp1503 = 0;
                goto $l1501;
                $l1523:;
                $tmp263 = 45;
                goto $l261;
                $l1524:;
                return $finallyReturn1518;
            }
            $l1501:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1504));
            result1504 = NULL;
            switch ($tmp1503) {
                case 0: goto $l1523;
            }
            $l1526:;
        }
        }
        else {
        panda$core$Bit $tmp1527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1527.value) {
        {
            panda$collections$ImmutableArray** $tmp1529 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 16));
            tests1528 = *$tmp1529;
            panda$collections$ImmutableArray** $tmp1531 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 24));
            statements1530 = *$tmp1531;
            int $tmp1534;
            {
                panda$core$MutableString* $tmp1538 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1538, &$s1539);
                $tmp1537 = $tmp1538;
                $tmp1536 = $tmp1537;
                result1535 = $tmp1536;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1536));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1537));
                $tmp1541 = &$s1542;
                separator1540 = $tmp1541;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1541));
                {
                    int $tmp1545;
                    {
                        ITable* $tmp1549 = ((panda$collections$Iterable*) tests1528)->$class->itable;
                        while ($tmp1549->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1549 = $tmp1549->next;
                        }
                        $fn1551 $tmp1550 = $tmp1549->methods[0];
                        panda$collections$Iterator* $tmp1552 = $tmp1550(((panda$collections$Iterable*) tests1528));
                        $tmp1548 = $tmp1552;
                        $tmp1547 = $tmp1548;
                        Iter$405$171546 = $tmp1547;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1547));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1548));
                        $l1553:;
                        ITable* $tmp1556 = Iter$405$171546->$class->itable;
                        while ($tmp1556->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1556 = $tmp1556->next;
                        }
                        $fn1558 $tmp1557 = $tmp1556->methods[0];
                        panda$core$Bit $tmp1559 = $tmp1557(Iter$405$171546);
                        panda$core$Bit $tmp1560 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1559);
                        bool $tmp1555 = $tmp1560.value;
                        if (!$tmp1555) goto $l1554;
                        {
                            int $tmp1563;
                            {
                                ITable* $tmp1567 = Iter$405$171546->$class->itable;
                                while ($tmp1567->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1567 = $tmp1567->next;
                                }
                                $fn1569 $tmp1568 = $tmp1567->methods[1];
                                panda$core$Object* $tmp1570 = $tmp1568(Iter$405$171546);
                                $tmp1566 = $tmp1570;
                                $tmp1565 = ((org$pandalanguage$pandac$ASTNode*) $tmp1566);
                                t1564 = $tmp1565;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1565));
                                panda$core$Panda$unref$panda$core$Object($tmp1566);
                                panda$core$String* $tmp1575 = panda$core$String$convert$R$panda$core$String(separator1540);
                                $tmp1574 = $tmp1575;
                                panda$core$String* $tmp1577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1574, &$s1576);
                                $tmp1573 = $tmp1577;
                                panda$core$String* $tmp1578 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1573, ((panda$core$Object*) t1564));
                                $tmp1572 = $tmp1578;
                                panda$core$String* $tmp1580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1572, &$s1579);
                                $tmp1571 = $tmp1580;
                                panda$core$MutableString$append$panda$core$String(result1535, $tmp1571);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1571));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1572));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1573));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1574));
                            }
                            $tmp1563 = -1;
                            goto $l1561;
                            $l1561:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1564));
                            t1564 = NULL;
                            switch ($tmp1563) {
                                case -1: goto $l1581;
                            }
                            $l1581:;
                        }
                        goto $l1553;
                        $l1554:;
                    }
                    $tmp1545 = -1;
                    goto $l1543;
                    $l1543:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$405$171546));
                    Iter$405$171546 = NULL;
                    switch ($tmp1545) {
                        case -1: goto $l1582;
                    }
                    $l1582:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1583, ((panda$core$UInt8) { 58 }));
                panda$core$MutableString$append$panda$core$Char8(result1535, $tmp1583);
                {
                    int $tmp1586;
                    {
                        ITable* $tmp1590 = ((panda$collections$Iterable*) statements1530)->$class->itable;
                        while ($tmp1590->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1590 = $tmp1590->next;
                        }
                        $fn1592 $tmp1591 = $tmp1590->methods[0];
                        panda$collections$Iterator* $tmp1593 = $tmp1591(((panda$collections$Iterable*) statements1530));
                        $tmp1589 = $tmp1593;
                        $tmp1588 = $tmp1589;
                        Iter$409$171587 = $tmp1588;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1588));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1589));
                        $l1594:;
                        ITable* $tmp1597 = Iter$409$171587->$class->itable;
                        while ($tmp1597->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1597 = $tmp1597->next;
                        }
                        $fn1599 $tmp1598 = $tmp1597->methods[0];
                        panda$core$Bit $tmp1600 = $tmp1598(Iter$409$171587);
                        panda$core$Bit $tmp1601 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1600);
                        bool $tmp1596 = $tmp1601.value;
                        if (!$tmp1596) goto $l1595;
                        {
                            int $tmp1604;
                            {
                                ITable* $tmp1608 = Iter$409$171587->$class->itable;
                                while ($tmp1608->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1608 = $tmp1608->next;
                                }
                                $fn1610 $tmp1609 = $tmp1608->methods[1];
                                panda$core$Object* $tmp1611 = $tmp1609(Iter$409$171587);
                                $tmp1607 = $tmp1611;
                                $tmp1606 = ((org$pandalanguage$pandac$ASTNode*) $tmp1607);
                                s1605 = $tmp1606;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1606));
                                panda$core$Panda$unref$panda$core$Object($tmp1607);
                                panda$core$String* $tmp1614 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1613, ((panda$core$Object*) s1605));
                                $tmp1612 = $tmp1614;
                                panda$core$MutableString$append$panda$core$String(result1535, $tmp1612);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1612));
                            }
                            $tmp1604 = -1;
                            goto $l1602;
                            $l1602:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1605));
                            s1605 = NULL;
                            switch ($tmp1604) {
                                case -1: goto $l1615;
                            }
                            $l1615:;
                        }
                        goto $l1594;
                        $l1595:;
                    }
                    $tmp1586 = -1;
                    goto $l1584;
                    $l1584:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$409$171587));
                    Iter$409$171587 = NULL;
                    switch ($tmp1586) {
                        case -1: goto $l1616;
                    }
                    $l1616:;
                }
                panda$core$String* $tmp1620 = panda$core$MutableString$finish$R$panda$core$String(result1535);
                $tmp1619 = $tmp1620;
                $tmp1618 = $tmp1619;
                $finallyReturn1616 = $tmp1618;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1618));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1619));
                $tmp1534 = 0;
                goto $l1532;
                $l1621:;
                $tmp263 = 46;
                goto $l261;
                $l1622:;
                return $finallyReturn1616;
            }
            $l1532:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1535));
            result1535 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1540));
            separator1540 = NULL;
            switch ($tmp1534) {
                case 0: goto $l1621;
            }
            $l1624:;
        }
        }
        else {
        panda$core$Bit $tmp1625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1625.value) {
        {
            panda$core$String** $tmp1627 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            label1626 = *$tmp1627;
            org$pandalanguage$pandac$ASTNode** $tmp1629 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 24));
            test1628 = *$tmp1629;
            panda$collections$ImmutableArray** $tmp1631 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 32));
            statements1630 = *$tmp1631;
            int $tmp1634;
            {
                panda$core$MutableString* $tmp1638 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1638);
                $tmp1637 = $tmp1638;
                $tmp1636 = $tmp1637;
                result1635 = $tmp1636;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1636));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1637));
                if (((panda$core$Bit) { label1626 != NULL }).value) {
                {
                    panda$core$String* $tmp1641 = panda$core$String$convert$R$panda$core$String(label1626);
                    $tmp1640 = $tmp1641;
                    panda$core$String* $tmp1643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1640, &$s1642);
                    $tmp1639 = $tmp1643;
                    panda$core$MutableString$append$panda$core$String(result1635, $tmp1639);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1639));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1640));
                }
                }
                panda$core$String* $tmp1647 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1646, ((panda$core$Object*) test1628));
                $tmp1645 = $tmp1647;
                panda$core$String* $tmp1649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1645, &$s1648);
                $tmp1644 = $tmp1649;
                panda$core$MutableString$append$panda$core$String(result1635, $tmp1644);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1644));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1645));
                {
                    int $tmp1652;
                    {
                        ITable* $tmp1656 = ((panda$collections$Iterable*) statements1630)->$class->itable;
                        while ($tmp1656->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1656 = $tmp1656->next;
                        }
                        $fn1658 $tmp1657 = $tmp1656->methods[0];
                        panda$collections$Iterator* $tmp1659 = $tmp1657(((panda$collections$Iterable*) statements1630));
                        $tmp1655 = $tmp1659;
                        $tmp1654 = $tmp1655;
                        Iter$419$171653 = $tmp1654;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1654));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1655));
                        $l1660:;
                        ITable* $tmp1663 = Iter$419$171653->$class->itable;
                        while ($tmp1663->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1663 = $tmp1663->next;
                        }
                        $fn1665 $tmp1664 = $tmp1663->methods[0];
                        panda$core$Bit $tmp1666 = $tmp1664(Iter$419$171653);
                        panda$core$Bit $tmp1667 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1666);
                        bool $tmp1662 = $tmp1667.value;
                        if (!$tmp1662) goto $l1661;
                        {
                            int $tmp1670;
                            {
                                ITable* $tmp1674 = Iter$419$171653->$class->itable;
                                while ($tmp1674->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1674 = $tmp1674->next;
                                }
                                $fn1676 $tmp1675 = $tmp1674->methods[1];
                                panda$core$Object* $tmp1677 = $tmp1675(Iter$419$171653);
                                $tmp1673 = $tmp1677;
                                $tmp1672 = ((org$pandalanguage$pandac$ASTNode*) $tmp1673);
                                s1671 = $tmp1672;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1672));
                                panda$core$Panda$unref$panda$core$Object($tmp1673);
                                panda$core$String* $tmp1680 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1671), &$s1679);
                                $tmp1678 = $tmp1680;
                                panda$core$MutableString$append$panda$core$String(result1635, $tmp1678);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1678));
                            }
                            $tmp1670 = -1;
                            goto $l1668;
                            $l1668:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1671));
                            s1671 = NULL;
                            switch ($tmp1670) {
                                case -1: goto $l1681;
                            }
                            $l1681:;
                        }
                        goto $l1660;
                        $l1661:;
                    }
                    $tmp1652 = -1;
                    goto $l1650;
                    $l1650:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$419$171653));
                    Iter$419$171653 = NULL;
                    switch ($tmp1652) {
                        case -1: goto $l1682;
                    }
                    $l1682:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1683, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1635, $tmp1683);
                panda$core$String* $tmp1687 = panda$core$MutableString$finish$R$panda$core$String(result1635);
                $tmp1686 = $tmp1687;
                $tmp1685 = $tmp1686;
                $finallyReturn1683 = $tmp1685;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1685));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1686));
                $tmp1634 = 0;
                goto $l1632;
                $l1688:;
                $tmp263 = 47;
                goto $l261;
                $l1689:;
                return $finallyReturn1683;
            }
            $l1632:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1635));
            result1635 = NULL;
            switch ($tmp1634) {
                case 0: goto $l1688;
            }
            $l1691:;
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
    $tmp263 = -1;
    goto $l261;
    $l261:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp265));
    switch ($tmp263) {
        case 24: goto $l1040;
        case 34: goto $l1410;
        case 2: goto $l301;
        case 44: goto $l1494;
        case 43: goto $l1487;
        case 30: goto $l1316;
        case 1: goto $l286;
        case 26: goto $l1109;
        case 29: goto $l1306;
        case 11: goto $l621;
        case 12: goto $l635;
        case 8: goto $l432;
        case 0: goto $l271;
        case 3: goto $l330;
        case 19: goto $l862;
        case 14: goto $l660;
        case 35: goto $l1420;
        case 10: goto $l498;
        case 7: goto $l410;
        case 45: goto $l1524;
        case 33: goto $l1364;
        case 47: goto $l1689;
        case 20: goto $l934;
        case 28: goto $l1299;
        case 21: goto $l956;
        case 38: goto $l1444;
        case 22: goto $l963;
        case 13: goto $l640;
        case 25: goto $l1050;
        case 42: goto $l1483;
        case 27: goto $l1174;
        case 36: goto $l1433;
        case 4: goto $l339;
        case 32: goto $l1342;
        case 5: goto $l391;
        case 18: goto $l811;
        case -1: goto $l1692;
        case 17: goto $l754;
        case 41: goto $l1464;
        case 23: goto $l1030;
        case 16: goto $l733;
        case 40: goto $l1457;
        case 6: goto $l405;
        case 39: goto $l1451;
        case 15: goto $l667;
        case 31: goto $l1323;
        case 46: goto $l1622;
        case 9: goto $l468;
        case 37: goto $l1438;
    }
    $l1692:;
}
void org$pandalanguage$pandac$ASTNode$cleanup(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$5_11699 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1700;
    org$pandalanguage$pandac$Position _f01702;
    panda$core$String* _f11704 = NULL;
    org$pandalanguage$pandac$Position _f01707;
    org$pandalanguage$pandac$ASTNode* _f11709 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21711 = NULL;
    org$pandalanguage$pandac$Position _f01714;
    org$pandalanguage$pandac$ASTNode* _f11716 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f21718;
    org$pandalanguage$pandac$ASTNode* _f31720 = NULL;
    org$pandalanguage$pandac$Position _f01723;
    panda$core$Bit _f11725;
    org$pandalanguage$pandac$Position _f01728;
    panda$collections$ImmutableArray* _f11730 = NULL;
    org$pandalanguage$pandac$Position _f01733;
    panda$core$String* _f11735 = NULL;
    org$pandalanguage$pandac$Position _f01738;
    org$pandalanguage$pandac$ASTNode* _f11740 = NULL;
    panda$collections$ImmutableArray* _f21742 = NULL;
    org$pandalanguage$pandac$Position _f01745;
    org$pandalanguage$pandac$ASTNode* _f11747 = NULL;
    panda$core$String* _f21749 = NULL;
    panda$collections$ImmutableArray* _f31751 = NULL;
    org$pandalanguage$pandac$Position _f01754;
    org$pandalanguage$pandac$ASTNode* _f11756 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f21758 = NULL;
    panda$core$Int64 _f31760;
    org$pandalanguage$pandac$Position _f01763;
    org$pandalanguage$pandac$ASTNode* _f11765 = NULL;
    panda$collections$ImmutableArray* _f21767 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind _f31769;
    panda$core$String* _f41771 = NULL;
    panda$collections$ImmutableArray* _f51773 = NULL;
    panda$collections$ImmutableArray* _f61775 = NULL;
    panda$collections$ImmutableArray* _f71777 = NULL;
    org$pandalanguage$pandac$Position _f01780;
    panda$core$String* _f11782 = NULL;
    org$pandalanguage$pandac$Position _f01785;
    org$pandalanguage$pandac$ASTNode* _f11787 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21789 = NULL;
    org$pandalanguage$pandac$Position _f01792;
    panda$core$String* _f11794 = NULL;
    panda$collections$ImmutableArray* _f21796 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31798 = NULL;
    org$pandalanguage$pandac$Position _f01801;
    org$pandalanguage$pandac$ASTNode* _f11803 = NULL;
    panda$core$String* _f21805 = NULL;
    org$pandalanguage$pandac$Position _f01808;
    org$pandalanguage$pandac$ASTNode* _f11810 = NULL;
    panda$collections$ImmutableArray* _f21812 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31814 = NULL;
    panda$collections$ImmutableArray* _f01817 = NULL;
    org$pandalanguage$pandac$Position _f01820;
    panda$core$String* _f11822 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21824 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31826 = NULL;
    panda$collections$ImmutableArray* _f41828 = NULL;
    org$pandalanguage$pandac$Position _f01831;
    panda$core$String* _f11833 = NULL;
    panda$collections$ImmutableArray* _f21835 = NULL;
    org$pandalanguage$pandac$Position _f01838;
    panda$core$String* _f11840 = NULL;
    org$pandalanguage$pandac$Position _f01843;
    org$pandalanguage$pandac$ASTNode* _f11845 = NULL;
    panda$collections$ImmutableArray* _f21847 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31849 = NULL;
    org$pandalanguage$pandac$Position _f01852;
    panda$core$UInt64 _f11854;
    org$pandalanguage$pandac$IRNode* _f01857 = NULL;
    org$pandalanguage$pandac$Position _f01860;
    panda$core$String* _f11862 = NULL;
    panda$collections$ImmutableArray* _f21864 = NULL;
    org$pandalanguage$pandac$Position _f01867;
    org$pandalanguage$pandac$ASTNode* _f11869 = NULL;
    panda$collections$ImmutableArray* _f21871 = NULL;
    panda$collections$ImmutableArray* _f31873 = NULL;
    org$pandalanguage$pandac$Position _f01876;
    org$pandalanguage$pandac$ASTNode* _f11878 = NULL;
    panda$collections$ImmutableArray* _f21880 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind _f31882;
    panda$core$String* _f41884 = NULL;
    panda$collections$ImmutableArray* _f51886 = NULL;
    org$pandalanguage$pandac$ASTNode* _f61888 = NULL;
    panda$collections$ImmutableArray* _f71890 = NULL;
    org$pandalanguage$pandac$Position _f01893;
    org$pandalanguage$pandac$Position _f01896;
    org$pandalanguage$pandac$ASTNode* _f11898 = NULL;
    org$pandalanguage$pandac$Position _f01901;
    panda$core$String* _f11903 = NULL;
    org$pandalanguage$pandac$Position _f01906;
    panda$core$String* _f11908 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21910 = NULL;
    org$pandalanguage$pandac$Position _f01913;
    org$pandalanguage$pandac$parser$Token$Kind _f11915;
    org$pandalanguage$pandac$ASTNode* _f21917 = NULL;
    org$pandalanguage$pandac$Position _f01920;
    org$pandalanguage$pandac$ASTNode* _f11922 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21924 = NULL;
    panda$core$Bit _f31926;
    org$pandalanguage$pandac$ASTNode* _f41928 = NULL;
    org$pandalanguage$pandac$Position _f01931;
    panda$core$Real64 _f11933;
    org$pandalanguage$pandac$Position _f01936;
    org$pandalanguage$pandac$ASTNode* _f11938 = NULL;
    org$pandalanguage$pandac$Position _f01941;
    org$pandalanguage$pandac$Position _f01944;
    panda$core$String* _f11946 = NULL;
    org$pandalanguage$pandac$Position _f01949;
    org$pandalanguage$pandac$Position _f01952;
    panda$core$String* _f11954 = NULL;
    org$pandalanguage$pandac$Position _f01957;
    panda$core$String* _f11959 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21961 = NULL;
    org$pandalanguage$pandac$Position _f01964;
    panda$core$String* _f11966 = NULL;
    org$pandalanguage$pandac$Position _f01969;
    org$pandalanguage$pandac$Variable$Kind _f11971;
    panda$collections$ImmutableArray* _f21973 = NULL;
    org$pandalanguage$pandac$Position _f01976;
    panda$collections$ImmutableArray* _f11978 = NULL;
    panda$collections$ImmutableArray* _f21980 = NULL;
    org$pandalanguage$pandac$Position _f01983;
    panda$core$String* _f11985 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21987 = NULL;
    panda$collections$ImmutableArray* _f31989 = NULL;
    int $tmp1695;
    {
        int $tmp1698;
        {
            $tmp1700 = self;
            $match$5_11699 = $tmp1700;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1700));
            panda$core$Bit $tmp1701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp1701.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1703 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01702 = *$tmp1703;
                panda$core$String** $tmp1705 = ((panda$core$String**) ((char*) $match$5_11699->$data + 16));
                _f11704 = *$tmp1705;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11704));
            }
            }
            else {
            panda$core$Bit $tmp1706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp1706.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1708 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01707 = *$tmp1708;
                org$pandalanguage$pandac$ASTNode** $tmp1710 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 16));
                _f11709 = *$tmp1710;
                org$pandalanguage$pandac$ASTNode** $tmp1712 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 24));
                _f21711 = *$tmp1712;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11709));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21711));
            }
            }
            else {
            panda$core$Bit $tmp1713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1713.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1715 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01714 = *$tmp1715;
                org$pandalanguage$pandac$ASTNode** $tmp1717 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 16));
                _f11716 = *$tmp1717;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp1719 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11699->$data + 24));
                _f21718 = *$tmp1719;
                org$pandalanguage$pandac$ASTNode** $tmp1721 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 32));
                _f31720 = *$tmp1721;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11716));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31720));
            }
            }
            else {
            panda$core$Bit $tmp1722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp1722.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1724 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01723 = *$tmp1724;
                panda$core$Bit* $tmp1726 = ((panda$core$Bit*) ((char*) $match$5_11699->$data + 16));
                _f11725 = *$tmp1726;
            }
            }
            else {
            panda$core$Bit $tmp1727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp1727.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1729 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01728 = *$tmp1729;
                panda$collections$ImmutableArray** $tmp1731 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11699->$data + 16));
                _f11730 = *$tmp1731;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11730));
            }
            }
            else {
            panda$core$Bit $tmp1732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp1732.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1734 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01733 = *$tmp1734;
                panda$core$String** $tmp1736 = ((panda$core$String**) ((char*) $match$5_11699->$data + 16));
                _f11735 = *$tmp1736;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11735));
            }
            }
            else {
            panda$core$Bit $tmp1737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp1737.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1739 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01738 = *$tmp1739;
                org$pandalanguage$pandac$ASTNode** $tmp1741 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 16));
                _f11740 = *$tmp1741;
                panda$collections$ImmutableArray** $tmp1743 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11699->$data + 24));
                _f21742 = *$tmp1743;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11740));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21742));
            }
            }
            else {
            panda$core$Bit $tmp1744 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 7 }));
            if ($tmp1744.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1746 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01745 = *$tmp1746;
                org$pandalanguage$pandac$ASTNode** $tmp1748 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 16));
                _f11747 = *$tmp1748;
                panda$core$String** $tmp1750 = ((panda$core$String**) ((char*) $match$5_11699->$data + 24));
                _f21749 = *$tmp1750;
                panda$collections$ImmutableArray** $tmp1752 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11699->$data + 32));
                _f31751 = *$tmp1752;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11747));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21749));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31751));
            }
            }
            else {
            panda$core$Bit $tmp1753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp1753.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1755 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01754 = *$tmp1755;
                org$pandalanguage$pandac$ASTNode** $tmp1757 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 16));
                _f11756 = *$tmp1757;
                org$pandalanguage$pandac$ChoiceEntry** $tmp1759 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_11699->$data + 24));
                _f21758 = *$tmp1759;
                panda$core$Int64* $tmp1761 = ((panda$core$Int64*) ((char*) $match$5_11699->$data + 32));
                _f31760 = *$tmp1761;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11756));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21758));
            }
            }
            else {
            panda$core$Bit $tmp1762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp1762.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1764 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01763 = *$tmp1764;
                org$pandalanguage$pandac$ASTNode** $tmp1766 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 16));
                _f11765 = *$tmp1766;
                panda$collections$ImmutableArray** $tmp1768 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11699->$data + 24));
                _f21767 = *$tmp1768;
                org$pandalanguage$pandac$ClassDecl$Kind* $tmp1770 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$5_11699->$data + 32));
                _f31769 = *$tmp1770;
                panda$core$String** $tmp1772 = ((panda$core$String**) ((char*) $match$5_11699->$data + 40));
                _f41771 = *$tmp1772;
                panda$collections$ImmutableArray** $tmp1774 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11699->$data + 48));
                _f51773 = *$tmp1774;
                panda$collections$ImmutableArray** $tmp1776 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11699->$data + 56));
                _f61775 = *$tmp1776;
                panda$collections$ImmutableArray** $tmp1778 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11699->$data + 64));
                _f71777 = *$tmp1778;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11765));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21767));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41771));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f51773));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f61775));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f71777));
            }
            }
            else {
            panda$core$Bit $tmp1779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 10 }));
            if ($tmp1779.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1781 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01780 = *$tmp1781;
                panda$core$String** $tmp1783 = ((panda$core$String**) ((char*) $match$5_11699->$data + 16));
                _f11782 = *$tmp1783;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11782));
            }
            }
            else {
            panda$core$Bit $tmp1784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp1784.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1786 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01785 = *$tmp1786;
                org$pandalanguage$pandac$ASTNode** $tmp1788 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 16));
                _f11787 = *$tmp1788;
                org$pandalanguage$pandac$ASTNode** $tmp1790 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 24));
                _f21789 = *$tmp1790;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11787));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21789));
            }
            }
            else {
            panda$core$Bit $tmp1791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp1791.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1793 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01792 = *$tmp1793;
                panda$core$String** $tmp1795 = ((panda$core$String**) ((char*) $match$5_11699->$data + 16));
                _f11794 = *$tmp1795;
                panda$collections$ImmutableArray** $tmp1797 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11699->$data + 24));
                _f21796 = *$tmp1797;
                org$pandalanguage$pandac$ASTNode** $tmp1799 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 32));
                _f31798 = *$tmp1799;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11794));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21796));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31798));
            }
            }
            else {
            panda$core$Bit $tmp1800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp1800.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1802 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01801 = *$tmp1802;
                org$pandalanguage$pandac$ASTNode** $tmp1804 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 16));
                _f11803 = *$tmp1804;
                panda$core$String** $tmp1806 = ((panda$core$String**) ((char*) $match$5_11699->$data + 24));
                _f21805 = *$tmp1806;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11803));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21805));
            }
            }
            else {
            panda$core$Bit $tmp1807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp1807.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1809 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01808 = *$tmp1809;
                org$pandalanguage$pandac$ASTNode** $tmp1811 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 16));
                _f11810 = *$tmp1811;
                panda$collections$ImmutableArray** $tmp1813 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11699->$data + 24));
                _f21812 = *$tmp1813;
                org$pandalanguage$pandac$ASTNode** $tmp1815 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 32));
                _f31814 = *$tmp1815;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11810));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21812));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31814));
            }
            }
            else {
            panda$core$Bit $tmp1816 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp1816.value) {
            {
                panda$collections$ImmutableArray** $tmp1818 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11699->$data + 0));
                _f01817 = *$tmp1818;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01817));
            }
            }
            else {
            panda$core$Bit $tmp1819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 16 }));
            if ($tmp1819.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1821 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01820 = *$tmp1821;
                panda$core$String** $tmp1823 = ((panda$core$String**) ((char*) $match$5_11699->$data + 16));
                _f11822 = *$tmp1823;
                org$pandalanguage$pandac$ASTNode** $tmp1825 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 24));
                _f21824 = *$tmp1825;
                org$pandalanguage$pandac$ASTNode** $tmp1827 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 32));
                _f31826 = *$tmp1827;
                panda$collections$ImmutableArray** $tmp1829 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11699->$data + 40));
                _f41828 = *$tmp1829;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11822));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21824));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31826));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41828));
            }
            }
            else {
            panda$core$Bit $tmp1830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp1830.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1832 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01831 = *$tmp1832;
                panda$core$String** $tmp1834 = ((panda$core$String**) ((char*) $match$5_11699->$data + 16));
                _f11833 = *$tmp1834;
                panda$collections$ImmutableArray** $tmp1836 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11699->$data + 24));
                _f21835 = *$tmp1836;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11833));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21835));
            }
            }
            else {
            panda$core$Bit $tmp1837 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp1837.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1839 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01838 = *$tmp1839;
                panda$core$String** $tmp1841 = ((panda$core$String**) ((char*) $match$5_11699->$data + 16));
                _f11840 = *$tmp1841;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11840));
            }
            }
            else {
            panda$core$Bit $tmp1842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp1842.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1844 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01843 = *$tmp1844;
                org$pandalanguage$pandac$ASTNode** $tmp1846 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 16));
                _f11845 = *$tmp1846;
                panda$collections$ImmutableArray** $tmp1848 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11699->$data + 24));
                _f21847 = *$tmp1848;
                org$pandalanguage$pandac$ASTNode** $tmp1850 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 32));
                _f31849 = *$tmp1850;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11845));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21847));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31849));
            }
            }
            else {
            panda$core$Bit $tmp1851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 20 }));
            if ($tmp1851.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1853 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01852 = *$tmp1853;
                panda$core$UInt64* $tmp1855 = ((panda$core$UInt64*) ((char*) $match$5_11699->$data + 16));
                _f11854 = *$tmp1855;
            }
            }
            else {
            panda$core$Bit $tmp1856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 21 }));
            if ($tmp1856.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp1858 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11699->$data + 0));
                _f01857 = *$tmp1858;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01857));
            }
            }
            else {
            panda$core$Bit $tmp1859 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp1859.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1861 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01860 = *$tmp1861;
                panda$core$String** $tmp1863 = ((panda$core$String**) ((char*) $match$5_11699->$data + 16));
                _f11862 = *$tmp1863;
                panda$collections$ImmutableArray** $tmp1865 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11699->$data + 24));
                _f21864 = *$tmp1865;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11862));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21864));
            }
            }
            else {
            panda$core$Bit $tmp1866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp1866.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1868 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01867 = *$tmp1868;
                org$pandalanguage$pandac$ASTNode** $tmp1870 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 16));
                _f11869 = *$tmp1870;
                panda$collections$ImmutableArray** $tmp1872 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11699->$data + 24));
                _f21871 = *$tmp1872;
                panda$collections$ImmutableArray** $tmp1874 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11699->$data + 32));
                _f31873 = *$tmp1874;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11869));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21871));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31873));
            }
            }
            else {
            panda$core$Bit $tmp1875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp1875.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1877 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01876 = *$tmp1877;
                org$pandalanguage$pandac$ASTNode** $tmp1879 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 16));
                _f11878 = *$tmp1879;
                panda$collections$ImmutableArray** $tmp1881 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11699->$data + 24));
                _f21880 = *$tmp1881;
                org$pandalanguage$pandac$MethodDecl$Kind* $tmp1883 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$5_11699->$data + 32));
                _f31882 = *$tmp1883;
                panda$core$String** $tmp1885 = ((panda$core$String**) ((char*) $match$5_11699->$data + 40));
                _f41884 = *$tmp1885;
                panda$collections$ImmutableArray** $tmp1887 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11699->$data + 48));
                _f51886 = *$tmp1887;
                org$pandalanguage$pandac$ASTNode** $tmp1889 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 56));
                _f61888 = *$tmp1889;
                panda$collections$ImmutableArray** $tmp1891 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11699->$data + 64));
                _f71890 = *$tmp1891;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11878));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21880));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41884));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f51886));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f61888));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f71890));
            }
            }
            else {
            panda$core$Bit $tmp1892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp1892.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1894 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01893 = *$tmp1894;
            }
            }
            else {
            panda$core$Bit $tmp1895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp1895.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1897 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01896 = *$tmp1897;
                org$pandalanguage$pandac$ASTNode** $tmp1899 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 16));
                _f11898 = *$tmp1899;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11898));
            }
            }
            else {
            panda$core$Bit $tmp1900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 27 }));
            if ($tmp1900.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1902 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01901 = *$tmp1902;
                panda$core$String** $tmp1904 = ((panda$core$String**) ((char*) $match$5_11699->$data + 16));
                _f11903 = *$tmp1904;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11903));
            }
            }
            else {
            panda$core$Bit $tmp1905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 28 }));
            if ($tmp1905.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1907 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01906 = *$tmp1907;
                panda$core$String** $tmp1909 = ((panda$core$String**) ((char*) $match$5_11699->$data + 16));
                _f11908 = *$tmp1909;
                org$pandalanguage$pandac$ASTNode** $tmp1911 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 24));
                _f21910 = *$tmp1911;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11908));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21910));
            }
            }
            else {
            panda$core$Bit $tmp1912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 29 }));
            if ($tmp1912.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1914 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01913 = *$tmp1914;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp1916 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11699->$data + 16));
                _f11915 = *$tmp1916;
                org$pandalanguage$pandac$ASTNode** $tmp1918 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 24));
                _f21917 = *$tmp1918;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21917));
            }
            }
            else {
            panda$core$Bit $tmp1919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 30 }));
            if ($tmp1919.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1921 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01920 = *$tmp1921;
                org$pandalanguage$pandac$ASTNode** $tmp1923 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 16));
                _f11922 = *$tmp1923;
                org$pandalanguage$pandac$ASTNode** $tmp1925 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 24));
                _f21924 = *$tmp1925;
                panda$core$Bit* $tmp1927 = ((panda$core$Bit*) ((char*) $match$5_11699->$data + 32));
                _f31926 = *$tmp1927;
                org$pandalanguage$pandac$ASTNode** $tmp1929 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 33));
                _f41928 = *$tmp1929;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11922));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21924));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41928));
            }
            }
            else {
            panda$core$Bit $tmp1930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 31 }));
            if ($tmp1930.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1932 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01931 = *$tmp1932;
                panda$core$Real64* $tmp1934 = ((panda$core$Real64*) ((char*) $match$5_11699->$data + 16));
                _f11933 = *$tmp1934;
            }
            }
            else {
            panda$core$Bit $tmp1935 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 32 }));
            if ($tmp1935.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1937 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01936 = *$tmp1937;
                org$pandalanguage$pandac$ASTNode** $tmp1939 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 16));
                _f11938 = *$tmp1939;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11938));
            }
            }
            else {
            panda$core$Bit $tmp1940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp1940.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1942 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01941 = *$tmp1942;
            }
            }
            else {
            panda$core$Bit $tmp1943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp1943.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1945 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01944 = *$tmp1945;
                panda$core$String** $tmp1947 = ((panda$core$String**) ((char*) $match$5_11699->$data + 16));
                _f11946 = *$tmp1947;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11946));
            }
            }
            else {
            panda$core$Bit $tmp1948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 35 }));
            if ($tmp1948.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1950 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01949 = *$tmp1950;
            }
            }
            else {
            panda$core$Bit $tmp1951 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp1951.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1953 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01952 = *$tmp1953;
                panda$core$String** $tmp1955 = ((panda$core$String**) ((char*) $match$5_11699->$data + 16));
                _f11954 = *$tmp1955;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11954));
            }
            }
            else {
            panda$core$Bit $tmp1956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 37 }));
            if ($tmp1956.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1958 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01957 = *$tmp1958;
                panda$core$String** $tmp1960 = ((panda$core$String**) ((char*) $match$5_11699->$data + 16));
                _f11959 = *$tmp1960;
                org$pandalanguage$pandac$ASTNode** $tmp1962 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 24));
                _f21961 = *$tmp1962;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11959));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21961));
            }
            }
            else {
            panda$core$Bit $tmp1963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 38 }));
            if ($tmp1963.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1965 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01964 = *$tmp1965;
                panda$core$String** $tmp1967 = ((panda$core$String**) ((char*) $match$5_11699->$data + 16));
                _f11966 = *$tmp1967;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11966));
            }
            }
            else {
            panda$core$Bit $tmp1968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp1968.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1970 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01969 = *$tmp1970;
                org$pandalanguage$pandac$Variable$Kind* $tmp1972 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_11699->$data + 16));
                _f11971 = *$tmp1972;
                panda$collections$ImmutableArray** $tmp1974 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11699->$data + 24));
                _f21973 = *$tmp1974;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21973));
            }
            }
            else {
            panda$core$Bit $tmp1975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp1975.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1977 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01976 = *$tmp1977;
                panda$collections$ImmutableArray** $tmp1979 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11699->$data + 16));
                _f11978 = *$tmp1979;
                panda$collections$ImmutableArray** $tmp1981 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11699->$data + 24));
                _f21980 = *$tmp1981;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11978));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21980));
            }
            }
            else {
            panda$core$Bit $tmp1982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11699->$rawValue, ((panda$core$Int64) { 41 }));
            if ($tmp1982.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1984 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11699->$data + 0));
                _f01983 = *$tmp1984;
                panda$core$String** $tmp1986 = ((panda$core$String**) ((char*) $match$5_11699->$data + 16));
                _f11985 = *$tmp1986;
                org$pandalanguage$pandac$ASTNode** $tmp1988 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11699->$data + 24));
                _f21987 = *$tmp1988;
                panda$collections$ImmutableArray** $tmp1990 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11699->$data + 32));
                _f31989 = *$tmp1990;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11985));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21987));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31989));
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
        $tmp1698 = -1;
        goto $l1696;
        $l1696:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1700));
        switch ($tmp1698) {
            case -1: goto $l1991;
        }
        $l1991:;
    }
    $tmp1695 = -1;
    goto $l1693;
    $l1693:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1695) {
        case -1: goto $l1992;
    }
    $l1992:;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp1994;
    panda$core$String* $tmp1997;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp1993 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp1993 = p_f0;
    {
        panda$core$String** $tmp1995 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp1994 = *$tmp1995;
        panda$core$String** $tmp1996 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp1997 = p_f1;
        *$tmp1996 = $tmp1997;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1997));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1994));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp1999;
    org$pandalanguage$pandac$ASTNode* $tmp2002;
    org$pandalanguage$pandac$ASTNode* $tmp2003;
    org$pandalanguage$pandac$ASTNode* $tmp2006;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp1998 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp1998 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2000 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp1999 = *$tmp2000;
        org$pandalanguage$pandac$ASTNode** $tmp2001 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2002 = p_f1;
        *$tmp2001 = $tmp2002;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2002));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1999));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2004 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2003 = *$tmp2004;
        org$pandalanguage$pandac$ASTNode** $tmp2005 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2006 = p_f2;
        *$tmp2005 = $tmp2006;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2006));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2003));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$parser$Token$Kind p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2008;
    org$pandalanguage$pandac$ASTNode* $tmp2011;
    org$pandalanguage$pandac$ASTNode* $tmp2013;
    org$pandalanguage$pandac$ASTNode* $tmp2016;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2007 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2007 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2009 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2008 = *$tmp2009;
        org$pandalanguage$pandac$ASTNode** $tmp2010 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2011 = p_f1;
        *$tmp2010 = $tmp2011;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2011));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2008));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2012 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 24));
    *$tmp2012 = p_f2;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2014 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2013 = *$tmp2014;
        org$pandalanguage$pandac$ASTNode** $tmp2015 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2016 = p_f3;
        *$tmp2015 = $tmp2016;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2016));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2013));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Bit p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2017 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2017 = p_f0;
    panda$core$Bit* $tmp2018 = ((panda$core$Bit*) ((char*) self->$data + 16));
    *$tmp2018 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp2020;
    panda$collections$ImmutableArray* $tmp2023;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2019 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2019 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2021 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2020 = *$tmp2021;
        panda$collections$ImmutableArray** $tmp2022 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2023 = p_f1;
        *$tmp2022 = $tmp2023;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2023));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2020));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2025;
    panda$core$String* $tmp2028;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2024 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2024 = p_f0;
    {
        panda$core$String** $tmp2026 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2025 = *$tmp2026;
        panda$core$String** $tmp2027 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2028 = p_f1;
        *$tmp2027 = $tmp2028;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2028));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2025));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2030;
    org$pandalanguage$pandac$ASTNode* $tmp2033;
    panda$collections$ImmutableArray* $tmp2034;
    panda$collections$ImmutableArray* $tmp2037;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2029 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2029 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2031 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2030 = *$tmp2031;
        org$pandalanguage$pandac$ASTNode** $tmp2032 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2033 = p_f1;
        *$tmp2032 = $tmp2033;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2033));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2030));
    }
    {
        panda$collections$ImmutableArray** $tmp2035 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2034 = *$tmp2035;
        panda$collections$ImmutableArray** $tmp2036 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2037 = p_f2;
        *$tmp2036 = $tmp2037;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2037));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2034));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2039;
    org$pandalanguage$pandac$ASTNode* $tmp2042;
    panda$core$String* $tmp2043;
    panda$core$String* $tmp2046;
    panda$collections$ImmutableArray* $tmp2047;
    panda$collections$ImmutableArray* $tmp2050;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2038 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2038 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2040 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2039 = *$tmp2040;
        org$pandalanguage$pandac$ASTNode** $tmp2041 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2042 = p_f1;
        *$tmp2041 = $tmp2042;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2042));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2039));
    }
    {
        panda$core$String** $tmp2044 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2043 = *$tmp2044;
        panda$core$String** $tmp2045 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2046 = p_f2;
        *$tmp2045 = $tmp2046;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2046));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2043));
    }
    {
        panda$collections$ImmutableArray** $tmp2048 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2047 = *$tmp2048;
        panda$collections$ImmutableArray** $tmp2049 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2050 = p_f3;
        *$tmp2049 = $tmp2050;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2050));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2047));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2052;
    org$pandalanguage$pandac$ASTNode* $tmp2055;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2056;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2059;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2051 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2051 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2053 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2052 = *$tmp2053;
        org$pandalanguage$pandac$ASTNode** $tmp2054 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2055 = p_f1;
        *$tmp2054 = $tmp2055;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2055));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2052));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp2057 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2056 = *$tmp2057;
        org$pandalanguage$pandac$ChoiceEntry** $tmp2058 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2059 = p_f2;
        *$tmp2058 = $tmp2059;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2059));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2056));
    }
    panda$core$Int64* $tmp2060 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp2060 = p_f3;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ClassDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, panda$collections$ImmutableArray* p_f6, panda$collections$ImmutableArray* p_f7) {
    org$pandalanguage$pandac$ASTNode* $tmp2062;
    org$pandalanguage$pandac$ASTNode* $tmp2065;
    panda$collections$ImmutableArray* $tmp2066;
    panda$collections$ImmutableArray* $tmp2069;
    panda$core$String* $tmp2071;
    panda$core$String* $tmp2074;
    panda$collections$ImmutableArray* $tmp2075;
    panda$collections$ImmutableArray* $tmp2078;
    panda$collections$ImmutableArray* $tmp2079;
    panda$collections$ImmutableArray* $tmp2082;
    panda$collections$ImmutableArray* $tmp2083;
    panda$collections$ImmutableArray* $tmp2086;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2061 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2061 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2063 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2062 = *$tmp2063;
        org$pandalanguage$pandac$ASTNode** $tmp2064 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2065 = p_f1;
        *$tmp2064 = $tmp2065;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2065));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2062));
    }
    {
        panda$collections$ImmutableArray** $tmp2067 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2066 = *$tmp2067;
        panda$collections$ImmutableArray** $tmp2068 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2069 = p_f2;
        *$tmp2068 = $tmp2069;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2069));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2066));
    }
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp2070 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2070 = p_f3;
    {
        panda$core$String** $tmp2072 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2071 = *$tmp2072;
        panda$core$String** $tmp2073 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2074 = p_f4;
        *$tmp2073 = $tmp2074;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2074));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2071));
    }
    {
        panda$collections$ImmutableArray** $tmp2076 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2075 = *$tmp2076;
        panda$collections$ImmutableArray** $tmp2077 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2078 = p_f5;
        *$tmp2077 = $tmp2078;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2078));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2075));
    }
    {
        panda$collections$ImmutableArray** $tmp2080 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2079 = *$tmp2080;
        panda$collections$ImmutableArray** $tmp2081 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2082 = p_f6;
        *$tmp2081 = $tmp2082;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2082));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2079));
    }
    {
        panda$collections$ImmutableArray** $tmp2084 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2083 = *$tmp2084;
        panda$collections$ImmutableArray** $tmp2085 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2086 = p_f7;
        *$tmp2085 = $tmp2086;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2086));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2083));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$core$String* $tmp2088;
    panda$core$String* $tmp2091;
    panda$collections$ImmutableArray* $tmp2092;
    panda$collections$ImmutableArray* $tmp2095;
    org$pandalanguage$pandac$ASTNode* $tmp2096;
    org$pandalanguage$pandac$ASTNode* $tmp2099;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2087 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2087 = p_f0;
    {
        panda$core$String** $tmp2089 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2088 = *$tmp2089;
        panda$core$String** $tmp2090 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2091 = p_f1;
        *$tmp2090 = $tmp2091;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2091));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2088));
    }
    {
        panda$collections$ImmutableArray** $tmp2093 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2092 = *$tmp2093;
        panda$collections$ImmutableArray** $tmp2094 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2095 = p_f2;
        *$tmp2094 = $tmp2095;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2095));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2092));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2097 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2096 = *$tmp2097;
        org$pandalanguage$pandac$ASTNode** $tmp2098 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2099 = p_f3;
        *$tmp2098 = $tmp2099;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2099));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2096));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2101;
    org$pandalanguage$pandac$ASTNode* $tmp2104;
    panda$core$String* $tmp2105;
    panda$core$String* $tmp2108;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2100 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2100 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2102 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2101 = *$tmp2102;
        org$pandalanguage$pandac$ASTNode** $tmp2103 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2104 = p_f1;
        *$tmp2103 = $tmp2104;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2104));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2101));
    }
    {
        panda$core$String** $tmp2106 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2105 = *$tmp2106;
        panda$core$String** $tmp2107 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2108 = p_f2;
        *$tmp2107 = $tmp2108;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2108));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2105));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2110;
    org$pandalanguage$pandac$ASTNode* $tmp2113;
    panda$collections$ImmutableArray* $tmp2114;
    panda$collections$ImmutableArray* $tmp2117;
    org$pandalanguage$pandac$ASTNode* $tmp2118;
    org$pandalanguage$pandac$ASTNode* $tmp2121;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2109 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2109 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2111 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2110 = *$tmp2111;
        org$pandalanguage$pandac$ASTNode** $tmp2112 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2113 = p_f1;
        *$tmp2112 = $tmp2113;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2113));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2110));
    }
    {
        panda$collections$ImmutableArray** $tmp2115 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2114 = *$tmp2115;
        panda$collections$ImmutableArray** $tmp2116 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2117 = p_f2;
        *$tmp2116 = $tmp2117;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2117));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2114));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2119 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2118 = *$tmp2119;
        org$pandalanguage$pandac$ASTNode** $tmp2120 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2121 = p_f3;
        *$tmp2120 = $tmp2121;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2121));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2118));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    panda$collections$ImmutableArray* $tmp2122;
    panda$collections$ImmutableArray* $tmp2125;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp2123 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2122 = *$tmp2123;
        panda$collections$ImmutableArray** $tmp2124 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2125 = p_f0;
        *$tmp2124 = $tmp2125;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2125));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2122));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, org$pandalanguage$pandac$ASTNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp2127;
    panda$core$String* $tmp2130;
    org$pandalanguage$pandac$ASTNode* $tmp2131;
    org$pandalanguage$pandac$ASTNode* $tmp2134;
    org$pandalanguage$pandac$ASTNode* $tmp2135;
    org$pandalanguage$pandac$ASTNode* $tmp2138;
    panda$collections$ImmutableArray* $tmp2139;
    panda$collections$ImmutableArray* $tmp2142;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2126 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2126 = p_f0;
    {
        panda$core$String** $tmp2128 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2127 = *$tmp2128;
        panda$core$String** $tmp2129 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2130 = p_f1;
        *$tmp2129 = $tmp2130;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2130));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2127));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2132 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2131 = *$tmp2132;
        org$pandalanguage$pandac$ASTNode** $tmp2133 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2134 = p_f2;
        *$tmp2133 = $tmp2134;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2134));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2131));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2136 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2135 = *$tmp2136;
        org$pandalanguage$pandac$ASTNode** $tmp2137 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2138 = p_f3;
        *$tmp2137 = $tmp2138;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2138));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2135));
    }
    {
        panda$collections$ImmutableArray** $tmp2140 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2139 = *$tmp2140;
        panda$collections$ImmutableArray** $tmp2141 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2142 = p_f4;
        *$tmp2141 = $tmp2142;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2142));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2139));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp2144;
    panda$core$String* $tmp2147;
    panda$collections$ImmutableArray* $tmp2148;
    panda$collections$ImmutableArray* $tmp2151;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2143 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2143 = p_f0;
    {
        panda$core$String** $tmp2145 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2144 = *$tmp2145;
        panda$core$String** $tmp2146 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2147 = p_f1;
        *$tmp2146 = $tmp2147;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2147));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2144));
    }
    {
        panda$collections$ImmutableArray** $tmp2149 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2148 = *$tmp2149;
        panda$collections$ImmutableArray** $tmp2150 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2151 = p_f2;
        *$tmp2150 = $tmp2151;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2151));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2148));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2153;
    org$pandalanguage$pandac$ASTNode* $tmp2156;
    panda$collections$ImmutableArray* $tmp2157;
    panda$collections$ImmutableArray* $tmp2160;
    org$pandalanguage$pandac$ASTNode* $tmp2161;
    org$pandalanguage$pandac$ASTNode* $tmp2164;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2152 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2152 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2154 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2153 = *$tmp2154;
        org$pandalanguage$pandac$ASTNode** $tmp2155 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2156 = p_f1;
        *$tmp2155 = $tmp2156;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2156));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2153));
    }
    {
        panda$collections$ImmutableArray** $tmp2158 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2157 = *$tmp2158;
        panda$collections$ImmutableArray** $tmp2159 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2160 = p_f2;
        *$tmp2159 = $tmp2160;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2160));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2157));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2162 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2161 = *$tmp2162;
        org$pandalanguage$pandac$ASTNode** $tmp2163 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2164 = p_f3;
        *$tmp2163 = $tmp2164;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2164));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2161));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$UInt64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2165 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2165 = p_f0;
    panda$core$UInt64* $tmp2166 = ((panda$core$UInt64*) ((char*) self->$data + 16));
    *$tmp2166 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0) {
    org$pandalanguage$pandac$IRNode* $tmp2167;
    org$pandalanguage$pandac$IRNode* $tmp2170;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp2168 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2167 = *$tmp2168;
        org$pandalanguage$pandac$IRNode** $tmp2169 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2170 = p_f0;
        *$tmp2169 = $tmp2170;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2170));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2167));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp2172;
    panda$core$String* $tmp2175;
    panda$collections$ImmutableArray* $tmp2176;
    panda$collections$ImmutableArray* $tmp2179;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2171 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2171 = p_f0;
    {
        panda$core$String** $tmp2173 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2172 = *$tmp2173;
        panda$core$String** $tmp2174 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2175 = p_f1;
        *$tmp2174 = $tmp2175;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2175));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2172));
    }
    {
        panda$collections$ImmutableArray** $tmp2177 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2176 = *$tmp2177;
        panda$collections$ImmutableArray** $tmp2178 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2179 = p_f2;
        *$tmp2178 = $tmp2179;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2179));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2176));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2181;
    org$pandalanguage$pandac$ASTNode* $tmp2184;
    panda$collections$ImmutableArray* $tmp2185;
    panda$collections$ImmutableArray* $tmp2188;
    panda$collections$ImmutableArray* $tmp2189;
    panda$collections$ImmutableArray* $tmp2192;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2180 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2180 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2182 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2181 = *$tmp2182;
        org$pandalanguage$pandac$ASTNode** $tmp2183 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2184 = p_f1;
        *$tmp2183 = $tmp2184;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2184));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2181));
    }
    {
        panda$collections$ImmutableArray** $tmp2186 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2185 = *$tmp2186;
        panda$collections$ImmutableArray** $tmp2187 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2188 = p_f2;
        *$tmp2187 = $tmp2188;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2188));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2185));
    }
    {
        panda$collections$ImmutableArray** $tmp2190 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2189 = *$tmp2190;
        panda$collections$ImmutableArray** $tmp2191 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2192 = p_f3;
        *$tmp2191 = $tmp2192;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2192));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2189));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$MethodDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, org$pandalanguage$pandac$ASTNode* p_f6, panda$collections$ImmutableArray* p_f7) {
    org$pandalanguage$pandac$ASTNode* $tmp2194;
    org$pandalanguage$pandac$ASTNode* $tmp2197;
    panda$collections$ImmutableArray* $tmp2198;
    panda$collections$ImmutableArray* $tmp2201;
    panda$core$String* $tmp2203;
    panda$core$String* $tmp2206;
    panda$collections$ImmutableArray* $tmp2207;
    panda$collections$ImmutableArray* $tmp2210;
    org$pandalanguage$pandac$ASTNode* $tmp2211;
    org$pandalanguage$pandac$ASTNode* $tmp2214;
    panda$collections$ImmutableArray* $tmp2215;
    panda$collections$ImmutableArray* $tmp2218;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2193 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2193 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2195 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2194 = *$tmp2195;
        org$pandalanguage$pandac$ASTNode** $tmp2196 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2197 = p_f1;
        *$tmp2196 = $tmp2197;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2197));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2194));
    }
    {
        panda$collections$ImmutableArray** $tmp2199 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2198 = *$tmp2199;
        panda$collections$ImmutableArray** $tmp2200 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2201 = p_f2;
        *$tmp2200 = $tmp2201;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2201));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2198));
    }
    org$pandalanguage$pandac$MethodDecl$Kind* $tmp2202 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2202 = p_f3;
    {
        panda$core$String** $tmp2204 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2203 = *$tmp2204;
        panda$core$String** $tmp2205 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2206 = p_f4;
        *$tmp2205 = $tmp2206;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2206));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2203));
    }
    {
        panda$collections$ImmutableArray** $tmp2208 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2207 = *$tmp2208;
        panda$collections$ImmutableArray** $tmp2209 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2210 = p_f5;
        *$tmp2209 = $tmp2210;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2210));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2207));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2212 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
        $tmp2211 = *$tmp2212;
        org$pandalanguage$pandac$ASTNode** $tmp2213 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
        $tmp2214 = p_f6;
        *$tmp2213 = $tmp2214;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2214));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2211));
    }
    {
        panda$collections$ImmutableArray** $tmp2216 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2215 = *$tmp2216;
        panda$collections$ImmutableArray** $tmp2217 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2218 = p_f7;
        *$tmp2217 = $tmp2218;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2218));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2215));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2219 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2219 = p_f0;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp2221;
    org$pandalanguage$pandac$ASTNode* $tmp2224;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2220 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2220 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2222 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2221 = *$tmp2222;
        org$pandalanguage$pandac$ASTNode** $tmp2223 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2224 = p_f1;
        *$tmp2223 = $tmp2224;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2224));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2221));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp2226;
    panda$core$String* $tmp2229;
    org$pandalanguage$pandac$ASTNode* $tmp2230;
    org$pandalanguage$pandac$ASTNode* $tmp2233;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2225 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2225 = p_f0;
    {
        panda$core$String** $tmp2227 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2226 = *$tmp2227;
        panda$core$String** $tmp2228 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2229 = p_f1;
        *$tmp2228 = $tmp2229;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2229));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2226));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2231 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2230 = *$tmp2231;
        org$pandalanguage$pandac$ASTNode** $tmp2232 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2233 = p_f2;
        *$tmp2232 = $tmp2233;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2233));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2230));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2236;
    org$pandalanguage$pandac$ASTNode* $tmp2239;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2234 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2234 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2235 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp2235 = p_f1;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2237 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2236 = *$tmp2237;
        org$pandalanguage$pandac$ASTNode** $tmp2238 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2239 = p_f2;
        *$tmp2238 = $tmp2239;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2239));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2236));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$ASTNode* p_f4) {
    org$pandalanguage$pandac$ASTNode* $tmp2241;
    org$pandalanguage$pandac$ASTNode* $tmp2244;
    org$pandalanguage$pandac$ASTNode* $tmp2245;
    org$pandalanguage$pandac$ASTNode* $tmp2248;
    org$pandalanguage$pandac$ASTNode* $tmp2250;
    org$pandalanguage$pandac$ASTNode* $tmp2253;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2240 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2240 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2242 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2241 = *$tmp2242;
        org$pandalanguage$pandac$ASTNode** $tmp2243 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2244 = p_f1;
        *$tmp2243 = $tmp2244;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2244));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2241));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2246 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2245 = *$tmp2246;
        org$pandalanguage$pandac$ASTNode** $tmp2247 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2248 = p_f2;
        *$tmp2247 = $tmp2248;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2248));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2245));
    }
    panda$core$Bit* $tmp2249 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp2249 = p_f3;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2251 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2250 = *$tmp2251;
        org$pandalanguage$pandac$ASTNode** $tmp2252 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2253 = p_f4;
        *$tmp2252 = $tmp2253;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2253));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2250));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Real64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2254 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2254 = p_f0;
    panda$core$Real64* $tmp2255 = ((panda$core$Real64*) ((char*) self->$data + 16));
    *$tmp2255 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp2257;
    org$pandalanguage$pandac$ASTNode* $tmp2260;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2256 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2256 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2258 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2257 = *$tmp2258;
        org$pandalanguage$pandac$ASTNode** $tmp2259 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2260 = p_f1;
        *$tmp2259 = $tmp2260;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2260));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2257));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp2262;
    panda$core$String* $tmp2265;
    org$pandalanguage$pandac$ASTNode* $tmp2266;
    org$pandalanguage$pandac$ASTNode* $tmp2269;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2261 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2261 = p_f0;
    {
        panda$core$String** $tmp2263 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2262 = *$tmp2263;
        panda$core$String** $tmp2264 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2265 = p_f1;
        *$tmp2264 = $tmp2265;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2265));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2262));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2267 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2266 = *$tmp2267;
        org$pandalanguage$pandac$ASTNode** $tmp2268 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2269 = p_f2;
        *$tmp2268 = $tmp2269;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2269));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2266));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2272;
    panda$collections$ImmutableArray* $tmp2275;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2270 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2270 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp2271 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp2271 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp2273 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2272 = *$tmp2273;
        panda$collections$ImmutableArray** $tmp2274 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2275 = p_f2;
        *$tmp2274 = $tmp2275;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2275));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2272));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2277;
    panda$collections$ImmutableArray* $tmp2280;
    panda$collections$ImmutableArray* $tmp2281;
    panda$collections$ImmutableArray* $tmp2284;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2276 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2276 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2278 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2277 = *$tmp2278;
        panda$collections$ImmutableArray** $tmp2279 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2280 = p_f1;
        *$tmp2279 = $tmp2280;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2280));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2277));
    }
    {
        panda$collections$ImmutableArray** $tmp2282 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2281 = *$tmp2282;
        panda$collections$ImmutableArray** $tmp2283 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2284 = p_f2;
        *$tmp2283 = $tmp2284;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2284));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2281));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp2286;
    panda$core$String* $tmp2289;
    org$pandalanguage$pandac$ASTNode* $tmp2290;
    org$pandalanguage$pandac$ASTNode* $tmp2293;
    panda$collections$ImmutableArray* $tmp2294;
    panda$collections$ImmutableArray* $tmp2297;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2285 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2285 = p_f0;
    {
        panda$core$String** $tmp2287 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2286 = *$tmp2287;
        panda$core$String** $tmp2288 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2289 = p_f1;
        *$tmp2288 = $tmp2289;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2289));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2286));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2291 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2290 = *$tmp2291;
        org$pandalanguage$pandac$ASTNode** $tmp2292 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2293 = p_f2;
        *$tmp2292 = $tmp2293;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2293));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2290));
    }
    {
        panda$collections$ImmutableArray** $tmp2295 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2294 = *$tmp2295;
        panda$collections$ImmutableArray** $tmp2296 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2297 = p_f3;
        *$tmp2296 = $tmp2297;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2297));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2294));
    }
}






