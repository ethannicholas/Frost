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
typedef panda$core$String* (*$fn334)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn376)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn383)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn394)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn439)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn502)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn549)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn556)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn567)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn606)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn613)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn624)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn669)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn681)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn713)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn720)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn731)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn763)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn797)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn804)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn815)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn848)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn855)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn866)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn919)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn926)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn937)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1009)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1016)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1027)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1064)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1094)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1101)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1112)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1156)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1163)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1174)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1226)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1233)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1244)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1284)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1291)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1302)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1373)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1567)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1574)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1585)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1608)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1615)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1626)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1674)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1681)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1692)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 32, -9211815390615587804, NULL };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s507 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s671 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s702 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static panda$core$String $s742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s765 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s906 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s909 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s940 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s965 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s997 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s999 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1037 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1039 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1083 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s1255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s1262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s1555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s1558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1629 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
    org$pandalanguage$pandac$ASTNode* expr269 = NULL;
    panda$core$String* $finallyReturn270;
    panda$core$String* $tmp272;
    panda$core$String* $tmp273;
    panda$core$String* $tmp274;
    panda$core$String* $tmp275;
    panda$core$String* $tmp276;
    panda$core$String* $finallyReturn284;
    panda$core$String* $tmp286;
    org$pandalanguage$pandac$ASTNode* test290 = NULL;
    org$pandalanguage$pandac$ASTNode* msg292 = NULL;
    panda$core$String* $finallyReturn293;
    panda$core$String* $tmp295;
    panda$core$String* $tmp296;
    panda$core$String* $tmp297;
    panda$core$String* $finallyReturn303;
    panda$core$String* $tmp305;
    panda$core$String* $tmp306;
    panda$core$String* $tmp307;
    panda$core$String* $tmp308;
    panda$core$String* $tmp309;
    org$pandalanguage$pandac$ASTNode* left320 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op322;
    org$pandalanguage$pandac$ASTNode* right324 = NULL;
    panda$core$String* $finallyReturn325;
    panda$core$String* $tmp327;
    panda$core$String* $tmp328;
    panda$core$String* $tmp329;
    panda$core$String* $tmp330;
    panda$core$String* $tmp331;
    panda$core$String* $tmp332;
    panda$core$String* $tmp333;
    panda$core$Object* $tmp338;
    panda$core$Bit value349;
    panda$core$String* $finallyReturn350;
    panda$core$String* $tmp352;
    panda$core$String* $tmp353;
    panda$collections$ImmutableArray* statements358 = NULL;
    panda$core$MutableString* result363 = NULL;
    panda$core$MutableString* $tmp364;
    panda$core$MutableString* $tmp365;
    panda$collections$Iterator* Iter$184$17371 = NULL;
    panda$collections$Iterator* $tmp372;
    panda$collections$Iterator* $tmp373;
    org$pandalanguage$pandac$ASTNode* s389 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp390;
    panda$core$Object* $tmp391;
    panda$core$String* $tmp396;
    panda$core$Char8 $tmp401;
    panda$core$String* $finallyReturn401;
    panda$core$String* $tmp403;
    panda$core$String* $tmp404;
    panda$core$String* label411 = NULL;
    panda$core$String* $finallyReturn412;
    panda$core$String* $tmp414;
    panda$core$String* $tmp415;
    panda$core$String* $tmp416;
    panda$core$String* $finallyReturn422;
    panda$core$String* $tmp424;
    org$pandalanguage$pandac$ASTNode* target429 = NULL;
    panda$collections$ImmutableArray* args431 = NULL;
    panda$core$String* $finallyReturn432;
    panda$core$String* $tmp434;
    panda$core$String* $tmp435;
    panda$core$String* $tmp436;
    panda$core$String* $tmp437;
    panda$core$String* $tmp438;
    panda$core$String* $tmp443;
    org$pandalanguage$pandac$ASTNode* dc451 = NULL;
    panda$core$String* name453 = NULL;
    panda$collections$ImmutableArray* fields455 = NULL;
    panda$core$MutableString* result460 = NULL;
    panda$core$MutableString* $tmp461;
    panda$core$MutableString* $tmp462;
    panda$core$String* $tmp464;
    panda$core$String* $tmp467;
    panda$core$String* $tmp468;
    panda$core$String* $tmp469;
    panda$core$String* $tmp470;
    panda$core$String* $tmp474;
    panda$core$String* $finallyReturn478;
    panda$core$String* $tmp480;
    panda$core$String* $tmp481;
    org$pandalanguage$pandac$ASTNode* base488 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce490 = NULL;
    panda$core$Int64 index492;
    panda$core$String* $finallyReturn493;
    panda$core$String* $tmp495;
    panda$core$String* $tmp496;
    panda$core$String* $tmp497;
    panda$core$String* $tmp498;
    panda$core$String* $tmp499;
    panda$core$String* $tmp500;
    panda$core$String* $tmp501;
    panda$core$Object* $tmp509;
    org$pandalanguage$pandac$ASTNode* dc517 = NULL;
    panda$collections$ImmutableArray* annotations519 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind521;
    panda$core$String* name523 = NULL;
    panda$collections$ImmutableArray* generics525 = NULL;
    panda$collections$ImmutableArray* supertypes527 = NULL;
    panda$collections$ImmutableArray* members529 = NULL;
    panda$core$MutableString* result534 = NULL;
    panda$core$MutableString* $tmp535;
    panda$core$MutableString* $tmp536;
    panda$core$String* $tmp538;
    panda$collections$Iterator* Iter$210$17544 = NULL;
    panda$collections$Iterator* $tmp545;
    panda$collections$Iterator* $tmp546;
    org$pandalanguage$pandac$ASTNode* a562 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp563;
    panda$core$Object* $tmp564;
    panda$core$String* $tmp569;
    org$pandalanguage$pandac$ClassDecl$Kind $match$213_17574;
    panda$core$String* $tmp581;
    panda$core$String* $tmp582;
    panda$core$String* $tmp584;
    panda$core$String* $tmp589;
    panda$core$String* $tmp590;
    panda$core$String* $tmp592;
    panda$collections$Iterator* Iter$226$17601 = NULL;
    panda$collections$Iterator* $tmp602;
    panda$collections$Iterator* $tmp603;
    org$pandalanguage$pandac$ASTNode* m619 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp620;
    panda$core$Object* $tmp621;
    panda$core$String* $tmp626;
    panda$core$Char8 $tmp631;
    panda$core$String* $finallyReturn631;
    panda$core$String* $tmp633;
    panda$core$String* $tmp634;
    panda$core$String* label641 = NULL;
    panda$core$String* $finallyReturn642;
    panda$core$String* $tmp644;
    panda$core$String* $tmp645;
    panda$core$String* $tmp646;
    panda$core$String* $finallyReturn652;
    panda$core$String* $tmp654;
    org$pandalanguage$pandac$ASTNode* target659 = NULL;
    org$pandalanguage$pandac$ASTNode* value661 = NULL;
    panda$core$String* $finallyReturn662;
    panda$core$String* $tmp664;
    panda$core$String* $tmp665;
    panda$core$String* $tmp666;
    panda$core$String* $tmp667;
    panda$core$String* $tmp668;
    panda$core$String* $finallyReturn677;
    panda$core$String* $tmp679;
    panda$core$String* $tmp680;
    panda$core$String* label686 = NULL;
    panda$collections$ImmutableArray* statements688 = NULL;
    org$pandalanguage$pandac$ASTNode* test690 = NULL;
    panda$core$MutableString* result695 = NULL;
    panda$core$MutableString* $tmp696;
    panda$core$MutableString* $tmp697;
    panda$core$String* $tmp699;
    panda$core$String* $tmp700;
    panda$collections$Iterator* Iter$247$17708 = NULL;
    panda$collections$Iterator* $tmp709;
    panda$collections$Iterator* $tmp710;
    org$pandalanguage$pandac$ASTNode* s726 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp727;
    panda$core$Object* $tmp728;
    panda$core$String* $tmp733;
    panda$core$String* $tmp738;
    panda$core$String* $tmp739;
    panda$core$String* $finallyReturn743;
    panda$core$String* $tmp745;
    panda$core$String* $tmp746;
    org$pandalanguage$pandac$ASTNode* base753 = NULL;
    panda$core$String* field755 = NULL;
    panda$core$String* $finallyReturn756;
    panda$core$String* $tmp758;
    panda$core$String* $tmp759;
    panda$core$String* $tmp760;
    panda$core$String* $tmp761;
    panda$core$String* $tmp762;
    org$pandalanguage$pandac$ASTNode* dc773 = NULL;
    panda$collections$ImmutableArray* annotations775 = NULL;
    org$pandalanguage$pandac$ASTNode* decl777 = NULL;
    panda$core$MutableString* result782 = NULL;
    panda$core$MutableString* $tmp783;
    panda$core$MutableString* $tmp784;
    panda$core$String* $tmp786;
    panda$collections$Iterator* Iter$259$17792 = NULL;
    panda$collections$Iterator* $tmp793;
    panda$collections$Iterator* $tmp794;
    org$pandalanguage$pandac$ASTNode* a810 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp811;
    panda$core$Object* $tmp812;
    panda$core$String* $tmp817;
    panda$core$String* $finallyReturn821;
    panda$core$String* $tmp823;
    panda$core$String* $tmp824;
    panda$collections$ImmutableArray* entries831 = NULL;
    panda$core$MutableString* result836 = NULL;
    panda$core$MutableString* $tmp837;
    panda$core$MutableString* $tmp838;
    panda$collections$Iterator* Iter$266$17843 = NULL;
    panda$collections$Iterator* $tmp844;
    panda$collections$Iterator* $tmp845;
    org$pandalanguage$pandac$ASTNode* e861 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp862;
    panda$core$Object* $tmp863;
    panda$core$String* $tmp868;
    panda$core$String* $finallyReturn872;
    panda$core$String* $tmp874;
    panda$core$String* $tmp875;
    panda$core$String* label882 = NULL;
    org$pandalanguage$pandac$ASTNode* target884 = NULL;
    org$pandalanguage$pandac$ASTNode* list886 = NULL;
    panda$collections$ImmutableArray* statements888 = NULL;
    panda$core$MutableString* result893 = NULL;
    panda$core$MutableString* $tmp894;
    panda$core$MutableString* $tmp895;
    panda$core$String* $tmp897;
    panda$core$String* $tmp900;
    panda$core$String* $tmp901;
    panda$core$String* $tmp902;
    panda$core$String* $tmp903;
    panda$collections$Iterator* Iter$276$17914 = NULL;
    panda$collections$Iterator* $tmp915;
    panda$collections$Iterator* $tmp916;
    org$pandalanguage$pandac$ASTNode* s932 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp933;
    panda$core$Object* $tmp934;
    panda$core$String* $tmp939;
    panda$core$Char8 $tmp944;
    panda$core$String* $finallyReturn944;
    panda$core$String* $tmp946;
    panda$core$String* $tmp947;
    panda$core$String* name954 = NULL;
    panda$collections$ImmutableArray* subtypes956 = NULL;
    panda$core$String* $finallyReturn957;
    panda$core$String* $tmp959;
    panda$core$String* $tmp960;
    panda$core$String* $tmp961;
    panda$core$String* $tmp962;
    panda$core$String* $tmp963;
    panda$core$String* $tmp967;
    panda$core$String* name975 = NULL;
    panda$core$String* $finallyReturn976;
    panda$core$String* $tmp978;
    org$pandalanguage$pandac$ASTNode* test982 = NULL;
    panda$collections$ImmutableArray* ifTrue984 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse986 = NULL;
    panda$core$MutableString* result991 = NULL;
    panda$core$MutableString* $tmp992;
    panda$core$MutableString* $tmp993;
    panda$core$String* $tmp995;
    panda$core$String* $tmp996;
    panda$collections$Iterator* Iter$287$171004 = NULL;
    panda$collections$Iterator* $tmp1005;
    panda$collections$Iterator* $tmp1006;
    org$pandalanguage$pandac$ASTNode* s1022 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1023;
    panda$core$Object* $tmp1024;
    panda$core$String* $tmp1029;
    panda$core$Char8 $tmp1034;
    panda$core$String* $tmp1035;
    panda$core$String* $tmp1036;
    panda$core$String* $finallyReturn1040;
    panda$core$String* $tmp1042;
    panda$core$String* $tmp1043;
    panda$core$UInt64 value1050;
    panda$core$String* $finallyReturn1051;
    panda$core$String* $tmp1053;
    panda$core$String* $tmp1054;
    org$pandalanguage$pandac$IRNode* ir1059 = NULL;
    panda$core$String* $finallyReturn1060;
    panda$core$String* $tmp1062;
    panda$core$String* $tmp1063;
    panda$core$String* label1069 = NULL;
    panda$collections$ImmutableArray* statements1071 = NULL;
    panda$core$MutableString* result1076 = NULL;
    panda$core$MutableString* $tmp1077;
    panda$core$MutableString* $tmp1078;
    panda$core$String* $tmp1080;
    panda$core$String* $tmp1081;
    panda$collections$Iterator* Iter$305$171089 = NULL;
    panda$collections$Iterator* $tmp1090;
    panda$collections$Iterator* $tmp1091;
    org$pandalanguage$pandac$ASTNode* s1107 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1108;
    panda$core$Object* $tmp1109;
    panda$core$String* $tmp1114;
    panda$core$Char8 $tmp1119;
    panda$core$String* $finallyReturn1119;
    panda$core$String* $tmp1121;
    panda$core$String* $tmp1122;
    org$pandalanguage$pandac$ASTNode* value1129 = NULL;
    panda$collections$ImmutableArray* whens1131 = NULL;
    panda$collections$ImmutableArray* other1133 = NULL;
    panda$core$MutableString* result1138 = NULL;
    panda$core$MutableString* $tmp1139;
    panda$core$MutableString* $tmp1140;
    panda$core$String* $tmp1142;
    panda$core$String* $tmp1143;
    panda$collections$Iterator* Iter$312$171151 = NULL;
    panda$collections$Iterator* $tmp1152;
    panda$collections$Iterator* $tmp1153;
    org$pandalanguage$pandac$ASTNode* w1169 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1170;
    panda$core$Object* $tmp1171;
    panda$core$String* $tmp1176;
    panda$core$String* $tmp1181;
    panda$core$Char8 $tmp1184;
    panda$core$String* $finallyReturn1184;
    panda$core$String* $tmp1186;
    panda$core$String* $tmp1187;
    org$pandalanguage$pandac$ASTNode* dc1194 = NULL;
    panda$collections$ImmutableArray* annotations1196 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1198;
    panda$core$String* name1200 = NULL;
    panda$collections$ImmutableArray* parameters1202 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1204 = NULL;
    panda$collections$ImmutableArray* statements1206 = NULL;
    panda$core$MutableString* result1211 = NULL;
    panda$core$MutableString* $tmp1212;
    panda$core$MutableString* $tmp1213;
    panda$core$String* $tmp1215;
    panda$collections$Iterator* Iter$325$171221 = NULL;
    panda$collections$Iterator* $tmp1222;
    panda$collections$Iterator* $tmp1223;
    org$pandalanguage$pandac$ASTNode* a1239 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1240;
    panda$core$Object* $tmp1241;
    panda$core$String* $tmp1246;
    org$pandalanguage$pandac$MethodDecl$Kind $match$328_171251;
    panda$core$String* $tmp1257;
    panda$core$String* $tmp1258;
    panda$core$String* $tmp1259;
    panda$core$String* $tmp1260;
    panda$core$String* $tmp1264;
    panda$core$String* $tmp1269;
    panda$core$String* $tmp1270;
    panda$collections$Iterator* Iter$339$211279 = NULL;
    panda$collections$Iterator* $tmp1280;
    panda$collections$Iterator* $tmp1281;
    org$pandalanguage$pandac$ASTNode* s1297 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1298;
    panda$core$Object* $tmp1299;
    panda$core$String* $tmp1304;
    panda$core$Char8 $tmp1309;
    panda$core$String* $finallyReturn1309;
    panda$core$String* $tmp1311;
    panda$core$String* $tmp1312;
    panda$core$String* $finallyReturn1318;
    panda$core$String* $tmp1320;
    org$pandalanguage$pandac$ASTNode* base1325 = NULL;
    panda$core$String* $finallyReturn1326;
    panda$core$String* $tmp1328;
    panda$core$String* $tmp1329;
    panda$core$String* name1335 = NULL;
    panda$core$String* $finallyReturn1336;
    panda$core$String* $tmp1338;
    panda$core$String* name1342 = NULL;
    org$pandalanguage$pandac$ASTNode* type1344 = NULL;
    panda$core$String* $finallyReturn1345;
    panda$core$String* $tmp1347;
    panda$core$String* $tmp1348;
    panda$core$String* $tmp1349;
    panda$core$String* $tmp1350;
    panda$core$String* $tmp1351;
    org$pandalanguage$pandac$parser$Token$Kind kind1361;
    org$pandalanguage$pandac$ASTNode* base1363 = NULL;
    panda$core$String* $finallyReturn1364;
    panda$core$String* $tmp1366;
    panda$core$String* $tmp1367;
    panda$core$String* $tmp1368;
    panda$core$String* $tmp1369;
    panda$core$String* $tmp1370;
    panda$core$Object* $tmp1371;
    org$pandalanguage$pandac$ASTNode* start1383 = NULL;
    org$pandalanguage$pandac$ASTNode* end1385 = NULL;
    panda$core$Bit inclusive1387;
    org$pandalanguage$pandac$ASTNode* step1389 = NULL;
    panda$core$MutableString* result1394 = NULL;
    panda$core$MutableString* $tmp1395;
    panda$core$MutableString* $tmp1396;
    org$pandalanguage$pandac$ASTNode* $tmp1398;
    org$pandalanguage$pandac$ASTNode* $tmp1406;
    org$pandalanguage$pandac$ASTNode* $tmp1412;
    panda$core$String* $tmp1418;
    panda$core$String* $finallyReturn1420;
    panda$core$String* $tmp1422;
    panda$core$String* $tmp1423;
    panda$core$Real64 value1430;
    panda$core$String* $finallyReturn1431;
    panda$core$String* $tmp1433;
    panda$core$String* $tmp1434;
    org$pandalanguage$pandac$ASTNode* value1439 = NULL;
    panda$core$String* $finallyReturn1440;
    panda$core$String* $tmp1442;
    panda$core$String* $tmp1443;
    panda$core$String* $tmp1444;
    panda$core$String* $finallyReturn1450;
    panda$core$String* $tmp1452;
    panda$core$String* $finallyReturn1456;
    panda$core$String* $tmp1458;
    panda$core$String* str1463 = NULL;
    panda$core$String* $finallyReturn1464;
    panda$core$String* $tmp1466;
    panda$core$String* $finallyReturn1469;
    panda$core$String* $tmp1471;
    panda$core$String* name1476 = NULL;
    panda$core$String* $finallyReturn1477;
    panda$core$String* $tmp1479;
    panda$core$String* name1483 = NULL;
    org$pandalanguage$pandac$ASTNode* type1485 = NULL;
    panda$core$String* $finallyReturn1486;
    panda$core$String* $tmp1488;
    panda$core$String* $tmp1489;
    panda$core$String* $tmp1490;
    panda$core$String* $tmp1491;
    panda$core$String* $tmp1492;
    panda$core$String* $finallyReturn1500;
    panda$core$String* $tmp1502;
    panda$core$String* name1506 = NULL;
    panda$core$String* $finallyReturn1507;
    panda$core$String* $tmp1509;
    org$pandalanguage$pandac$Variable$Kind kind1513;
    panda$collections$ImmutableArray* decls1515 = NULL;
    panda$core$MutableString* result1520 = NULL;
    panda$core$MutableString* $tmp1521;
    panda$core$MutableString* $tmp1522;
    org$pandalanguage$pandac$Variable$Kind $match$397_171524;
    panda$core$String* $tmp1533;
    panda$core$String* $finallyReturn1534;
    panda$core$String* $tmp1536;
    panda$core$String* $tmp1537;
    panda$collections$ImmutableArray* tests1544 = NULL;
    panda$collections$ImmutableArray* statements1546 = NULL;
    panda$core$MutableString* result1551 = NULL;
    panda$core$MutableString* $tmp1552;
    panda$core$MutableString* $tmp1553;
    panda$core$String* separator1556 = NULL;
    panda$core$String* $tmp1557;
    panda$collections$Iterator* Iter$408$171562 = NULL;
    panda$collections$Iterator* $tmp1563;
    panda$collections$Iterator* $tmp1564;
    org$pandalanguage$pandac$ASTNode* t1580 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1581;
    panda$core$Object* $tmp1582;
    panda$core$String* $tmp1587;
    panda$core$String* $tmp1588;
    panda$core$String* $tmp1589;
    panda$core$String* $tmp1590;
    panda$core$Char8 $tmp1599;
    panda$collections$Iterator* Iter$412$171603 = NULL;
    panda$collections$Iterator* $tmp1604;
    panda$collections$Iterator* $tmp1605;
    org$pandalanguage$pandac$ASTNode* s1621 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1622;
    panda$core$Object* $tmp1623;
    panda$core$String* $tmp1628;
    panda$core$String* $finallyReturn1632;
    panda$core$String* $tmp1634;
    panda$core$String* $tmp1635;
    panda$core$String* label1642 = NULL;
    org$pandalanguage$pandac$ASTNode* test1644 = NULL;
    panda$collections$ImmutableArray* statements1646 = NULL;
    panda$core$MutableString* result1651 = NULL;
    panda$core$MutableString* $tmp1652;
    panda$core$MutableString* $tmp1653;
    panda$core$String* $tmp1655;
    panda$core$String* $tmp1656;
    panda$core$String* $tmp1660;
    panda$core$String* $tmp1661;
    panda$collections$Iterator* Iter$422$171669 = NULL;
    panda$collections$Iterator* $tmp1670;
    panda$collections$Iterator* $tmp1671;
    org$pandalanguage$pandac$ASTNode* s1687 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1688;
    panda$core$Object* $tmp1689;
    panda$core$String* $tmp1694;
    panda$core$Char8 $tmp1699;
    panda$core$String* $finallyReturn1699;
    panda$core$String* $tmp1701;
    panda$core$String* $tmp1702;
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
            org$pandalanguage$pandac$ASTNode** $tmp270 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 24));
            expr269 = *$tmp270;
            if (((panda$core$Bit) { expr269 != NULL }).value) {
            {
                panda$core$String* $tmp277 = panda$core$String$convert$R$panda$core$String(name267);
                $tmp276 = $tmp277;
                panda$core$String* $tmp279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp276, &$s278);
                $tmp275 = $tmp279;
                panda$core$String* $tmp280 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp275, ((panda$core$Object*) expr269));
                $tmp274 = $tmp280;
                panda$core$String* $tmp282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp274, &$s281);
                $tmp273 = $tmp282;
                $tmp272 = $tmp273;
                $finallyReturn270 = $tmp272;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp272));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp273));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp274));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp275));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp276));
                $tmp263 = 0;
                goto $l261;
                $l283:;
                return $finallyReturn270;
            }
            }
            $tmp286 = name267;
            $finallyReturn284 = $tmp286;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp286));
            $tmp263 = 1;
            goto $l261;
            $l287:;
            return $finallyReturn284;
        }
        }
        else {
        panda$core$Bit $tmp289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp289.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp291 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            test290 = *$tmp291;
            org$pandalanguage$pandac$ASTNode** $tmp293 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 24));
            msg292 = *$tmp293;
            if (((panda$core$Bit) { msg292 == NULL }).value) {
            {
                panda$core$String* $tmp299 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s298, ((panda$core$Object*) test290));
                $tmp297 = $tmp299;
                panda$core$String* $tmp301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp297, &$s300);
                $tmp296 = $tmp301;
                $tmp295 = $tmp296;
                $finallyReturn293 = $tmp295;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp295));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp296));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp297));
                $tmp263 = 2;
                goto $l261;
                $l302:;
                return $finallyReturn293;
            }
            }
            panda$core$String* $tmp311 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s310, ((panda$core$Object*) test290));
            $tmp309 = $tmp311;
            panda$core$String* $tmp313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp309, &$s312);
            $tmp308 = $tmp313;
            panda$core$String* $tmp314 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp308, ((panda$core$Object*) msg292));
            $tmp307 = $tmp314;
            panda$core$String* $tmp316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp307, &$s315);
            $tmp306 = $tmp316;
            $tmp305 = $tmp306;
            $finallyReturn303 = $tmp305;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp305));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp306));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp307));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp308));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp309));
            $tmp263 = 3;
            goto $l261;
            $l317:;
            return $finallyReturn303;
        }
        }
        else {
        panda$core$Bit $tmp319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp319.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp321 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            left320 = *$tmp321;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp323 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$167_9264->$data + 24));
            op322 = *$tmp323;
            org$pandalanguage$pandac$ASTNode** $tmp325 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 32));
            right324 = *$tmp325;
            panda$core$String* $tmp335 = (($fn334) left320->$class->vtable[0])(left320);
            $tmp333 = $tmp335;
            panda$core$String* $tmp337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp333, &$s336);
            $tmp332 = $tmp337;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp339;
            $tmp339 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp339->value = op322;
            $tmp338 = ((panda$core$Object*) $tmp339);
            panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp332, $tmp338);
            $tmp331 = $tmp340;
            panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp331, &$s341);
            $tmp330 = $tmp342;
            panda$core$String* $tmp343 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp330, ((panda$core$Object*) right324));
            $tmp329 = $tmp343;
            panda$core$String* $tmp345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp329, &$s344);
            $tmp328 = $tmp345;
            $tmp327 = $tmp328;
            $finallyReturn325 = $tmp327;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp327));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp328));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp329));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp331));
            panda$core$Panda$unref$panda$core$Object($tmp338);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp332));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp333));
            $tmp263 = 4;
            goto $l261;
            $l346:;
            return $finallyReturn325;
        }
        }
        else {
        panda$core$Bit $tmp348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp348.value) {
        {
            panda$core$Bit* $tmp350 = ((panda$core$Bit*) ((char*) $match$167_9264->$data + 16));
            value349 = *$tmp350;
            panda$core$String* $tmp354 = panda$core$Bit$convert$R$panda$core$String(value349);
            $tmp353 = $tmp354;
            $tmp352 = $tmp353;
            $finallyReturn350 = $tmp352;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp352));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp353));
            $tmp263 = 5;
            goto $l261;
            $l355:;
            return $finallyReturn350;
        }
        }
        else {
        panda$core$Bit $tmp357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp357.value) {
        {
            panda$collections$ImmutableArray** $tmp359 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 16));
            statements358 = *$tmp359;
            int $tmp362;
            {
                panda$core$MutableString* $tmp366 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp366, &$s367);
                $tmp365 = $tmp366;
                $tmp364 = $tmp365;
                result363 = $tmp364;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp364));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp365));
                {
                    int $tmp370;
                    {
                        ITable* $tmp374 = ((panda$collections$Iterable*) statements358)->$class->itable;
                        while ($tmp374->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp374 = $tmp374->next;
                        }
                        $fn376 $tmp375 = $tmp374->methods[0];
                        panda$collections$Iterator* $tmp377 = $tmp375(((panda$collections$Iterable*) statements358));
                        $tmp373 = $tmp377;
                        $tmp372 = $tmp373;
                        Iter$184$17371 = $tmp372;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp372));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp373));
                        $l378:;
                        ITable* $tmp381 = Iter$184$17371->$class->itable;
                        while ($tmp381->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp381 = $tmp381->next;
                        }
                        $fn383 $tmp382 = $tmp381->methods[0];
                        panda$core$Bit $tmp384 = $tmp382(Iter$184$17371);
                        panda$core$Bit $tmp385 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp384);
                        bool $tmp380 = $tmp385.value;
                        if (!$tmp380) goto $l379;
                        {
                            int $tmp388;
                            {
                                ITable* $tmp392 = Iter$184$17371->$class->itable;
                                while ($tmp392->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp392 = $tmp392->next;
                                }
                                $fn394 $tmp393 = $tmp392->methods[1];
                                panda$core$Object* $tmp395 = $tmp393(Iter$184$17371);
                                $tmp391 = $tmp395;
                                $tmp390 = ((org$pandalanguage$pandac$ASTNode*) $tmp391);
                                s389 = $tmp390;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp390));
                                panda$core$Panda$unref$panda$core$Object($tmp391);
                                panda$core$String* $tmp398 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s389), &$s397);
                                $tmp396 = $tmp398;
                                panda$core$MutableString$append$panda$core$String(result363, $tmp396);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp396));
                            }
                            $tmp388 = -1;
                            goto $l386;
                            $l386:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s389));
                            s389 = NULL;
                            switch ($tmp388) {
                                case -1: goto $l399;
                            }
                            $l399:;
                        }
                        goto $l378;
                        $l379:;
                    }
                    $tmp370 = -1;
                    goto $l368;
                    $l368:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$184$17371));
                    Iter$184$17371 = NULL;
                    switch ($tmp370) {
                        case -1: goto $l400;
                    }
                    $l400:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp401, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result363, $tmp401);
                panda$core$String* $tmp405 = panda$core$MutableString$finish$R$panda$core$String(result363);
                $tmp404 = $tmp405;
                $tmp403 = $tmp404;
                $finallyReturn401 = $tmp403;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp403));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp404));
                $tmp362 = 0;
                goto $l360;
                $l406:;
                $tmp263 = 6;
                goto $l261;
                $l407:;
                return $finallyReturn401;
            }
            $l360:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result363));
            result363 = NULL;
            switch ($tmp362) {
                case 0: goto $l406;
            }
            $l409:;
        }
        }
        else {
        panda$core$Bit $tmp410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp410.value) {
        {
            panda$core$String** $tmp412 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            label411 = *$tmp412;
            if (((panda$core$Bit) { label411 != NULL }).value) {
            {
                panda$core$String* $tmp418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s417, label411);
                $tmp416 = $tmp418;
                panda$core$String* $tmp420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp416, &$s419);
                $tmp415 = $tmp420;
                $tmp414 = $tmp415;
                $finallyReturn412 = $tmp414;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp414));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp415));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp416));
                $tmp263 = 7;
                goto $l261;
                $l421:;
                return $finallyReturn412;
            }
            }
            $tmp424 = &$s425;
            $finallyReturn422 = $tmp424;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp424));
            $tmp263 = 8;
            goto $l261;
            $l426:;
            return $finallyReturn422;
        }
        }
        else {
        panda$core$Bit $tmp428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp428.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp430 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            target429 = *$tmp430;
            panda$collections$ImmutableArray** $tmp432 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 24));
            args431 = *$tmp432;
            panda$core$String* $tmp440 = (($fn439) target429->$class->vtable[0])(target429);
            $tmp438 = $tmp440;
            panda$core$String* $tmp442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp438, &$s441);
            $tmp437 = $tmp442;
            panda$core$String* $tmp444 = panda$collections$ImmutableArray$join$R$panda$core$String(args431);
            $tmp443 = $tmp444;
            panda$core$String* $tmp445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp437, $tmp443);
            $tmp436 = $tmp445;
            panda$core$String* $tmp447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp436, &$s446);
            $tmp435 = $tmp447;
            $tmp434 = $tmp435;
            $finallyReturn432 = $tmp434;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp434));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp435));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp436));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp443));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp437));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp438));
            $tmp263 = 9;
            goto $l261;
            $l448:;
            return $finallyReturn432;
        }
        }
        else {
        panda$core$Bit $tmp450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp450.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp452 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            dc451 = *$tmp452;
            panda$core$String** $tmp454 = ((panda$core$String**) ((char*) $match$167_9264->$data + 24));
            name453 = *$tmp454;
            panda$collections$ImmutableArray** $tmp456 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 32));
            fields455 = *$tmp456;
            int $tmp459;
            {
                panda$core$MutableString* $tmp463 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp463);
                $tmp462 = $tmp463;
                $tmp461 = $tmp462;
                result460 = $tmp461;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp461));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp462));
                if (((panda$core$Bit) { dc451 != NULL }).value) {
                {
                    panda$core$String* $tmp466 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc451), &$s465);
                    $tmp464 = $tmp466;
                    panda$core$MutableString$append$panda$core$String(result460, $tmp464);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp464));
                }
                }
                panda$core$String* $tmp471 = panda$core$String$convert$R$panda$core$String(name453);
                $tmp470 = $tmp471;
                panda$core$String* $tmp473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp470, &$s472);
                $tmp469 = $tmp473;
                panda$core$String* $tmp475 = panda$collections$ImmutableArray$join$R$panda$core$String(fields455);
                $tmp474 = $tmp475;
                panda$core$String* $tmp476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp469, $tmp474);
                $tmp468 = $tmp476;
                panda$core$String* $tmp478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp468, &$s477);
                $tmp467 = $tmp478;
                panda$core$MutableString$append$panda$core$String(result460, $tmp467);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp467));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp468));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp474));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp469));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp470));
                panda$core$String* $tmp482 = panda$core$MutableString$finish$R$panda$core$String(result460);
                $tmp481 = $tmp482;
                $tmp480 = $tmp481;
                $finallyReturn478 = $tmp480;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp480));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp481));
                $tmp459 = 0;
                goto $l457;
                $l483:;
                $tmp263 = 10;
                goto $l261;
                $l484:;
                return $finallyReturn478;
            }
            $l457:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result460));
            result460 = NULL;
            switch ($tmp459) {
                case 0: goto $l483;
            }
            $l486:;
        }
        }
        else {
        panda$core$Bit $tmp487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp487.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp489 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            base488 = *$tmp489;
            org$pandalanguage$pandac$ChoiceEntry** $tmp491 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$167_9264->$data + 24));
            ce490 = *$tmp491;
            panda$core$Int64* $tmp493 = ((panda$core$Int64*) ((char*) $match$167_9264->$data + 32));
            index492 = *$tmp493;
            panda$core$String* $tmp503 = (($fn502) base488->$class->vtable[0])(base488);
            $tmp501 = $tmp503;
            panda$core$String* $tmp505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp501, &$s504);
            $tmp500 = $tmp505;
            panda$core$String* $tmp506 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp500, ((panda$core$Object*) ce490));
            $tmp499 = $tmp506;
            panda$core$String* $tmp508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp499, &$s507);
            $tmp498 = $tmp508;
            panda$core$Int64$wrapper* $tmp510;
            $tmp510 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp510->value = index492;
            $tmp509 = ((panda$core$Object*) $tmp510);
            panda$core$String* $tmp511 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp498, $tmp509);
            $tmp497 = $tmp511;
            panda$core$String* $tmp513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp497, &$s512);
            $tmp496 = $tmp513;
            $tmp495 = $tmp496;
            $finallyReturn493 = $tmp495;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp495));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp496));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp497));
            panda$core$Panda$unref$panda$core$Object($tmp509);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp498));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp499));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp500));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp501));
            $tmp263 = 11;
            goto $l261;
            $l514:;
            return $finallyReturn493;
        }
        }
        else {
        panda$core$Bit $tmp516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp516.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp518 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            dc517 = *$tmp518;
            panda$collections$ImmutableArray** $tmp520 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 24));
            annotations519 = *$tmp520;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp522 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$167_9264->$data + 32));
            kind521 = *$tmp522;
            panda$core$String** $tmp524 = ((panda$core$String**) ((char*) $match$167_9264->$data + 40));
            name523 = *$tmp524;
            panda$collections$ImmutableArray** $tmp526 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 48));
            generics525 = *$tmp526;
            panda$collections$ImmutableArray** $tmp528 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 56));
            supertypes527 = *$tmp528;
            panda$collections$ImmutableArray** $tmp530 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 64));
            members529 = *$tmp530;
            int $tmp533;
            {
                panda$core$MutableString* $tmp537 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp537);
                $tmp536 = $tmp537;
                $tmp535 = $tmp536;
                result534 = $tmp535;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp535));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp536));
                if (((panda$core$Bit) { dc517 != NULL }).value) {
                {
                    panda$core$String* $tmp540 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc517), &$s539);
                    $tmp538 = $tmp540;
                    panda$core$MutableString$append$panda$core$String(result534, $tmp538);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp538));
                }
                }
                {
                    int $tmp543;
                    {
                        ITable* $tmp547 = ((panda$collections$Iterable*) annotations519)->$class->itable;
                        while ($tmp547->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp547 = $tmp547->next;
                        }
                        $fn549 $tmp548 = $tmp547->methods[0];
                        panda$collections$Iterator* $tmp550 = $tmp548(((panda$collections$Iterable*) annotations519));
                        $tmp546 = $tmp550;
                        $tmp545 = $tmp546;
                        Iter$210$17544 = $tmp545;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp545));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp546));
                        $l551:;
                        ITable* $tmp554 = Iter$210$17544->$class->itable;
                        while ($tmp554->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp554 = $tmp554->next;
                        }
                        $fn556 $tmp555 = $tmp554->methods[0];
                        panda$core$Bit $tmp557 = $tmp555(Iter$210$17544);
                        panda$core$Bit $tmp558 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp557);
                        bool $tmp553 = $tmp558.value;
                        if (!$tmp553) goto $l552;
                        {
                            int $tmp561;
                            {
                                ITable* $tmp565 = Iter$210$17544->$class->itable;
                                while ($tmp565->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp565 = $tmp565->next;
                                }
                                $fn567 $tmp566 = $tmp565->methods[1];
                                panda$core$Object* $tmp568 = $tmp566(Iter$210$17544);
                                $tmp564 = $tmp568;
                                $tmp563 = ((org$pandalanguage$pandac$ASTNode*) $tmp564);
                                a562 = $tmp563;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp563));
                                panda$core$Panda$unref$panda$core$Object($tmp564);
                                panda$core$String* $tmp571 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a562), &$s570);
                                $tmp569 = $tmp571;
                                panda$core$MutableString$append$panda$core$String(result534, $tmp569);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp569));
                            }
                            $tmp561 = -1;
                            goto $l559;
                            $l559:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a562));
                            a562 = NULL;
                            switch ($tmp561) {
                                case -1: goto $l572;
                            }
                            $l572:;
                        }
                        goto $l551;
                        $l552:;
                    }
                    $tmp543 = -1;
                    goto $l541;
                    $l541:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$210$17544));
                    Iter$210$17544 = NULL;
                    switch ($tmp543) {
                        case -1: goto $l573;
                    }
                    $l573:;
                }
                {
                    $match$213_17574 = kind521;
                    panda$core$Bit $tmp575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$213_17574.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp575.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result534, &$s576);
                    }
                    }
                    else {
                    panda$core$Bit $tmp577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$213_17574.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp577.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result534, &$s578);
                    }
                    }
                    else {
                    panda$core$Bit $tmp579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$213_17574.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp579.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result534, &$s580);
                    }
                    }
                    }
                    }
                }
                panda$core$MutableString$append$panda$core$String(result534, name523);
                if (((panda$core$Bit) { generics525 != NULL }).value) {
                {
                    panda$core$String* $tmp585 = panda$collections$ImmutableArray$join$R$panda$core$String(generics525);
                    $tmp584 = $tmp585;
                    panda$core$String* $tmp586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s583, $tmp584);
                    $tmp582 = $tmp586;
                    panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp582, &$s587);
                    $tmp581 = $tmp588;
                    panda$core$MutableString$append$panda$core$String(result534, $tmp581);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp581));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp582));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp584));
                }
                }
                if (((panda$core$Bit) { supertypes527 != NULL }).value) {
                {
                    panda$core$String* $tmp593 = panda$collections$ImmutableArray$join$R$panda$core$String(supertypes527);
                    $tmp592 = $tmp593;
                    panda$core$String* $tmp594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s591, $tmp592);
                    $tmp590 = $tmp594;
                    panda$core$String* $tmp596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp590, &$s595);
                    $tmp589 = $tmp596;
                    panda$core$MutableString$append$panda$core$String(result534, $tmp589);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp589));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp590));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp592));
                }
                }
                panda$core$MutableString$append$panda$core$String(result534, &$s597);
                {
                    int $tmp600;
                    {
                        ITable* $tmp604 = ((panda$collections$Iterable*) members529)->$class->itable;
                        while ($tmp604->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp604 = $tmp604->next;
                        }
                        $fn606 $tmp605 = $tmp604->methods[0];
                        panda$collections$Iterator* $tmp607 = $tmp605(((panda$collections$Iterable*) members529));
                        $tmp603 = $tmp607;
                        $tmp602 = $tmp603;
                        Iter$226$17601 = $tmp602;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp602));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp603));
                        $l608:;
                        ITable* $tmp611 = Iter$226$17601->$class->itable;
                        while ($tmp611->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp611 = $tmp611->next;
                        }
                        $fn613 $tmp612 = $tmp611->methods[0];
                        panda$core$Bit $tmp614 = $tmp612(Iter$226$17601);
                        panda$core$Bit $tmp615 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp614);
                        bool $tmp610 = $tmp615.value;
                        if (!$tmp610) goto $l609;
                        {
                            int $tmp618;
                            {
                                ITable* $tmp622 = Iter$226$17601->$class->itable;
                                while ($tmp622->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp622 = $tmp622->next;
                                }
                                $fn624 $tmp623 = $tmp622->methods[1];
                                panda$core$Object* $tmp625 = $tmp623(Iter$226$17601);
                                $tmp621 = $tmp625;
                                $tmp620 = ((org$pandalanguage$pandac$ASTNode*) $tmp621);
                                m619 = $tmp620;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp620));
                                panda$core$Panda$unref$panda$core$Object($tmp621);
                                panda$core$String* $tmp628 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) m619), &$s627);
                                $tmp626 = $tmp628;
                                panda$core$MutableString$append$panda$core$String(result534, $tmp626);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp626));
                            }
                            $tmp618 = -1;
                            goto $l616;
                            $l616:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m619));
                            m619 = NULL;
                            switch ($tmp618) {
                                case -1: goto $l629;
                            }
                            $l629:;
                        }
                        goto $l608;
                        $l609:;
                    }
                    $tmp600 = -1;
                    goto $l598;
                    $l598:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$226$17601));
                    Iter$226$17601 = NULL;
                    switch ($tmp600) {
                        case -1: goto $l630;
                    }
                    $l630:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp631, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result534, $tmp631);
                panda$core$String* $tmp635 = panda$core$MutableString$finish$R$panda$core$String(result534);
                $tmp634 = $tmp635;
                $tmp633 = $tmp634;
                $finallyReturn631 = $tmp633;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp633));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp634));
                $tmp533 = 0;
                goto $l531;
                $l636:;
                $tmp263 = 12;
                goto $l261;
                $l637:;
                return $finallyReturn631;
            }
            $l531:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result534));
            result534 = NULL;
            switch ($tmp533) {
                case 0: goto $l636;
            }
            $l639:;
        }
        }
        else {
        panda$core$Bit $tmp640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp640.value) {
        {
            panda$core$String** $tmp642 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            label641 = *$tmp642;
            if (((panda$core$Bit) { label641 != NULL }).value) {
            {
                panda$core$String* $tmp648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s647, label641);
                $tmp646 = $tmp648;
                panda$core$String* $tmp650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp646, &$s649);
                $tmp645 = $tmp650;
                $tmp644 = $tmp645;
                $finallyReturn642 = $tmp644;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp644));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp645));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp646));
                $tmp263 = 13;
                goto $l261;
                $l651:;
                return $finallyReturn642;
            }
            }
            $tmp654 = &$s655;
            $finallyReturn652 = $tmp654;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp654));
            $tmp263 = 14;
            goto $l261;
            $l656:;
            return $finallyReturn652;
        }
        }
        else {
        panda$core$Bit $tmp658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp658.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp660 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            target659 = *$tmp660;
            org$pandalanguage$pandac$ASTNode** $tmp662 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 24));
            value661 = *$tmp662;
            if (((panda$core$Bit) { value661 != NULL }).value) {
            {
                panda$core$String* $tmp670 = (($fn669) target659->$class->vtable[0])(target659);
                $tmp668 = $tmp670;
                panda$core$String* $tmp672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp668, &$s671);
                $tmp667 = $tmp672;
                panda$core$String* $tmp673 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp667, ((panda$core$Object*) value661));
                $tmp666 = $tmp673;
                panda$core$String* $tmp675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp666, &$s674);
                $tmp665 = $tmp675;
                $tmp664 = $tmp665;
                $finallyReturn662 = $tmp664;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp664));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp665));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp666));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp667));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp668));
                $tmp263 = 15;
                goto $l261;
                $l676:;
                return $finallyReturn662;
            }
            }
            panda$core$String* $tmp682 = (($fn681) target659->$class->vtable[0])(target659);
            $tmp680 = $tmp682;
            $tmp679 = $tmp680;
            $finallyReturn677 = $tmp679;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp679));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp680));
            $tmp263 = 16;
            goto $l261;
            $l683:;
            return $finallyReturn677;
        }
        }
        else {
        panda$core$Bit $tmp685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp685.value) {
        {
            panda$core$String** $tmp687 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            label686 = *$tmp687;
            panda$collections$ImmutableArray** $tmp689 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 24));
            statements688 = *$tmp689;
            org$pandalanguage$pandac$ASTNode** $tmp691 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 32));
            test690 = *$tmp691;
            int $tmp694;
            {
                panda$core$MutableString* $tmp698 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp698);
                $tmp697 = $tmp698;
                $tmp696 = $tmp697;
                result695 = $tmp696;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp696));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp697));
                if (((panda$core$Bit) { label686 != NULL }).value) {
                {
                    panda$core$String* $tmp701 = panda$core$String$convert$R$panda$core$String(label686);
                    $tmp700 = $tmp701;
                    panda$core$String* $tmp703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp700, &$s702);
                    $tmp699 = $tmp703;
                    panda$core$MutableString$append$panda$core$String(result695, $tmp699);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp699));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp700));
                }
                }
                panda$core$MutableString$append$panda$core$String(result695, &$s704);
                {
                    int $tmp707;
                    {
                        ITable* $tmp711 = ((panda$collections$Iterable*) statements688)->$class->itable;
                        while ($tmp711->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp711 = $tmp711->next;
                        }
                        $fn713 $tmp712 = $tmp711->methods[0];
                        panda$collections$Iterator* $tmp714 = $tmp712(((panda$collections$Iterable*) statements688));
                        $tmp710 = $tmp714;
                        $tmp709 = $tmp710;
                        Iter$247$17708 = $tmp709;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp709));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp710));
                        $l715:;
                        ITable* $tmp718 = Iter$247$17708->$class->itable;
                        while ($tmp718->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp718 = $tmp718->next;
                        }
                        $fn720 $tmp719 = $tmp718->methods[0];
                        panda$core$Bit $tmp721 = $tmp719(Iter$247$17708);
                        panda$core$Bit $tmp722 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp721);
                        bool $tmp717 = $tmp722.value;
                        if (!$tmp717) goto $l716;
                        {
                            int $tmp725;
                            {
                                ITable* $tmp729 = Iter$247$17708->$class->itable;
                                while ($tmp729->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp729 = $tmp729->next;
                                }
                                $fn731 $tmp730 = $tmp729->methods[1];
                                panda$core$Object* $tmp732 = $tmp730(Iter$247$17708);
                                $tmp728 = $tmp732;
                                $tmp727 = ((org$pandalanguage$pandac$ASTNode*) $tmp728);
                                s726 = $tmp727;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp727));
                                panda$core$Panda$unref$panda$core$Object($tmp728);
                                panda$core$String* $tmp735 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s726), &$s734);
                                $tmp733 = $tmp735;
                                panda$core$MutableString$append$panda$core$String(result695, $tmp733);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp733));
                            }
                            $tmp725 = -1;
                            goto $l723;
                            $l723:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s726));
                            s726 = NULL;
                            switch ($tmp725) {
                                case -1: goto $l736;
                            }
                            $l736:;
                        }
                        goto $l715;
                        $l716:;
                    }
                    $tmp707 = -1;
                    goto $l705;
                    $l705:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$247$17708));
                    Iter$247$17708 = NULL;
                    switch ($tmp707) {
                        case -1: goto $l737;
                    }
                    $l737:;
                }
                panda$core$String* $tmp741 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s740, ((panda$core$Object*) test690));
                $tmp739 = $tmp741;
                panda$core$String* $tmp743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp739, &$s742);
                $tmp738 = $tmp743;
                panda$core$MutableString$append$panda$core$String(result695, $tmp738);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp738));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp739));
                panda$core$String* $tmp747 = panda$core$MutableString$finish$R$panda$core$String(result695);
                $tmp746 = $tmp747;
                $tmp745 = $tmp746;
                $finallyReturn743 = $tmp745;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp745));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp746));
                $tmp694 = 0;
                goto $l692;
                $l748:;
                $tmp263 = 17;
                goto $l261;
                $l749:;
                return $finallyReturn743;
            }
            $l692:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result695));
            result695 = NULL;
            switch ($tmp694) {
                case 0: goto $l748;
            }
            $l751:;
        }
        }
        else {
        panda$core$Bit $tmp752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp752.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp754 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            base753 = *$tmp754;
            panda$core$String** $tmp756 = ((panda$core$String**) ((char*) $match$167_9264->$data + 24));
            field755 = *$tmp756;
            panda$core$String* $tmp764 = (($fn763) base753->$class->vtable[0])(base753);
            $tmp762 = $tmp764;
            panda$core$String* $tmp766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp762, &$s765);
            $tmp761 = $tmp766;
            panda$core$String* $tmp767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp761, field755);
            $tmp760 = $tmp767;
            panda$core$String* $tmp769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp760, &$s768);
            $tmp759 = $tmp769;
            $tmp758 = $tmp759;
            $finallyReturn756 = $tmp758;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp758));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp759));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp760));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp761));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp762));
            $tmp263 = 18;
            goto $l261;
            $l770:;
            return $finallyReturn756;
        }
        }
        else {
        panda$core$Bit $tmp772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp772.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp774 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            dc773 = *$tmp774;
            panda$collections$ImmutableArray** $tmp776 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 24));
            annotations775 = *$tmp776;
            org$pandalanguage$pandac$ASTNode** $tmp778 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 32));
            decl777 = *$tmp778;
            int $tmp781;
            {
                panda$core$MutableString* $tmp785 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp785);
                $tmp784 = $tmp785;
                $tmp783 = $tmp784;
                result782 = $tmp783;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp783));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp784));
                if (((panda$core$Bit) { dc773 != NULL }).value) {
                {
                    panda$core$String* $tmp788 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc773), &$s787);
                    $tmp786 = $tmp788;
                    panda$core$MutableString$append$panda$core$String(result782, $tmp786);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp786));
                }
                }
                {
                    int $tmp791;
                    {
                        ITable* $tmp795 = ((panda$collections$Iterable*) annotations775)->$class->itable;
                        while ($tmp795->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp795 = $tmp795->next;
                        }
                        $fn797 $tmp796 = $tmp795->methods[0];
                        panda$collections$Iterator* $tmp798 = $tmp796(((panda$collections$Iterable*) annotations775));
                        $tmp794 = $tmp798;
                        $tmp793 = $tmp794;
                        Iter$259$17792 = $tmp793;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp793));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp794));
                        $l799:;
                        ITable* $tmp802 = Iter$259$17792->$class->itable;
                        while ($tmp802->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp802 = $tmp802->next;
                        }
                        $fn804 $tmp803 = $tmp802->methods[0];
                        panda$core$Bit $tmp805 = $tmp803(Iter$259$17792);
                        panda$core$Bit $tmp806 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp805);
                        bool $tmp801 = $tmp806.value;
                        if (!$tmp801) goto $l800;
                        {
                            int $tmp809;
                            {
                                ITable* $tmp813 = Iter$259$17792->$class->itable;
                                while ($tmp813->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp813 = $tmp813->next;
                                }
                                $fn815 $tmp814 = $tmp813->methods[1];
                                panda$core$Object* $tmp816 = $tmp814(Iter$259$17792);
                                $tmp812 = $tmp816;
                                $tmp811 = ((org$pandalanguage$pandac$ASTNode*) $tmp812);
                                a810 = $tmp811;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp811));
                                panda$core$Panda$unref$panda$core$Object($tmp812);
                                panda$core$String* $tmp819 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a810), &$s818);
                                $tmp817 = $tmp819;
                                panda$core$MutableString$append$panda$core$String(result782, $tmp817);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp817));
                            }
                            $tmp809 = -1;
                            goto $l807;
                            $l807:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a810));
                            a810 = NULL;
                            switch ($tmp809) {
                                case -1: goto $l820;
                            }
                            $l820:;
                        }
                        goto $l799;
                        $l800:;
                    }
                    $tmp791 = -1;
                    goto $l789;
                    $l789:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$259$17792));
                    Iter$259$17792 = NULL;
                    switch ($tmp791) {
                        case -1: goto $l821;
                    }
                    $l821:;
                }
                panda$core$MutableString$append$panda$core$Object(result782, ((panda$core$Object*) decl777));
                panda$core$String* $tmp825 = panda$core$MutableString$finish$R$panda$core$String(result782);
                $tmp824 = $tmp825;
                $tmp823 = $tmp824;
                $finallyReturn821 = $tmp823;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp823));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp824));
                $tmp781 = 0;
                goto $l779;
                $l826:;
                $tmp263 = 19;
                goto $l261;
                $l827:;
                return $finallyReturn821;
            }
            $l779:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result782));
            result782 = NULL;
            switch ($tmp781) {
                case 0: goto $l826;
            }
            $l829:;
        }
        }
        else {
        panda$core$Bit $tmp830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp830.value) {
        {
            panda$collections$ImmutableArray** $tmp832 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 0));
            entries831 = *$tmp832;
            int $tmp835;
            {
                panda$core$MutableString* $tmp839 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp839);
                $tmp838 = $tmp839;
                $tmp837 = $tmp838;
                result836 = $tmp837;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp837));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp838));
                {
                    int $tmp842;
                    {
                        ITable* $tmp846 = ((panda$collections$Iterable*) entries831)->$class->itable;
                        while ($tmp846->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp846 = $tmp846->next;
                        }
                        $fn848 $tmp847 = $tmp846->methods[0];
                        panda$collections$Iterator* $tmp849 = $tmp847(((panda$collections$Iterable*) entries831));
                        $tmp845 = $tmp849;
                        $tmp844 = $tmp845;
                        Iter$266$17843 = $tmp844;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp844));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp845));
                        $l850:;
                        ITable* $tmp853 = Iter$266$17843->$class->itable;
                        while ($tmp853->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp853 = $tmp853->next;
                        }
                        $fn855 $tmp854 = $tmp853->methods[0];
                        panda$core$Bit $tmp856 = $tmp854(Iter$266$17843);
                        panda$core$Bit $tmp857 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp856);
                        bool $tmp852 = $tmp857.value;
                        if (!$tmp852) goto $l851;
                        {
                            int $tmp860;
                            {
                                ITable* $tmp864 = Iter$266$17843->$class->itable;
                                while ($tmp864->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp864 = $tmp864->next;
                                }
                                $fn866 $tmp865 = $tmp864->methods[1];
                                panda$core$Object* $tmp867 = $tmp865(Iter$266$17843);
                                $tmp863 = $tmp867;
                                $tmp862 = ((org$pandalanguage$pandac$ASTNode*) $tmp863);
                                e861 = $tmp862;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp862));
                                panda$core$Panda$unref$panda$core$Object($tmp863);
                                panda$core$String* $tmp870 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) e861), &$s869);
                                $tmp868 = $tmp870;
                                panda$core$MutableString$append$panda$core$String(result836, $tmp868);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp868));
                            }
                            $tmp860 = -1;
                            goto $l858;
                            $l858:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e861));
                            e861 = NULL;
                            switch ($tmp860) {
                                case -1: goto $l871;
                            }
                            $l871:;
                        }
                        goto $l850;
                        $l851:;
                    }
                    $tmp842 = -1;
                    goto $l840;
                    $l840:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$266$17843));
                    Iter$266$17843 = NULL;
                    switch ($tmp842) {
                        case -1: goto $l872;
                    }
                    $l872:;
                }
                panda$core$String* $tmp876 = panda$core$MutableString$finish$R$panda$core$String(result836);
                $tmp875 = $tmp876;
                $tmp874 = $tmp875;
                $finallyReturn872 = $tmp874;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp874));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp875));
                $tmp835 = 0;
                goto $l833;
                $l877:;
                $tmp263 = 20;
                goto $l261;
                $l878:;
                return $finallyReturn872;
            }
            $l833:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result836));
            result836 = NULL;
            switch ($tmp835) {
                case 0: goto $l877;
            }
            $l880:;
        }
        }
        else {
        panda$core$Bit $tmp881 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp881.value) {
        {
            panda$core$String** $tmp883 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            label882 = *$tmp883;
            org$pandalanguage$pandac$ASTNode** $tmp885 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 24));
            target884 = *$tmp885;
            org$pandalanguage$pandac$ASTNode** $tmp887 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 32));
            list886 = *$tmp887;
            panda$collections$ImmutableArray** $tmp889 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 40));
            statements888 = *$tmp889;
            int $tmp892;
            {
                panda$core$MutableString* $tmp896 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp896);
                $tmp895 = $tmp896;
                $tmp894 = $tmp895;
                result893 = $tmp894;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp894));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp895));
                if (((panda$core$Bit) { label882 != NULL }).value) {
                {
                    panda$core$String* $tmp899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(label882, &$s898);
                    $tmp897 = $tmp899;
                    panda$core$MutableString$append$panda$core$String(result893, $tmp897);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp897));
                }
                }
                panda$core$String* $tmp905 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s904, ((panda$core$Object*) target884));
                $tmp903 = $tmp905;
                panda$core$String* $tmp907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp903, &$s906);
                $tmp902 = $tmp907;
                panda$core$String* $tmp908 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp902, ((panda$core$Object*) list886));
                $tmp901 = $tmp908;
                panda$core$String* $tmp910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp901, &$s909);
                $tmp900 = $tmp910;
                panda$core$MutableString$append$panda$core$String(result893, $tmp900);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp900));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp901));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp902));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp903));
                {
                    int $tmp913;
                    {
                        ITable* $tmp917 = ((panda$collections$Iterable*) statements888)->$class->itable;
                        while ($tmp917->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp917 = $tmp917->next;
                        }
                        $fn919 $tmp918 = $tmp917->methods[0];
                        panda$collections$Iterator* $tmp920 = $tmp918(((panda$collections$Iterable*) statements888));
                        $tmp916 = $tmp920;
                        $tmp915 = $tmp916;
                        Iter$276$17914 = $tmp915;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp915));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp916));
                        $l921:;
                        ITable* $tmp924 = Iter$276$17914->$class->itable;
                        while ($tmp924->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp924 = $tmp924->next;
                        }
                        $fn926 $tmp925 = $tmp924->methods[0];
                        panda$core$Bit $tmp927 = $tmp925(Iter$276$17914);
                        panda$core$Bit $tmp928 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp927);
                        bool $tmp923 = $tmp928.value;
                        if (!$tmp923) goto $l922;
                        {
                            int $tmp931;
                            {
                                ITable* $tmp935 = Iter$276$17914->$class->itable;
                                while ($tmp935->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp935 = $tmp935->next;
                                }
                                $fn937 $tmp936 = $tmp935->methods[1];
                                panda$core$Object* $tmp938 = $tmp936(Iter$276$17914);
                                $tmp934 = $tmp938;
                                $tmp933 = ((org$pandalanguage$pandac$ASTNode*) $tmp934);
                                s932 = $tmp933;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp933));
                                panda$core$Panda$unref$panda$core$Object($tmp934);
                                panda$core$String* $tmp941 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s932), &$s940);
                                $tmp939 = $tmp941;
                                panda$core$MutableString$append$panda$core$String(result893, $tmp939);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp939));
                            }
                            $tmp931 = -1;
                            goto $l929;
                            $l929:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s932));
                            s932 = NULL;
                            switch ($tmp931) {
                                case -1: goto $l942;
                            }
                            $l942:;
                        }
                        goto $l921;
                        $l922:;
                    }
                    $tmp913 = -1;
                    goto $l911;
                    $l911:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$276$17914));
                    Iter$276$17914 = NULL;
                    switch ($tmp913) {
                        case -1: goto $l943;
                    }
                    $l943:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp944, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result893, $tmp944);
                panda$core$String* $tmp948 = panda$core$MutableString$finish$R$panda$core$String(result893);
                $tmp947 = $tmp948;
                $tmp946 = $tmp947;
                $finallyReturn944 = $tmp946;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp946));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp947));
                $tmp892 = 0;
                goto $l890;
                $l949:;
                $tmp263 = 21;
                goto $l261;
                $l950:;
                return $finallyReturn944;
            }
            $l890:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result893));
            result893 = NULL;
            switch ($tmp892) {
                case 0: goto $l949;
            }
            $l952:;
        }
        }
        else {
        panda$core$Bit $tmp953 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp953.value) {
        {
            panda$core$String** $tmp955 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            name954 = *$tmp955;
            panda$collections$ImmutableArray** $tmp957 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 24));
            subtypes956 = *$tmp957;
            panda$core$String* $tmp964 = panda$core$String$convert$R$panda$core$String(name954);
            $tmp963 = $tmp964;
            panda$core$String* $tmp966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp963, &$s965);
            $tmp962 = $tmp966;
            panda$core$String* $tmp968 = panda$collections$ImmutableArray$join$R$panda$core$String(subtypes956);
            $tmp967 = $tmp968;
            panda$core$String* $tmp969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp962, $tmp967);
            $tmp961 = $tmp969;
            panda$core$String* $tmp971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp961, &$s970);
            $tmp960 = $tmp971;
            $tmp959 = $tmp960;
            $finallyReturn957 = $tmp959;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp959));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp960));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp961));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp967));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp962));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp963));
            $tmp263 = 22;
            goto $l261;
            $l972:;
            return $finallyReturn957;
        }
        }
        else {
        panda$core$Bit $tmp974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp974.value) {
        {
            panda$core$String** $tmp976 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            name975 = *$tmp976;
            $tmp978 = name975;
            $finallyReturn976 = $tmp978;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp978));
            $tmp263 = 23;
            goto $l261;
            $l979:;
            return $finallyReturn976;
        }
        }
        else {
        panda$core$Bit $tmp981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp981.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp983 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            test982 = *$tmp983;
            panda$collections$ImmutableArray** $tmp985 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 24));
            ifTrue984 = *$tmp985;
            org$pandalanguage$pandac$ASTNode** $tmp987 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 32));
            ifFalse986 = *$tmp987;
            int $tmp990;
            {
                panda$core$MutableString* $tmp994 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp998 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s997, ((panda$core$Object*) test982));
                $tmp996 = $tmp998;
                panda$core$String* $tmp1000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp996, &$s999);
                $tmp995 = $tmp1000;
                panda$core$MutableString$init$panda$core$String($tmp994, $tmp995);
                $tmp993 = $tmp994;
                $tmp992 = $tmp993;
                result991 = $tmp992;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp992));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp993));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp995));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp996));
                {
                    int $tmp1003;
                    {
                        ITable* $tmp1007 = ((panda$collections$Iterable*) ifTrue984)->$class->itable;
                        while ($tmp1007->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1007 = $tmp1007->next;
                        }
                        $fn1009 $tmp1008 = $tmp1007->methods[0];
                        panda$collections$Iterator* $tmp1010 = $tmp1008(((panda$collections$Iterable*) ifTrue984));
                        $tmp1006 = $tmp1010;
                        $tmp1005 = $tmp1006;
                        Iter$287$171004 = $tmp1005;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1005));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1006));
                        $l1011:;
                        ITable* $tmp1014 = Iter$287$171004->$class->itable;
                        while ($tmp1014->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1014 = $tmp1014->next;
                        }
                        $fn1016 $tmp1015 = $tmp1014->methods[0];
                        panda$core$Bit $tmp1017 = $tmp1015(Iter$287$171004);
                        panda$core$Bit $tmp1018 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1017);
                        bool $tmp1013 = $tmp1018.value;
                        if (!$tmp1013) goto $l1012;
                        {
                            int $tmp1021;
                            {
                                ITable* $tmp1025 = Iter$287$171004->$class->itable;
                                while ($tmp1025->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1025 = $tmp1025->next;
                                }
                                $fn1027 $tmp1026 = $tmp1025->methods[1];
                                panda$core$Object* $tmp1028 = $tmp1026(Iter$287$171004);
                                $tmp1024 = $tmp1028;
                                $tmp1023 = ((org$pandalanguage$pandac$ASTNode*) $tmp1024);
                                s1022 = $tmp1023;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1023));
                                panda$core$Panda$unref$panda$core$Object($tmp1024);
                                panda$core$String* $tmp1031 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1022), &$s1030);
                                $tmp1029 = $tmp1031;
                                panda$core$MutableString$append$panda$core$String(result991, $tmp1029);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1029));
                            }
                            $tmp1021 = -1;
                            goto $l1019;
                            $l1019:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1022));
                            s1022 = NULL;
                            switch ($tmp1021) {
                                case -1: goto $l1032;
                            }
                            $l1032:;
                        }
                        goto $l1011;
                        $l1012:;
                    }
                    $tmp1003 = -1;
                    goto $l1001;
                    $l1001:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$287$171004));
                    Iter$287$171004 = NULL;
                    switch ($tmp1003) {
                        case -1: goto $l1033;
                    }
                    $l1033:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1034, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result991, $tmp1034);
                if (((panda$core$Bit) { ifFalse986 != NULL }).value) {
                {
                    panda$core$String* $tmp1038 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1037, ((panda$core$Object*) ifFalse986));
                    $tmp1036 = $tmp1038;
                    panda$core$String* $tmp1040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1036, &$s1039);
                    $tmp1035 = $tmp1040;
                    panda$core$MutableString$append$panda$core$String(result991, $tmp1035);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1035));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1036));
                }
                }
                panda$core$String* $tmp1044 = panda$core$MutableString$finish$R$panda$core$String(result991);
                $tmp1043 = $tmp1044;
                $tmp1042 = $tmp1043;
                $finallyReturn1040 = $tmp1042;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1042));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1043));
                $tmp990 = 0;
                goto $l988;
                $l1045:;
                $tmp263 = 24;
                goto $l261;
                $l1046:;
                return $finallyReturn1040;
            }
            $l988:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result991));
            result991 = NULL;
            switch ($tmp990) {
                case 0: goto $l1045;
            }
            $l1048:;
        }
        }
        else {
        panda$core$Bit $tmp1049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1049.value) {
        {
            panda$core$UInt64* $tmp1051 = ((panda$core$UInt64*) ((char*) $match$167_9264->$data + 16));
            value1050 = *$tmp1051;
            panda$core$String* $tmp1055 = panda$core$UInt64$convert$R$panda$core$String(value1050);
            $tmp1054 = $tmp1055;
            $tmp1053 = $tmp1054;
            $finallyReturn1051 = $tmp1053;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1053));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1054));
            $tmp263 = 25;
            goto $l261;
            $l1056:;
            return $finallyReturn1051;
        }
        }
        else {
        panda$core$Bit $tmp1058 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1058.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1060 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$167_9264->$data + 0));
            ir1059 = *$tmp1060;
            panda$core$String* $tmp1065 = (($fn1064) ir1059->$class->vtable[0])(ir1059);
            $tmp1063 = $tmp1065;
            $tmp1062 = $tmp1063;
            $finallyReturn1060 = $tmp1062;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1062));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1063));
            $tmp263 = 26;
            goto $l261;
            $l1066:;
            return $finallyReturn1060;
        }
        }
        else {
        panda$core$Bit $tmp1068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1068.value) {
        {
            panda$core$String** $tmp1070 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            label1069 = *$tmp1070;
            panda$collections$ImmutableArray** $tmp1072 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 24));
            statements1071 = *$tmp1072;
            int $tmp1075;
            {
                panda$core$MutableString* $tmp1079 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1079);
                $tmp1078 = $tmp1079;
                $tmp1077 = $tmp1078;
                result1076 = $tmp1077;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1077));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1078));
                if (((panda$core$Bit) { label1069 != NULL }).value) {
                {
                    panda$core$String* $tmp1082 = panda$core$String$convert$R$panda$core$String(label1069);
                    $tmp1081 = $tmp1082;
                    panda$core$String* $tmp1084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1081, &$s1083);
                    $tmp1080 = $tmp1084;
                    panda$core$MutableString$append$panda$core$String(result1076, $tmp1080);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1080));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1081));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1076, &$s1085);
                {
                    int $tmp1088;
                    {
                        ITable* $tmp1092 = ((panda$collections$Iterable*) statements1071)->$class->itable;
                        while ($tmp1092->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1092 = $tmp1092->next;
                        }
                        $fn1094 $tmp1093 = $tmp1092->methods[0];
                        panda$collections$Iterator* $tmp1095 = $tmp1093(((panda$collections$Iterable*) statements1071));
                        $tmp1091 = $tmp1095;
                        $tmp1090 = $tmp1091;
                        Iter$305$171089 = $tmp1090;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1090));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1091));
                        $l1096:;
                        ITable* $tmp1099 = Iter$305$171089->$class->itable;
                        while ($tmp1099->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1099 = $tmp1099->next;
                        }
                        $fn1101 $tmp1100 = $tmp1099->methods[0];
                        panda$core$Bit $tmp1102 = $tmp1100(Iter$305$171089);
                        panda$core$Bit $tmp1103 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1102);
                        bool $tmp1098 = $tmp1103.value;
                        if (!$tmp1098) goto $l1097;
                        {
                            int $tmp1106;
                            {
                                ITable* $tmp1110 = Iter$305$171089->$class->itable;
                                while ($tmp1110->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1110 = $tmp1110->next;
                                }
                                $fn1112 $tmp1111 = $tmp1110->methods[1];
                                panda$core$Object* $tmp1113 = $tmp1111(Iter$305$171089);
                                $tmp1109 = $tmp1113;
                                $tmp1108 = ((org$pandalanguage$pandac$ASTNode*) $tmp1109);
                                s1107 = $tmp1108;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1108));
                                panda$core$Panda$unref$panda$core$Object($tmp1109);
                                panda$core$String* $tmp1116 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1107), &$s1115);
                                $tmp1114 = $tmp1116;
                                panda$core$MutableString$append$panda$core$String(result1076, $tmp1114);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1114));
                            }
                            $tmp1106 = -1;
                            goto $l1104;
                            $l1104:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1107));
                            s1107 = NULL;
                            switch ($tmp1106) {
                                case -1: goto $l1117;
                            }
                            $l1117:;
                        }
                        goto $l1096;
                        $l1097:;
                    }
                    $tmp1088 = -1;
                    goto $l1086;
                    $l1086:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$305$171089));
                    Iter$305$171089 = NULL;
                    switch ($tmp1088) {
                        case -1: goto $l1118;
                    }
                    $l1118:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1119, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1076, $tmp1119);
                panda$core$String* $tmp1123 = panda$core$MutableString$finish$R$panda$core$String(result1076);
                $tmp1122 = $tmp1123;
                $tmp1121 = $tmp1122;
                $finallyReturn1119 = $tmp1121;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1121));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1122));
                $tmp1075 = 0;
                goto $l1073;
                $l1124:;
                $tmp263 = 27;
                goto $l261;
                $l1125:;
                return $finallyReturn1119;
            }
            $l1073:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1076));
            result1076 = NULL;
            switch ($tmp1075) {
                case 0: goto $l1124;
            }
            $l1127:;
        }
        }
        else {
        panda$core$Bit $tmp1128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1128.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1130 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            value1129 = *$tmp1130;
            panda$collections$ImmutableArray** $tmp1132 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 24));
            whens1131 = *$tmp1132;
            panda$collections$ImmutableArray** $tmp1134 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 32));
            other1133 = *$tmp1134;
            int $tmp1137;
            {
                panda$core$MutableString* $tmp1141 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1145 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1144, ((panda$core$Object*) value1129));
                $tmp1143 = $tmp1145;
                panda$core$String* $tmp1147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1143, &$s1146);
                $tmp1142 = $tmp1147;
                panda$core$MutableString$init$panda$core$String($tmp1141, $tmp1142);
                $tmp1140 = $tmp1141;
                $tmp1139 = $tmp1140;
                result1138 = $tmp1139;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1139));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1140));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1142));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1143));
                {
                    int $tmp1150;
                    {
                        ITable* $tmp1154 = ((panda$collections$Iterable*) whens1131)->$class->itable;
                        while ($tmp1154->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1154 = $tmp1154->next;
                        }
                        $fn1156 $tmp1155 = $tmp1154->methods[0];
                        panda$collections$Iterator* $tmp1157 = $tmp1155(((panda$collections$Iterable*) whens1131));
                        $tmp1153 = $tmp1157;
                        $tmp1152 = $tmp1153;
                        Iter$312$171151 = $tmp1152;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1152));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1153));
                        $l1158:;
                        ITable* $tmp1161 = Iter$312$171151->$class->itable;
                        while ($tmp1161->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1161 = $tmp1161->next;
                        }
                        $fn1163 $tmp1162 = $tmp1161->methods[0];
                        panda$core$Bit $tmp1164 = $tmp1162(Iter$312$171151);
                        panda$core$Bit $tmp1165 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1164);
                        bool $tmp1160 = $tmp1165.value;
                        if (!$tmp1160) goto $l1159;
                        {
                            int $tmp1168;
                            {
                                ITable* $tmp1172 = Iter$312$171151->$class->itable;
                                while ($tmp1172->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1172 = $tmp1172->next;
                                }
                                $fn1174 $tmp1173 = $tmp1172->methods[1];
                                panda$core$Object* $tmp1175 = $tmp1173(Iter$312$171151);
                                $tmp1171 = $tmp1175;
                                $tmp1170 = ((org$pandalanguage$pandac$ASTNode*) $tmp1171);
                                w1169 = $tmp1170;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1170));
                                panda$core$Panda$unref$panda$core$Object($tmp1171);
                                panda$core$String* $tmp1178 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w1169), &$s1177);
                                $tmp1176 = $tmp1178;
                                panda$core$MutableString$append$panda$core$String(result1138, $tmp1176);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1176));
                            }
                            $tmp1168 = -1;
                            goto $l1166;
                            $l1166:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1169));
                            w1169 = NULL;
                            switch ($tmp1168) {
                                case -1: goto $l1179;
                            }
                            $l1179:;
                        }
                        goto $l1158;
                        $l1159:;
                    }
                    $tmp1150 = -1;
                    goto $l1148;
                    $l1148:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$312$171151));
                    Iter$312$171151 = NULL;
                    switch ($tmp1150) {
                        case -1: goto $l1180;
                    }
                    $l1180:;
                }
                if (((panda$core$Bit) { other1133 != NULL }).value) {
                {
                    panda$core$String* $tmp1183 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) other1133), &$s1182);
                    $tmp1181 = $tmp1183;
                    panda$core$MutableString$append$panda$core$String(result1138, $tmp1181);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1181));
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1184, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1138, $tmp1184);
                panda$core$String* $tmp1188 = panda$core$MutableString$finish$R$panda$core$String(result1138);
                $tmp1187 = $tmp1188;
                $tmp1186 = $tmp1187;
                $finallyReturn1184 = $tmp1186;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1186));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1187));
                $tmp1137 = 0;
                goto $l1135;
                $l1189:;
                $tmp263 = 28;
                goto $l261;
                $l1190:;
                return $finallyReturn1184;
            }
            $l1135:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1138));
            result1138 = NULL;
            switch ($tmp1137) {
                case 0: goto $l1189;
            }
            $l1192:;
        }
        }
        else {
        panda$core$Bit $tmp1193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1193.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1195 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            dc1194 = *$tmp1195;
            panda$collections$ImmutableArray** $tmp1197 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 24));
            annotations1196 = *$tmp1197;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1199 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$167_9264->$data + 32));
            kind1198 = *$tmp1199;
            panda$core$String** $tmp1201 = ((panda$core$String**) ((char*) $match$167_9264->$data + 40));
            name1200 = *$tmp1201;
            panda$collections$ImmutableArray** $tmp1203 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 48));
            parameters1202 = *$tmp1203;
            org$pandalanguage$pandac$ASTNode** $tmp1205 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 56));
            returnType1204 = *$tmp1205;
            panda$collections$ImmutableArray** $tmp1207 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 64));
            statements1206 = *$tmp1207;
            int $tmp1210;
            {
                panda$core$MutableString* $tmp1214 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1214);
                $tmp1213 = $tmp1214;
                $tmp1212 = $tmp1213;
                result1211 = $tmp1212;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1212));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1213));
                if (((panda$core$Bit) { dc1194 != NULL }).value) {
                {
                    panda$core$String* $tmp1217 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc1194), &$s1216);
                    $tmp1215 = $tmp1217;
                    panda$core$MutableString$append$panda$core$String(result1211, $tmp1215);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1215));
                }
                }
                {
                    int $tmp1220;
                    {
                        ITable* $tmp1224 = ((panda$collections$Iterable*) annotations1196)->$class->itable;
                        while ($tmp1224->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1224 = $tmp1224->next;
                        }
                        $fn1226 $tmp1225 = $tmp1224->methods[0];
                        panda$collections$Iterator* $tmp1227 = $tmp1225(((panda$collections$Iterable*) annotations1196));
                        $tmp1223 = $tmp1227;
                        $tmp1222 = $tmp1223;
                        Iter$325$171221 = $tmp1222;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1222));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1223));
                        $l1228:;
                        ITable* $tmp1231 = Iter$325$171221->$class->itable;
                        while ($tmp1231->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1231 = $tmp1231->next;
                        }
                        $fn1233 $tmp1232 = $tmp1231->methods[0];
                        panda$core$Bit $tmp1234 = $tmp1232(Iter$325$171221);
                        panda$core$Bit $tmp1235 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1234);
                        bool $tmp1230 = $tmp1235.value;
                        if (!$tmp1230) goto $l1229;
                        {
                            int $tmp1238;
                            {
                                ITable* $tmp1242 = Iter$325$171221->$class->itable;
                                while ($tmp1242->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1242 = $tmp1242->next;
                                }
                                $fn1244 $tmp1243 = $tmp1242->methods[1];
                                panda$core$Object* $tmp1245 = $tmp1243(Iter$325$171221);
                                $tmp1241 = $tmp1245;
                                $tmp1240 = ((org$pandalanguage$pandac$ASTNode*) $tmp1241);
                                a1239 = $tmp1240;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1240));
                                panda$core$Panda$unref$panda$core$Object($tmp1241);
                                panda$core$String* $tmp1248 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a1239), &$s1247);
                                $tmp1246 = $tmp1248;
                                panda$core$MutableString$append$panda$core$String(result1211, $tmp1246);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1246));
                            }
                            $tmp1238 = -1;
                            goto $l1236;
                            $l1236:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1239));
                            a1239 = NULL;
                            switch ($tmp1238) {
                                case -1: goto $l1249;
                            }
                            $l1249:;
                        }
                        goto $l1228;
                        $l1229:;
                    }
                    $tmp1220 = -1;
                    goto $l1218;
                    $l1218:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$325$171221));
                    Iter$325$171221 = NULL;
                    switch ($tmp1220) {
                        case -1: goto $l1250;
                    }
                    $l1250:;
                }
                {
                    $match$328_171251 = kind1198;
                    panda$core$Bit $tmp1252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$328_171251.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp1252.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1211, &$s1253);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$328_171251.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp1254.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1211, &$s1255);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$328_171251.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1256.value) {
                    {
                    }
                    }
                    }
                    }
                }
                panda$core$String* $tmp1261 = panda$core$String$convert$R$panda$core$String(name1200);
                $tmp1260 = $tmp1261;
                panda$core$String* $tmp1263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1260, &$s1262);
                $tmp1259 = $tmp1263;
                panda$core$String* $tmp1265 = panda$collections$ImmutableArray$join$R$panda$core$String(parameters1202);
                $tmp1264 = $tmp1265;
                panda$core$String* $tmp1266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1259, $tmp1264);
                $tmp1258 = $tmp1266;
                panda$core$String* $tmp1268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1258, &$s1267);
                $tmp1257 = $tmp1268;
                panda$core$MutableString$append$panda$core$String(result1211, $tmp1257);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1257));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1258));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1264));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1259));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1260));
                if (((panda$core$Bit) { returnType1204 != NULL }).value) {
                {
                    panda$core$String* $tmp1272 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1271, ((panda$core$Object*) returnType1204));
                    $tmp1270 = $tmp1272;
                    panda$core$String* $tmp1274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1270, &$s1273);
                    $tmp1269 = $tmp1274;
                    panda$core$MutableString$append$panda$core$String(result1211, $tmp1269);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1269));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1270));
                }
                }
                if (((panda$core$Bit) { statements1206 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1211, &$s1275);
                    {
                        int $tmp1278;
                        {
                            ITable* $tmp1282 = ((panda$collections$Iterable*) statements1206)->$class->itable;
                            while ($tmp1282->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp1282 = $tmp1282->next;
                            }
                            $fn1284 $tmp1283 = $tmp1282->methods[0];
                            panda$collections$Iterator* $tmp1285 = $tmp1283(((panda$collections$Iterable*) statements1206));
                            $tmp1281 = $tmp1285;
                            $tmp1280 = $tmp1281;
                            Iter$339$211279 = $tmp1280;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1280));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1281));
                            $l1286:;
                            ITable* $tmp1289 = Iter$339$211279->$class->itable;
                            while ($tmp1289->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1289 = $tmp1289->next;
                            }
                            $fn1291 $tmp1290 = $tmp1289->methods[0];
                            panda$core$Bit $tmp1292 = $tmp1290(Iter$339$211279);
                            panda$core$Bit $tmp1293 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1292);
                            bool $tmp1288 = $tmp1293.value;
                            if (!$tmp1288) goto $l1287;
                            {
                                int $tmp1296;
                                {
                                    ITable* $tmp1300 = Iter$339$211279->$class->itable;
                                    while ($tmp1300->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp1300 = $tmp1300->next;
                                    }
                                    $fn1302 $tmp1301 = $tmp1300->methods[1];
                                    panda$core$Object* $tmp1303 = $tmp1301(Iter$339$211279);
                                    $tmp1299 = $tmp1303;
                                    $tmp1298 = ((org$pandalanguage$pandac$ASTNode*) $tmp1299);
                                    s1297 = $tmp1298;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1298));
                                    panda$core$Panda$unref$panda$core$Object($tmp1299);
                                    panda$core$String* $tmp1306 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1297), &$s1305);
                                    $tmp1304 = $tmp1306;
                                    panda$core$MutableString$append$panda$core$String(result1211, $tmp1304);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1304));
                                }
                                $tmp1296 = -1;
                                goto $l1294;
                                $l1294:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1297));
                                s1297 = NULL;
                                switch ($tmp1296) {
                                    case -1: goto $l1307;
                                }
                                $l1307:;
                            }
                            goto $l1286;
                            $l1287:;
                        }
                        $tmp1278 = -1;
                        goto $l1276;
                        $l1276:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$339$211279));
                        Iter$339$211279 = NULL;
                        switch ($tmp1278) {
                            case -1: goto $l1308;
                        }
                        $l1308:;
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp1309, ((panda$core$UInt8) { 125 }));
                    panda$core$MutableString$append$panda$core$Char8(result1211, $tmp1309);
                }
                }
                panda$core$String* $tmp1313 = panda$core$MutableString$finish$R$panda$core$String(result1211);
                $tmp1312 = $tmp1313;
                $tmp1311 = $tmp1312;
                $finallyReturn1309 = $tmp1311;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1311));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1312));
                $tmp1210 = 0;
                goto $l1208;
                $l1314:;
                $tmp263 = 29;
                goto $l261;
                $l1315:;
                return $finallyReturn1309;
            }
            $l1208:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1211));
            result1211 = NULL;
            switch ($tmp1210) {
                case 0: goto $l1314;
            }
            $l1317:;
        }
        }
        else {
        panda$core$Bit $tmp1318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1318.value) {
        {
            $tmp1320 = &$s1321;
            $finallyReturn1318 = $tmp1320;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1320));
            $tmp263 = 30;
            goto $l261;
            $l1322:;
            return $finallyReturn1318;
        }
        }
        else {
        panda$core$Bit $tmp1324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1324.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1326 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            base1325 = *$tmp1326;
            panda$core$String* $tmp1331 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) base1325), &$s1330);
            $tmp1329 = $tmp1331;
            $tmp1328 = $tmp1329;
            $finallyReturn1326 = $tmp1328;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1328));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1329));
            $tmp263 = 31;
            goto $l261;
            $l1332:;
            return $finallyReturn1326;
        }
        }
        else {
        panda$core$Bit $tmp1334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1334.value) {
        {
            panda$core$String** $tmp1336 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            name1335 = *$tmp1336;
            $tmp1338 = name1335;
            $finallyReturn1336 = $tmp1338;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1338));
            $tmp263 = 32;
            goto $l261;
            $l1339:;
            return $finallyReturn1336;
        }
        }
        else {
        panda$core$Bit $tmp1341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1341.value) {
        {
            panda$core$String** $tmp1343 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            name1342 = *$tmp1343;
            org$pandalanguage$pandac$ASTNode** $tmp1345 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 24));
            type1344 = *$tmp1345;
            panda$core$String* $tmp1352 = panda$core$String$convert$R$panda$core$String(name1342);
            $tmp1351 = $tmp1352;
            panda$core$String* $tmp1354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1351, &$s1353);
            $tmp1350 = $tmp1354;
            panda$core$String* $tmp1355 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1350, ((panda$core$Object*) type1344));
            $tmp1349 = $tmp1355;
            panda$core$String* $tmp1357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1349, &$s1356);
            $tmp1348 = $tmp1357;
            $tmp1347 = $tmp1348;
            $finallyReturn1345 = $tmp1347;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1347));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1348));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1349));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1350));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1351));
            $tmp263 = 33;
            goto $l261;
            $l1358:;
            return $finallyReturn1345;
        }
        }
        else {
        panda$core$Bit $tmp1360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1360.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1362 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$167_9264->$data + 16));
            kind1361 = *$tmp1362;
            org$pandalanguage$pandac$ASTNode** $tmp1364 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 24));
            base1363 = *$tmp1364;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1372;
            $tmp1372 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1372->value = kind1361;
            $tmp1371 = ((panda$core$Object*) $tmp1372);
            panda$core$String* $tmp1374 = (($fn1373) $tmp1371->$class->vtable[0])($tmp1371);
            $tmp1370 = $tmp1374;
            panda$core$String* $tmp1376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1370, &$s1375);
            $tmp1369 = $tmp1376;
            panda$core$String* $tmp1377 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1369, ((panda$core$Object*) base1363));
            $tmp1368 = $tmp1377;
            panda$core$String* $tmp1379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1368, &$s1378);
            $tmp1367 = $tmp1379;
            $tmp1366 = $tmp1367;
            $finallyReturn1364 = $tmp1366;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1366));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1367));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1368));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1369));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1370));
            panda$core$Panda$unref$panda$core$Object($tmp1371);
            $tmp263 = 34;
            goto $l261;
            $l1380:;
            return $finallyReturn1364;
        }
        }
        else {
        panda$core$Bit $tmp1382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1382.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1384 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            start1383 = *$tmp1384;
            org$pandalanguage$pandac$ASTNode** $tmp1386 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 24));
            end1385 = *$tmp1386;
            panda$core$Bit* $tmp1388 = ((panda$core$Bit*) ((char*) $match$167_9264->$data + 32));
            inclusive1387 = *$tmp1388;
            org$pandalanguage$pandac$ASTNode** $tmp1390 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 33));
            step1389 = *$tmp1390;
            int $tmp1393;
            {
                panda$core$MutableString* $tmp1397 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1397);
                $tmp1396 = $tmp1397;
                $tmp1395 = $tmp1396;
                result1394 = $tmp1395;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1395));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1396));
                $tmp1398 = start1383;
                panda$core$Bit $tmp1402;
                if (((panda$core$Bit) { $tmp1398 != NULL }).value) goto $l1399; else goto $l1400;
                $l1399:;
                panda$core$Bit $tmp1403 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1398->$rawValue, ((panda$core$Int64) { 25 }));
                $tmp1402 = $tmp1403;
                goto $l1401;
                $l1400:;
                $tmp1402 = ((panda$core$Bit) { true });
                goto $l1401;
                $l1401:;
                if ($tmp1402.value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1394, ((panda$core$Object*) start1383));
                }
                }
                if (inclusive1387.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1394, &$s1404);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result1394, &$s1405);
                }
                }
                $tmp1406 = end1385;
                panda$core$Bit $tmp1410;
                if (((panda$core$Bit) { $tmp1406 != NULL }).value) goto $l1407; else goto $l1408;
                $l1407:;
                panda$core$Bit $tmp1411 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1406->$rawValue, ((panda$core$Int64) { 25 }));
                $tmp1410 = $tmp1411;
                goto $l1409;
                $l1408:;
                $tmp1410 = ((panda$core$Bit) { true });
                goto $l1409;
                $l1409:;
                if ($tmp1410.value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1394, ((panda$core$Object*) end1385));
                }
                }
                $tmp1412 = step1389;
                panda$core$Bit $tmp1416;
                if (((panda$core$Bit) { $tmp1412 != NULL }).value) goto $l1413; else goto $l1414;
                $l1413:;
                panda$core$Bit $tmp1417 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1412->$rawValue, ((panda$core$Int64) { 25 }));
                $tmp1416 = $tmp1417;
                goto $l1415;
                $l1414:;
                $tmp1416 = ((panda$core$Bit) { true });
                goto $l1415;
                $l1415:;
                if ($tmp1416.value) {
                {
                    panda$core$String* $tmp1420 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1419, ((panda$core$Object*) step1389));
                    $tmp1418 = $tmp1420;
                    panda$core$MutableString$append$panda$core$String(result1394, $tmp1418);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1418));
                }
                }
                panda$core$String* $tmp1424 = panda$core$MutableString$finish$R$panda$core$String(result1394);
                $tmp1423 = $tmp1424;
                $tmp1422 = $tmp1423;
                $finallyReturn1420 = $tmp1422;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1422));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1423));
                $tmp1393 = 0;
                goto $l1391;
                $l1425:;
                $tmp263 = 35;
                goto $l261;
                $l1426:;
                return $finallyReturn1420;
            }
            $l1391:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1394));
            result1394 = NULL;
            switch ($tmp1393) {
                case 0: goto $l1425;
            }
            $l1428:;
        }
        }
        else {
        panda$core$Bit $tmp1429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1429.value) {
        {
            panda$core$Real64* $tmp1431 = ((panda$core$Real64*) ((char*) $match$167_9264->$data + 16));
            value1430 = *$tmp1431;
            panda$core$String* $tmp1435 = panda$core$Real64$convert$R$panda$core$String(value1430);
            $tmp1434 = $tmp1435;
            $tmp1433 = $tmp1434;
            $finallyReturn1431 = $tmp1433;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1433));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1434));
            $tmp263 = 36;
            goto $l261;
            $l1436:;
            return $finallyReturn1431;
        }
        }
        else {
        panda$core$Bit $tmp1438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1438.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1440 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 16));
            value1439 = *$tmp1440;
            if (((panda$core$Bit) { value1439 != NULL }).value) {
            {
                panda$core$String* $tmp1446 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1445, ((panda$core$Object*) value1439));
                $tmp1444 = $tmp1446;
                panda$core$String* $tmp1448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1444, &$s1447);
                $tmp1443 = $tmp1448;
                $tmp1442 = $tmp1443;
                $finallyReturn1440 = $tmp1442;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1442));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1443));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1444));
                $tmp263 = 37;
                goto $l261;
                $l1449:;
                return $finallyReturn1440;
            }
            }
            $tmp1452 = &$s1453;
            $finallyReturn1450 = $tmp1452;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1452));
            $tmp263 = 38;
            goto $l261;
            $l1454:;
            return $finallyReturn1450;
        }
        }
        else {
        panda$core$Bit $tmp1456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1456.value) {
        {
            $tmp1458 = &$s1459;
            $finallyReturn1456 = $tmp1458;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1458));
            $tmp263 = 39;
            goto $l261;
            $l1460:;
            return $finallyReturn1456;
        }
        }
        else {
        panda$core$Bit $tmp1462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1462.value) {
        {
            panda$core$String** $tmp1464 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            str1463 = *$tmp1464;
            $tmp1466 = str1463;
            $finallyReturn1464 = $tmp1466;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1466));
            $tmp263 = 40;
            goto $l261;
            $l1467:;
            return $finallyReturn1464;
        }
        }
        else {
        panda$core$Bit $tmp1469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1469.value) {
        {
            $tmp1471 = &$s1472;
            $finallyReturn1469 = $tmp1471;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1471));
            $tmp263 = 41;
            goto $l261;
            $l1473:;
            return $finallyReturn1469;
        }
        }
        else {
        panda$core$Bit $tmp1475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1475.value) {
        {
            panda$core$String** $tmp1477 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            name1476 = *$tmp1477;
            $tmp1479 = name1476;
            $finallyReturn1477 = $tmp1479;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1479));
            $tmp263 = 42;
            goto $l261;
            $l1480:;
            return $finallyReturn1477;
        }
        }
        else {
        panda$core$Bit $tmp1482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1482.value) {
        {
            panda$core$String** $tmp1484 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            name1483 = *$tmp1484;
            org$pandalanguage$pandac$ASTNode** $tmp1486 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 24));
            type1485 = *$tmp1486;
            if (((panda$core$Bit) { type1485 != NULL }).value) {
            {
                panda$core$String* $tmp1493 = panda$core$String$convert$R$panda$core$String(name1483);
                $tmp1492 = $tmp1493;
                panda$core$String* $tmp1495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1492, &$s1494);
                $tmp1491 = $tmp1495;
                panda$core$String* $tmp1496 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1491, ((panda$core$Object*) type1485));
                $tmp1490 = $tmp1496;
                panda$core$String* $tmp1498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1490, &$s1497);
                $tmp1489 = $tmp1498;
                $tmp1488 = $tmp1489;
                $finallyReturn1486 = $tmp1488;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1488));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1489));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1490));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1491));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1492));
                $tmp263 = 43;
                goto $l261;
                $l1499:;
                return $finallyReturn1486;
            }
            }
            $tmp1502 = name1483;
            $finallyReturn1500 = $tmp1502;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1502));
            $tmp263 = 44;
            goto $l261;
            $l1503:;
            return $finallyReturn1500;
        }
        }
        else {
        panda$core$Bit $tmp1505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1505.value) {
        {
            panda$core$String** $tmp1507 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            name1506 = *$tmp1507;
            $tmp1509 = name1506;
            $finallyReturn1507 = $tmp1509;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1509));
            $tmp263 = 45;
            goto $l261;
            $l1510:;
            return $finallyReturn1507;
        }
        }
        else {
        panda$core$Bit $tmp1512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1512.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1514 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$167_9264->$data + 16));
            kind1513 = *$tmp1514;
            panda$collections$ImmutableArray** $tmp1516 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 24));
            decls1515 = *$tmp1516;
            int $tmp1519;
            {
                panda$core$MutableString* $tmp1523 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1523);
                $tmp1522 = $tmp1523;
                $tmp1521 = $tmp1522;
                result1520 = $tmp1521;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1521));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1522));
                {
                    $match$397_171524 = kind1513;
                    panda$core$Bit $tmp1525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$397_171524.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp1525.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1520, &$s1526);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$397_171524.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp1527.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1520, &$s1528);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$397_171524.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1529.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1520, &$s1530);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$397_171524.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp1531.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1520, &$s1532);
                    }
                    }
                    }
                    }
                    }
                }
                panda$core$String* $tmp1534 = panda$collections$ImmutableArray$join$R$panda$core$String(decls1515);
                $tmp1533 = $tmp1534;
                panda$core$MutableString$append$panda$core$String(result1520, $tmp1533);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1533));
                panda$core$String* $tmp1538 = panda$core$MutableString$finish$R$panda$core$String(result1520);
                $tmp1537 = $tmp1538;
                $tmp1536 = $tmp1537;
                $finallyReturn1534 = $tmp1536;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1536));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1537));
                $tmp1519 = 0;
                goto $l1517;
                $l1539:;
                $tmp263 = 46;
                goto $l261;
                $l1540:;
                return $finallyReturn1534;
            }
            $l1517:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1520));
            result1520 = NULL;
            switch ($tmp1519) {
                case 0: goto $l1539;
            }
            $l1542:;
        }
        }
        else {
        panda$core$Bit $tmp1543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1543.value) {
        {
            panda$collections$ImmutableArray** $tmp1545 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 16));
            tests1544 = *$tmp1545;
            panda$collections$ImmutableArray** $tmp1547 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 24));
            statements1546 = *$tmp1547;
            int $tmp1550;
            {
                panda$core$MutableString* $tmp1554 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1554, &$s1555);
                $tmp1553 = $tmp1554;
                $tmp1552 = $tmp1553;
                result1551 = $tmp1552;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1552));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1553));
                $tmp1557 = &$s1558;
                separator1556 = $tmp1557;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1557));
                {
                    int $tmp1561;
                    {
                        ITable* $tmp1565 = ((panda$collections$Iterable*) tests1544)->$class->itable;
                        while ($tmp1565->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1565 = $tmp1565->next;
                        }
                        $fn1567 $tmp1566 = $tmp1565->methods[0];
                        panda$collections$Iterator* $tmp1568 = $tmp1566(((panda$collections$Iterable*) tests1544));
                        $tmp1564 = $tmp1568;
                        $tmp1563 = $tmp1564;
                        Iter$408$171562 = $tmp1563;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1563));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1564));
                        $l1569:;
                        ITable* $tmp1572 = Iter$408$171562->$class->itable;
                        while ($tmp1572->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1572 = $tmp1572->next;
                        }
                        $fn1574 $tmp1573 = $tmp1572->methods[0];
                        panda$core$Bit $tmp1575 = $tmp1573(Iter$408$171562);
                        panda$core$Bit $tmp1576 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1575);
                        bool $tmp1571 = $tmp1576.value;
                        if (!$tmp1571) goto $l1570;
                        {
                            int $tmp1579;
                            {
                                ITable* $tmp1583 = Iter$408$171562->$class->itable;
                                while ($tmp1583->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1583 = $tmp1583->next;
                                }
                                $fn1585 $tmp1584 = $tmp1583->methods[1];
                                panda$core$Object* $tmp1586 = $tmp1584(Iter$408$171562);
                                $tmp1582 = $tmp1586;
                                $tmp1581 = ((org$pandalanguage$pandac$ASTNode*) $tmp1582);
                                t1580 = $tmp1581;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1581));
                                panda$core$Panda$unref$panda$core$Object($tmp1582);
                                panda$core$String* $tmp1591 = panda$core$String$convert$R$panda$core$String(separator1556);
                                $tmp1590 = $tmp1591;
                                panda$core$String* $tmp1593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1590, &$s1592);
                                $tmp1589 = $tmp1593;
                                panda$core$String* $tmp1594 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1589, ((panda$core$Object*) t1580));
                                $tmp1588 = $tmp1594;
                                panda$core$String* $tmp1596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1588, &$s1595);
                                $tmp1587 = $tmp1596;
                                panda$core$MutableString$append$panda$core$String(result1551, $tmp1587);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1587));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1588));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1589));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1590));
                            }
                            $tmp1579 = -1;
                            goto $l1577;
                            $l1577:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1580));
                            t1580 = NULL;
                            switch ($tmp1579) {
                                case -1: goto $l1597;
                            }
                            $l1597:;
                        }
                        goto $l1569;
                        $l1570:;
                    }
                    $tmp1561 = -1;
                    goto $l1559;
                    $l1559:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$408$171562));
                    Iter$408$171562 = NULL;
                    switch ($tmp1561) {
                        case -1: goto $l1598;
                    }
                    $l1598:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1599, ((panda$core$UInt8) { 58 }));
                panda$core$MutableString$append$panda$core$Char8(result1551, $tmp1599);
                {
                    int $tmp1602;
                    {
                        ITable* $tmp1606 = ((panda$collections$Iterable*) statements1546)->$class->itable;
                        while ($tmp1606->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1606 = $tmp1606->next;
                        }
                        $fn1608 $tmp1607 = $tmp1606->methods[0];
                        panda$collections$Iterator* $tmp1609 = $tmp1607(((panda$collections$Iterable*) statements1546));
                        $tmp1605 = $tmp1609;
                        $tmp1604 = $tmp1605;
                        Iter$412$171603 = $tmp1604;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1604));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1605));
                        $l1610:;
                        ITable* $tmp1613 = Iter$412$171603->$class->itable;
                        while ($tmp1613->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1613 = $tmp1613->next;
                        }
                        $fn1615 $tmp1614 = $tmp1613->methods[0];
                        panda$core$Bit $tmp1616 = $tmp1614(Iter$412$171603);
                        panda$core$Bit $tmp1617 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1616);
                        bool $tmp1612 = $tmp1617.value;
                        if (!$tmp1612) goto $l1611;
                        {
                            int $tmp1620;
                            {
                                ITable* $tmp1624 = Iter$412$171603->$class->itable;
                                while ($tmp1624->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1624 = $tmp1624->next;
                                }
                                $fn1626 $tmp1625 = $tmp1624->methods[1];
                                panda$core$Object* $tmp1627 = $tmp1625(Iter$412$171603);
                                $tmp1623 = $tmp1627;
                                $tmp1622 = ((org$pandalanguage$pandac$ASTNode*) $tmp1623);
                                s1621 = $tmp1622;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1622));
                                panda$core$Panda$unref$panda$core$Object($tmp1623);
                                panda$core$String* $tmp1630 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1629, ((panda$core$Object*) s1621));
                                $tmp1628 = $tmp1630;
                                panda$core$MutableString$append$panda$core$String(result1551, $tmp1628);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1628));
                            }
                            $tmp1620 = -1;
                            goto $l1618;
                            $l1618:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1621));
                            s1621 = NULL;
                            switch ($tmp1620) {
                                case -1: goto $l1631;
                            }
                            $l1631:;
                        }
                        goto $l1610;
                        $l1611:;
                    }
                    $tmp1602 = -1;
                    goto $l1600;
                    $l1600:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$412$171603));
                    Iter$412$171603 = NULL;
                    switch ($tmp1602) {
                        case -1: goto $l1632;
                    }
                    $l1632:;
                }
                panda$core$String* $tmp1636 = panda$core$MutableString$finish$R$panda$core$String(result1551);
                $tmp1635 = $tmp1636;
                $tmp1634 = $tmp1635;
                $finallyReturn1632 = $tmp1634;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1634));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1635));
                $tmp1550 = 0;
                goto $l1548;
                $l1637:;
                $tmp263 = 47;
                goto $l261;
                $l1638:;
                return $finallyReturn1632;
            }
            $l1548:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1551));
            result1551 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1556));
            separator1556 = NULL;
            switch ($tmp1550) {
                case 0: goto $l1637;
            }
            $l1640:;
        }
        }
        else {
        panda$core$Bit $tmp1641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9264->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1641.value) {
        {
            panda$core$String** $tmp1643 = ((panda$core$String**) ((char*) $match$167_9264->$data + 16));
            label1642 = *$tmp1643;
            org$pandalanguage$pandac$ASTNode** $tmp1645 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9264->$data + 24));
            test1644 = *$tmp1645;
            panda$collections$ImmutableArray** $tmp1647 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9264->$data + 32));
            statements1646 = *$tmp1647;
            int $tmp1650;
            {
                panda$core$MutableString* $tmp1654 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1654);
                $tmp1653 = $tmp1654;
                $tmp1652 = $tmp1653;
                result1651 = $tmp1652;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1652));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1653));
                if (((panda$core$Bit) { label1642 != NULL }).value) {
                {
                    panda$core$String* $tmp1657 = panda$core$String$convert$R$panda$core$String(label1642);
                    $tmp1656 = $tmp1657;
                    panda$core$String* $tmp1659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1656, &$s1658);
                    $tmp1655 = $tmp1659;
                    panda$core$MutableString$append$panda$core$String(result1651, $tmp1655);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1655));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1656));
                }
                }
                panda$core$String* $tmp1663 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1662, ((panda$core$Object*) test1644));
                $tmp1661 = $tmp1663;
                panda$core$String* $tmp1665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1661, &$s1664);
                $tmp1660 = $tmp1665;
                panda$core$MutableString$append$panda$core$String(result1651, $tmp1660);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1660));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1661));
                {
                    int $tmp1668;
                    {
                        ITable* $tmp1672 = ((panda$collections$Iterable*) statements1646)->$class->itable;
                        while ($tmp1672->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1672 = $tmp1672->next;
                        }
                        $fn1674 $tmp1673 = $tmp1672->methods[0];
                        panda$collections$Iterator* $tmp1675 = $tmp1673(((panda$collections$Iterable*) statements1646));
                        $tmp1671 = $tmp1675;
                        $tmp1670 = $tmp1671;
                        Iter$422$171669 = $tmp1670;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1670));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1671));
                        $l1676:;
                        ITable* $tmp1679 = Iter$422$171669->$class->itable;
                        while ($tmp1679->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1679 = $tmp1679->next;
                        }
                        $fn1681 $tmp1680 = $tmp1679->methods[0];
                        panda$core$Bit $tmp1682 = $tmp1680(Iter$422$171669);
                        panda$core$Bit $tmp1683 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1682);
                        bool $tmp1678 = $tmp1683.value;
                        if (!$tmp1678) goto $l1677;
                        {
                            int $tmp1686;
                            {
                                ITable* $tmp1690 = Iter$422$171669->$class->itable;
                                while ($tmp1690->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1690 = $tmp1690->next;
                                }
                                $fn1692 $tmp1691 = $tmp1690->methods[1];
                                panda$core$Object* $tmp1693 = $tmp1691(Iter$422$171669);
                                $tmp1689 = $tmp1693;
                                $tmp1688 = ((org$pandalanguage$pandac$ASTNode*) $tmp1689);
                                s1687 = $tmp1688;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1688));
                                panda$core$Panda$unref$panda$core$Object($tmp1689);
                                panda$core$String* $tmp1696 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1687), &$s1695);
                                $tmp1694 = $tmp1696;
                                panda$core$MutableString$append$panda$core$String(result1651, $tmp1694);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1694));
                            }
                            $tmp1686 = -1;
                            goto $l1684;
                            $l1684:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1687));
                            s1687 = NULL;
                            switch ($tmp1686) {
                                case -1: goto $l1697;
                            }
                            $l1697:;
                        }
                        goto $l1676;
                        $l1677:;
                    }
                    $tmp1668 = -1;
                    goto $l1666;
                    $l1666:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$422$171669));
                    Iter$422$171669 = NULL;
                    switch ($tmp1668) {
                        case -1: goto $l1698;
                    }
                    $l1698:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1699, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1651, $tmp1699);
                panda$core$String* $tmp1703 = panda$core$MutableString$finish$R$panda$core$String(result1651);
                $tmp1702 = $tmp1703;
                $tmp1701 = $tmp1702;
                $finallyReturn1699 = $tmp1701;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1701));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1702));
                $tmp1650 = 0;
                goto $l1648;
                $l1704:;
                $tmp263 = 48;
                goto $l261;
                $l1705:;
                return $finallyReturn1699;
            }
            $l1648:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1651));
            result1651 = NULL;
            switch ($tmp1650) {
                case 0: goto $l1704;
            }
            $l1707:;
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
        case 2: goto $l302;
        case 1: goto $l287;
        case 14: goto $l656;
        case -1: goto $l1708;
        case 43: goto $l1499;
        case 15: goto $l676;
        case 48: goto $l1705;
        case 20: goto $l878;
        case 8: goto $l426;
        case 44: goto $l1503;
        case 23: goto $l979;
        case 3: goto $l317;
        case 9: goto $l448;
        case 0: goto $l283;
        case 11: goto $l514;
        case 10: goto $l484;
        case 21: goto $l950;
        case 7: goto $l421;
        case 18: goto $l770;
        case 6: goto $l407;
        case 42: goto $l1480;
        case 27: goto $l1125;
        case 22: goto $l972;
        case 5: goto $l355;
        case 36: goto $l1436;
        case 46: goto $l1540;
        case 35: goto $l1426;
        case 34: goto $l1380;
        case 41: goto $l1473;
        case 31: goto $l1332;
        case 40: goto $l1467;
        case 24: goto $l1046;
        case 33: goto $l1358;
        case 13: goto $l651;
        case 17: goto $l749;
        case 12: goto $l637;
        case 32: goto $l1339;
        case 47: goto $l1638;
        case 26: goto $l1066;
        case 39: goto $l1460;
        case 38: goto $l1454;
        case 45: goto $l1510;
        case 29: goto $l1315;
        case 25: goto $l1056;
        case 4: goto $l346;
        case 28: goto $l1190;
        case 30: goto $l1322;
        case 19: goto $l827;
        case 37: goto $l1449;
        case 16: goto $l683;
    }
    $l1708:;
}
void org$pandalanguage$pandac$ASTNode$cleanup(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$5_11715 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1716;
    org$pandalanguage$pandac$Position _f01718;
    panda$core$String* _f11720 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21722 = NULL;
    org$pandalanguage$pandac$Position _f01725;
    org$pandalanguage$pandac$ASTNode* _f11727 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21729 = NULL;
    org$pandalanguage$pandac$Position _f01732;
    org$pandalanguage$pandac$ASTNode* _f11734 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f21736;
    org$pandalanguage$pandac$ASTNode* _f31738 = NULL;
    org$pandalanguage$pandac$Position _f01741;
    panda$core$Bit _f11743;
    org$pandalanguage$pandac$Position _f01746;
    panda$collections$ImmutableArray* _f11748 = NULL;
    org$pandalanguage$pandac$Position _f01751;
    panda$core$String* _f11753 = NULL;
    org$pandalanguage$pandac$Position _f01756;
    org$pandalanguage$pandac$ASTNode* _f11758 = NULL;
    panda$collections$ImmutableArray* _f21760 = NULL;
    org$pandalanguage$pandac$Position _f01763;
    org$pandalanguage$pandac$ASTNode* _f11765 = NULL;
    panda$core$String* _f21767 = NULL;
    panda$collections$ImmutableArray* _f31769 = NULL;
    org$pandalanguage$pandac$Position _f01772;
    org$pandalanguage$pandac$ASTNode* _f11774 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f21776 = NULL;
    panda$core$Int64 _f31778;
    org$pandalanguage$pandac$Position _f01781;
    org$pandalanguage$pandac$ASTNode* _f11783 = NULL;
    panda$collections$ImmutableArray* _f21785 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind _f31787;
    panda$core$String* _f41789 = NULL;
    panda$collections$ImmutableArray* _f51791 = NULL;
    panda$collections$ImmutableArray* _f61793 = NULL;
    panda$collections$ImmutableArray* _f71795 = NULL;
    org$pandalanguage$pandac$Position _f01798;
    panda$core$String* _f11800 = NULL;
    org$pandalanguage$pandac$Position _f01803;
    org$pandalanguage$pandac$ASTNode* _f11805 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21807 = NULL;
    org$pandalanguage$pandac$Position _f01810;
    panda$core$String* _f11812 = NULL;
    panda$collections$ImmutableArray* _f21814 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31816 = NULL;
    org$pandalanguage$pandac$Position _f01819;
    org$pandalanguage$pandac$ASTNode* _f11821 = NULL;
    panda$core$String* _f21823 = NULL;
    org$pandalanguage$pandac$Position _f01826;
    org$pandalanguage$pandac$ASTNode* _f11828 = NULL;
    panda$collections$ImmutableArray* _f21830 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31832 = NULL;
    panda$collections$ImmutableArray* _f01835 = NULL;
    org$pandalanguage$pandac$Position _f01838;
    panda$core$String* _f11840 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21842 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31844 = NULL;
    panda$collections$ImmutableArray* _f41846 = NULL;
    org$pandalanguage$pandac$Position _f01849;
    panda$core$String* _f11851 = NULL;
    panda$collections$ImmutableArray* _f21853 = NULL;
    org$pandalanguage$pandac$Position _f01856;
    panda$core$String* _f11858 = NULL;
    org$pandalanguage$pandac$Position _f01861;
    org$pandalanguage$pandac$ASTNode* _f11863 = NULL;
    panda$collections$ImmutableArray* _f21865 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31867 = NULL;
    org$pandalanguage$pandac$Position _f01870;
    panda$core$UInt64 _f11872;
    org$pandalanguage$pandac$IRNode* _f01875 = NULL;
    org$pandalanguage$pandac$Position _f01878;
    panda$core$String* _f11880 = NULL;
    panda$collections$ImmutableArray* _f21882 = NULL;
    org$pandalanguage$pandac$Position _f01885;
    org$pandalanguage$pandac$ASTNode* _f11887 = NULL;
    panda$collections$ImmutableArray* _f21889 = NULL;
    panda$collections$ImmutableArray* _f31891 = NULL;
    org$pandalanguage$pandac$Position _f01894;
    org$pandalanguage$pandac$ASTNode* _f11896 = NULL;
    panda$collections$ImmutableArray* _f21898 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind _f31900;
    panda$core$String* _f41902 = NULL;
    panda$collections$ImmutableArray* _f51904 = NULL;
    org$pandalanguage$pandac$ASTNode* _f61906 = NULL;
    panda$collections$ImmutableArray* _f71908 = NULL;
    org$pandalanguage$pandac$Position _f01911;
    org$pandalanguage$pandac$Position _f01914;
    org$pandalanguage$pandac$ASTNode* _f11916 = NULL;
    org$pandalanguage$pandac$Position _f01919;
    panda$core$String* _f11921 = NULL;
    org$pandalanguage$pandac$Position _f01924;
    panda$core$String* _f11926 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21928 = NULL;
    org$pandalanguage$pandac$Position _f01931;
    org$pandalanguage$pandac$parser$Token$Kind _f11933;
    org$pandalanguage$pandac$ASTNode* _f21935 = NULL;
    org$pandalanguage$pandac$Position _f01938;
    org$pandalanguage$pandac$ASTNode* _f11940 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21942 = NULL;
    panda$core$Bit _f31944;
    org$pandalanguage$pandac$ASTNode* _f41946 = NULL;
    org$pandalanguage$pandac$Position _f01949;
    panda$core$Real64 _f11951;
    org$pandalanguage$pandac$Position _f01954;
    org$pandalanguage$pandac$ASTNode* _f11956 = NULL;
    org$pandalanguage$pandac$Position _f01959;
    org$pandalanguage$pandac$Position _f01962;
    panda$core$String* _f11964 = NULL;
    org$pandalanguage$pandac$Position _f01967;
    org$pandalanguage$pandac$Position _f01970;
    panda$core$String* _f11972 = NULL;
    org$pandalanguage$pandac$Position _f01975;
    panda$core$String* _f11977 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21979 = NULL;
    org$pandalanguage$pandac$Position _f01982;
    panda$core$String* _f11984 = NULL;
    org$pandalanguage$pandac$Position _f01987;
    org$pandalanguage$pandac$Variable$Kind _f11989;
    panda$collections$ImmutableArray* _f21991 = NULL;
    org$pandalanguage$pandac$Position _f01994;
    panda$collections$ImmutableArray* _f11996 = NULL;
    panda$collections$ImmutableArray* _f21998 = NULL;
    org$pandalanguage$pandac$Position _f02001;
    panda$core$String* _f12003 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22005 = NULL;
    panda$collections$ImmutableArray* _f32007 = NULL;
    int $tmp1711;
    {
        int $tmp1714;
        {
            $tmp1716 = self;
            $match$5_11715 = $tmp1716;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1716));
            panda$core$Bit $tmp1717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp1717.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1719 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01718 = *$tmp1719;
                panda$core$String** $tmp1721 = ((panda$core$String**) ((char*) $match$5_11715->$data + 16));
                _f11720 = *$tmp1721;
                org$pandalanguage$pandac$ASTNode** $tmp1723 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 24));
                _f21722 = *$tmp1723;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11720));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21722));
            }
            }
            else {
            panda$core$Bit $tmp1724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp1724.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1726 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01725 = *$tmp1726;
                org$pandalanguage$pandac$ASTNode** $tmp1728 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 16));
                _f11727 = *$tmp1728;
                org$pandalanguage$pandac$ASTNode** $tmp1730 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 24));
                _f21729 = *$tmp1730;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11727));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21729));
            }
            }
            else {
            panda$core$Bit $tmp1731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1731.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1733 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01732 = *$tmp1733;
                org$pandalanguage$pandac$ASTNode** $tmp1735 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 16));
                _f11734 = *$tmp1735;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp1737 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11715->$data + 24));
                _f21736 = *$tmp1737;
                org$pandalanguage$pandac$ASTNode** $tmp1739 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 32));
                _f31738 = *$tmp1739;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11734));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31738));
            }
            }
            else {
            panda$core$Bit $tmp1740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp1740.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1742 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01741 = *$tmp1742;
                panda$core$Bit* $tmp1744 = ((panda$core$Bit*) ((char*) $match$5_11715->$data + 16));
                _f11743 = *$tmp1744;
            }
            }
            else {
            panda$core$Bit $tmp1745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp1745.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1747 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01746 = *$tmp1747;
                panda$collections$ImmutableArray** $tmp1749 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11715->$data + 16));
                _f11748 = *$tmp1749;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11748));
            }
            }
            else {
            panda$core$Bit $tmp1750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp1750.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1752 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01751 = *$tmp1752;
                panda$core$String** $tmp1754 = ((panda$core$String**) ((char*) $match$5_11715->$data + 16));
                _f11753 = *$tmp1754;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11753));
            }
            }
            else {
            panda$core$Bit $tmp1755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp1755.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1757 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01756 = *$tmp1757;
                org$pandalanguage$pandac$ASTNode** $tmp1759 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 16));
                _f11758 = *$tmp1759;
                panda$collections$ImmutableArray** $tmp1761 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11715->$data + 24));
                _f21760 = *$tmp1761;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11758));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21760));
            }
            }
            else {
            panda$core$Bit $tmp1762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 7 }));
            if ($tmp1762.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1764 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01763 = *$tmp1764;
                org$pandalanguage$pandac$ASTNode** $tmp1766 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 16));
                _f11765 = *$tmp1766;
                panda$core$String** $tmp1768 = ((panda$core$String**) ((char*) $match$5_11715->$data + 24));
                _f21767 = *$tmp1768;
                panda$collections$ImmutableArray** $tmp1770 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11715->$data + 32));
                _f31769 = *$tmp1770;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11765));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21767));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31769));
            }
            }
            else {
            panda$core$Bit $tmp1771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp1771.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1773 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01772 = *$tmp1773;
                org$pandalanguage$pandac$ASTNode** $tmp1775 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 16));
                _f11774 = *$tmp1775;
                org$pandalanguage$pandac$ChoiceEntry** $tmp1777 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_11715->$data + 24));
                _f21776 = *$tmp1777;
                panda$core$Int64* $tmp1779 = ((panda$core$Int64*) ((char*) $match$5_11715->$data + 32));
                _f31778 = *$tmp1779;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11774));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21776));
            }
            }
            else {
            panda$core$Bit $tmp1780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp1780.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1782 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01781 = *$tmp1782;
                org$pandalanguage$pandac$ASTNode** $tmp1784 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 16));
                _f11783 = *$tmp1784;
                panda$collections$ImmutableArray** $tmp1786 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11715->$data + 24));
                _f21785 = *$tmp1786;
                org$pandalanguage$pandac$ClassDecl$Kind* $tmp1788 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$5_11715->$data + 32));
                _f31787 = *$tmp1788;
                panda$core$String** $tmp1790 = ((panda$core$String**) ((char*) $match$5_11715->$data + 40));
                _f41789 = *$tmp1790;
                panda$collections$ImmutableArray** $tmp1792 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11715->$data + 48));
                _f51791 = *$tmp1792;
                panda$collections$ImmutableArray** $tmp1794 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11715->$data + 56));
                _f61793 = *$tmp1794;
                panda$collections$ImmutableArray** $tmp1796 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11715->$data + 64));
                _f71795 = *$tmp1796;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11783));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21785));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41789));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f51791));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f61793));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f71795));
            }
            }
            else {
            panda$core$Bit $tmp1797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 10 }));
            if ($tmp1797.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1799 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01798 = *$tmp1799;
                panda$core$String** $tmp1801 = ((panda$core$String**) ((char*) $match$5_11715->$data + 16));
                _f11800 = *$tmp1801;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11800));
            }
            }
            else {
            panda$core$Bit $tmp1802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp1802.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1804 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01803 = *$tmp1804;
                org$pandalanguage$pandac$ASTNode** $tmp1806 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 16));
                _f11805 = *$tmp1806;
                org$pandalanguage$pandac$ASTNode** $tmp1808 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 24));
                _f21807 = *$tmp1808;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11805));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21807));
            }
            }
            else {
            panda$core$Bit $tmp1809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp1809.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1811 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01810 = *$tmp1811;
                panda$core$String** $tmp1813 = ((panda$core$String**) ((char*) $match$5_11715->$data + 16));
                _f11812 = *$tmp1813;
                panda$collections$ImmutableArray** $tmp1815 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11715->$data + 24));
                _f21814 = *$tmp1815;
                org$pandalanguage$pandac$ASTNode** $tmp1817 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 32));
                _f31816 = *$tmp1817;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11812));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21814));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31816));
            }
            }
            else {
            panda$core$Bit $tmp1818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp1818.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1820 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01819 = *$tmp1820;
                org$pandalanguage$pandac$ASTNode** $tmp1822 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 16));
                _f11821 = *$tmp1822;
                panda$core$String** $tmp1824 = ((panda$core$String**) ((char*) $match$5_11715->$data + 24));
                _f21823 = *$tmp1824;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11821));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21823));
            }
            }
            else {
            panda$core$Bit $tmp1825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp1825.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1827 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01826 = *$tmp1827;
                org$pandalanguage$pandac$ASTNode** $tmp1829 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 16));
                _f11828 = *$tmp1829;
                panda$collections$ImmutableArray** $tmp1831 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11715->$data + 24));
                _f21830 = *$tmp1831;
                org$pandalanguage$pandac$ASTNode** $tmp1833 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 32));
                _f31832 = *$tmp1833;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11828));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21830));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31832));
            }
            }
            else {
            panda$core$Bit $tmp1834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp1834.value) {
            {
                panda$collections$ImmutableArray** $tmp1836 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11715->$data + 0));
                _f01835 = *$tmp1836;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01835));
            }
            }
            else {
            panda$core$Bit $tmp1837 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 16 }));
            if ($tmp1837.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1839 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01838 = *$tmp1839;
                panda$core$String** $tmp1841 = ((panda$core$String**) ((char*) $match$5_11715->$data + 16));
                _f11840 = *$tmp1841;
                org$pandalanguage$pandac$ASTNode** $tmp1843 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 24));
                _f21842 = *$tmp1843;
                org$pandalanguage$pandac$ASTNode** $tmp1845 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 32));
                _f31844 = *$tmp1845;
                panda$collections$ImmutableArray** $tmp1847 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11715->$data + 40));
                _f41846 = *$tmp1847;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11840));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21842));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31844));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41846));
            }
            }
            else {
            panda$core$Bit $tmp1848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp1848.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1850 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01849 = *$tmp1850;
                panda$core$String** $tmp1852 = ((panda$core$String**) ((char*) $match$5_11715->$data + 16));
                _f11851 = *$tmp1852;
                panda$collections$ImmutableArray** $tmp1854 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11715->$data + 24));
                _f21853 = *$tmp1854;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11851));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21853));
            }
            }
            else {
            panda$core$Bit $tmp1855 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp1855.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1857 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01856 = *$tmp1857;
                panda$core$String** $tmp1859 = ((panda$core$String**) ((char*) $match$5_11715->$data + 16));
                _f11858 = *$tmp1859;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11858));
            }
            }
            else {
            panda$core$Bit $tmp1860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp1860.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1862 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01861 = *$tmp1862;
                org$pandalanguage$pandac$ASTNode** $tmp1864 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 16));
                _f11863 = *$tmp1864;
                panda$collections$ImmutableArray** $tmp1866 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11715->$data + 24));
                _f21865 = *$tmp1866;
                org$pandalanguage$pandac$ASTNode** $tmp1868 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 32));
                _f31867 = *$tmp1868;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11863));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21865));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31867));
            }
            }
            else {
            panda$core$Bit $tmp1869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 20 }));
            if ($tmp1869.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1871 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01870 = *$tmp1871;
                panda$core$UInt64* $tmp1873 = ((panda$core$UInt64*) ((char*) $match$5_11715->$data + 16));
                _f11872 = *$tmp1873;
            }
            }
            else {
            panda$core$Bit $tmp1874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 21 }));
            if ($tmp1874.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp1876 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11715->$data + 0));
                _f01875 = *$tmp1876;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01875));
            }
            }
            else {
            panda$core$Bit $tmp1877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp1877.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1879 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01878 = *$tmp1879;
                panda$core$String** $tmp1881 = ((panda$core$String**) ((char*) $match$5_11715->$data + 16));
                _f11880 = *$tmp1881;
                panda$collections$ImmutableArray** $tmp1883 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11715->$data + 24));
                _f21882 = *$tmp1883;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11880));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21882));
            }
            }
            else {
            panda$core$Bit $tmp1884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp1884.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1886 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01885 = *$tmp1886;
                org$pandalanguage$pandac$ASTNode** $tmp1888 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 16));
                _f11887 = *$tmp1888;
                panda$collections$ImmutableArray** $tmp1890 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11715->$data + 24));
                _f21889 = *$tmp1890;
                panda$collections$ImmutableArray** $tmp1892 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11715->$data + 32));
                _f31891 = *$tmp1892;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11887));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21889));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31891));
            }
            }
            else {
            panda$core$Bit $tmp1893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp1893.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1895 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01894 = *$tmp1895;
                org$pandalanguage$pandac$ASTNode** $tmp1897 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 16));
                _f11896 = *$tmp1897;
                panda$collections$ImmutableArray** $tmp1899 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11715->$data + 24));
                _f21898 = *$tmp1899;
                org$pandalanguage$pandac$MethodDecl$Kind* $tmp1901 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$5_11715->$data + 32));
                _f31900 = *$tmp1901;
                panda$core$String** $tmp1903 = ((panda$core$String**) ((char*) $match$5_11715->$data + 40));
                _f41902 = *$tmp1903;
                panda$collections$ImmutableArray** $tmp1905 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11715->$data + 48));
                _f51904 = *$tmp1905;
                org$pandalanguage$pandac$ASTNode** $tmp1907 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 56));
                _f61906 = *$tmp1907;
                panda$collections$ImmutableArray** $tmp1909 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11715->$data + 64));
                _f71908 = *$tmp1909;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11896));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21898));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41902));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f51904));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f61906));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f71908));
            }
            }
            else {
            panda$core$Bit $tmp1910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp1910.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1912 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01911 = *$tmp1912;
            }
            }
            else {
            panda$core$Bit $tmp1913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp1913.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1915 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01914 = *$tmp1915;
                org$pandalanguage$pandac$ASTNode** $tmp1917 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 16));
                _f11916 = *$tmp1917;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11916));
            }
            }
            else {
            panda$core$Bit $tmp1918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 27 }));
            if ($tmp1918.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1920 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01919 = *$tmp1920;
                panda$core$String** $tmp1922 = ((panda$core$String**) ((char*) $match$5_11715->$data + 16));
                _f11921 = *$tmp1922;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11921));
            }
            }
            else {
            panda$core$Bit $tmp1923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 28 }));
            if ($tmp1923.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1925 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01924 = *$tmp1925;
                panda$core$String** $tmp1927 = ((panda$core$String**) ((char*) $match$5_11715->$data + 16));
                _f11926 = *$tmp1927;
                org$pandalanguage$pandac$ASTNode** $tmp1929 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 24));
                _f21928 = *$tmp1929;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11926));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21928));
            }
            }
            else {
            panda$core$Bit $tmp1930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 29 }));
            if ($tmp1930.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1932 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01931 = *$tmp1932;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp1934 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11715->$data + 16));
                _f11933 = *$tmp1934;
                org$pandalanguage$pandac$ASTNode** $tmp1936 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 24));
                _f21935 = *$tmp1936;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21935));
            }
            }
            else {
            panda$core$Bit $tmp1937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 30 }));
            if ($tmp1937.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1939 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01938 = *$tmp1939;
                org$pandalanguage$pandac$ASTNode** $tmp1941 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 16));
                _f11940 = *$tmp1941;
                org$pandalanguage$pandac$ASTNode** $tmp1943 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 24));
                _f21942 = *$tmp1943;
                panda$core$Bit* $tmp1945 = ((panda$core$Bit*) ((char*) $match$5_11715->$data + 32));
                _f31944 = *$tmp1945;
                org$pandalanguage$pandac$ASTNode** $tmp1947 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 33));
                _f41946 = *$tmp1947;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11940));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21942));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41946));
            }
            }
            else {
            panda$core$Bit $tmp1948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 31 }));
            if ($tmp1948.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1950 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01949 = *$tmp1950;
                panda$core$Real64* $tmp1952 = ((panda$core$Real64*) ((char*) $match$5_11715->$data + 16));
                _f11951 = *$tmp1952;
            }
            }
            else {
            panda$core$Bit $tmp1953 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 32 }));
            if ($tmp1953.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1955 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01954 = *$tmp1955;
                org$pandalanguage$pandac$ASTNode** $tmp1957 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 16));
                _f11956 = *$tmp1957;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11956));
            }
            }
            else {
            panda$core$Bit $tmp1958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp1958.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1960 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01959 = *$tmp1960;
            }
            }
            else {
            panda$core$Bit $tmp1961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp1961.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1963 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01962 = *$tmp1963;
                panda$core$String** $tmp1965 = ((panda$core$String**) ((char*) $match$5_11715->$data + 16));
                _f11964 = *$tmp1965;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11964));
            }
            }
            else {
            panda$core$Bit $tmp1966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 35 }));
            if ($tmp1966.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1968 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01967 = *$tmp1968;
            }
            }
            else {
            panda$core$Bit $tmp1969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp1969.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1971 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01970 = *$tmp1971;
                panda$core$String** $tmp1973 = ((panda$core$String**) ((char*) $match$5_11715->$data + 16));
                _f11972 = *$tmp1973;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11972));
            }
            }
            else {
            panda$core$Bit $tmp1974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 37 }));
            if ($tmp1974.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1976 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01975 = *$tmp1976;
                panda$core$String** $tmp1978 = ((panda$core$String**) ((char*) $match$5_11715->$data + 16));
                _f11977 = *$tmp1978;
                org$pandalanguage$pandac$ASTNode** $tmp1980 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 24));
                _f21979 = *$tmp1980;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11977));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21979));
            }
            }
            else {
            panda$core$Bit $tmp1981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 38 }));
            if ($tmp1981.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1983 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01982 = *$tmp1983;
                panda$core$String** $tmp1985 = ((panda$core$String**) ((char*) $match$5_11715->$data + 16));
                _f11984 = *$tmp1985;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11984));
            }
            }
            else {
            panda$core$Bit $tmp1986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp1986.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1988 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01987 = *$tmp1988;
                org$pandalanguage$pandac$Variable$Kind* $tmp1990 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_11715->$data + 16));
                _f11989 = *$tmp1990;
                panda$collections$ImmutableArray** $tmp1992 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11715->$data + 24));
                _f21991 = *$tmp1992;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21991));
            }
            }
            else {
            panda$core$Bit $tmp1993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp1993.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1995 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f01994 = *$tmp1995;
                panda$collections$ImmutableArray** $tmp1997 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11715->$data + 16));
                _f11996 = *$tmp1997;
                panda$collections$ImmutableArray** $tmp1999 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11715->$data + 24));
                _f21998 = *$tmp1999;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11996));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21998));
            }
            }
            else {
            panda$core$Bit $tmp2000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11715->$rawValue, ((panda$core$Int64) { 41 }));
            if ($tmp2000.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2002 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11715->$data + 0));
                _f02001 = *$tmp2002;
                panda$core$String** $tmp2004 = ((panda$core$String**) ((char*) $match$5_11715->$data + 16));
                _f12003 = *$tmp2004;
                org$pandalanguage$pandac$ASTNode** $tmp2006 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11715->$data + 24));
                _f22005 = *$tmp2006;
                panda$collections$ImmutableArray** $tmp2008 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11715->$data + 32));
                _f32007 = *$tmp2008;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12003));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22005));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32007));
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
        $tmp1714 = -1;
        goto $l1712;
        $l1712:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1716));
        switch ($tmp1714) {
            case -1: goto $l2009;
        }
        $l2009:;
    }
    $tmp1711 = -1;
    goto $l1709;
    $l1709:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1711) {
        case -1: goto $l2010;
    }
    $l2010:;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp2012;
    panda$core$String* $tmp2015;
    org$pandalanguage$pandac$ASTNode* $tmp2016;
    org$pandalanguage$pandac$ASTNode* $tmp2019;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2011 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2011 = p_f0;
    {
        panda$core$String** $tmp2013 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2012 = *$tmp2013;
        panda$core$String** $tmp2014 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2015 = p_f1;
        *$tmp2014 = $tmp2015;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2015));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2012));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2017 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2016 = *$tmp2017;
        org$pandalanguage$pandac$ASTNode** $tmp2018 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2019 = p_f2;
        *$tmp2018 = $tmp2019;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2019));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2016));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2021;
    org$pandalanguage$pandac$ASTNode* $tmp2024;
    org$pandalanguage$pandac$ASTNode* $tmp2025;
    org$pandalanguage$pandac$ASTNode* $tmp2028;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2020 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2020 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2022 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2021 = *$tmp2022;
        org$pandalanguage$pandac$ASTNode** $tmp2023 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2024 = p_f1;
        *$tmp2023 = $tmp2024;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2024));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2021));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2026 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2025 = *$tmp2026;
        org$pandalanguage$pandac$ASTNode** $tmp2027 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2028 = p_f2;
        *$tmp2027 = $tmp2028;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2028));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2025));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$parser$Token$Kind p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2030;
    org$pandalanguage$pandac$ASTNode* $tmp2033;
    org$pandalanguage$pandac$ASTNode* $tmp2035;
    org$pandalanguage$pandac$ASTNode* $tmp2038;
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
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2034 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 24));
    *$tmp2034 = p_f2;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2036 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2035 = *$tmp2036;
        org$pandalanguage$pandac$ASTNode** $tmp2037 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2038 = p_f3;
        *$tmp2037 = $tmp2038;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2038));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2035));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Bit p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2039 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2039 = p_f0;
    panda$core$Bit* $tmp2040 = ((panda$core$Bit*) ((char*) self->$data + 16));
    *$tmp2040 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp2042;
    panda$collections$ImmutableArray* $tmp2045;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2041 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2041 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2043 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2042 = *$tmp2043;
        panda$collections$ImmutableArray** $tmp2044 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2045 = p_f1;
        *$tmp2044 = $tmp2045;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2045));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2042));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2047;
    panda$core$String* $tmp2050;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2046 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2046 = p_f0;
    {
        panda$core$String** $tmp2048 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2047 = *$tmp2048;
        panda$core$String** $tmp2049 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2050 = p_f1;
        *$tmp2049 = $tmp2050;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2050));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2047));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2052;
    org$pandalanguage$pandac$ASTNode* $tmp2055;
    panda$collections$ImmutableArray* $tmp2056;
    panda$collections$ImmutableArray* $tmp2059;
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
        panda$collections$ImmutableArray** $tmp2057 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2056 = *$tmp2057;
        panda$collections$ImmutableArray** $tmp2058 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2059 = p_f2;
        *$tmp2058 = $tmp2059;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2059));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2056));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2061;
    org$pandalanguage$pandac$ASTNode* $tmp2064;
    panda$core$String* $tmp2065;
    panda$core$String* $tmp2068;
    panda$collections$ImmutableArray* $tmp2069;
    panda$collections$ImmutableArray* $tmp2072;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2060 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2060 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2062 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2061 = *$tmp2062;
        org$pandalanguage$pandac$ASTNode** $tmp2063 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2064 = p_f1;
        *$tmp2063 = $tmp2064;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2064));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2061));
    }
    {
        panda$core$String** $tmp2066 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2065 = *$tmp2066;
        panda$core$String** $tmp2067 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2068 = p_f2;
        *$tmp2067 = $tmp2068;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2068));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2065));
    }
    {
        panda$collections$ImmutableArray** $tmp2070 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2069 = *$tmp2070;
        panda$collections$ImmutableArray** $tmp2071 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2072 = p_f3;
        *$tmp2071 = $tmp2072;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2072));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2069));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2074;
    org$pandalanguage$pandac$ASTNode* $tmp2077;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2078;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2081;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2073 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2073 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2075 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2074 = *$tmp2075;
        org$pandalanguage$pandac$ASTNode** $tmp2076 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2077 = p_f1;
        *$tmp2076 = $tmp2077;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2077));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2074));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp2079 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2078 = *$tmp2079;
        org$pandalanguage$pandac$ChoiceEntry** $tmp2080 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2081 = p_f2;
        *$tmp2080 = $tmp2081;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2081));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2078));
    }
    panda$core$Int64* $tmp2082 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp2082 = p_f3;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ClassDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, panda$collections$ImmutableArray* p_f6, panda$collections$ImmutableArray* p_f7) {
    org$pandalanguage$pandac$ASTNode* $tmp2084;
    org$pandalanguage$pandac$ASTNode* $tmp2087;
    panda$collections$ImmutableArray* $tmp2088;
    panda$collections$ImmutableArray* $tmp2091;
    panda$core$String* $tmp2093;
    panda$core$String* $tmp2096;
    panda$collections$ImmutableArray* $tmp2097;
    panda$collections$ImmutableArray* $tmp2100;
    panda$collections$ImmutableArray* $tmp2101;
    panda$collections$ImmutableArray* $tmp2104;
    panda$collections$ImmutableArray* $tmp2105;
    panda$collections$ImmutableArray* $tmp2108;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2083 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2083 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2085 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2084 = *$tmp2085;
        org$pandalanguage$pandac$ASTNode** $tmp2086 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2087 = p_f1;
        *$tmp2086 = $tmp2087;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2087));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2084));
    }
    {
        panda$collections$ImmutableArray** $tmp2089 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2088 = *$tmp2089;
        panda$collections$ImmutableArray** $tmp2090 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2091 = p_f2;
        *$tmp2090 = $tmp2091;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2091));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2088));
    }
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp2092 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2092 = p_f3;
    {
        panda$core$String** $tmp2094 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2093 = *$tmp2094;
        panda$core$String** $tmp2095 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2096 = p_f4;
        *$tmp2095 = $tmp2096;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2096));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2093));
    }
    {
        panda$collections$ImmutableArray** $tmp2098 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2097 = *$tmp2098;
        panda$collections$ImmutableArray** $tmp2099 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2100 = p_f5;
        *$tmp2099 = $tmp2100;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2100));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2097));
    }
    {
        panda$collections$ImmutableArray** $tmp2102 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2101 = *$tmp2102;
        panda$collections$ImmutableArray** $tmp2103 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2104 = p_f6;
        *$tmp2103 = $tmp2104;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2104));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2101));
    }
    {
        panda$collections$ImmutableArray** $tmp2106 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2105 = *$tmp2106;
        panda$collections$ImmutableArray** $tmp2107 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2108 = p_f7;
        *$tmp2107 = $tmp2108;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2108));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2105));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$core$String* $tmp2110;
    panda$core$String* $tmp2113;
    panda$collections$ImmutableArray* $tmp2114;
    panda$collections$ImmutableArray* $tmp2117;
    org$pandalanguage$pandac$ASTNode* $tmp2118;
    org$pandalanguage$pandac$ASTNode* $tmp2121;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2109 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2109 = p_f0;
    {
        panda$core$String** $tmp2111 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2110 = *$tmp2111;
        panda$core$String** $tmp2112 = ((panda$core$String**) ((char*) self->$data + 16));
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
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2123;
    org$pandalanguage$pandac$ASTNode* $tmp2126;
    panda$core$String* $tmp2127;
    panda$core$String* $tmp2130;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2122 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2122 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2124 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2123 = *$tmp2124;
        org$pandalanguage$pandac$ASTNode** $tmp2125 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2126 = p_f1;
        *$tmp2125 = $tmp2126;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2126));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2123));
    }
    {
        panda$core$String** $tmp2128 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2127 = *$tmp2128;
        panda$core$String** $tmp2129 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2130 = p_f2;
        *$tmp2129 = $tmp2130;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2130));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2127));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2132;
    org$pandalanguage$pandac$ASTNode* $tmp2135;
    panda$collections$ImmutableArray* $tmp2136;
    panda$collections$ImmutableArray* $tmp2139;
    org$pandalanguage$pandac$ASTNode* $tmp2140;
    org$pandalanguage$pandac$ASTNode* $tmp2143;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2131 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2131 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2133 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2132 = *$tmp2133;
        org$pandalanguage$pandac$ASTNode** $tmp2134 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2135 = p_f1;
        *$tmp2134 = $tmp2135;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2135));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2132));
    }
    {
        panda$collections$ImmutableArray** $tmp2137 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2136 = *$tmp2137;
        panda$collections$ImmutableArray** $tmp2138 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2139 = p_f2;
        *$tmp2138 = $tmp2139;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2139));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2136));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2141 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2140 = *$tmp2141;
        org$pandalanguage$pandac$ASTNode** $tmp2142 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2143 = p_f3;
        *$tmp2142 = $tmp2143;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2143));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2140));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    panda$collections$ImmutableArray* $tmp2144;
    panda$collections$ImmutableArray* $tmp2147;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp2145 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2144 = *$tmp2145;
        panda$collections$ImmutableArray** $tmp2146 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2147 = p_f0;
        *$tmp2146 = $tmp2147;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2147));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2144));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, org$pandalanguage$pandac$ASTNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp2149;
    panda$core$String* $tmp2152;
    org$pandalanguage$pandac$ASTNode* $tmp2153;
    org$pandalanguage$pandac$ASTNode* $tmp2156;
    org$pandalanguage$pandac$ASTNode* $tmp2157;
    org$pandalanguage$pandac$ASTNode* $tmp2160;
    panda$collections$ImmutableArray* $tmp2161;
    panda$collections$ImmutableArray* $tmp2164;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2148 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2148 = p_f0;
    {
        panda$core$String** $tmp2150 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2149 = *$tmp2150;
        panda$core$String** $tmp2151 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2152 = p_f1;
        *$tmp2151 = $tmp2152;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2152));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2149));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2154 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2153 = *$tmp2154;
        org$pandalanguage$pandac$ASTNode** $tmp2155 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2156 = p_f2;
        *$tmp2155 = $tmp2156;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2156));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2153));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2158 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2157 = *$tmp2158;
        org$pandalanguage$pandac$ASTNode** $tmp2159 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2160 = p_f3;
        *$tmp2159 = $tmp2160;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2160));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2157));
    }
    {
        panda$collections$ImmutableArray** $tmp2162 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2161 = *$tmp2162;
        panda$collections$ImmutableArray** $tmp2163 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2164 = p_f4;
        *$tmp2163 = $tmp2164;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2164));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2161));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp2166;
    panda$core$String* $tmp2169;
    panda$collections$ImmutableArray* $tmp2170;
    panda$collections$ImmutableArray* $tmp2173;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2165 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2165 = p_f0;
    {
        panda$core$String** $tmp2167 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2166 = *$tmp2167;
        panda$core$String** $tmp2168 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2169 = p_f1;
        *$tmp2168 = $tmp2169;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2169));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2166));
    }
    {
        panda$collections$ImmutableArray** $tmp2171 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2170 = *$tmp2171;
        panda$collections$ImmutableArray** $tmp2172 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2173 = p_f2;
        *$tmp2172 = $tmp2173;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2173));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2170));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2175;
    panda$core$String* $tmp2178;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2174 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2174 = p_f0;
    {
        panda$core$String** $tmp2176 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2175 = *$tmp2176;
        panda$core$String** $tmp2177 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2178 = p_f1;
        *$tmp2177 = $tmp2178;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2178));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2175));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2180;
    org$pandalanguage$pandac$ASTNode* $tmp2183;
    panda$collections$ImmutableArray* $tmp2184;
    panda$collections$ImmutableArray* $tmp2187;
    org$pandalanguage$pandac$ASTNode* $tmp2188;
    org$pandalanguage$pandac$ASTNode* $tmp2191;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2179 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2179 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2181 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2180 = *$tmp2181;
        org$pandalanguage$pandac$ASTNode** $tmp2182 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2183 = p_f1;
        *$tmp2182 = $tmp2183;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2183));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2180));
    }
    {
        panda$collections$ImmutableArray** $tmp2185 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2184 = *$tmp2185;
        panda$collections$ImmutableArray** $tmp2186 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2187 = p_f2;
        *$tmp2186 = $tmp2187;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2187));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2184));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2189 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2188 = *$tmp2189;
        org$pandalanguage$pandac$ASTNode** $tmp2190 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2191 = p_f3;
        *$tmp2190 = $tmp2191;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2191));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2188));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$UInt64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2192 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2192 = p_f0;
    panda$core$UInt64* $tmp2193 = ((panda$core$UInt64*) ((char*) self->$data + 16));
    *$tmp2193 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0) {
    org$pandalanguage$pandac$IRNode* $tmp2194;
    org$pandalanguage$pandac$IRNode* $tmp2197;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp2195 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2194 = *$tmp2195;
        org$pandalanguage$pandac$IRNode** $tmp2196 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2197 = p_f0;
        *$tmp2196 = $tmp2197;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2197));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2194));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp2199;
    panda$core$String* $tmp2202;
    panda$collections$ImmutableArray* $tmp2203;
    panda$collections$ImmutableArray* $tmp2206;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2198 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2198 = p_f0;
    {
        panda$core$String** $tmp2200 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2199 = *$tmp2200;
        panda$core$String** $tmp2201 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2202 = p_f1;
        *$tmp2201 = $tmp2202;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2202));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2199));
    }
    {
        panda$collections$ImmutableArray** $tmp2204 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2203 = *$tmp2204;
        panda$collections$ImmutableArray** $tmp2205 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2206 = p_f2;
        *$tmp2205 = $tmp2206;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2206));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2203));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2208;
    org$pandalanguage$pandac$ASTNode* $tmp2211;
    panda$collections$ImmutableArray* $tmp2212;
    panda$collections$ImmutableArray* $tmp2215;
    panda$collections$ImmutableArray* $tmp2216;
    panda$collections$ImmutableArray* $tmp2219;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2207 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2207 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2209 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2208 = *$tmp2209;
        org$pandalanguage$pandac$ASTNode** $tmp2210 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2211 = p_f1;
        *$tmp2210 = $tmp2211;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2211));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2208));
    }
    {
        panda$collections$ImmutableArray** $tmp2213 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2212 = *$tmp2213;
        panda$collections$ImmutableArray** $tmp2214 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2215 = p_f2;
        *$tmp2214 = $tmp2215;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2215));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2212));
    }
    {
        panda$collections$ImmutableArray** $tmp2217 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2216 = *$tmp2217;
        panda$collections$ImmutableArray** $tmp2218 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2219 = p_f3;
        *$tmp2218 = $tmp2219;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2219));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2216));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$MethodDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, org$pandalanguage$pandac$ASTNode* p_f6, panda$collections$ImmutableArray* p_f7) {
    org$pandalanguage$pandac$ASTNode* $tmp2221;
    org$pandalanguage$pandac$ASTNode* $tmp2224;
    panda$collections$ImmutableArray* $tmp2225;
    panda$collections$ImmutableArray* $tmp2228;
    panda$core$String* $tmp2230;
    panda$core$String* $tmp2233;
    panda$collections$ImmutableArray* $tmp2234;
    panda$collections$ImmutableArray* $tmp2237;
    org$pandalanguage$pandac$ASTNode* $tmp2238;
    org$pandalanguage$pandac$ASTNode* $tmp2241;
    panda$collections$ImmutableArray* $tmp2242;
    panda$collections$ImmutableArray* $tmp2245;
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
    {
        panda$collections$ImmutableArray** $tmp2226 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2225 = *$tmp2226;
        panda$collections$ImmutableArray** $tmp2227 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2228 = p_f2;
        *$tmp2227 = $tmp2228;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2228));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2225));
    }
    org$pandalanguage$pandac$MethodDecl$Kind* $tmp2229 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2229 = p_f3;
    {
        panda$core$String** $tmp2231 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2230 = *$tmp2231;
        panda$core$String** $tmp2232 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2233 = p_f4;
        *$tmp2232 = $tmp2233;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2233));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2230));
    }
    {
        panda$collections$ImmutableArray** $tmp2235 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2234 = *$tmp2235;
        panda$collections$ImmutableArray** $tmp2236 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2237 = p_f5;
        *$tmp2236 = $tmp2237;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2237));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2234));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2239 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
        $tmp2238 = *$tmp2239;
        org$pandalanguage$pandac$ASTNode** $tmp2240 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
        $tmp2241 = p_f6;
        *$tmp2240 = $tmp2241;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2241));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2238));
    }
    {
        panda$collections$ImmutableArray** $tmp2243 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2242 = *$tmp2243;
        panda$collections$ImmutableArray** $tmp2244 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2245 = p_f7;
        *$tmp2244 = $tmp2245;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2245));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2242));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2246 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2246 = p_f0;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp2248;
    org$pandalanguage$pandac$ASTNode* $tmp2251;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2247 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2247 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2249 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2248 = *$tmp2249;
        org$pandalanguage$pandac$ASTNode** $tmp2250 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2251 = p_f1;
        *$tmp2250 = $tmp2251;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2251));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2248));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp2253;
    panda$core$String* $tmp2256;
    org$pandalanguage$pandac$ASTNode* $tmp2257;
    org$pandalanguage$pandac$ASTNode* $tmp2260;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2252 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2252 = p_f0;
    {
        panda$core$String** $tmp2254 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2253 = *$tmp2254;
        panda$core$String** $tmp2255 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2256 = p_f1;
        *$tmp2255 = $tmp2256;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2256));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2253));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2258 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2257 = *$tmp2258;
        org$pandalanguage$pandac$ASTNode** $tmp2259 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2260 = p_f2;
        *$tmp2259 = $tmp2260;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2260));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2257));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2263;
    org$pandalanguage$pandac$ASTNode* $tmp2266;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2261 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2261 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2262 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp2262 = p_f1;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2264 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2263 = *$tmp2264;
        org$pandalanguage$pandac$ASTNode** $tmp2265 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2266 = p_f2;
        *$tmp2265 = $tmp2266;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2266));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2263));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$ASTNode* p_f4) {
    org$pandalanguage$pandac$ASTNode* $tmp2268;
    org$pandalanguage$pandac$ASTNode* $tmp2271;
    org$pandalanguage$pandac$ASTNode* $tmp2272;
    org$pandalanguage$pandac$ASTNode* $tmp2275;
    org$pandalanguage$pandac$ASTNode* $tmp2277;
    org$pandalanguage$pandac$ASTNode* $tmp2280;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2267 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2267 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2269 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2268 = *$tmp2269;
        org$pandalanguage$pandac$ASTNode** $tmp2270 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2271 = p_f1;
        *$tmp2270 = $tmp2271;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2271));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2268));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2273 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2272 = *$tmp2273;
        org$pandalanguage$pandac$ASTNode** $tmp2274 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2275 = p_f2;
        *$tmp2274 = $tmp2275;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2275));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2272));
    }
    panda$core$Bit* $tmp2276 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp2276 = p_f3;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2278 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2277 = *$tmp2278;
        org$pandalanguage$pandac$ASTNode** $tmp2279 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2280 = p_f4;
        *$tmp2279 = $tmp2280;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2280));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2277));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Real64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2281 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2281 = p_f0;
    panda$core$Real64* $tmp2282 = ((panda$core$Real64*) ((char*) self->$data + 16));
    *$tmp2282 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp2284;
    org$pandalanguage$pandac$ASTNode* $tmp2287;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2283 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2283 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2285 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2284 = *$tmp2285;
        org$pandalanguage$pandac$ASTNode** $tmp2286 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2287 = p_f1;
        *$tmp2286 = $tmp2287;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2287));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2284));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2290;
    panda$collections$ImmutableArray* $tmp2293;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2288 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2288 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp2289 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp2289 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp2291 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2290 = *$tmp2291;
        panda$collections$ImmutableArray** $tmp2292 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2293 = p_f2;
        *$tmp2292 = $tmp2293;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2293));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2290));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2295;
    panda$collections$ImmutableArray* $tmp2298;
    panda$collections$ImmutableArray* $tmp2299;
    panda$collections$ImmutableArray* $tmp2302;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2294 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2294 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2296 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2295 = *$tmp2296;
        panda$collections$ImmutableArray** $tmp2297 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2298 = p_f1;
        *$tmp2297 = $tmp2298;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2298));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2295));
    }
    {
        panda$collections$ImmutableArray** $tmp2300 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2299 = *$tmp2300;
        panda$collections$ImmutableArray** $tmp2301 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2302 = p_f2;
        *$tmp2301 = $tmp2302;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2302));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2299));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp2304;
    panda$core$String* $tmp2307;
    org$pandalanguage$pandac$ASTNode* $tmp2308;
    org$pandalanguage$pandac$ASTNode* $tmp2311;
    panda$collections$ImmutableArray* $tmp2312;
    panda$collections$ImmutableArray* $tmp2315;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2303 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2303 = p_f0;
    {
        panda$core$String** $tmp2305 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2304 = *$tmp2305;
        panda$core$String** $tmp2306 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2307 = p_f1;
        *$tmp2306 = $tmp2307;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2307));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2304));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2309 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2308 = *$tmp2309;
        org$pandalanguage$pandac$ASTNode** $tmp2310 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2311 = p_f2;
        *$tmp2310 = $tmp2311;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2311));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2308));
    }
    {
        panda$collections$ImmutableArray** $tmp2313 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2312 = *$tmp2313;
        panda$collections$ImmutableArray** $tmp2314 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2315 = p_f3;
        *$tmp2314 = $tmp2315;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2315));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2312));
    }
}






