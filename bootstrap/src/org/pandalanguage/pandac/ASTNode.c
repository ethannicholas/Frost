#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/core/Bit.h"
#include "panda/collections/ImmutableArray.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


static panda$core$String $s1;
org$pandalanguage$pandac$ASTNode$class_type org$pandalanguage$pandac$ASTNode$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String, org$pandalanguage$pandac$ASTNode$cleanup, org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position} };

typedef org$pandalanguage$pandac$Position (*$fn441)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn623)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn665)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn672)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn683)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn728)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn791)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn838)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn845)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn856)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn895)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn902)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn913)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn958)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn970)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1002)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1009)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1020)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1052)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1086)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1093)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1104)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1137)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1144)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1155)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1208)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1215)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1226)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1298)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1305)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1316)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1353)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1383)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1390)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1401)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1445)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1452)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1463)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1515)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1522)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1533)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1573)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1580)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1591)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1662)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1856)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1863)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1874)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1897)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1904)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1915)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1963)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1970)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1981)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 32, -9211815390615587804, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s656 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s686 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s706 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s730 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s761 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static panda$core$String $s869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static panda$core$String $s872 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s916 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s936 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s938 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s944 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s960 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s963 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s993 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s1023 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1029 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static panda$core$String $s1031 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1054 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1057 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1076 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s1195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s1198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s1544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s1551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1693 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1694 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1761 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s1844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s1847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1881 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1947 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1951 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1953 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1984 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp3;
    panda$core$String* $tmp6;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2 = p_f0;
    {
        panda$core$String** $tmp4 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3 = *$tmp4;
        panda$core$String** $tmp5 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp6 = p_f1;
        *$tmp5 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp8;
    org$pandalanguage$pandac$ASTNode* $tmp11;
    org$pandalanguage$pandac$ASTNode* $tmp12;
    org$pandalanguage$pandac$ASTNode* $tmp15;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp7 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp7 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp9 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp8 = *$tmp9;
        org$pandalanguage$pandac$ASTNode** $tmp10 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp11 = p_f1;
        *$tmp10 = $tmp11;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp13 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp12 = *$tmp13;
        org$pandalanguage$pandac$ASTNode** $tmp14 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp15 = p_f2;
        *$tmp14 = $tmp15;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$parser$Token$Kind p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp17;
    org$pandalanguage$pandac$ASTNode* $tmp20;
    org$pandalanguage$pandac$ASTNode* $tmp22;
    org$pandalanguage$pandac$ASTNode* $tmp25;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp16 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp16 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp18 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp17 = *$tmp18;
        org$pandalanguage$pandac$ASTNode** $tmp19 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp20 = p_f1;
        *$tmp19 = $tmp20;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp20));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp17));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp21 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 24));
    *$tmp21 = p_f2;
    {
        org$pandalanguage$pandac$ASTNode** $tmp23 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp22 = *$tmp23;
        org$pandalanguage$pandac$ASTNode** $tmp24 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp25 = p_f3;
        *$tmp24 = $tmp25;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp25));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Bit p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp26 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp26 = p_f0;
    panda$core$Bit* $tmp27 = ((panda$core$Bit*) ((char*) self->$data + 16));
    *$tmp27 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp29;
    panda$collections$ImmutableArray* $tmp32;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp28 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp28 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp30 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp29 = *$tmp30;
        panda$collections$ImmutableArray** $tmp31 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp32 = p_f1;
        *$tmp31 = $tmp32;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp32));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp34;
    panda$core$String* $tmp37;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp33 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp33 = p_f0;
    {
        panda$core$String** $tmp35 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp34 = *$tmp35;
        panda$core$String** $tmp36 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp37 = p_f1;
        *$tmp36 = $tmp37;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp37));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp34));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp39;
    org$pandalanguage$pandac$ASTNode* $tmp42;
    panda$collections$ImmutableArray* $tmp43;
    panda$collections$ImmutableArray* $tmp46;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp38 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp38 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp40 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp39 = *$tmp40;
        org$pandalanguage$pandac$ASTNode** $tmp41 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp42 = p_f1;
        *$tmp41 = $tmp42;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp39));
    }
    {
        panda$collections$ImmutableArray** $tmp44 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp43 = *$tmp44;
        panda$collections$ImmutableArray** $tmp45 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp46 = p_f2;
        *$tmp45 = $tmp46;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp46));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp48;
    org$pandalanguage$pandac$ASTNode* $tmp51;
    panda$core$String* $tmp52;
    panda$core$String* $tmp55;
    panda$collections$ImmutableArray* $tmp56;
    panda$collections$ImmutableArray* $tmp59;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp47 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp47 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp49 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp48 = *$tmp49;
        org$pandalanguage$pandac$ASTNode** $tmp50 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp51 = p_f1;
        *$tmp50 = $tmp51;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp51));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
    }
    {
        panda$core$String** $tmp53 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp52 = *$tmp53;
        panda$core$String** $tmp54 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp55 = p_f2;
        *$tmp54 = $tmp55;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp55));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp52));
    }
    {
        panda$collections$ImmutableArray** $tmp57 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp56 = *$tmp57;
        panda$collections$ImmutableArray** $tmp58 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp59 = p_f3;
        *$tmp58 = $tmp59;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp59));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp56));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp61;
    org$pandalanguage$pandac$ASTNode* $tmp64;
    org$pandalanguage$pandac$ChoiceEntry* $tmp65;
    org$pandalanguage$pandac$ChoiceEntry* $tmp68;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp60 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp60 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp62 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp61 = *$tmp62;
        org$pandalanguage$pandac$ASTNode** $tmp63 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp64 = p_f1;
        *$tmp63 = $tmp64;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp64));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp61));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp66 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp65 = *$tmp66;
        org$pandalanguage$pandac$ChoiceEntry** $tmp67 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp68 = p_f2;
        *$tmp67 = $tmp68;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp68));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
    }
    panda$core$Int64* $tmp69 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp69 = p_f3;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ClassDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, panda$collections$ImmutableArray* p_f6, panda$collections$ImmutableArray* p_f7) {
    org$pandalanguage$pandac$ASTNode* $tmp71;
    org$pandalanguage$pandac$ASTNode* $tmp74;
    panda$collections$ImmutableArray* $tmp75;
    panda$collections$ImmutableArray* $tmp78;
    panda$core$String* $tmp80;
    panda$core$String* $tmp83;
    panda$collections$ImmutableArray* $tmp84;
    panda$collections$ImmutableArray* $tmp87;
    panda$collections$ImmutableArray* $tmp88;
    panda$collections$ImmutableArray* $tmp91;
    panda$collections$ImmutableArray* $tmp92;
    panda$collections$ImmutableArray* $tmp95;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp70 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp70 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp72 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp71 = *$tmp72;
        org$pandalanguage$pandac$ASTNode** $tmp73 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp74 = p_f1;
        *$tmp73 = $tmp74;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp74));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
    }
    {
        panda$collections$ImmutableArray** $tmp76 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp75 = *$tmp76;
        panda$collections$ImmutableArray** $tmp77 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp78 = p_f2;
        *$tmp77 = $tmp78;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp78));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
    }
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp79 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) self->$data + 32));
    *$tmp79 = p_f3;
    {
        panda$core$String** $tmp81 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp80 = *$tmp81;
        panda$core$String** $tmp82 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp83 = p_f4;
        *$tmp82 = $tmp83;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp83));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
    }
    {
        panda$collections$ImmutableArray** $tmp85 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp84 = *$tmp85;
        panda$collections$ImmutableArray** $tmp86 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp87 = p_f5;
        *$tmp86 = $tmp87;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp87));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
    }
    {
        panda$collections$ImmutableArray** $tmp89 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp88 = *$tmp89;
        panda$collections$ImmutableArray** $tmp90 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp91 = p_f6;
        *$tmp90 = $tmp91;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp91));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp88));
    }
    {
        panda$collections$ImmutableArray** $tmp93 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp92 = *$tmp93;
        panda$collections$ImmutableArray** $tmp94 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp95 = p_f7;
        *$tmp94 = $tmp95;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp95));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp92));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$core$String* $tmp97;
    panda$core$String* $tmp100;
    panda$collections$ImmutableArray* $tmp101;
    panda$collections$ImmutableArray* $tmp104;
    org$pandalanguage$pandac$ASTNode* $tmp105;
    org$pandalanguage$pandac$ASTNode* $tmp108;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp96 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp96 = p_f0;
    {
        panda$core$String** $tmp98 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp97 = *$tmp98;
        panda$core$String** $tmp99 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp100 = p_f1;
        *$tmp99 = $tmp100;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp100));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp97));
    }
    {
        panda$collections$ImmutableArray** $tmp102 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp101 = *$tmp102;
        panda$collections$ImmutableArray** $tmp103 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp104 = p_f2;
        *$tmp103 = $tmp104;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp104));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp101));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp106 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp105 = *$tmp106;
        org$pandalanguage$pandac$ASTNode** $tmp107 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp108 = p_f3;
        *$tmp107 = $tmp108;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp108));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp105));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp110;
    org$pandalanguage$pandac$ASTNode* $tmp113;
    panda$core$String* $tmp114;
    panda$core$String* $tmp117;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp109 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp109 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp111 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp110 = *$tmp111;
        org$pandalanguage$pandac$ASTNode** $tmp112 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp113 = p_f1;
        *$tmp112 = $tmp113;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp113));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp110));
    }
    {
        panda$core$String** $tmp115 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp114 = *$tmp115;
        panda$core$String** $tmp116 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp117 = p_f2;
        *$tmp116 = $tmp117;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp117));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp119;
    org$pandalanguage$pandac$ASTNode* $tmp122;
    panda$collections$ImmutableArray* $tmp123;
    panda$collections$ImmutableArray* $tmp126;
    org$pandalanguage$pandac$ASTNode* $tmp127;
    org$pandalanguage$pandac$ASTNode* $tmp130;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp118 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp118 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp120 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp119 = *$tmp120;
        org$pandalanguage$pandac$ASTNode** $tmp121 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp122 = p_f1;
        *$tmp121 = $tmp122;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp122));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp119));
    }
    {
        panda$collections$ImmutableArray** $tmp124 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp123 = *$tmp124;
        panda$collections$ImmutableArray** $tmp125 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp126 = p_f2;
        *$tmp125 = $tmp126;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp123));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp128 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp127 = *$tmp128;
        org$pandalanguage$pandac$ASTNode** $tmp129 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp130 = p_f3;
        *$tmp129 = $tmp130;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp130));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp127));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    panda$collections$ImmutableArray* $tmp131;
    panda$collections$ImmutableArray* $tmp134;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp132 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp131 = *$tmp132;
        panda$collections$ImmutableArray** $tmp133 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp134 = p_f0;
        *$tmp133 = $tmp134;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp134));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, org$pandalanguage$pandac$ASTNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp136;
    panda$core$String* $tmp139;
    org$pandalanguage$pandac$ASTNode* $tmp140;
    org$pandalanguage$pandac$ASTNode* $tmp143;
    org$pandalanguage$pandac$ASTNode* $tmp144;
    org$pandalanguage$pandac$ASTNode* $tmp147;
    panda$collections$ImmutableArray* $tmp148;
    panda$collections$ImmutableArray* $tmp151;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp135 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp135 = p_f0;
    {
        panda$core$String** $tmp137 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp136 = *$tmp137;
        panda$core$String** $tmp138 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp139 = p_f1;
        *$tmp138 = $tmp139;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp139));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp136));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp141 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp140 = *$tmp141;
        org$pandalanguage$pandac$ASTNode** $tmp142 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp143 = p_f2;
        *$tmp142 = $tmp143;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp140));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp145 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp144 = *$tmp145;
        org$pandalanguage$pandac$ASTNode** $tmp146 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp147 = p_f3;
        *$tmp146 = $tmp147;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp147));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
    }
    {
        panda$collections$ImmutableArray** $tmp149 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp148 = *$tmp149;
        panda$collections$ImmutableArray** $tmp150 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp151 = p_f4;
        *$tmp150 = $tmp151;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp151));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp148));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp153;
    panda$core$String* $tmp156;
    panda$collections$ImmutableArray* $tmp157;
    panda$collections$ImmutableArray* $tmp160;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp152 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp152 = p_f0;
    {
        panda$core$String** $tmp154 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp153 = *$tmp154;
        panda$core$String** $tmp155 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp156 = p_f1;
        *$tmp155 = $tmp156;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp156));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
    }
    {
        panda$collections$ImmutableArray** $tmp158 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp157 = *$tmp158;
        panda$collections$ImmutableArray** $tmp159 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp160 = p_f2;
        *$tmp159 = $tmp160;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp160));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp157));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp162;
    org$pandalanguage$pandac$ASTNode* $tmp165;
    panda$collections$ImmutableArray* $tmp166;
    panda$collections$ImmutableArray* $tmp169;
    org$pandalanguage$pandac$ASTNode* $tmp170;
    org$pandalanguage$pandac$ASTNode* $tmp173;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp161 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp161 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp163 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp162 = *$tmp163;
        org$pandalanguage$pandac$ASTNode** $tmp164 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp165 = p_f1;
        *$tmp164 = $tmp165;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp165));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp162));
    }
    {
        panda$collections$ImmutableArray** $tmp167 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp166 = *$tmp167;
        panda$collections$ImmutableArray** $tmp168 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp169 = p_f2;
        *$tmp168 = $tmp169;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp169));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp166));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp171 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp170 = *$tmp171;
        org$pandalanguage$pandac$ASTNode** $tmp172 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp173 = p_f3;
        *$tmp172 = $tmp173;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp173));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp170));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$UInt64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp174 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp174 = p_f0;
    panda$core$UInt64* $tmp175 = ((panda$core$UInt64*) ((char*) self->$data + 16));
    *$tmp175 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0) {
    org$pandalanguage$pandac$IRNode* $tmp176;
    org$pandalanguage$pandac$IRNode* $tmp179;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp177 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp176 = *$tmp177;
        org$pandalanguage$pandac$IRNode** $tmp178 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp179 = p_f0;
        *$tmp178 = $tmp179;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp179));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp181;
    panda$core$String* $tmp184;
    panda$collections$ImmutableArray* $tmp185;
    panda$collections$ImmutableArray* $tmp188;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp180 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp180 = p_f0;
    {
        panda$core$String** $tmp182 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp181 = *$tmp182;
        panda$core$String** $tmp183 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp184 = p_f1;
        *$tmp183 = $tmp184;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp184));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp181));
    }
    {
        panda$collections$ImmutableArray** $tmp186 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp185 = *$tmp186;
        panda$collections$ImmutableArray** $tmp187 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp188 = p_f2;
        *$tmp187 = $tmp188;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp188));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp190;
    org$pandalanguage$pandac$ASTNode* $tmp193;
    panda$collections$ImmutableArray* $tmp194;
    panda$collections$ImmutableArray* $tmp197;
    panda$collections$ImmutableArray* $tmp198;
    panda$collections$ImmutableArray* $tmp201;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp189 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp189 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp191 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp190 = *$tmp191;
        org$pandalanguage$pandac$ASTNode** $tmp192 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp193 = p_f1;
        *$tmp192 = $tmp193;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp193));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp190));
    }
    {
        panda$collections$ImmutableArray** $tmp195 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp194 = *$tmp195;
        panda$collections$ImmutableArray** $tmp196 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp197 = p_f2;
        *$tmp196 = $tmp197;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp197));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp194));
    }
    {
        panda$collections$ImmutableArray** $tmp199 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp198 = *$tmp199;
        panda$collections$ImmutableArray** $tmp200 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp201 = p_f3;
        *$tmp200 = $tmp201;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp201));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp198));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$MethodDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, org$pandalanguage$pandac$ASTNode* p_f6, panda$collections$ImmutableArray* p_f7) {
    org$pandalanguage$pandac$ASTNode* $tmp203;
    org$pandalanguage$pandac$ASTNode* $tmp206;
    panda$collections$ImmutableArray* $tmp207;
    panda$collections$ImmutableArray* $tmp210;
    panda$core$String* $tmp212;
    panda$core$String* $tmp215;
    panda$collections$ImmutableArray* $tmp216;
    panda$collections$ImmutableArray* $tmp219;
    org$pandalanguage$pandac$ASTNode* $tmp220;
    org$pandalanguage$pandac$ASTNode* $tmp223;
    panda$collections$ImmutableArray* $tmp224;
    panda$collections$ImmutableArray* $tmp227;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp202 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp202 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp204 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp203 = *$tmp204;
        org$pandalanguage$pandac$ASTNode** $tmp205 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp206 = p_f1;
        *$tmp205 = $tmp206;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp206));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp203));
    }
    {
        panda$collections$ImmutableArray** $tmp208 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp207 = *$tmp208;
        panda$collections$ImmutableArray** $tmp209 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp210 = p_f2;
        *$tmp209 = $tmp210;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp210));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp207));
    }
    org$pandalanguage$pandac$MethodDecl$Kind* $tmp211 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) self->$data + 32));
    *$tmp211 = p_f3;
    {
        panda$core$String** $tmp213 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp212 = *$tmp213;
        panda$core$String** $tmp214 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp215 = p_f4;
        *$tmp214 = $tmp215;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp215));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp212));
    }
    {
        panda$collections$ImmutableArray** $tmp217 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp216 = *$tmp217;
        panda$collections$ImmutableArray** $tmp218 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp219 = p_f5;
        *$tmp218 = $tmp219;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp219));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp216));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp221 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
        $tmp220 = *$tmp221;
        org$pandalanguage$pandac$ASTNode** $tmp222 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
        $tmp223 = p_f6;
        *$tmp222 = $tmp223;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp223));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp220));
    }
    {
        panda$collections$ImmutableArray** $tmp225 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp224 = *$tmp225;
        panda$collections$ImmutableArray** $tmp226 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp227 = p_f7;
        *$tmp226 = $tmp227;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp227));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp228 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp228 = p_f0;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp230;
    org$pandalanguage$pandac$ASTNode* $tmp233;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp229 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp229 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp231 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp230 = *$tmp231;
        org$pandalanguage$pandac$ASTNode** $tmp232 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp233 = p_f1;
        *$tmp232 = $tmp233;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp233));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp230));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp235;
    panda$core$String* $tmp238;
    org$pandalanguage$pandac$ASTNode* $tmp239;
    org$pandalanguage$pandac$ASTNode* $tmp242;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp234 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp234 = p_f0;
    {
        panda$core$String** $tmp236 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp235 = *$tmp236;
        panda$core$String** $tmp237 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp238 = p_f1;
        *$tmp237 = $tmp238;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp238));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp235));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp240 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp239 = *$tmp240;
        org$pandalanguage$pandac$ASTNode** $tmp241 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp242 = p_f2;
        *$tmp241 = $tmp242;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp242));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp245;
    org$pandalanguage$pandac$ASTNode* $tmp248;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp243 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp243 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp244 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp244 = p_f1;
    {
        org$pandalanguage$pandac$ASTNode** $tmp246 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp245 = *$tmp246;
        org$pandalanguage$pandac$ASTNode** $tmp247 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp248 = p_f2;
        *$tmp247 = $tmp248;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp248));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp245));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$ASTNode* p_f4) {
    org$pandalanguage$pandac$ASTNode* $tmp250;
    org$pandalanguage$pandac$ASTNode* $tmp253;
    org$pandalanguage$pandac$ASTNode* $tmp254;
    org$pandalanguage$pandac$ASTNode* $tmp257;
    org$pandalanguage$pandac$ASTNode* $tmp259;
    org$pandalanguage$pandac$ASTNode* $tmp262;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp249 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp249 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp251 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp250 = *$tmp251;
        org$pandalanguage$pandac$ASTNode** $tmp252 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp253 = p_f1;
        *$tmp252 = $tmp253;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp253));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp250));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp255 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp254 = *$tmp255;
        org$pandalanguage$pandac$ASTNode** $tmp256 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp257 = p_f2;
        *$tmp256 = $tmp257;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp257));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp254));
    }
    panda$core$Bit* $tmp258 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp258 = p_f3;
    {
        org$pandalanguage$pandac$ASTNode** $tmp260 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp259 = *$tmp260;
        org$pandalanguage$pandac$ASTNode** $tmp261 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp262 = p_f4;
        *$tmp261 = $tmp262;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp262));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp259));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Real64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp263 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp263 = p_f0;
    panda$core$Real64* $tmp264 = ((panda$core$Real64*) ((char*) self->$data + 16));
    *$tmp264 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp266;
    org$pandalanguage$pandac$ASTNode* $tmp269;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp265 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp265 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp267 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp266 = *$tmp267;
        org$pandalanguage$pandac$ASTNode** $tmp268 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp269 = p_f1;
        *$tmp268 = $tmp269;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp269));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp271;
    panda$core$String* $tmp274;
    org$pandalanguage$pandac$ASTNode* $tmp275;
    org$pandalanguage$pandac$ASTNode* $tmp278;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp270 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp270 = p_f0;
    {
        panda$core$String** $tmp272 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp271 = *$tmp272;
        panda$core$String** $tmp273 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp274 = p_f1;
        *$tmp273 = $tmp274;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp274));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp271));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp276 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp275 = *$tmp276;
        org$pandalanguage$pandac$ASTNode** $tmp277 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp278 = p_f2;
        *$tmp277 = $tmp278;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp278));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp275));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp281;
    panda$collections$ImmutableArray* $tmp284;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp279 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp279 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp280 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp280 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp282 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp281 = *$tmp282;
        panda$collections$ImmutableArray** $tmp283 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp284 = p_f2;
        *$tmp283 = $tmp284;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp284));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp281));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp286;
    panda$collections$ImmutableArray* $tmp289;
    panda$collections$ImmutableArray* $tmp290;
    panda$collections$ImmutableArray* $tmp293;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp285 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp285 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp287 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp286 = *$tmp287;
        panda$collections$ImmutableArray** $tmp288 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp289 = p_f1;
        *$tmp288 = $tmp289;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp289));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp286));
    }
    {
        panda$collections$ImmutableArray** $tmp291 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp290 = *$tmp291;
        panda$collections$ImmutableArray** $tmp292 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp293 = p_f2;
        *$tmp292 = $tmp293;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp293));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp290));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp295;
    panda$core$String* $tmp298;
    org$pandalanguage$pandac$ASTNode* $tmp299;
    org$pandalanguage$pandac$ASTNode* $tmp302;
    panda$collections$ImmutableArray* $tmp303;
    panda$collections$ImmutableArray* $tmp306;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp294 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp294 = p_f0;
    {
        panda$core$String** $tmp296 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp295 = *$tmp296;
        panda$core$String** $tmp297 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp298 = p_f1;
        *$tmp297 = $tmp298;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp298));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp295));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp300 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp299 = *$tmp300;
        org$pandalanguage$pandac$ASTNode** $tmp301 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp302 = p_f2;
        *$tmp301 = $tmp302;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp302));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299));
    }
    {
        panda$collections$ImmutableArray** $tmp304 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp303 = *$tmp304;
        panda$collections$ImmutableArray** $tmp305 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp306 = p_f3;
        *$tmp305 = $tmp306;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp306));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp303));
    }
}
org$pandalanguage$pandac$Position org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$76_9310 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp311;
    org$pandalanguage$pandac$Position position313;
    org$pandalanguage$pandac$Position $finallyReturn314;
    org$pandalanguage$pandac$Position position319;
    org$pandalanguage$pandac$Position $finallyReturn320;
    org$pandalanguage$pandac$Position position325;
    org$pandalanguage$pandac$Position $finallyReturn326;
    org$pandalanguage$pandac$Position position331;
    org$pandalanguage$pandac$Position $finallyReturn332;
    org$pandalanguage$pandac$Position position337;
    org$pandalanguage$pandac$Position $finallyReturn338;
    org$pandalanguage$pandac$Position position343;
    org$pandalanguage$pandac$Position $finallyReturn344;
    org$pandalanguage$pandac$Position position349;
    org$pandalanguage$pandac$Position $finallyReturn350;
    org$pandalanguage$pandac$Position position355;
    org$pandalanguage$pandac$Position $finallyReturn356;
    org$pandalanguage$pandac$Position position361;
    org$pandalanguage$pandac$Position $finallyReturn362;
    org$pandalanguage$pandac$Position position367;
    org$pandalanguage$pandac$Position $finallyReturn368;
    org$pandalanguage$pandac$Position position373;
    org$pandalanguage$pandac$Position $finallyReturn374;
    org$pandalanguage$pandac$Position position379;
    org$pandalanguage$pandac$Position $finallyReturn380;
    org$pandalanguage$pandac$Position position385;
    org$pandalanguage$pandac$Position $finallyReturn386;
    org$pandalanguage$pandac$Position position391;
    org$pandalanguage$pandac$Position $finallyReturn392;
    org$pandalanguage$pandac$Position position397;
    org$pandalanguage$pandac$Position $finallyReturn398;
    org$pandalanguage$pandac$Position $finallyReturn402;
    org$pandalanguage$pandac$Position $tmp404;
    org$pandalanguage$pandac$Position position408;
    org$pandalanguage$pandac$Position $finallyReturn409;
    org$pandalanguage$pandac$Position position414;
    org$pandalanguage$pandac$Position $finallyReturn415;
    org$pandalanguage$pandac$Position position420;
    org$pandalanguage$pandac$Position $finallyReturn421;
    org$pandalanguage$pandac$Position position426;
    org$pandalanguage$pandac$Position $finallyReturn427;
    org$pandalanguage$pandac$Position position432;
    org$pandalanguage$pandac$Position $finallyReturn433;
    org$pandalanguage$pandac$IRNode* ir438 = NULL;
    org$pandalanguage$pandac$Position $finallyReturn439;
    org$pandalanguage$pandac$Position position446;
    org$pandalanguage$pandac$Position $finallyReturn447;
    org$pandalanguage$pandac$Position position452;
    org$pandalanguage$pandac$Position $finallyReturn453;
    org$pandalanguage$pandac$Position position458;
    org$pandalanguage$pandac$Position $finallyReturn459;
    org$pandalanguage$pandac$Position position464;
    org$pandalanguage$pandac$Position $finallyReturn465;
    org$pandalanguage$pandac$Position position470;
    org$pandalanguage$pandac$Position $finallyReturn471;
    org$pandalanguage$pandac$Position position476;
    org$pandalanguage$pandac$Position $finallyReturn477;
    org$pandalanguage$pandac$Position position482;
    org$pandalanguage$pandac$Position $finallyReturn483;
    org$pandalanguage$pandac$Position position488;
    org$pandalanguage$pandac$Position $finallyReturn489;
    org$pandalanguage$pandac$Position position494;
    org$pandalanguage$pandac$Position $finallyReturn495;
    org$pandalanguage$pandac$Position position500;
    org$pandalanguage$pandac$Position $finallyReturn501;
    org$pandalanguage$pandac$Position position506;
    org$pandalanguage$pandac$Position $finallyReturn507;
    org$pandalanguage$pandac$Position position512;
    org$pandalanguage$pandac$Position $finallyReturn513;
    org$pandalanguage$pandac$Position position518;
    org$pandalanguage$pandac$Position $finallyReturn519;
    org$pandalanguage$pandac$Position position524;
    org$pandalanguage$pandac$Position $finallyReturn525;
    org$pandalanguage$pandac$Position position530;
    org$pandalanguage$pandac$Position $finallyReturn531;
    org$pandalanguage$pandac$Position position536;
    org$pandalanguage$pandac$Position $finallyReturn537;
    org$pandalanguage$pandac$Position position542;
    org$pandalanguage$pandac$Position $finallyReturn543;
    org$pandalanguage$pandac$Position position548;
    org$pandalanguage$pandac$Position $finallyReturn549;
    org$pandalanguage$pandac$Position position554;
    org$pandalanguage$pandac$Position $finallyReturn555;
    org$pandalanguage$pandac$Position position560;
    org$pandalanguage$pandac$Position $finallyReturn561;
    int $tmp309;
    {
        $tmp311 = self;
        $match$76_9310 = $tmp311;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp311));
        panda$core$Bit $tmp312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp312.value) {
        {
            org$pandalanguage$pandac$Position* $tmp314 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position313 = *$tmp314;
            $finallyReturn314 = position313;
            $tmp309 = 0;
            goto $l307;
            $l316:;
            return $finallyReturn314;
        }
        }
        else {
        panda$core$Bit $tmp318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp318.value) {
        {
            org$pandalanguage$pandac$Position* $tmp320 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position319 = *$tmp320;
            $finallyReturn320 = position319;
            $tmp309 = 1;
            goto $l307;
            $l322:;
            return $finallyReturn320;
        }
        }
        else {
        panda$core$Bit $tmp324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp324.value) {
        {
            org$pandalanguage$pandac$Position* $tmp326 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position325 = *$tmp326;
            $finallyReturn326 = position325;
            $tmp309 = 2;
            goto $l307;
            $l328:;
            return $finallyReturn326;
        }
        }
        else {
        panda$core$Bit $tmp330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp330.value) {
        {
            org$pandalanguage$pandac$Position* $tmp332 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position331 = *$tmp332;
            $finallyReturn332 = position331;
            $tmp309 = 3;
            goto $l307;
            $l334:;
            return $finallyReturn332;
        }
        }
        else {
        panda$core$Bit $tmp336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp336.value) {
        {
            org$pandalanguage$pandac$Position* $tmp338 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position337 = *$tmp338;
            $finallyReturn338 = position337;
            $tmp309 = 4;
            goto $l307;
            $l340:;
            return $finallyReturn338;
        }
        }
        else {
        panda$core$Bit $tmp342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp342.value) {
        {
            org$pandalanguage$pandac$Position* $tmp344 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position343 = *$tmp344;
            $finallyReturn344 = position343;
            $tmp309 = 5;
            goto $l307;
            $l346:;
            return $finallyReturn344;
        }
        }
        else {
        panda$core$Bit $tmp348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp348.value) {
        {
            org$pandalanguage$pandac$Position* $tmp350 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position349 = *$tmp350;
            $finallyReturn350 = position349;
            $tmp309 = 6;
            goto $l307;
            $l352:;
            return $finallyReturn350;
        }
        }
        else {
        panda$core$Bit $tmp354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp354.value) {
        {
            org$pandalanguage$pandac$Position* $tmp356 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position355 = *$tmp356;
            $finallyReturn356 = position355;
            $tmp309 = 7;
            goto $l307;
            $l358:;
            return $finallyReturn356;
        }
        }
        else {
        panda$core$Bit $tmp360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp360.value) {
        {
            org$pandalanguage$pandac$Position* $tmp362 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position361 = *$tmp362;
            $finallyReturn362 = position361;
            $tmp309 = 8;
            goto $l307;
            $l364:;
            return $finallyReturn362;
        }
        }
        else {
        panda$core$Bit $tmp366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp366.value) {
        {
            org$pandalanguage$pandac$Position* $tmp368 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position367 = *$tmp368;
            $finallyReturn368 = position367;
            $tmp309 = 9;
            goto $l307;
            $l370:;
            return $finallyReturn368;
        }
        }
        else {
        panda$core$Bit $tmp372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp372.value) {
        {
            org$pandalanguage$pandac$Position* $tmp374 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position373 = *$tmp374;
            $finallyReturn374 = position373;
            $tmp309 = 10;
            goto $l307;
            $l376:;
            return $finallyReturn374;
        }
        }
        else {
        panda$core$Bit $tmp378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp378.value) {
        {
            org$pandalanguage$pandac$Position* $tmp380 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position379 = *$tmp380;
            $finallyReturn380 = position379;
            $tmp309 = 11;
            goto $l307;
            $l382:;
            return $finallyReturn380;
        }
        }
        else {
        panda$core$Bit $tmp384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp384.value) {
        {
            org$pandalanguage$pandac$Position* $tmp386 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position385 = *$tmp386;
            $finallyReturn386 = position385;
            $tmp309 = 12;
            goto $l307;
            $l388:;
            return $finallyReturn386;
        }
        }
        else {
        panda$core$Bit $tmp390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp390.value) {
        {
            org$pandalanguage$pandac$Position* $tmp392 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position391 = *$tmp392;
            $finallyReturn392 = position391;
            $tmp309 = 13;
            goto $l307;
            $l394:;
            return $finallyReturn392;
        }
        }
        else {
        panda$core$Bit $tmp396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp396.value) {
        {
            org$pandalanguage$pandac$Position* $tmp398 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position397 = *$tmp398;
            $finallyReturn398 = position397;
            $tmp309 = 14;
            goto $l307;
            $l400:;
            return $finallyReturn398;
        }
        }
        else {
        panda$core$Bit $tmp402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp402.value) {
        {
            org$pandalanguage$pandac$Position$init(&$tmp404);
            $finallyReturn402 = $tmp404;
            $tmp309 = 15;
            goto $l307;
            $l405:;
            return $finallyReturn402;
        }
        }
        else {
        panda$core$Bit $tmp407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp407.value) {
        {
            org$pandalanguage$pandac$Position* $tmp409 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position408 = *$tmp409;
            $finallyReturn409 = position408;
            $tmp309 = 16;
            goto $l307;
            $l411:;
            return $finallyReturn409;
        }
        }
        else {
        panda$core$Bit $tmp413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp413.value) {
        {
            org$pandalanguage$pandac$Position* $tmp415 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position414 = *$tmp415;
            $finallyReturn415 = position414;
            $tmp309 = 17;
            goto $l307;
            $l417:;
            return $finallyReturn415;
        }
        }
        else {
        panda$core$Bit $tmp419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp419.value) {
        {
            org$pandalanguage$pandac$Position* $tmp421 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position420 = *$tmp421;
            $finallyReturn421 = position420;
            $tmp309 = 18;
            goto $l307;
            $l423:;
            return $finallyReturn421;
        }
        }
        else {
        panda$core$Bit $tmp425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp425.value) {
        {
            org$pandalanguage$pandac$Position* $tmp427 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position426 = *$tmp427;
            $finallyReturn427 = position426;
            $tmp309 = 19;
            goto $l307;
            $l429:;
            return $finallyReturn427;
        }
        }
        else {
        panda$core$Bit $tmp431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp431.value) {
        {
            org$pandalanguage$pandac$Position* $tmp433 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position432 = *$tmp433;
            $finallyReturn433 = position432;
            $tmp309 = 20;
            goto $l307;
            $l435:;
            return $finallyReturn433;
        }
        }
        else {
        panda$core$Bit $tmp437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp437.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp439 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_9310->$data + 0));
            ir438 = *$tmp439;
            org$pandalanguage$pandac$Position $tmp442 = (($fn441) ir438->$class->vtable[3])(ir438);
            $finallyReturn439 = $tmp442;
            $tmp309 = 21;
            goto $l307;
            $l443:;
            return $finallyReturn439;
        }
        }
        else {
        panda$core$Bit $tmp445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp445.value) {
        {
            org$pandalanguage$pandac$Position* $tmp447 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position446 = *$tmp447;
            $finallyReturn447 = position446;
            $tmp309 = 22;
            goto $l307;
            $l449:;
            return $finallyReturn447;
        }
        }
        else {
        panda$core$Bit $tmp451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp451.value) {
        {
            org$pandalanguage$pandac$Position* $tmp453 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position452 = *$tmp453;
            $finallyReturn453 = position452;
            $tmp309 = 23;
            goto $l307;
            $l455:;
            return $finallyReturn453;
        }
        }
        else {
        panda$core$Bit $tmp457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp457.value) {
        {
            org$pandalanguage$pandac$Position* $tmp459 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position458 = *$tmp459;
            $finallyReturn459 = position458;
            $tmp309 = 24;
            goto $l307;
            $l461:;
            return $finallyReturn459;
        }
        }
        else {
        panda$core$Bit $tmp463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp463.value) {
        {
            org$pandalanguage$pandac$Position* $tmp465 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position464 = *$tmp465;
            $finallyReturn465 = position464;
            $tmp309 = 25;
            goto $l307;
            $l467:;
            return $finallyReturn465;
        }
        }
        else {
        panda$core$Bit $tmp469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp469.value) {
        {
            org$pandalanguage$pandac$Position* $tmp471 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position470 = *$tmp471;
            $finallyReturn471 = position470;
            $tmp309 = 26;
            goto $l307;
            $l473:;
            return $finallyReturn471;
        }
        }
        else {
        panda$core$Bit $tmp475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp475.value) {
        {
            org$pandalanguage$pandac$Position* $tmp477 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position476 = *$tmp477;
            $finallyReturn477 = position476;
            $tmp309 = 27;
            goto $l307;
            $l479:;
            return $finallyReturn477;
        }
        }
        else {
        panda$core$Bit $tmp481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp481.value) {
        {
            org$pandalanguage$pandac$Position* $tmp483 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position482 = *$tmp483;
            $finallyReturn483 = position482;
            $tmp309 = 28;
            goto $l307;
            $l485:;
            return $finallyReturn483;
        }
        }
        else {
        panda$core$Bit $tmp487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp487.value) {
        {
            org$pandalanguage$pandac$Position* $tmp489 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position488 = *$tmp489;
            $finallyReturn489 = position488;
            $tmp309 = 29;
            goto $l307;
            $l491:;
            return $finallyReturn489;
        }
        }
        else {
        panda$core$Bit $tmp493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp493.value) {
        {
            org$pandalanguage$pandac$Position* $tmp495 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position494 = *$tmp495;
            $finallyReturn495 = position494;
            $tmp309 = 30;
            goto $l307;
            $l497:;
            return $finallyReturn495;
        }
        }
        else {
        panda$core$Bit $tmp499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp499.value) {
        {
            org$pandalanguage$pandac$Position* $tmp501 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position500 = *$tmp501;
            $finallyReturn501 = position500;
            $tmp309 = 31;
            goto $l307;
            $l503:;
            return $finallyReturn501;
        }
        }
        else {
        panda$core$Bit $tmp505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp505.value) {
        {
            org$pandalanguage$pandac$Position* $tmp507 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position506 = *$tmp507;
            $finallyReturn507 = position506;
            $tmp309 = 32;
            goto $l307;
            $l509:;
            return $finallyReturn507;
        }
        }
        else {
        panda$core$Bit $tmp511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp511.value) {
        {
            org$pandalanguage$pandac$Position* $tmp513 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position512 = *$tmp513;
            $finallyReturn513 = position512;
            $tmp309 = 33;
            goto $l307;
            $l515:;
            return $finallyReturn513;
        }
        }
        else {
        panda$core$Bit $tmp517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp517.value) {
        {
            org$pandalanguage$pandac$Position* $tmp519 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position518 = *$tmp519;
            $finallyReturn519 = position518;
            $tmp309 = 34;
            goto $l307;
            $l521:;
            return $finallyReturn519;
        }
        }
        else {
        panda$core$Bit $tmp523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp523.value) {
        {
            org$pandalanguage$pandac$Position* $tmp525 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position524 = *$tmp525;
            $finallyReturn525 = position524;
            $tmp309 = 35;
            goto $l307;
            $l527:;
            return $finallyReturn525;
        }
        }
        else {
        panda$core$Bit $tmp529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp529.value) {
        {
            org$pandalanguage$pandac$Position* $tmp531 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position530 = *$tmp531;
            $finallyReturn531 = position530;
            $tmp309 = 36;
            goto $l307;
            $l533:;
            return $finallyReturn531;
        }
        }
        else {
        panda$core$Bit $tmp535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp535.value) {
        {
            org$pandalanguage$pandac$Position* $tmp537 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position536 = *$tmp537;
            $finallyReturn537 = position536;
            $tmp309 = 37;
            goto $l307;
            $l539:;
            return $finallyReturn537;
        }
        }
        else {
        panda$core$Bit $tmp541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp541.value) {
        {
            org$pandalanguage$pandac$Position* $tmp543 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position542 = *$tmp543;
            $finallyReturn543 = position542;
            $tmp309 = 38;
            goto $l307;
            $l545:;
            return $finallyReturn543;
        }
        }
        else {
        panda$core$Bit $tmp547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp547.value) {
        {
            org$pandalanguage$pandac$Position* $tmp549 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position548 = *$tmp549;
            $finallyReturn549 = position548;
            $tmp309 = 39;
            goto $l307;
            $l551:;
            return $finallyReturn549;
        }
        }
        else {
        panda$core$Bit $tmp553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp553.value) {
        {
            org$pandalanguage$pandac$Position* $tmp555 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position554 = *$tmp555;
            $finallyReturn555 = position554;
            $tmp309 = 40;
            goto $l307;
            $l557:;
            return $finallyReturn555;
        }
        }
        else {
        panda$core$Bit $tmp559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9310->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp559.value) {
        {
            org$pandalanguage$pandac$Position* $tmp561 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9310->$data + 0));
            position560 = *$tmp561;
            $finallyReturn561 = position560;
            $tmp309 = 41;
            goto $l307;
            $l563:;
            return $finallyReturn561;
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
    $tmp309 = -1;
    goto $l307;
    $l307:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp311));
    switch ($tmp309) {
        case 11: goto $l382;
        case 41: goto $l563;
        case 18: goto $l423;
        case 39: goto $l551;
        case 6: goto $l352;
        case 36: goto $l533;
        case 10: goto $l376;
        case 34: goto $l521;
        case 5: goto $l346;
        case 13: goto $l394;
        case 19: goto $l429;
        case 24: goto $l461;
        case 9: goto $l370;
        case 35: goto $l527;
        case 20: goto $l435;
        case 17: goto $l417;
        case 29: goto $l491;
        case 3: goto $l334;
        case 0: goto $l316;
        case 2: goto $l328;
        case 33: goto $l515;
        case 37: goto $l539;
        case 38: goto $l545;
        case 7: goto $l358;
        case 32: goto $l509;
        case 12: goto $l388;
        case 14: goto $l400;
        case -1: goto $l565;
        case 27: goto $l479;
        case 16: goto $l411;
        case 31: goto $l503;
        case 25: goto $l467;
        case 23: goto $l455;
        case 8: goto $l364;
        case 1: goto $l322;
        case 21: goto $l443;
        case 28: goto $l485;
        case 22: goto $l449;
        case 4: goto $l340;
        case 26: goto $l473;
        case 15: goto $l405;
        case 40: goto $l557;
        case 30: goto $l497;
    }
    $l565:;
}
panda$core$String* org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$167_9569 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp570;
    panda$core$String* name572 = NULL;
    panda$core$String* $finallyReturn573;
    panda$core$String* $tmp575;
    org$pandalanguage$pandac$ASTNode* test579 = NULL;
    org$pandalanguage$pandac$ASTNode* msg581 = NULL;
    panda$core$String* $finallyReturn582;
    panda$core$String* $tmp584;
    panda$core$String* $tmp585;
    panda$core$String* $tmp586;
    panda$core$String* $finallyReturn592;
    panda$core$String* $tmp594;
    panda$core$String* $tmp595;
    panda$core$String* $tmp596;
    panda$core$String* $tmp597;
    panda$core$String* $tmp598;
    org$pandalanguage$pandac$ASTNode* left609 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op611;
    org$pandalanguage$pandac$ASTNode* right613 = NULL;
    panda$core$String* $finallyReturn614;
    panda$core$String* $tmp616;
    panda$core$String* $tmp617;
    panda$core$String* $tmp618;
    panda$core$String* $tmp619;
    panda$core$String* $tmp620;
    panda$core$String* $tmp621;
    panda$core$String* $tmp622;
    panda$core$Object* $tmp627;
    panda$core$Bit value638;
    panda$core$String* $finallyReturn639;
    panda$core$String* $tmp641;
    panda$core$String* $tmp642;
    panda$collections$ImmutableArray* statements647 = NULL;
    panda$core$MutableString* result652 = NULL;
    panda$core$MutableString* $tmp653;
    panda$core$MutableString* $tmp654;
    panda$collections$Iterator* Iter$181$17660 = NULL;
    panda$collections$Iterator* $tmp661;
    panda$collections$Iterator* $tmp662;
    org$pandalanguage$pandac$ASTNode* s678 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp679;
    panda$core$Object* $tmp680;
    panda$core$String* $tmp685;
    panda$core$Char8 $tmp690;
    panda$core$String* $finallyReturn690;
    panda$core$String* $tmp692;
    panda$core$String* $tmp693;
    panda$core$String* label700 = NULL;
    panda$core$String* $finallyReturn701;
    panda$core$String* $tmp703;
    panda$core$String* $tmp704;
    panda$core$String* $tmp705;
    panda$core$String* $finallyReturn711;
    panda$core$String* $tmp713;
    org$pandalanguage$pandac$ASTNode* target718 = NULL;
    panda$collections$ImmutableArray* args720 = NULL;
    panda$core$String* $finallyReturn721;
    panda$core$String* $tmp723;
    panda$core$String* $tmp724;
    panda$core$String* $tmp725;
    panda$core$String* $tmp726;
    panda$core$String* $tmp727;
    panda$core$String* $tmp732;
    org$pandalanguage$pandac$ASTNode* dc740 = NULL;
    panda$core$String* name742 = NULL;
    panda$collections$ImmutableArray* fields744 = NULL;
    panda$core$MutableString* result749 = NULL;
    panda$core$MutableString* $tmp750;
    panda$core$MutableString* $tmp751;
    panda$core$String* $tmp753;
    panda$core$String* $tmp756;
    panda$core$String* $tmp757;
    panda$core$String* $tmp758;
    panda$core$String* $tmp759;
    panda$core$String* $tmp763;
    panda$core$String* $finallyReturn767;
    panda$core$String* $tmp769;
    panda$core$String* $tmp770;
    org$pandalanguage$pandac$ASTNode* base777 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce779 = NULL;
    panda$core$Int64 index781;
    panda$core$String* $finallyReturn782;
    panda$core$String* $tmp784;
    panda$core$String* $tmp785;
    panda$core$String* $tmp786;
    panda$core$String* $tmp787;
    panda$core$String* $tmp788;
    panda$core$String* $tmp789;
    panda$core$String* $tmp790;
    panda$core$Object* $tmp798;
    org$pandalanguage$pandac$ASTNode* dc806 = NULL;
    panda$collections$ImmutableArray* annotations808 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind810;
    panda$core$String* name812 = NULL;
    panda$collections$ImmutableArray* generics814 = NULL;
    panda$collections$ImmutableArray* supertypes816 = NULL;
    panda$collections$ImmutableArray* members818 = NULL;
    panda$core$MutableString* result823 = NULL;
    panda$core$MutableString* $tmp824;
    panda$core$MutableString* $tmp825;
    panda$core$String* $tmp827;
    panda$collections$Iterator* Iter$207$17833 = NULL;
    panda$collections$Iterator* $tmp834;
    panda$collections$Iterator* $tmp835;
    org$pandalanguage$pandac$ASTNode* a851 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp852;
    panda$core$Object* $tmp853;
    panda$core$String* $tmp858;
    org$pandalanguage$pandac$ClassDecl$Kind $match$210_17863;
    panda$core$String* $tmp870;
    panda$core$String* $tmp871;
    panda$core$String* $tmp873;
    panda$core$String* $tmp878;
    panda$core$String* $tmp879;
    panda$core$String* $tmp881;
    panda$collections$Iterator* Iter$223$17890 = NULL;
    panda$collections$Iterator* $tmp891;
    panda$collections$Iterator* $tmp892;
    org$pandalanguage$pandac$ASTNode* m908 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp909;
    panda$core$Object* $tmp910;
    panda$core$String* $tmp915;
    panda$core$Char8 $tmp920;
    panda$core$String* $finallyReturn920;
    panda$core$String* $tmp922;
    panda$core$String* $tmp923;
    panda$core$String* label930 = NULL;
    panda$core$String* $finallyReturn931;
    panda$core$String* $tmp933;
    panda$core$String* $tmp934;
    panda$core$String* $tmp935;
    panda$core$String* $finallyReturn941;
    panda$core$String* $tmp943;
    org$pandalanguage$pandac$ASTNode* target948 = NULL;
    org$pandalanguage$pandac$ASTNode* value950 = NULL;
    panda$core$String* $finallyReturn951;
    panda$core$String* $tmp953;
    panda$core$String* $tmp954;
    panda$core$String* $tmp955;
    panda$core$String* $tmp956;
    panda$core$String* $tmp957;
    panda$core$String* $finallyReturn966;
    panda$core$String* $tmp968;
    panda$core$String* $tmp969;
    panda$core$String* label975 = NULL;
    panda$collections$ImmutableArray* statements977 = NULL;
    org$pandalanguage$pandac$ASTNode* test979 = NULL;
    panda$core$MutableString* result984 = NULL;
    panda$core$MutableString* $tmp985;
    panda$core$MutableString* $tmp986;
    panda$core$String* $tmp988;
    panda$core$String* $tmp989;
    panda$collections$Iterator* Iter$244$17997 = NULL;
    panda$collections$Iterator* $tmp998;
    panda$collections$Iterator* $tmp999;
    org$pandalanguage$pandac$ASTNode* s1015 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1016;
    panda$core$Object* $tmp1017;
    panda$core$String* $tmp1022;
    panda$core$String* $tmp1027;
    panda$core$String* $tmp1028;
    panda$core$String* $finallyReturn1032;
    panda$core$String* $tmp1034;
    panda$core$String* $tmp1035;
    org$pandalanguage$pandac$ASTNode* base1042 = NULL;
    panda$core$String* field1044 = NULL;
    panda$core$String* $finallyReturn1045;
    panda$core$String* $tmp1047;
    panda$core$String* $tmp1048;
    panda$core$String* $tmp1049;
    panda$core$String* $tmp1050;
    panda$core$String* $tmp1051;
    org$pandalanguage$pandac$ASTNode* dc1062 = NULL;
    panda$collections$ImmutableArray* annotations1064 = NULL;
    org$pandalanguage$pandac$ASTNode* decl1066 = NULL;
    panda$core$MutableString* result1071 = NULL;
    panda$core$MutableString* $tmp1072;
    panda$core$MutableString* $tmp1073;
    panda$core$String* $tmp1075;
    panda$collections$Iterator* Iter$256$171081 = NULL;
    panda$collections$Iterator* $tmp1082;
    panda$collections$Iterator* $tmp1083;
    org$pandalanguage$pandac$ASTNode* a1099 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1100;
    panda$core$Object* $tmp1101;
    panda$core$String* $tmp1106;
    panda$core$String* $finallyReturn1110;
    panda$core$String* $tmp1112;
    panda$core$String* $tmp1113;
    panda$collections$ImmutableArray* entries1120 = NULL;
    panda$core$MutableString* result1125 = NULL;
    panda$core$MutableString* $tmp1126;
    panda$core$MutableString* $tmp1127;
    panda$collections$Iterator* Iter$263$171132 = NULL;
    panda$collections$Iterator* $tmp1133;
    panda$collections$Iterator* $tmp1134;
    org$pandalanguage$pandac$ASTNode* e1150 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1151;
    panda$core$Object* $tmp1152;
    panda$core$String* $tmp1157;
    panda$core$String* $finallyReturn1161;
    panda$core$String* $tmp1163;
    panda$core$String* $tmp1164;
    panda$core$String* label1171 = NULL;
    org$pandalanguage$pandac$ASTNode* target1173 = NULL;
    org$pandalanguage$pandac$ASTNode* list1175 = NULL;
    panda$collections$ImmutableArray* statements1177 = NULL;
    panda$core$MutableString* result1182 = NULL;
    panda$core$MutableString* $tmp1183;
    panda$core$MutableString* $tmp1184;
    panda$core$String* $tmp1186;
    panda$core$String* $tmp1189;
    panda$core$String* $tmp1190;
    panda$core$String* $tmp1191;
    panda$core$String* $tmp1192;
    panda$collections$Iterator* Iter$273$171203 = NULL;
    panda$collections$Iterator* $tmp1204;
    panda$collections$Iterator* $tmp1205;
    org$pandalanguage$pandac$ASTNode* s1221 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1222;
    panda$core$Object* $tmp1223;
    panda$core$String* $tmp1228;
    panda$core$Char8 $tmp1233;
    panda$core$String* $finallyReturn1233;
    panda$core$String* $tmp1235;
    panda$core$String* $tmp1236;
    panda$core$String* name1243 = NULL;
    panda$collections$ImmutableArray* subtypes1245 = NULL;
    panda$core$String* $finallyReturn1246;
    panda$core$String* $tmp1248;
    panda$core$String* $tmp1249;
    panda$core$String* $tmp1250;
    panda$core$String* $tmp1251;
    panda$core$String* $tmp1252;
    panda$core$String* $tmp1256;
    panda$core$String* name1264 = NULL;
    panda$core$String* $finallyReturn1265;
    panda$core$String* $tmp1267;
    org$pandalanguage$pandac$ASTNode* test1271 = NULL;
    panda$collections$ImmutableArray* ifTrue1273 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse1275 = NULL;
    panda$core$MutableString* result1280 = NULL;
    panda$core$MutableString* $tmp1281;
    panda$core$MutableString* $tmp1282;
    panda$core$String* $tmp1284;
    panda$core$String* $tmp1285;
    panda$collections$Iterator* Iter$284$171293 = NULL;
    panda$collections$Iterator* $tmp1294;
    panda$collections$Iterator* $tmp1295;
    org$pandalanguage$pandac$ASTNode* s1311 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1312;
    panda$core$Object* $tmp1313;
    panda$core$String* $tmp1318;
    panda$core$Char8 $tmp1323;
    panda$core$String* $tmp1324;
    panda$core$String* $tmp1325;
    panda$core$String* $finallyReturn1329;
    panda$core$String* $tmp1331;
    panda$core$String* $tmp1332;
    panda$core$UInt64 value1339;
    panda$core$String* $finallyReturn1340;
    panda$core$String* $tmp1342;
    panda$core$String* $tmp1343;
    org$pandalanguage$pandac$IRNode* ir1348 = NULL;
    panda$core$String* $finallyReturn1349;
    panda$core$String* $tmp1351;
    panda$core$String* $tmp1352;
    panda$core$String* label1358 = NULL;
    panda$collections$ImmutableArray* statements1360 = NULL;
    panda$core$MutableString* result1365 = NULL;
    panda$core$MutableString* $tmp1366;
    panda$core$MutableString* $tmp1367;
    panda$core$String* $tmp1369;
    panda$core$String* $tmp1370;
    panda$collections$Iterator* Iter$302$171378 = NULL;
    panda$collections$Iterator* $tmp1379;
    panda$collections$Iterator* $tmp1380;
    org$pandalanguage$pandac$ASTNode* s1396 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1397;
    panda$core$Object* $tmp1398;
    panda$core$String* $tmp1403;
    panda$core$Char8 $tmp1408;
    panda$core$String* $finallyReturn1408;
    panda$core$String* $tmp1410;
    panda$core$String* $tmp1411;
    org$pandalanguage$pandac$ASTNode* value1418 = NULL;
    panda$collections$ImmutableArray* whens1420 = NULL;
    panda$collections$ImmutableArray* other1422 = NULL;
    panda$core$MutableString* result1427 = NULL;
    panda$core$MutableString* $tmp1428;
    panda$core$MutableString* $tmp1429;
    panda$core$String* $tmp1431;
    panda$core$String* $tmp1432;
    panda$collections$Iterator* Iter$309$171440 = NULL;
    panda$collections$Iterator* $tmp1441;
    panda$collections$Iterator* $tmp1442;
    org$pandalanguage$pandac$ASTNode* w1458 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1459;
    panda$core$Object* $tmp1460;
    panda$core$String* $tmp1465;
    panda$core$String* $tmp1470;
    panda$core$Char8 $tmp1473;
    panda$core$String* $finallyReturn1473;
    panda$core$String* $tmp1475;
    panda$core$String* $tmp1476;
    org$pandalanguage$pandac$ASTNode* dc1483 = NULL;
    panda$collections$ImmutableArray* annotations1485 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1487;
    panda$core$String* name1489 = NULL;
    panda$collections$ImmutableArray* parameters1491 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1493 = NULL;
    panda$collections$ImmutableArray* statements1495 = NULL;
    panda$core$MutableString* result1500 = NULL;
    panda$core$MutableString* $tmp1501;
    panda$core$MutableString* $tmp1502;
    panda$core$String* $tmp1504;
    panda$collections$Iterator* Iter$322$171510 = NULL;
    panda$collections$Iterator* $tmp1511;
    panda$collections$Iterator* $tmp1512;
    org$pandalanguage$pandac$ASTNode* a1528 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1529;
    panda$core$Object* $tmp1530;
    panda$core$String* $tmp1535;
    org$pandalanguage$pandac$MethodDecl$Kind $match$325_171540;
    panda$core$String* $tmp1546;
    panda$core$String* $tmp1547;
    panda$core$String* $tmp1548;
    panda$core$String* $tmp1549;
    panda$core$String* $tmp1553;
    panda$core$String* $tmp1558;
    panda$core$String* $tmp1559;
    panda$collections$Iterator* Iter$336$211568 = NULL;
    panda$collections$Iterator* $tmp1569;
    panda$collections$Iterator* $tmp1570;
    org$pandalanguage$pandac$ASTNode* s1586 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1587;
    panda$core$Object* $tmp1588;
    panda$core$String* $tmp1593;
    panda$core$Char8 $tmp1598;
    panda$core$String* $finallyReturn1598;
    panda$core$String* $tmp1600;
    panda$core$String* $tmp1601;
    panda$core$String* $finallyReturn1607;
    panda$core$String* $tmp1609;
    org$pandalanguage$pandac$ASTNode* base1614 = NULL;
    panda$core$String* $finallyReturn1615;
    panda$core$String* $tmp1617;
    panda$core$String* $tmp1618;
    panda$core$String* name1624 = NULL;
    panda$core$String* $finallyReturn1625;
    panda$core$String* $tmp1627;
    panda$core$String* name1631 = NULL;
    org$pandalanguage$pandac$ASTNode* type1633 = NULL;
    panda$core$String* $finallyReturn1634;
    panda$core$String* $tmp1636;
    panda$core$String* $tmp1637;
    panda$core$String* $tmp1638;
    panda$core$String* $tmp1639;
    panda$core$String* $tmp1640;
    org$pandalanguage$pandac$parser$Token$Kind kind1650;
    org$pandalanguage$pandac$ASTNode* base1652 = NULL;
    panda$core$String* $finallyReturn1653;
    panda$core$String* $tmp1655;
    panda$core$String* $tmp1656;
    panda$core$String* $tmp1657;
    panda$core$String* $tmp1658;
    panda$core$String* $tmp1659;
    panda$core$Object* $tmp1660;
    org$pandalanguage$pandac$ASTNode* start1672 = NULL;
    org$pandalanguage$pandac$ASTNode* end1674 = NULL;
    panda$core$Bit inclusive1676;
    org$pandalanguage$pandac$ASTNode* step1678 = NULL;
    panda$core$MutableString* result1683 = NULL;
    panda$core$MutableString* $tmp1684;
    panda$core$MutableString* $tmp1685;
    org$pandalanguage$pandac$ASTNode* $tmp1687;
    org$pandalanguage$pandac$ASTNode* $tmp1695;
    org$pandalanguage$pandac$ASTNode* $tmp1701;
    panda$core$String* $tmp1707;
    panda$core$String* $finallyReturn1709;
    panda$core$String* $tmp1711;
    panda$core$String* $tmp1712;
    panda$core$Real64 value1719;
    panda$core$String* $finallyReturn1720;
    panda$core$String* $tmp1722;
    panda$core$String* $tmp1723;
    org$pandalanguage$pandac$ASTNode* value1728 = NULL;
    panda$core$String* $finallyReturn1729;
    panda$core$String* $tmp1731;
    panda$core$String* $tmp1732;
    panda$core$String* $tmp1733;
    panda$core$String* $finallyReturn1739;
    panda$core$String* $tmp1741;
    panda$core$String* $finallyReturn1745;
    panda$core$String* $tmp1747;
    panda$core$String* str1752 = NULL;
    panda$core$String* $finallyReturn1753;
    panda$core$String* $tmp1755;
    panda$core$String* $finallyReturn1758;
    panda$core$String* $tmp1760;
    panda$core$String* name1765 = NULL;
    panda$core$String* $finallyReturn1766;
    panda$core$String* $tmp1768;
    panda$core$String* name1772 = NULL;
    org$pandalanguage$pandac$ASTNode* type1774 = NULL;
    panda$core$String* $finallyReturn1775;
    panda$core$String* $tmp1777;
    panda$core$String* $tmp1778;
    panda$core$String* $tmp1779;
    panda$core$String* $tmp1780;
    panda$core$String* $tmp1781;
    panda$core$String* $finallyReturn1789;
    panda$core$String* $tmp1791;
    panda$core$String* name1795 = NULL;
    panda$core$String* $finallyReturn1796;
    panda$core$String* $tmp1798;
    org$pandalanguage$pandac$Variable$Kind kind1802;
    panda$collections$ImmutableArray* decls1804 = NULL;
    panda$core$MutableString* result1809 = NULL;
    panda$core$MutableString* $tmp1810;
    panda$core$MutableString* $tmp1811;
    org$pandalanguage$pandac$Variable$Kind $match$394_171813;
    panda$core$String* $tmp1822;
    panda$core$String* $finallyReturn1823;
    panda$core$String* $tmp1825;
    panda$core$String* $tmp1826;
    panda$collections$ImmutableArray* tests1833 = NULL;
    panda$collections$ImmutableArray* statements1835 = NULL;
    panda$core$MutableString* result1840 = NULL;
    panda$core$MutableString* $tmp1841;
    panda$core$MutableString* $tmp1842;
    panda$core$String* separator1845 = NULL;
    panda$core$String* $tmp1846;
    panda$collections$Iterator* Iter$405$171851 = NULL;
    panda$collections$Iterator* $tmp1852;
    panda$collections$Iterator* $tmp1853;
    org$pandalanguage$pandac$ASTNode* t1869 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1870;
    panda$core$Object* $tmp1871;
    panda$core$String* $tmp1876;
    panda$core$String* $tmp1877;
    panda$core$String* $tmp1878;
    panda$core$String* $tmp1879;
    panda$core$Char8 $tmp1888;
    panda$collections$Iterator* Iter$409$171892 = NULL;
    panda$collections$Iterator* $tmp1893;
    panda$collections$Iterator* $tmp1894;
    org$pandalanguage$pandac$ASTNode* s1910 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1911;
    panda$core$Object* $tmp1912;
    panda$core$String* $tmp1917;
    panda$core$String* $finallyReturn1921;
    panda$core$String* $tmp1923;
    panda$core$String* $tmp1924;
    panda$core$String* label1931 = NULL;
    org$pandalanguage$pandac$ASTNode* test1933 = NULL;
    panda$collections$ImmutableArray* statements1935 = NULL;
    panda$core$MutableString* result1940 = NULL;
    panda$core$MutableString* $tmp1941;
    panda$core$MutableString* $tmp1942;
    panda$core$String* $tmp1944;
    panda$core$String* $tmp1945;
    panda$core$String* $tmp1949;
    panda$core$String* $tmp1950;
    panda$collections$Iterator* Iter$419$171958 = NULL;
    panda$collections$Iterator* $tmp1959;
    panda$collections$Iterator* $tmp1960;
    org$pandalanguage$pandac$ASTNode* s1976 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1977;
    panda$core$Object* $tmp1978;
    panda$core$String* $tmp1983;
    panda$core$Char8 $tmp1988;
    panda$core$String* $finallyReturn1988;
    panda$core$String* $tmp1990;
    panda$core$String* $tmp1991;
    int $tmp568;
    {
        $tmp570 = self;
        $match$167_9569 = $tmp570;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp570));
        panda$core$Bit $tmp571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp571.value) {
        {
            panda$core$String** $tmp573 = ((panda$core$String**) ((char*) $match$167_9569->$data + 16));
            name572 = *$tmp573;
            $tmp575 = name572;
            $finallyReturn573 = $tmp575;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp575));
            $tmp568 = 0;
            goto $l566;
            $l576:;
            return $finallyReturn573;
        }
        }
        else {
        panda$core$Bit $tmp578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp578.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp580 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 16));
            test579 = *$tmp580;
            org$pandalanguage$pandac$ASTNode** $tmp582 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 24));
            msg581 = *$tmp582;
            if (((panda$core$Bit) { msg581 == NULL }).value) {
            {
                panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s587, ((panda$core$Object*) test579));
                $tmp586 = $tmp588;
                panda$core$String* $tmp590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp586, &$s589);
                $tmp585 = $tmp590;
                $tmp584 = $tmp585;
                $finallyReturn582 = $tmp584;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp584));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp585));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp586));
                $tmp568 = 1;
                goto $l566;
                $l591:;
                return $finallyReturn582;
            }
            }
            panda$core$String* $tmp600 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s599, ((panda$core$Object*) test579));
            $tmp598 = $tmp600;
            panda$core$String* $tmp602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp598, &$s601);
            $tmp597 = $tmp602;
            panda$core$String* $tmp603 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp597, ((panda$core$Object*) msg581));
            $tmp596 = $tmp603;
            panda$core$String* $tmp605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp596, &$s604);
            $tmp595 = $tmp605;
            $tmp594 = $tmp595;
            $finallyReturn592 = $tmp594;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp594));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp595));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp596));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp597));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp598));
            $tmp568 = 2;
            goto $l566;
            $l606:;
            return $finallyReturn592;
        }
        }
        else {
        panda$core$Bit $tmp608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp608.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp610 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 16));
            left609 = *$tmp610;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp612 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$167_9569->$data + 24));
            op611 = *$tmp612;
            org$pandalanguage$pandac$ASTNode** $tmp614 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 32));
            right613 = *$tmp614;
            panda$core$String* $tmp624 = (($fn623) left609->$class->vtable[0])(left609);
            $tmp622 = $tmp624;
            panda$core$String* $tmp626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp622, &$s625);
            $tmp621 = $tmp626;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp628;
            $tmp628 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp628->value = op611;
            $tmp627 = ((panda$core$Object*) $tmp628);
            panda$core$String* $tmp629 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp621, $tmp627);
            $tmp620 = $tmp629;
            panda$core$String* $tmp631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp620, &$s630);
            $tmp619 = $tmp631;
            panda$core$String* $tmp632 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp619, ((panda$core$Object*) right613));
            $tmp618 = $tmp632;
            panda$core$String* $tmp634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp618, &$s633);
            $tmp617 = $tmp634;
            $tmp616 = $tmp617;
            $finallyReturn614 = $tmp616;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp616));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp617));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp618));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp619));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp620));
            panda$core$Panda$unref$panda$core$Object($tmp627);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp621));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp622));
            $tmp568 = 3;
            goto $l566;
            $l635:;
            return $finallyReturn614;
        }
        }
        else {
        panda$core$Bit $tmp637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp637.value) {
        {
            panda$core$Bit* $tmp639 = ((panda$core$Bit*) ((char*) $match$167_9569->$data + 16));
            value638 = *$tmp639;
            panda$core$String* $tmp643 = panda$core$Bit$convert$R$panda$core$String(value638);
            $tmp642 = $tmp643;
            $tmp641 = $tmp642;
            $finallyReturn639 = $tmp641;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp641));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp642));
            $tmp568 = 4;
            goto $l566;
            $l644:;
            return $finallyReturn639;
        }
        }
        else {
        panda$core$Bit $tmp646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp646.value) {
        {
            panda$collections$ImmutableArray** $tmp648 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9569->$data + 16));
            statements647 = *$tmp648;
            int $tmp651;
            {
                panda$core$MutableString* $tmp655 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp655, &$s656);
                $tmp654 = $tmp655;
                $tmp653 = $tmp654;
                result652 = $tmp653;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp653));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp654));
                {
                    int $tmp659;
                    {
                        ITable* $tmp663 = ((panda$collections$Iterable*) statements647)->$class->itable;
                        while ($tmp663->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp663 = $tmp663->next;
                        }
                        $fn665 $tmp664 = $tmp663->methods[0];
                        panda$collections$Iterator* $tmp666 = $tmp664(((panda$collections$Iterable*) statements647));
                        $tmp662 = $tmp666;
                        $tmp661 = $tmp662;
                        Iter$181$17660 = $tmp661;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp661));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp662));
                        $l667:;
                        ITable* $tmp670 = Iter$181$17660->$class->itable;
                        while ($tmp670->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp670 = $tmp670->next;
                        }
                        $fn672 $tmp671 = $tmp670->methods[0];
                        panda$core$Bit $tmp673 = $tmp671(Iter$181$17660);
                        panda$core$Bit $tmp674 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp673);
                        bool $tmp669 = $tmp674.value;
                        if (!$tmp669) goto $l668;
                        {
                            int $tmp677;
                            {
                                ITable* $tmp681 = Iter$181$17660->$class->itable;
                                while ($tmp681->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp681 = $tmp681->next;
                                }
                                $fn683 $tmp682 = $tmp681->methods[1];
                                panda$core$Object* $tmp684 = $tmp682(Iter$181$17660);
                                $tmp680 = $tmp684;
                                $tmp679 = ((org$pandalanguage$pandac$ASTNode*) $tmp680);
                                s678 = $tmp679;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp679));
                                panda$core$Panda$unref$panda$core$Object($tmp680);
                                panda$core$String* $tmp687 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s678), &$s686);
                                $tmp685 = $tmp687;
                                panda$core$MutableString$append$panda$core$String(result652, $tmp685);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp685));
                            }
                            $tmp677 = -1;
                            goto $l675;
                            $l675:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s678));
                            s678 = NULL;
                            switch ($tmp677) {
                                case -1: goto $l688;
                            }
                            $l688:;
                        }
                        goto $l667;
                        $l668:;
                    }
                    $tmp659 = -1;
                    goto $l657;
                    $l657:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$181$17660));
                    Iter$181$17660 = NULL;
                    switch ($tmp659) {
                        case -1: goto $l689;
                    }
                    $l689:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp690, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result652, $tmp690);
                panda$core$String* $tmp694 = panda$core$MutableString$finish$R$panda$core$String(result652);
                $tmp693 = $tmp694;
                $tmp692 = $tmp693;
                $finallyReturn690 = $tmp692;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp692));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp693));
                $tmp651 = 0;
                goto $l649;
                $l695:;
                $tmp568 = 5;
                goto $l566;
                $l696:;
                return $finallyReturn690;
            }
            $l649:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result652));
            result652 = NULL;
            switch ($tmp651) {
                case 0: goto $l695;
            }
            $l698:;
        }
        }
        else {
        panda$core$Bit $tmp699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp699.value) {
        {
            panda$core$String** $tmp701 = ((panda$core$String**) ((char*) $match$167_9569->$data + 16));
            label700 = *$tmp701;
            if (((panda$core$Bit) { label700 != NULL }).value) {
            {
                panda$core$String* $tmp707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s706, label700);
                $tmp705 = $tmp707;
                panda$core$String* $tmp709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp705, &$s708);
                $tmp704 = $tmp709;
                $tmp703 = $tmp704;
                $finallyReturn701 = $tmp703;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp703));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp704));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp705));
                $tmp568 = 6;
                goto $l566;
                $l710:;
                return $finallyReturn701;
            }
            }
            $tmp713 = &$s714;
            $finallyReturn711 = $tmp713;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp713));
            $tmp568 = 7;
            goto $l566;
            $l715:;
            return $finallyReturn711;
        }
        }
        else {
        panda$core$Bit $tmp717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp717.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp719 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 16));
            target718 = *$tmp719;
            panda$collections$ImmutableArray** $tmp721 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9569->$data + 24));
            args720 = *$tmp721;
            panda$core$String* $tmp729 = (($fn728) target718->$class->vtable[0])(target718);
            $tmp727 = $tmp729;
            panda$core$String* $tmp731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp727, &$s730);
            $tmp726 = $tmp731;
            panda$core$String* $tmp733 = panda$collections$ImmutableArray$join$R$panda$core$String(args720);
            $tmp732 = $tmp733;
            panda$core$String* $tmp734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp726, $tmp732);
            $tmp725 = $tmp734;
            panda$core$String* $tmp736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp725, &$s735);
            $tmp724 = $tmp736;
            $tmp723 = $tmp724;
            $finallyReturn721 = $tmp723;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp723));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp724));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp725));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp732));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp726));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp727));
            $tmp568 = 8;
            goto $l566;
            $l737:;
            return $finallyReturn721;
        }
        }
        else {
        panda$core$Bit $tmp739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp739.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp741 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 16));
            dc740 = *$tmp741;
            panda$core$String** $tmp743 = ((panda$core$String**) ((char*) $match$167_9569->$data + 24));
            name742 = *$tmp743;
            panda$collections$ImmutableArray** $tmp745 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9569->$data + 32));
            fields744 = *$tmp745;
            int $tmp748;
            {
                panda$core$MutableString* $tmp752 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp752);
                $tmp751 = $tmp752;
                $tmp750 = $tmp751;
                result749 = $tmp750;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp750));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp751));
                if (((panda$core$Bit) { dc740 != NULL }).value) {
                {
                    panda$core$String* $tmp755 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc740), &$s754);
                    $tmp753 = $tmp755;
                    panda$core$MutableString$append$panda$core$String(result749, $tmp753);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp753));
                }
                }
                panda$core$String* $tmp760 = panda$core$String$convert$R$panda$core$String(name742);
                $tmp759 = $tmp760;
                panda$core$String* $tmp762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp759, &$s761);
                $tmp758 = $tmp762;
                panda$core$String* $tmp764 = panda$collections$ImmutableArray$join$R$panda$core$String(fields744);
                $tmp763 = $tmp764;
                panda$core$String* $tmp765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp758, $tmp763);
                $tmp757 = $tmp765;
                panda$core$String* $tmp767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp757, &$s766);
                $tmp756 = $tmp767;
                panda$core$MutableString$append$panda$core$String(result749, $tmp756);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp756));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp757));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp763));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp758));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp759));
                panda$core$String* $tmp771 = panda$core$MutableString$finish$R$panda$core$String(result749);
                $tmp770 = $tmp771;
                $tmp769 = $tmp770;
                $finallyReturn767 = $tmp769;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp769));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp770));
                $tmp748 = 0;
                goto $l746;
                $l772:;
                $tmp568 = 9;
                goto $l566;
                $l773:;
                return $finallyReturn767;
            }
            $l746:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result749));
            result749 = NULL;
            switch ($tmp748) {
                case 0: goto $l772;
            }
            $l775:;
        }
        }
        else {
        panda$core$Bit $tmp776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp776.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp778 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 16));
            base777 = *$tmp778;
            org$pandalanguage$pandac$ChoiceEntry** $tmp780 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$167_9569->$data + 24));
            ce779 = *$tmp780;
            panda$core$Int64* $tmp782 = ((panda$core$Int64*) ((char*) $match$167_9569->$data + 32));
            index781 = *$tmp782;
            panda$core$String* $tmp792 = (($fn791) base777->$class->vtable[0])(base777);
            $tmp790 = $tmp792;
            panda$core$String* $tmp794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp790, &$s793);
            $tmp789 = $tmp794;
            panda$core$String* $tmp795 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp789, ((panda$core$Object*) ce779));
            $tmp788 = $tmp795;
            panda$core$String* $tmp797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp788, &$s796);
            $tmp787 = $tmp797;
            panda$core$Int64$wrapper* $tmp799;
            $tmp799 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp799->value = index781;
            $tmp798 = ((panda$core$Object*) $tmp799);
            panda$core$String* $tmp800 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp787, $tmp798);
            $tmp786 = $tmp800;
            panda$core$String* $tmp802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp786, &$s801);
            $tmp785 = $tmp802;
            $tmp784 = $tmp785;
            $finallyReturn782 = $tmp784;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp784));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp785));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp786));
            panda$core$Panda$unref$panda$core$Object($tmp798);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp787));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp788));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp789));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp790));
            $tmp568 = 10;
            goto $l566;
            $l803:;
            return $finallyReturn782;
        }
        }
        else {
        panda$core$Bit $tmp805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp805.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp807 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 16));
            dc806 = *$tmp807;
            panda$collections$ImmutableArray** $tmp809 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9569->$data + 24));
            annotations808 = *$tmp809;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp811 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$167_9569->$data + 32));
            kind810 = *$tmp811;
            panda$core$String** $tmp813 = ((panda$core$String**) ((char*) $match$167_9569->$data + 40));
            name812 = *$tmp813;
            panda$collections$ImmutableArray** $tmp815 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9569->$data + 48));
            generics814 = *$tmp815;
            panda$collections$ImmutableArray** $tmp817 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9569->$data + 56));
            supertypes816 = *$tmp817;
            panda$collections$ImmutableArray** $tmp819 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9569->$data + 64));
            members818 = *$tmp819;
            int $tmp822;
            {
                panda$core$MutableString* $tmp826 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp826);
                $tmp825 = $tmp826;
                $tmp824 = $tmp825;
                result823 = $tmp824;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp824));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp825));
                if (((panda$core$Bit) { dc806 != NULL }).value) {
                {
                    panda$core$String* $tmp829 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc806), &$s828);
                    $tmp827 = $tmp829;
                    panda$core$MutableString$append$panda$core$String(result823, $tmp827);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp827));
                }
                }
                {
                    int $tmp832;
                    {
                        ITable* $tmp836 = ((panda$collections$Iterable*) annotations808)->$class->itable;
                        while ($tmp836->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp836 = $tmp836->next;
                        }
                        $fn838 $tmp837 = $tmp836->methods[0];
                        panda$collections$Iterator* $tmp839 = $tmp837(((panda$collections$Iterable*) annotations808));
                        $tmp835 = $tmp839;
                        $tmp834 = $tmp835;
                        Iter$207$17833 = $tmp834;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp834));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp835));
                        $l840:;
                        ITable* $tmp843 = Iter$207$17833->$class->itable;
                        while ($tmp843->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp843 = $tmp843->next;
                        }
                        $fn845 $tmp844 = $tmp843->methods[0];
                        panda$core$Bit $tmp846 = $tmp844(Iter$207$17833);
                        panda$core$Bit $tmp847 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp846);
                        bool $tmp842 = $tmp847.value;
                        if (!$tmp842) goto $l841;
                        {
                            int $tmp850;
                            {
                                ITable* $tmp854 = Iter$207$17833->$class->itable;
                                while ($tmp854->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp854 = $tmp854->next;
                                }
                                $fn856 $tmp855 = $tmp854->methods[1];
                                panda$core$Object* $tmp857 = $tmp855(Iter$207$17833);
                                $tmp853 = $tmp857;
                                $tmp852 = ((org$pandalanguage$pandac$ASTNode*) $tmp853);
                                a851 = $tmp852;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp852));
                                panda$core$Panda$unref$panda$core$Object($tmp853);
                                panda$core$String* $tmp860 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a851), &$s859);
                                $tmp858 = $tmp860;
                                panda$core$MutableString$append$panda$core$String(result823, $tmp858);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp858));
                            }
                            $tmp850 = -1;
                            goto $l848;
                            $l848:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a851));
                            a851 = NULL;
                            switch ($tmp850) {
                                case -1: goto $l861;
                            }
                            $l861:;
                        }
                        goto $l840;
                        $l841:;
                    }
                    $tmp832 = -1;
                    goto $l830;
                    $l830:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$207$17833));
                    Iter$207$17833 = NULL;
                    switch ($tmp832) {
                        case -1: goto $l862;
                    }
                    $l862:;
                }
                {
                    $match$210_17863 = kind810;
                    panda$core$Bit $tmp864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$210_17863.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp864.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result823, &$s865);
                    }
                    }
                    else {
                    panda$core$Bit $tmp866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$210_17863.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp866.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result823, &$s867);
                    }
                    }
                    else {
                    panda$core$Bit $tmp868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$210_17863.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp868.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result823, &$s869);
                    }
                    }
                    }
                    }
                }
                panda$core$MutableString$append$panda$core$String(result823, name812);
                if (((panda$core$Bit) { generics814 != NULL }).value) {
                {
                    panda$core$String* $tmp874 = panda$collections$ImmutableArray$join$R$panda$core$String(generics814);
                    $tmp873 = $tmp874;
                    panda$core$String* $tmp875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s872, $tmp873);
                    $tmp871 = $tmp875;
                    panda$core$String* $tmp877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp871, &$s876);
                    $tmp870 = $tmp877;
                    panda$core$MutableString$append$panda$core$String(result823, $tmp870);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp870));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp871));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp873));
                }
                }
                if (((panda$core$Bit) { supertypes816 != NULL }).value) {
                {
                    panda$core$String* $tmp882 = panda$collections$ImmutableArray$join$R$panda$core$String(supertypes816);
                    $tmp881 = $tmp882;
                    panda$core$String* $tmp883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s880, $tmp881);
                    $tmp879 = $tmp883;
                    panda$core$String* $tmp885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp879, &$s884);
                    $tmp878 = $tmp885;
                    panda$core$MutableString$append$panda$core$String(result823, $tmp878);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp878));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp879));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp881));
                }
                }
                panda$core$MutableString$append$panda$core$String(result823, &$s886);
                {
                    int $tmp889;
                    {
                        ITable* $tmp893 = ((panda$collections$Iterable*) members818)->$class->itable;
                        while ($tmp893->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp893 = $tmp893->next;
                        }
                        $fn895 $tmp894 = $tmp893->methods[0];
                        panda$collections$Iterator* $tmp896 = $tmp894(((panda$collections$Iterable*) members818));
                        $tmp892 = $tmp896;
                        $tmp891 = $tmp892;
                        Iter$223$17890 = $tmp891;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp891));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp892));
                        $l897:;
                        ITable* $tmp900 = Iter$223$17890->$class->itable;
                        while ($tmp900->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp900 = $tmp900->next;
                        }
                        $fn902 $tmp901 = $tmp900->methods[0];
                        panda$core$Bit $tmp903 = $tmp901(Iter$223$17890);
                        panda$core$Bit $tmp904 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp903);
                        bool $tmp899 = $tmp904.value;
                        if (!$tmp899) goto $l898;
                        {
                            int $tmp907;
                            {
                                ITable* $tmp911 = Iter$223$17890->$class->itable;
                                while ($tmp911->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp911 = $tmp911->next;
                                }
                                $fn913 $tmp912 = $tmp911->methods[1];
                                panda$core$Object* $tmp914 = $tmp912(Iter$223$17890);
                                $tmp910 = $tmp914;
                                $tmp909 = ((org$pandalanguage$pandac$ASTNode*) $tmp910);
                                m908 = $tmp909;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp909));
                                panda$core$Panda$unref$panda$core$Object($tmp910);
                                panda$core$String* $tmp917 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) m908), &$s916);
                                $tmp915 = $tmp917;
                                panda$core$MutableString$append$panda$core$String(result823, $tmp915);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp915));
                            }
                            $tmp907 = -1;
                            goto $l905;
                            $l905:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m908));
                            m908 = NULL;
                            switch ($tmp907) {
                                case -1: goto $l918;
                            }
                            $l918:;
                        }
                        goto $l897;
                        $l898:;
                    }
                    $tmp889 = -1;
                    goto $l887;
                    $l887:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$223$17890));
                    Iter$223$17890 = NULL;
                    switch ($tmp889) {
                        case -1: goto $l919;
                    }
                    $l919:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp920, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result823, $tmp920);
                panda$core$String* $tmp924 = panda$core$MutableString$finish$R$panda$core$String(result823);
                $tmp923 = $tmp924;
                $tmp922 = $tmp923;
                $finallyReturn920 = $tmp922;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp922));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp923));
                $tmp822 = 0;
                goto $l820;
                $l925:;
                $tmp568 = 11;
                goto $l566;
                $l926:;
                return $finallyReturn920;
            }
            $l820:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result823));
            result823 = NULL;
            switch ($tmp822) {
                case 0: goto $l925;
            }
            $l928:;
        }
        }
        else {
        panda$core$Bit $tmp929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp929.value) {
        {
            panda$core$String** $tmp931 = ((panda$core$String**) ((char*) $match$167_9569->$data + 16));
            label930 = *$tmp931;
            if (((panda$core$Bit) { label930 != NULL }).value) {
            {
                panda$core$String* $tmp937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s936, label930);
                $tmp935 = $tmp937;
                panda$core$String* $tmp939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp935, &$s938);
                $tmp934 = $tmp939;
                $tmp933 = $tmp934;
                $finallyReturn931 = $tmp933;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp933));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp934));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp935));
                $tmp568 = 12;
                goto $l566;
                $l940:;
                return $finallyReturn931;
            }
            }
            $tmp943 = &$s944;
            $finallyReturn941 = $tmp943;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp943));
            $tmp568 = 13;
            goto $l566;
            $l945:;
            return $finallyReturn941;
        }
        }
        else {
        panda$core$Bit $tmp947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp947.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp949 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 16));
            target948 = *$tmp949;
            org$pandalanguage$pandac$ASTNode** $tmp951 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 24));
            value950 = *$tmp951;
            if (((panda$core$Bit) { value950 != NULL }).value) {
            {
                panda$core$String* $tmp959 = (($fn958) target948->$class->vtable[0])(target948);
                $tmp957 = $tmp959;
                panda$core$String* $tmp961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp957, &$s960);
                $tmp956 = $tmp961;
                panda$core$String* $tmp962 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp956, ((panda$core$Object*) value950));
                $tmp955 = $tmp962;
                panda$core$String* $tmp964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp955, &$s963);
                $tmp954 = $tmp964;
                $tmp953 = $tmp954;
                $finallyReturn951 = $tmp953;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp953));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp954));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp955));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp956));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp957));
                $tmp568 = 14;
                goto $l566;
                $l965:;
                return $finallyReturn951;
            }
            }
            panda$core$String* $tmp971 = (($fn970) target948->$class->vtable[0])(target948);
            $tmp969 = $tmp971;
            $tmp968 = $tmp969;
            $finallyReturn966 = $tmp968;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp968));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp969));
            $tmp568 = 15;
            goto $l566;
            $l972:;
            return $finallyReturn966;
        }
        }
        else {
        panda$core$Bit $tmp974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp974.value) {
        {
            panda$core$String** $tmp976 = ((panda$core$String**) ((char*) $match$167_9569->$data + 16));
            label975 = *$tmp976;
            panda$collections$ImmutableArray** $tmp978 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9569->$data + 24));
            statements977 = *$tmp978;
            org$pandalanguage$pandac$ASTNode** $tmp980 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 32));
            test979 = *$tmp980;
            int $tmp983;
            {
                panda$core$MutableString* $tmp987 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp987);
                $tmp986 = $tmp987;
                $tmp985 = $tmp986;
                result984 = $tmp985;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp985));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp986));
                if (((panda$core$Bit) { label975 != NULL }).value) {
                {
                    panda$core$String* $tmp990 = panda$core$String$convert$R$panda$core$String(label975);
                    $tmp989 = $tmp990;
                    panda$core$String* $tmp992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp989, &$s991);
                    $tmp988 = $tmp992;
                    panda$core$MutableString$append$panda$core$String(result984, $tmp988);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp988));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp989));
                }
                }
                panda$core$MutableString$append$panda$core$String(result984, &$s993);
                {
                    int $tmp996;
                    {
                        ITable* $tmp1000 = ((panda$collections$Iterable*) statements977)->$class->itable;
                        while ($tmp1000->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1000 = $tmp1000->next;
                        }
                        $fn1002 $tmp1001 = $tmp1000->methods[0];
                        panda$collections$Iterator* $tmp1003 = $tmp1001(((panda$collections$Iterable*) statements977));
                        $tmp999 = $tmp1003;
                        $tmp998 = $tmp999;
                        Iter$244$17997 = $tmp998;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp998));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp999));
                        $l1004:;
                        ITable* $tmp1007 = Iter$244$17997->$class->itable;
                        while ($tmp1007->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1007 = $tmp1007->next;
                        }
                        $fn1009 $tmp1008 = $tmp1007->methods[0];
                        panda$core$Bit $tmp1010 = $tmp1008(Iter$244$17997);
                        panda$core$Bit $tmp1011 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1010);
                        bool $tmp1006 = $tmp1011.value;
                        if (!$tmp1006) goto $l1005;
                        {
                            int $tmp1014;
                            {
                                ITable* $tmp1018 = Iter$244$17997->$class->itable;
                                while ($tmp1018->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1018 = $tmp1018->next;
                                }
                                $fn1020 $tmp1019 = $tmp1018->methods[1];
                                panda$core$Object* $tmp1021 = $tmp1019(Iter$244$17997);
                                $tmp1017 = $tmp1021;
                                $tmp1016 = ((org$pandalanguage$pandac$ASTNode*) $tmp1017);
                                s1015 = $tmp1016;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1016));
                                panda$core$Panda$unref$panda$core$Object($tmp1017);
                                panda$core$String* $tmp1024 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1015), &$s1023);
                                $tmp1022 = $tmp1024;
                                panda$core$MutableString$append$panda$core$String(result984, $tmp1022);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1022));
                            }
                            $tmp1014 = -1;
                            goto $l1012;
                            $l1012:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1015));
                            s1015 = NULL;
                            switch ($tmp1014) {
                                case -1: goto $l1025;
                            }
                            $l1025:;
                        }
                        goto $l1004;
                        $l1005:;
                    }
                    $tmp996 = -1;
                    goto $l994;
                    $l994:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$244$17997));
                    Iter$244$17997 = NULL;
                    switch ($tmp996) {
                        case -1: goto $l1026;
                    }
                    $l1026:;
                }
                panda$core$String* $tmp1030 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1029, ((panda$core$Object*) test979));
                $tmp1028 = $tmp1030;
                panda$core$String* $tmp1032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1028, &$s1031);
                $tmp1027 = $tmp1032;
                panda$core$MutableString$append$panda$core$String(result984, $tmp1027);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1027));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1028));
                panda$core$String* $tmp1036 = panda$core$MutableString$finish$R$panda$core$String(result984);
                $tmp1035 = $tmp1036;
                $tmp1034 = $tmp1035;
                $finallyReturn1032 = $tmp1034;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1034));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1035));
                $tmp983 = 0;
                goto $l981;
                $l1037:;
                $tmp568 = 16;
                goto $l566;
                $l1038:;
                return $finallyReturn1032;
            }
            $l981:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result984));
            result984 = NULL;
            switch ($tmp983) {
                case 0: goto $l1037;
            }
            $l1040:;
        }
        }
        else {
        panda$core$Bit $tmp1041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1041.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1043 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 16));
            base1042 = *$tmp1043;
            panda$core$String** $tmp1045 = ((panda$core$String**) ((char*) $match$167_9569->$data + 24));
            field1044 = *$tmp1045;
            panda$core$String* $tmp1053 = (($fn1052) base1042->$class->vtable[0])(base1042);
            $tmp1051 = $tmp1053;
            panda$core$String* $tmp1055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1051, &$s1054);
            $tmp1050 = $tmp1055;
            panda$core$String* $tmp1056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1050, field1044);
            $tmp1049 = $tmp1056;
            panda$core$String* $tmp1058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1049, &$s1057);
            $tmp1048 = $tmp1058;
            $tmp1047 = $tmp1048;
            $finallyReturn1045 = $tmp1047;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1047));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1048));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1049));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1050));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1051));
            $tmp568 = 17;
            goto $l566;
            $l1059:;
            return $finallyReturn1045;
        }
        }
        else {
        panda$core$Bit $tmp1061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1061.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1063 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 16));
            dc1062 = *$tmp1063;
            panda$collections$ImmutableArray** $tmp1065 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9569->$data + 24));
            annotations1064 = *$tmp1065;
            org$pandalanguage$pandac$ASTNode** $tmp1067 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 32));
            decl1066 = *$tmp1067;
            int $tmp1070;
            {
                panda$core$MutableString* $tmp1074 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1074);
                $tmp1073 = $tmp1074;
                $tmp1072 = $tmp1073;
                result1071 = $tmp1072;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1072));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1073));
                if (((panda$core$Bit) { dc1062 != NULL }).value) {
                {
                    panda$core$String* $tmp1077 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc1062), &$s1076);
                    $tmp1075 = $tmp1077;
                    panda$core$MutableString$append$panda$core$String(result1071, $tmp1075);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1075));
                }
                }
                {
                    int $tmp1080;
                    {
                        ITable* $tmp1084 = ((panda$collections$Iterable*) annotations1064)->$class->itable;
                        while ($tmp1084->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1084 = $tmp1084->next;
                        }
                        $fn1086 $tmp1085 = $tmp1084->methods[0];
                        panda$collections$Iterator* $tmp1087 = $tmp1085(((panda$collections$Iterable*) annotations1064));
                        $tmp1083 = $tmp1087;
                        $tmp1082 = $tmp1083;
                        Iter$256$171081 = $tmp1082;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1082));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1083));
                        $l1088:;
                        ITable* $tmp1091 = Iter$256$171081->$class->itable;
                        while ($tmp1091->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1091 = $tmp1091->next;
                        }
                        $fn1093 $tmp1092 = $tmp1091->methods[0];
                        panda$core$Bit $tmp1094 = $tmp1092(Iter$256$171081);
                        panda$core$Bit $tmp1095 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1094);
                        bool $tmp1090 = $tmp1095.value;
                        if (!$tmp1090) goto $l1089;
                        {
                            int $tmp1098;
                            {
                                ITable* $tmp1102 = Iter$256$171081->$class->itable;
                                while ($tmp1102->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1102 = $tmp1102->next;
                                }
                                $fn1104 $tmp1103 = $tmp1102->methods[1];
                                panda$core$Object* $tmp1105 = $tmp1103(Iter$256$171081);
                                $tmp1101 = $tmp1105;
                                $tmp1100 = ((org$pandalanguage$pandac$ASTNode*) $tmp1101);
                                a1099 = $tmp1100;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1100));
                                panda$core$Panda$unref$panda$core$Object($tmp1101);
                                panda$core$String* $tmp1108 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a1099), &$s1107);
                                $tmp1106 = $tmp1108;
                                panda$core$MutableString$append$panda$core$String(result1071, $tmp1106);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1106));
                            }
                            $tmp1098 = -1;
                            goto $l1096;
                            $l1096:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1099));
                            a1099 = NULL;
                            switch ($tmp1098) {
                                case -1: goto $l1109;
                            }
                            $l1109:;
                        }
                        goto $l1088;
                        $l1089:;
                    }
                    $tmp1080 = -1;
                    goto $l1078;
                    $l1078:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$256$171081));
                    Iter$256$171081 = NULL;
                    switch ($tmp1080) {
                        case -1: goto $l1110;
                    }
                    $l1110:;
                }
                panda$core$MutableString$append$panda$core$Object(result1071, ((panda$core$Object*) decl1066));
                panda$core$String* $tmp1114 = panda$core$MutableString$finish$R$panda$core$String(result1071);
                $tmp1113 = $tmp1114;
                $tmp1112 = $tmp1113;
                $finallyReturn1110 = $tmp1112;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1112));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1113));
                $tmp1070 = 0;
                goto $l1068;
                $l1115:;
                $tmp568 = 18;
                goto $l566;
                $l1116:;
                return $finallyReturn1110;
            }
            $l1068:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1071));
            result1071 = NULL;
            switch ($tmp1070) {
                case 0: goto $l1115;
            }
            $l1118:;
        }
        }
        else {
        panda$core$Bit $tmp1119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1119.value) {
        {
            panda$collections$ImmutableArray** $tmp1121 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9569->$data + 0));
            entries1120 = *$tmp1121;
            int $tmp1124;
            {
                panda$core$MutableString* $tmp1128 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1128);
                $tmp1127 = $tmp1128;
                $tmp1126 = $tmp1127;
                result1125 = $tmp1126;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1126));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1127));
                {
                    int $tmp1131;
                    {
                        ITable* $tmp1135 = ((panda$collections$Iterable*) entries1120)->$class->itable;
                        while ($tmp1135->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1135 = $tmp1135->next;
                        }
                        $fn1137 $tmp1136 = $tmp1135->methods[0];
                        panda$collections$Iterator* $tmp1138 = $tmp1136(((panda$collections$Iterable*) entries1120));
                        $tmp1134 = $tmp1138;
                        $tmp1133 = $tmp1134;
                        Iter$263$171132 = $tmp1133;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1133));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1134));
                        $l1139:;
                        ITable* $tmp1142 = Iter$263$171132->$class->itable;
                        while ($tmp1142->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1142 = $tmp1142->next;
                        }
                        $fn1144 $tmp1143 = $tmp1142->methods[0];
                        panda$core$Bit $tmp1145 = $tmp1143(Iter$263$171132);
                        panda$core$Bit $tmp1146 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1145);
                        bool $tmp1141 = $tmp1146.value;
                        if (!$tmp1141) goto $l1140;
                        {
                            int $tmp1149;
                            {
                                ITable* $tmp1153 = Iter$263$171132->$class->itable;
                                while ($tmp1153->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1153 = $tmp1153->next;
                                }
                                $fn1155 $tmp1154 = $tmp1153->methods[1];
                                panda$core$Object* $tmp1156 = $tmp1154(Iter$263$171132);
                                $tmp1152 = $tmp1156;
                                $tmp1151 = ((org$pandalanguage$pandac$ASTNode*) $tmp1152);
                                e1150 = $tmp1151;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1151));
                                panda$core$Panda$unref$panda$core$Object($tmp1152);
                                panda$core$String* $tmp1159 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) e1150), &$s1158);
                                $tmp1157 = $tmp1159;
                                panda$core$MutableString$append$panda$core$String(result1125, $tmp1157);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1157));
                            }
                            $tmp1149 = -1;
                            goto $l1147;
                            $l1147:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1150));
                            e1150 = NULL;
                            switch ($tmp1149) {
                                case -1: goto $l1160;
                            }
                            $l1160:;
                        }
                        goto $l1139;
                        $l1140:;
                    }
                    $tmp1131 = -1;
                    goto $l1129;
                    $l1129:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$263$171132));
                    Iter$263$171132 = NULL;
                    switch ($tmp1131) {
                        case -1: goto $l1161;
                    }
                    $l1161:;
                }
                panda$core$String* $tmp1165 = panda$core$MutableString$finish$R$panda$core$String(result1125);
                $tmp1164 = $tmp1165;
                $tmp1163 = $tmp1164;
                $finallyReturn1161 = $tmp1163;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1163));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1164));
                $tmp1124 = 0;
                goto $l1122;
                $l1166:;
                $tmp568 = 19;
                goto $l566;
                $l1167:;
                return $finallyReturn1161;
            }
            $l1122:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1125));
            result1125 = NULL;
            switch ($tmp1124) {
                case 0: goto $l1166;
            }
            $l1169:;
        }
        }
        else {
        panda$core$Bit $tmp1170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1170.value) {
        {
            panda$core$String** $tmp1172 = ((panda$core$String**) ((char*) $match$167_9569->$data + 16));
            label1171 = *$tmp1172;
            org$pandalanguage$pandac$ASTNode** $tmp1174 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 24));
            target1173 = *$tmp1174;
            org$pandalanguage$pandac$ASTNode** $tmp1176 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 32));
            list1175 = *$tmp1176;
            panda$collections$ImmutableArray** $tmp1178 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9569->$data + 40));
            statements1177 = *$tmp1178;
            int $tmp1181;
            {
                panda$core$MutableString* $tmp1185 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1185);
                $tmp1184 = $tmp1185;
                $tmp1183 = $tmp1184;
                result1182 = $tmp1183;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1183));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1184));
                if (((panda$core$Bit) { label1171 != NULL }).value) {
                {
                    panda$core$String* $tmp1188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(label1171, &$s1187);
                    $tmp1186 = $tmp1188;
                    panda$core$MutableString$append$panda$core$String(result1182, $tmp1186);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1186));
                }
                }
                panda$core$String* $tmp1194 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1193, ((panda$core$Object*) target1173));
                $tmp1192 = $tmp1194;
                panda$core$String* $tmp1196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1192, &$s1195);
                $tmp1191 = $tmp1196;
                panda$core$String* $tmp1197 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1191, ((panda$core$Object*) list1175));
                $tmp1190 = $tmp1197;
                panda$core$String* $tmp1199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1190, &$s1198);
                $tmp1189 = $tmp1199;
                panda$core$MutableString$append$panda$core$String(result1182, $tmp1189);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1189));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1190));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1191));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1192));
                {
                    int $tmp1202;
                    {
                        ITable* $tmp1206 = ((panda$collections$Iterable*) statements1177)->$class->itable;
                        while ($tmp1206->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1206 = $tmp1206->next;
                        }
                        $fn1208 $tmp1207 = $tmp1206->methods[0];
                        panda$collections$Iterator* $tmp1209 = $tmp1207(((panda$collections$Iterable*) statements1177));
                        $tmp1205 = $tmp1209;
                        $tmp1204 = $tmp1205;
                        Iter$273$171203 = $tmp1204;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1204));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1205));
                        $l1210:;
                        ITable* $tmp1213 = Iter$273$171203->$class->itable;
                        while ($tmp1213->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1213 = $tmp1213->next;
                        }
                        $fn1215 $tmp1214 = $tmp1213->methods[0];
                        panda$core$Bit $tmp1216 = $tmp1214(Iter$273$171203);
                        panda$core$Bit $tmp1217 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1216);
                        bool $tmp1212 = $tmp1217.value;
                        if (!$tmp1212) goto $l1211;
                        {
                            int $tmp1220;
                            {
                                ITable* $tmp1224 = Iter$273$171203->$class->itable;
                                while ($tmp1224->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1224 = $tmp1224->next;
                                }
                                $fn1226 $tmp1225 = $tmp1224->methods[1];
                                panda$core$Object* $tmp1227 = $tmp1225(Iter$273$171203);
                                $tmp1223 = $tmp1227;
                                $tmp1222 = ((org$pandalanguage$pandac$ASTNode*) $tmp1223);
                                s1221 = $tmp1222;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1222));
                                panda$core$Panda$unref$panda$core$Object($tmp1223);
                                panda$core$String* $tmp1230 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1221), &$s1229);
                                $tmp1228 = $tmp1230;
                                panda$core$MutableString$append$panda$core$String(result1182, $tmp1228);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1228));
                            }
                            $tmp1220 = -1;
                            goto $l1218;
                            $l1218:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1221));
                            s1221 = NULL;
                            switch ($tmp1220) {
                                case -1: goto $l1231;
                            }
                            $l1231:;
                        }
                        goto $l1210;
                        $l1211:;
                    }
                    $tmp1202 = -1;
                    goto $l1200;
                    $l1200:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$273$171203));
                    Iter$273$171203 = NULL;
                    switch ($tmp1202) {
                        case -1: goto $l1232;
                    }
                    $l1232:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1233, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1182, $tmp1233);
                panda$core$String* $tmp1237 = panda$core$MutableString$finish$R$panda$core$String(result1182);
                $tmp1236 = $tmp1237;
                $tmp1235 = $tmp1236;
                $finallyReturn1233 = $tmp1235;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1235));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1236));
                $tmp1181 = 0;
                goto $l1179;
                $l1238:;
                $tmp568 = 20;
                goto $l566;
                $l1239:;
                return $finallyReturn1233;
            }
            $l1179:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1182));
            result1182 = NULL;
            switch ($tmp1181) {
                case 0: goto $l1238;
            }
            $l1241:;
        }
        }
        else {
        panda$core$Bit $tmp1242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1242.value) {
        {
            panda$core$String** $tmp1244 = ((panda$core$String**) ((char*) $match$167_9569->$data + 16));
            name1243 = *$tmp1244;
            panda$collections$ImmutableArray** $tmp1246 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9569->$data + 24));
            subtypes1245 = *$tmp1246;
            panda$core$String* $tmp1253 = panda$core$String$convert$R$panda$core$String(name1243);
            $tmp1252 = $tmp1253;
            panda$core$String* $tmp1255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1252, &$s1254);
            $tmp1251 = $tmp1255;
            panda$core$String* $tmp1257 = panda$collections$ImmutableArray$join$R$panda$core$String(subtypes1245);
            $tmp1256 = $tmp1257;
            panda$core$String* $tmp1258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1251, $tmp1256);
            $tmp1250 = $tmp1258;
            panda$core$String* $tmp1260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1250, &$s1259);
            $tmp1249 = $tmp1260;
            $tmp1248 = $tmp1249;
            $finallyReturn1246 = $tmp1248;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1248));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1249));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1250));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1256));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1251));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1252));
            $tmp568 = 21;
            goto $l566;
            $l1261:;
            return $finallyReturn1246;
        }
        }
        else {
        panda$core$Bit $tmp1263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1263.value) {
        {
            panda$core$String** $tmp1265 = ((panda$core$String**) ((char*) $match$167_9569->$data + 16));
            name1264 = *$tmp1265;
            $tmp1267 = name1264;
            $finallyReturn1265 = $tmp1267;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1267));
            $tmp568 = 22;
            goto $l566;
            $l1268:;
            return $finallyReturn1265;
        }
        }
        else {
        panda$core$Bit $tmp1270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1270.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1272 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 16));
            test1271 = *$tmp1272;
            panda$collections$ImmutableArray** $tmp1274 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9569->$data + 24));
            ifTrue1273 = *$tmp1274;
            org$pandalanguage$pandac$ASTNode** $tmp1276 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 32));
            ifFalse1275 = *$tmp1276;
            int $tmp1279;
            {
                panda$core$MutableString* $tmp1283 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1287 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1286, ((panda$core$Object*) test1271));
                $tmp1285 = $tmp1287;
                panda$core$String* $tmp1289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1285, &$s1288);
                $tmp1284 = $tmp1289;
                panda$core$MutableString$init$panda$core$String($tmp1283, $tmp1284);
                $tmp1282 = $tmp1283;
                $tmp1281 = $tmp1282;
                result1280 = $tmp1281;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1281));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1282));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1284));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1285));
                {
                    int $tmp1292;
                    {
                        ITable* $tmp1296 = ((panda$collections$Iterable*) ifTrue1273)->$class->itable;
                        while ($tmp1296->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1296 = $tmp1296->next;
                        }
                        $fn1298 $tmp1297 = $tmp1296->methods[0];
                        panda$collections$Iterator* $tmp1299 = $tmp1297(((panda$collections$Iterable*) ifTrue1273));
                        $tmp1295 = $tmp1299;
                        $tmp1294 = $tmp1295;
                        Iter$284$171293 = $tmp1294;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1294));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1295));
                        $l1300:;
                        ITable* $tmp1303 = Iter$284$171293->$class->itable;
                        while ($tmp1303->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1303 = $tmp1303->next;
                        }
                        $fn1305 $tmp1304 = $tmp1303->methods[0];
                        panda$core$Bit $tmp1306 = $tmp1304(Iter$284$171293);
                        panda$core$Bit $tmp1307 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1306);
                        bool $tmp1302 = $tmp1307.value;
                        if (!$tmp1302) goto $l1301;
                        {
                            int $tmp1310;
                            {
                                ITable* $tmp1314 = Iter$284$171293->$class->itable;
                                while ($tmp1314->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1314 = $tmp1314->next;
                                }
                                $fn1316 $tmp1315 = $tmp1314->methods[1];
                                panda$core$Object* $tmp1317 = $tmp1315(Iter$284$171293);
                                $tmp1313 = $tmp1317;
                                $tmp1312 = ((org$pandalanguage$pandac$ASTNode*) $tmp1313);
                                s1311 = $tmp1312;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1312));
                                panda$core$Panda$unref$panda$core$Object($tmp1313);
                                panda$core$String* $tmp1320 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1311), &$s1319);
                                $tmp1318 = $tmp1320;
                                panda$core$MutableString$append$panda$core$String(result1280, $tmp1318);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1318));
                            }
                            $tmp1310 = -1;
                            goto $l1308;
                            $l1308:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1311));
                            s1311 = NULL;
                            switch ($tmp1310) {
                                case -1: goto $l1321;
                            }
                            $l1321:;
                        }
                        goto $l1300;
                        $l1301:;
                    }
                    $tmp1292 = -1;
                    goto $l1290;
                    $l1290:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$284$171293));
                    Iter$284$171293 = NULL;
                    switch ($tmp1292) {
                        case -1: goto $l1322;
                    }
                    $l1322:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1323, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1280, $tmp1323);
                if (((panda$core$Bit) { ifFalse1275 != NULL }).value) {
                {
                    panda$core$String* $tmp1327 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1326, ((panda$core$Object*) ifFalse1275));
                    $tmp1325 = $tmp1327;
                    panda$core$String* $tmp1329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1325, &$s1328);
                    $tmp1324 = $tmp1329;
                    panda$core$MutableString$append$panda$core$String(result1280, $tmp1324);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1324));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1325));
                }
                }
                panda$core$String* $tmp1333 = panda$core$MutableString$finish$R$panda$core$String(result1280);
                $tmp1332 = $tmp1333;
                $tmp1331 = $tmp1332;
                $finallyReturn1329 = $tmp1331;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1331));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1332));
                $tmp1279 = 0;
                goto $l1277;
                $l1334:;
                $tmp568 = 23;
                goto $l566;
                $l1335:;
                return $finallyReturn1329;
            }
            $l1277:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1280));
            result1280 = NULL;
            switch ($tmp1279) {
                case 0: goto $l1334;
            }
            $l1337:;
        }
        }
        else {
        panda$core$Bit $tmp1338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1338.value) {
        {
            panda$core$UInt64* $tmp1340 = ((panda$core$UInt64*) ((char*) $match$167_9569->$data + 16));
            value1339 = *$tmp1340;
            panda$core$String* $tmp1344 = panda$core$UInt64$convert$R$panda$core$String(value1339);
            $tmp1343 = $tmp1344;
            $tmp1342 = $tmp1343;
            $finallyReturn1340 = $tmp1342;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1342));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1343));
            $tmp568 = 24;
            goto $l566;
            $l1345:;
            return $finallyReturn1340;
        }
        }
        else {
        panda$core$Bit $tmp1347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1347.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1349 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$167_9569->$data + 0));
            ir1348 = *$tmp1349;
            panda$core$String* $tmp1354 = (($fn1353) ir1348->$class->vtable[0])(ir1348);
            $tmp1352 = $tmp1354;
            $tmp1351 = $tmp1352;
            $finallyReturn1349 = $tmp1351;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1351));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1352));
            $tmp568 = 25;
            goto $l566;
            $l1355:;
            return $finallyReturn1349;
        }
        }
        else {
        panda$core$Bit $tmp1357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1357.value) {
        {
            panda$core$String** $tmp1359 = ((panda$core$String**) ((char*) $match$167_9569->$data + 16));
            label1358 = *$tmp1359;
            panda$collections$ImmutableArray** $tmp1361 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9569->$data + 24));
            statements1360 = *$tmp1361;
            int $tmp1364;
            {
                panda$core$MutableString* $tmp1368 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1368);
                $tmp1367 = $tmp1368;
                $tmp1366 = $tmp1367;
                result1365 = $tmp1366;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1366));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1367));
                if (((panda$core$Bit) { label1358 != NULL }).value) {
                {
                    panda$core$String* $tmp1371 = panda$core$String$convert$R$panda$core$String(label1358);
                    $tmp1370 = $tmp1371;
                    panda$core$String* $tmp1373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1370, &$s1372);
                    $tmp1369 = $tmp1373;
                    panda$core$MutableString$append$panda$core$String(result1365, $tmp1369);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1369));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1370));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1365, &$s1374);
                {
                    int $tmp1377;
                    {
                        ITable* $tmp1381 = ((panda$collections$Iterable*) statements1360)->$class->itable;
                        while ($tmp1381->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1381 = $tmp1381->next;
                        }
                        $fn1383 $tmp1382 = $tmp1381->methods[0];
                        panda$collections$Iterator* $tmp1384 = $tmp1382(((panda$collections$Iterable*) statements1360));
                        $tmp1380 = $tmp1384;
                        $tmp1379 = $tmp1380;
                        Iter$302$171378 = $tmp1379;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1379));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1380));
                        $l1385:;
                        ITable* $tmp1388 = Iter$302$171378->$class->itable;
                        while ($tmp1388->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1388 = $tmp1388->next;
                        }
                        $fn1390 $tmp1389 = $tmp1388->methods[0];
                        panda$core$Bit $tmp1391 = $tmp1389(Iter$302$171378);
                        panda$core$Bit $tmp1392 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1391);
                        bool $tmp1387 = $tmp1392.value;
                        if (!$tmp1387) goto $l1386;
                        {
                            int $tmp1395;
                            {
                                ITable* $tmp1399 = Iter$302$171378->$class->itable;
                                while ($tmp1399->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1399 = $tmp1399->next;
                                }
                                $fn1401 $tmp1400 = $tmp1399->methods[1];
                                panda$core$Object* $tmp1402 = $tmp1400(Iter$302$171378);
                                $tmp1398 = $tmp1402;
                                $tmp1397 = ((org$pandalanguage$pandac$ASTNode*) $tmp1398);
                                s1396 = $tmp1397;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1397));
                                panda$core$Panda$unref$panda$core$Object($tmp1398);
                                panda$core$String* $tmp1405 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1396), &$s1404);
                                $tmp1403 = $tmp1405;
                                panda$core$MutableString$append$panda$core$String(result1365, $tmp1403);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1403));
                            }
                            $tmp1395 = -1;
                            goto $l1393;
                            $l1393:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1396));
                            s1396 = NULL;
                            switch ($tmp1395) {
                                case -1: goto $l1406;
                            }
                            $l1406:;
                        }
                        goto $l1385;
                        $l1386:;
                    }
                    $tmp1377 = -1;
                    goto $l1375;
                    $l1375:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$302$171378));
                    Iter$302$171378 = NULL;
                    switch ($tmp1377) {
                        case -1: goto $l1407;
                    }
                    $l1407:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1408, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1365, $tmp1408);
                panda$core$String* $tmp1412 = panda$core$MutableString$finish$R$panda$core$String(result1365);
                $tmp1411 = $tmp1412;
                $tmp1410 = $tmp1411;
                $finallyReturn1408 = $tmp1410;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1410));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1411));
                $tmp1364 = 0;
                goto $l1362;
                $l1413:;
                $tmp568 = 26;
                goto $l566;
                $l1414:;
                return $finallyReturn1408;
            }
            $l1362:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1365));
            result1365 = NULL;
            switch ($tmp1364) {
                case 0: goto $l1413;
            }
            $l1416:;
        }
        }
        else {
        panda$core$Bit $tmp1417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1417.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1419 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 16));
            value1418 = *$tmp1419;
            panda$collections$ImmutableArray** $tmp1421 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9569->$data + 24));
            whens1420 = *$tmp1421;
            panda$collections$ImmutableArray** $tmp1423 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9569->$data + 32));
            other1422 = *$tmp1423;
            int $tmp1426;
            {
                panda$core$MutableString* $tmp1430 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1434 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1433, ((panda$core$Object*) value1418));
                $tmp1432 = $tmp1434;
                panda$core$String* $tmp1436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1432, &$s1435);
                $tmp1431 = $tmp1436;
                panda$core$MutableString$init$panda$core$String($tmp1430, $tmp1431);
                $tmp1429 = $tmp1430;
                $tmp1428 = $tmp1429;
                result1427 = $tmp1428;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1428));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1429));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1431));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1432));
                {
                    int $tmp1439;
                    {
                        ITable* $tmp1443 = ((panda$collections$Iterable*) whens1420)->$class->itable;
                        while ($tmp1443->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1443 = $tmp1443->next;
                        }
                        $fn1445 $tmp1444 = $tmp1443->methods[0];
                        panda$collections$Iterator* $tmp1446 = $tmp1444(((panda$collections$Iterable*) whens1420));
                        $tmp1442 = $tmp1446;
                        $tmp1441 = $tmp1442;
                        Iter$309$171440 = $tmp1441;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1441));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1442));
                        $l1447:;
                        ITable* $tmp1450 = Iter$309$171440->$class->itable;
                        while ($tmp1450->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1450 = $tmp1450->next;
                        }
                        $fn1452 $tmp1451 = $tmp1450->methods[0];
                        panda$core$Bit $tmp1453 = $tmp1451(Iter$309$171440);
                        panda$core$Bit $tmp1454 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1453);
                        bool $tmp1449 = $tmp1454.value;
                        if (!$tmp1449) goto $l1448;
                        {
                            int $tmp1457;
                            {
                                ITable* $tmp1461 = Iter$309$171440->$class->itable;
                                while ($tmp1461->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1461 = $tmp1461->next;
                                }
                                $fn1463 $tmp1462 = $tmp1461->methods[1];
                                panda$core$Object* $tmp1464 = $tmp1462(Iter$309$171440);
                                $tmp1460 = $tmp1464;
                                $tmp1459 = ((org$pandalanguage$pandac$ASTNode*) $tmp1460);
                                w1458 = $tmp1459;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1459));
                                panda$core$Panda$unref$panda$core$Object($tmp1460);
                                panda$core$String* $tmp1467 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w1458), &$s1466);
                                $tmp1465 = $tmp1467;
                                panda$core$MutableString$append$panda$core$String(result1427, $tmp1465);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1465));
                            }
                            $tmp1457 = -1;
                            goto $l1455;
                            $l1455:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1458));
                            w1458 = NULL;
                            switch ($tmp1457) {
                                case -1: goto $l1468;
                            }
                            $l1468:;
                        }
                        goto $l1447;
                        $l1448:;
                    }
                    $tmp1439 = -1;
                    goto $l1437;
                    $l1437:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$309$171440));
                    Iter$309$171440 = NULL;
                    switch ($tmp1439) {
                        case -1: goto $l1469;
                    }
                    $l1469:;
                }
                if (((panda$core$Bit) { other1422 != NULL }).value) {
                {
                    panda$core$String* $tmp1472 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) other1422), &$s1471);
                    $tmp1470 = $tmp1472;
                    panda$core$MutableString$append$panda$core$String(result1427, $tmp1470);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1470));
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1473, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1427, $tmp1473);
                panda$core$String* $tmp1477 = panda$core$MutableString$finish$R$panda$core$String(result1427);
                $tmp1476 = $tmp1477;
                $tmp1475 = $tmp1476;
                $finallyReturn1473 = $tmp1475;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1475));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1476));
                $tmp1426 = 0;
                goto $l1424;
                $l1478:;
                $tmp568 = 27;
                goto $l566;
                $l1479:;
                return $finallyReturn1473;
            }
            $l1424:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1427));
            result1427 = NULL;
            switch ($tmp1426) {
                case 0: goto $l1478;
            }
            $l1481:;
        }
        }
        else {
        panda$core$Bit $tmp1482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1482.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1484 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 16));
            dc1483 = *$tmp1484;
            panda$collections$ImmutableArray** $tmp1486 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9569->$data + 24));
            annotations1485 = *$tmp1486;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1488 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$167_9569->$data + 32));
            kind1487 = *$tmp1488;
            panda$core$String** $tmp1490 = ((panda$core$String**) ((char*) $match$167_9569->$data + 40));
            name1489 = *$tmp1490;
            panda$collections$ImmutableArray** $tmp1492 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9569->$data + 48));
            parameters1491 = *$tmp1492;
            org$pandalanguage$pandac$ASTNode** $tmp1494 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 56));
            returnType1493 = *$tmp1494;
            panda$collections$ImmutableArray** $tmp1496 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9569->$data + 64));
            statements1495 = *$tmp1496;
            int $tmp1499;
            {
                panda$core$MutableString* $tmp1503 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1503);
                $tmp1502 = $tmp1503;
                $tmp1501 = $tmp1502;
                result1500 = $tmp1501;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1501));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1502));
                if (((panda$core$Bit) { dc1483 != NULL }).value) {
                {
                    panda$core$String* $tmp1506 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc1483), &$s1505);
                    $tmp1504 = $tmp1506;
                    panda$core$MutableString$append$panda$core$String(result1500, $tmp1504);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1504));
                }
                }
                {
                    int $tmp1509;
                    {
                        ITable* $tmp1513 = ((panda$collections$Iterable*) annotations1485)->$class->itable;
                        while ($tmp1513->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1513 = $tmp1513->next;
                        }
                        $fn1515 $tmp1514 = $tmp1513->methods[0];
                        panda$collections$Iterator* $tmp1516 = $tmp1514(((panda$collections$Iterable*) annotations1485));
                        $tmp1512 = $tmp1516;
                        $tmp1511 = $tmp1512;
                        Iter$322$171510 = $tmp1511;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1511));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1512));
                        $l1517:;
                        ITable* $tmp1520 = Iter$322$171510->$class->itable;
                        while ($tmp1520->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1520 = $tmp1520->next;
                        }
                        $fn1522 $tmp1521 = $tmp1520->methods[0];
                        panda$core$Bit $tmp1523 = $tmp1521(Iter$322$171510);
                        panda$core$Bit $tmp1524 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1523);
                        bool $tmp1519 = $tmp1524.value;
                        if (!$tmp1519) goto $l1518;
                        {
                            int $tmp1527;
                            {
                                ITable* $tmp1531 = Iter$322$171510->$class->itable;
                                while ($tmp1531->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1531 = $tmp1531->next;
                                }
                                $fn1533 $tmp1532 = $tmp1531->methods[1];
                                panda$core$Object* $tmp1534 = $tmp1532(Iter$322$171510);
                                $tmp1530 = $tmp1534;
                                $tmp1529 = ((org$pandalanguage$pandac$ASTNode*) $tmp1530);
                                a1528 = $tmp1529;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1529));
                                panda$core$Panda$unref$panda$core$Object($tmp1530);
                                panda$core$String* $tmp1537 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a1528), &$s1536);
                                $tmp1535 = $tmp1537;
                                panda$core$MutableString$append$panda$core$String(result1500, $tmp1535);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1535));
                            }
                            $tmp1527 = -1;
                            goto $l1525;
                            $l1525:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1528));
                            a1528 = NULL;
                            switch ($tmp1527) {
                                case -1: goto $l1538;
                            }
                            $l1538:;
                        }
                        goto $l1517;
                        $l1518:;
                    }
                    $tmp1509 = -1;
                    goto $l1507;
                    $l1507:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$322$171510));
                    Iter$322$171510 = NULL;
                    switch ($tmp1509) {
                        case -1: goto $l1539;
                    }
                    $l1539:;
                }
                {
                    $match$325_171540 = kind1487;
                    panda$core$Bit $tmp1541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$325_171540.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp1541.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1500, &$s1542);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$325_171540.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp1543.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1500, &$s1544);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$325_171540.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1545.value) {
                    {
                    }
                    }
                    }
                    }
                }
                panda$core$String* $tmp1550 = panda$core$String$convert$R$panda$core$String(name1489);
                $tmp1549 = $tmp1550;
                panda$core$String* $tmp1552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1549, &$s1551);
                $tmp1548 = $tmp1552;
                panda$core$String* $tmp1554 = panda$collections$ImmutableArray$join$R$panda$core$String(parameters1491);
                $tmp1553 = $tmp1554;
                panda$core$String* $tmp1555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1548, $tmp1553);
                $tmp1547 = $tmp1555;
                panda$core$String* $tmp1557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1547, &$s1556);
                $tmp1546 = $tmp1557;
                panda$core$MutableString$append$panda$core$String(result1500, $tmp1546);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1546));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1547));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1553));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1548));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1549));
                if (((panda$core$Bit) { returnType1493 != NULL }).value) {
                {
                    panda$core$String* $tmp1561 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1560, ((panda$core$Object*) returnType1493));
                    $tmp1559 = $tmp1561;
                    panda$core$String* $tmp1563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1559, &$s1562);
                    $tmp1558 = $tmp1563;
                    panda$core$MutableString$append$panda$core$String(result1500, $tmp1558);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1558));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1559));
                }
                }
                if (((panda$core$Bit) { statements1495 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1500, &$s1564);
                    {
                        int $tmp1567;
                        {
                            ITable* $tmp1571 = ((panda$collections$Iterable*) statements1495)->$class->itable;
                            while ($tmp1571->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp1571 = $tmp1571->next;
                            }
                            $fn1573 $tmp1572 = $tmp1571->methods[0];
                            panda$collections$Iterator* $tmp1574 = $tmp1572(((panda$collections$Iterable*) statements1495));
                            $tmp1570 = $tmp1574;
                            $tmp1569 = $tmp1570;
                            Iter$336$211568 = $tmp1569;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1569));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1570));
                            $l1575:;
                            ITable* $tmp1578 = Iter$336$211568->$class->itable;
                            while ($tmp1578->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1578 = $tmp1578->next;
                            }
                            $fn1580 $tmp1579 = $tmp1578->methods[0];
                            panda$core$Bit $tmp1581 = $tmp1579(Iter$336$211568);
                            panda$core$Bit $tmp1582 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1581);
                            bool $tmp1577 = $tmp1582.value;
                            if (!$tmp1577) goto $l1576;
                            {
                                int $tmp1585;
                                {
                                    ITable* $tmp1589 = Iter$336$211568->$class->itable;
                                    while ($tmp1589->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp1589 = $tmp1589->next;
                                    }
                                    $fn1591 $tmp1590 = $tmp1589->methods[1];
                                    panda$core$Object* $tmp1592 = $tmp1590(Iter$336$211568);
                                    $tmp1588 = $tmp1592;
                                    $tmp1587 = ((org$pandalanguage$pandac$ASTNode*) $tmp1588);
                                    s1586 = $tmp1587;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1587));
                                    panda$core$Panda$unref$panda$core$Object($tmp1588);
                                    panda$core$String* $tmp1595 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1586), &$s1594);
                                    $tmp1593 = $tmp1595;
                                    panda$core$MutableString$append$panda$core$String(result1500, $tmp1593);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1593));
                                }
                                $tmp1585 = -1;
                                goto $l1583;
                                $l1583:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1586));
                                s1586 = NULL;
                                switch ($tmp1585) {
                                    case -1: goto $l1596;
                                }
                                $l1596:;
                            }
                            goto $l1575;
                            $l1576:;
                        }
                        $tmp1567 = -1;
                        goto $l1565;
                        $l1565:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$336$211568));
                        Iter$336$211568 = NULL;
                        switch ($tmp1567) {
                            case -1: goto $l1597;
                        }
                        $l1597:;
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp1598, ((panda$core$UInt8) { 125 }));
                    panda$core$MutableString$append$panda$core$Char8(result1500, $tmp1598);
                }
                }
                panda$core$String* $tmp1602 = panda$core$MutableString$finish$R$panda$core$String(result1500);
                $tmp1601 = $tmp1602;
                $tmp1600 = $tmp1601;
                $finallyReturn1598 = $tmp1600;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1600));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1601));
                $tmp1499 = 0;
                goto $l1497;
                $l1603:;
                $tmp568 = 28;
                goto $l566;
                $l1604:;
                return $finallyReturn1598;
            }
            $l1497:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1500));
            result1500 = NULL;
            switch ($tmp1499) {
                case 0: goto $l1603;
            }
            $l1606:;
        }
        }
        else {
        panda$core$Bit $tmp1607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1607.value) {
        {
            $tmp1609 = &$s1610;
            $finallyReturn1607 = $tmp1609;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1609));
            $tmp568 = 29;
            goto $l566;
            $l1611:;
            return $finallyReturn1607;
        }
        }
        else {
        panda$core$Bit $tmp1613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1613.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1615 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 16));
            base1614 = *$tmp1615;
            panda$core$String* $tmp1620 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) base1614), &$s1619);
            $tmp1618 = $tmp1620;
            $tmp1617 = $tmp1618;
            $finallyReturn1615 = $tmp1617;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1617));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1618));
            $tmp568 = 30;
            goto $l566;
            $l1621:;
            return $finallyReturn1615;
        }
        }
        else {
        panda$core$Bit $tmp1623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1623.value) {
        {
            panda$core$String** $tmp1625 = ((panda$core$String**) ((char*) $match$167_9569->$data + 16));
            name1624 = *$tmp1625;
            $tmp1627 = name1624;
            $finallyReturn1625 = $tmp1627;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1627));
            $tmp568 = 31;
            goto $l566;
            $l1628:;
            return $finallyReturn1625;
        }
        }
        else {
        panda$core$Bit $tmp1630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1630.value) {
        {
            panda$core$String** $tmp1632 = ((panda$core$String**) ((char*) $match$167_9569->$data + 16));
            name1631 = *$tmp1632;
            org$pandalanguage$pandac$ASTNode** $tmp1634 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 24));
            type1633 = *$tmp1634;
            panda$core$String* $tmp1641 = panda$core$String$convert$R$panda$core$String(name1631);
            $tmp1640 = $tmp1641;
            panda$core$String* $tmp1643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1640, &$s1642);
            $tmp1639 = $tmp1643;
            panda$core$String* $tmp1644 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1639, ((panda$core$Object*) type1633));
            $tmp1638 = $tmp1644;
            panda$core$String* $tmp1646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1638, &$s1645);
            $tmp1637 = $tmp1646;
            $tmp1636 = $tmp1637;
            $finallyReturn1634 = $tmp1636;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1636));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1637));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1638));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1639));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1640));
            $tmp568 = 32;
            goto $l566;
            $l1647:;
            return $finallyReturn1634;
        }
        }
        else {
        panda$core$Bit $tmp1649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1649.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1651 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$167_9569->$data + 16));
            kind1650 = *$tmp1651;
            org$pandalanguage$pandac$ASTNode** $tmp1653 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 24));
            base1652 = *$tmp1653;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1661;
            $tmp1661 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1661->value = kind1650;
            $tmp1660 = ((panda$core$Object*) $tmp1661);
            panda$core$String* $tmp1663 = (($fn1662) $tmp1660->$class->vtable[0])($tmp1660);
            $tmp1659 = $tmp1663;
            panda$core$String* $tmp1665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1659, &$s1664);
            $tmp1658 = $tmp1665;
            panda$core$String* $tmp1666 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1658, ((panda$core$Object*) base1652));
            $tmp1657 = $tmp1666;
            panda$core$String* $tmp1668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1657, &$s1667);
            $tmp1656 = $tmp1668;
            $tmp1655 = $tmp1656;
            $finallyReturn1653 = $tmp1655;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1655));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1656));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1657));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1658));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1659));
            panda$core$Panda$unref$panda$core$Object($tmp1660);
            $tmp568 = 33;
            goto $l566;
            $l1669:;
            return $finallyReturn1653;
        }
        }
        else {
        panda$core$Bit $tmp1671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1671.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1673 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 16));
            start1672 = *$tmp1673;
            org$pandalanguage$pandac$ASTNode** $tmp1675 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 24));
            end1674 = *$tmp1675;
            panda$core$Bit* $tmp1677 = ((panda$core$Bit*) ((char*) $match$167_9569->$data + 32));
            inclusive1676 = *$tmp1677;
            org$pandalanguage$pandac$ASTNode** $tmp1679 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 33));
            step1678 = *$tmp1679;
            int $tmp1682;
            {
                panda$core$MutableString* $tmp1686 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1686);
                $tmp1685 = $tmp1686;
                $tmp1684 = $tmp1685;
                result1683 = $tmp1684;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1684));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1685));
                $tmp1687 = start1672;
                panda$core$Bit $tmp1691;
                if (((panda$core$Bit) { $tmp1687 != NULL }).value) goto $l1688; else goto $l1689;
                $l1688:;
                panda$core$Bit $tmp1692 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1687->$rawValue, ((panda$core$Int64) { 25 }));
                $tmp1691 = $tmp1692;
                goto $l1690;
                $l1689:;
                $tmp1691 = ((panda$core$Bit) { true });
                goto $l1690;
                $l1690:;
                if ($tmp1691.value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1683, ((panda$core$Object*) start1672));
                }
                }
                if (inclusive1676.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1683, &$s1693);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result1683, &$s1694);
                }
                }
                $tmp1695 = end1674;
                panda$core$Bit $tmp1699;
                if (((panda$core$Bit) { $tmp1695 != NULL }).value) goto $l1696; else goto $l1697;
                $l1696:;
                panda$core$Bit $tmp1700 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1695->$rawValue, ((panda$core$Int64) { 25 }));
                $tmp1699 = $tmp1700;
                goto $l1698;
                $l1697:;
                $tmp1699 = ((panda$core$Bit) { true });
                goto $l1698;
                $l1698:;
                if ($tmp1699.value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1683, ((panda$core$Object*) end1674));
                }
                }
                $tmp1701 = step1678;
                panda$core$Bit $tmp1705;
                if (((panda$core$Bit) { $tmp1701 != NULL }).value) goto $l1702; else goto $l1703;
                $l1702:;
                panda$core$Bit $tmp1706 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1701->$rawValue, ((panda$core$Int64) { 25 }));
                $tmp1705 = $tmp1706;
                goto $l1704;
                $l1703:;
                $tmp1705 = ((panda$core$Bit) { true });
                goto $l1704;
                $l1704:;
                if ($tmp1705.value) {
                {
                    panda$core$String* $tmp1709 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1708, ((panda$core$Object*) step1678));
                    $tmp1707 = $tmp1709;
                    panda$core$MutableString$append$panda$core$String(result1683, $tmp1707);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1707));
                }
                }
                panda$core$String* $tmp1713 = panda$core$MutableString$finish$R$panda$core$String(result1683);
                $tmp1712 = $tmp1713;
                $tmp1711 = $tmp1712;
                $finallyReturn1709 = $tmp1711;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1711));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1712));
                $tmp1682 = 0;
                goto $l1680;
                $l1714:;
                $tmp568 = 34;
                goto $l566;
                $l1715:;
                return $finallyReturn1709;
            }
            $l1680:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1683));
            result1683 = NULL;
            switch ($tmp1682) {
                case 0: goto $l1714;
            }
            $l1717:;
        }
        }
        else {
        panda$core$Bit $tmp1718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1718.value) {
        {
            panda$core$Real64* $tmp1720 = ((panda$core$Real64*) ((char*) $match$167_9569->$data + 16));
            value1719 = *$tmp1720;
            panda$core$String* $tmp1724 = panda$core$Real64$convert$R$panda$core$String(value1719);
            $tmp1723 = $tmp1724;
            $tmp1722 = $tmp1723;
            $finallyReturn1720 = $tmp1722;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1722));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1723));
            $tmp568 = 35;
            goto $l566;
            $l1725:;
            return $finallyReturn1720;
        }
        }
        else {
        panda$core$Bit $tmp1727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1727.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1729 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 16));
            value1728 = *$tmp1729;
            if (((panda$core$Bit) { value1728 != NULL }).value) {
            {
                panda$core$String* $tmp1735 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1734, ((panda$core$Object*) value1728));
                $tmp1733 = $tmp1735;
                panda$core$String* $tmp1737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1733, &$s1736);
                $tmp1732 = $tmp1737;
                $tmp1731 = $tmp1732;
                $finallyReturn1729 = $tmp1731;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1731));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1732));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1733));
                $tmp568 = 36;
                goto $l566;
                $l1738:;
                return $finallyReturn1729;
            }
            }
            $tmp1741 = &$s1742;
            $finallyReturn1739 = $tmp1741;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1741));
            $tmp568 = 37;
            goto $l566;
            $l1743:;
            return $finallyReturn1739;
        }
        }
        else {
        panda$core$Bit $tmp1745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1745.value) {
        {
            $tmp1747 = &$s1748;
            $finallyReturn1745 = $tmp1747;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1747));
            $tmp568 = 38;
            goto $l566;
            $l1749:;
            return $finallyReturn1745;
        }
        }
        else {
        panda$core$Bit $tmp1751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1751.value) {
        {
            panda$core$String** $tmp1753 = ((panda$core$String**) ((char*) $match$167_9569->$data + 16));
            str1752 = *$tmp1753;
            $tmp1755 = str1752;
            $finallyReturn1753 = $tmp1755;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1755));
            $tmp568 = 39;
            goto $l566;
            $l1756:;
            return $finallyReturn1753;
        }
        }
        else {
        panda$core$Bit $tmp1758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1758.value) {
        {
            $tmp1760 = &$s1761;
            $finallyReturn1758 = $tmp1760;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1760));
            $tmp568 = 40;
            goto $l566;
            $l1762:;
            return $finallyReturn1758;
        }
        }
        else {
        panda$core$Bit $tmp1764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1764.value) {
        {
            panda$core$String** $tmp1766 = ((panda$core$String**) ((char*) $match$167_9569->$data + 16));
            name1765 = *$tmp1766;
            $tmp1768 = name1765;
            $finallyReturn1766 = $tmp1768;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1768));
            $tmp568 = 41;
            goto $l566;
            $l1769:;
            return $finallyReturn1766;
        }
        }
        else {
        panda$core$Bit $tmp1771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1771.value) {
        {
            panda$core$String** $tmp1773 = ((panda$core$String**) ((char*) $match$167_9569->$data + 16));
            name1772 = *$tmp1773;
            org$pandalanguage$pandac$ASTNode** $tmp1775 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 24));
            type1774 = *$tmp1775;
            if (((panda$core$Bit) { type1774 != NULL }).value) {
            {
                panda$core$String* $tmp1782 = panda$core$String$convert$R$panda$core$String(name1772);
                $tmp1781 = $tmp1782;
                panda$core$String* $tmp1784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1781, &$s1783);
                $tmp1780 = $tmp1784;
                panda$core$String* $tmp1785 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1780, ((panda$core$Object*) type1774));
                $tmp1779 = $tmp1785;
                panda$core$String* $tmp1787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1779, &$s1786);
                $tmp1778 = $tmp1787;
                $tmp1777 = $tmp1778;
                $finallyReturn1775 = $tmp1777;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1777));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1778));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1779));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1780));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1781));
                $tmp568 = 42;
                goto $l566;
                $l1788:;
                return $finallyReturn1775;
            }
            }
            $tmp1791 = name1772;
            $finallyReturn1789 = $tmp1791;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1791));
            $tmp568 = 43;
            goto $l566;
            $l1792:;
            return $finallyReturn1789;
        }
        }
        else {
        panda$core$Bit $tmp1794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1794.value) {
        {
            panda$core$String** $tmp1796 = ((panda$core$String**) ((char*) $match$167_9569->$data + 16));
            name1795 = *$tmp1796;
            $tmp1798 = name1795;
            $finallyReturn1796 = $tmp1798;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1798));
            $tmp568 = 44;
            goto $l566;
            $l1799:;
            return $finallyReturn1796;
        }
        }
        else {
        panda$core$Bit $tmp1801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1801.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1803 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$167_9569->$data + 16));
            kind1802 = *$tmp1803;
            panda$collections$ImmutableArray** $tmp1805 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9569->$data + 24));
            decls1804 = *$tmp1805;
            int $tmp1808;
            {
                panda$core$MutableString* $tmp1812 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1812);
                $tmp1811 = $tmp1812;
                $tmp1810 = $tmp1811;
                result1809 = $tmp1810;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1810));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1811));
                {
                    $match$394_171813 = kind1802;
                    panda$core$Bit $tmp1814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$394_171813.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp1814.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1809, &$s1815);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1816 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$394_171813.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp1816.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1809, &$s1817);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$394_171813.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1818.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1809, &$s1819);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1820 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$394_171813.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp1820.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1809, &$s1821);
                    }
                    }
                    }
                    }
                    }
                }
                panda$core$String* $tmp1823 = panda$collections$ImmutableArray$join$R$panda$core$String(decls1804);
                $tmp1822 = $tmp1823;
                panda$core$MutableString$append$panda$core$String(result1809, $tmp1822);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1822));
                panda$core$String* $tmp1827 = panda$core$MutableString$finish$R$panda$core$String(result1809);
                $tmp1826 = $tmp1827;
                $tmp1825 = $tmp1826;
                $finallyReturn1823 = $tmp1825;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1825));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1826));
                $tmp1808 = 0;
                goto $l1806;
                $l1828:;
                $tmp568 = 45;
                goto $l566;
                $l1829:;
                return $finallyReturn1823;
            }
            $l1806:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1809));
            result1809 = NULL;
            switch ($tmp1808) {
                case 0: goto $l1828;
            }
            $l1831:;
        }
        }
        else {
        panda$core$Bit $tmp1832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1832.value) {
        {
            panda$collections$ImmutableArray** $tmp1834 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9569->$data + 16));
            tests1833 = *$tmp1834;
            panda$collections$ImmutableArray** $tmp1836 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9569->$data + 24));
            statements1835 = *$tmp1836;
            int $tmp1839;
            {
                panda$core$MutableString* $tmp1843 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1843, &$s1844);
                $tmp1842 = $tmp1843;
                $tmp1841 = $tmp1842;
                result1840 = $tmp1841;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1841));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1842));
                $tmp1846 = &$s1847;
                separator1845 = $tmp1846;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1846));
                {
                    int $tmp1850;
                    {
                        ITable* $tmp1854 = ((panda$collections$Iterable*) tests1833)->$class->itable;
                        while ($tmp1854->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1854 = $tmp1854->next;
                        }
                        $fn1856 $tmp1855 = $tmp1854->methods[0];
                        panda$collections$Iterator* $tmp1857 = $tmp1855(((panda$collections$Iterable*) tests1833));
                        $tmp1853 = $tmp1857;
                        $tmp1852 = $tmp1853;
                        Iter$405$171851 = $tmp1852;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1852));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1853));
                        $l1858:;
                        ITable* $tmp1861 = Iter$405$171851->$class->itable;
                        while ($tmp1861->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1861 = $tmp1861->next;
                        }
                        $fn1863 $tmp1862 = $tmp1861->methods[0];
                        panda$core$Bit $tmp1864 = $tmp1862(Iter$405$171851);
                        panda$core$Bit $tmp1865 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1864);
                        bool $tmp1860 = $tmp1865.value;
                        if (!$tmp1860) goto $l1859;
                        {
                            int $tmp1868;
                            {
                                ITable* $tmp1872 = Iter$405$171851->$class->itable;
                                while ($tmp1872->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1872 = $tmp1872->next;
                                }
                                $fn1874 $tmp1873 = $tmp1872->methods[1];
                                panda$core$Object* $tmp1875 = $tmp1873(Iter$405$171851);
                                $tmp1871 = $tmp1875;
                                $tmp1870 = ((org$pandalanguage$pandac$ASTNode*) $tmp1871);
                                t1869 = $tmp1870;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1870));
                                panda$core$Panda$unref$panda$core$Object($tmp1871);
                                panda$core$String* $tmp1880 = panda$core$String$convert$R$panda$core$String(separator1845);
                                $tmp1879 = $tmp1880;
                                panda$core$String* $tmp1882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1879, &$s1881);
                                $tmp1878 = $tmp1882;
                                panda$core$String* $tmp1883 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1878, ((panda$core$Object*) t1869));
                                $tmp1877 = $tmp1883;
                                panda$core$String* $tmp1885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1877, &$s1884);
                                $tmp1876 = $tmp1885;
                                panda$core$MutableString$append$panda$core$String(result1840, $tmp1876);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1876));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1877));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1878));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1879));
                            }
                            $tmp1868 = -1;
                            goto $l1866;
                            $l1866:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1869));
                            t1869 = NULL;
                            switch ($tmp1868) {
                                case -1: goto $l1886;
                            }
                            $l1886:;
                        }
                        goto $l1858;
                        $l1859:;
                    }
                    $tmp1850 = -1;
                    goto $l1848;
                    $l1848:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$405$171851));
                    Iter$405$171851 = NULL;
                    switch ($tmp1850) {
                        case -1: goto $l1887;
                    }
                    $l1887:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1888, ((panda$core$UInt8) { 58 }));
                panda$core$MutableString$append$panda$core$Char8(result1840, $tmp1888);
                {
                    int $tmp1891;
                    {
                        ITable* $tmp1895 = ((panda$collections$Iterable*) statements1835)->$class->itable;
                        while ($tmp1895->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1895 = $tmp1895->next;
                        }
                        $fn1897 $tmp1896 = $tmp1895->methods[0];
                        panda$collections$Iterator* $tmp1898 = $tmp1896(((panda$collections$Iterable*) statements1835));
                        $tmp1894 = $tmp1898;
                        $tmp1893 = $tmp1894;
                        Iter$409$171892 = $tmp1893;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1893));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1894));
                        $l1899:;
                        ITable* $tmp1902 = Iter$409$171892->$class->itable;
                        while ($tmp1902->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1902 = $tmp1902->next;
                        }
                        $fn1904 $tmp1903 = $tmp1902->methods[0];
                        panda$core$Bit $tmp1905 = $tmp1903(Iter$409$171892);
                        panda$core$Bit $tmp1906 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1905);
                        bool $tmp1901 = $tmp1906.value;
                        if (!$tmp1901) goto $l1900;
                        {
                            int $tmp1909;
                            {
                                ITable* $tmp1913 = Iter$409$171892->$class->itable;
                                while ($tmp1913->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1913 = $tmp1913->next;
                                }
                                $fn1915 $tmp1914 = $tmp1913->methods[1];
                                panda$core$Object* $tmp1916 = $tmp1914(Iter$409$171892);
                                $tmp1912 = $tmp1916;
                                $tmp1911 = ((org$pandalanguage$pandac$ASTNode*) $tmp1912);
                                s1910 = $tmp1911;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1911));
                                panda$core$Panda$unref$panda$core$Object($tmp1912);
                                panda$core$String* $tmp1919 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1918, ((panda$core$Object*) s1910));
                                $tmp1917 = $tmp1919;
                                panda$core$MutableString$append$panda$core$String(result1840, $tmp1917);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1917));
                            }
                            $tmp1909 = -1;
                            goto $l1907;
                            $l1907:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1910));
                            s1910 = NULL;
                            switch ($tmp1909) {
                                case -1: goto $l1920;
                            }
                            $l1920:;
                        }
                        goto $l1899;
                        $l1900:;
                    }
                    $tmp1891 = -1;
                    goto $l1889;
                    $l1889:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$409$171892));
                    Iter$409$171892 = NULL;
                    switch ($tmp1891) {
                        case -1: goto $l1921;
                    }
                    $l1921:;
                }
                panda$core$String* $tmp1925 = panda$core$MutableString$finish$R$panda$core$String(result1840);
                $tmp1924 = $tmp1925;
                $tmp1923 = $tmp1924;
                $finallyReturn1921 = $tmp1923;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1923));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1924));
                $tmp1839 = 0;
                goto $l1837;
                $l1926:;
                $tmp568 = 46;
                goto $l566;
                $l1927:;
                return $finallyReturn1921;
            }
            $l1837:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1840));
            result1840 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1845));
            separator1845 = NULL;
            switch ($tmp1839) {
                case 0: goto $l1926;
            }
            $l1929:;
        }
        }
        else {
        panda$core$Bit $tmp1930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$167_9569->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1930.value) {
        {
            panda$core$String** $tmp1932 = ((panda$core$String**) ((char*) $match$167_9569->$data + 16));
            label1931 = *$tmp1932;
            org$pandalanguage$pandac$ASTNode** $tmp1934 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$167_9569->$data + 24));
            test1933 = *$tmp1934;
            panda$collections$ImmutableArray** $tmp1936 = ((panda$collections$ImmutableArray**) ((char*) $match$167_9569->$data + 32));
            statements1935 = *$tmp1936;
            int $tmp1939;
            {
                panda$core$MutableString* $tmp1943 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1943);
                $tmp1942 = $tmp1943;
                $tmp1941 = $tmp1942;
                result1940 = $tmp1941;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1941));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1942));
                if (((panda$core$Bit) { label1931 != NULL }).value) {
                {
                    panda$core$String* $tmp1946 = panda$core$String$convert$R$panda$core$String(label1931);
                    $tmp1945 = $tmp1946;
                    panda$core$String* $tmp1948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1945, &$s1947);
                    $tmp1944 = $tmp1948;
                    panda$core$MutableString$append$panda$core$String(result1940, $tmp1944);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1944));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1945));
                }
                }
                panda$core$String* $tmp1952 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1951, ((panda$core$Object*) test1933));
                $tmp1950 = $tmp1952;
                panda$core$String* $tmp1954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1950, &$s1953);
                $tmp1949 = $tmp1954;
                panda$core$MutableString$append$panda$core$String(result1940, $tmp1949);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1949));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1950));
                {
                    int $tmp1957;
                    {
                        ITable* $tmp1961 = ((panda$collections$Iterable*) statements1935)->$class->itable;
                        while ($tmp1961->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1961 = $tmp1961->next;
                        }
                        $fn1963 $tmp1962 = $tmp1961->methods[0];
                        panda$collections$Iterator* $tmp1964 = $tmp1962(((panda$collections$Iterable*) statements1935));
                        $tmp1960 = $tmp1964;
                        $tmp1959 = $tmp1960;
                        Iter$419$171958 = $tmp1959;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1959));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1960));
                        $l1965:;
                        ITable* $tmp1968 = Iter$419$171958->$class->itable;
                        while ($tmp1968->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1968 = $tmp1968->next;
                        }
                        $fn1970 $tmp1969 = $tmp1968->methods[0];
                        panda$core$Bit $tmp1971 = $tmp1969(Iter$419$171958);
                        panda$core$Bit $tmp1972 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1971);
                        bool $tmp1967 = $tmp1972.value;
                        if (!$tmp1967) goto $l1966;
                        {
                            int $tmp1975;
                            {
                                ITable* $tmp1979 = Iter$419$171958->$class->itable;
                                while ($tmp1979->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1979 = $tmp1979->next;
                                }
                                $fn1981 $tmp1980 = $tmp1979->methods[1];
                                panda$core$Object* $tmp1982 = $tmp1980(Iter$419$171958);
                                $tmp1978 = $tmp1982;
                                $tmp1977 = ((org$pandalanguage$pandac$ASTNode*) $tmp1978);
                                s1976 = $tmp1977;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1977));
                                panda$core$Panda$unref$panda$core$Object($tmp1978);
                                panda$core$String* $tmp1985 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1976), &$s1984);
                                $tmp1983 = $tmp1985;
                                panda$core$MutableString$append$panda$core$String(result1940, $tmp1983);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1983));
                            }
                            $tmp1975 = -1;
                            goto $l1973;
                            $l1973:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1976));
                            s1976 = NULL;
                            switch ($tmp1975) {
                                case -1: goto $l1986;
                            }
                            $l1986:;
                        }
                        goto $l1965;
                        $l1966:;
                    }
                    $tmp1957 = -1;
                    goto $l1955;
                    $l1955:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$419$171958));
                    Iter$419$171958 = NULL;
                    switch ($tmp1957) {
                        case -1: goto $l1987;
                    }
                    $l1987:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1988, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1940, $tmp1988);
                panda$core$String* $tmp1992 = panda$core$MutableString$finish$R$panda$core$String(result1940);
                $tmp1991 = $tmp1992;
                $tmp1990 = $tmp1991;
                $finallyReturn1988 = $tmp1990;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1990));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1991));
                $tmp1939 = 0;
                goto $l1937;
                $l1993:;
                $tmp568 = 47;
                goto $l566;
                $l1994:;
                return $finallyReturn1988;
            }
            $l1937:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1940));
            result1940 = NULL;
            switch ($tmp1939) {
                case 0: goto $l1993;
            }
            $l1996:;
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
    $tmp568 = -1;
    goto $l566;
    $l566:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp570));
    switch ($tmp568) {
        case 5: goto $l696;
        case 29: goto $l1611;
        case 36: goto $l1738;
        case 44: goto $l1799;
        case 16: goto $l1038;
        case 34: goto $l1715;
        case 30: goto $l1621;
        case 0: goto $l576;
        case 6: goto $l710;
        case 20: goto $l1239;
        case 18: goto $l1116;
        case 40: goto $l1762;
        case 19: goto $l1167;
        case 26: goto $l1414;
        case 35: goto $l1725;
        case 2: goto $l606;
        case 22: goto $l1268;
        case 25: goto $l1355;
        case 27: goto $l1479;
        case 47: goto $l1994;
        case 33: goto $l1669;
        case -1: goto $l1997;
        case 28: goto $l1604;
        case 43: goto $l1792;
        case 41: goto $l1769;
        case 17: goto $l1059;
        case 4: goto $l644;
        case 42: goto $l1788;
        case 39: goto $l1756;
        case 13: goto $l945;
        case 38: goto $l1749;
        case 14: goto $l965;
        case 23: goto $l1335;
        case 3: goto $l635;
        case 24: goto $l1345;
        case 45: goto $l1829;
        case 46: goto $l1927;
        case 21: goto $l1261;
        case 11: goto $l926;
        case 12: goto $l940;
        case 10: goto $l803;
        case 8: goto $l737;
        case 37: goto $l1743;
        case 7: goto $l715;
        case 9: goto $l773;
        case 15: goto $l972;
        case 31: goto $l1628;
        case 1: goto $l591;
        case 32: goto $l1647;
    }
    $l1997:;
}
void org$pandalanguage$pandac$ASTNode$cleanup(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$5_12004 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2005;
    org$pandalanguage$pandac$Position _f02007;
    panda$core$String* _f12009 = NULL;
    org$pandalanguage$pandac$Position _f02012;
    org$pandalanguage$pandac$ASTNode* _f12014 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22016 = NULL;
    org$pandalanguage$pandac$Position _f02019;
    org$pandalanguage$pandac$ASTNode* _f12021 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f22023;
    org$pandalanguage$pandac$ASTNode* _f32025 = NULL;
    org$pandalanguage$pandac$Position _f02028;
    panda$core$Bit _f12030;
    org$pandalanguage$pandac$Position _f02033;
    panda$collections$ImmutableArray* _f12035 = NULL;
    org$pandalanguage$pandac$Position _f02038;
    panda$core$String* _f12040 = NULL;
    org$pandalanguage$pandac$Position _f02043;
    org$pandalanguage$pandac$ASTNode* _f12045 = NULL;
    panda$collections$ImmutableArray* _f22047 = NULL;
    org$pandalanguage$pandac$Position _f02050;
    org$pandalanguage$pandac$ASTNode* _f12052 = NULL;
    panda$core$String* _f22054 = NULL;
    panda$collections$ImmutableArray* _f32056 = NULL;
    org$pandalanguage$pandac$Position _f02059;
    org$pandalanguage$pandac$ASTNode* _f12061 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f22063 = NULL;
    panda$core$Int64 _f32065;
    org$pandalanguage$pandac$Position _f02068;
    org$pandalanguage$pandac$ASTNode* _f12070 = NULL;
    panda$collections$ImmutableArray* _f22072 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind _f32074;
    panda$core$String* _f42076 = NULL;
    panda$collections$ImmutableArray* _f52078 = NULL;
    panda$collections$ImmutableArray* _f62080 = NULL;
    panda$collections$ImmutableArray* _f72082 = NULL;
    org$pandalanguage$pandac$Position _f02085;
    panda$core$String* _f12087 = NULL;
    org$pandalanguage$pandac$Position _f02090;
    org$pandalanguage$pandac$ASTNode* _f12092 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22094 = NULL;
    org$pandalanguage$pandac$Position _f02097;
    panda$core$String* _f12099 = NULL;
    panda$collections$ImmutableArray* _f22101 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32103 = NULL;
    org$pandalanguage$pandac$Position _f02106;
    org$pandalanguage$pandac$ASTNode* _f12108 = NULL;
    panda$core$String* _f22110 = NULL;
    org$pandalanguage$pandac$Position _f02113;
    org$pandalanguage$pandac$ASTNode* _f12115 = NULL;
    panda$collections$ImmutableArray* _f22117 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32119 = NULL;
    panda$collections$ImmutableArray* _f02122 = NULL;
    org$pandalanguage$pandac$Position _f02125;
    panda$core$String* _f12127 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22129 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32131 = NULL;
    panda$collections$ImmutableArray* _f42133 = NULL;
    org$pandalanguage$pandac$Position _f02136;
    panda$core$String* _f12138 = NULL;
    panda$collections$ImmutableArray* _f22140 = NULL;
    org$pandalanguage$pandac$Position _f02143;
    panda$core$String* _f12145 = NULL;
    org$pandalanguage$pandac$Position _f02148;
    org$pandalanguage$pandac$ASTNode* _f12150 = NULL;
    panda$collections$ImmutableArray* _f22152 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32154 = NULL;
    org$pandalanguage$pandac$Position _f02157;
    panda$core$UInt64 _f12159;
    org$pandalanguage$pandac$IRNode* _f02162 = NULL;
    org$pandalanguage$pandac$Position _f02165;
    panda$core$String* _f12167 = NULL;
    panda$collections$ImmutableArray* _f22169 = NULL;
    org$pandalanguage$pandac$Position _f02172;
    org$pandalanguage$pandac$ASTNode* _f12174 = NULL;
    panda$collections$ImmutableArray* _f22176 = NULL;
    panda$collections$ImmutableArray* _f32178 = NULL;
    org$pandalanguage$pandac$Position _f02181;
    org$pandalanguage$pandac$ASTNode* _f12183 = NULL;
    panda$collections$ImmutableArray* _f22185 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind _f32187;
    panda$core$String* _f42189 = NULL;
    panda$collections$ImmutableArray* _f52191 = NULL;
    org$pandalanguage$pandac$ASTNode* _f62193 = NULL;
    panda$collections$ImmutableArray* _f72195 = NULL;
    org$pandalanguage$pandac$Position _f02198;
    org$pandalanguage$pandac$Position _f02201;
    org$pandalanguage$pandac$ASTNode* _f12203 = NULL;
    org$pandalanguage$pandac$Position _f02206;
    panda$core$String* _f12208 = NULL;
    org$pandalanguage$pandac$Position _f02211;
    panda$core$String* _f12213 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22215 = NULL;
    org$pandalanguage$pandac$Position _f02218;
    org$pandalanguage$pandac$parser$Token$Kind _f12220;
    org$pandalanguage$pandac$ASTNode* _f22222 = NULL;
    org$pandalanguage$pandac$Position _f02225;
    org$pandalanguage$pandac$ASTNode* _f12227 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22229 = NULL;
    panda$core$Bit _f32231;
    org$pandalanguage$pandac$ASTNode* _f42233 = NULL;
    org$pandalanguage$pandac$Position _f02236;
    panda$core$Real64 _f12238;
    org$pandalanguage$pandac$Position _f02241;
    org$pandalanguage$pandac$ASTNode* _f12243 = NULL;
    org$pandalanguage$pandac$Position _f02246;
    org$pandalanguage$pandac$Position _f02249;
    panda$core$String* _f12251 = NULL;
    org$pandalanguage$pandac$Position _f02254;
    org$pandalanguage$pandac$Position _f02257;
    panda$core$String* _f12259 = NULL;
    org$pandalanguage$pandac$Position _f02262;
    panda$core$String* _f12264 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22266 = NULL;
    org$pandalanguage$pandac$Position _f02269;
    panda$core$String* _f12271 = NULL;
    org$pandalanguage$pandac$Position _f02274;
    org$pandalanguage$pandac$Variable$Kind _f12276;
    panda$collections$ImmutableArray* _f22278 = NULL;
    org$pandalanguage$pandac$Position _f02281;
    panda$collections$ImmutableArray* _f12283 = NULL;
    panda$collections$ImmutableArray* _f22285 = NULL;
    org$pandalanguage$pandac$Position _f02288;
    panda$core$String* _f12290 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22292 = NULL;
    panda$collections$ImmutableArray* _f32294 = NULL;
    int $tmp2000;
    {
        int $tmp2003;
        {
            $tmp2005 = self;
            $match$5_12004 = $tmp2005;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2005));
            panda$core$Bit $tmp2006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp2006.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2008 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02007 = *$tmp2008;
                panda$core$String** $tmp2010 = ((panda$core$String**) ((char*) $match$5_12004->$data + 16));
                _f12009 = *$tmp2010;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12009));
            }
            }
            else {
            panda$core$Bit $tmp2011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp2011.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2013 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02012 = *$tmp2013;
                org$pandalanguage$pandac$ASTNode** $tmp2015 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 16));
                _f12014 = *$tmp2015;
                org$pandalanguage$pandac$ASTNode** $tmp2017 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 24));
                _f22016 = *$tmp2017;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12014));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22016));
            }
            }
            else {
            panda$core$Bit $tmp2018 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp2018.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2020 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02019 = *$tmp2020;
                org$pandalanguage$pandac$ASTNode** $tmp2022 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 16));
                _f12021 = *$tmp2022;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2024 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12004->$data + 24));
                _f22023 = *$tmp2024;
                org$pandalanguage$pandac$ASTNode** $tmp2026 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 32));
                _f32025 = *$tmp2026;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12021));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32025));
            }
            }
            else {
            panda$core$Bit $tmp2027 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp2027.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2029 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02028 = *$tmp2029;
                panda$core$Bit* $tmp2031 = ((panda$core$Bit*) ((char*) $match$5_12004->$data + 16));
                _f12030 = *$tmp2031;
            }
            }
            else {
            panda$core$Bit $tmp2032 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp2032.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2034 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02033 = *$tmp2034;
                panda$collections$ImmutableArray** $tmp2036 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12004->$data + 16));
                _f12035 = *$tmp2036;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12035));
            }
            }
            else {
            panda$core$Bit $tmp2037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp2037.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2039 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02038 = *$tmp2039;
                panda$core$String** $tmp2041 = ((panda$core$String**) ((char*) $match$5_12004->$data + 16));
                _f12040 = *$tmp2041;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12040));
            }
            }
            else {
            panda$core$Bit $tmp2042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp2042.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2044 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02043 = *$tmp2044;
                org$pandalanguage$pandac$ASTNode** $tmp2046 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 16));
                _f12045 = *$tmp2046;
                panda$collections$ImmutableArray** $tmp2048 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12004->$data + 24));
                _f22047 = *$tmp2048;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12045));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22047));
            }
            }
            else {
            panda$core$Bit $tmp2049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 7 }));
            if ($tmp2049.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2051 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02050 = *$tmp2051;
                org$pandalanguage$pandac$ASTNode** $tmp2053 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 16));
                _f12052 = *$tmp2053;
                panda$core$String** $tmp2055 = ((panda$core$String**) ((char*) $match$5_12004->$data + 24));
                _f22054 = *$tmp2055;
                panda$collections$ImmutableArray** $tmp2057 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12004->$data + 32));
                _f32056 = *$tmp2057;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12052));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22054));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32056));
            }
            }
            else {
            panda$core$Bit $tmp2058 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp2058.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2060 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02059 = *$tmp2060;
                org$pandalanguage$pandac$ASTNode** $tmp2062 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 16));
                _f12061 = *$tmp2062;
                org$pandalanguage$pandac$ChoiceEntry** $tmp2064 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12004->$data + 24));
                _f22063 = *$tmp2064;
                panda$core$Int64* $tmp2066 = ((panda$core$Int64*) ((char*) $match$5_12004->$data + 32));
                _f32065 = *$tmp2066;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12061));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22063));
            }
            }
            else {
            panda$core$Bit $tmp2067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp2067.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2069 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02068 = *$tmp2069;
                org$pandalanguage$pandac$ASTNode** $tmp2071 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 16));
                _f12070 = *$tmp2071;
                panda$collections$ImmutableArray** $tmp2073 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12004->$data + 24));
                _f22072 = *$tmp2073;
                org$pandalanguage$pandac$ClassDecl$Kind* $tmp2075 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$5_12004->$data + 32));
                _f32074 = *$tmp2075;
                panda$core$String** $tmp2077 = ((panda$core$String**) ((char*) $match$5_12004->$data + 40));
                _f42076 = *$tmp2077;
                panda$collections$ImmutableArray** $tmp2079 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12004->$data + 48));
                _f52078 = *$tmp2079;
                panda$collections$ImmutableArray** $tmp2081 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12004->$data + 56));
                _f62080 = *$tmp2081;
                panda$collections$ImmutableArray** $tmp2083 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12004->$data + 64));
                _f72082 = *$tmp2083;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12070));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22072));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42076));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f52078));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f62080));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f72082));
            }
            }
            else {
            panda$core$Bit $tmp2084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 10 }));
            if ($tmp2084.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2086 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02085 = *$tmp2086;
                panda$core$String** $tmp2088 = ((panda$core$String**) ((char*) $match$5_12004->$data + 16));
                _f12087 = *$tmp2088;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12087));
            }
            }
            else {
            panda$core$Bit $tmp2089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp2089.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2091 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02090 = *$tmp2091;
                org$pandalanguage$pandac$ASTNode** $tmp2093 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 16));
                _f12092 = *$tmp2093;
                org$pandalanguage$pandac$ASTNode** $tmp2095 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 24));
                _f22094 = *$tmp2095;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12092));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22094));
            }
            }
            else {
            panda$core$Bit $tmp2096 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp2096.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2098 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02097 = *$tmp2098;
                panda$core$String** $tmp2100 = ((panda$core$String**) ((char*) $match$5_12004->$data + 16));
                _f12099 = *$tmp2100;
                panda$collections$ImmutableArray** $tmp2102 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12004->$data + 24));
                _f22101 = *$tmp2102;
                org$pandalanguage$pandac$ASTNode** $tmp2104 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 32));
                _f32103 = *$tmp2104;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12099));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22101));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32103));
            }
            }
            else {
            panda$core$Bit $tmp2105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp2105.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2107 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02106 = *$tmp2107;
                org$pandalanguage$pandac$ASTNode** $tmp2109 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 16));
                _f12108 = *$tmp2109;
                panda$core$String** $tmp2111 = ((panda$core$String**) ((char*) $match$5_12004->$data + 24));
                _f22110 = *$tmp2111;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12108));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22110));
            }
            }
            else {
            panda$core$Bit $tmp2112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp2112.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2114 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02113 = *$tmp2114;
                org$pandalanguage$pandac$ASTNode** $tmp2116 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 16));
                _f12115 = *$tmp2116;
                panda$collections$ImmutableArray** $tmp2118 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12004->$data + 24));
                _f22117 = *$tmp2118;
                org$pandalanguage$pandac$ASTNode** $tmp2120 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 32));
                _f32119 = *$tmp2120;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12115));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22117));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32119));
            }
            }
            else {
            panda$core$Bit $tmp2121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp2121.value) {
            {
                panda$collections$ImmutableArray** $tmp2123 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12004->$data + 0));
                _f02122 = *$tmp2123;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02122));
            }
            }
            else {
            panda$core$Bit $tmp2124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 16 }));
            if ($tmp2124.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2126 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02125 = *$tmp2126;
                panda$core$String** $tmp2128 = ((panda$core$String**) ((char*) $match$5_12004->$data + 16));
                _f12127 = *$tmp2128;
                org$pandalanguage$pandac$ASTNode** $tmp2130 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 24));
                _f22129 = *$tmp2130;
                org$pandalanguage$pandac$ASTNode** $tmp2132 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 32));
                _f32131 = *$tmp2132;
                panda$collections$ImmutableArray** $tmp2134 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12004->$data + 40));
                _f42133 = *$tmp2134;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12127));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22129));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32131));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42133));
            }
            }
            else {
            panda$core$Bit $tmp2135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp2135.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2137 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02136 = *$tmp2137;
                panda$core$String** $tmp2139 = ((panda$core$String**) ((char*) $match$5_12004->$data + 16));
                _f12138 = *$tmp2139;
                panda$collections$ImmutableArray** $tmp2141 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12004->$data + 24));
                _f22140 = *$tmp2141;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12138));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22140));
            }
            }
            else {
            panda$core$Bit $tmp2142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp2142.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2144 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02143 = *$tmp2144;
                panda$core$String** $tmp2146 = ((panda$core$String**) ((char*) $match$5_12004->$data + 16));
                _f12145 = *$tmp2146;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12145));
            }
            }
            else {
            panda$core$Bit $tmp2147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp2147.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2149 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02148 = *$tmp2149;
                org$pandalanguage$pandac$ASTNode** $tmp2151 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 16));
                _f12150 = *$tmp2151;
                panda$collections$ImmutableArray** $tmp2153 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12004->$data + 24));
                _f22152 = *$tmp2153;
                org$pandalanguage$pandac$ASTNode** $tmp2155 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 32));
                _f32154 = *$tmp2155;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12150));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22152));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32154));
            }
            }
            else {
            panda$core$Bit $tmp2156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 20 }));
            if ($tmp2156.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2158 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02157 = *$tmp2158;
                panda$core$UInt64* $tmp2160 = ((panda$core$UInt64*) ((char*) $match$5_12004->$data + 16));
                _f12159 = *$tmp2160;
            }
            }
            else {
            panda$core$Bit $tmp2161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 21 }));
            if ($tmp2161.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2163 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12004->$data + 0));
                _f02162 = *$tmp2163;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02162));
            }
            }
            else {
            panda$core$Bit $tmp2164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp2164.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2166 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02165 = *$tmp2166;
                panda$core$String** $tmp2168 = ((panda$core$String**) ((char*) $match$5_12004->$data + 16));
                _f12167 = *$tmp2168;
                panda$collections$ImmutableArray** $tmp2170 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12004->$data + 24));
                _f22169 = *$tmp2170;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12167));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22169));
            }
            }
            else {
            panda$core$Bit $tmp2171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp2171.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2173 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02172 = *$tmp2173;
                org$pandalanguage$pandac$ASTNode** $tmp2175 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 16));
                _f12174 = *$tmp2175;
                panda$collections$ImmutableArray** $tmp2177 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12004->$data + 24));
                _f22176 = *$tmp2177;
                panda$collections$ImmutableArray** $tmp2179 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12004->$data + 32));
                _f32178 = *$tmp2179;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12174));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22176));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32178));
            }
            }
            else {
            panda$core$Bit $tmp2180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp2180.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2182 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02181 = *$tmp2182;
                org$pandalanguage$pandac$ASTNode** $tmp2184 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 16));
                _f12183 = *$tmp2184;
                panda$collections$ImmutableArray** $tmp2186 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12004->$data + 24));
                _f22185 = *$tmp2186;
                org$pandalanguage$pandac$MethodDecl$Kind* $tmp2188 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$5_12004->$data + 32));
                _f32187 = *$tmp2188;
                panda$core$String** $tmp2190 = ((panda$core$String**) ((char*) $match$5_12004->$data + 40));
                _f42189 = *$tmp2190;
                panda$collections$ImmutableArray** $tmp2192 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12004->$data + 48));
                _f52191 = *$tmp2192;
                org$pandalanguage$pandac$ASTNode** $tmp2194 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 56));
                _f62193 = *$tmp2194;
                panda$collections$ImmutableArray** $tmp2196 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12004->$data + 64));
                _f72195 = *$tmp2196;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12183));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22185));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42189));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f52191));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f62193));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f72195));
            }
            }
            else {
            panda$core$Bit $tmp2197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp2197.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2199 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02198 = *$tmp2199;
            }
            }
            else {
            panda$core$Bit $tmp2200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp2200.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2202 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02201 = *$tmp2202;
                org$pandalanguage$pandac$ASTNode** $tmp2204 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 16));
                _f12203 = *$tmp2204;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12203));
            }
            }
            else {
            panda$core$Bit $tmp2205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 27 }));
            if ($tmp2205.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2207 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02206 = *$tmp2207;
                panda$core$String** $tmp2209 = ((panda$core$String**) ((char*) $match$5_12004->$data + 16));
                _f12208 = *$tmp2209;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12208));
            }
            }
            else {
            panda$core$Bit $tmp2210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 28 }));
            if ($tmp2210.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2212 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02211 = *$tmp2212;
                panda$core$String** $tmp2214 = ((panda$core$String**) ((char*) $match$5_12004->$data + 16));
                _f12213 = *$tmp2214;
                org$pandalanguage$pandac$ASTNode** $tmp2216 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 24));
                _f22215 = *$tmp2216;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12213));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22215));
            }
            }
            else {
            panda$core$Bit $tmp2217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 29 }));
            if ($tmp2217.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2219 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02218 = *$tmp2219;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2221 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12004->$data + 16));
                _f12220 = *$tmp2221;
                org$pandalanguage$pandac$ASTNode** $tmp2223 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 24));
                _f22222 = *$tmp2223;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22222));
            }
            }
            else {
            panda$core$Bit $tmp2224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 30 }));
            if ($tmp2224.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2226 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02225 = *$tmp2226;
                org$pandalanguage$pandac$ASTNode** $tmp2228 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 16));
                _f12227 = *$tmp2228;
                org$pandalanguage$pandac$ASTNode** $tmp2230 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 24));
                _f22229 = *$tmp2230;
                panda$core$Bit* $tmp2232 = ((panda$core$Bit*) ((char*) $match$5_12004->$data + 32));
                _f32231 = *$tmp2232;
                org$pandalanguage$pandac$ASTNode** $tmp2234 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 33));
                _f42233 = *$tmp2234;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12227));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22229));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42233));
            }
            }
            else {
            panda$core$Bit $tmp2235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 31 }));
            if ($tmp2235.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2237 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02236 = *$tmp2237;
                panda$core$Real64* $tmp2239 = ((panda$core$Real64*) ((char*) $match$5_12004->$data + 16));
                _f12238 = *$tmp2239;
            }
            }
            else {
            panda$core$Bit $tmp2240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 32 }));
            if ($tmp2240.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2242 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02241 = *$tmp2242;
                org$pandalanguage$pandac$ASTNode** $tmp2244 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 16));
                _f12243 = *$tmp2244;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12243));
            }
            }
            else {
            panda$core$Bit $tmp2245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp2245.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2247 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02246 = *$tmp2247;
            }
            }
            else {
            panda$core$Bit $tmp2248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp2248.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2250 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02249 = *$tmp2250;
                panda$core$String** $tmp2252 = ((panda$core$String**) ((char*) $match$5_12004->$data + 16));
                _f12251 = *$tmp2252;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12251));
            }
            }
            else {
            panda$core$Bit $tmp2253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 35 }));
            if ($tmp2253.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2255 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02254 = *$tmp2255;
            }
            }
            else {
            panda$core$Bit $tmp2256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp2256.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2258 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02257 = *$tmp2258;
                panda$core$String** $tmp2260 = ((panda$core$String**) ((char*) $match$5_12004->$data + 16));
                _f12259 = *$tmp2260;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12259));
            }
            }
            else {
            panda$core$Bit $tmp2261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 37 }));
            if ($tmp2261.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2263 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02262 = *$tmp2263;
                panda$core$String** $tmp2265 = ((panda$core$String**) ((char*) $match$5_12004->$data + 16));
                _f12264 = *$tmp2265;
                org$pandalanguage$pandac$ASTNode** $tmp2267 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 24));
                _f22266 = *$tmp2267;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12264));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22266));
            }
            }
            else {
            panda$core$Bit $tmp2268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 38 }));
            if ($tmp2268.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2270 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02269 = *$tmp2270;
                panda$core$String** $tmp2272 = ((panda$core$String**) ((char*) $match$5_12004->$data + 16));
                _f12271 = *$tmp2272;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12271));
            }
            }
            else {
            panda$core$Bit $tmp2273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp2273.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2275 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02274 = *$tmp2275;
                org$pandalanguage$pandac$Variable$Kind* $tmp2277 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_12004->$data + 16));
                _f12276 = *$tmp2277;
                panda$collections$ImmutableArray** $tmp2279 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12004->$data + 24));
                _f22278 = *$tmp2279;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22278));
            }
            }
            else {
            panda$core$Bit $tmp2280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp2280.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2282 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02281 = *$tmp2282;
                panda$collections$ImmutableArray** $tmp2284 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12004->$data + 16));
                _f12283 = *$tmp2284;
                panda$collections$ImmutableArray** $tmp2286 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12004->$data + 24));
                _f22285 = *$tmp2286;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12283));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22285));
            }
            }
            else {
            panda$core$Bit $tmp2287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12004->$rawValue, ((panda$core$Int64) { 41 }));
            if ($tmp2287.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2289 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12004->$data + 0));
                _f02288 = *$tmp2289;
                panda$core$String** $tmp2291 = ((panda$core$String**) ((char*) $match$5_12004->$data + 16));
                _f12290 = *$tmp2291;
                org$pandalanguage$pandac$ASTNode** $tmp2293 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12004->$data + 24));
                _f22292 = *$tmp2293;
                panda$collections$ImmutableArray** $tmp2295 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12004->$data + 32));
                _f32294 = *$tmp2295;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12290));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22292));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32294));
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
        $tmp2003 = -1;
        goto $l2001;
        $l2001:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2005));
        switch ($tmp2003) {
            case -1: goto $l2296;
        }
        $l2296:;
    }
    $tmp2000 = -1;
    goto $l1998;
    $l1998:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2000) {
        case -1: goto $l2297;
    }
    $l2297:;
}

