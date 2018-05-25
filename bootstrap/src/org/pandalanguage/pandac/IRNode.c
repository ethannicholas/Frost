#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "panda/core/UInt64.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/ListView.h"


static panda$core$String $s1;
org$pandalanguage$pandac$IRNode$class_type org$pandalanguage$pandac$IRNode$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$IRNode$convert$R$panda$core$String, org$pandalanguage$pandac$IRNode$cleanup, org$pandalanguage$pandac$IRNode$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position, org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit} };

typedef org$pandalanguage$pandac$Type* (*$fn74)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn77)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn89)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn144)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn167)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn195)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn198)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn203)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn324)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn336)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn343)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn425)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn512)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn515)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn534)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn538)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn559)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn566)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn577)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn579)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn610)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn617)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn628)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn630)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn666)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn687)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn699)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn711)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn718)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn729)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn731)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn758)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn770)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn777)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn788)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn790)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn798)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn810)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn817)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn834)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn841)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn852)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn854)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn871)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn883)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn890)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn901)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn903)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn919)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn926)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn937)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn939)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn965)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn978)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn990)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn997)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1008)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1010)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1028)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1042)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1066)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1069)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1073)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1125)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1132)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1143)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1145)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1173)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1180)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1191)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1193)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1209)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1216)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1227)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1229)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1246)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1258)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1265)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1276)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1278)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1342)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1383)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1390)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1401)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1437)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1444)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1455)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1471)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1478)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1489)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1536)(panda$collections$ListView*);
typedef org$pandalanguage$pandac$Type* (*$fn1549)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1573)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1604)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1642)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1684)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1695)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1727)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1734)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1745)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1775)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1783)(panda$collections$ListView*, panda$core$String*);
typedef panda$core$String* (*$fn1800)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1819)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1856)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1863)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1874)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1953)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1960)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1971)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2014)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2021)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2032)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2048)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2055)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2066)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2091)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2131)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2180)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2187)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2198)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2340)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2347)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2368)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2380)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2397)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2463)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2492)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2501)(panda$collections$ListView*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2541)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2548)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2559)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x4e\x6f\x64\x65", 31, -8857975469778350849, NULL };
static panda$core$String $s1305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s1307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s1319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s1344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s1404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x79\x20\x7b\x0a", 6, 2292679699717, NULL };
static panda$core$String $s1458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x66\x69\x6e\x61\x6c\x6c\x79\x20\x7b\x0a", 12, -1355183944487068280, NULL };
static panda$core$String $s1492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s1512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s1531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x4e\x54\x36\x34\x5f\x57\x52\x41\x50\x28", 11, -7093166379287162761, NULL };
static panda$core$String $s1561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x2a\x2d", 24, 1541443738414735436, NULL };
static panda$core$String $s1664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s1666 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1671 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s1686 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s1748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s1756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1780 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1802 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x2a\x20\x61\x6e\x64\x20\x74\x68\x65\x6e\x3a\x20", 14, -3277098584181619124, NULL };
static panda$core$String $s1805 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s1877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1909 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1911 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s1921 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s1942 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1944 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1974 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2002 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2035 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2039 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s2069 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2096 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s2133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s2167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s2170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s2229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s2245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s2270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s2304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s2309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s2312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s2370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s2425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s2428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s2430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s2455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s2457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s2459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s2488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s2495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s2498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s2531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

org$pandalanguage$pandac$Type* org$pandalanguage$pandac$IRNode$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$73_95 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp6;
    org$pandalanguage$pandac$Type* type8 = NULL;
    org$pandalanguage$pandac$Type* $returnValue10;
    org$pandalanguage$pandac$Type* $tmp11;
    org$pandalanguage$pandac$Type* type15 = NULL;
    org$pandalanguage$pandac$Type* $tmp17;
    org$pandalanguage$pandac$Type* type21 = NULL;
    org$pandalanguage$pandac$Type* $tmp23;
    org$pandalanguage$pandac$Type* type27 = NULL;
    org$pandalanguage$pandac$Type* $tmp29;
    org$pandalanguage$pandac$Type* type33 = NULL;
    org$pandalanguage$pandac$Type* $tmp35;
    org$pandalanguage$pandac$ChoiceEntry* ce39 = NULL;
    org$pandalanguage$pandac$Type* $tmp41;
    org$pandalanguage$pandac$Type* $tmp42;
    org$pandalanguage$pandac$ChoiceEntry* ce47 = NULL;
    panda$core$Int64 field49;
    org$pandalanguage$pandac$Type* $tmp51;
    panda$core$Object* $tmp52;
    org$pandalanguage$pandac$Type* type57 = NULL;
    org$pandalanguage$pandac$Type* $tmp59;
    org$pandalanguage$pandac$Type* type63 = NULL;
    org$pandalanguage$pandac$Type* $tmp65;
    org$pandalanguage$pandac$IRNode* m69 = NULL;
    org$pandalanguage$pandac$Type* $tmp71;
    panda$core$Object* $tmp72;
    org$pandalanguage$pandac$Type* $tmp73;
    org$pandalanguage$pandac$Type* $tmp76;
    org$pandalanguage$pandac$IRNode* expr85 = NULL;
    org$pandalanguage$pandac$Type* $tmp87;
    org$pandalanguage$pandac$Type* $tmp88;
    org$pandalanguage$pandac$Type* type94 = NULL;
    org$pandalanguage$pandac$Type* $tmp96;
    org$pandalanguage$pandac$Type* type100 = NULL;
    org$pandalanguage$pandac$Type* $tmp102;
    org$pandalanguage$pandac$Type* $tmp106;
    org$pandalanguage$pandac$Type* $tmp107;
    org$pandalanguage$pandac$Type* $tmp112;
    org$pandalanguage$pandac$Type* $tmp113;
    org$pandalanguage$pandac$Type* type118 = NULL;
    org$pandalanguage$pandac$IRNode* target120 = NULL;
    org$pandalanguage$pandac$MethodRef* m122 = NULL;
    org$pandalanguage$pandac$Type* $tmp124;
    org$pandalanguage$pandac$Type* type128 = NULL;
    org$pandalanguage$pandac$Type* $tmp130;
    org$pandalanguage$pandac$Type* type134 = NULL;
    org$pandalanguage$pandac$Type* $tmp136;
    org$pandalanguage$pandac$IRNode* base140 = NULL;
    org$pandalanguage$pandac$Type* $tmp142;
    org$pandalanguage$pandac$Type* $tmp143;
    org$pandalanguage$pandac$Type* type149 = NULL;
    org$pandalanguage$pandac$Type* $tmp151;
    org$pandalanguage$pandac$Type* type155 = NULL;
    panda$core$Int64 id157;
    org$pandalanguage$pandac$Type* $tmp159;
    org$pandalanguage$pandac$IRNode* base163 = NULL;
    org$pandalanguage$pandac$Type* $tmp165;
    org$pandalanguage$pandac$Type* $tmp166;
    org$pandalanguage$pandac$Type* type172 = NULL;
    org$pandalanguage$pandac$Type* $tmp174;
    org$pandalanguage$pandac$Type* $tmp178;
    org$pandalanguage$pandac$Type* $tmp179;
    org$pandalanguage$pandac$Type* type184 = NULL;
    org$pandalanguage$pandac$Type* $tmp186;
    org$pandalanguage$pandac$IRNode* ifTrue190 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse192 = NULL;
    org$pandalanguage$pandac$Type* $tmp194;
    org$pandalanguage$pandac$Type* $tmp197;
    org$pandalanguage$pandac$Type* $tmp201;
    org$pandalanguage$pandac$Type* $tmp202;
    org$pandalanguage$pandac$Type* $tmp208;
    org$pandalanguage$pandac$Type* $tmp209;
    org$pandalanguage$pandac$Type* $tmp214;
    org$pandalanguage$pandac$Type* $tmp215;
    org$pandalanguage$pandac$Type* type220 = NULL;
    org$pandalanguage$pandac$Type* $tmp222;
    org$pandalanguage$pandac$Type* type226 = NULL;
    org$pandalanguage$pandac$Type* $tmp228;
    org$pandalanguage$pandac$Type* $tmp232;
    org$pandalanguage$pandac$Type* $tmp233;
    org$pandalanguage$pandac$Type* $tmp238;
    org$pandalanguage$pandac$Type* $tmp239;
    org$pandalanguage$pandac$Variable* variable244 = NULL;
    org$pandalanguage$pandac$Type* $tmp246;
    int $tmp4;
    {
        $tmp6 = self;
        $match$73_95 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp7.value) {
        {
            org$pandalanguage$pandac$Type** $tmp9 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type8 = *$tmp9;
            $tmp11 = type8;
            $returnValue10 = $tmp11;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
            $tmp4 = 0;
            goto $l2;
            $l12:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp14 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp14.value) {
        {
            org$pandalanguage$pandac$Type** $tmp16 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type15 = *$tmp16;
            $tmp17 = type15;
            $returnValue10 = $tmp17;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
            $tmp4 = 1;
            goto $l2;
            $l18:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp20 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp20.value) {
        {
            org$pandalanguage$pandac$Type** $tmp22 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type21 = *$tmp22;
            $tmp23 = type21;
            $returnValue10 = $tmp23;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp23));
            $tmp4 = 2;
            goto $l2;
            $l24:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp26 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp26.value) {
        {
            org$pandalanguage$pandac$Type** $tmp28 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type27 = *$tmp28;
            $tmp29 = type27;
            $returnValue10 = $tmp29;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp29));
            $tmp4 = 3;
            goto $l2;
            $l30:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp32 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp32.value) {
        {
            org$pandalanguage$pandac$Type** $tmp34 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 24));
            type33 = *$tmp34;
            $tmp35 = type33;
            $returnValue10 = $tmp35;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
            $tmp4 = 4;
            goto $l2;
            $l36:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp38 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp38.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp40 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$73_95->$data + 16));
            ce39 = *$tmp40;
            org$pandalanguage$pandac$Type* $tmp43 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp42 = $tmp43;
            $tmp41 = $tmp42;
            $returnValue10 = $tmp41;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp41));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp42));
            $tmp4 = 5;
            goto $l2;
            $l44:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp46 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp46.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp48 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$73_95->$data + 24));
            ce47 = *$tmp48;
            panda$core$Int64* $tmp50 = ((panda$core$Int64*) ((char*) $match$73_95->$data + 32));
            field49 = *$tmp50;
            panda$core$Object* $tmp53 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(ce47->fields, field49);
            $tmp52 = $tmp53;
            $tmp51 = ((org$pandalanguage$pandac$Type*) $tmp52);
            $returnValue10 = $tmp51;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp51));
            panda$core$Panda$unref$panda$core$Object($tmp52);
            $tmp4 = 6;
            goto $l2;
            $l54:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp56 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp56.value) {
        {
            org$pandalanguage$pandac$Type** $tmp58 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type57 = *$tmp58;
            $tmp59 = type57;
            $returnValue10 = $tmp59;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp59));
            $tmp4 = 7;
            goto $l2;
            $l60:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp62 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp62.value) {
        {
            org$pandalanguage$pandac$Type** $tmp64 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type63 = *$tmp64;
            $tmp65 = type63;
            $returnValue10 = $tmp65;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp65));
            $tmp4 = 8;
            goto $l2;
            $l66:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp68 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp68.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp70 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$73_95->$data + 0));
            m69 = *$tmp70;
            org$pandalanguage$pandac$Type* $tmp75 = (($fn74) m69->$class->vtable[2])(m69);
            $tmp73 = $tmp75;
            org$pandalanguage$pandac$Type* $tmp78 = (($fn77) m69->$class->vtable[2])(m69);
            $tmp76 = $tmp78;
            panda$core$Int64 $tmp79 = panda$collections$Array$get_count$R$panda$core$Int64($tmp76->subtypes);
            panda$core$Int64 $tmp80 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp79, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp81 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp73->subtypes, $tmp80);
            $tmp72 = $tmp81;
            $tmp71 = ((org$pandalanguage$pandac$Type*) $tmp72);
            $returnValue10 = $tmp71;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp71));
            panda$core$Panda$unref$panda$core$Object($tmp72);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp76));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp73));
            $tmp4 = 9;
            goto $l2;
            $l82:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp84 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp84.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp86 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$73_95->$data + 0));
            expr85 = *$tmp86;
            org$pandalanguage$pandac$Type* $tmp90 = (($fn89) expr85->$class->vtable[2])(expr85);
            $tmp88 = $tmp90;
            $tmp87 = $tmp88;
            $returnValue10 = $tmp87;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp87));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp88));
            $tmp4 = 10;
            goto $l2;
            $l91:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp93 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp93.value) {
        {
            org$pandalanguage$pandac$Type** $tmp95 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type94 = *$tmp95;
            $tmp96 = type94;
            $returnValue10 = $tmp96;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp96));
            $tmp4 = 11;
            goto $l2;
            $l97:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp99 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp99.value) {
        {
            org$pandalanguage$pandac$Type** $tmp101 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type100 = *$tmp101;
            $tmp102 = type100;
            $returnValue10 = $tmp102;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp102));
            $tmp4 = 12;
            goto $l2;
            $l103:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp105.value) {
        {
            org$pandalanguage$pandac$Type* $tmp108 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            $tmp107 = $tmp108;
            $tmp106 = $tmp107;
            $returnValue10 = $tmp106;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp106));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp107));
            $tmp4 = 13;
            goto $l2;
            $l109:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp111.value) {
        {
            org$pandalanguage$pandac$Type* $tmp114 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            $tmp113 = $tmp114;
            $tmp112 = $tmp113;
            $returnValue10 = $tmp112;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp112));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp113));
            $tmp4 = 14;
            goto $l2;
            $l115:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp117.value) {
        {
            org$pandalanguage$pandac$Type** $tmp119 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type118 = *$tmp119;
            org$pandalanguage$pandac$IRNode** $tmp121 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$73_95->$data + 24));
            target120 = *$tmp121;
            org$pandalanguage$pandac$MethodRef** $tmp123 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$73_95->$data + 32));
            m122 = *$tmp123;
            $tmp124 = type118;
            $returnValue10 = $tmp124;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp124));
            $tmp4 = 15;
            goto $l2;
            $l125:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp127.value) {
        {
            org$pandalanguage$pandac$Type** $tmp129 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type128 = *$tmp129;
            $tmp130 = type128;
            $returnValue10 = $tmp130;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp130));
            $tmp4 = 16;
            goto $l2;
            $l131:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp133.value) {
        {
            org$pandalanguage$pandac$Type** $tmp135 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type134 = *$tmp135;
            $tmp136 = type134;
            $returnValue10 = $tmp136;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp136));
            $tmp4 = 17;
            goto $l2;
            $l137:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp139.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp141 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$73_95->$data + 24));
            base140 = *$tmp141;
            org$pandalanguage$pandac$Type* $tmp145 = (($fn144) base140->$class->vtable[2])(base140);
            $tmp143 = $tmp145;
            $tmp142 = $tmp143;
            $returnValue10 = $tmp142;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp142));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp143));
            $tmp4 = 18;
            goto $l2;
            $l146:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp148.value) {
        {
            org$pandalanguage$pandac$Type** $tmp150 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type149 = *$tmp150;
            $tmp151 = type149;
            $returnValue10 = $tmp151;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp151));
            $tmp4 = 19;
            goto $l2;
            $l152:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp154.value) {
        {
            org$pandalanguage$pandac$Type** $tmp156 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type155 = *$tmp156;
            panda$core$Int64* $tmp158 = ((panda$core$Int64*) ((char*) $match$73_95->$data + 24));
            id157 = *$tmp158;
            $tmp159 = type155;
            $returnValue10 = $tmp159;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp159));
            $tmp4 = 20;
            goto $l2;
            $l160:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp162.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp164 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$73_95->$data + 0));
            base163 = *$tmp164;
            org$pandalanguage$pandac$Type* $tmp168 = (($fn167) base163->$class->vtable[2])(base163);
            $tmp166 = $tmp168;
            $tmp165 = $tmp166;
            $returnValue10 = $tmp165;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp165));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp166));
            $tmp4 = 21;
            goto $l2;
            $l169:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp171.value) {
        {
            org$pandalanguage$pandac$Type** $tmp173 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type172 = *$tmp173;
            $tmp174 = type172;
            $returnValue10 = $tmp174;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp174));
            $tmp4 = 22;
            goto $l2;
            $l175:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp177.value) {
        {
            org$pandalanguage$pandac$Type* $tmp180 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
            $tmp179 = $tmp180;
            $tmp178 = $tmp179;
            $returnValue10 = $tmp178;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp178));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp179));
            $tmp4 = 23;
            goto $l2;
            $l181:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp183.value) {
        {
            org$pandalanguage$pandac$Type** $tmp185 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type184 = *$tmp185;
            $tmp186 = type184;
            $returnValue10 = $tmp186;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp186));
            $tmp4 = 24;
            goto $l2;
            $l187:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp189.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp191 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$73_95->$data + 24));
            ifTrue190 = *$tmp191;
            org$pandalanguage$pandac$IRNode** $tmp193 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$73_95->$data + 32));
            ifFalse192 = *$tmp193;
            org$pandalanguage$pandac$Type* $tmp196 = (($fn195) ifTrue190->$class->vtable[2])(ifTrue190);
            $tmp194 = $tmp196;
            org$pandalanguage$pandac$Type* $tmp199 = (($fn198) ifFalse192->$class->vtable[2])(ifFalse192);
            $tmp197 = $tmp199;
            panda$core$Bit $tmp200 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp194, $tmp197);
            PANDA_ASSERT($tmp200.value);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp197));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp194));
            org$pandalanguage$pandac$Type* $tmp204 = (($fn203) ifTrue190->$class->vtable[2])(ifTrue190);
            $tmp202 = $tmp204;
            $tmp201 = $tmp202;
            $returnValue10 = $tmp201;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp201));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp202));
            $tmp4 = 25;
            goto $l2;
            $l205:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp207.value) {
        {
            org$pandalanguage$pandac$Type* $tmp210 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            $tmp209 = $tmp210;
            $tmp208 = $tmp209;
            $returnValue10 = $tmp208;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp208));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp209));
            $tmp4 = 26;
            goto $l2;
            $l211:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp213.value) {
        {
            org$pandalanguage$pandac$Type* $tmp216 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp215 = $tmp216;
            $tmp214 = $tmp215;
            $returnValue10 = $tmp214;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp214));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp215));
            $tmp4 = 27;
            goto $l2;
            $l217:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp219.value) {
        {
            org$pandalanguage$pandac$Type** $tmp221 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type220 = *$tmp221;
            $tmp222 = type220;
            $returnValue10 = $tmp222;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp222));
            $tmp4 = 28;
            goto $l2;
            $l223:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp225.value) {
        {
            org$pandalanguage$pandac$Type** $tmp227 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type226 = *$tmp227;
            $tmp228 = type226;
            $returnValue10 = $tmp228;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp228));
            $tmp4 = 29;
            goto $l2;
            $l229:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp231.value) {
        {
            org$pandalanguage$pandac$Type* $tmp234 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp233 = $tmp234;
            $tmp232 = $tmp233;
            $returnValue10 = $tmp232;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp232));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp233));
            $tmp4 = 30;
            goto $l2;
            $l235:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp237.value) {
        {
            org$pandalanguage$pandac$Type* $tmp240 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp239 = $tmp240;
            $tmp238 = $tmp239;
            $returnValue10 = $tmp238;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp238));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
            $tmp4 = 31;
            goto $l2;
            $l241:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp243.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp245 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$73_95->$data + 16));
            variable244 = *$tmp245;
            $tmp246 = variable244->type;
            $returnValue10 = $tmp246;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp246));
            $tmp4 = 32;
            goto $l2;
            $l247:;
            return $returnValue10;
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
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    switch ($tmp4) {
        case 29: goto $l229;
        case 6: goto $l54;
        case 17: goto $l137;
        case 21: goto $l169;
        case 26: goto $l211;
        case -1: goto $l249;
        case 10: goto $l91;
        case 14: goto $l115;
        case 9: goto $l82;
        case 30: goto $l235;
        case 13: goto $l109;
        case 27: goto $l217;
        case 8: goto $l66;
        case 15: goto $l125;
        case 11: goto $l97;
        case 23: goto $l181;
        case 32: goto $l247;
        case 18: goto $l146;
        case 20: goto $l160;
        case 1: goto $l18;
        case 2: goto $l24;
        case 0: goto $l12;
        case 25: goto $l205;
        case 31: goto $l241;
        case 7: goto $l60;
        case 12: goto $l103;
        case 5: goto $l44;
        case 28: goto $l223;
        case 4: goto $l36;
        case 24: goto $l187;
        case 19: goto $l152;
        case 16: goto $l131;
        case 22: goto $l175;
        case 3: goto $l30;
    }
    $l249:;
}
org$pandalanguage$pandac$Position org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$147_9253 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp254;
    org$pandalanguage$pandac$Position position256;
    org$pandalanguage$pandac$Position $returnValue258;
    org$pandalanguage$pandac$Position position262;
    org$pandalanguage$pandac$Position position267;
    org$pandalanguage$pandac$Position position272;
    org$pandalanguage$pandac$Position position277;
    org$pandalanguage$pandac$Position position282;
    org$pandalanguage$pandac$Position position287;
    org$pandalanguage$pandac$Position position292;
    org$pandalanguage$pandac$Position position297;
    org$pandalanguage$pandac$Position position302;
    org$pandalanguage$pandac$Position position307;
    org$pandalanguage$pandac$Position position312;
    org$pandalanguage$pandac$Position position317;
    org$pandalanguage$pandac$IRNode* target322 = NULL;
    org$pandalanguage$pandac$Position position329;
    org$pandalanguage$pandac$IRNode* m334 = NULL;
    org$pandalanguage$pandac$IRNode* expr341 = NULL;
    org$pandalanguage$pandac$Position position348;
    org$pandalanguage$pandac$Position position353;
    org$pandalanguage$pandac$Position position358;
    org$pandalanguage$pandac$Position position363;
    org$pandalanguage$pandac$Position position368;
    org$pandalanguage$pandac$Position position373;
    org$pandalanguage$pandac$Position position378;
    org$pandalanguage$pandac$Position position383;
    org$pandalanguage$pandac$Position position388;
    org$pandalanguage$pandac$Position position393;
    org$pandalanguage$pandac$Position position398;
    org$pandalanguage$pandac$Position position403;
    org$pandalanguage$pandac$Position position408;
    org$pandalanguage$pandac$Position position413;
    org$pandalanguage$pandac$Position position418;
    org$pandalanguage$pandac$IRNode* base423 = NULL;
    org$pandalanguage$pandac$Position position430;
    org$pandalanguage$pandac$Position position435;
    org$pandalanguage$pandac$Position position440;
    org$pandalanguage$pandac$Position position445;
    org$pandalanguage$pandac$Position position450;
    org$pandalanguage$pandac$Position position455;
    org$pandalanguage$pandac$Position position460;
    org$pandalanguage$pandac$Position position465;
    org$pandalanguage$pandac$Position position470;
    org$pandalanguage$pandac$Position position475;
    org$pandalanguage$pandac$Position position480;
    org$pandalanguage$pandac$Position position485;
    org$pandalanguage$pandac$Position position490;
    org$pandalanguage$pandac$Position position495;
    int $tmp252;
    {
        $tmp254 = self;
        $match$147_9253 = $tmp254;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp254));
        panda$core$Bit $tmp255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp255.value) {
        {
            org$pandalanguage$pandac$Position* $tmp257 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position256 = *$tmp257;
            $returnValue258 = position256;
            $tmp252 = 0;
            goto $l250;
            $l259:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp261.value) {
        {
            org$pandalanguage$pandac$Position* $tmp263 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position262 = *$tmp263;
            $returnValue258 = position262;
            $tmp252 = 1;
            goto $l250;
            $l264:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp266.value) {
        {
            org$pandalanguage$pandac$Position* $tmp268 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position267 = *$tmp268;
            $returnValue258 = position267;
            $tmp252 = 2;
            goto $l250;
            $l269:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp271.value) {
        {
            org$pandalanguage$pandac$Position* $tmp273 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position272 = *$tmp273;
            $returnValue258 = position272;
            $tmp252 = 3;
            goto $l250;
            $l274:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp276.value) {
        {
            org$pandalanguage$pandac$Position* $tmp278 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position277 = *$tmp278;
            $returnValue258 = position277;
            $tmp252 = 4;
            goto $l250;
            $l279:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp281.value) {
        {
            org$pandalanguage$pandac$Position* $tmp283 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position282 = *$tmp283;
            $returnValue258 = position282;
            $tmp252 = 5;
            goto $l250;
            $l284:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp286.value) {
        {
            org$pandalanguage$pandac$Position* $tmp288 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position287 = *$tmp288;
            $returnValue258 = position287;
            $tmp252 = 6;
            goto $l250;
            $l289:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp291.value) {
        {
            org$pandalanguage$pandac$Position* $tmp293 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position292 = *$tmp293;
            $returnValue258 = position292;
            $tmp252 = 7;
            goto $l250;
            $l294:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp296.value) {
        {
            org$pandalanguage$pandac$Position* $tmp298 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position297 = *$tmp298;
            $returnValue258 = position297;
            $tmp252 = 8;
            goto $l250;
            $l299:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp301.value) {
        {
            org$pandalanguage$pandac$Position* $tmp303 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position302 = *$tmp303;
            $returnValue258 = position302;
            $tmp252 = 9;
            goto $l250;
            $l304:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp306.value) {
        {
            org$pandalanguage$pandac$Position* $tmp308 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position307 = *$tmp308;
            $returnValue258 = position307;
            $tmp252 = 10;
            goto $l250;
            $l309:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp311.value) {
        {
            org$pandalanguage$pandac$Position* $tmp313 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position312 = *$tmp313;
            $returnValue258 = position312;
            $tmp252 = 11;
            goto $l250;
            $l314:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp316.value) {
        {
            org$pandalanguage$pandac$Position* $tmp318 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position317 = *$tmp318;
            $returnValue258 = position317;
            $tmp252 = 12;
            goto $l250;
            $l319:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp321.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp323 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$147_9253->$data + 0));
            target322 = *$tmp323;
            org$pandalanguage$pandac$Position $tmp325 = (($fn324) target322->$class->vtable[3])(target322);
            $returnValue258 = $tmp325;
            $tmp252 = 13;
            goto $l250;
            $l326:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp328.value) {
        {
            org$pandalanguage$pandac$Position* $tmp330 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position329 = *$tmp330;
            $returnValue258 = position329;
            $tmp252 = 14;
            goto $l250;
            $l331:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp333.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp335 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$147_9253->$data + 0));
            m334 = *$tmp335;
            org$pandalanguage$pandac$Position $tmp337 = (($fn336) m334->$class->vtable[3])(m334);
            $returnValue258 = $tmp337;
            $tmp252 = 15;
            goto $l250;
            $l338:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp340.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp342 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$147_9253->$data + 0));
            expr341 = *$tmp342;
            org$pandalanguage$pandac$Position $tmp344 = (($fn343) expr341->$class->vtable[3])(expr341);
            $returnValue258 = $tmp344;
            $tmp252 = 16;
            goto $l250;
            $l345:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp347.value) {
        {
            org$pandalanguage$pandac$Position* $tmp349 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position348 = *$tmp349;
            $returnValue258 = position348;
            $tmp252 = 17;
            goto $l250;
            $l350:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp352.value) {
        {
            org$pandalanguage$pandac$Position* $tmp354 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position353 = *$tmp354;
            $returnValue258 = position353;
            $tmp252 = 18;
            goto $l250;
            $l355:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp357.value) {
        {
            org$pandalanguage$pandac$Position* $tmp359 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position358 = *$tmp359;
            $returnValue258 = position358;
            $tmp252 = 19;
            goto $l250;
            $l360:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp362.value) {
        {
            org$pandalanguage$pandac$Position* $tmp364 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position363 = *$tmp364;
            $returnValue258 = position363;
            $tmp252 = 20;
            goto $l250;
            $l365:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp367.value) {
        {
            org$pandalanguage$pandac$Position* $tmp369 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position368 = *$tmp369;
            $returnValue258 = position368;
            $tmp252 = 21;
            goto $l250;
            $l370:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp372.value) {
        {
            org$pandalanguage$pandac$Position* $tmp374 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position373 = *$tmp374;
            $returnValue258 = position373;
            $tmp252 = 22;
            goto $l250;
            $l375:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp377.value) {
        {
            org$pandalanguage$pandac$Position* $tmp379 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position378 = *$tmp379;
            $returnValue258 = position378;
            $tmp252 = 23;
            goto $l250;
            $l380:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp382.value) {
        {
            org$pandalanguage$pandac$Position* $tmp384 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position383 = *$tmp384;
            $returnValue258 = position383;
            $tmp252 = 24;
            goto $l250;
            $l385:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp387.value) {
        {
            org$pandalanguage$pandac$Position* $tmp389 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position388 = *$tmp389;
            $returnValue258 = position388;
            $tmp252 = 25;
            goto $l250;
            $l390:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp392.value) {
        {
            org$pandalanguage$pandac$Position* $tmp394 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position393 = *$tmp394;
            $returnValue258 = position393;
            $tmp252 = 26;
            goto $l250;
            $l395:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp397.value) {
        {
            org$pandalanguage$pandac$Position* $tmp399 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position398 = *$tmp399;
            $returnValue258 = position398;
            $tmp252 = 27;
            goto $l250;
            $l400:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp402.value) {
        {
            org$pandalanguage$pandac$Position* $tmp404 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position403 = *$tmp404;
            $returnValue258 = position403;
            $tmp252 = 28;
            goto $l250;
            $l405:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp407.value) {
        {
            org$pandalanguage$pandac$Position* $tmp409 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position408 = *$tmp409;
            $returnValue258 = position408;
            $tmp252 = 29;
            goto $l250;
            $l410:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp412.value) {
        {
            org$pandalanguage$pandac$Position* $tmp414 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position413 = *$tmp414;
            $returnValue258 = position413;
            $tmp252 = 30;
            goto $l250;
            $l415:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp417.value) {
        {
            org$pandalanguage$pandac$Position* $tmp419 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position418 = *$tmp419;
            $returnValue258 = position418;
            $tmp252 = 31;
            goto $l250;
            $l420:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp422.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp424 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$147_9253->$data + 0));
            base423 = *$tmp424;
            org$pandalanguage$pandac$Position $tmp426 = (($fn425) base423->$class->vtable[3])(base423);
            $returnValue258 = $tmp426;
            $tmp252 = 32;
            goto $l250;
            $l427:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp429.value) {
        {
            org$pandalanguage$pandac$Position* $tmp431 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position430 = *$tmp431;
            $returnValue258 = position430;
            $tmp252 = 33;
            goto $l250;
            $l432:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp434.value) {
        {
            org$pandalanguage$pandac$Position* $tmp436 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position435 = *$tmp436;
            $returnValue258 = position435;
            $tmp252 = 34;
            goto $l250;
            $l437:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp439.value) {
        {
            org$pandalanguage$pandac$Position* $tmp441 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position440 = *$tmp441;
            $returnValue258 = position440;
            $tmp252 = 35;
            goto $l250;
            $l442:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp444.value) {
        {
            org$pandalanguage$pandac$Position* $tmp446 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position445 = *$tmp446;
            $returnValue258 = position445;
            $tmp252 = 36;
            goto $l250;
            $l447:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp449.value) {
        {
            org$pandalanguage$pandac$Position* $tmp451 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position450 = *$tmp451;
            $returnValue258 = position450;
            $tmp252 = 37;
            goto $l250;
            $l452:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp454.value) {
        {
            org$pandalanguage$pandac$Position* $tmp456 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position455 = *$tmp456;
            $returnValue258 = position455;
            $tmp252 = 38;
            goto $l250;
            $l457:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp459.value) {
        {
            org$pandalanguage$pandac$Position* $tmp461 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position460 = *$tmp461;
            $returnValue258 = position460;
            $tmp252 = 39;
            goto $l250;
            $l462:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp464.value) {
        {
            org$pandalanguage$pandac$Position* $tmp466 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position465 = *$tmp466;
            $returnValue258 = position465;
            $tmp252 = 40;
            goto $l250;
            $l467:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp469.value) {
        {
            org$pandalanguage$pandac$Position* $tmp471 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position470 = *$tmp471;
            $returnValue258 = position470;
            $tmp252 = 41;
            goto $l250;
            $l472:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp474.value) {
        {
            org$pandalanguage$pandac$Position* $tmp476 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position475 = *$tmp476;
            $returnValue258 = position475;
            $tmp252 = 42;
            goto $l250;
            $l477:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp479.value) {
        {
            org$pandalanguage$pandac$Position* $tmp481 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position480 = *$tmp481;
            $returnValue258 = position480;
            $tmp252 = 43;
            goto $l250;
            $l482:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp484.value) {
        {
            org$pandalanguage$pandac$Position* $tmp486 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position485 = *$tmp486;
            $returnValue258 = position485;
            $tmp252 = 44;
            goto $l250;
            $l487:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp489.value) {
        {
            org$pandalanguage$pandac$Position* $tmp491 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position490 = *$tmp491;
            $returnValue258 = position490;
            $tmp252 = 45;
            goto $l250;
            $l492:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp494.value) {
        {
            org$pandalanguage$pandac$Position* $tmp496 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position495 = *$tmp496;
            $returnValue258 = position495;
            $tmp252 = 46;
            goto $l250;
            $l497:;
            return $returnValue258;
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
        }
        }
        }
        }
    }
    $tmp252 = -1;
    goto $l250;
    $l250:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp254));
    switch ($tmp252) {
        case 23: goto $l380;
        case 6: goto $l289;
        case 31: goto $l420;
        case 22: goto $l375;
        case 20: goto $l365;
        case 7: goto $l294;
        case 4: goto $l279;
        case 45: goto $l492;
        case 32: goto $l427;
        case 21: goto $l370;
        case 11: goto $l314;
        case 44: goto $l487;
        case 10: goto $l309;
        case 30: goto $l415;
        case 0: goto $l259;
        case 14: goto $l331;
        case 33: goto $l432;
        case 42: goto $l477;
        case 29: goto $l410;
        case 37: goto $l452;
        case 35: goto $l442;
        case 16: goto $l345;
        case 9: goto $l304;
        case 43: goto $l482;
        case 34: goto $l437;
        case 15: goto $l338;
        case 8: goto $l299;
        case 28: goto $l405;
        case 17: goto $l350;
        case 26: goto $l395;
        case 38: goto $l457;
        case 36: goto $l447;
        case 39: goto $l462;
        case 5: goto $l284;
        case 18: goto $l355;
        case 25: goto $l390;
        case 1: goto $l264;
        case 19: goto $l360;
        case 24: goto $l385;
        case 27: goto $l400;
        case 40: goto $l467;
        case 12: goto $l319;
        case 2: goto $l269;
        case -1: goto $l499;
        case 46: goto $l497;
        case 13: goto $l326;
        case 3: goto $l274;
        case 41: goto $l472;
    }
    $l499:;
}
panda$core$Bit org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$248_9503 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp504;
    org$pandalanguage$pandac$IRNode* test506 = NULL;
    org$pandalanguage$pandac$IRNode* msg508 = NULL;
    panda$core$Bit $returnValue510;
    org$pandalanguage$pandac$IRNode* left524 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op526;
    org$pandalanguage$pandac$IRNode* right528 = NULL;
    panda$core$Bit bit544;
    panda$collections$ImmutableArray* statements549 = NULL;
    panda$collections$Iterator* Iter$258$17554 = NULL;
    panda$collections$Iterator* $tmp555;
    panda$collections$Iterator* $tmp556;
    org$pandalanguage$pandac$IRNode* s572 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp573;
    panda$core$Object* $tmp574;
    panda$core$String* label590 = NULL;
    org$pandalanguage$pandac$MethodRef* m595 = NULL;
    panda$collections$ImmutableArray* args597 = NULL;
    panda$collections$Iterator* Iter$270$17605 = NULL;
    panda$collections$Iterator* $tmp606;
    panda$collections$Iterator* $tmp607;
    org$pandalanguage$pandac$IRNode* arg623 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp624;
    panda$core$Object* $tmp625;
    org$pandalanguage$pandac$IRNode* value641 = NULL;
    org$pandalanguage$pandac$Type* type643 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce648 = NULL;
    org$pandalanguage$pandac$IRNode* base653 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce655 = NULL;
    panda$core$Int64 field657;
    org$pandalanguage$pandac$Type* type662 = NULL;
    org$pandalanguage$pandac$IRNode* call664 = NULL;
    org$pandalanguage$pandac$Type* Type671 = NULL;
    panda$core$String* label676 = NULL;
    org$pandalanguage$pandac$IRNode* target681 = NULL;
    org$pandalanguage$pandac$IRNode* value683 = NULL;
    panda$core$String* label693 = NULL;
    panda$collections$ImmutableArray* statements695 = NULL;
    org$pandalanguage$pandac$IRNode* test697 = NULL;
    panda$collections$Iterator* Iter$294$17706 = NULL;
    panda$collections$Iterator* $tmp707;
    panda$collections$Iterator* $tmp708;
    org$pandalanguage$pandac$IRNode* s724 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp725;
    panda$core$Object* $tmp726;
    org$pandalanguage$pandac$IRNode* base745 = NULL;
    org$pandalanguage$pandac$FieldDecl* field747 = NULL;
    org$pandalanguage$pandac$IRNode* test752 = NULL;
    panda$collections$ImmutableArray* ifTrue754 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse756 = NULL;
    panda$collections$Iterator* Iter$308$17765 = NULL;
    panda$collections$Iterator* $tmp766;
    panda$collections$Iterator* $tmp767;
    org$pandalanguage$pandac$IRNode* s783 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp784;
    panda$core$Object* $tmp785;
    panda$core$UInt64 value803;
    org$pandalanguage$pandac$IRNode* value808 = NULL;
    org$pandalanguage$pandac$IRNode* value815 = NULL;
    panda$core$String* label822 = NULL;
    panda$collections$ImmutableArray* statements824 = NULL;
    panda$collections$Iterator* Iter$321$17829 = NULL;
    panda$collections$Iterator* $tmp830;
    panda$collections$Iterator* $tmp831;
    org$pandalanguage$pandac$IRNode* s847 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp848;
    panda$core$Object* $tmp849;
    org$pandalanguage$pandac$IRNode* value865 = NULL;
    panda$collections$ImmutableArray* whens867 = NULL;
    panda$collections$ImmutableArray* other869 = NULL;
    panda$collections$Iterator* Iter$331$17878 = NULL;
    panda$collections$Iterator* $tmp879;
    panda$collections$Iterator* $tmp880;
    org$pandalanguage$pandac$IRNode* w896 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp897;
    panda$core$Object* $tmp898;
    panda$collections$Iterator* Iter$336$17914 = NULL;
    panda$collections$Iterator* $tmp915;
    panda$collections$Iterator* $tmp916;
    org$pandalanguage$pandac$IRNode* s932 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp933;
    panda$core$Object* $tmp934;
    panda$core$UInt64 value953;
    org$pandalanguage$pandac$parser$Token$Kind op961;
    org$pandalanguage$pandac$IRNode* base963 = NULL;
    panda$core$String* label970 = NULL;
    org$pandalanguage$pandac$IRNode* target972 = NULL;
    org$pandalanguage$pandac$IRNode* list974 = NULL;
    panda$collections$ImmutableArray* statements976 = NULL;
    panda$collections$Iterator* Iter$355$17985 = NULL;
    panda$collections$Iterator* $tmp986;
    panda$collections$Iterator* $tmp987;
    org$pandalanguage$pandac$IRNode* s1003 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1004;
    panda$core$Object* $tmp1005;
    panda$core$Real64 value1021;
    org$pandalanguage$pandac$IRNode* value1026 = NULL;
    panda$core$Int64 id1033;
    org$pandalanguage$pandac$IRNode* base1038 = NULL;
    panda$core$Int64 id1040;
    panda$core$String* str1050 = NULL;
    org$pandalanguage$pandac$IRNode* test1058 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue1060 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse1062 = NULL;
    org$pandalanguage$pandac$Type* type1079 = NULL;
    panda$core$String* name1084 = NULL;
    org$pandalanguage$pandac$IRNode* base1087 = NULL;
    panda$collections$ImmutableArray* args1089 = NULL;
    org$pandalanguage$pandac$IRNode* target1092 = NULL;
    panda$collections$ImmutableArray* methods1094 = NULL;
    panda$collections$ImmutableArray* args1096 = NULL;
    org$pandalanguage$pandac$IRNode* target1099 = NULL;
    panda$collections$ImmutableArray* methods1101 = NULL;
    org$pandalanguage$pandac$IRNode* start1104 = NULL;
    org$pandalanguage$pandac$IRNode* end1106 = NULL;
    panda$core$Bit inclusive1108;
    org$pandalanguage$pandac$IRNode* step1110 = NULL;
    org$pandalanguage$pandac$Variable$Kind kind1113;
    panda$collections$ImmutableArray* decls1115 = NULL;
    panda$collections$Iterator* Iter$390$171120 = NULL;
    panda$collections$Iterator* $tmp1121;
    panda$collections$Iterator* $tmp1122;
    org$pandalanguage$pandac$IRNode* d1138 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1139;
    panda$core$Object* $tmp1140;
    org$pandalanguage$pandac$Variable* variable1156 = NULL;
    panda$collections$ImmutableArray* tests1161 = NULL;
    panda$collections$ImmutableArray* statements1163 = NULL;
    panda$collections$Iterator* Iter$399$171168 = NULL;
    panda$collections$Iterator* $tmp1169;
    panda$collections$Iterator* $tmp1170;
    org$pandalanguage$pandac$IRNode* t1186 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1187;
    panda$core$Object* $tmp1188;
    panda$collections$Iterator* Iter$404$171204 = NULL;
    panda$collections$Iterator* $tmp1205;
    panda$collections$Iterator* $tmp1206;
    org$pandalanguage$pandac$IRNode* s1222 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1223;
    panda$core$Object* $tmp1224;
    panda$core$String* label1240 = NULL;
    org$pandalanguage$pandac$IRNode* test1242 = NULL;
    panda$collections$ImmutableArray* statements1244 = NULL;
    panda$collections$Iterator* Iter$414$171253 = NULL;
    panda$collections$Iterator* $tmp1254;
    panda$collections$Iterator* $tmp1255;
    org$pandalanguage$pandac$IRNode* s1271 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1272;
    panda$core$Object* $tmp1273;
    int $tmp502;
    {
        $tmp504 = self;
        $match$248_9503 = $tmp504;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp504));
        panda$core$Bit $tmp505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp505.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp507 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 16));
            test506 = *$tmp507;
            org$pandalanguage$pandac$IRNode** $tmp509 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 24));
            msg508 = *$tmp509;
            panda$core$Bit $tmp513 = (($fn512) test506->$class->vtable[4])(test506);
            bool $tmp511 = $tmp513.value;
            if ($tmp511) goto $l514;
            panda$core$Bit $tmp516 = (($fn515) msg508->$class->vtable[4])(msg508);
            $tmp511 = $tmp516.value;
            $l514:;
            panda$core$Bit $tmp517 = { $tmp511 };
            $returnValue510 = $tmp517;
            $tmp502 = 0;
            goto $l500;
            $l518:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp520.value) {
        {
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 1;
            goto $l500;
            $l521:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp523.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp525 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 24));
            left524 = *$tmp525;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp527 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$248_9503->$data + 32));
            op526 = *$tmp527;
            org$pandalanguage$pandac$IRNode** $tmp529 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 40));
            right528 = *$tmp529;
            panda$core$Bit $tmp532 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(op526);
            bool $tmp531 = $tmp532.value;
            if ($tmp531) goto $l533;
            panda$core$Bit $tmp535 = (($fn534) left524->$class->vtable[4])(left524);
            $tmp531 = $tmp535.value;
            $l533:;
            panda$core$Bit $tmp536 = { $tmp531 };
            bool $tmp530 = $tmp536.value;
            if ($tmp530) goto $l537;
            panda$core$Bit $tmp539 = (($fn538) right528->$class->vtable[4])(right528);
            $tmp530 = $tmp539.value;
            $l537:;
            panda$core$Bit $tmp540 = { $tmp530 };
            $returnValue510 = $tmp540;
            $tmp502 = 2;
            goto $l500;
            $l541:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp543.value) {
        {
            panda$core$Bit* $tmp545 = ((panda$core$Bit*) ((char*) $match$248_9503->$data + 24));
            bit544 = *$tmp545;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 3;
            goto $l500;
            $l546:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp548.value) {
        {
            panda$collections$ImmutableArray** $tmp550 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 16));
            statements549 = *$tmp550;
            {
                int $tmp553;
                {
                    ITable* $tmp557 = ((panda$collections$Iterable*) statements549)->$class->itable;
                    while ($tmp557->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp557 = $tmp557->next;
                    }
                    $fn559 $tmp558 = $tmp557->methods[0];
                    panda$collections$Iterator* $tmp560 = $tmp558(((panda$collections$Iterable*) statements549));
                    $tmp556 = $tmp560;
                    $tmp555 = $tmp556;
                    Iter$258$17554 = $tmp555;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp555));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp556));
                    $l561:;
                    ITable* $tmp564 = Iter$258$17554->$class->itable;
                    while ($tmp564->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp564 = $tmp564->next;
                    }
                    $fn566 $tmp565 = $tmp564->methods[0];
                    panda$core$Bit $tmp567 = $tmp565(Iter$258$17554);
                    panda$core$Bit $tmp568 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp567);
                    bool $tmp563 = $tmp568.value;
                    if (!$tmp563) goto $l562;
                    {
                        int $tmp571;
                        {
                            ITable* $tmp575 = Iter$258$17554->$class->itable;
                            while ($tmp575->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp575 = $tmp575->next;
                            }
                            $fn577 $tmp576 = $tmp575->methods[1];
                            panda$core$Object* $tmp578 = $tmp576(Iter$258$17554);
                            $tmp574 = $tmp578;
                            $tmp573 = ((org$pandalanguage$pandac$IRNode*) $tmp574);
                            s572 = $tmp573;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp573));
                            panda$core$Panda$unref$panda$core$Object($tmp574);
                            panda$core$Bit $tmp580 = (($fn579) s572->$class->vtable[4])(s572);
                            if ($tmp580.value) {
                            {
                                $returnValue510 = ((panda$core$Bit) { true });
                                $tmp571 = 0;
                                goto $l569;
                                $l581:;
                                $tmp553 = 0;
                                goto $l551;
                                $l582:;
                                $tmp502 = 4;
                                goto $l500;
                                $l583:;
                                return $returnValue510;
                            }
                            }
                        }
                        $tmp571 = -1;
                        goto $l569;
                        $l569:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s572));
                        s572 = NULL;
                        switch ($tmp571) {
                            case -1: goto $l585;
                            case 0: goto $l581;
                        }
                        $l585:;
                    }
                    goto $l561;
                    $l562:;
                }
                $tmp553 = -1;
                goto $l551;
                $l551:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$258$17554));
                Iter$258$17554 = NULL;
                switch ($tmp553) {
                    case 0: goto $l582;
                    case -1: goto $l586;
                }
                $l586:;
            }
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 5;
            goto $l500;
            $l587:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp589.value) {
        {
            panda$core$String** $tmp591 = ((panda$core$String**) ((char*) $match$248_9503->$data + 16));
            label590 = *$tmp591;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 6;
            goto $l500;
            $l592:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp594 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp594.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp596 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$248_9503->$data + 24));
            m595 = *$tmp596;
            panda$collections$ImmutableArray** $tmp598 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 32));
            args597 = *$tmp598;
            panda$core$Bit $tmp599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m595->value->methodKind.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp599.value) {
            {
                $returnValue510 = ((panda$core$Bit) { true });
                $tmp502 = 7;
                goto $l500;
                $l600:;
                return $returnValue510;
            }
            }
            {
                int $tmp604;
                {
                    ITable* $tmp608 = ((panda$collections$Iterable*) args597)->$class->itable;
                    while ($tmp608->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp608 = $tmp608->next;
                    }
                    $fn610 $tmp609 = $tmp608->methods[0];
                    panda$collections$Iterator* $tmp611 = $tmp609(((panda$collections$Iterable*) args597));
                    $tmp607 = $tmp611;
                    $tmp606 = $tmp607;
                    Iter$270$17605 = $tmp606;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp606));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp607));
                    $l612:;
                    ITable* $tmp615 = Iter$270$17605->$class->itable;
                    while ($tmp615->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp615 = $tmp615->next;
                    }
                    $fn617 $tmp616 = $tmp615->methods[0];
                    panda$core$Bit $tmp618 = $tmp616(Iter$270$17605);
                    panda$core$Bit $tmp619 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp618);
                    bool $tmp614 = $tmp619.value;
                    if (!$tmp614) goto $l613;
                    {
                        int $tmp622;
                        {
                            ITable* $tmp626 = Iter$270$17605->$class->itable;
                            while ($tmp626->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp626 = $tmp626->next;
                            }
                            $fn628 $tmp627 = $tmp626->methods[1];
                            panda$core$Object* $tmp629 = $tmp627(Iter$270$17605);
                            $tmp625 = $tmp629;
                            $tmp624 = ((org$pandalanguage$pandac$IRNode*) $tmp625);
                            arg623 = $tmp624;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp624));
                            panda$core$Panda$unref$panda$core$Object($tmp625);
                            panda$core$Bit $tmp631 = (($fn630) arg623->$class->vtable[4])(arg623);
                            if ($tmp631.value) {
                            {
                                $returnValue510 = ((panda$core$Bit) { true });
                                $tmp622 = 0;
                                goto $l620;
                                $l632:;
                                $tmp604 = 0;
                                goto $l602;
                                $l633:;
                                $tmp502 = 8;
                                goto $l500;
                                $l634:;
                                return $returnValue510;
                            }
                            }
                        }
                        $tmp622 = -1;
                        goto $l620;
                        $l620:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg623));
                        arg623 = NULL;
                        switch ($tmp622) {
                            case 0: goto $l632;
                            case -1: goto $l636;
                        }
                        $l636:;
                    }
                    goto $l612;
                    $l613:;
                }
                $tmp604 = -1;
                goto $l602;
                $l602:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$270$17605));
                Iter$270$17605 = NULL;
                switch ($tmp604) {
                    case -1: goto $l637;
                    case 0: goto $l633;
                }
                $l637:;
            }
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 9;
            goto $l500;
            $l638:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp640.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp642 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 16));
            value641 = *$tmp642;
            org$pandalanguage$pandac$Type** $tmp644 = ((org$pandalanguage$pandac$Type**) ((char*) $match$248_9503->$data + 24));
            type643 = *$tmp644;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 10;
            goto $l500;
            $l645:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp647.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp649 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$248_9503->$data + 16));
            ce648 = *$tmp649;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 11;
            goto $l500;
            $l650:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp652.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp654 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 16));
            base653 = *$tmp654;
            org$pandalanguage$pandac$ChoiceEntry** $tmp656 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$248_9503->$data + 24));
            ce655 = *$tmp656;
            panda$core$Int64* $tmp658 = ((panda$core$Int64*) ((char*) $match$248_9503->$data + 32));
            field657 = *$tmp658;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 12;
            goto $l500;
            $l659:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp661.value) {
        {
            org$pandalanguage$pandac$Type** $tmp663 = ((org$pandalanguage$pandac$Type**) ((char*) $match$248_9503->$data + 16));
            type662 = *$tmp663;
            org$pandalanguage$pandac$IRNode** $tmp665 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 24));
            call664 = *$tmp665;
            panda$core$Bit $tmp667 = (($fn666) call664->$class->vtable[4])(call664);
            $returnValue510 = $tmp667;
            $tmp502 = 13;
            goto $l500;
            $l668:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp670 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp670.value) {
        {
            org$pandalanguage$pandac$Type** $tmp672 = ((org$pandalanguage$pandac$Type**) ((char*) $match$248_9503->$data + 16));
            Type671 = *$tmp672;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 14;
            goto $l500;
            $l673:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp675.value) {
        {
            panda$core$String** $tmp677 = ((panda$core$String**) ((char*) $match$248_9503->$data + 16));
            label676 = *$tmp677;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 15;
            goto $l500;
            $l678:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp680.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp682 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 0));
            target681 = *$tmp682;
            org$pandalanguage$pandac$IRNode** $tmp684 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 8));
            value683 = *$tmp684;
            bool $tmp685 = ((panda$core$Bit) { value683 != NULL }).value;
            if (!$tmp685) goto $l686;
            panda$core$Bit $tmp688 = (($fn687) value683->$class->vtable[4])(value683);
            $tmp685 = $tmp688.value;
            $l686:;
            panda$core$Bit $tmp689 = { $tmp685 };
            $returnValue510 = $tmp689;
            $tmp502 = 16;
            goto $l500;
            $l690:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp692.value) {
        {
            panda$core$String** $tmp694 = ((panda$core$String**) ((char*) $match$248_9503->$data + 16));
            label693 = *$tmp694;
            panda$collections$ImmutableArray** $tmp696 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 24));
            statements695 = *$tmp696;
            org$pandalanguage$pandac$IRNode** $tmp698 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 32));
            test697 = *$tmp698;
            panda$core$Bit $tmp700 = (($fn699) test697->$class->vtable[4])(test697);
            if ($tmp700.value) {
            {
                $returnValue510 = ((panda$core$Bit) { true });
                $tmp502 = 17;
                goto $l500;
                $l701:;
                return $returnValue510;
            }
            }
            {
                int $tmp705;
                {
                    ITable* $tmp709 = ((panda$collections$Iterable*) statements695)->$class->itable;
                    while ($tmp709->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp709 = $tmp709->next;
                    }
                    $fn711 $tmp710 = $tmp709->methods[0];
                    panda$collections$Iterator* $tmp712 = $tmp710(((panda$collections$Iterable*) statements695));
                    $tmp708 = $tmp712;
                    $tmp707 = $tmp708;
                    Iter$294$17706 = $tmp707;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp707));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp708));
                    $l713:;
                    ITable* $tmp716 = Iter$294$17706->$class->itable;
                    while ($tmp716->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp716 = $tmp716->next;
                    }
                    $fn718 $tmp717 = $tmp716->methods[0];
                    panda$core$Bit $tmp719 = $tmp717(Iter$294$17706);
                    panda$core$Bit $tmp720 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp719);
                    bool $tmp715 = $tmp720.value;
                    if (!$tmp715) goto $l714;
                    {
                        int $tmp723;
                        {
                            ITable* $tmp727 = Iter$294$17706->$class->itable;
                            while ($tmp727->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp727 = $tmp727->next;
                            }
                            $fn729 $tmp728 = $tmp727->methods[1];
                            panda$core$Object* $tmp730 = $tmp728(Iter$294$17706);
                            $tmp726 = $tmp730;
                            $tmp725 = ((org$pandalanguage$pandac$IRNode*) $tmp726);
                            s724 = $tmp725;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp725));
                            panda$core$Panda$unref$panda$core$Object($tmp726);
                            panda$core$Bit $tmp732 = (($fn731) s724->$class->vtable[4])(s724);
                            if ($tmp732.value) {
                            {
                                $returnValue510 = ((panda$core$Bit) { true });
                                $tmp723 = 0;
                                goto $l721;
                                $l733:;
                                $tmp705 = 0;
                                goto $l703;
                                $l734:;
                                $tmp502 = 18;
                                goto $l500;
                                $l735:;
                                return $returnValue510;
                            }
                            }
                        }
                        $tmp723 = -1;
                        goto $l721;
                        $l721:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s724));
                        s724 = NULL;
                        switch ($tmp723) {
                            case -1: goto $l737;
                            case 0: goto $l733;
                        }
                        $l737:;
                    }
                    goto $l713;
                    $l714:;
                }
                $tmp705 = -1;
                goto $l703;
                $l703:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$294$17706));
                Iter$294$17706 = NULL;
                switch ($tmp705) {
                    case -1: goto $l738;
                    case 0: goto $l734;
                }
                $l738:;
            }
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 19;
            goto $l500;
            $l739:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp741.value) {
        {
            $returnValue510 = ((panda$core$Bit) { true });
            $tmp502 = 20;
            goto $l500;
            $l742:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp744 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp744.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp746 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 24));
            base745 = *$tmp746;
            org$pandalanguage$pandac$FieldDecl** $tmp748 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$248_9503->$data + 32));
            field747 = *$tmp748;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 21;
            goto $l500;
            $l749:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp751.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp753 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 16));
            test752 = *$tmp753;
            panda$collections$ImmutableArray** $tmp755 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 24));
            ifTrue754 = *$tmp755;
            org$pandalanguage$pandac$IRNode** $tmp757 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 32));
            ifFalse756 = *$tmp757;
            panda$core$Bit $tmp759 = (($fn758) test752->$class->vtable[4])(test752);
            if ($tmp759.value) {
            {
                $returnValue510 = ((panda$core$Bit) { true });
                $tmp502 = 22;
                goto $l500;
                $l760:;
                return $returnValue510;
            }
            }
            {
                int $tmp764;
                {
                    ITable* $tmp768 = ((panda$collections$Iterable*) ifTrue754)->$class->itable;
                    while ($tmp768->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp768 = $tmp768->next;
                    }
                    $fn770 $tmp769 = $tmp768->methods[0];
                    panda$collections$Iterator* $tmp771 = $tmp769(((panda$collections$Iterable*) ifTrue754));
                    $tmp767 = $tmp771;
                    $tmp766 = $tmp767;
                    Iter$308$17765 = $tmp766;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp766));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp767));
                    $l772:;
                    ITable* $tmp775 = Iter$308$17765->$class->itable;
                    while ($tmp775->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp775 = $tmp775->next;
                    }
                    $fn777 $tmp776 = $tmp775->methods[0];
                    panda$core$Bit $tmp778 = $tmp776(Iter$308$17765);
                    panda$core$Bit $tmp779 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp778);
                    bool $tmp774 = $tmp779.value;
                    if (!$tmp774) goto $l773;
                    {
                        int $tmp782;
                        {
                            ITable* $tmp786 = Iter$308$17765->$class->itable;
                            while ($tmp786->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp786 = $tmp786->next;
                            }
                            $fn788 $tmp787 = $tmp786->methods[1];
                            panda$core$Object* $tmp789 = $tmp787(Iter$308$17765);
                            $tmp785 = $tmp789;
                            $tmp784 = ((org$pandalanguage$pandac$IRNode*) $tmp785);
                            s783 = $tmp784;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp784));
                            panda$core$Panda$unref$panda$core$Object($tmp785);
                            panda$core$Bit $tmp791 = (($fn790) s783->$class->vtable[4])(s783);
                            if ($tmp791.value) {
                            {
                                $returnValue510 = ((panda$core$Bit) { true });
                                $tmp782 = 0;
                                goto $l780;
                                $l792:;
                                $tmp764 = 0;
                                goto $l762;
                                $l793:;
                                $tmp502 = 23;
                                goto $l500;
                                $l794:;
                                return $returnValue510;
                            }
                            }
                        }
                        $tmp782 = -1;
                        goto $l780;
                        $l780:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s783));
                        s783 = NULL;
                        switch ($tmp782) {
                            case -1: goto $l796;
                            case 0: goto $l792;
                        }
                        $l796:;
                    }
                    goto $l772;
                    $l773:;
                }
                $tmp764 = -1;
                goto $l762;
                $l762:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$308$17765));
                Iter$308$17765 = NULL;
                switch ($tmp764) {
                    case 0: goto $l793;
                    case -1: goto $l797;
                }
                $l797:;
            }
            panda$core$Bit $tmp799 = (($fn798) ifFalse756->$class->vtable[4])(ifFalse756);
            $returnValue510 = $tmp799;
            $tmp502 = 24;
            goto $l500;
            $l800:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp802.value) {
        {
            panda$core$UInt64* $tmp804 = ((panda$core$UInt64*) ((char*) $match$248_9503->$data + 24));
            value803 = *$tmp804;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 25;
            goto $l500;
            $l805:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp807.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp809 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 16));
            value808 = *$tmp809;
            panda$core$Bit $tmp811 = (($fn810) value808->$class->vtable[4])(value808);
            $returnValue510 = $tmp811;
            $tmp502 = 26;
            goto $l500;
            $l812:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp814.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp816 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 16));
            value815 = *$tmp816;
            panda$core$Bit $tmp818 = (($fn817) value815->$class->vtable[4])(value815);
            $returnValue510 = $tmp818;
            $tmp502 = 27;
            goto $l500;
            $l819:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp821.value) {
        {
            panda$core$String** $tmp823 = ((panda$core$String**) ((char*) $match$248_9503->$data + 16));
            label822 = *$tmp823;
            panda$collections$ImmutableArray** $tmp825 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 24));
            statements824 = *$tmp825;
            {
                int $tmp828;
                {
                    ITable* $tmp832 = ((panda$collections$Iterable*) statements824)->$class->itable;
                    while ($tmp832->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp832 = $tmp832->next;
                    }
                    $fn834 $tmp833 = $tmp832->methods[0];
                    panda$collections$Iterator* $tmp835 = $tmp833(((panda$collections$Iterable*) statements824));
                    $tmp831 = $tmp835;
                    $tmp830 = $tmp831;
                    Iter$321$17829 = $tmp830;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp830));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp831));
                    $l836:;
                    ITable* $tmp839 = Iter$321$17829->$class->itable;
                    while ($tmp839->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp839 = $tmp839->next;
                    }
                    $fn841 $tmp840 = $tmp839->methods[0];
                    panda$core$Bit $tmp842 = $tmp840(Iter$321$17829);
                    panda$core$Bit $tmp843 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp842);
                    bool $tmp838 = $tmp843.value;
                    if (!$tmp838) goto $l837;
                    {
                        int $tmp846;
                        {
                            ITable* $tmp850 = Iter$321$17829->$class->itable;
                            while ($tmp850->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp850 = $tmp850->next;
                            }
                            $fn852 $tmp851 = $tmp850->methods[1];
                            panda$core$Object* $tmp853 = $tmp851(Iter$321$17829);
                            $tmp849 = $tmp853;
                            $tmp848 = ((org$pandalanguage$pandac$IRNode*) $tmp849);
                            s847 = $tmp848;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp848));
                            panda$core$Panda$unref$panda$core$Object($tmp849);
                            panda$core$Bit $tmp855 = (($fn854) s847->$class->vtable[4])(s847);
                            if ($tmp855.value) {
                            {
                                $returnValue510 = ((panda$core$Bit) { true });
                                $tmp846 = 0;
                                goto $l844;
                                $l856:;
                                $tmp828 = 0;
                                goto $l826;
                                $l857:;
                                $tmp502 = 28;
                                goto $l500;
                                $l858:;
                                return $returnValue510;
                            }
                            }
                        }
                        $tmp846 = -1;
                        goto $l844;
                        $l844:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s847));
                        s847 = NULL;
                        switch ($tmp846) {
                            case 0: goto $l856;
                            case -1: goto $l860;
                        }
                        $l860:;
                    }
                    goto $l836;
                    $l837:;
                }
                $tmp828 = -1;
                goto $l826;
                $l826:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$321$17829));
                Iter$321$17829 = NULL;
                switch ($tmp828) {
                    case 0: goto $l857;
                    case -1: goto $l861;
                }
                $l861:;
            }
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 29;
            goto $l500;
            $l862:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp864.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp866 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 16));
            value865 = *$tmp866;
            panda$collections$ImmutableArray** $tmp868 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 24));
            whens867 = *$tmp868;
            panda$collections$ImmutableArray** $tmp870 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 32));
            other869 = *$tmp870;
            panda$core$Bit $tmp872 = (($fn871) value865->$class->vtable[4])(value865);
            if ($tmp872.value) {
            {
                $returnValue510 = ((panda$core$Bit) { true });
                $tmp502 = 30;
                goto $l500;
                $l873:;
                return $returnValue510;
            }
            }
            {
                int $tmp877;
                {
                    ITable* $tmp881 = ((panda$collections$Iterable*) whens867)->$class->itable;
                    while ($tmp881->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp881 = $tmp881->next;
                    }
                    $fn883 $tmp882 = $tmp881->methods[0];
                    panda$collections$Iterator* $tmp884 = $tmp882(((panda$collections$Iterable*) whens867));
                    $tmp880 = $tmp884;
                    $tmp879 = $tmp880;
                    Iter$331$17878 = $tmp879;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp879));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp880));
                    $l885:;
                    ITable* $tmp888 = Iter$331$17878->$class->itable;
                    while ($tmp888->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp888 = $tmp888->next;
                    }
                    $fn890 $tmp889 = $tmp888->methods[0];
                    panda$core$Bit $tmp891 = $tmp889(Iter$331$17878);
                    panda$core$Bit $tmp892 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp891);
                    bool $tmp887 = $tmp892.value;
                    if (!$tmp887) goto $l886;
                    {
                        int $tmp895;
                        {
                            ITable* $tmp899 = Iter$331$17878->$class->itable;
                            while ($tmp899->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp899 = $tmp899->next;
                            }
                            $fn901 $tmp900 = $tmp899->methods[1];
                            panda$core$Object* $tmp902 = $tmp900(Iter$331$17878);
                            $tmp898 = $tmp902;
                            $tmp897 = ((org$pandalanguage$pandac$IRNode*) $tmp898);
                            w896 = $tmp897;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp897));
                            panda$core$Panda$unref$panda$core$Object($tmp898);
                            panda$core$Bit $tmp904 = (($fn903) w896->$class->vtable[4])(w896);
                            if ($tmp904.value) {
                            {
                                $returnValue510 = ((panda$core$Bit) { true });
                                $tmp895 = 0;
                                goto $l893;
                                $l905:;
                                $tmp877 = 0;
                                goto $l875;
                                $l906:;
                                $tmp502 = 31;
                                goto $l500;
                                $l907:;
                                return $returnValue510;
                            }
                            }
                        }
                        $tmp895 = -1;
                        goto $l893;
                        $l893:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w896));
                        w896 = NULL;
                        switch ($tmp895) {
                            case -1: goto $l909;
                            case 0: goto $l905;
                        }
                        $l909:;
                    }
                    goto $l885;
                    $l886:;
                }
                $tmp877 = -1;
                goto $l875;
                $l875:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$331$17878));
                Iter$331$17878 = NULL;
                switch ($tmp877) {
                    case 0: goto $l906;
                    case -1: goto $l910;
                }
                $l910:;
            }
            {
                int $tmp913;
                {
                    ITable* $tmp917 = ((panda$collections$Iterable*) other869)->$class->itable;
                    while ($tmp917->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp917 = $tmp917->next;
                    }
                    $fn919 $tmp918 = $tmp917->methods[0];
                    panda$collections$Iterator* $tmp920 = $tmp918(((panda$collections$Iterable*) other869));
                    $tmp916 = $tmp920;
                    $tmp915 = $tmp916;
                    Iter$336$17914 = $tmp915;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp915));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp916));
                    $l921:;
                    ITable* $tmp924 = Iter$336$17914->$class->itable;
                    while ($tmp924->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp924 = $tmp924->next;
                    }
                    $fn926 $tmp925 = $tmp924->methods[0];
                    panda$core$Bit $tmp927 = $tmp925(Iter$336$17914);
                    panda$core$Bit $tmp928 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp927);
                    bool $tmp923 = $tmp928.value;
                    if (!$tmp923) goto $l922;
                    {
                        int $tmp931;
                        {
                            ITable* $tmp935 = Iter$336$17914->$class->itable;
                            while ($tmp935->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp935 = $tmp935->next;
                            }
                            $fn937 $tmp936 = $tmp935->methods[1];
                            panda$core$Object* $tmp938 = $tmp936(Iter$336$17914);
                            $tmp934 = $tmp938;
                            $tmp933 = ((org$pandalanguage$pandac$IRNode*) $tmp934);
                            s932 = $tmp933;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp933));
                            panda$core$Panda$unref$panda$core$Object($tmp934);
                            panda$core$Bit $tmp940 = (($fn939) s932->$class->vtable[4])(s932);
                            if ($tmp940.value) {
                            {
                                $returnValue510 = ((panda$core$Bit) { true });
                                $tmp931 = 0;
                                goto $l929;
                                $l941:;
                                $tmp913 = 0;
                                goto $l911;
                                $l942:;
                                $tmp502 = 32;
                                goto $l500;
                                $l943:;
                                return $returnValue510;
                            }
                            }
                        }
                        $tmp931 = -1;
                        goto $l929;
                        $l929:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s932));
                        s932 = NULL;
                        switch ($tmp931) {
                            case 0: goto $l941;
                            case -1: goto $l945;
                        }
                        $l945:;
                    }
                    goto $l921;
                    $l922:;
                }
                $tmp913 = -1;
                goto $l911;
                $l911:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$336$17914));
                Iter$336$17914 = NULL;
                switch ($tmp913) {
                    case -1: goto $l946;
                    case 0: goto $l942;
                }
                $l946:;
            }
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 33;
            goto $l500;
            $l947:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp949.value) {
        {
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 34;
            goto $l500;
            $l950:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp952.value) {
        {
            panda$core$UInt64* $tmp954 = ((panda$core$UInt64*) ((char*) $match$248_9503->$data + 24));
            value953 = *$tmp954;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 35;
            goto $l500;
            $l955:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp957.value) {
        {
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 36;
            goto $l500;
            $l958:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp960.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp962 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$248_9503->$data + 16));
            op961 = *$tmp962;
            org$pandalanguage$pandac$IRNode** $tmp964 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 24));
            base963 = *$tmp964;
            panda$core$Bit $tmp966 = (($fn965) base963->$class->vtable[4])(base963);
            $returnValue510 = $tmp966;
            $tmp502 = 37;
            goto $l500;
            $l967:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp969.value) {
        {
            panda$core$String** $tmp971 = ((panda$core$String**) ((char*) $match$248_9503->$data + 16));
            label970 = *$tmp971;
            org$pandalanguage$pandac$IRNode** $tmp973 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 24));
            target972 = *$tmp973;
            org$pandalanguage$pandac$IRNode** $tmp975 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 32));
            list974 = *$tmp975;
            panda$collections$ImmutableArray** $tmp977 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 40));
            statements976 = *$tmp977;
            panda$core$Bit $tmp979 = (($fn978) list974->$class->vtable[4])(list974);
            if ($tmp979.value) {
            {
                $returnValue510 = ((panda$core$Bit) { true });
                $tmp502 = 38;
                goto $l500;
                $l980:;
                return $returnValue510;
            }
            }
            {
                int $tmp984;
                {
                    ITable* $tmp988 = ((panda$collections$Iterable*) statements976)->$class->itable;
                    while ($tmp988->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp988 = $tmp988->next;
                    }
                    $fn990 $tmp989 = $tmp988->methods[0];
                    panda$collections$Iterator* $tmp991 = $tmp989(((panda$collections$Iterable*) statements976));
                    $tmp987 = $tmp991;
                    $tmp986 = $tmp987;
                    Iter$355$17985 = $tmp986;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp986));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp987));
                    $l992:;
                    ITable* $tmp995 = Iter$355$17985->$class->itable;
                    while ($tmp995->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp995 = $tmp995->next;
                    }
                    $fn997 $tmp996 = $tmp995->methods[0];
                    panda$core$Bit $tmp998 = $tmp996(Iter$355$17985);
                    panda$core$Bit $tmp999 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp998);
                    bool $tmp994 = $tmp999.value;
                    if (!$tmp994) goto $l993;
                    {
                        int $tmp1002;
                        {
                            ITable* $tmp1006 = Iter$355$17985->$class->itable;
                            while ($tmp1006->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1006 = $tmp1006->next;
                            }
                            $fn1008 $tmp1007 = $tmp1006->methods[1];
                            panda$core$Object* $tmp1009 = $tmp1007(Iter$355$17985);
                            $tmp1005 = $tmp1009;
                            $tmp1004 = ((org$pandalanguage$pandac$IRNode*) $tmp1005);
                            s1003 = $tmp1004;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1004));
                            panda$core$Panda$unref$panda$core$Object($tmp1005);
                            panda$core$Bit $tmp1011 = (($fn1010) s1003->$class->vtable[4])(s1003);
                            if ($tmp1011.value) {
                            {
                                $returnValue510 = ((panda$core$Bit) { true });
                                $tmp1002 = 0;
                                goto $l1000;
                                $l1012:;
                                $tmp984 = 0;
                                goto $l982;
                                $l1013:;
                                $tmp502 = 39;
                                goto $l500;
                                $l1014:;
                                return $returnValue510;
                            }
                            }
                        }
                        $tmp1002 = -1;
                        goto $l1000;
                        $l1000:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1003));
                        s1003 = NULL;
                        switch ($tmp1002) {
                            case -1: goto $l1016;
                            case 0: goto $l1012;
                        }
                        $l1016:;
                    }
                    goto $l992;
                    $l993:;
                }
                $tmp984 = -1;
                goto $l982;
                $l982:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$355$17985));
                Iter$355$17985 = NULL;
                switch ($tmp984) {
                    case 0: goto $l1013;
                    case -1: goto $l1017;
                }
                $l1017:;
            }
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 40;
            goto $l500;
            $l1018:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1020.value) {
        {
            panda$core$Real64* $tmp1022 = ((panda$core$Real64*) ((char*) $match$248_9503->$data + 24));
            value1021 = *$tmp1022;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 41;
            goto $l500;
            $l1023:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1025 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1025.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1027 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 16));
            value1026 = *$tmp1027;
            panda$core$Bit $tmp1029 = (($fn1028) value1026->$class->vtable[4])(value1026);
            $returnValue510 = $tmp1029;
            $tmp502 = 42;
            goto $l500;
            $l1030:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1032 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1032.value) {
        {
            panda$core$Int64* $tmp1034 = ((panda$core$Int64*) ((char*) $match$248_9503->$data + 24));
            id1033 = *$tmp1034;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 43;
            goto $l500;
            $l1035:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1037.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1039 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 0));
            base1038 = *$tmp1039;
            panda$core$Int64* $tmp1041 = ((panda$core$Int64*) ((char*) $match$248_9503->$data + 8));
            id1040 = *$tmp1041;
            panda$core$Bit $tmp1043 = (($fn1042) base1038->$class->vtable[4])(base1038);
            $returnValue510 = $tmp1043;
            $tmp502 = 44;
            goto $l500;
            $l1044:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1046.value) {
        {
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 45;
            goto $l500;
            $l1047:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1049.value) {
        {
            panda$core$String** $tmp1051 = ((panda$core$String**) ((char*) $match$248_9503->$data + 16));
            str1050 = *$tmp1051;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 46;
            goto $l500;
            $l1052:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1054.value) {
        {
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 47;
            goto $l500;
            $l1055:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1057.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1059 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 16));
            test1058 = *$tmp1059;
            org$pandalanguage$pandac$IRNode** $tmp1061 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 24));
            ifTrue1060 = *$tmp1061;
            org$pandalanguage$pandac$IRNode** $tmp1063 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 32));
            ifFalse1062 = *$tmp1063;
            panda$core$Bit $tmp1067 = (($fn1066) test1058->$class->vtable[4])(test1058);
            bool $tmp1065 = $tmp1067.value;
            if ($tmp1065) goto $l1068;
            panda$core$Bit $tmp1070 = (($fn1069) ifTrue1060->$class->vtable[4])(ifTrue1060);
            $tmp1065 = $tmp1070.value;
            $l1068:;
            panda$core$Bit $tmp1071 = { $tmp1065 };
            bool $tmp1064 = $tmp1071.value;
            if ($tmp1064) goto $l1072;
            panda$core$Bit $tmp1074 = (($fn1073) ifFalse1062->$class->vtable[4])(ifFalse1062);
            $tmp1064 = $tmp1074.value;
            $l1072:;
            panda$core$Bit $tmp1075 = { $tmp1064 };
            $returnValue510 = $tmp1075;
            $tmp502 = 48;
            goto $l500;
            $l1076:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1078.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1080 = ((org$pandalanguage$pandac$Type**) ((char*) $match$248_9503->$data + 16));
            type1079 = *$tmp1080;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 49;
            goto $l500;
            $l1081:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1083.value) {
        {
            panda$core$String** $tmp1085 = ((panda$core$String**) ((char*) $match$248_9503->$data + 16));
            name1084 = *$tmp1085;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1086.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1088 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 24));
            base1087 = *$tmp1088;
            panda$collections$ImmutableArray** $tmp1090 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 32));
            args1089 = *$tmp1090;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1091.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1093 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 24));
            target1092 = *$tmp1093;
            panda$collections$ImmutableArray** $tmp1095 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 32));
            methods1094 = *$tmp1095;
            panda$collections$ImmutableArray** $tmp1097 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 40));
            args1096 = *$tmp1097;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1098.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1100 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 16));
            target1099 = *$tmp1100;
            panda$collections$ImmutableArray** $tmp1102 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 24));
            methods1101 = *$tmp1102;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1103.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1105 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 16));
            start1104 = *$tmp1105;
            org$pandalanguage$pandac$IRNode** $tmp1107 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 24));
            end1106 = *$tmp1107;
            panda$core$Bit* $tmp1109 = ((panda$core$Bit*) ((char*) $match$248_9503->$data + 32));
            inclusive1108 = *$tmp1109;
            org$pandalanguage$pandac$IRNode** $tmp1111 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 33));
            step1110 = *$tmp1111;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1112.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1114 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$248_9503->$data + 16));
            kind1113 = *$tmp1114;
            panda$collections$ImmutableArray** $tmp1116 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 24));
            decls1115 = *$tmp1116;
            {
                int $tmp1119;
                {
                    ITable* $tmp1123 = ((panda$collections$Iterable*) decls1115)->$class->itable;
                    while ($tmp1123->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1123 = $tmp1123->next;
                    }
                    $fn1125 $tmp1124 = $tmp1123->methods[0];
                    panda$collections$Iterator* $tmp1126 = $tmp1124(((panda$collections$Iterable*) decls1115));
                    $tmp1122 = $tmp1126;
                    $tmp1121 = $tmp1122;
                    Iter$390$171120 = $tmp1121;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1121));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1122));
                    $l1127:;
                    ITable* $tmp1130 = Iter$390$171120->$class->itable;
                    while ($tmp1130->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1130 = $tmp1130->next;
                    }
                    $fn1132 $tmp1131 = $tmp1130->methods[0];
                    panda$core$Bit $tmp1133 = $tmp1131(Iter$390$171120);
                    panda$core$Bit $tmp1134 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1133);
                    bool $tmp1129 = $tmp1134.value;
                    if (!$tmp1129) goto $l1128;
                    {
                        int $tmp1137;
                        {
                            ITable* $tmp1141 = Iter$390$171120->$class->itable;
                            while ($tmp1141->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1141 = $tmp1141->next;
                            }
                            $fn1143 $tmp1142 = $tmp1141->methods[1];
                            panda$core$Object* $tmp1144 = $tmp1142(Iter$390$171120);
                            $tmp1140 = $tmp1144;
                            $tmp1139 = ((org$pandalanguage$pandac$IRNode*) $tmp1140);
                            d1138 = $tmp1139;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1139));
                            panda$core$Panda$unref$panda$core$Object($tmp1140);
                            panda$core$Bit $tmp1146 = (($fn1145) d1138->$class->vtable[4])(d1138);
                            if ($tmp1146.value) {
                            {
                                $returnValue510 = ((panda$core$Bit) { true });
                                $tmp1137 = 0;
                                goto $l1135;
                                $l1147:;
                                $tmp1119 = 0;
                                goto $l1117;
                                $l1148:;
                                $tmp502 = 50;
                                goto $l500;
                                $l1149:;
                                return $returnValue510;
                            }
                            }
                        }
                        $tmp1137 = -1;
                        goto $l1135;
                        $l1135:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) d1138));
                        d1138 = NULL;
                        switch ($tmp1137) {
                            case -1: goto $l1151;
                            case 0: goto $l1147;
                        }
                        $l1151:;
                    }
                    goto $l1127;
                    $l1128:;
                }
                $tmp1119 = -1;
                goto $l1117;
                $l1117:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$390$171120));
                Iter$390$171120 = NULL;
                switch ($tmp1119) {
                    case 0: goto $l1148;
                    case -1: goto $l1152;
                }
                $l1152:;
            }
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 51;
            goto $l500;
            $l1153:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp1155.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp1157 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$248_9503->$data + 16));
            variable1156 = *$tmp1157;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 52;
            goto $l500;
            $l1158:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp1160.value) {
        {
            panda$collections$ImmutableArray** $tmp1162 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 16));
            tests1161 = *$tmp1162;
            panda$collections$ImmutableArray** $tmp1164 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 24));
            statements1163 = *$tmp1164;
            {
                int $tmp1167;
                {
                    ITable* $tmp1171 = ((panda$collections$Iterable*) tests1161)->$class->itable;
                    while ($tmp1171->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1171 = $tmp1171->next;
                    }
                    $fn1173 $tmp1172 = $tmp1171->methods[0];
                    panda$collections$Iterator* $tmp1174 = $tmp1172(((panda$collections$Iterable*) tests1161));
                    $tmp1170 = $tmp1174;
                    $tmp1169 = $tmp1170;
                    Iter$399$171168 = $tmp1169;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1169));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1170));
                    $l1175:;
                    ITable* $tmp1178 = Iter$399$171168->$class->itable;
                    while ($tmp1178->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1178 = $tmp1178->next;
                    }
                    $fn1180 $tmp1179 = $tmp1178->methods[0];
                    panda$core$Bit $tmp1181 = $tmp1179(Iter$399$171168);
                    panda$core$Bit $tmp1182 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1181);
                    bool $tmp1177 = $tmp1182.value;
                    if (!$tmp1177) goto $l1176;
                    {
                        int $tmp1185;
                        {
                            ITable* $tmp1189 = Iter$399$171168->$class->itable;
                            while ($tmp1189->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1189 = $tmp1189->next;
                            }
                            $fn1191 $tmp1190 = $tmp1189->methods[1];
                            panda$core$Object* $tmp1192 = $tmp1190(Iter$399$171168);
                            $tmp1188 = $tmp1192;
                            $tmp1187 = ((org$pandalanguage$pandac$IRNode*) $tmp1188);
                            t1186 = $tmp1187;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1187));
                            panda$core$Panda$unref$panda$core$Object($tmp1188);
                            panda$core$Bit $tmp1194 = (($fn1193) t1186->$class->vtable[4])(t1186);
                            if ($tmp1194.value) {
                            {
                                $returnValue510 = ((panda$core$Bit) { true });
                                $tmp1185 = 0;
                                goto $l1183;
                                $l1195:;
                                $tmp1167 = 0;
                                goto $l1165;
                                $l1196:;
                                $tmp502 = 53;
                                goto $l500;
                                $l1197:;
                                return $returnValue510;
                            }
                            }
                        }
                        $tmp1185 = -1;
                        goto $l1183;
                        $l1183:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1186));
                        t1186 = NULL;
                        switch ($tmp1185) {
                            case 0: goto $l1195;
                            case -1: goto $l1199;
                        }
                        $l1199:;
                    }
                    goto $l1175;
                    $l1176:;
                }
                $tmp1167 = -1;
                goto $l1165;
                $l1165:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$399$171168));
                Iter$399$171168 = NULL;
                switch ($tmp1167) {
                    case -1: goto $l1200;
                    case 0: goto $l1196;
                }
                $l1200:;
            }
            {
                int $tmp1203;
                {
                    ITable* $tmp1207 = ((panda$collections$Iterable*) statements1163)->$class->itable;
                    while ($tmp1207->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1207 = $tmp1207->next;
                    }
                    $fn1209 $tmp1208 = $tmp1207->methods[0];
                    panda$collections$Iterator* $tmp1210 = $tmp1208(((panda$collections$Iterable*) statements1163));
                    $tmp1206 = $tmp1210;
                    $tmp1205 = $tmp1206;
                    Iter$404$171204 = $tmp1205;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1205));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1206));
                    $l1211:;
                    ITable* $tmp1214 = Iter$404$171204->$class->itable;
                    while ($tmp1214->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1214 = $tmp1214->next;
                    }
                    $fn1216 $tmp1215 = $tmp1214->methods[0];
                    panda$core$Bit $tmp1217 = $tmp1215(Iter$404$171204);
                    panda$core$Bit $tmp1218 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1217);
                    bool $tmp1213 = $tmp1218.value;
                    if (!$tmp1213) goto $l1212;
                    {
                        int $tmp1221;
                        {
                            ITable* $tmp1225 = Iter$404$171204->$class->itable;
                            while ($tmp1225->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1225 = $tmp1225->next;
                            }
                            $fn1227 $tmp1226 = $tmp1225->methods[1];
                            panda$core$Object* $tmp1228 = $tmp1226(Iter$404$171204);
                            $tmp1224 = $tmp1228;
                            $tmp1223 = ((org$pandalanguage$pandac$IRNode*) $tmp1224);
                            s1222 = $tmp1223;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1223));
                            panda$core$Panda$unref$panda$core$Object($tmp1224);
                            panda$core$Bit $tmp1230 = (($fn1229) s1222->$class->vtable[4])(s1222);
                            if ($tmp1230.value) {
                            {
                                $returnValue510 = ((panda$core$Bit) { true });
                                $tmp1221 = 0;
                                goto $l1219;
                                $l1231:;
                                $tmp1203 = 0;
                                goto $l1201;
                                $l1232:;
                                $tmp502 = 54;
                                goto $l500;
                                $l1233:;
                                return $returnValue510;
                            }
                            }
                        }
                        $tmp1221 = -1;
                        goto $l1219;
                        $l1219:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1222));
                        s1222 = NULL;
                        switch ($tmp1221) {
                            case 0: goto $l1231;
                            case -1: goto $l1235;
                        }
                        $l1235:;
                    }
                    goto $l1211;
                    $l1212:;
                }
                $tmp1203 = -1;
                goto $l1201;
                $l1201:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$404$171204));
                Iter$404$171204 = NULL;
                switch ($tmp1203) {
                    case 0: goto $l1232;
                    case -1: goto $l1236;
                }
                $l1236:;
            }
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 55;
            goto $l500;
            $l1237:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp1239.value) {
        {
            panda$core$String** $tmp1241 = ((panda$core$String**) ((char*) $match$248_9503->$data + 16));
            label1240 = *$tmp1241;
            org$pandalanguage$pandac$IRNode** $tmp1243 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 24));
            test1242 = *$tmp1243;
            panda$collections$ImmutableArray** $tmp1245 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 32));
            statements1244 = *$tmp1245;
            panda$core$Bit $tmp1247 = (($fn1246) test1242->$class->vtable[4])(test1242);
            if ($tmp1247.value) {
            {
                $returnValue510 = ((panda$core$Bit) { true });
                $tmp502 = 56;
                goto $l500;
                $l1248:;
                return $returnValue510;
            }
            }
            {
                int $tmp1252;
                {
                    ITable* $tmp1256 = ((panda$collections$Iterable*) statements1244)->$class->itable;
                    while ($tmp1256->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1256 = $tmp1256->next;
                    }
                    $fn1258 $tmp1257 = $tmp1256->methods[0];
                    panda$collections$Iterator* $tmp1259 = $tmp1257(((panda$collections$Iterable*) statements1244));
                    $tmp1255 = $tmp1259;
                    $tmp1254 = $tmp1255;
                    Iter$414$171253 = $tmp1254;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1254));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1255));
                    $l1260:;
                    ITable* $tmp1263 = Iter$414$171253->$class->itable;
                    while ($tmp1263->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1263 = $tmp1263->next;
                    }
                    $fn1265 $tmp1264 = $tmp1263->methods[0];
                    panda$core$Bit $tmp1266 = $tmp1264(Iter$414$171253);
                    panda$core$Bit $tmp1267 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1266);
                    bool $tmp1262 = $tmp1267.value;
                    if (!$tmp1262) goto $l1261;
                    {
                        int $tmp1270;
                        {
                            ITable* $tmp1274 = Iter$414$171253->$class->itable;
                            while ($tmp1274->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1274 = $tmp1274->next;
                            }
                            $fn1276 $tmp1275 = $tmp1274->methods[1];
                            panda$core$Object* $tmp1277 = $tmp1275(Iter$414$171253);
                            $tmp1273 = $tmp1277;
                            $tmp1272 = ((org$pandalanguage$pandac$IRNode*) $tmp1273);
                            s1271 = $tmp1272;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1272));
                            panda$core$Panda$unref$panda$core$Object($tmp1273);
                            panda$core$Bit $tmp1279 = (($fn1278) s1271->$class->vtable[4])(s1271);
                            if ($tmp1279.value) {
                            {
                                $returnValue510 = ((panda$core$Bit) { true });
                                $tmp1270 = 0;
                                goto $l1268;
                                $l1280:;
                                $tmp1252 = 0;
                                goto $l1250;
                                $l1281:;
                                $tmp502 = 57;
                                goto $l500;
                                $l1282:;
                                return $returnValue510;
                            }
                            }
                        }
                        $tmp1270 = -1;
                        goto $l1268;
                        $l1268:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1271));
                        s1271 = NULL;
                        switch ($tmp1270) {
                            case 0: goto $l1280;
                            case -1: goto $l1284;
                        }
                        $l1284:;
                    }
                    goto $l1260;
                    $l1261:;
                }
                $tmp1252 = -1;
                goto $l1250;
                $l1250:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$414$171253));
                Iter$414$171253 = NULL;
                switch ($tmp1252) {
                    case 0: goto $l1281;
                    case -1: goto $l1285;
                }
                $l1285:;
            }
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 58;
            goto $l500;
            $l1286:;
            return $returnValue510;
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
        }
        }
        }
    }
    $tmp502 = -1;
    goto $l500;
    $l500:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp504));
    switch ($tmp502) {
        case 50: goto $l1149;
        case 43: goto $l1035;
        case 49: goto $l1081;
        case 17: goto $l701;
        case 12: goto $l659;
        case 5: goto $l587;
        case 48: goto $l1076;
        case 6: goto $l592;
        case 0: goto $l518;
        case 13: goto $l668;
        case 44: goto $l1044;
        case 3: goto $l546;
        case 1: goto $l521;
        case 14: goto $l673;
        case 4: goto $l583;
        case 55: goto $l1237;
        case 29: goto $l862;
        case 31: goto $l907;
        case 30: goto $l873;
        case 56: goto $l1248;
        case 54: goto $l1233;
        case 51: goto $l1153;
        case 52: goto $l1158;
        case 2: goto $l541;
        case 7: goto $l600;
        case 26: goto $l812;
        case 34: goto $l950;
        case 53: goto $l1197;
        case 33: goto $l947;
        case 25: goto $l805;
        case 11: goto $l650;
        case 36: goto $l958;
        case 37: goto $l967;
        case 40: goto $l1018;
        case 41: goto $l1023;
        case 8: goto $l634;
        case 45: goto $l1047;
        case 21: goto $l749;
        case 57: goto $l1282;
        case 58: goto $l1286;
        case 10: goto $l645;
        case 32: goto $l943;
        case 27: goto $l819;
        case 39: goto $l1014;
        case -1: goto $l1288;
        case 22: goto $l760;
        case 9: goto $l638;
        case 47: goto $l1055;
        case 28: goto $l858;
        case 20: goto $l742;
        case 42: goto $l1030;
        case 23: goto $l794;
        case 19: goto $l739;
        case 16: goto $l690;
        case 18: goto $l735;
        case 24: goto $l800;
        case 46: goto $l1052;
        case 38: goto $l980;
        case 35: goto $l955;
        case 15: goto $l678;
    }
    $l1288:;
}
panda$core$String* org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$427_91292 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1293;
    org$pandalanguage$pandac$IRNode* test1295 = NULL;
    org$pandalanguage$pandac$IRNode* msg1297 = NULL;
    panda$core$String* $returnValue1299;
    panda$core$String* $tmp1300;
    panda$core$String* $tmp1301;
    panda$core$String* $tmp1302;
    panda$core$String* $tmp1303;
    panda$core$String* $tmp1304;
    panda$core$String* $tmp1314;
    panda$core$String* $tmp1315;
    panda$core$String* $tmp1316;
    panda$core$String* $tmp1324;
    org$pandalanguage$pandac$IRNode* left1329 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op1331;
    org$pandalanguage$pandac$IRNode* right1333 = NULL;
    panda$core$String* $tmp1335;
    panda$core$String* $tmp1336;
    panda$core$String* $tmp1337;
    panda$core$String* $tmp1338;
    panda$core$String* $tmp1339;
    panda$core$String* $tmp1340;
    panda$core$String* $tmp1341;
    panda$core$Object* $tmp1346;
    panda$core$Bit bit1357;
    panda$core$String* $tmp1359;
    panda$core$String* $tmp1360;
    panda$collections$ImmutableArray* statements1365 = NULL;
    panda$core$MutableString* result1370 = NULL;
    panda$core$MutableString* $tmp1371;
    panda$core$MutableString* $tmp1372;
    panda$collections$Iterator* Iter$441$171378 = NULL;
    panda$collections$Iterator* $tmp1379;
    panda$collections$Iterator* $tmp1380;
    org$pandalanguage$pandac$IRNode* s1396 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1397;
    panda$core$Object* $tmp1398;
    panda$core$String* $tmp1403;
    panda$core$Char8 $tmp1408;
    panda$core$String* $tmp1409;
    panda$core$String* $tmp1410;
    panda$collections$ImmutableArray* statements1417 = NULL;
    panda$collections$ImmutableArray* finally1419 = NULL;
    panda$core$MutableString* result1424 = NULL;
    panda$core$MutableString* $tmp1425;
    panda$core$MutableString* $tmp1426;
    panda$collections$Iterator* Iter$448$171432 = NULL;
    panda$collections$Iterator* $tmp1433;
    panda$collections$Iterator* $tmp1434;
    org$pandalanguage$pandac$IRNode* s1450 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1451;
    panda$core$Object* $tmp1452;
    panda$core$String* $tmp1457;
    panda$collections$Iterator* Iter$452$171466 = NULL;
    panda$collections$Iterator* $tmp1467;
    panda$collections$Iterator* $tmp1468;
    org$pandalanguage$pandac$IRNode* s1484 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1485;
    panda$core$Object* $tmp1486;
    panda$core$String* $tmp1491;
    panda$core$Char8 $tmp1496;
    panda$core$String* $tmp1497;
    panda$core$String* $tmp1498;
    panda$core$String* label1505 = NULL;
    panda$core$String* $tmp1507;
    panda$core$String* $tmp1508;
    panda$core$String* $tmp1509;
    panda$core$String* $tmp1516;
    org$pandalanguage$pandac$MethodRef* m1521 = NULL;
    panda$collections$ImmutableArray* args1523 = NULL;
    panda$core$String* $tmp1525;
    panda$core$String* $tmp1526;
    panda$core$String* $tmp1527;
    panda$core$String* $tmp1528;
    panda$core$String* $tmp1529;
    panda$core$String* $tmp1533;
    org$pandalanguage$pandac$IRNode* value1544 = NULL;
    org$pandalanguage$pandac$Type* type1546 = NULL;
    org$pandalanguage$pandac$Type* $tmp1548;
    org$pandalanguage$pandac$Type* $tmp1551;
    panda$core$String* $tmp1554;
    panda$core$String* $tmp1555;
    panda$core$String* $tmp1556;
    panda$core$String* $tmp1557;
    panda$core$String* $tmp1558;
    panda$core$String* $tmp1568;
    panda$core$String* $tmp1569;
    panda$core$String* $tmp1570;
    panda$core$String* $tmp1571;
    panda$core$String* $tmp1572;
    org$pandalanguage$pandac$ChoiceEntry* ce1583 = NULL;
    panda$core$String* $tmp1585;
    panda$core$String* $tmp1586;
    org$pandalanguage$pandac$IRNode* base1591 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce1593 = NULL;
    panda$core$Int64 field1595;
    panda$core$String* $tmp1597;
    panda$core$String* $tmp1598;
    panda$core$String* $tmp1599;
    panda$core$String* $tmp1600;
    panda$core$String* $tmp1601;
    panda$core$String* $tmp1602;
    panda$core$String* $tmp1603;
    panda$core$Object* $tmp1611;
    org$pandalanguage$pandac$Type* type1619 = NULL;
    org$pandalanguage$pandac$IRNode* call1621 = NULL;
    org$pandalanguage$pandac$IRNode* $match$474_171626 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1627;
    panda$collections$ImmutableArray* args1629 = NULL;
    panda$core$String* $tmp1631;
    panda$core$String* $tmp1632;
    panda$core$String* $tmp1633;
    panda$core$String* $tmp1634;
    panda$core$String* $tmp1635;
    panda$core$String* $tmp1639;
    org$pandalanguage$pandac$Type* Type1652 = NULL;
    panda$core$String* $tmp1654;
    panda$core$String* label1659 = NULL;
    panda$core$String* $tmp1661;
    panda$core$String* $tmp1662;
    panda$core$String* $tmp1663;
    panda$core$String* $tmp1670;
    org$pandalanguage$pandac$IRNode* target1675 = NULL;
    org$pandalanguage$pandac$IRNode* value1677 = NULL;
    panda$core$String* $tmp1679;
    panda$core$String* $tmp1680;
    panda$core$String* $tmp1681;
    panda$core$String* $tmp1682;
    panda$core$String* $tmp1683;
    panda$core$String* $tmp1693;
    panda$core$String* $tmp1694;
    panda$core$String* label1700 = NULL;
    panda$collections$ImmutableArray* statements1702 = NULL;
    org$pandalanguage$pandac$IRNode* test1704 = NULL;
    panda$core$MutableString* result1709 = NULL;
    panda$core$MutableString* $tmp1710;
    panda$core$MutableString* $tmp1711;
    panda$core$String* $tmp1713;
    panda$core$String* $tmp1714;
    panda$collections$Iterator* Iter$498$171722 = NULL;
    panda$collections$Iterator* $tmp1723;
    panda$collections$Iterator* $tmp1724;
    org$pandalanguage$pandac$IRNode* s1740 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1741;
    panda$core$Object* $tmp1742;
    panda$core$String* $tmp1747;
    panda$core$String* $tmp1752;
    panda$core$String* $tmp1753;
    panda$core$String* $tmp1758;
    panda$core$String* $tmp1759;
    org$pandalanguage$pandac$IRNode* m1766 = NULL;
    panda$collections$ImmutableArray* args1768 = NULL;
    panda$core$String* $tmp1770;
    panda$core$String* $tmp1771;
    panda$core$String* $tmp1772;
    panda$core$String* $tmp1773;
    panda$core$String* $tmp1774;
    panda$core$String* $tmp1779;
    org$pandalanguage$pandac$IRNode* expr1791 = NULL;
    org$pandalanguage$pandac$IRNode* stmt1793 = NULL;
    panda$core$String* $tmp1795;
    panda$core$String* $tmp1796;
    panda$core$String* $tmp1797;
    panda$core$String* $tmp1798;
    panda$core$String* $tmp1799;
    org$pandalanguage$pandac$IRNode* base1810 = NULL;
    org$pandalanguage$pandac$FieldDecl* field1812 = NULL;
    panda$core$String* $tmp1814;
    panda$core$String* $tmp1815;
    panda$core$String* $tmp1816;
    panda$core$String* $tmp1817;
    panda$core$String* $tmp1818;
    org$pandalanguage$pandac$IRNode* test1829 = NULL;
    panda$collections$ImmutableArray* ifTrue1831 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse1833 = NULL;
    panda$core$MutableString* result1838 = NULL;
    panda$core$MutableString* $tmp1839;
    panda$core$MutableString* $tmp1840;
    panda$core$String* $tmp1842;
    panda$core$String* $tmp1843;
    panda$collections$Iterator* Iter$511$171851 = NULL;
    panda$collections$Iterator* $tmp1852;
    panda$collections$Iterator* $tmp1853;
    org$pandalanguage$pandac$IRNode* s1869 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1870;
    panda$core$Object* $tmp1871;
    panda$core$String* $tmp1876;
    panda$core$Char8 $tmp1881;
    panda$core$String* $tmp1882;
    panda$core$String* $tmp1883;
    panda$core$String* $tmp1888;
    panda$core$String* $tmp1889;
    panda$core$UInt64 value1896;
    panda$core$String* $tmp1898;
    panda$core$String* $tmp1899;
    org$pandalanguage$pandac$IRNode* value1904 = NULL;
    panda$core$String* $tmp1906;
    panda$core$String* $tmp1907;
    panda$core$String* $tmp1908;
    org$pandalanguage$pandac$IRNode* value1916 = NULL;
    panda$core$String* $tmp1918;
    panda$core$String* $tmp1919;
    panda$core$String* $tmp1920;
    panda$core$String* label1928 = NULL;
    panda$collections$ImmutableArray* statements1930 = NULL;
    panda$core$MutableString* result1935 = NULL;
    panda$core$MutableString* $tmp1936;
    panda$core$MutableString* $tmp1937;
    panda$core$String* $tmp1939;
    panda$core$String* $tmp1940;
    panda$collections$Iterator* Iter$531$171948 = NULL;
    panda$collections$Iterator* $tmp1949;
    panda$collections$Iterator* $tmp1950;
    org$pandalanguage$pandac$IRNode* s1966 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1967;
    panda$core$Object* $tmp1968;
    panda$core$String* $tmp1973;
    panda$core$Char8 $tmp1978;
    panda$core$String* $tmp1979;
    panda$core$String* $tmp1980;
    org$pandalanguage$pandac$IRNode* value1987 = NULL;
    panda$collections$ImmutableArray* whens1989 = NULL;
    panda$collections$ImmutableArray* other1991 = NULL;
    panda$core$MutableString* result1996 = NULL;
    panda$core$MutableString* $tmp1997;
    panda$core$MutableString* $tmp1998;
    panda$core$String* $tmp2000;
    panda$core$String* $tmp2001;
    panda$collections$Iterator* Iter$538$172009 = NULL;
    panda$collections$Iterator* $tmp2010;
    panda$collections$Iterator* $tmp2011;
    org$pandalanguage$pandac$IRNode* w2027 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2028;
    panda$core$Object* $tmp2029;
    panda$core$String* $tmp2034;
    panda$collections$Iterator* Iter$543$212043 = NULL;
    panda$collections$Iterator* $tmp2044;
    panda$collections$Iterator* $tmp2045;
    org$pandalanguage$pandac$IRNode* s2061 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2062;
    panda$core$Object* $tmp2063;
    panda$core$String* $tmp2068;
    panda$core$Char8 $tmp2073;
    panda$core$String* $tmp2074;
    panda$core$String* $tmp2075;
    org$pandalanguage$pandac$IRNode* target2082 = NULL;
    org$pandalanguage$pandac$MethodRef* m2084 = NULL;
    panda$core$String* $tmp2086;
    panda$core$String* $tmp2087;
    panda$core$String* $tmp2088;
    panda$core$String* $tmp2089;
    panda$core$String* $tmp2090;
    panda$core$String* $tmp2100;
    panda$core$UInt64 value2104;
    panda$core$String* $tmp2106;
    panda$core$String* $tmp2107;
    panda$core$Object* $tmp2109;
    panda$core$String* $tmp2115;
    org$pandalanguage$pandac$parser$Token$Kind op2120;
    org$pandalanguage$pandac$IRNode* base2122 = NULL;
    panda$core$String* $tmp2124;
    panda$core$String* $tmp2125;
    panda$core$String* $tmp2126;
    panda$core$String* $tmp2127;
    panda$core$String* $tmp2128;
    panda$core$Object* $tmp2129;
    panda$core$String* label2141 = NULL;
    org$pandalanguage$pandac$IRNode* target2143 = NULL;
    org$pandalanguage$pandac$IRNode* list2145 = NULL;
    panda$collections$ImmutableArray* statements2147 = NULL;
    panda$core$MutableString* result2152 = NULL;
    panda$core$MutableString* $tmp2153;
    panda$core$MutableString* $tmp2154;
    panda$core$String* $tmp2156;
    panda$core$String* $tmp2157;
    panda$core$String* $tmp2161;
    panda$core$String* $tmp2162;
    panda$core$String* $tmp2163;
    panda$core$String* $tmp2164;
    panda$collections$Iterator* Iter$566$172175 = NULL;
    panda$collections$Iterator* $tmp2176;
    panda$collections$Iterator* $tmp2177;
    org$pandalanguage$pandac$IRNode* s2193 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2194;
    panda$core$Object* $tmp2195;
    panda$core$String* $tmp2200;
    panda$core$Char8 $tmp2205;
    panda$core$String* $tmp2206;
    panda$core$String* $tmp2207;
    panda$core$Real64 value2214;
    panda$core$String* $tmp2216;
    panda$core$String* $tmp2217;
    org$pandalanguage$pandac$IRNode* value2222 = NULL;
    panda$core$String* $tmp2224;
    panda$core$String* $tmp2225;
    panda$core$String* $tmp2226;
    panda$core$String* $tmp2233;
    org$pandalanguage$pandac$Type* type2238 = NULL;
    panda$core$Int64 id2240;
    panda$core$String* $tmp2242;
    panda$core$String* $tmp2243;
    panda$core$String* $tmp2244;
    panda$core$Object* $tmp2246;
    org$pandalanguage$pandac$IRNode* base2254 = NULL;
    panda$core$Int64 id2256;
    panda$core$String* $tmp2258;
    panda$core$String* $tmp2259;
    panda$core$String* $tmp2260;
    panda$core$String* $tmp2261;
    panda$core$String* $tmp2262;
    panda$core$Object* $tmp2264;
    panda$core$String* $tmp2275;
    panda$core$String* str2280 = NULL;
    panda$core$String* $tmp2282;
    panda$core$String* $tmp2286;
    org$pandalanguage$pandac$IRNode* test2291 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue2293 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse2295 = NULL;
    panda$core$String* $tmp2297;
    panda$core$String* $tmp2298;
    panda$core$String* $tmp2299;
    panda$core$String* $tmp2300;
    panda$core$String* $tmp2301;
    panda$core$String* $tmp2302;
    panda$core$String* $tmp2303;
    org$pandalanguage$pandac$Type* type2317 = NULL;
    panda$core$String* $tmp2319;
    panda$core$String* $tmp2320;
    panda$core$String* name2325 = NULL;
    panda$core$String* $tmp2327;
    org$pandalanguage$pandac$IRNode* base2331 = NULL;
    panda$collections$ImmutableArray* args2333 = NULL;
    panda$core$String* $tmp2335;
    panda$core$String* $tmp2336;
    panda$core$String* $tmp2337;
    panda$core$String* $tmp2338;
    panda$core$String* $tmp2339;
    panda$core$String* $tmp2344;
    org$pandalanguage$pandac$IRNode* target2355 = NULL;
    panda$collections$ImmutableArray* methods2357 = NULL;
    panda$collections$ImmutableArray* args2359 = NULL;
    panda$core$String* $tmp2361;
    panda$core$String* $tmp2362;
    panda$core$String* $tmp2363;
    panda$core$String* $tmp2364;
    panda$core$String* $tmp2365;
    panda$core$String* $tmp2366;
    panda$core$String* $tmp2367;
    panda$core$Object* $tmp2372;
    panda$core$String* $tmp2377;
    org$pandalanguage$pandac$IRNode* target2388 = NULL;
    panda$collections$ImmutableArray* methods2390 = NULL;
    panda$core$String* $tmp2392;
    panda$core$String* $tmp2393;
    panda$core$String* $tmp2394;
    panda$core$String* $tmp2395;
    panda$core$String* $tmp2396;
    panda$core$Object* $tmp2401;
    org$pandalanguage$pandac$IRNode* start2409 = NULL;
    org$pandalanguage$pandac$IRNode* end2411 = NULL;
    panda$core$Bit inclusive2413;
    org$pandalanguage$pandac$IRNode* step2415 = NULL;
    panda$core$MutableString* result2420 = NULL;
    panda$core$MutableString* $tmp2421;
    panda$core$MutableString* $tmp2422;
    panda$core$String* $tmp2426;
    panda$core$String* $tmp2427;
    panda$core$String* $tmp2432;
    panda$core$String* $tmp2433;
    org$pandalanguage$pandac$Variable$Kind kind2440;
    panda$collections$ImmutableArray* decls2442 = NULL;
    panda$core$MutableString* result2447 = NULL;
    panda$core$MutableString* $tmp2448;
    panda$core$MutableString* $tmp2449;
    org$pandalanguage$pandac$Variable$Kind $match$620_172451;
    panda$core$String* $tmp2460;
    panda$core$String* $tmp2465;
    panda$core$String* $tmp2466;
    org$pandalanguage$pandac$Variable* variable2473 = NULL;
    panda$core$String* $tmp2475;
    panda$collections$ImmutableArray* tests2479 = NULL;
    panda$collections$ImmutableArray* statements2481 = NULL;
    panda$core$String* $tmp2483;
    panda$core$String* $tmp2484;
    panda$core$String* $tmp2485;
    panda$core$String* $tmp2486;
    panda$core$String* $tmp2487;
    panda$core$String* $tmp2489;
    panda$core$String* $tmp2497;
    panda$core$String* label2509 = NULL;
    org$pandalanguage$pandac$IRNode* test2511 = NULL;
    panda$collections$ImmutableArray* statements2513 = NULL;
    panda$core$MutableString* result2518 = NULL;
    panda$core$MutableString* $tmp2519;
    panda$core$MutableString* $tmp2520;
    panda$core$String* $tmp2522;
    panda$core$String* $tmp2523;
    panda$core$String* $tmp2527;
    panda$core$String* $tmp2528;
    panda$collections$Iterator* Iter$638$172536 = NULL;
    panda$collections$Iterator* $tmp2537;
    panda$collections$Iterator* $tmp2538;
    org$pandalanguage$pandac$IRNode* s2554 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2555;
    panda$core$Object* $tmp2556;
    panda$core$String* $tmp2561;
    panda$core$Char8 $tmp2566;
    panda$core$String* $tmp2567;
    panda$core$String* $tmp2568;
    int $tmp1291;
    {
        $tmp1293 = self;
        $match$427_91292 = $tmp1293;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1293));
        panda$core$Bit $tmp1294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp1294.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1296 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 16));
            test1295 = *$tmp1296;
            org$pandalanguage$pandac$IRNode** $tmp1298 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 24));
            msg1297 = *$tmp1298;
            if (((panda$core$Bit) { msg1297 != NULL }).value) {
            {
                panda$core$String* $tmp1306 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1305, ((panda$core$Object*) test1295));
                $tmp1304 = $tmp1306;
                panda$core$String* $tmp1308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1304, &$s1307);
                $tmp1303 = $tmp1308;
                panda$core$String* $tmp1309 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1303, ((panda$core$Object*) msg1297));
                $tmp1302 = $tmp1309;
                panda$core$String* $tmp1311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1302, &$s1310);
                $tmp1301 = $tmp1311;
                $tmp1300 = $tmp1301;
                $returnValue1299 = $tmp1300;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1300));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1301));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1302));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1303));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1304));
                $tmp1291 = 0;
                goto $l1289;
                $l1312:;
                return $returnValue1299;
            }
            }
            panda$core$String* $tmp1318 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1317, ((panda$core$Object*) test1295));
            $tmp1316 = $tmp1318;
            panda$core$String* $tmp1320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1316, &$s1319);
            $tmp1315 = $tmp1320;
            $tmp1314 = $tmp1315;
            $returnValue1299 = $tmp1314;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1314));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1315));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1316));
            $tmp1291 = 1;
            goto $l1289;
            $l1321:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp1323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1323.value) {
        {
            $tmp1324 = &$s1325;
            $returnValue1299 = $tmp1324;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1324));
            $tmp1291 = 2;
            goto $l1289;
            $l1326:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp1328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1328.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1330 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 24));
            left1329 = *$tmp1330;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1332 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$427_91292->$data + 32));
            op1331 = *$tmp1332;
            org$pandalanguage$pandac$IRNode** $tmp1334 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 40));
            right1333 = *$tmp1334;
            panda$core$String* $tmp1343 = (($fn1342) left1329->$class->vtable[0])(left1329);
            $tmp1341 = $tmp1343;
            panda$core$String* $tmp1345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1341, &$s1344);
            $tmp1340 = $tmp1345;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1347;
            $tmp1347 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1347->value = op1331;
            $tmp1346 = ((panda$core$Object*) $tmp1347);
            panda$core$String* $tmp1348 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1340, $tmp1346);
            $tmp1339 = $tmp1348;
            panda$core$String* $tmp1350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1339, &$s1349);
            $tmp1338 = $tmp1350;
            panda$core$String* $tmp1351 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1338, ((panda$core$Object*) right1333));
            $tmp1337 = $tmp1351;
            panda$core$String* $tmp1353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1337, &$s1352);
            $tmp1336 = $tmp1353;
            $tmp1335 = $tmp1336;
            $returnValue1299 = $tmp1335;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1335));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1336));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1337));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1338));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1339));
            panda$core$Panda$unref$panda$core$Object($tmp1346);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1340));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1341));
            $tmp1291 = 3;
            goto $l1289;
            $l1354:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp1356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp1356.value) {
        {
            panda$core$Bit* $tmp1358 = ((panda$core$Bit*) ((char*) $match$427_91292->$data + 24));
            bit1357 = *$tmp1358;
            panda$core$String* $tmp1361 = panda$core$Bit$convert$R$panda$core$String(bit1357);
            $tmp1360 = $tmp1361;
            $tmp1359 = $tmp1360;
            $returnValue1299 = $tmp1359;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1359));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1360));
            $tmp1291 = 4;
            goto $l1289;
            $l1362:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp1364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp1364.value) {
        {
            panda$collections$ImmutableArray** $tmp1366 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91292->$data + 16));
            statements1365 = *$tmp1366;
            int $tmp1369;
            {
                panda$core$MutableString* $tmp1373 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1373, &$s1374);
                $tmp1372 = $tmp1373;
                $tmp1371 = $tmp1372;
                result1370 = $tmp1371;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1371));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1372));
                {
                    int $tmp1377;
                    {
                        ITable* $tmp1381 = ((panda$collections$Iterable*) statements1365)->$class->itable;
                        while ($tmp1381->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1381 = $tmp1381->next;
                        }
                        $fn1383 $tmp1382 = $tmp1381->methods[0];
                        panda$collections$Iterator* $tmp1384 = $tmp1382(((panda$collections$Iterable*) statements1365));
                        $tmp1380 = $tmp1384;
                        $tmp1379 = $tmp1380;
                        Iter$441$171378 = $tmp1379;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1379));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1380));
                        $l1385:;
                        ITable* $tmp1388 = Iter$441$171378->$class->itable;
                        while ($tmp1388->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1388 = $tmp1388->next;
                        }
                        $fn1390 $tmp1389 = $tmp1388->methods[0];
                        panda$core$Bit $tmp1391 = $tmp1389(Iter$441$171378);
                        panda$core$Bit $tmp1392 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1391);
                        bool $tmp1387 = $tmp1392.value;
                        if (!$tmp1387) goto $l1386;
                        {
                            int $tmp1395;
                            {
                                ITable* $tmp1399 = Iter$441$171378->$class->itable;
                                while ($tmp1399->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1399 = $tmp1399->next;
                                }
                                $fn1401 $tmp1400 = $tmp1399->methods[1];
                                panda$core$Object* $tmp1402 = $tmp1400(Iter$441$171378);
                                $tmp1398 = $tmp1402;
                                $tmp1397 = ((org$pandalanguage$pandac$IRNode*) $tmp1398);
                                s1396 = $tmp1397;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1397));
                                panda$core$Panda$unref$panda$core$Object($tmp1398);
                                panda$core$String* $tmp1405 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1396), &$s1404);
                                $tmp1403 = $tmp1405;
                                panda$core$MutableString$append$panda$core$String(result1370, $tmp1403);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$441$171378));
                    Iter$441$171378 = NULL;
                    switch ($tmp1377) {
                        case -1: goto $l1407;
                    }
                    $l1407:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1408, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1370, $tmp1408);
                panda$core$String* $tmp1411 = panda$core$MutableString$finish$R$panda$core$String(result1370);
                $tmp1410 = $tmp1411;
                $tmp1409 = $tmp1410;
                $returnValue1299 = $tmp1409;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1409));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1410));
                $tmp1369 = 0;
                goto $l1367;
                $l1412:;
                $tmp1291 = 5;
                goto $l1289;
                $l1413:;
                return $returnValue1299;
            }
            $l1367:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1370));
            result1370 = NULL;
            switch ($tmp1369) {
                case 0: goto $l1412;
            }
            $l1415:;
        }
        }
        else {
        panda$core$Bit $tmp1416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp1416.value) {
        {
            panda$collections$ImmutableArray** $tmp1418 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91292->$data + 16));
            statements1417 = *$tmp1418;
            panda$collections$ImmutableArray** $tmp1420 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91292->$data + 24));
            finally1419 = *$tmp1420;
            int $tmp1423;
            {
                panda$core$MutableString* $tmp1427 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1427, &$s1428);
                $tmp1426 = $tmp1427;
                $tmp1425 = $tmp1426;
                result1424 = $tmp1425;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1425));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1426));
                {
                    int $tmp1431;
                    {
                        ITable* $tmp1435 = ((panda$collections$Iterable*) statements1417)->$class->itable;
                        while ($tmp1435->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1435 = $tmp1435->next;
                        }
                        $fn1437 $tmp1436 = $tmp1435->methods[0];
                        panda$collections$Iterator* $tmp1438 = $tmp1436(((panda$collections$Iterable*) statements1417));
                        $tmp1434 = $tmp1438;
                        $tmp1433 = $tmp1434;
                        Iter$448$171432 = $tmp1433;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1433));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1434));
                        $l1439:;
                        ITable* $tmp1442 = Iter$448$171432->$class->itable;
                        while ($tmp1442->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1442 = $tmp1442->next;
                        }
                        $fn1444 $tmp1443 = $tmp1442->methods[0];
                        panda$core$Bit $tmp1445 = $tmp1443(Iter$448$171432);
                        panda$core$Bit $tmp1446 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1445);
                        bool $tmp1441 = $tmp1446.value;
                        if (!$tmp1441) goto $l1440;
                        {
                            int $tmp1449;
                            {
                                ITable* $tmp1453 = Iter$448$171432->$class->itable;
                                while ($tmp1453->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1453 = $tmp1453->next;
                                }
                                $fn1455 $tmp1454 = $tmp1453->methods[1];
                                panda$core$Object* $tmp1456 = $tmp1454(Iter$448$171432);
                                $tmp1452 = $tmp1456;
                                $tmp1451 = ((org$pandalanguage$pandac$IRNode*) $tmp1452);
                                s1450 = $tmp1451;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1451));
                                panda$core$Panda$unref$panda$core$Object($tmp1452);
                                panda$core$String* $tmp1459 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1450), &$s1458);
                                $tmp1457 = $tmp1459;
                                panda$core$MutableString$append$panda$core$String(result1424, $tmp1457);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1457));
                            }
                            $tmp1449 = -1;
                            goto $l1447;
                            $l1447:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1450));
                            s1450 = NULL;
                            switch ($tmp1449) {
                                case -1: goto $l1460;
                            }
                            $l1460:;
                        }
                        goto $l1439;
                        $l1440:;
                    }
                    $tmp1431 = -1;
                    goto $l1429;
                    $l1429:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$448$171432));
                    Iter$448$171432 = NULL;
                    switch ($tmp1431) {
                        case -1: goto $l1461;
                    }
                    $l1461:;
                }
                panda$core$MutableString$append$panda$core$String(result1424, &$s1462);
                {
                    int $tmp1465;
                    {
                        ITable* $tmp1469 = ((panda$collections$Iterable*) finally1419)->$class->itable;
                        while ($tmp1469->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1469 = $tmp1469->next;
                        }
                        $fn1471 $tmp1470 = $tmp1469->methods[0];
                        panda$collections$Iterator* $tmp1472 = $tmp1470(((panda$collections$Iterable*) finally1419));
                        $tmp1468 = $tmp1472;
                        $tmp1467 = $tmp1468;
                        Iter$452$171466 = $tmp1467;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1467));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1468));
                        $l1473:;
                        ITable* $tmp1476 = Iter$452$171466->$class->itable;
                        while ($tmp1476->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1476 = $tmp1476->next;
                        }
                        $fn1478 $tmp1477 = $tmp1476->methods[0];
                        panda$core$Bit $tmp1479 = $tmp1477(Iter$452$171466);
                        panda$core$Bit $tmp1480 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1479);
                        bool $tmp1475 = $tmp1480.value;
                        if (!$tmp1475) goto $l1474;
                        {
                            int $tmp1483;
                            {
                                ITable* $tmp1487 = Iter$452$171466->$class->itable;
                                while ($tmp1487->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1487 = $tmp1487->next;
                                }
                                $fn1489 $tmp1488 = $tmp1487->methods[1];
                                panda$core$Object* $tmp1490 = $tmp1488(Iter$452$171466);
                                $tmp1486 = $tmp1490;
                                $tmp1485 = ((org$pandalanguage$pandac$IRNode*) $tmp1486);
                                s1484 = $tmp1485;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1485));
                                panda$core$Panda$unref$panda$core$Object($tmp1486);
                                panda$core$String* $tmp1493 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1484), &$s1492);
                                $tmp1491 = $tmp1493;
                                panda$core$MutableString$append$panda$core$String(result1424, $tmp1491);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1491));
                            }
                            $tmp1483 = -1;
                            goto $l1481;
                            $l1481:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1484));
                            s1484 = NULL;
                            switch ($tmp1483) {
                                case -1: goto $l1494;
                            }
                            $l1494:;
                        }
                        goto $l1473;
                        $l1474:;
                    }
                    $tmp1465 = -1;
                    goto $l1463;
                    $l1463:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$452$171466));
                    Iter$452$171466 = NULL;
                    switch ($tmp1465) {
                        case -1: goto $l1495;
                    }
                    $l1495:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1496, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1424, $tmp1496);
                panda$core$String* $tmp1499 = panda$core$MutableString$finish$R$panda$core$String(result1424);
                $tmp1498 = $tmp1499;
                $tmp1497 = $tmp1498;
                $returnValue1299 = $tmp1497;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1497));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1498));
                $tmp1423 = 0;
                goto $l1421;
                $l1500:;
                $tmp1291 = 6;
                goto $l1289;
                $l1501:;
                return $returnValue1299;
            }
            $l1421:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1424));
            result1424 = NULL;
            switch ($tmp1423) {
                case 0: goto $l1500;
            }
            $l1503:;
        }
        }
        else {
        panda$core$Bit $tmp1504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp1504.value) {
        {
            panda$core$String** $tmp1506 = ((panda$core$String**) ((char*) $match$427_91292->$data + 16));
            label1505 = *$tmp1506;
            if (((panda$core$Bit) { label1505 != NULL }).value) {
            {
                panda$core$String* $tmp1511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1510, label1505);
                $tmp1509 = $tmp1511;
                panda$core$String* $tmp1513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1509, &$s1512);
                $tmp1508 = $tmp1513;
                $tmp1507 = $tmp1508;
                $returnValue1299 = $tmp1507;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1507));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1508));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1509));
                $tmp1291 = 7;
                goto $l1289;
                $l1514:;
                return $returnValue1299;
            }
            }
            $tmp1516 = &$s1517;
            $returnValue1299 = $tmp1516;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1516));
            $tmp1291 = 8;
            goto $l1289;
            $l1518:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp1520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp1520.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp1522 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$427_91292->$data + 24));
            m1521 = *$tmp1522;
            panda$collections$ImmutableArray** $tmp1524 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91292->$data + 32));
            args1523 = *$tmp1524;
            panda$core$String* $tmp1530 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) m1521->value)->name);
            $tmp1529 = $tmp1530;
            panda$core$String* $tmp1532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1529, &$s1531);
            $tmp1528 = $tmp1532;
            ITable* $tmp1534 = ((panda$collections$ListView*) args1523)->$class->itable;
            while ($tmp1534->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1534 = $tmp1534->next;
            }
            $fn1536 $tmp1535 = $tmp1534->methods[1];
            panda$core$String* $tmp1537 = $tmp1535(((panda$collections$ListView*) args1523));
            $tmp1533 = $tmp1537;
            panda$core$String* $tmp1538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1528, $tmp1533);
            $tmp1527 = $tmp1538;
            panda$core$String* $tmp1540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1527, &$s1539);
            $tmp1526 = $tmp1540;
            $tmp1525 = $tmp1526;
            $returnValue1299 = $tmp1525;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1525));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1526));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1527));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1533));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1528));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1529));
            $tmp1291 = 9;
            goto $l1289;
            $l1541:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp1543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp1543.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1545 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 16));
            value1544 = *$tmp1545;
            org$pandalanguage$pandac$Type** $tmp1547 = ((org$pandalanguage$pandac$Type**) ((char*) $match$427_91292->$data + 24));
            type1546 = *$tmp1547;
            org$pandalanguage$pandac$Type* $tmp1550 = (($fn1549) value1544->$class->vtable[2])(value1544);
            $tmp1548 = $tmp1550;
            org$pandalanguage$pandac$Type* $tmp1552 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            $tmp1551 = $tmp1552;
            panda$core$Bit $tmp1553 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1548, $tmp1551);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1551));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1548));
            if ($tmp1553.value) {
            {
                panda$core$String* $tmp1560 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1559, ((panda$core$Object*) value1544));
                $tmp1558 = $tmp1560;
                panda$core$String* $tmp1562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1558, &$s1561);
                $tmp1557 = $tmp1562;
                panda$core$String* $tmp1563 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1557, ((panda$core$Object*) type1546));
                $tmp1556 = $tmp1563;
                panda$core$String* $tmp1565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1556, &$s1564);
                $tmp1555 = $tmp1565;
                $tmp1554 = $tmp1555;
                $returnValue1299 = $tmp1554;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1554));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1555));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1556));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1557));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1558));
                $tmp1291 = 10;
                goto $l1289;
                $l1566:;
                return $returnValue1299;
            }
            }
            panda$core$String* $tmp1574 = (($fn1573) value1544->$class->vtable[0])(value1544);
            $tmp1572 = $tmp1574;
            panda$core$String* $tmp1576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1572, &$s1575);
            $tmp1571 = $tmp1576;
            panda$core$String* $tmp1577 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1571, ((panda$core$Object*) type1546));
            $tmp1570 = $tmp1577;
            panda$core$String* $tmp1579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1570, &$s1578);
            $tmp1569 = $tmp1579;
            $tmp1568 = $tmp1569;
            $returnValue1299 = $tmp1568;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1568));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1569));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1570));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1571));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1572));
            $tmp1291 = 11;
            goto $l1289;
            $l1580:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp1582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1582.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp1584 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$427_91292->$data + 16));
            ce1583 = *$tmp1584;
            panda$core$String* $tmp1587 = org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(ce1583);
            $tmp1586 = $tmp1587;
            $tmp1585 = $tmp1586;
            $returnValue1299 = $tmp1585;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1585));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1586));
            $tmp1291 = 12;
            goto $l1289;
            $l1588:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp1590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp1590.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1592 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 16));
            base1591 = *$tmp1592;
            org$pandalanguage$pandac$ChoiceEntry** $tmp1594 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$427_91292->$data + 24));
            ce1593 = *$tmp1594;
            panda$core$Int64* $tmp1596 = ((panda$core$Int64*) ((char*) $match$427_91292->$data + 32));
            field1595 = *$tmp1596;
            panda$core$String* $tmp1605 = (($fn1604) base1591->$class->vtable[0])(base1591);
            $tmp1603 = $tmp1605;
            panda$core$String* $tmp1607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1603, &$s1606);
            $tmp1602 = $tmp1607;
            panda$core$String* $tmp1608 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1602, ((panda$core$Object*) ce1593));
            $tmp1601 = $tmp1608;
            panda$core$String* $tmp1610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1601, &$s1609);
            $tmp1600 = $tmp1610;
            panda$core$Int64$wrapper* $tmp1612;
            $tmp1612 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1612->value = field1595;
            $tmp1611 = ((panda$core$Object*) $tmp1612);
            panda$core$String* $tmp1613 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1600, $tmp1611);
            $tmp1599 = $tmp1613;
            panda$core$String* $tmp1615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1599, &$s1614);
            $tmp1598 = $tmp1615;
            $tmp1597 = $tmp1598;
            $returnValue1299 = $tmp1597;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1597));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1598));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1599));
            panda$core$Panda$unref$panda$core$Object($tmp1611);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1600));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1601));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1602));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1603));
            $tmp1291 = 13;
            goto $l1289;
            $l1616:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp1618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1618.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1620 = ((org$pandalanguage$pandac$Type**) ((char*) $match$427_91292->$data + 16));
            type1619 = *$tmp1620;
            org$pandalanguage$pandac$IRNode** $tmp1622 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 24));
            call1621 = *$tmp1622;
            int $tmp1625;
            {
                $tmp1627 = call1621;
                $match$474_171626 = $tmp1627;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1627));
                panda$core$Bit $tmp1628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$474_171626->$rawValue, ((panda$core$Int64) { 7 }));
                if ($tmp1628.value) {
                {
                    panda$collections$ImmutableArray** $tmp1630 = ((panda$collections$ImmutableArray**) ((char*) $match$474_171626->$data + 32));
                    args1629 = *$tmp1630;
                    panda$core$String* $tmp1636 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type1619);
                    $tmp1635 = $tmp1636;
                    panda$core$String* $tmp1638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1635, &$s1637);
                    $tmp1634 = $tmp1638;
                    ITable* $tmp1640 = ((panda$collections$ListView*) args1629)->$class->itable;
                    while ($tmp1640->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp1640 = $tmp1640->next;
                    }
                    $fn1642 $tmp1641 = $tmp1640->methods[1];
                    panda$core$String* $tmp1643 = $tmp1641(((panda$collections$ListView*) args1629));
                    $tmp1639 = $tmp1643;
                    panda$core$String* $tmp1644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1634, $tmp1639);
                    $tmp1633 = $tmp1644;
                    panda$core$String* $tmp1646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1633, &$s1645);
                    $tmp1632 = $tmp1646;
                    $tmp1631 = $tmp1632;
                    $returnValue1299 = $tmp1631;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1631));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1632));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1633));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1639));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1634));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1635));
                    $tmp1625 = 0;
                    goto $l1623;
                    $l1647:;
                    $tmp1291 = 14;
                    goto $l1289;
                    $l1648:;
                    return $returnValue1299;
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1625 = -1;
            goto $l1623;
            $l1623:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1627));
            switch ($tmp1625) {
                case -1: goto $l1650;
                case 0: goto $l1647;
            }
            $l1650:;
        }
        }
        else {
        panda$core$Bit $tmp1651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1651.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1653 = ((org$pandalanguage$pandac$Type**) ((char*) $match$427_91292->$data + 16));
            Type1652 = *$tmp1653;
            $tmp1654 = &$s1655;
            $returnValue1299 = $tmp1654;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1654));
            $tmp1291 = 15;
            goto $l1289;
            $l1656:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp1658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1658.value) {
        {
            panda$core$String** $tmp1660 = ((panda$core$String**) ((char*) $match$427_91292->$data + 16));
            label1659 = *$tmp1660;
            if (((panda$core$Bit) { label1659 != NULL }).value) {
            {
                panda$core$String* $tmp1665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1664, label1659);
                $tmp1663 = $tmp1665;
                panda$core$String* $tmp1667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1663, &$s1666);
                $tmp1662 = $tmp1667;
                $tmp1661 = $tmp1662;
                $returnValue1299 = $tmp1661;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1661));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1662));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1663));
                $tmp1291 = 16;
                goto $l1289;
                $l1668:;
                return $returnValue1299;
            }
            }
            $tmp1670 = &$s1671;
            $returnValue1299 = $tmp1670;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1670));
            $tmp1291 = 17;
            goto $l1289;
            $l1672:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp1674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1674.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1676 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 0));
            target1675 = *$tmp1676;
            org$pandalanguage$pandac$IRNode** $tmp1678 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 8));
            value1677 = *$tmp1678;
            if (((panda$core$Bit) { value1677 != NULL }).value) {
            {
                panda$core$String* $tmp1685 = (($fn1684) target1675->$class->vtable[0])(target1675);
                $tmp1683 = $tmp1685;
                panda$core$String* $tmp1687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1683, &$s1686);
                $tmp1682 = $tmp1687;
                panda$core$String* $tmp1688 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1682, ((panda$core$Object*) value1677));
                $tmp1681 = $tmp1688;
                panda$core$String* $tmp1690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1681, &$s1689);
                $tmp1680 = $tmp1690;
                $tmp1679 = $tmp1680;
                $returnValue1299 = $tmp1679;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1679));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1680));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1681));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1682));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1683));
                $tmp1291 = 18;
                goto $l1289;
                $l1691:;
                return $returnValue1299;
            }
            }
            panda$core$String* $tmp1696 = (($fn1695) target1675->$class->vtable[0])(target1675);
            $tmp1694 = $tmp1696;
            $tmp1693 = $tmp1694;
            $returnValue1299 = $tmp1693;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1693));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1694));
            $tmp1291 = 19;
            goto $l1289;
            $l1697:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp1699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1699.value) {
        {
            panda$core$String** $tmp1701 = ((panda$core$String**) ((char*) $match$427_91292->$data + 16));
            label1700 = *$tmp1701;
            panda$collections$ImmutableArray** $tmp1703 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91292->$data + 24));
            statements1702 = *$tmp1703;
            org$pandalanguage$pandac$IRNode** $tmp1705 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 32));
            test1704 = *$tmp1705;
            int $tmp1708;
            {
                panda$core$MutableString* $tmp1712 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1712);
                $tmp1711 = $tmp1712;
                $tmp1710 = $tmp1711;
                result1709 = $tmp1710;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1710));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1711));
                if (((panda$core$Bit) { label1700 != NULL }).value) {
                {
                    panda$core$String* $tmp1715 = panda$core$String$convert$R$panda$core$String(label1700);
                    $tmp1714 = $tmp1715;
                    panda$core$String* $tmp1717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1714, &$s1716);
                    $tmp1713 = $tmp1717;
                    panda$core$MutableString$append$panda$core$String(result1709, $tmp1713);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1713));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1714));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1709, &$s1718);
                {
                    int $tmp1721;
                    {
                        ITable* $tmp1725 = ((panda$collections$Iterable*) statements1702)->$class->itable;
                        while ($tmp1725->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1725 = $tmp1725->next;
                        }
                        $fn1727 $tmp1726 = $tmp1725->methods[0];
                        panda$collections$Iterator* $tmp1728 = $tmp1726(((panda$collections$Iterable*) statements1702));
                        $tmp1724 = $tmp1728;
                        $tmp1723 = $tmp1724;
                        Iter$498$171722 = $tmp1723;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1723));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1724));
                        $l1729:;
                        ITable* $tmp1732 = Iter$498$171722->$class->itable;
                        while ($tmp1732->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1732 = $tmp1732->next;
                        }
                        $fn1734 $tmp1733 = $tmp1732->methods[0];
                        panda$core$Bit $tmp1735 = $tmp1733(Iter$498$171722);
                        panda$core$Bit $tmp1736 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1735);
                        bool $tmp1731 = $tmp1736.value;
                        if (!$tmp1731) goto $l1730;
                        {
                            int $tmp1739;
                            {
                                ITable* $tmp1743 = Iter$498$171722->$class->itable;
                                while ($tmp1743->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1743 = $tmp1743->next;
                                }
                                $fn1745 $tmp1744 = $tmp1743->methods[1];
                                panda$core$Object* $tmp1746 = $tmp1744(Iter$498$171722);
                                $tmp1742 = $tmp1746;
                                $tmp1741 = ((org$pandalanguage$pandac$IRNode*) $tmp1742);
                                s1740 = $tmp1741;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1741));
                                panda$core$Panda$unref$panda$core$Object($tmp1742);
                                panda$core$String* $tmp1749 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1740), &$s1748);
                                $tmp1747 = $tmp1749;
                                panda$core$MutableString$append$panda$core$String(result1709, $tmp1747);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1747));
                            }
                            $tmp1739 = -1;
                            goto $l1737;
                            $l1737:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1740));
                            s1740 = NULL;
                            switch ($tmp1739) {
                                case -1: goto $l1750;
                            }
                            $l1750:;
                        }
                        goto $l1729;
                        $l1730:;
                    }
                    $tmp1721 = -1;
                    goto $l1719;
                    $l1719:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$498$171722));
                    Iter$498$171722 = NULL;
                    switch ($tmp1721) {
                        case -1: goto $l1751;
                    }
                    $l1751:;
                }
                panda$core$String* $tmp1755 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1754, ((panda$core$Object*) test1704));
                $tmp1753 = $tmp1755;
                panda$core$String* $tmp1757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1753, &$s1756);
                $tmp1752 = $tmp1757;
                panda$core$MutableString$append$panda$core$String(result1709, $tmp1752);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1752));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1753));
                panda$core$String* $tmp1760 = panda$core$MutableString$finish$R$panda$core$String(result1709);
                $tmp1759 = $tmp1760;
                $tmp1758 = $tmp1759;
                $returnValue1299 = $tmp1758;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1758));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1759));
                $tmp1708 = 0;
                goto $l1706;
                $l1761:;
                $tmp1291 = 20;
                goto $l1289;
                $l1762:;
                return $returnValue1299;
            }
            $l1706:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1709));
            result1709 = NULL;
            switch ($tmp1708) {
                case 0: goto $l1761;
            }
            $l1764:;
        }
        }
        else {
        panda$core$Bit $tmp1765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1765.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1767 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 0));
            m1766 = *$tmp1767;
            panda$collections$ImmutableArray** $tmp1769 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91292->$data + 8));
            args1768 = *$tmp1769;
            panda$core$String* $tmp1776 = (($fn1775) m1766->$class->vtable[0])(m1766);
            $tmp1774 = $tmp1776;
            panda$core$String* $tmp1778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1774, &$s1777);
            $tmp1773 = $tmp1778;
            ITable* $tmp1781 = ((panda$collections$ListView*) args1768)->$class->itable;
            while ($tmp1781->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1781 = $tmp1781->next;
            }
            $fn1783 $tmp1782 = $tmp1781->methods[2];
            panda$core$String* $tmp1784 = $tmp1782(((panda$collections$ListView*) args1768), &$s1780);
            $tmp1779 = $tmp1784;
            panda$core$String* $tmp1785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1773, $tmp1779);
            $tmp1772 = $tmp1785;
            panda$core$String* $tmp1787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1772, &$s1786);
            $tmp1771 = $tmp1787;
            $tmp1770 = $tmp1771;
            $returnValue1299 = $tmp1770;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1770));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1771));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1772));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1779));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1773));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1774));
            $tmp1291 = 21;
            goto $l1289;
            $l1788:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp1790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1790.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1792 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 0));
            expr1791 = *$tmp1792;
            org$pandalanguage$pandac$IRNode** $tmp1794 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 8));
            stmt1793 = *$tmp1794;
            panda$core$String* $tmp1801 = (($fn1800) expr1791->$class->vtable[0])(expr1791);
            $tmp1799 = $tmp1801;
            panda$core$String* $tmp1803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1799, &$s1802);
            $tmp1798 = $tmp1803;
            panda$core$String* $tmp1804 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1798, ((panda$core$Object*) stmt1793));
            $tmp1797 = $tmp1804;
            panda$core$String* $tmp1806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1797, &$s1805);
            $tmp1796 = $tmp1806;
            $tmp1795 = $tmp1796;
            $returnValue1299 = $tmp1795;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1795));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1796));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1797));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1798));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1799));
            $tmp1291 = 22;
            goto $l1289;
            $l1807:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp1809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1809.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1811 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 24));
            base1810 = *$tmp1811;
            org$pandalanguage$pandac$FieldDecl** $tmp1813 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$427_91292->$data + 32));
            field1812 = *$tmp1813;
            panda$core$String* $tmp1820 = (($fn1819) base1810->$class->vtable[0])(base1810);
            $tmp1818 = $tmp1820;
            panda$core$String* $tmp1822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1818, &$s1821);
            $tmp1817 = $tmp1822;
            panda$core$String* $tmp1823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1817, ((org$pandalanguage$pandac$Symbol*) field1812)->name);
            $tmp1816 = $tmp1823;
            panda$core$String* $tmp1825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1816, &$s1824);
            $tmp1815 = $tmp1825;
            $tmp1814 = $tmp1815;
            $returnValue1299 = $tmp1814;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1814));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1815));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1816));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1817));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1818));
            $tmp1291 = 23;
            goto $l1289;
            $l1826:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp1828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1828.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1830 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 16));
            test1829 = *$tmp1830;
            panda$collections$ImmutableArray** $tmp1832 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91292->$data + 24));
            ifTrue1831 = *$tmp1832;
            org$pandalanguage$pandac$IRNode** $tmp1834 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 32));
            ifFalse1833 = *$tmp1834;
            int $tmp1837;
            {
                panda$core$MutableString* $tmp1841 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1845 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1844, ((panda$core$Object*) test1829));
                $tmp1843 = $tmp1845;
                panda$core$String* $tmp1847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1843, &$s1846);
                $tmp1842 = $tmp1847;
                panda$core$MutableString$init$panda$core$String($tmp1841, $tmp1842);
                $tmp1840 = $tmp1841;
                $tmp1839 = $tmp1840;
                result1838 = $tmp1839;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1839));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1840));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1842));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1843));
                {
                    int $tmp1850;
                    {
                        ITable* $tmp1854 = ((panda$collections$Iterable*) ifTrue1831)->$class->itable;
                        while ($tmp1854->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1854 = $tmp1854->next;
                        }
                        $fn1856 $tmp1855 = $tmp1854->methods[0];
                        panda$collections$Iterator* $tmp1857 = $tmp1855(((panda$collections$Iterable*) ifTrue1831));
                        $tmp1853 = $tmp1857;
                        $tmp1852 = $tmp1853;
                        Iter$511$171851 = $tmp1852;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1852));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1853));
                        $l1858:;
                        ITable* $tmp1861 = Iter$511$171851->$class->itable;
                        while ($tmp1861->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1861 = $tmp1861->next;
                        }
                        $fn1863 $tmp1862 = $tmp1861->methods[0];
                        panda$core$Bit $tmp1864 = $tmp1862(Iter$511$171851);
                        panda$core$Bit $tmp1865 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1864);
                        bool $tmp1860 = $tmp1865.value;
                        if (!$tmp1860) goto $l1859;
                        {
                            int $tmp1868;
                            {
                                ITable* $tmp1872 = Iter$511$171851->$class->itable;
                                while ($tmp1872->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1872 = $tmp1872->next;
                                }
                                $fn1874 $tmp1873 = $tmp1872->methods[1];
                                panda$core$Object* $tmp1875 = $tmp1873(Iter$511$171851);
                                $tmp1871 = $tmp1875;
                                $tmp1870 = ((org$pandalanguage$pandac$IRNode*) $tmp1871);
                                s1869 = $tmp1870;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1870));
                                panda$core$Panda$unref$panda$core$Object($tmp1871);
                                panda$core$String* $tmp1878 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1869), &$s1877);
                                $tmp1876 = $tmp1878;
                                panda$core$MutableString$append$panda$core$String(result1838, $tmp1876);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1876));
                            }
                            $tmp1868 = -1;
                            goto $l1866;
                            $l1866:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1869));
                            s1869 = NULL;
                            switch ($tmp1868) {
                                case -1: goto $l1879;
                            }
                            $l1879:;
                        }
                        goto $l1858;
                        $l1859:;
                    }
                    $tmp1850 = -1;
                    goto $l1848;
                    $l1848:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$511$171851));
                    Iter$511$171851 = NULL;
                    switch ($tmp1850) {
                        case -1: goto $l1880;
                    }
                    $l1880:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1881, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1838, $tmp1881);
                if (((panda$core$Bit) { ifFalse1833 != NULL }).value) {
                {
                    panda$core$String* $tmp1885 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1884, ((panda$core$Object*) ifFalse1833));
                    $tmp1883 = $tmp1885;
                    panda$core$String* $tmp1887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1883, &$s1886);
                    $tmp1882 = $tmp1887;
                    panda$core$MutableString$append$panda$core$String(result1838, $tmp1882);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1882));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1883));
                }
                }
                panda$core$String* $tmp1890 = panda$core$MutableString$finish$R$panda$core$String(result1838);
                $tmp1889 = $tmp1890;
                $tmp1888 = $tmp1889;
                $returnValue1299 = $tmp1888;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1888));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1889));
                $tmp1837 = 0;
                goto $l1835;
                $l1891:;
                $tmp1291 = 24;
                goto $l1289;
                $l1892:;
                return $returnValue1299;
            }
            $l1835:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1838));
            result1838 = NULL;
            switch ($tmp1837) {
                case 0: goto $l1891;
            }
            $l1894:;
        }
        }
        else {
        panda$core$Bit $tmp1895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1895.value) {
        {
            panda$core$UInt64* $tmp1897 = ((panda$core$UInt64*) ((char*) $match$427_91292->$data + 24));
            value1896 = *$tmp1897;
            panda$core$String* $tmp1900 = panda$core$UInt64$convert$R$panda$core$String(value1896);
            $tmp1899 = $tmp1900;
            $tmp1898 = $tmp1899;
            $returnValue1299 = $tmp1898;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1898));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1899));
            $tmp1291 = 25;
            goto $l1289;
            $l1901:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp1903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1903.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1905 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 16));
            value1904 = *$tmp1905;
            panda$core$String* $tmp1910 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1909, ((panda$core$Object*) value1904));
            $tmp1908 = $tmp1910;
            panda$core$String* $tmp1912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1908, &$s1911);
            $tmp1907 = $tmp1912;
            $tmp1906 = $tmp1907;
            $returnValue1299 = $tmp1906;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1906));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1907));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1908));
            $tmp1291 = 26;
            goto $l1289;
            $l1913:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp1915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1915.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1917 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 16));
            value1916 = *$tmp1917;
            panda$core$String* $tmp1922 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1921, ((panda$core$Object*) value1916));
            $tmp1920 = $tmp1922;
            panda$core$String* $tmp1924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1920, &$s1923);
            $tmp1919 = $tmp1924;
            $tmp1918 = $tmp1919;
            $returnValue1299 = $tmp1918;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1918));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1919));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1920));
            $tmp1291 = 27;
            goto $l1289;
            $l1925:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp1927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1927.value) {
        {
            panda$core$String** $tmp1929 = ((panda$core$String**) ((char*) $match$427_91292->$data + 16));
            label1928 = *$tmp1929;
            panda$collections$ImmutableArray** $tmp1931 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91292->$data + 24));
            statements1930 = *$tmp1931;
            int $tmp1934;
            {
                panda$core$MutableString* $tmp1938 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1938);
                $tmp1937 = $tmp1938;
                $tmp1936 = $tmp1937;
                result1935 = $tmp1936;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1936));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1937));
                if (((panda$core$Bit) { label1928 != NULL }).value) {
                {
                    panda$core$String* $tmp1941 = panda$core$String$convert$R$panda$core$String(label1928);
                    $tmp1940 = $tmp1941;
                    panda$core$String* $tmp1943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1940, &$s1942);
                    $tmp1939 = $tmp1943;
                    panda$core$MutableString$append$panda$core$String(result1935, $tmp1939);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1939));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1940));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1935, &$s1944);
                {
                    int $tmp1947;
                    {
                        ITable* $tmp1951 = ((panda$collections$Iterable*) statements1930)->$class->itable;
                        while ($tmp1951->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1951 = $tmp1951->next;
                        }
                        $fn1953 $tmp1952 = $tmp1951->methods[0];
                        panda$collections$Iterator* $tmp1954 = $tmp1952(((panda$collections$Iterable*) statements1930));
                        $tmp1950 = $tmp1954;
                        $tmp1949 = $tmp1950;
                        Iter$531$171948 = $tmp1949;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1949));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1950));
                        $l1955:;
                        ITable* $tmp1958 = Iter$531$171948->$class->itable;
                        while ($tmp1958->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1958 = $tmp1958->next;
                        }
                        $fn1960 $tmp1959 = $tmp1958->methods[0];
                        panda$core$Bit $tmp1961 = $tmp1959(Iter$531$171948);
                        panda$core$Bit $tmp1962 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1961);
                        bool $tmp1957 = $tmp1962.value;
                        if (!$tmp1957) goto $l1956;
                        {
                            int $tmp1965;
                            {
                                ITable* $tmp1969 = Iter$531$171948->$class->itable;
                                while ($tmp1969->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1969 = $tmp1969->next;
                                }
                                $fn1971 $tmp1970 = $tmp1969->methods[1];
                                panda$core$Object* $tmp1972 = $tmp1970(Iter$531$171948);
                                $tmp1968 = $tmp1972;
                                $tmp1967 = ((org$pandalanguage$pandac$IRNode*) $tmp1968);
                                s1966 = $tmp1967;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1967));
                                panda$core$Panda$unref$panda$core$Object($tmp1968);
                                panda$core$String* $tmp1975 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1966), &$s1974);
                                $tmp1973 = $tmp1975;
                                panda$core$MutableString$append$panda$core$String(result1935, $tmp1973);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1973));
                            }
                            $tmp1965 = -1;
                            goto $l1963;
                            $l1963:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1966));
                            s1966 = NULL;
                            switch ($tmp1965) {
                                case -1: goto $l1976;
                            }
                            $l1976:;
                        }
                        goto $l1955;
                        $l1956:;
                    }
                    $tmp1947 = -1;
                    goto $l1945;
                    $l1945:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$531$171948));
                    Iter$531$171948 = NULL;
                    switch ($tmp1947) {
                        case -1: goto $l1977;
                    }
                    $l1977:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1978, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1935, $tmp1978);
                panda$core$String* $tmp1981 = panda$core$MutableString$finish$R$panda$core$String(result1935);
                $tmp1980 = $tmp1981;
                $tmp1979 = $tmp1980;
                $returnValue1299 = $tmp1979;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1979));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1980));
                $tmp1934 = 0;
                goto $l1932;
                $l1982:;
                $tmp1291 = 28;
                goto $l1289;
                $l1983:;
                return $returnValue1299;
            }
            $l1932:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1935));
            result1935 = NULL;
            switch ($tmp1934) {
                case 0: goto $l1982;
            }
            $l1985:;
        }
        }
        else {
        panda$core$Bit $tmp1986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1986.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1988 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 16));
            value1987 = *$tmp1988;
            panda$collections$ImmutableArray** $tmp1990 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91292->$data + 24));
            whens1989 = *$tmp1990;
            panda$collections$ImmutableArray** $tmp1992 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91292->$data + 32));
            other1991 = *$tmp1992;
            int $tmp1995;
            {
                panda$core$MutableString* $tmp1999 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp2003 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2002, ((panda$core$Object*) value1987));
                $tmp2001 = $tmp2003;
                panda$core$String* $tmp2005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2001, &$s2004);
                $tmp2000 = $tmp2005;
                panda$core$MutableString$init$panda$core$String($tmp1999, $tmp2000);
                $tmp1998 = $tmp1999;
                $tmp1997 = $tmp1998;
                result1996 = $tmp1997;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1997));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1998));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2000));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2001));
                {
                    int $tmp2008;
                    {
                        ITable* $tmp2012 = ((panda$collections$Iterable*) whens1989)->$class->itable;
                        while ($tmp2012->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2012 = $tmp2012->next;
                        }
                        $fn2014 $tmp2013 = $tmp2012->methods[0];
                        panda$collections$Iterator* $tmp2015 = $tmp2013(((panda$collections$Iterable*) whens1989));
                        $tmp2011 = $tmp2015;
                        $tmp2010 = $tmp2011;
                        Iter$538$172009 = $tmp2010;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2010));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2011));
                        $l2016:;
                        ITable* $tmp2019 = Iter$538$172009->$class->itable;
                        while ($tmp2019->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2019 = $tmp2019->next;
                        }
                        $fn2021 $tmp2020 = $tmp2019->methods[0];
                        panda$core$Bit $tmp2022 = $tmp2020(Iter$538$172009);
                        panda$core$Bit $tmp2023 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2022);
                        bool $tmp2018 = $tmp2023.value;
                        if (!$tmp2018) goto $l2017;
                        {
                            int $tmp2026;
                            {
                                ITable* $tmp2030 = Iter$538$172009->$class->itable;
                                while ($tmp2030->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2030 = $tmp2030->next;
                                }
                                $fn2032 $tmp2031 = $tmp2030->methods[1];
                                panda$core$Object* $tmp2033 = $tmp2031(Iter$538$172009);
                                $tmp2029 = $tmp2033;
                                $tmp2028 = ((org$pandalanguage$pandac$IRNode*) $tmp2029);
                                w2027 = $tmp2028;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2028));
                                panda$core$Panda$unref$panda$core$Object($tmp2029);
                                panda$core$String* $tmp2036 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w2027), &$s2035);
                                $tmp2034 = $tmp2036;
                                panda$core$MutableString$append$panda$core$String(result1996, $tmp2034);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2034));
                            }
                            $tmp2026 = -1;
                            goto $l2024;
                            $l2024:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w2027));
                            w2027 = NULL;
                            switch ($tmp2026) {
                                case -1: goto $l2037;
                            }
                            $l2037:;
                        }
                        goto $l2016;
                        $l2017:;
                    }
                    $tmp2008 = -1;
                    goto $l2006;
                    $l2006:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$538$172009));
                    Iter$538$172009 = NULL;
                    switch ($tmp2008) {
                        case -1: goto $l2038;
                    }
                    $l2038:;
                }
                if (((panda$core$Bit) { other1991 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1996, &$s2039);
                    {
                        int $tmp2042;
                        {
                            ITable* $tmp2046 = ((panda$collections$Iterable*) other1991)->$class->itable;
                            while ($tmp2046->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp2046 = $tmp2046->next;
                            }
                            $fn2048 $tmp2047 = $tmp2046->methods[0];
                            panda$collections$Iterator* $tmp2049 = $tmp2047(((panda$collections$Iterable*) other1991));
                            $tmp2045 = $tmp2049;
                            $tmp2044 = $tmp2045;
                            Iter$543$212043 = $tmp2044;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2044));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2045));
                            $l2050:;
                            ITable* $tmp2053 = Iter$543$212043->$class->itable;
                            while ($tmp2053->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2053 = $tmp2053->next;
                            }
                            $fn2055 $tmp2054 = $tmp2053->methods[0];
                            panda$core$Bit $tmp2056 = $tmp2054(Iter$543$212043);
                            panda$core$Bit $tmp2057 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2056);
                            bool $tmp2052 = $tmp2057.value;
                            if (!$tmp2052) goto $l2051;
                            {
                                int $tmp2060;
                                {
                                    ITable* $tmp2064 = Iter$543$212043->$class->itable;
                                    while ($tmp2064->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp2064 = $tmp2064->next;
                                    }
                                    $fn2066 $tmp2065 = $tmp2064->methods[1];
                                    panda$core$Object* $tmp2067 = $tmp2065(Iter$543$212043);
                                    $tmp2063 = $tmp2067;
                                    $tmp2062 = ((org$pandalanguage$pandac$IRNode*) $tmp2063);
                                    s2061 = $tmp2062;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2062));
                                    panda$core$Panda$unref$panda$core$Object($tmp2063);
                                    panda$core$String* $tmp2070 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2061), &$s2069);
                                    $tmp2068 = $tmp2070;
                                    panda$core$MutableString$append$panda$core$String(result1996, $tmp2068);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2068));
                                }
                                $tmp2060 = -1;
                                goto $l2058;
                                $l2058:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2061));
                                s2061 = NULL;
                                switch ($tmp2060) {
                                    case -1: goto $l2071;
                                }
                                $l2071:;
                            }
                            goto $l2050;
                            $l2051:;
                        }
                        $tmp2042 = -1;
                        goto $l2040;
                        $l2040:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$543$212043));
                        Iter$543$212043 = NULL;
                        switch ($tmp2042) {
                            case -1: goto $l2072;
                        }
                        $l2072:;
                    }
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2073, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1996, $tmp2073);
                panda$core$String* $tmp2076 = panda$core$MutableString$finish$R$panda$core$String(result1996);
                $tmp2075 = $tmp2076;
                $tmp2074 = $tmp2075;
                $returnValue1299 = $tmp2074;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2074));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2075));
                $tmp1995 = 0;
                goto $l1993;
                $l2077:;
                $tmp1291 = 29;
                goto $l1289;
                $l2078:;
                return $returnValue1299;
            }
            $l1993:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1996));
            result1996 = NULL;
            switch ($tmp1995) {
                case 0: goto $l2077;
            }
            $l2080:;
        }
        }
        else {
        panda$core$Bit $tmp2081 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp2081.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2083 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 24));
            target2082 = *$tmp2083;
            org$pandalanguage$pandac$MethodRef** $tmp2085 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$427_91292->$data + 32));
            m2084 = *$tmp2085;
            if (((panda$core$Bit) { target2082 != NULL }).value) {
            {
                panda$core$String* $tmp2092 = (($fn2091) target2082->$class->vtable[0])(target2082);
                $tmp2090 = $tmp2092;
                panda$core$String* $tmp2094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2090, &$s2093);
                $tmp2089 = $tmp2094;
                panda$core$String* $tmp2095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2089, ((org$pandalanguage$pandac$Symbol*) m2084->value)->name);
                $tmp2088 = $tmp2095;
                panda$core$String* $tmp2097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2088, &$s2096);
                $tmp2087 = $tmp2097;
                $tmp2086 = $tmp2087;
                $returnValue1299 = $tmp2086;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2086));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2087));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2088));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2089));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2090));
                $tmp1291 = 30;
                goto $l1289;
                $l2098:;
                return $returnValue1299;
            }
            }
            $tmp2100 = ((org$pandalanguage$pandac$Symbol*) m2084->value)->name;
            $returnValue1299 = $tmp2100;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2100));
            $tmp1291 = 31;
            goto $l1289;
            $l2101:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp2103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp2103.value) {
        {
            panda$core$UInt64* $tmp2105 = ((panda$core$UInt64*) ((char*) $match$427_91292->$data + 24));
            value2104 = *$tmp2105;
            panda$core$UInt64$wrapper* $tmp2110;
            $tmp2110 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
            $tmp2110->value = value2104;
            $tmp2109 = ((panda$core$Object*) $tmp2110);
            panda$core$String* $tmp2111 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2108, $tmp2109);
            $tmp2107 = $tmp2111;
            $tmp2106 = $tmp2107;
            $returnValue1299 = $tmp2106;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2106));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2107));
            panda$core$Panda$unref$panda$core$Object($tmp2109);
            $tmp1291 = 32;
            goto $l1289;
            $l2112:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp2114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp2114.value) {
        {
            $tmp2115 = &$s2116;
            $returnValue1299 = $tmp2115;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2115));
            $tmp1291 = 33;
            goto $l1289;
            $l2117:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp2119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp2119.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2121 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$427_91292->$data + 16));
            op2120 = *$tmp2121;
            org$pandalanguage$pandac$IRNode** $tmp2123 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 24));
            base2122 = *$tmp2123;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2130;
            $tmp2130 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp2130->value = op2120;
            $tmp2129 = ((panda$core$Object*) $tmp2130);
            panda$core$String* $tmp2132 = (($fn2131) $tmp2129->$class->vtable[0])($tmp2129);
            $tmp2128 = $tmp2132;
            panda$core$String* $tmp2134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2128, &$s2133);
            $tmp2127 = $tmp2134;
            panda$core$String* $tmp2135 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2127, ((panda$core$Object*) base2122));
            $tmp2126 = $tmp2135;
            panda$core$String* $tmp2137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2126, &$s2136);
            $tmp2125 = $tmp2137;
            $tmp2124 = $tmp2125;
            $returnValue1299 = $tmp2124;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2124));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2125));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2126));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2127));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2128));
            panda$core$Panda$unref$panda$core$Object($tmp2129);
            $tmp1291 = 34;
            goto $l1289;
            $l2138:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp2140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2140.value) {
        {
            panda$core$String** $tmp2142 = ((panda$core$String**) ((char*) $match$427_91292->$data + 16));
            label2141 = *$tmp2142;
            org$pandalanguage$pandac$IRNode** $tmp2144 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 24));
            target2143 = *$tmp2144;
            org$pandalanguage$pandac$IRNode** $tmp2146 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 32));
            list2145 = *$tmp2146;
            panda$collections$ImmutableArray** $tmp2148 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91292->$data + 40));
            statements2147 = *$tmp2148;
            int $tmp2151;
            {
                panda$core$MutableString* $tmp2155 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2155);
                $tmp2154 = $tmp2155;
                $tmp2153 = $tmp2154;
                result2152 = $tmp2153;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2153));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2154));
                if (((panda$core$Bit) { label2141 != NULL }).value) {
                {
                    panda$core$String* $tmp2158 = panda$core$String$convert$R$panda$core$String(label2141);
                    $tmp2157 = $tmp2158;
                    panda$core$String* $tmp2160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2157, &$s2159);
                    $tmp2156 = $tmp2160;
                    panda$core$MutableString$append$panda$core$String(result2152, $tmp2156);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2156));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2157));
                }
                }
                panda$core$String* $tmp2166 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2165, ((panda$core$Object*) target2143));
                $tmp2164 = $tmp2166;
                panda$core$String* $tmp2168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2164, &$s2167);
                $tmp2163 = $tmp2168;
                panda$core$String* $tmp2169 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2163, ((panda$core$Object*) list2145));
                $tmp2162 = $tmp2169;
                panda$core$String* $tmp2171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2162, &$s2170);
                $tmp2161 = $tmp2171;
                panda$core$MutableString$append$panda$core$String(result2152, $tmp2161);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2161));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2162));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2163));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2164));
                {
                    int $tmp2174;
                    {
                        ITable* $tmp2178 = ((panda$collections$Iterable*) statements2147)->$class->itable;
                        while ($tmp2178->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2178 = $tmp2178->next;
                        }
                        $fn2180 $tmp2179 = $tmp2178->methods[0];
                        panda$collections$Iterator* $tmp2181 = $tmp2179(((panda$collections$Iterable*) statements2147));
                        $tmp2177 = $tmp2181;
                        $tmp2176 = $tmp2177;
                        Iter$566$172175 = $tmp2176;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2176));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2177));
                        $l2182:;
                        ITable* $tmp2185 = Iter$566$172175->$class->itable;
                        while ($tmp2185->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2185 = $tmp2185->next;
                        }
                        $fn2187 $tmp2186 = $tmp2185->methods[0];
                        panda$core$Bit $tmp2188 = $tmp2186(Iter$566$172175);
                        panda$core$Bit $tmp2189 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2188);
                        bool $tmp2184 = $tmp2189.value;
                        if (!$tmp2184) goto $l2183;
                        {
                            int $tmp2192;
                            {
                                ITable* $tmp2196 = Iter$566$172175->$class->itable;
                                while ($tmp2196->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2196 = $tmp2196->next;
                                }
                                $fn2198 $tmp2197 = $tmp2196->methods[1];
                                panda$core$Object* $tmp2199 = $tmp2197(Iter$566$172175);
                                $tmp2195 = $tmp2199;
                                $tmp2194 = ((org$pandalanguage$pandac$IRNode*) $tmp2195);
                                s2193 = $tmp2194;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2194));
                                panda$core$Panda$unref$panda$core$Object($tmp2195);
                                panda$core$String* $tmp2202 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2193), &$s2201);
                                $tmp2200 = $tmp2202;
                                panda$core$MutableString$append$panda$core$String(result2152, $tmp2200);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2200));
                            }
                            $tmp2192 = -1;
                            goto $l2190;
                            $l2190:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2193));
                            s2193 = NULL;
                            switch ($tmp2192) {
                                case -1: goto $l2203;
                            }
                            $l2203:;
                        }
                        goto $l2182;
                        $l2183:;
                    }
                    $tmp2174 = -1;
                    goto $l2172;
                    $l2172:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$566$172175));
                    Iter$566$172175 = NULL;
                    switch ($tmp2174) {
                        case -1: goto $l2204;
                    }
                    $l2204:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2205, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2152, $tmp2205);
                panda$core$String* $tmp2208 = panda$core$MutableString$finish$R$panda$core$String(result2152);
                $tmp2207 = $tmp2208;
                $tmp2206 = $tmp2207;
                $returnValue1299 = $tmp2206;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2206));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2207));
                $tmp2151 = 0;
                goto $l2149;
                $l2209:;
                $tmp1291 = 35;
                goto $l1289;
                $l2210:;
                return $returnValue1299;
            }
            $l2149:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2152));
            result2152 = NULL;
            switch ($tmp2151) {
                case 0: goto $l2209;
            }
            $l2212:;
        }
        }
        else {
        panda$core$Bit $tmp2213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2213.value) {
        {
            panda$core$Real64* $tmp2215 = ((panda$core$Real64*) ((char*) $match$427_91292->$data + 24));
            value2214 = *$tmp2215;
            panda$core$String* $tmp2218 = panda$core$Real64$convert$R$panda$core$String(value2214);
            $tmp2217 = $tmp2218;
            $tmp2216 = $tmp2217;
            $returnValue1299 = $tmp2216;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2216));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2217));
            $tmp1291 = 36;
            goto $l1289;
            $l2219:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp2221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2221.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2223 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 16));
            value2222 = *$tmp2223;
            if (((panda$core$Bit) { value2222 != NULL }).value) {
            {
                panda$core$String* $tmp2228 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2227, ((panda$core$Object*) value2222));
                $tmp2226 = $tmp2228;
                panda$core$String* $tmp2230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2226, &$s2229);
                $tmp2225 = $tmp2230;
                $tmp2224 = $tmp2225;
                $returnValue1299 = $tmp2224;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2224));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2225));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2226));
                $tmp1291 = 37;
                goto $l1289;
                $l2231:;
                return $returnValue1299;
            }
            }
            $tmp2233 = &$s2234;
            $returnValue1299 = $tmp2233;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2233));
            $tmp1291 = 38;
            goto $l1289;
            $l2235:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp2237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2237.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2239 = ((org$pandalanguage$pandac$Type**) ((char*) $match$427_91292->$data + 16));
            type2238 = *$tmp2239;
            panda$core$Int64* $tmp2241 = ((panda$core$Int64*) ((char*) $match$427_91292->$data + 24));
            id2240 = *$tmp2241;
            panda$core$Int64$wrapper* $tmp2247;
            $tmp2247 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2247->value = id2240;
            $tmp2246 = ((panda$core$Object*) $tmp2247);
            panda$core$String* $tmp2248 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2245, $tmp2246);
            $tmp2244 = $tmp2248;
            panda$core$String* $tmp2250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2244, &$s2249);
            $tmp2243 = $tmp2250;
            $tmp2242 = $tmp2243;
            $returnValue1299 = $tmp2242;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2242));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2243));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2244));
            panda$core$Panda$unref$panda$core$Object($tmp2246);
            $tmp1291 = 39;
            goto $l1289;
            $l2251:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp2253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp2253.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2255 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 0));
            base2254 = *$tmp2255;
            panda$core$Int64* $tmp2257 = ((panda$core$Int64*) ((char*) $match$427_91292->$data + 8));
            id2256 = *$tmp2257;
            panda$core$Int64$wrapper* $tmp2265;
            $tmp2265 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2265->value = id2256;
            $tmp2264 = ((panda$core$Object*) $tmp2265);
            panda$core$String* $tmp2266 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2263, $tmp2264);
            $tmp2262 = $tmp2266;
            panda$core$String* $tmp2268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2262, &$s2267);
            $tmp2261 = $tmp2268;
            panda$core$String* $tmp2269 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2261, ((panda$core$Object*) base2254));
            $tmp2260 = $tmp2269;
            panda$core$String* $tmp2271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2260, &$s2270);
            $tmp2259 = $tmp2271;
            $tmp2258 = $tmp2259;
            $returnValue1299 = $tmp2258;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2258));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2259));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2260));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2261));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2262));
            panda$core$Panda$unref$panda$core$Object($tmp2264);
            $tmp1291 = 40;
            goto $l1289;
            $l2272:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp2274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp2274.value) {
        {
            $tmp2275 = &$s2276;
            $returnValue1299 = $tmp2275;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2275));
            $tmp1291 = 41;
            goto $l1289;
            $l2277:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp2279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2279.value) {
        {
            panda$core$String** $tmp2281 = ((panda$core$String**) ((char*) $match$427_91292->$data + 16));
            str2280 = *$tmp2281;
            $tmp2282 = str2280;
            $returnValue1299 = $tmp2282;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2282));
            $tmp1291 = 42;
            goto $l1289;
            $l2283:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp2285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp2285.value) {
        {
            $tmp2286 = &$s2287;
            $returnValue1299 = $tmp2286;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2286));
            $tmp1291 = 43;
            goto $l1289;
            $l2288:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp2290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp2290.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2292 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 16));
            test2291 = *$tmp2292;
            org$pandalanguage$pandac$IRNode** $tmp2294 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 24));
            ifTrue2293 = *$tmp2294;
            org$pandalanguage$pandac$IRNode** $tmp2296 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 32));
            ifFalse2295 = *$tmp2296;
            panda$core$String* $tmp2305 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2304, ((panda$core$Object*) test2291));
            $tmp2303 = $tmp2305;
            panda$core$String* $tmp2307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2303, &$s2306);
            $tmp2302 = $tmp2307;
            panda$core$String* $tmp2308 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2302, ((panda$core$Object*) ifTrue2293));
            $tmp2301 = $tmp2308;
            panda$core$String* $tmp2310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2301, &$s2309);
            $tmp2300 = $tmp2310;
            panda$core$String* $tmp2311 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2300, ((panda$core$Object*) ifFalse2295));
            $tmp2299 = $tmp2311;
            panda$core$String* $tmp2313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2299, &$s2312);
            $tmp2298 = $tmp2313;
            $tmp2297 = $tmp2298;
            $returnValue1299 = $tmp2297;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2297));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2298));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2299));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2300));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2301));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2302));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2303));
            $tmp1291 = 44;
            goto $l1289;
            $l2314:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp2316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp2316.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2318 = ((org$pandalanguage$pandac$Type**) ((char*) $match$427_91292->$data + 16));
            type2317 = *$tmp2318;
            panda$core$String* $tmp2321 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type2317);
            $tmp2320 = $tmp2321;
            $tmp2319 = $tmp2320;
            $returnValue1299 = $tmp2319;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2319));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2320));
            $tmp1291 = 45;
            goto $l1289;
            $l2322:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp2324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp2324.value) {
        {
            panda$core$String** $tmp2326 = ((panda$core$String**) ((char*) $match$427_91292->$data + 16));
            name2325 = *$tmp2326;
            $tmp2327 = name2325;
            $returnValue1299 = $tmp2327;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2327));
            $tmp1291 = 46;
            goto $l1289;
            $l2328:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp2330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp2330.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2332 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 24));
            base2331 = *$tmp2332;
            panda$collections$ImmutableArray** $tmp2334 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91292->$data + 32));
            args2333 = *$tmp2334;
            panda$core$String* $tmp2341 = (($fn2340) base2331->$class->vtable[0])(base2331);
            $tmp2339 = $tmp2341;
            panda$core$String* $tmp2343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2339, &$s2342);
            $tmp2338 = $tmp2343;
            ITable* $tmp2345 = ((panda$collections$ListView*) args2333)->$class->itable;
            while ($tmp2345->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2345 = $tmp2345->next;
            }
            $fn2347 $tmp2346 = $tmp2345->methods[1];
            panda$core$String* $tmp2348 = $tmp2346(((panda$collections$ListView*) args2333));
            $tmp2344 = $tmp2348;
            panda$core$String* $tmp2349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2338, $tmp2344);
            $tmp2337 = $tmp2349;
            panda$core$String* $tmp2351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2337, &$s2350);
            $tmp2336 = $tmp2351;
            $tmp2335 = $tmp2336;
            $returnValue1299 = $tmp2335;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2335));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2336));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2337));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2344));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2338));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2339));
            $tmp1291 = 47;
            goto $l1289;
            $l2352:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp2354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp2354.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2356 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 24));
            target2355 = *$tmp2356;
            panda$collections$ImmutableArray** $tmp2358 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91292->$data + 32));
            methods2357 = *$tmp2358;
            panda$collections$ImmutableArray** $tmp2360 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91292->$data + 40));
            args2359 = *$tmp2360;
            panda$core$String* $tmp2369 = (($fn2368) target2355->$class->vtable[0])(target2355);
            $tmp2367 = $tmp2369;
            panda$core$String* $tmp2371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2367, &$s2370);
            $tmp2366 = $tmp2371;
            panda$core$Object* $tmp2373 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2357, ((panda$core$Int64) { 0 }));
            $tmp2372 = $tmp2373;
            panda$core$String* $tmp2374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2366, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2372)->value)->name);
            $tmp2365 = $tmp2374;
            panda$core$String* $tmp2376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2365, &$s2375);
            $tmp2364 = $tmp2376;
            ITable* $tmp2378 = ((panda$collections$ListView*) args2359)->$class->itable;
            while ($tmp2378->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2378 = $tmp2378->next;
            }
            $fn2380 $tmp2379 = $tmp2378->methods[1];
            panda$core$String* $tmp2381 = $tmp2379(((panda$collections$ListView*) args2359));
            $tmp2377 = $tmp2381;
            panda$core$String* $tmp2382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2364, $tmp2377);
            $tmp2363 = $tmp2382;
            panda$core$String* $tmp2384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2363, &$s2383);
            $tmp2362 = $tmp2384;
            $tmp2361 = $tmp2362;
            $returnValue1299 = $tmp2361;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2361));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2362));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2363));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2377));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2364));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2365));
            panda$core$Panda$unref$panda$core$Object($tmp2372);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2366));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2367));
            $tmp1291 = 48;
            goto $l1289;
            $l2385:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp2387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2387.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2389 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 16));
            target2388 = *$tmp2389;
            panda$collections$ImmutableArray** $tmp2391 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91292->$data + 24));
            methods2390 = *$tmp2391;
            panda$core$String* $tmp2398 = (($fn2397) target2388->$class->vtable[0])(target2388);
            $tmp2396 = $tmp2398;
            panda$core$String* $tmp2400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2396, &$s2399);
            $tmp2395 = $tmp2400;
            panda$core$Object* $tmp2402 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2390, ((panda$core$Int64) { 0 }));
            $tmp2401 = $tmp2402;
            panda$core$String* $tmp2403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2395, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2401)->value)->name);
            $tmp2394 = $tmp2403;
            panda$core$String* $tmp2405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2394, &$s2404);
            $tmp2393 = $tmp2405;
            $tmp2392 = $tmp2393;
            $returnValue1299 = $tmp2392;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2392));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2393));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2394));
            panda$core$Panda$unref$panda$core$Object($tmp2401);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2395));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2396));
            $tmp1291 = 49;
            goto $l1289;
            $l2406:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp2408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp2408.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2410 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 16));
            start2409 = *$tmp2410;
            org$pandalanguage$pandac$IRNode** $tmp2412 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 24));
            end2411 = *$tmp2412;
            panda$core$Bit* $tmp2414 = ((panda$core$Bit*) ((char*) $match$427_91292->$data + 32));
            inclusive2413 = *$tmp2414;
            org$pandalanguage$pandac$IRNode** $tmp2416 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 33));
            step2415 = *$tmp2416;
            int $tmp2419;
            {
                panda$core$MutableString* $tmp2423 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2423);
                $tmp2422 = $tmp2423;
                $tmp2421 = $tmp2422;
                result2420 = $tmp2421;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2421));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2422));
                if (((panda$core$Bit) { start2409 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2420, ((panda$core$Object*) start2409));
                }
                }
                if (inclusive2413.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2420, &$s2424);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result2420, &$s2425);
                }
                }
                if (((panda$core$Bit) { end2411 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2420, ((panda$core$Object*) end2411));
                }
                }
                if (((panda$core$Bit) { step2415 != NULL }).value) {
                {
                    panda$core$String* $tmp2429 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2428, ((panda$core$Object*) step2415));
                    $tmp2427 = $tmp2429;
                    panda$core$String* $tmp2431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2427, &$s2430);
                    $tmp2426 = $tmp2431;
                    panda$core$MutableString$append$panda$core$String(result2420, $tmp2426);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2426));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2427));
                }
                }
                panda$core$String* $tmp2434 = panda$core$MutableString$finish$R$panda$core$String(result2420);
                $tmp2433 = $tmp2434;
                $tmp2432 = $tmp2433;
                $returnValue1299 = $tmp2432;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2432));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2433));
                $tmp2419 = 0;
                goto $l2417;
                $l2435:;
                $tmp1291 = 50;
                goto $l1289;
                $l2436:;
                return $returnValue1299;
            }
            $l2417:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2420));
            result2420 = NULL;
            switch ($tmp2419) {
                case 0: goto $l2435;
            }
            $l2438:;
        }
        }
        else {
        panda$core$Bit $tmp2439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp2439.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp2441 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$427_91292->$data + 16));
            kind2440 = *$tmp2441;
            panda$collections$ImmutableArray** $tmp2443 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91292->$data + 24));
            decls2442 = *$tmp2443;
            int $tmp2446;
            {
                panda$core$MutableString* $tmp2450 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2450);
                $tmp2449 = $tmp2450;
                $tmp2448 = $tmp2449;
                result2447 = $tmp2448;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2448));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2449));
                {
                    $match$620_172451 = kind2440;
                    panda$core$Bit $tmp2452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$620_172451.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp2452.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2447, &$s2453);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$620_172451.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp2454.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2447, &$s2455);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$620_172451.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp2456.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2447, &$s2457);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$620_172451.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp2458.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2447, &$s2459);
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp2461 = ((panda$collections$ListView*) decls2442)->$class->itable;
                while ($tmp2461->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2461 = $tmp2461->next;
                }
                $fn2463 $tmp2462 = $tmp2461->methods[1];
                panda$core$String* $tmp2464 = $tmp2462(((panda$collections$ListView*) decls2442));
                $tmp2460 = $tmp2464;
                panda$core$MutableString$append$panda$core$String(result2447, $tmp2460);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2460));
                panda$core$String* $tmp2467 = panda$core$MutableString$finish$R$panda$core$String(result2447);
                $tmp2466 = $tmp2467;
                $tmp2465 = $tmp2466;
                $returnValue1299 = $tmp2465;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2465));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2466));
                $tmp2446 = 0;
                goto $l2444;
                $l2468:;
                $tmp1291 = 51;
                goto $l1289;
                $l2469:;
                return $returnValue1299;
            }
            $l2444:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2447));
            result2447 = NULL;
            switch ($tmp2446) {
                case 0: goto $l2468;
            }
            $l2471:;
        }
        }
        else {
        panda$core$Bit $tmp2472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp2472.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2474 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$427_91292->$data + 16));
            variable2473 = *$tmp2474;
            $tmp2475 = ((org$pandalanguage$pandac$Symbol*) variable2473)->name;
            $returnValue1299 = $tmp2475;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2475));
            $tmp1291 = 52;
            goto $l1289;
            $l2476:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp2478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp2478.value) {
        {
            panda$collections$ImmutableArray** $tmp2480 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91292->$data + 16));
            tests2479 = *$tmp2480;
            panda$collections$ImmutableArray** $tmp2482 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91292->$data + 24));
            statements2481 = *$tmp2482;
            ITable* $tmp2490 = ((panda$collections$ListView*) tests2479)->$class->itable;
            while ($tmp2490->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2490 = $tmp2490->next;
            }
            $fn2492 $tmp2491 = $tmp2490->methods[1];
            panda$core$String* $tmp2493 = $tmp2491(((panda$collections$ListView*) tests2479));
            $tmp2489 = $tmp2493;
            panda$core$String* $tmp2494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2488, $tmp2489);
            $tmp2487 = $tmp2494;
            panda$core$String* $tmp2496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2487, &$s2495);
            $tmp2486 = $tmp2496;
            ITable* $tmp2499 = ((panda$collections$ListView*) statements2481)->$class->itable;
            while ($tmp2499->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2499 = $tmp2499->next;
            }
            $fn2501 $tmp2500 = $tmp2499->methods[2];
            panda$core$String* $tmp2502 = $tmp2500(((panda$collections$ListView*) statements2481), &$s2498);
            $tmp2497 = $tmp2502;
            panda$core$String* $tmp2503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2486, $tmp2497);
            $tmp2485 = $tmp2503;
            panda$core$String* $tmp2505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2485, &$s2504);
            $tmp2484 = $tmp2505;
            $tmp2483 = $tmp2484;
            $returnValue1299 = $tmp2483;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2483));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2484));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2485));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2497));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2486));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2487));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2489));
            $tmp1291 = 53;
            goto $l1289;
            $l2506:;
            return $returnValue1299;
        }
        }
        else {
        panda$core$Bit $tmp2508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91292->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp2508.value) {
        {
            panda$core$String** $tmp2510 = ((panda$core$String**) ((char*) $match$427_91292->$data + 16));
            label2509 = *$tmp2510;
            org$pandalanguage$pandac$IRNode** $tmp2512 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91292->$data + 24));
            test2511 = *$tmp2512;
            panda$collections$ImmutableArray** $tmp2514 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91292->$data + 32));
            statements2513 = *$tmp2514;
            int $tmp2517;
            {
                panda$core$MutableString* $tmp2521 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2521);
                $tmp2520 = $tmp2521;
                $tmp2519 = $tmp2520;
                result2518 = $tmp2519;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2519));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2520));
                if (((panda$core$Bit) { label2509 != NULL }).value) {
                {
                    panda$core$String* $tmp2524 = panda$core$String$convert$R$panda$core$String(label2509);
                    $tmp2523 = $tmp2524;
                    panda$core$String* $tmp2526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2523, &$s2525);
                    $tmp2522 = $tmp2526;
                    panda$core$MutableString$append$panda$core$String(result2518, $tmp2522);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2522));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2523));
                }
                }
                panda$core$String* $tmp2530 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2529, ((panda$core$Object*) test2511));
                $tmp2528 = $tmp2530;
                panda$core$String* $tmp2532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2528, &$s2531);
                $tmp2527 = $tmp2532;
                panda$core$MutableString$append$panda$core$String(result2518, $tmp2527);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2527));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2528));
                {
                    int $tmp2535;
                    {
                        ITable* $tmp2539 = ((panda$collections$Iterable*) statements2513)->$class->itable;
                        while ($tmp2539->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2539 = $tmp2539->next;
                        }
                        $fn2541 $tmp2540 = $tmp2539->methods[0];
                        panda$collections$Iterator* $tmp2542 = $tmp2540(((panda$collections$Iterable*) statements2513));
                        $tmp2538 = $tmp2542;
                        $tmp2537 = $tmp2538;
                        Iter$638$172536 = $tmp2537;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2537));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2538));
                        $l2543:;
                        ITable* $tmp2546 = Iter$638$172536->$class->itable;
                        while ($tmp2546->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2546 = $tmp2546->next;
                        }
                        $fn2548 $tmp2547 = $tmp2546->methods[0];
                        panda$core$Bit $tmp2549 = $tmp2547(Iter$638$172536);
                        panda$core$Bit $tmp2550 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2549);
                        bool $tmp2545 = $tmp2550.value;
                        if (!$tmp2545) goto $l2544;
                        {
                            int $tmp2553;
                            {
                                ITable* $tmp2557 = Iter$638$172536->$class->itable;
                                while ($tmp2557->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2557 = $tmp2557->next;
                                }
                                $fn2559 $tmp2558 = $tmp2557->methods[1];
                                panda$core$Object* $tmp2560 = $tmp2558(Iter$638$172536);
                                $tmp2556 = $tmp2560;
                                $tmp2555 = ((org$pandalanguage$pandac$IRNode*) $tmp2556);
                                s2554 = $tmp2555;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2555));
                                panda$core$Panda$unref$panda$core$Object($tmp2556);
                                panda$core$String* $tmp2563 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2554), &$s2562);
                                $tmp2561 = $tmp2563;
                                panda$core$MutableString$append$panda$core$String(result2518, $tmp2561);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2561));
                            }
                            $tmp2553 = -1;
                            goto $l2551;
                            $l2551:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2554));
                            s2554 = NULL;
                            switch ($tmp2553) {
                                case -1: goto $l2564;
                            }
                            $l2564:;
                        }
                        goto $l2543;
                        $l2544:;
                    }
                    $tmp2535 = -1;
                    goto $l2533;
                    $l2533:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$638$172536));
                    Iter$638$172536 = NULL;
                    switch ($tmp2535) {
                        case -1: goto $l2565;
                    }
                    $l2565:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2566, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2518, $tmp2566);
                panda$core$String* $tmp2569 = panda$core$MutableString$finish$R$panda$core$String(result2518);
                $tmp2568 = $tmp2569;
                $tmp2567 = $tmp2568;
                $returnValue1299 = $tmp2567;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2567));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2568));
                $tmp2517 = 0;
                goto $l2515;
                $l2570:;
                $tmp1291 = 54;
                goto $l1289;
                $l2571:;
                return $returnValue1299;
            }
            $l2515:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2518));
            result2518 = NULL;
            switch ($tmp2517) {
                case 0: goto $l2570;
            }
            $l2573:;
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
        }
        }
        }
        }
        }
    }
    $tmp1291 = -1;
    goto $l1289;
    $l1289:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1293));
    switch ($tmp1291) {
        case 32: goto $l2112;
        case 44: goto $l2314;
        case 8: goto $l1518;
        case 43: goto $l2288;
        case 47: goto $l2352;
        case 29: goto $l2078;
        case 18: goto $l1691;
        case 26: goto $l1913;
        case 15: goto $l1656;
        case 11: goto $l1580;
        case 36: goto $l2219;
        case 49: goto $l2406;
        case 33: goto $l2117;
        case 45: goto $l2322;
        case 9: goto $l1541;
        case 0: goto $l1312;
        case 34: goto $l2138;
        case 16: goto $l1668;
        case 27: goto $l1925;
        case 41: goto $l2277;
        case 30: goto $l2098;
        case 38: goto $l2235;
        case 42: goto $l2283;
        case 5: goto $l1413;
        case 39: goto $l2251;
        case 23: goto $l1826;
        case 14: goto $l1648;
        case 22: goto $l1807;
        case 20: goto $l1762;
        case 21: goto $l1788;
        case 52: goto $l2476;
        case 12: goto $l1588;
        case 48: goto $l2385;
        case 2: goto $l1326;
        case 31: goto $l2101;
        case 53: goto $l2506;
        case 13: goto $l1616;
        case 4: goto $l1362;
        case 28: goto $l1983;
        case 19: goto $l1697;
        case 17: goto $l1672;
        case 50: goto $l2436;
        case 37: goto $l2231;
        case 51: goto $l2469;
        case 7: goto $l1514;
        case 6: goto $l1501;
        case 10: goto $l1566;
        case 1: goto $l1321;
        case 3: goto $l1354;
        case 24: goto $l1892;
        case 46: goto $l2328;
        case 25: goto $l1901;
        case 35: goto $l2210;
        case 40: goto $l2272;
        case 54: goto $l2571;
        case -1: goto $l2574;
    }
    $l2574:;
}
void org$pandalanguage$pandac$IRNode$cleanup(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$5_12581 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2582;
    org$pandalanguage$pandac$Position _f02584;
    org$pandalanguage$pandac$IRNode* _f12586 = NULL;
    org$pandalanguage$pandac$IRNode* _f22588 = NULL;
    org$pandalanguage$pandac$Position _f02591;
    org$pandalanguage$pandac$Type* _f12593 = NULL;
    org$pandalanguage$pandac$Position _f02596;
    org$pandalanguage$pandac$Type* _f12598 = NULL;
    org$pandalanguage$pandac$IRNode* _f22600 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f32602;
    org$pandalanguage$pandac$IRNode* _f42604 = NULL;
    org$pandalanguage$pandac$Position _f02607;
    org$pandalanguage$pandac$Type* _f12609 = NULL;
    panda$core$Bit _f22611;
    org$pandalanguage$pandac$Position _f02614;
    panda$collections$ImmutableArray* _f12616 = NULL;
    org$pandalanguage$pandac$Position _f02619;
    panda$collections$ImmutableArray* _f12621 = NULL;
    panda$collections$ImmutableArray* _f22623 = NULL;
    org$pandalanguage$pandac$Position _f02626;
    panda$core$String* _f12628 = NULL;
    org$pandalanguage$pandac$Position _f02631;
    org$pandalanguage$pandac$Type* _f12633 = NULL;
    org$pandalanguage$pandac$MethodRef* _f22635 = NULL;
    panda$collections$ImmutableArray* _f32637 = NULL;
    org$pandalanguage$pandac$Position _f02640;
    org$pandalanguage$pandac$IRNode* _f12642 = NULL;
    org$pandalanguage$pandac$Type* _f22644 = NULL;
    panda$core$Bit _f32646;
    org$pandalanguage$pandac$Position _f02649;
    org$pandalanguage$pandac$ChoiceEntry* _f12651 = NULL;
    org$pandalanguage$pandac$Position _f02654;
    org$pandalanguage$pandac$IRNode* _f12656 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f22658 = NULL;
    panda$core$Int64 _f32660;
    org$pandalanguage$pandac$Position _f02663;
    org$pandalanguage$pandac$Type* _f12665 = NULL;
    org$pandalanguage$pandac$IRNode* _f22667 = NULL;
    org$pandalanguage$pandac$Position _f02670;
    org$pandalanguage$pandac$Type* _f12672 = NULL;
    org$pandalanguage$pandac$Position _f02675;
    panda$core$String* _f12677 = NULL;
    org$pandalanguage$pandac$IRNode* _f02680 = NULL;
    org$pandalanguage$pandac$IRNode* _f12682 = NULL;
    org$pandalanguage$pandac$Position _f02685;
    panda$core$String* _f12687 = NULL;
    panda$collections$ImmutableArray* _f22689 = NULL;
    org$pandalanguage$pandac$IRNode* _f32691 = NULL;
    org$pandalanguage$pandac$IRNode* _f02694 = NULL;
    panda$collections$ImmutableArray* _f12696 = NULL;
    org$pandalanguage$pandac$IRNode* _f02699 = NULL;
    org$pandalanguage$pandac$IRNode* _f12701 = NULL;
    org$pandalanguage$pandac$Position _f02704;
    org$pandalanguage$pandac$Type* _f12706 = NULL;
    org$pandalanguage$pandac$IRNode* _f22708 = NULL;
    org$pandalanguage$pandac$FieldDecl* _f32710 = NULL;
    org$pandalanguage$pandac$Position _f02713;
    org$pandalanguage$pandac$IRNode* _f12715 = NULL;
    panda$collections$ImmutableArray* _f22717 = NULL;
    org$pandalanguage$pandac$IRNode* _f32719 = NULL;
    org$pandalanguage$pandac$Position _f02722;
    org$pandalanguage$pandac$Type* _f12724 = NULL;
    panda$core$UInt64 _f22726;
    org$pandalanguage$pandac$Position _f02729;
    org$pandalanguage$pandac$IRNode* _f12731 = NULL;
    org$pandalanguage$pandac$Position _f02734;
    org$pandalanguage$pandac$IRNode* _f12736 = NULL;
    org$pandalanguage$pandac$Position _f02739;
    panda$core$String* _f12741 = NULL;
    panda$collections$ImmutableArray* _f22743 = NULL;
    org$pandalanguage$pandac$Position _f02746;
    org$pandalanguage$pandac$IRNode* _f12748 = NULL;
    panda$collections$ImmutableArray* _f22750 = NULL;
    panda$collections$ImmutableArray* _f32752 = NULL;
    org$pandalanguage$pandac$Position _f02755;
    org$pandalanguage$pandac$Type* _f12757 = NULL;
    org$pandalanguage$pandac$IRNode* _f22759 = NULL;
    org$pandalanguage$pandac$MethodRef* _f32761 = NULL;
    org$pandalanguage$pandac$Position _f02764;
    org$pandalanguage$pandac$Type* _f12766 = NULL;
    panda$core$UInt64 _f22768;
    org$pandalanguage$pandac$Position _f02771;
    org$pandalanguage$pandac$Type* _f12773 = NULL;
    org$pandalanguage$pandac$Position _f02776;
    org$pandalanguage$pandac$parser$Token$Kind _f12778;
    org$pandalanguage$pandac$IRNode* _f22780 = NULL;
    org$pandalanguage$pandac$Position _f02783;
    panda$core$String* _f12785 = NULL;
    org$pandalanguage$pandac$IRNode* _f22787 = NULL;
    org$pandalanguage$pandac$IRNode* _f32789 = NULL;
    panda$collections$ImmutableArray* _f42791 = NULL;
    org$pandalanguage$pandac$Position _f02794;
    org$pandalanguage$pandac$Type* _f12796 = NULL;
    panda$core$Real64 _f22798;
    org$pandalanguage$pandac$Position _f02801;
    org$pandalanguage$pandac$IRNode* _f12803 = NULL;
    org$pandalanguage$pandac$Position _f02806;
    org$pandalanguage$pandac$Type* _f12808 = NULL;
    panda$core$Int64 _f22810;
    org$pandalanguage$pandac$IRNode* _f02813 = NULL;
    panda$core$Int64 _f12815;
    org$pandalanguage$pandac$Position _f02818;
    org$pandalanguage$pandac$Type* _f12820 = NULL;
    org$pandalanguage$pandac$Position _f02823;
    panda$core$String* _f12825 = NULL;
    org$pandalanguage$pandac$Position _f02828;
    org$pandalanguage$pandac$Type* _f12830 = NULL;
    org$pandalanguage$pandac$Position _f02833;
    org$pandalanguage$pandac$IRNode* _f12835 = NULL;
    org$pandalanguage$pandac$IRNode* _f22837 = NULL;
    org$pandalanguage$pandac$IRNode* _f32839 = NULL;
    org$pandalanguage$pandac$Position _f02842;
    org$pandalanguage$pandac$Type* _f12844 = NULL;
    org$pandalanguage$pandac$Position _f02847;
    panda$core$String* _f12849 = NULL;
    org$pandalanguage$pandac$Position _f02852;
    org$pandalanguage$pandac$Type* _f12854 = NULL;
    org$pandalanguage$pandac$IRNode* _f22856 = NULL;
    panda$collections$ImmutableArray* _f32858 = NULL;
    org$pandalanguage$pandac$Position _f02861;
    org$pandalanguage$pandac$Type* _f12863 = NULL;
    org$pandalanguage$pandac$IRNode* _f22865 = NULL;
    panda$collections$ImmutableArray* _f32867 = NULL;
    panda$collections$ImmutableArray* _f42869 = NULL;
    org$pandalanguage$pandac$Position _f02872;
    org$pandalanguage$pandac$IRNode* _f12874 = NULL;
    panda$collections$ImmutableArray* _f22876 = NULL;
    org$pandalanguage$pandac$Position _f02879;
    org$pandalanguage$pandac$IRNode* _f12881 = NULL;
    org$pandalanguage$pandac$IRNode* _f22883 = NULL;
    panda$core$Bit _f32885;
    org$pandalanguage$pandac$IRNode* _f42887 = NULL;
    org$pandalanguage$pandac$Position _f02890;
    org$pandalanguage$pandac$Variable$Kind _f12892;
    panda$collections$ImmutableArray* _f22894 = NULL;
    org$pandalanguage$pandac$Position _f02897;
    org$pandalanguage$pandac$Variable* _f12899 = NULL;
    org$pandalanguage$pandac$Position _f02902;
    panda$collections$ImmutableArray* _f12904 = NULL;
    panda$collections$ImmutableArray* _f22906 = NULL;
    org$pandalanguage$pandac$Position _f02909;
    panda$core$String* _f12911 = NULL;
    org$pandalanguage$pandac$IRNode* _f22913 = NULL;
    panda$collections$ImmutableArray* _f32915 = NULL;
    int $tmp2577;
    {
        int $tmp2580;
        {
            $tmp2582 = self;
            $match$5_12581 = $tmp2582;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2582));
            panda$core$Bit $tmp2583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp2583.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2585 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02584 = *$tmp2585;
                org$pandalanguage$pandac$IRNode** $tmp2587 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 16));
                _f12586 = *$tmp2587;
                org$pandalanguage$pandac$IRNode** $tmp2589 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 24));
                _f22588 = *$tmp2589;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12586));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22588));
            }
            }
            else {
            panda$core$Bit $tmp2590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp2590.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2592 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02591 = *$tmp2592;
                org$pandalanguage$pandac$Type** $tmp2594 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12581->$data + 16));
                _f12593 = *$tmp2594;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12593));
            }
            }
            else {
            panda$core$Bit $tmp2595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp2595.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2597 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02596 = *$tmp2597;
                org$pandalanguage$pandac$Type** $tmp2599 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12581->$data + 16));
                _f12598 = *$tmp2599;
                org$pandalanguage$pandac$IRNode** $tmp2601 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 24));
                _f22600 = *$tmp2601;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2603 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12581->$data + 32));
                _f32602 = *$tmp2603;
                org$pandalanguage$pandac$IRNode** $tmp2605 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 40));
                _f42604 = *$tmp2605;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12598));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22600));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42604));
            }
            }
            else {
            panda$core$Bit $tmp2606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp2606.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2608 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02607 = *$tmp2608;
                org$pandalanguage$pandac$Type** $tmp2610 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12581->$data + 16));
                _f12609 = *$tmp2610;
                panda$core$Bit* $tmp2612 = ((panda$core$Bit*) ((char*) $match$5_12581->$data + 24));
                _f22611 = *$tmp2612;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12609));
            }
            }
            else {
            panda$core$Bit $tmp2613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp2613.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2615 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02614 = *$tmp2615;
                panda$collections$ImmutableArray** $tmp2617 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12581->$data + 16));
                _f12616 = *$tmp2617;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12616));
            }
            }
            else {
            panda$core$Bit $tmp2618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp2618.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2620 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02619 = *$tmp2620;
                panda$collections$ImmutableArray** $tmp2622 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12581->$data + 16));
                _f12621 = *$tmp2622;
                panda$collections$ImmutableArray** $tmp2624 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12581->$data + 24));
                _f22623 = *$tmp2624;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12621));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22623));
            }
            }
            else {
            panda$core$Bit $tmp2625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp2625.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2627 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02626 = *$tmp2627;
                panda$core$String** $tmp2629 = ((panda$core$String**) ((char*) $match$5_12581->$data + 16));
                _f12628 = *$tmp2629;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12628));
            }
            }
            else {
            panda$core$Bit $tmp2630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 7 }));
            if ($tmp2630.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2632 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02631 = *$tmp2632;
                org$pandalanguage$pandac$Type** $tmp2634 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12581->$data + 16));
                _f12633 = *$tmp2634;
                org$pandalanguage$pandac$MethodRef** $tmp2636 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12581->$data + 24));
                _f22635 = *$tmp2636;
                panda$collections$ImmutableArray** $tmp2638 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12581->$data + 32));
                _f32637 = *$tmp2638;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12633));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22635));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32637));
            }
            }
            else {
            panda$core$Bit $tmp2639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp2639.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2641 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02640 = *$tmp2641;
                org$pandalanguage$pandac$IRNode** $tmp2643 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 16));
                _f12642 = *$tmp2643;
                org$pandalanguage$pandac$Type** $tmp2645 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12581->$data + 24));
                _f22644 = *$tmp2645;
                panda$core$Bit* $tmp2647 = ((panda$core$Bit*) ((char*) $match$5_12581->$data + 32));
                _f32646 = *$tmp2647;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12642));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22644));
            }
            }
            else {
            panda$core$Bit $tmp2648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp2648.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2650 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02649 = *$tmp2650;
                org$pandalanguage$pandac$ChoiceEntry** $tmp2652 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12581->$data + 16));
                _f12651 = *$tmp2652;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12651));
            }
            }
            else {
            panda$core$Bit $tmp2653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 10 }));
            if ($tmp2653.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2655 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02654 = *$tmp2655;
                org$pandalanguage$pandac$IRNode** $tmp2657 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 16));
                _f12656 = *$tmp2657;
                org$pandalanguage$pandac$ChoiceEntry** $tmp2659 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12581->$data + 24));
                _f22658 = *$tmp2659;
                panda$core$Int64* $tmp2661 = ((panda$core$Int64*) ((char*) $match$5_12581->$data + 32));
                _f32660 = *$tmp2661;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12656));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22658));
            }
            }
            else {
            panda$core$Bit $tmp2662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp2662.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2664 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02663 = *$tmp2664;
                org$pandalanguage$pandac$Type** $tmp2666 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12581->$data + 16));
                _f12665 = *$tmp2666;
                org$pandalanguage$pandac$IRNode** $tmp2668 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 24));
                _f22667 = *$tmp2668;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12665));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22667));
            }
            }
            else {
            panda$core$Bit $tmp2669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp2669.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2671 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02670 = *$tmp2671;
                org$pandalanguage$pandac$Type** $tmp2673 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12581->$data + 16));
                _f12672 = *$tmp2673;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12672));
            }
            }
            else {
            panda$core$Bit $tmp2674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp2674.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2676 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02675 = *$tmp2676;
                panda$core$String** $tmp2678 = ((panda$core$String**) ((char*) $match$5_12581->$data + 16));
                _f12677 = *$tmp2678;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12677));
            }
            }
            else {
            panda$core$Bit $tmp2679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp2679.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2681 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 0));
                _f02680 = *$tmp2681;
                org$pandalanguage$pandac$IRNode** $tmp2683 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 8));
                _f12682 = *$tmp2683;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02680));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12682));
            }
            }
            else {
            panda$core$Bit $tmp2684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp2684.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2686 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02685 = *$tmp2686;
                panda$core$String** $tmp2688 = ((panda$core$String**) ((char*) $match$5_12581->$data + 16));
                _f12687 = *$tmp2688;
                panda$collections$ImmutableArray** $tmp2690 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12581->$data + 24));
                _f22689 = *$tmp2690;
                org$pandalanguage$pandac$IRNode** $tmp2692 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 32));
                _f32691 = *$tmp2692;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12687));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22689));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32691));
            }
            }
            else {
            panda$core$Bit $tmp2693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 16 }));
            if ($tmp2693.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2695 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 0));
                _f02694 = *$tmp2695;
                panda$collections$ImmutableArray** $tmp2697 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12581->$data + 8));
                _f12696 = *$tmp2697;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02694));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12696));
            }
            }
            else {
            panda$core$Bit $tmp2698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp2698.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2700 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 0));
                _f02699 = *$tmp2700;
                org$pandalanguage$pandac$IRNode** $tmp2702 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 8));
                _f12701 = *$tmp2702;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02699));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12701));
            }
            }
            else {
            panda$core$Bit $tmp2703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp2703.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2705 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02704 = *$tmp2705;
                org$pandalanguage$pandac$Type** $tmp2707 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12581->$data + 16));
                _f12706 = *$tmp2707;
                org$pandalanguage$pandac$IRNode** $tmp2709 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 24));
                _f22708 = *$tmp2709;
                org$pandalanguage$pandac$FieldDecl** $tmp2711 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$5_12581->$data + 32));
                _f32710 = *$tmp2711;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12706));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22708));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32710));
            }
            }
            else {
            panda$core$Bit $tmp2712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp2712.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2714 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02713 = *$tmp2714;
                org$pandalanguage$pandac$IRNode** $tmp2716 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 16));
                _f12715 = *$tmp2716;
                panda$collections$ImmutableArray** $tmp2718 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12581->$data + 24));
                _f22717 = *$tmp2718;
                org$pandalanguage$pandac$IRNode** $tmp2720 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 32));
                _f32719 = *$tmp2720;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12715));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22717));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32719));
            }
            }
            else {
            panda$core$Bit $tmp2721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 20 }));
            if ($tmp2721.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2723 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02722 = *$tmp2723;
                org$pandalanguage$pandac$Type** $tmp2725 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12581->$data + 16));
                _f12724 = *$tmp2725;
                panda$core$UInt64* $tmp2727 = ((panda$core$UInt64*) ((char*) $match$5_12581->$data + 24));
                _f22726 = *$tmp2727;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12724));
            }
            }
            else {
            panda$core$Bit $tmp2728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 21 }));
            if ($tmp2728.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2730 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02729 = *$tmp2730;
                org$pandalanguage$pandac$IRNode** $tmp2732 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 16));
                _f12731 = *$tmp2732;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12731));
            }
            }
            else {
            panda$core$Bit $tmp2733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp2733.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2735 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02734 = *$tmp2735;
                org$pandalanguage$pandac$IRNode** $tmp2737 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 16));
                _f12736 = *$tmp2737;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12736));
            }
            }
            else {
            panda$core$Bit $tmp2738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp2738.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2740 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02739 = *$tmp2740;
                panda$core$String** $tmp2742 = ((panda$core$String**) ((char*) $match$5_12581->$data + 16));
                _f12741 = *$tmp2742;
                panda$collections$ImmutableArray** $tmp2744 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12581->$data + 24));
                _f22743 = *$tmp2744;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12741));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22743));
            }
            }
            else {
            panda$core$Bit $tmp2745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp2745.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2747 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02746 = *$tmp2747;
                org$pandalanguage$pandac$IRNode** $tmp2749 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 16));
                _f12748 = *$tmp2749;
                panda$collections$ImmutableArray** $tmp2751 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12581->$data + 24));
                _f22750 = *$tmp2751;
                panda$collections$ImmutableArray** $tmp2753 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12581->$data + 32));
                _f32752 = *$tmp2753;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12748));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22750));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32752));
            }
            }
            else {
            panda$core$Bit $tmp2754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp2754.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2756 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02755 = *$tmp2756;
                org$pandalanguage$pandac$Type** $tmp2758 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12581->$data + 16));
                _f12757 = *$tmp2758;
                org$pandalanguage$pandac$IRNode** $tmp2760 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 24));
                _f22759 = *$tmp2760;
                org$pandalanguage$pandac$MethodRef** $tmp2762 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12581->$data + 32));
                _f32761 = *$tmp2762;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12757));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22759));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32761));
            }
            }
            else {
            panda$core$Bit $tmp2763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp2763.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2765 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02764 = *$tmp2765;
                org$pandalanguage$pandac$Type** $tmp2767 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12581->$data + 16));
                _f12766 = *$tmp2767;
                panda$core$UInt64* $tmp2769 = ((panda$core$UInt64*) ((char*) $match$5_12581->$data + 24));
                _f22768 = *$tmp2769;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12766));
            }
            }
            else {
            panda$core$Bit $tmp2770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 27 }));
            if ($tmp2770.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2772 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02771 = *$tmp2772;
                org$pandalanguage$pandac$Type** $tmp2774 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12581->$data + 16));
                _f12773 = *$tmp2774;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12773));
            }
            }
            else {
            panda$core$Bit $tmp2775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 28 }));
            if ($tmp2775.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2777 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02776 = *$tmp2777;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2779 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12581->$data + 16));
                _f12778 = *$tmp2779;
                org$pandalanguage$pandac$IRNode** $tmp2781 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 24));
                _f22780 = *$tmp2781;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22780));
            }
            }
            else {
            panda$core$Bit $tmp2782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 29 }));
            if ($tmp2782.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2784 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02783 = *$tmp2784;
                panda$core$String** $tmp2786 = ((panda$core$String**) ((char*) $match$5_12581->$data + 16));
                _f12785 = *$tmp2786;
                org$pandalanguage$pandac$IRNode** $tmp2788 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 24));
                _f22787 = *$tmp2788;
                org$pandalanguage$pandac$IRNode** $tmp2790 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 32));
                _f32789 = *$tmp2790;
                panda$collections$ImmutableArray** $tmp2792 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12581->$data + 40));
                _f42791 = *$tmp2792;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12785));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22787));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32789));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42791));
            }
            }
            else {
            panda$core$Bit $tmp2793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 30 }));
            if ($tmp2793.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2795 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02794 = *$tmp2795;
                org$pandalanguage$pandac$Type** $tmp2797 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12581->$data + 16));
                _f12796 = *$tmp2797;
                panda$core$Real64* $tmp2799 = ((panda$core$Real64*) ((char*) $match$5_12581->$data + 24));
                _f22798 = *$tmp2799;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12796));
            }
            }
            else {
            panda$core$Bit $tmp2800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 31 }));
            if ($tmp2800.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2802 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02801 = *$tmp2802;
                org$pandalanguage$pandac$IRNode** $tmp2804 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 16));
                _f12803 = *$tmp2804;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12803));
            }
            }
            else {
            panda$core$Bit $tmp2805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 32 }));
            if ($tmp2805.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2807 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02806 = *$tmp2807;
                org$pandalanguage$pandac$Type** $tmp2809 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12581->$data + 16));
                _f12808 = *$tmp2809;
                panda$core$Int64* $tmp2811 = ((panda$core$Int64*) ((char*) $match$5_12581->$data + 24));
                _f22810 = *$tmp2811;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12808));
            }
            }
            else {
            panda$core$Bit $tmp2812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp2812.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2814 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 0));
                _f02813 = *$tmp2814;
                panda$core$Int64* $tmp2816 = ((panda$core$Int64*) ((char*) $match$5_12581->$data + 8));
                _f12815 = *$tmp2816;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02813));
            }
            }
            else {
            panda$core$Bit $tmp2817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp2817.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2819 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02818 = *$tmp2819;
                org$pandalanguage$pandac$Type** $tmp2821 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12581->$data + 16));
                _f12820 = *$tmp2821;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12820));
            }
            }
            else {
            panda$core$Bit $tmp2822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 35 }));
            if ($tmp2822.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2824 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02823 = *$tmp2824;
                panda$core$String** $tmp2826 = ((panda$core$String**) ((char*) $match$5_12581->$data + 16));
                _f12825 = *$tmp2826;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12825));
            }
            }
            else {
            panda$core$Bit $tmp2827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp2827.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2829 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02828 = *$tmp2829;
                org$pandalanguage$pandac$Type** $tmp2831 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12581->$data + 16));
                _f12830 = *$tmp2831;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12830));
            }
            }
            else {
            panda$core$Bit $tmp2832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 37 }));
            if ($tmp2832.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2834 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02833 = *$tmp2834;
                org$pandalanguage$pandac$IRNode** $tmp2836 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 16));
                _f12835 = *$tmp2836;
                org$pandalanguage$pandac$IRNode** $tmp2838 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 24));
                _f22837 = *$tmp2838;
                org$pandalanguage$pandac$IRNode** $tmp2840 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 32));
                _f32839 = *$tmp2840;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12835));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22837));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32839));
            }
            }
            else {
            panda$core$Bit $tmp2841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 38 }));
            if ($tmp2841.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2843 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02842 = *$tmp2843;
                org$pandalanguage$pandac$Type** $tmp2845 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12581->$data + 16));
                _f12844 = *$tmp2845;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12844));
            }
            }
            else {
            panda$core$Bit $tmp2846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp2846.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2848 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02847 = *$tmp2848;
                panda$core$String** $tmp2850 = ((panda$core$String**) ((char*) $match$5_12581->$data + 16));
                _f12849 = *$tmp2850;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12849));
            }
            }
            else {
            panda$core$Bit $tmp2851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp2851.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2853 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02852 = *$tmp2853;
                org$pandalanguage$pandac$Type** $tmp2855 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12581->$data + 16));
                _f12854 = *$tmp2855;
                org$pandalanguage$pandac$IRNode** $tmp2857 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 24));
                _f22856 = *$tmp2857;
                panda$collections$ImmutableArray** $tmp2859 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12581->$data + 32));
                _f32858 = *$tmp2859;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12854));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22856));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32858));
            }
            }
            else {
            panda$core$Bit $tmp2860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 41 }));
            if ($tmp2860.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2862 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02861 = *$tmp2862;
                org$pandalanguage$pandac$Type** $tmp2864 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12581->$data + 16));
                _f12863 = *$tmp2864;
                org$pandalanguage$pandac$IRNode** $tmp2866 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 24));
                _f22865 = *$tmp2866;
                panda$collections$ImmutableArray** $tmp2868 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12581->$data + 32));
                _f32867 = *$tmp2868;
                panda$collections$ImmutableArray** $tmp2870 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12581->$data + 40));
                _f42869 = *$tmp2870;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12863));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22865));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32867));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42869));
            }
            }
            else {
            panda$core$Bit $tmp2871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 42 }));
            if ($tmp2871.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2873 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02872 = *$tmp2873;
                org$pandalanguage$pandac$IRNode** $tmp2875 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 16));
                _f12874 = *$tmp2875;
                panda$collections$ImmutableArray** $tmp2877 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12581->$data + 24));
                _f22876 = *$tmp2877;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12874));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22876));
            }
            }
            else {
            panda$core$Bit $tmp2878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 43 }));
            if ($tmp2878.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2880 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02879 = *$tmp2880;
                org$pandalanguage$pandac$IRNode** $tmp2882 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 16));
                _f12881 = *$tmp2882;
                org$pandalanguage$pandac$IRNode** $tmp2884 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 24));
                _f22883 = *$tmp2884;
                panda$core$Bit* $tmp2886 = ((panda$core$Bit*) ((char*) $match$5_12581->$data + 32));
                _f32885 = *$tmp2886;
                org$pandalanguage$pandac$IRNode** $tmp2888 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 33));
                _f42887 = *$tmp2888;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12881));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22883));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42887));
            }
            }
            else {
            panda$core$Bit $tmp2889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 44 }));
            if ($tmp2889.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2891 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02890 = *$tmp2891;
                org$pandalanguage$pandac$Variable$Kind* $tmp2893 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_12581->$data + 16));
                _f12892 = *$tmp2893;
                panda$collections$ImmutableArray** $tmp2895 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12581->$data + 24));
                _f22894 = *$tmp2895;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22894));
            }
            }
            else {
            panda$core$Bit $tmp2896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 45 }));
            if ($tmp2896.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2898 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02897 = *$tmp2898;
                org$pandalanguage$pandac$Variable** $tmp2900 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$5_12581->$data + 16));
                _f12899 = *$tmp2900;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12899));
            }
            }
            else {
            panda$core$Bit $tmp2901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 46 }));
            if ($tmp2901.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2903 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02902 = *$tmp2903;
                panda$collections$ImmutableArray** $tmp2905 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12581->$data + 16));
                _f12904 = *$tmp2905;
                panda$collections$ImmutableArray** $tmp2907 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12581->$data + 24));
                _f22906 = *$tmp2907;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12904));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22906));
            }
            }
            else {
            panda$core$Bit $tmp2908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12581->$rawValue, ((panda$core$Int64) { 47 }));
            if ($tmp2908.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2910 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12581->$data + 0));
                _f02909 = *$tmp2910;
                panda$core$String** $tmp2912 = ((panda$core$String**) ((char*) $match$5_12581->$data + 16));
                _f12911 = *$tmp2912;
                org$pandalanguage$pandac$IRNode** $tmp2914 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12581->$data + 24));
                _f22913 = *$tmp2914;
                panda$collections$ImmutableArray** $tmp2916 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12581->$data + 32));
                _f32915 = *$tmp2916;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12911));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22913));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32915));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp2580 = -1;
        goto $l2578;
        $l2578:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2582));
        switch ($tmp2580) {
            case -1: goto $l2917;
        }
        $l2917:;
    }
    $tmp2577 = -1;
    goto $l2575;
    $l2575:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2577) {
        case -1: goto $l2918;
    }
    $l2918:;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp2920;
    org$pandalanguage$pandac$IRNode* $tmp2923;
    org$pandalanguage$pandac$IRNode* $tmp2924;
    org$pandalanguage$pandac$IRNode* $tmp2927;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2919 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2919 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp2921 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp2920 = *$tmp2921;
        org$pandalanguage$pandac$IRNode** $tmp2922 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp2923 = p_f1;
        *$tmp2922 = $tmp2923;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2923));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2920));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp2925 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp2924 = *$tmp2925;
        org$pandalanguage$pandac$IRNode** $tmp2926 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp2927 = p_f2;
        *$tmp2926 = $tmp2927;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2927));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2924));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1) {
    org$pandalanguage$pandac$Type* $tmp2929;
    org$pandalanguage$pandac$Type* $tmp2932;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2928 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2928 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp2930 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2929 = *$tmp2930;
        org$pandalanguage$pandac$Type** $tmp2931 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2932 = p_f1;
        *$tmp2931 = $tmp2932;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2932));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2929));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$parser$Token$Kind p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$Type* $tmp2934;
    org$pandalanguage$pandac$Type* $tmp2937;
    org$pandalanguage$pandac$IRNode* $tmp2938;
    org$pandalanguage$pandac$IRNode* $tmp2941;
    org$pandalanguage$pandac$IRNode* $tmp2943;
    org$pandalanguage$pandac$IRNode* $tmp2946;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2933 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2933 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp2935 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2934 = *$tmp2935;
        org$pandalanguage$pandac$Type** $tmp2936 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2937 = p_f1;
        *$tmp2936 = $tmp2937;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2937));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2934));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp2939 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp2938 = *$tmp2939;
        org$pandalanguage$pandac$IRNode** $tmp2940 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp2941 = p_f2;
        *$tmp2940 = $tmp2941;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2941));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2938));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2942 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 32));
    *$tmp2942 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp2944 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp2943 = *$tmp2944;
        org$pandalanguage$pandac$IRNode** $tmp2945 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp2946 = p_f4;
        *$tmp2945 = $tmp2946;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2946));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2943));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Bit p_f2) {
    org$pandalanguage$pandac$Type* $tmp2948;
    org$pandalanguage$pandac$Type* $tmp2951;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2947 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2947 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp2949 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2948 = *$tmp2949;
        org$pandalanguage$pandac$Type** $tmp2950 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2951 = p_f1;
        *$tmp2950 = $tmp2951;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2951));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2948));
    }
    panda$core$Bit* $tmp2952 = ((panda$core$Bit*) ((char*) self->$data + 24));
    *$tmp2952 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp2954;
    panda$collections$ImmutableArray* $tmp2957;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2953 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2953 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2955 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2954 = *$tmp2955;
        panda$collections$ImmutableArray** $tmp2956 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2957 = p_f1;
        *$tmp2956 = $tmp2957;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2957));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2954));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2959;
    panda$collections$ImmutableArray* $tmp2962;
    panda$collections$ImmutableArray* $tmp2963;
    panda$collections$ImmutableArray* $tmp2966;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2958 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2958 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2960 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2959 = *$tmp2960;
        panda$collections$ImmutableArray** $tmp2961 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2962 = p_f1;
        *$tmp2961 = $tmp2962;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2962));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2959));
    }
    {
        panda$collections$ImmutableArray** $tmp2964 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2963 = *$tmp2964;
        panda$collections$ImmutableArray** $tmp2965 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2966 = p_f2;
        *$tmp2965 = $tmp2966;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2966));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2963));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2968;
    panda$core$String* $tmp2971;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2967 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2967 = p_f0;
    {
        panda$core$String** $tmp2969 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2968 = *$tmp2969;
        panda$core$String** $tmp2970 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2971 = p_f1;
        *$tmp2970 = $tmp2971;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2971));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2968));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$MethodRef* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp2973;
    org$pandalanguage$pandac$Type* $tmp2976;
    org$pandalanguage$pandac$MethodRef* $tmp2977;
    org$pandalanguage$pandac$MethodRef* $tmp2980;
    panda$collections$ImmutableArray* $tmp2981;
    panda$collections$ImmutableArray* $tmp2984;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2972 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2972 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp2974 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2973 = *$tmp2974;
        org$pandalanguage$pandac$Type** $tmp2975 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2976 = p_f1;
        *$tmp2975 = $tmp2976;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2976));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2973));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp2978 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp2977 = *$tmp2978;
        org$pandalanguage$pandac$MethodRef** $tmp2979 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp2980 = p_f2;
        *$tmp2979 = $tmp2980;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2980));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2977));
    }
    {
        panda$collections$ImmutableArray** $tmp2982 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2981 = *$tmp2982;
        panda$collections$ImmutableArray** $tmp2983 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2984 = p_f3;
        *$tmp2983 = $tmp2984;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2984));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2981));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$Type* p_f2, panda$core$Bit p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp2986;
    org$pandalanguage$pandac$IRNode* $tmp2989;
    org$pandalanguage$pandac$Type* $tmp2990;
    org$pandalanguage$pandac$Type* $tmp2993;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2985 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2985 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp2987 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp2986 = *$tmp2987;
        org$pandalanguage$pandac$IRNode** $tmp2988 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp2989 = p_f1;
        *$tmp2988 = $tmp2989;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2989));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2986));
    }
    {
        org$pandalanguage$pandac$Type** $tmp2991 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp2990 = *$tmp2991;
        org$pandalanguage$pandac$Type** $tmp2992 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp2993 = p_f2;
        *$tmp2992 = $tmp2993;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2993));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2990));
    }
    panda$core$Bit* $tmp2994 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp2994 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceEntry(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ChoiceEntry* p_f1) {
    org$pandalanguage$pandac$ChoiceEntry* $tmp2996;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2999;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2995 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2995 = p_f0;
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp2997 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp2996 = *$tmp2997;
        org$pandalanguage$pandac$ChoiceEntry** $tmp2998 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp2999 = p_f1;
        *$tmp2998 = $tmp2999;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2999));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2996));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3001;
    org$pandalanguage$pandac$IRNode* $tmp3004;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3005;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3008;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3000 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3000 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3002 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3001 = *$tmp3002;
        org$pandalanguage$pandac$IRNode** $tmp3003 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3004 = p_f1;
        *$tmp3003 = $tmp3004;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3004));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3001));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp3006 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp3005 = *$tmp3006;
        org$pandalanguage$pandac$ChoiceEntry** $tmp3007 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp3008 = p_f2;
        *$tmp3007 = $tmp3008;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3008));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3005));
    }
    panda$core$Int64* $tmp3009 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp3009 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$Type* $tmp3011;
    org$pandalanguage$pandac$Type* $tmp3014;
    org$pandalanguage$pandac$IRNode* $tmp3015;
    org$pandalanguage$pandac$IRNode* $tmp3018;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3010 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3010 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3012 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3011 = *$tmp3012;
        org$pandalanguage$pandac$Type** $tmp3013 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3014 = p_f1;
        *$tmp3013 = $tmp3014;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3014));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3011));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3016 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3015 = *$tmp3016;
        org$pandalanguage$pandac$IRNode** $tmp3017 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3018 = p_f2;
        *$tmp3017 = $tmp3018;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3018));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3015));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3019;
    org$pandalanguage$pandac$IRNode* $tmp3022;
    org$pandalanguage$pandac$IRNode* $tmp3023;
    org$pandalanguage$pandac$IRNode* $tmp3026;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3020 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3019 = *$tmp3020;
        org$pandalanguage$pandac$IRNode** $tmp3021 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3022 = p_f0;
        *$tmp3021 = $tmp3022;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3022));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3019));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3024 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3023 = *$tmp3024;
        org$pandalanguage$pandac$IRNode** $tmp3025 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3026 = p_f1;
        *$tmp3025 = $tmp3026;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3026));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3023));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    panda$core$String* $tmp3028;
    panda$core$String* $tmp3031;
    panda$collections$ImmutableArray* $tmp3032;
    panda$collections$ImmutableArray* $tmp3035;
    org$pandalanguage$pandac$IRNode* $tmp3036;
    org$pandalanguage$pandac$IRNode* $tmp3039;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3027 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3027 = p_f0;
    {
        panda$core$String** $tmp3029 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3028 = *$tmp3029;
        panda$core$String** $tmp3030 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3031 = p_f1;
        *$tmp3030 = $tmp3031;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3031));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3028));
    }
    {
        panda$collections$ImmutableArray** $tmp3033 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3032 = *$tmp3033;
        panda$collections$ImmutableArray** $tmp3034 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3035 = p_f2;
        *$tmp3034 = $tmp3035;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3035));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3032));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3037 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3036 = *$tmp3037;
        org$pandalanguage$pandac$IRNode** $tmp3038 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3039 = p_f3;
        *$tmp3038 = $tmp3039;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3039));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3036));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$collections$ImmutableArray* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3040;
    org$pandalanguage$pandac$IRNode* $tmp3043;
    panda$collections$ImmutableArray* $tmp3044;
    panda$collections$ImmutableArray* $tmp3047;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3041 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3040 = *$tmp3041;
        org$pandalanguage$pandac$IRNode** $tmp3042 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3043 = p_f0;
        *$tmp3042 = $tmp3043;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3043));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3040));
    }
    {
        panda$collections$ImmutableArray** $tmp3045 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp3044 = *$tmp3045;
        panda$collections$ImmutableArray** $tmp3046 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp3047 = p_f1;
        *$tmp3046 = $tmp3047;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3047));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3044));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3048;
    org$pandalanguage$pandac$IRNode* $tmp3051;
    org$pandalanguage$pandac$IRNode* $tmp3052;
    org$pandalanguage$pandac$IRNode* $tmp3055;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3049 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3048 = *$tmp3049;
        org$pandalanguage$pandac$IRNode** $tmp3050 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3051 = p_f0;
        *$tmp3050 = $tmp3051;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3051));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3048));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3053 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3052 = *$tmp3053;
        org$pandalanguage$pandac$IRNode** $tmp3054 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3055 = p_f1;
        *$tmp3054 = $tmp3055;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3055));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3052));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$FieldDecl* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3057;
    org$pandalanguage$pandac$Type* $tmp3060;
    org$pandalanguage$pandac$IRNode* $tmp3061;
    org$pandalanguage$pandac$IRNode* $tmp3064;
    org$pandalanguage$pandac$FieldDecl* $tmp3065;
    org$pandalanguage$pandac$FieldDecl* $tmp3068;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3056 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3056 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3058 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3057 = *$tmp3058;
        org$pandalanguage$pandac$Type** $tmp3059 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3060 = p_f1;
        *$tmp3059 = $tmp3060;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3060));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3057));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3062 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3061 = *$tmp3062;
        org$pandalanguage$pandac$IRNode** $tmp3063 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3064 = p_f2;
        *$tmp3063 = $tmp3064;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3064));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3061));
    }
    {
        org$pandalanguage$pandac$FieldDecl** $tmp3066 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp3065 = *$tmp3066;
        org$pandalanguage$pandac$FieldDecl** $tmp3067 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp3068 = p_f3;
        *$tmp3067 = $tmp3068;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3068));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3065));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3070;
    org$pandalanguage$pandac$IRNode* $tmp3073;
    panda$collections$ImmutableArray* $tmp3074;
    panda$collections$ImmutableArray* $tmp3077;
    org$pandalanguage$pandac$IRNode* $tmp3078;
    org$pandalanguage$pandac$IRNode* $tmp3081;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3069 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3069 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3071 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3070 = *$tmp3071;
        org$pandalanguage$pandac$IRNode** $tmp3072 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3073 = p_f1;
        *$tmp3072 = $tmp3073;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3073));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3070));
    }
    {
        panda$collections$ImmutableArray** $tmp3075 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3074 = *$tmp3075;
        panda$collections$ImmutableArray** $tmp3076 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3077 = p_f2;
        *$tmp3076 = $tmp3077;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3077));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3074));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3079 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3078 = *$tmp3079;
        org$pandalanguage$pandac$IRNode** $tmp3080 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3081 = p_f3;
        *$tmp3080 = $tmp3081;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3081));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3078));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$UInt64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3083;
    org$pandalanguage$pandac$Type* $tmp3086;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3082 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3082 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3084 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3083 = *$tmp3084;
        org$pandalanguage$pandac$Type** $tmp3085 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3086 = p_f1;
        *$tmp3085 = $tmp3086;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3086));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3083));
    }
    panda$core$UInt64* $tmp3087 = ((panda$core$UInt64*) ((char*) self->$data + 24));
    *$tmp3087 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3089;
    org$pandalanguage$pandac$IRNode* $tmp3092;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3088 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3088 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3090 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3089 = *$tmp3090;
        org$pandalanguage$pandac$IRNode** $tmp3091 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3092 = p_f1;
        *$tmp3091 = $tmp3092;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3092));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3089));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp3094;
    panda$core$String* $tmp3097;
    panda$collections$ImmutableArray* $tmp3098;
    panda$collections$ImmutableArray* $tmp3101;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3093 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3093 = p_f0;
    {
        panda$core$String** $tmp3095 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3094 = *$tmp3095;
        panda$core$String** $tmp3096 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3097 = p_f1;
        *$tmp3096 = $tmp3097;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3097));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3094));
    }
    {
        panda$collections$ImmutableArray** $tmp3099 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3098 = *$tmp3099;
        panda$collections$ImmutableArray** $tmp3100 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3101 = p_f2;
        *$tmp3100 = $tmp3101;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3101));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3098));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3103;
    org$pandalanguage$pandac$IRNode* $tmp3106;
    panda$collections$ImmutableArray* $tmp3107;
    panda$collections$ImmutableArray* $tmp3110;
    panda$collections$ImmutableArray* $tmp3111;
    panda$collections$ImmutableArray* $tmp3114;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3102 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3102 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3104 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3103 = *$tmp3104;
        org$pandalanguage$pandac$IRNode** $tmp3105 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3106 = p_f1;
        *$tmp3105 = $tmp3106;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3106));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3103));
    }
    {
        panda$collections$ImmutableArray** $tmp3108 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3107 = *$tmp3108;
        panda$collections$ImmutableArray** $tmp3109 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3110 = p_f2;
        *$tmp3109 = $tmp3110;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3110));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3107));
    }
    {
        panda$collections$ImmutableArray** $tmp3112 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3111 = *$tmp3112;
        panda$collections$ImmutableArray** $tmp3113 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3114 = p_f3;
        *$tmp3113 = $tmp3114;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3114));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3111));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$MethodRef* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3116;
    org$pandalanguage$pandac$Type* $tmp3119;
    org$pandalanguage$pandac$IRNode* $tmp3120;
    org$pandalanguage$pandac$IRNode* $tmp3123;
    org$pandalanguage$pandac$MethodRef* $tmp3124;
    org$pandalanguage$pandac$MethodRef* $tmp3127;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3115 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3115 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3117 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3116 = *$tmp3117;
        org$pandalanguage$pandac$Type** $tmp3118 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3119 = p_f1;
        *$tmp3118 = $tmp3119;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3119));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3116));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3121 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3120 = *$tmp3121;
        org$pandalanguage$pandac$IRNode** $tmp3122 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3123 = p_f2;
        *$tmp3122 = $tmp3123;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3123));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3120));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp3125 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 32));
        $tmp3124 = *$tmp3125;
        org$pandalanguage$pandac$MethodRef** $tmp3126 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 32));
        $tmp3127 = p_f3;
        *$tmp3126 = $tmp3127;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3127));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3124));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3130;
    org$pandalanguage$pandac$IRNode* $tmp3133;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3128 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3128 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp3129 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp3129 = p_f1;
    {
        org$pandalanguage$pandac$IRNode** $tmp3131 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3130 = *$tmp3131;
        org$pandalanguage$pandac$IRNode** $tmp3132 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3133 = p_f2;
        *$tmp3132 = $tmp3133;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3133));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3130));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp3135;
    panda$core$String* $tmp3138;
    org$pandalanguage$pandac$IRNode* $tmp3139;
    org$pandalanguage$pandac$IRNode* $tmp3142;
    org$pandalanguage$pandac$IRNode* $tmp3143;
    org$pandalanguage$pandac$IRNode* $tmp3146;
    panda$collections$ImmutableArray* $tmp3147;
    panda$collections$ImmutableArray* $tmp3150;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3134 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3134 = p_f0;
    {
        panda$core$String** $tmp3136 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3135 = *$tmp3136;
        panda$core$String** $tmp3137 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3138 = p_f1;
        *$tmp3137 = $tmp3138;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3138));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3135));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3140 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3139 = *$tmp3140;
        org$pandalanguage$pandac$IRNode** $tmp3141 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3142 = p_f2;
        *$tmp3141 = $tmp3142;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3142));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3139));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3144 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3143 = *$tmp3144;
        org$pandalanguage$pandac$IRNode** $tmp3145 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3146 = p_f3;
        *$tmp3145 = $tmp3146;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3146));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3143));
    }
    {
        panda$collections$ImmutableArray** $tmp3148 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3147 = *$tmp3148;
        panda$collections$ImmutableArray** $tmp3149 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3150 = p_f4;
        *$tmp3149 = $tmp3150;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3150));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3147));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Real64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3152;
    org$pandalanguage$pandac$Type* $tmp3155;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3151 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3151 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3153 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3152 = *$tmp3153;
        org$pandalanguage$pandac$Type** $tmp3154 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3155 = p_f1;
        *$tmp3154 = $tmp3155;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3155));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3152));
    }
    panda$core$Real64* $tmp3156 = ((panda$core$Real64*) ((char*) self->$data + 24));
    *$tmp3156 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3158;
    org$pandalanguage$pandac$IRNode* $tmp3161;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3157 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3157 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3159 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3158 = *$tmp3159;
        org$pandalanguage$pandac$IRNode** $tmp3160 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3161 = p_f1;
        *$tmp3160 = $tmp3161;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3161));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3158));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Int64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3163;
    org$pandalanguage$pandac$Type* $tmp3166;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3162 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3162 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3164 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3163 = *$tmp3164;
        org$pandalanguage$pandac$Type** $tmp3165 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3166 = p_f1;
        *$tmp3165 = $tmp3166;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3166));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3163));
    }
    panda$core$Int64* $tmp3167 = ((panda$core$Int64*) ((char*) self->$data + 24));
    *$tmp3167 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$core$Int64 p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3168;
    org$pandalanguage$pandac$IRNode* $tmp3171;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3169 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3168 = *$tmp3169;
        org$pandalanguage$pandac$IRNode** $tmp3170 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3171 = p_f0;
        *$tmp3170 = $tmp3171;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3171));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3168));
    }
    panda$core$Int64* $tmp3172 = ((panda$core$Int64*) ((char*) self->$data + 8));
    *$tmp3172 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp3174;
    panda$core$String* $tmp3177;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3173 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3173 = p_f0;
    {
        panda$core$String** $tmp3175 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3174 = *$tmp3175;
        panda$core$String** $tmp3176 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3177 = p_f1;
        *$tmp3176 = $tmp3177;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3177));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3174));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3179;
    org$pandalanguage$pandac$IRNode* $tmp3182;
    org$pandalanguage$pandac$IRNode* $tmp3183;
    org$pandalanguage$pandac$IRNode* $tmp3186;
    org$pandalanguage$pandac$IRNode* $tmp3187;
    org$pandalanguage$pandac$IRNode* $tmp3190;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3178 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3178 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3180 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3179 = *$tmp3180;
        org$pandalanguage$pandac$IRNode** $tmp3181 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3182 = p_f1;
        *$tmp3181 = $tmp3182;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3182));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3179));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3184 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3183 = *$tmp3184;
        org$pandalanguage$pandac$IRNode** $tmp3185 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3186 = p_f2;
        *$tmp3185 = $tmp3186;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3186));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3183));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3188 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3187 = *$tmp3188;
        org$pandalanguage$pandac$IRNode** $tmp3189 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3190 = p_f3;
        *$tmp3189 = $tmp3190;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3190));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3187));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3192;
    org$pandalanguage$pandac$Type* $tmp3195;
    org$pandalanguage$pandac$IRNode* $tmp3196;
    org$pandalanguage$pandac$IRNode* $tmp3199;
    panda$collections$ImmutableArray* $tmp3200;
    panda$collections$ImmutableArray* $tmp3203;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3191 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3191 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3193 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3192 = *$tmp3193;
        org$pandalanguage$pandac$Type** $tmp3194 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3195 = p_f1;
        *$tmp3194 = $tmp3195;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3195));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3192));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3197 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3196 = *$tmp3197;
        org$pandalanguage$pandac$IRNode** $tmp3198 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3199 = p_f2;
        *$tmp3198 = $tmp3199;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3199));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3196));
    }
    {
        panda$collections$ImmutableArray** $tmp3201 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3200 = *$tmp3201;
        panda$collections$ImmutableArray** $tmp3202 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3203 = p_f3;
        *$tmp3202 = $tmp3203;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3203));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3200));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3, panda$collections$ImmutableArray* p_f4) {
    org$pandalanguage$pandac$Type* $tmp3205;
    org$pandalanguage$pandac$Type* $tmp3208;
    org$pandalanguage$pandac$IRNode* $tmp3209;
    org$pandalanguage$pandac$IRNode* $tmp3212;
    panda$collections$ImmutableArray* $tmp3213;
    panda$collections$ImmutableArray* $tmp3216;
    panda$collections$ImmutableArray* $tmp3217;
    panda$collections$ImmutableArray* $tmp3220;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3204 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3204 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3206 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3205 = *$tmp3206;
        org$pandalanguage$pandac$Type** $tmp3207 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3208 = p_f1;
        *$tmp3207 = $tmp3208;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3208));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3205));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3210 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3209 = *$tmp3210;
        org$pandalanguage$pandac$IRNode** $tmp3211 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3212 = p_f2;
        *$tmp3211 = $tmp3212;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3212));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3209));
    }
    {
        panda$collections$ImmutableArray** $tmp3214 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3213 = *$tmp3214;
        panda$collections$ImmutableArray** $tmp3215 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3216 = p_f3;
        *$tmp3215 = $tmp3216;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3216));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3213));
    }
    {
        panda$collections$ImmutableArray** $tmp3218 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3217 = *$tmp3218;
        panda$collections$ImmutableArray** $tmp3219 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3220 = p_f4;
        *$tmp3219 = $tmp3220;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3220));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3217));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3222;
    org$pandalanguage$pandac$IRNode* $tmp3225;
    panda$collections$ImmutableArray* $tmp3226;
    panda$collections$ImmutableArray* $tmp3229;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3221 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3221 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3223 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3222 = *$tmp3223;
        org$pandalanguage$pandac$IRNode** $tmp3224 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3225 = p_f1;
        *$tmp3224 = $tmp3225;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3225));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3222));
    }
    {
        panda$collections$ImmutableArray** $tmp3227 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3226 = *$tmp3227;
        panda$collections$ImmutableArray** $tmp3228 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3229 = p_f2;
        *$tmp3228 = $tmp3229;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3229));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3226));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$IRNode* $tmp3231;
    org$pandalanguage$pandac$IRNode* $tmp3234;
    org$pandalanguage$pandac$IRNode* $tmp3235;
    org$pandalanguage$pandac$IRNode* $tmp3238;
    org$pandalanguage$pandac$IRNode* $tmp3240;
    org$pandalanguage$pandac$IRNode* $tmp3243;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3230 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3230 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3232 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3231 = *$tmp3232;
        org$pandalanguage$pandac$IRNode** $tmp3233 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3234 = p_f1;
        *$tmp3233 = $tmp3234;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3234));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3231));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3236 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3235 = *$tmp3236;
        org$pandalanguage$pandac$IRNode** $tmp3237 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3238 = p_f2;
        *$tmp3237 = $tmp3238;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3238));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3235));
    }
    panda$core$Bit* $tmp3239 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp3239 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp3241 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3240 = *$tmp3241;
        org$pandalanguage$pandac$IRNode** $tmp3242 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3243 = p_f4;
        *$tmp3242 = $tmp3243;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3243));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3240));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp3246;
    panda$collections$ImmutableArray* $tmp3249;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3244 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3244 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp3245 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp3245 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp3247 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3246 = *$tmp3247;
        panda$collections$ImmutableArray** $tmp3248 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3249 = p_f2;
        *$tmp3248 = $tmp3249;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3249));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3246));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable* p_f1) {
    org$pandalanguage$pandac$Variable* $tmp3251;
    org$pandalanguage$pandac$Variable* $tmp3254;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3250 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3250 = p_f0;
    {
        org$pandalanguage$pandac$Variable** $tmp3252 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3251 = *$tmp3252;
        org$pandalanguage$pandac$Variable** $tmp3253 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3254 = p_f1;
        *$tmp3253 = $tmp3254;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3254));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3251));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp3256;
    panda$core$String* $tmp3259;
    org$pandalanguage$pandac$IRNode* $tmp3260;
    org$pandalanguage$pandac$IRNode* $tmp3263;
    panda$collections$ImmutableArray* $tmp3264;
    panda$collections$ImmutableArray* $tmp3267;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3255 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3255 = p_f0;
    {
        panda$core$String** $tmp3257 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3256 = *$tmp3257;
        panda$core$String** $tmp3258 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3259 = p_f1;
        *$tmp3258 = $tmp3259;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3259));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3256));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3261 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3260 = *$tmp3261;
        org$pandalanguage$pandac$IRNode** $tmp3262 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3263 = p_f2;
        *$tmp3262 = $tmp3263;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3263));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3260));
    }
    {
        panda$collections$ImmutableArray** $tmp3265 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3264 = *$tmp3265;
        panda$collections$ImmutableArray** $tmp3266 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3267 = p_f3;
        *$tmp3266 = $tmp3267;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3267));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3264));
    }
}

