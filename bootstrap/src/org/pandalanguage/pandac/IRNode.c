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
#include "org/pandalanguage/pandac/ASTNode.h"

static panda$core$String $s1;
org$pandalanguage$pandac$IRNode$class_type org$pandalanguage$pandac$IRNode$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$IRNode$convert$R$panda$core$String, org$pandalanguage$pandac$IRNode$cleanup, org$pandalanguage$pandac$IRNode$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position, org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit} };

typedef org$pandalanguage$pandac$Type* (*$fn74)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn77)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn89)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn144)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn167)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn195)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn198)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn206)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn336)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn348)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn355)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn437)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn532)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn535)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn554)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn558)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn579)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn586)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn597)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn599)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn630)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn637)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn648)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn650)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn686)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn707)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn719)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn731)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn738)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn749)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn751)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn778)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn790)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn797)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn808)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn810)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn818)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn830)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn837)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn854)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn861)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn872)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn874)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn891)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn903)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn910)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn921)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn923)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn939)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn946)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn957)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn959)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn985)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn998)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1010)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1017)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1028)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1030)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1048)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1062)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1086)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1089)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1093)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1164)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1171)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1182)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1184)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1212)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1219)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1230)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1232)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1248)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1255)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1266)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1268)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1285)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1297)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1304)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1315)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1317)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1384)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1425)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1432)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1443)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1479)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1486)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1497)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1513)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1520)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1531)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1578)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1595)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1626)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1664)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1709)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1720)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1752)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1759)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1770)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1800)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1808)(panda$collections$ListView*, panda$core$String*);
typedef panda$core$String* (*$fn1825)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1844)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1881)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1888)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1899)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1978)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1985)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1996)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2039)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2046)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2057)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2073)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2080)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2091)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2116)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2156)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2205)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2212)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2223)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2368)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2375)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2396)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2432)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2453)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2470)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2546)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2575)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2584)(panda$collections$ListView*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2624)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2631)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2642)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x4e\x6f\x64\x65", 31, -8857975469778350849, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s1349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s1361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s1386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s1446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x79\x20\x7b\x0a", 6, 2292679699717, NULL };
static panda$core$String $s1500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x66\x69\x6e\x61\x6c\x6c\x79\x20\x7b\x0a", 12, -1355183944487068280, NULL };
static panda$core$String $s1534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s1554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s1573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1680 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x2a\x2d", 24, 1541443738414735436, NULL };
static panda$core$String $s1689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s1691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s1711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s1773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s1781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1802 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1805 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1827 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x2a\x20\x61\x6e\x64\x20\x74\x68\x65\x6e\x3a\x20", 14, -3277098584181619124, NULL };
static panda$core$String $s1830 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s1902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1909 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1911 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1936 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s1946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1948 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s1967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1999 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s2029 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2064 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s2094 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s2158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s2192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s2195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s2254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s2270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s2295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s2315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s2332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s2337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s2340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s2392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s2402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44\x2a\x2d", 14, -8805999466873262330, NULL };
static panda$core$String $s2422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44\x2a\x2d", 14, -8805999466873262330, NULL };
static panda$core$String $s2448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2507 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s2508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s2511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s2513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s2538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s2540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s2542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s2571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s2578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s2581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s2614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };

org$pandalanguage$pandac$Type* org$pandalanguage$pandac$IRNode$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$74_95 = NULL;
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
    org$pandalanguage$pandac$Type* $tmp204;
    org$pandalanguage$pandac$Type* $tmp205;
    org$pandalanguage$pandac$Type* $tmp211;
    org$pandalanguage$pandac$Type* $tmp212;
    org$pandalanguage$pandac$Type* $tmp217;
    org$pandalanguage$pandac$Type* $tmp218;
    org$pandalanguage$pandac$Type* type223 = NULL;
    org$pandalanguage$pandac$Type* $tmp225;
    org$pandalanguage$pandac$Type* $tmp229;
    org$pandalanguage$pandac$Type* $tmp230;
    org$pandalanguage$pandac$Type* type235 = NULL;
    org$pandalanguage$pandac$Type* $tmp237;
    org$pandalanguage$pandac$Type* $tmp241;
    org$pandalanguage$pandac$Type* $tmp242;
    org$pandalanguage$pandac$Type* $tmp247;
    org$pandalanguage$pandac$Type* $tmp248;
    org$pandalanguage$pandac$Variable* variable253 = NULL;
    org$pandalanguage$pandac$Type* $tmp255;
    int $tmp4;
    {
        $tmp6 = self;
        $match$74_95 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp7.value) {
        {
            org$pandalanguage$pandac$Type** $tmp9 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp14 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp14.value) {
        {
            org$pandalanguage$pandac$Type** $tmp16 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp20 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp20.value) {
        {
            org$pandalanguage$pandac$Type** $tmp22 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp26 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp26.value) {
        {
            org$pandalanguage$pandac$Type** $tmp28 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp32 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp32.value) {
        {
            org$pandalanguage$pandac$Type** $tmp34 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 24));
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
        panda$core$Bit $tmp38 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp38.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp40 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp46 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp46.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp48 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$74_95->$data + 24));
            ce47 = *$tmp48;
            panda$core$Int64* $tmp50 = ((panda$core$Int64*) ((char*) $match$74_95->$data + 32));
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
        panda$core$Bit $tmp56 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp56.value) {
        {
            org$pandalanguage$pandac$Type** $tmp58 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp62 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp62.value) {
        {
            org$pandalanguage$pandac$Type** $tmp64 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp68 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp68.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp70 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$74_95->$data + 0));
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
        panda$core$Bit $tmp84 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp84.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp86 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$74_95->$data + 0));
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
        panda$core$Bit $tmp93 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp93.value) {
        {
            org$pandalanguage$pandac$Type** $tmp95 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp99 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp99.value) {
        {
            org$pandalanguage$pandac$Type** $tmp101 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 21 }));
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
        panda$core$Bit $tmp111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 22 }));
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
        panda$core$Bit $tmp117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp117.value) {
        {
            org$pandalanguage$pandac$Type** $tmp119 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
            type118 = *$tmp119;
            org$pandalanguage$pandac$IRNode** $tmp121 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$74_95->$data + 24));
            target120 = *$tmp121;
            org$pandalanguage$pandac$MethodRef** $tmp123 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$74_95->$data + 32));
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
        panda$core$Bit $tmp127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp127.value) {
        {
            org$pandalanguage$pandac$Type** $tmp129 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp133.value) {
        {
            org$pandalanguage$pandac$Type** $tmp135 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp139.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp141 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$74_95->$data + 24));
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
        panda$core$Bit $tmp148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp148.value) {
        {
            org$pandalanguage$pandac$Type** $tmp150 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp154.value) {
        {
            org$pandalanguage$pandac$Type** $tmp156 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
            type155 = *$tmp156;
            panda$core$Int64* $tmp158 = ((panda$core$Int64*) ((char*) $match$74_95->$data + 24));
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
        panda$core$Bit $tmp162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp162.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp164 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$74_95->$data + 0));
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
        panda$core$Bit $tmp171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp171.value) {
        {
            org$pandalanguage$pandac$Type** $tmp173 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 35 }));
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
        panda$core$Bit $tmp183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp183.value) {
        {
            org$pandalanguage$pandac$Type** $tmp185 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp189.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp191 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$74_95->$data + 24));
            ifTrue190 = *$tmp191;
            org$pandalanguage$pandac$IRNode** $tmp193 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$74_95->$data + 32));
            ifFalse192 = *$tmp193;
            org$pandalanguage$pandac$Type* $tmp196 = (($fn195) ifTrue190->$class->vtable[2])(ifTrue190);
            $tmp194 = $tmp196;
            org$pandalanguage$pandac$Type* $tmp199 = (($fn198) ifFalse192->$class->vtable[2])(ifFalse192);
            $tmp197 = $tmp199;
            panda$core$Bit $tmp200 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp194, $tmp197);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp197));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp194));
            if ($tmp200.value) goto $l201; else goto $l202;
            $l202:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s203, (panda$core$Int64) { 126 });
            abort();
            $l201:;
            org$pandalanguage$pandac$Type* $tmp207 = (($fn206) ifTrue190->$class->vtable[2])(ifTrue190);
            $tmp205 = $tmp207;
            $tmp204 = $tmp205;
            $returnValue10 = $tmp204;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp204));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp205));
            $tmp4 = 25;
            goto $l2;
            $l208:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp210.value) {
        {
            org$pandalanguage$pandac$Type* $tmp213 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            $tmp212 = $tmp213;
            $tmp211 = $tmp212;
            $returnValue10 = $tmp211;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp211));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp212));
            $tmp4 = 26;
            goto $l2;
            $l214:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp216.value) {
        {
            org$pandalanguage$pandac$Type* $tmp219 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp218 = $tmp219;
            $tmp217 = $tmp218;
            $returnValue10 = $tmp217;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp217));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
            $tmp4 = 27;
            goto $l2;
            $l220:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp222.value) {
        {
            org$pandalanguage$pandac$Type** $tmp224 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
            type223 = *$tmp224;
            $tmp225 = type223;
            $returnValue10 = $tmp225;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp225));
            $tmp4 = 28;
            goto $l2;
            $l226:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp228.value) {
        {
            org$pandalanguage$pandac$Type* $tmp231 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp230 = $tmp231;
            $tmp229 = $tmp230;
            $returnValue10 = $tmp229;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp229));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp230));
            $tmp4 = 29;
            goto $l2;
            $l232:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp234.value) {
        {
            org$pandalanguage$pandac$Type** $tmp236 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
            type235 = *$tmp236;
            $tmp237 = type235;
            $returnValue10 = $tmp237;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp237));
            $tmp4 = 30;
            goto $l2;
            $l238:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp240.value) {
        {
            org$pandalanguage$pandac$Type* $tmp243 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp242 = $tmp243;
            $tmp241 = $tmp242;
            $returnValue10 = $tmp241;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp241));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp242));
            $tmp4 = 31;
            goto $l2;
            $l244:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp246.value) {
        {
            org$pandalanguage$pandac$Type* $tmp249 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp248 = $tmp249;
            $tmp247 = $tmp248;
            $returnValue10 = $tmp247;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp247));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp248));
            $tmp4 = 32;
            goto $l2;
            $l250:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp252.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp254 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$74_95->$data + 16));
            variable253 = *$tmp254;
            $tmp255 = variable253->type;
            $returnValue10 = $tmp255;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp255));
            $tmp4 = 33;
            goto $l2;
            $l256:;
            return $returnValue10;
        }
        }
        else {
        {
            if (((panda$core$Bit) { false }).value) goto $l258; else goto $l259;
            $l259:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s260, (panda$core$Int64) { 145 });
            abort();
            $l258:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
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
        case 25: goto $l208;
        case 6: goto $l54;
        case 29: goto $l232;
        case 17: goto $l137;
        case 21: goto $l169;
        case 28: goto $l226;
        case 26: goto $l214;
        case 10: goto $l91;
        case 14: goto $l115;
        case 9: goto $l82;
        case 13: goto $l109;
        case 8: goto $l66;
        case 15: goto $l125;
        case 32: goto $l250;
        case 11: goto $l97;
        case 23: goto $l181;
        case 18: goto $l146;
        case 20: goto $l160;
        case 1: goto $l18;
        case 2: goto $l24;
        case 0: goto $l12;
        case 33: goto $l256;
        case 7: goto $l60;
        case 12: goto $l103;
        case 30: goto $l238;
        case 5: goto $l44;
        case 31: goto $l244;
        case 4: goto $l36;
        case -1: goto $l261;
        case 24: goto $l187;
        case 27: goto $l220;
        case 19: goto $l152;
        case 16: goto $l131;
        case 22: goto $l175;
        case 3: goto $l30;
    }
    $l261:;
    abort();
}
org$pandalanguage$pandac$Position org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$150_9265 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp266;
    org$pandalanguage$pandac$Position position268;
    org$pandalanguage$pandac$Position $returnValue270;
    org$pandalanguage$pandac$Position position274;
    org$pandalanguage$pandac$Position position279;
    org$pandalanguage$pandac$Position position284;
    org$pandalanguage$pandac$Position position289;
    org$pandalanguage$pandac$Position position294;
    org$pandalanguage$pandac$Position position299;
    org$pandalanguage$pandac$Position position304;
    org$pandalanguage$pandac$Position position309;
    org$pandalanguage$pandac$Position position314;
    org$pandalanguage$pandac$Position position319;
    org$pandalanguage$pandac$Position position324;
    org$pandalanguage$pandac$Position position329;
    org$pandalanguage$pandac$IRNode* target334 = NULL;
    org$pandalanguage$pandac$Position position341;
    org$pandalanguage$pandac$IRNode* m346 = NULL;
    org$pandalanguage$pandac$IRNode* expr353 = NULL;
    org$pandalanguage$pandac$Position position360;
    org$pandalanguage$pandac$Position position365;
    org$pandalanguage$pandac$Position position370;
    org$pandalanguage$pandac$Position position375;
    org$pandalanguage$pandac$Position position380;
    org$pandalanguage$pandac$Position position385;
    org$pandalanguage$pandac$Position position390;
    org$pandalanguage$pandac$Position position395;
    org$pandalanguage$pandac$Position position400;
    org$pandalanguage$pandac$Position position405;
    org$pandalanguage$pandac$Position position410;
    org$pandalanguage$pandac$Position position415;
    org$pandalanguage$pandac$Position position420;
    org$pandalanguage$pandac$Position position425;
    org$pandalanguage$pandac$Position position430;
    org$pandalanguage$pandac$IRNode* base435 = NULL;
    org$pandalanguage$pandac$Position position442;
    org$pandalanguage$pandac$Position position447;
    org$pandalanguage$pandac$Position position452;
    org$pandalanguage$pandac$Position position457;
    org$pandalanguage$pandac$Position position462;
    org$pandalanguage$pandac$Position position467;
    org$pandalanguage$pandac$Position position472;
    org$pandalanguage$pandac$Position position477;
    org$pandalanguage$pandac$Position position482;
    org$pandalanguage$pandac$Position position487;
    org$pandalanguage$pandac$Position position492;
    org$pandalanguage$pandac$Position position497;
    org$pandalanguage$pandac$Position position502;
    org$pandalanguage$pandac$Position position507;
    org$pandalanguage$pandac$Position position512;
    int $tmp264;
    {
        $tmp266 = self;
        $match$150_9265 = $tmp266;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp266));
        panda$core$Bit $tmp267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp267.value) {
        {
            org$pandalanguage$pandac$Position* $tmp269 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position268 = *$tmp269;
            $returnValue270 = position268;
            $tmp264 = 0;
            goto $l262;
            $l271:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp273.value) {
        {
            org$pandalanguage$pandac$Position* $tmp275 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position274 = *$tmp275;
            $returnValue270 = position274;
            $tmp264 = 1;
            goto $l262;
            $l276:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp278.value) {
        {
            org$pandalanguage$pandac$Position* $tmp280 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position279 = *$tmp280;
            $returnValue270 = position279;
            $tmp264 = 2;
            goto $l262;
            $l281:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp283.value) {
        {
            org$pandalanguage$pandac$Position* $tmp285 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position284 = *$tmp285;
            $returnValue270 = position284;
            $tmp264 = 3;
            goto $l262;
            $l286:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp288.value) {
        {
            org$pandalanguage$pandac$Position* $tmp290 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position289 = *$tmp290;
            $returnValue270 = position289;
            $tmp264 = 4;
            goto $l262;
            $l291:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp293.value) {
        {
            org$pandalanguage$pandac$Position* $tmp295 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position294 = *$tmp295;
            $returnValue270 = position294;
            $tmp264 = 5;
            goto $l262;
            $l296:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp298.value) {
        {
            org$pandalanguage$pandac$Position* $tmp300 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position299 = *$tmp300;
            $returnValue270 = position299;
            $tmp264 = 6;
            goto $l262;
            $l301:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp303.value) {
        {
            org$pandalanguage$pandac$Position* $tmp305 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position304 = *$tmp305;
            $returnValue270 = position304;
            $tmp264 = 7;
            goto $l262;
            $l306:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp308.value) {
        {
            org$pandalanguage$pandac$Position* $tmp310 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position309 = *$tmp310;
            $returnValue270 = position309;
            $tmp264 = 8;
            goto $l262;
            $l311:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp313.value) {
        {
            org$pandalanguage$pandac$Position* $tmp315 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position314 = *$tmp315;
            $returnValue270 = position314;
            $tmp264 = 9;
            goto $l262;
            $l316:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp318.value) {
        {
            org$pandalanguage$pandac$Position* $tmp320 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position319 = *$tmp320;
            $returnValue270 = position319;
            $tmp264 = 10;
            goto $l262;
            $l321:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp323.value) {
        {
            org$pandalanguage$pandac$Position* $tmp325 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position324 = *$tmp325;
            $returnValue270 = position324;
            $tmp264 = 11;
            goto $l262;
            $l326:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp328.value) {
        {
            org$pandalanguage$pandac$Position* $tmp330 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position329 = *$tmp330;
            $returnValue270 = position329;
            $tmp264 = 12;
            goto $l262;
            $l331:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp333.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp335 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$150_9265->$data + 0));
            target334 = *$tmp335;
            org$pandalanguage$pandac$Position $tmp337 = (($fn336) target334->$class->vtable[3])(target334);
            $returnValue270 = $tmp337;
            $tmp264 = 13;
            goto $l262;
            $l338:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp340.value) {
        {
            org$pandalanguage$pandac$Position* $tmp342 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position341 = *$tmp342;
            $returnValue270 = position341;
            $tmp264 = 14;
            goto $l262;
            $l343:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp345.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp347 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$150_9265->$data + 0));
            m346 = *$tmp347;
            org$pandalanguage$pandac$Position $tmp349 = (($fn348) m346->$class->vtable[3])(m346);
            $returnValue270 = $tmp349;
            $tmp264 = 15;
            goto $l262;
            $l350:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp352.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp354 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$150_9265->$data + 0));
            expr353 = *$tmp354;
            org$pandalanguage$pandac$Position $tmp356 = (($fn355) expr353->$class->vtable[3])(expr353);
            $returnValue270 = $tmp356;
            $tmp264 = 16;
            goto $l262;
            $l357:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp359.value) {
        {
            org$pandalanguage$pandac$Position* $tmp361 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position360 = *$tmp361;
            $returnValue270 = position360;
            $tmp264 = 17;
            goto $l262;
            $l362:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp364.value) {
        {
            org$pandalanguage$pandac$Position* $tmp366 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position365 = *$tmp366;
            $returnValue270 = position365;
            $tmp264 = 18;
            goto $l262;
            $l367:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp369.value) {
        {
            org$pandalanguage$pandac$Position* $tmp371 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position370 = *$tmp371;
            $returnValue270 = position370;
            $tmp264 = 19;
            goto $l262;
            $l372:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp374.value) {
        {
            org$pandalanguage$pandac$Position* $tmp376 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position375 = *$tmp376;
            $returnValue270 = position375;
            $tmp264 = 20;
            goto $l262;
            $l377:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp379.value) {
        {
            org$pandalanguage$pandac$Position* $tmp381 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position380 = *$tmp381;
            $returnValue270 = position380;
            $tmp264 = 21;
            goto $l262;
            $l382:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp384.value) {
        {
            org$pandalanguage$pandac$Position* $tmp386 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position385 = *$tmp386;
            $returnValue270 = position385;
            $tmp264 = 22;
            goto $l262;
            $l387:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp389.value) {
        {
            org$pandalanguage$pandac$Position* $tmp391 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position390 = *$tmp391;
            $returnValue270 = position390;
            $tmp264 = 23;
            goto $l262;
            $l392:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp394.value) {
        {
            org$pandalanguage$pandac$Position* $tmp396 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position395 = *$tmp396;
            $returnValue270 = position395;
            $tmp264 = 24;
            goto $l262;
            $l397:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp399.value) {
        {
            org$pandalanguage$pandac$Position* $tmp401 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position400 = *$tmp401;
            $returnValue270 = position400;
            $tmp264 = 25;
            goto $l262;
            $l402:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp404.value) {
        {
            org$pandalanguage$pandac$Position* $tmp406 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position405 = *$tmp406;
            $returnValue270 = position405;
            $tmp264 = 26;
            goto $l262;
            $l407:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp409.value) {
        {
            org$pandalanguage$pandac$Position* $tmp411 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position410 = *$tmp411;
            $returnValue270 = position410;
            $tmp264 = 27;
            goto $l262;
            $l412:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp414.value) {
        {
            org$pandalanguage$pandac$Position* $tmp416 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position415 = *$tmp416;
            $returnValue270 = position415;
            $tmp264 = 28;
            goto $l262;
            $l417:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp419.value) {
        {
            org$pandalanguage$pandac$Position* $tmp421 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position420 = *$tmp421;
            $returnValue270 = position420;
            $tmp264 = 29;
            goto $l262;
            $l422:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp424.value) {
        {
            org$pandalanguage$pandac$Position* $tmp426 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position425 = *$tmp426;
            $returnValue270 = position425;
            $tmp264 = 30;
            goto $l262;
            $l427:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp429.value) {
        {
            org$pandalanguage$pandac$Position* $tmp431 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position430 = *$tmp431;
            $returnValue270 = position430;
            $tmp264 = 31;
            goto $l262;
            $l432:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp434.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp436 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$150_9265->$data + 0));
            base435 = *$tmp436;
            org$pandalanguage$pandac$Position $tmp438 = (($fn437) base435->$class->vtable[3])(base435);
            $returnValue270 = $tmp438;
            $tmp264 = 32;
            goto $l262;
            $l439:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp441.value) {
        {
            org$pandalanguage$pandac$Position* $tmp443 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position442 = *$tmp443;
            $returnValue270 = position442;
            $tmp264 = 33;
            goto $l262;
            $l444:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp446.value) {
        {
            org$pandalanguage$pandac$Position* $tmp448 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position447 = *$tmp448;
            $returnValue270 = position447;
            $tmp264 = 34;
            goto $l262;
            $l449:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp451.value) {
        {
            org$pandalanguage$pandac$Position* $tmp453 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position452 = *$tmp453;
            $returnValue270 = position452;
            $tmp264 = 35;
            goto $l262;
            $l454:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp456.value) {
        {
            org$pandalanguage$pandac$Position* $tmp458 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position457 = *$tmp458;
            $returnValue270 = position457;
            $tmp264 = 36;
            goto $l262;
            $l459:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp461.value) {
        {
            org$pandalanguage$pandac$Position* $tmp463 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position462 = *$tmp463;
            $returnValue270 = position462;
            $tmp264 = 37;
            goto $l262;
            $l464:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp466.value) {
        {
            org$pandalanguage$pandac$Position* $tmp468 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position467 = *$tmp468;
            $returnValue270 = position467;
            $tmp264 = 38;
            goto $l262;
            $l469:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp471.value) {
        {
            org$pandalanguage$pandac$Position* $tmp473 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position472 = *$tmp473;
            $returnValue270 = position472;
            $tmp264 = 39;
            goto $l262;
            $l474:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp476.value) {
        {
            org$pandalanguage$pandac$Position* $tmp478 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position477 = *$tmp478;
            $returnValue270 = position477;
            $tmp264 = 40;
            goto $l262;
            $l479:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp481.value) {
        {
            org$pandalanguage$pandac$Position* $tmp483 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position482 = *$tmp483;
            $returnValue270 = position482;
            $tmp264 = 41;
            goto $l262;
            $l484:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp486.value) {
        {
            org$pandalanguage$pandac$Position* $tmp488 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position487 = *$tmp488;
            $returnValue270 = position487;
            $tmp264 = 42;
            goto $l262;
            $l489:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp491.value) {
        {
            org$pandalanguage$pandac$Position* $tmp493 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position492 = *$tmp493;
            $returnValue270 = position492;
            $tmp264 = 43;
            goto $l262;
            $l494:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp496.value) {
        {
            org$pandalanguage$pandac$Position* $tmp498 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position497 = *$tmp498;
            $returnValue270 = position497;
            $tmp264 = 44;
            goto $l262;
            $l499:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp501.value) {
        {
            org$pandalanguage$pandac$Position* $tmp503 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position502 = *$tmp503;
            $returnValue270 = position502;
            $tmp264 = 45;
            goto $l262;
            $l504:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp506.value) {
        {
            org$pandalanguage$pandac$Position* $tmp508 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position507 = *$tmp508;
            $returnValue270 = position507;
            $tmp264 = 46;
            goto $l262;
            $l509:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9265->$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp511.value) {
        {
            org$pandalanguage$pandac$Position* $tmp513 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9265->$data + 0));
            position512 = *$tmp513;
            $returnValue270 = position512;
            $tmp264 = 47;
            goto $l262;
            $l514:;
            return $returnValue270;
        }
        }
        else {
        {
            if (((panda$core$Bit) { false }).value) goto $l516; else goto $l517;
            $l517:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s518, (panda$core$Int64) { 248 });
            abort();
            $l516:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp264 = -1;
    goto $l262;
    $l262:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
    switch ($tmp264) {
        case 29: goto $l422;
        case 21: goto $l382;
        case 4: goto $l291;
        case 28: goto $l417;
        case 3: goto $l286;
        case 20: goto $l377;
        case 33: goto $l444;
        case -1: goto $l519;
        case 30: goto $l427;
        case 43: goto $l494;
        case 19: goto $l372;
        case 18: goto $l367;
        case 1: goto $l276;
        case 8: goto $l311;
        case 0: goto $l271;
        case 12: goto $l331;
        case 7: goto $l306;
        case 31: goto $l432;
        case 42: goto $l489;
        case 11: goto $l326;
        case 27: goto $l412;
        case 40: goto $l479;
        case 14: goto $l343;
        case 35: goto $l454;
        case 32: goto $l439;
        case 41: goto $l484;
        case 13: goto $l338;
        case 6: goto $l301;
        case 26: goto $l407;
        case 34: goto $l449;
        case 5: goto $l296;
        case 15: goto $l350;
        case 24: goto $l397;
        case 36: goto $l459;
        case 37: goto $l464;
        case 2: goto $l281;
        case 47: goto $l514;
        case 25: goto $l402;
        case 39: goto $l474;
        case 23: goto $l392;
        case 46: goto $l509;
        case 16: goto $l357;
        case 22: goto $l387;
        case 17: goto $l362;
        case 38: goto $l469;
        case 10: goto $l321;
        case 45: goto $l504;
        case 44: goto $l499;
        case 9: goto $l316;
    }
    $l519:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$253_9523 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp524;
    org$pandalanguage$pandac$IRNode* test526 = NULL;
    org$pandalanguage$pandac$IRNode* msg528 = NULL;
    panda$core$Bit $returnValue530;
    org$pandalanguage$pandac$IRNode* left544 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op546;
    org$pandalanguage$pandac$IRNode* right548 = NULL;
    panda$core$Bit bit564;
    panda$collections$ImmutableArray* statements569 = NULL;
    panda$collections$Iterator* Iter$263$17574 = NULL;
    panda$collections$Iterator* $tmp575;
    panda$collections$Iterator* $tmp576;
    org$pandalanguage$pandac$IRNode* s592 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp593;
    panda$core$Object* $tmp594;
    panda$core$String* label610 = NULL;
    org$pandalanguage$pandac$MethodRef* m615 = NULL;
    panda$collections$ImmutableArray* args617 = NULL;
    panda$collections$Iterator* Iter$275$17625 = NULL;
    panda$collections$Iterator* $tmp626;
    panda$collections$Iterator* $tmp627;
    org$pandalanguage$pandac$IRNode* arg643 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp644;
    panda$core$Object* $tmp645;
    org$pandalanguage$pandac$IRNode* value661 = NULL;
    org$pandalanguage$pandac$Type* type663 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce668 = NULL;
    org$pandalanguage$pandac$IRNode* base673 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce675 = NULL;
    panda$core$Int64 field677;
    org$pandalanguage$pandac$Type* type682 = NULL;
    org$pandalanguage$pandac$IRNode* call684 = NULL;
    org$pandalanguage$pandac$Type* Type691 = NULL;
    panda$core$String* label696 = NULL;
    org$pandalanguage$pandac$IRNode* target701 = NULL;
    org$pandalanguage$pandac$IRNode* value703 = NULL;
    panda$core$String* label713 = NULL;
    panda$collections$ImmutableArray* statements715 = NULL;
    org$pandalanguage$pandac$IRNode* test717 = NULL;
    panda$collections$Iterator* Iter$299$17726 = NULL;
    panda$collections$Iterator* $tmp727;
    panda$collections$Iterator* $tmp728;
    org$pandalanguage$pandac$IRNode* s744 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp745;
    panda$core$Object* $tmp746;
    org$pandalanguage$pandac$IRNode* base765 = NULL;
    org$pandalanguage$pandac$FieldDecl* field767 = NULL;
    org$pandalanguage$pandac$IRNode* test772 = NULL;
    panda$collections$ImmutableArray* ifTrue774 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse776 = NULL;
    panda$collections$Iterator* Iter$313$17785 = NULL;
    panda$collections$Iterator* $tmp786;
    panda$collections$Iterator* $tmp787;
    org$pandalanguage$pandac$IRNode* s803 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp804;
    panda$core$Object* $tmp805;
    panda$core$UInt64 value823;
    org$pandalanguage$pandac$IRNode* value828 = NULL;
    org$pandalanguage$pandac$IRNode* value835 = NULL;
    panda$core$String* label842 = NULL;
    panda$collections$ImmutableArray* statements844 = NULL;
    panda$collections$Iterator* Iter$326$17849 = NULL;
    panda$collections$Iterator* $tmp850;
    panda$collections$Iterator* $tmp851;
    org$pandalanguage$pandac$IRNode* s867 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp868;
    panda$core$Object* $tmp869;
    org$pandalanguage$pandac$IRNode* value885 = NULL;
    panda$collections$ImmutableArray* whens887 = NULL;
    panda$collections$ImmutableArray* other889 = NULL;
    panda$collections$Iterator* Iter$336$17898 = NULL;
    panda$collections$Iterator* $tmp899;
    panda$collections$Iterator* $tmp900;
    org$pandalanguage$pandac$IRNode* w916 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp917;
    panda$core$Object* $tmp918;
    panda$collections$Iterator* Iter$341$17934 = NULL;
    panda$collections$Iterator* $tmp935;
    panda$collections$Iterator* $tmp936;
    org$pandalanguage$pandac$IRNode* s952 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp953;
    panda$core$Object* $tmp954;
    panda$core$UInt64 value973;
    org$pandalanguage$pandac$parser$Token$Kind op981;
    org$pandalanguage$pandac$IRNode* base983 = NULL;
    panda$core$String* label990 = NULL;
    org$pandalanguage$pandac$IRNode* target992 = NULL;
    org$pandalanguage$pandac$IRNode* list994 = NULL;
    panda$collections$ImmutableArray* statements996 = NULL;
    panda$collections$Iterator* Iter$360$171005 = NULL;
    panda$collections$Iterator* $tmp1006;
    panda$collections$Iterator* $tmp1007;
    org$pandalanguage$pandac$IRNode* s1023 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1024;
    panda$core$Object* $tmp1025;
    panda$core$Real64 value1041;
    org$pandalanguage$pandac$IRNode* value1046 = NULL;
    panda$core$Int64 id1053;
    org$pandalanguage$pandac$IRNode* base1058 = NULL;
    panda$core$Int64 id1060;
    panda$core$String* str1070 = NULL;
    org$pandalanguage$pandac$IRNode* test1078 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue1080 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse1082 = NULL;
    org$pandalanguage$pandac$Type* type1099 = NULL;
    panda$core$String* name1104 = NULL;
    org$pandalanguage$pandac$IRNode* base1110 = NULL;
    panda$collections$ImmutableArray* args1112 = NULL;
    org$pandalanguage$pandac$IRNode* target1122 = NULL;
    panda$collections$ImmutableArray* methods1124 = NULL;
    panda$collections$ImmutableArray* args1126 = NULL;
    org$pandalanguage$pandac$IRNode* target1132 = NULL;
    panda$collections$ImmutableArray* methods1134 = NULL;
    org$pandalanguage$pandac$IRNode* start1140 = NULL;
    org$pandalanguage$pandac$IRNode* end1142 = NULL;
    panda$core$Bit inclusive1144;
    org$pandalanguage$pandac$IRNode* step1146 = NULL;
    org$pandalanguage$pandac$Variable$Kind kind1152;
    panda$collections$ImmutableArray* decls1154 = NULL;
    panda$collections$Iterator* Iter$397$171159 = NULL;
    panda$collections$Iterator* $tmp1160;
    panda$collections$Iterator* $tmp1161;
    org$pandalanguage$pandac$IRNode* d1177 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1178;
    panda$core$Object* $tmp1179;
    org$pandalanguage$pandac$Variable* variable1195 = NULL;
    panda$collections$ImmutableArray* tests1200 = NULL;
    panda$collections$ImmutableArray* statements1202 = NULL;
    panda$collections$Iterator* Iter$406$171207 = NULL;
    panda$collections$Iterator* $tmp1208;
    panda$collections$Iterator* $tmp1209;
    org$pandalanguage$pandac$IRNode* t1225 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1226;
    panda$core$Object* $tmp1227;
    panda$collections$Iterator* Iter$411$171243 = NULL;
    panda$collections$Iterator* $tmp1244;
    panda$collections$Iterator* $tmp1245;
    org$pandalanguage$pandac$IRNode* s1261 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1262;
    panda$core$Object* $tmp1263;
    panda$core$String* label1279 = NULL;
    org$pandalanguage$pandac$IRNode* test1281 = NULL;
    panda$collections$ImmutableArray* statements1283 = NULL;
    panda$collections$Iterator* Iter$421$171292 = NULL;
    panda$collections$Iterator* $tmp1293;
    panda$collections$Iterator* $tmp1294;
    org$pandalanguage$pandac$IRNode* s1310 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1311;
    panda$core$Object* $tmp1312;
    int $tmp522;
    {
        $tmp524 = self;
        $match$253_9523 = $tmp524;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp524));
        panda$core$Bit $tmp525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp525.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp527 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 16));
            test526 = *$tmp527;
            org$pandalanguage$pandac$IRNode** $tmp529 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 24));
            msg528 = *$tmp529;
            panda$core$Bit $tmp533 = (($fn532) test526->$class->vtable[4])(test526);
            bool $tmp531 = $tmp533.value;
            if ($tmp531) goto $l534;
            panda$core$Bit $tmp536 = (($fn535) msg528->$class->vtable[4])(msg528);
            $tmp531 = $tmp536.value;
            $l534:;
            panda$core$Bit $tmp537 = { $tmp531 };
            $returnValue530 = $tmp537;
            $tmp522 = 0;
            goto $l520;
            $l538:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp540.value) {
        {
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 1;
            goto $l520;
            $l541:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp543.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp545 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 24));
            left544 = *$tmp545;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp547 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$253_9523->$data + 32));
            op546 = *$tmp547;
            org$pandalanguage$pandac$IRNode** $tmp549 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 40));
            right548 = *$tmp549;
            panda$core$Bit $tmp552 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(op546);
            bool $tmp551 = $tmp552.value;
            if ($tmp551) goto $l553;
            panda$core$Bit $tmp555 = (($fn554) left544->$class->vtable[4])(left544);
            $tmp551 = $tmp555.value;
            $l553:;
            panda$core$Bit $tmp556 = { $tmp551 };
            bool $tmp550 = $tmp556.value;
            if ($tmp550) goto $l557;
            panda$core$Bit $tmp559 = (($fn558) right548->$class->vtable[4])(right548);
            $tmp550 = $tmp559.value;
            $l557:;
            panda$core$Bit $tmp560 = { $tmp550 };
            $returnValue530 = $tmp560;
            $tmp522 = 2;
            goto $l520;
            $l561:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp563.value) {
        {
            panda$core$Bit* $tmp565 = ((panda$core$Bit*) ((char*) $match$253_9523->$data + 24));
            bit564 = *$tmp565;
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 3;
            goto $l520;
            $l566:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp568.value) {
        {
            panda$collections$ImmutableArray** $tmp570 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9523->$data + 16));
            statements569 = *$tmp570;
            {
                int $tmp573;
                {
                    ITable* $tmp577 = ((panda$collections$Iterable*) statements569)->$class->itable;
                    while ($tmp577->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp577 = $tmp577->next;
                    }
                    $fn579 $tmp578 = $tmp577->methods[0];
                    panda$collections$Iterator* $tmp580 = $tmp578(((panda$collections$Iterable*) statements569));
                    $tmp576 = $tmp580;
                    $tmp575 = $tmp576;
                    Iter$263$17574 = $tmp575;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp575));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp576));
                    $l581:;
                    ITable* $tmp584 = Iter$263$17574->$class->itable;
                    while ($tmp584->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp584 = $tmp584->next;
                    }
                    $fn586 $tmp585 = $tmp584->methods[0];
                    panda$core$Bit $tmp587 = $tmp585(Iter$263$17574);
                    panda$core$Bit $tmp588 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp587);
                    bool $tmp583 = $tmp588.value;
                    if (!$tmp583) goto $l582;
                    {
                        int $tmp591;
                        {
                            ITable* $tmp595 = Iter$263$17574->$class->itable;
                            while ($tmp595->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp595 = $tmp595->next;
                            }
                            $fn597 $tmp596 = $tmp595->methods[1];
                            panda$core$Object* $tmp598 = $tmp596(Iter$263$17574);
                            $tmp594 = $tmp598;
                            $tmp593 = ((org$pandalanguage$pandac$IRNode*) $tmp594);
                            s592 = $tmp593;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp593));
                            panda$core$Panda$unref$panda$core$Object($tmp594);
                            panda$core$Bit $tmp600 = (($fn599) s592->$class->vtable[4])(s592);
                            if ($tmp600.value) {
                            {
                                $returnValue530 = ((panda$core$Bit) { true });
                                $tmp591 = 0;
                                goto $l589;
                                $l601:;
                                $tmp573 = 0;
                                goto $l571;
                                $l602:;
                                $tmp522 = 4;
                                goto $l520;
                                $l603:;
                                return $returnValue530;
                            }
                            }
                        }
                        $tmp591 = -1;
                        goto $l589;
                        $l589:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s592));
                        s592 = NULL;
                        switch ($tmp591) {
                            case -1: goto $l605;
                            case 0: goto $l601;
                        }
                        $l605:;
                    }
                    goto $l581;
                    $l582:;
                }
                $tmp573 = -1;
                goto $l571;
                $l571:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$263$17574));
                Iter$263$17574 = NULL;
                switch ($tmp573) {
                    case 0: goto $l602;
                    case -1: goto $l606;
                }
                $l606:;
            }
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 5;
            goto $l520;
            $l607:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp609.value) {
        {
            panda$core$String** $tmp611 = ((panda$core$String**) ((char*) $match$253_9523->$data + 16));
            label610 = *$tmp611;
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 6;
            goto $l520;
            $l612:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp614.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp616 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$253_9523->$data + 24));
            m615 = *$tmp616;
            panda$collections$ImmutableArray** $tmp618 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9523->$data + 32));
            args617 = *$tmp618;
            panda$core$Bit $tmp619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m615->value->methodKind.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp619.value) {
            {
                $returnValue530 = ((panda$core$Bit) { true });
                $tmp522 = 7;
                goto $l520;
                $l620:;
                return $returnValue530;
            }
            }
            {
                int $tmp624;
                {
                    ITable* $tmp628 = ((panda$collections$Iterable*) args617)->$class->itable;
                    while ($tmp628->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp628 = $tmp628->next;
                    }
                    $fn630 $tmp629 = $tmp628->methods[0];
                    panda$collections$Iterator* $tmp631 = $tmp629(((panda$collections$Iterable*) args617));
                    $tmp627 = $tmp631;
                    $tmp626 = $tmp627;
                    Iter$275$17625 = $tmp626;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp626));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp627));
                    $l632:;
                    ITable* $tmp635 = Iter$275$17625->$class->itable;
                    while ($tmp635->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp635 = $tmp635->next;
                    }
                    $fn637 $tmp636 = $tmp635->methods[0];
                    panda$core$Bit $tmp638 = $tmp636(Iter$275$17625);
                    panda$core$Bit $tmp639 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp638);
                    bool $tmp634 = $tmp639.value;
                    if (!$tmp634) goto $l633;
                    {
                        int $tmp642;
                        {
                            ITable* $tmp646 = Iter$275$17625->$class->itable;
                            while ($tmp646->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp646 = $tmp646->next;
                            }
                            $fn648 $tmp647 = $tmp646->methods[1];
                            panda$core$Object* $tmp649 = $tmp647(Iter$275$17625);
                            $tmp645 = $tmp649;
                            $tmp644 = ((org$pandalanguage$pandac$IRNode*) $tmp645);
                            arg643 = $tmp644;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp644));
                            panda$core$Panda$unref$panda$core$Object($tmp645);
                            panda$core$Bit $tmp651 = (($fn650) arg643->$class->vtable[4])(arg643);
                            if ($tmp651.value) {
                            {
                                $returnValue530 = ((panda$core$Bit) { true });
                                $tmp642 = 0;
                                goto $l640;
                                $l652:;
                                $tmp624 = 0;
                                goto $l622;
                                $l653:;
                                $tmp522 = 8;
                                goto $l520;
                                $l654:;
                                return $returnValue530;
                            }
                            }
                        }
                        $tmp642 = -1;
                        goto $l640;
                        $l640:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg643));
                        arg643 = NULL;
                        switch ($tmp642) {
                            case -1: goto $l656;
                            case 0: goto $l652;
                        }
                        $l656:;
                    }
                    goto $l632;
                    $l633:;
                }
                $tmp624 = -1;
                goto $l622;
                $l622:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$275$17625));
                Iter$275$17625 = NULL;
                switch ($tmp624) {
                    case 0: goto $l653;
                    case -1: goto $l657;
                }
                $l657:;
            }
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 9;
            goto $l520;
            $l658:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp660.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp662 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 16));
            value661 = *$tmp662;
            org$pandalanguage$pandac$Type** $tmp664 = ((org$pandalanguage$pandac$Type**) ((char*) $match$253_9523->$data + 24));
            type663 = *$tmp664;
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 10;
            goto $l520;
            $l665:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp667.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp669 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$253_9523->$data + 16));
            ce668 = *$tmp669;
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 11;
            goto $l520;
            $l670:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp672.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp674 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 16));
            base673 = *$tmp674;
            org$pandalanguage$pandac$ChoiceEntry** $tmp676 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$253_9523->$data + 24));
            ce675 = *$tmp676;
            panda$core$Int64* $tmp678 = ((panda$core$Int64*) ((char*) $match$253_9523->$data + 32));
            field677 = *$tmp678;
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 12;
            goto $l520;
            $l679:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp681.value) {
        {
            org$pandalanguage$pandac$Type** $tmp683 = ((org$pandalanguage$pandac$Type**) ((char*) $match$253_9523->$data + 16));
            type682 = *$tmp683;
            org$pandalanguage$pandac$IRNode** $tmp685 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 24));
            call684 = *$tmp685;
            panda$core$Bit $tmp687 = (($fn686) call684->$class->vtable[4])(call684);
            $returnValue530 = $tmp687;
            $tmp522 = 13;
            goto $l520;
            $l688:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp690.value) {
        {
            org$pandalanguage$pandac$Type** $tmp692 = ((org$pandalanguage$pandac$Type**) ((char*) $match$253_9523->$data + 16));
            Type691 = *$tmp692;
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 14;
            goto $l520;
            $l693:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp695.value) {
        {
            panda$core$String** $tmp697 = ((panda$core$String**) ((char*) $match$253_9523->$data + 16));
            label696 = *$tmp697;
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 15;
            goto $l520;
            $l698:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp700.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp702 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 0));
            target701 = *$tmp702;
            org$pandalanguage$pandac$IRNode** $tmp704 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 8));
            value703 = *$tmp704;
            bool $tmp705 = ((panda$core$Bit) { value703 != NULL }).value;
            if (!$tmp705) goto $l706;
            panda$core$Bit $tmp708 = (($fn707) value703->$class->vtable[4])(value703);
            $tmp705 = $tmp708.value;
            $l706:;
            panda$core$Bit $tmp709 = { $tmp705 };
            $returnValue530 = $tmp709;
            $tmp522 = 16;
            goto $l520;
            $l710:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp712.value) {
        {
            panda$core$String** $tmp714 = ((panda$core$String**) ((char*) $match$253_9523->$data + 16));
            label713 = *$tmp714;
            panda$collections$ImmutableArray** $tmp716 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9523->$data + 24));
            statements715 = *$tmp716;
            org$pandalanguage$pandac$IRNode** $tmp718 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 32));
            test717 = *$tmp718;
            panda$core$Bit $tmp720 = (($fn719) test717->$class->vtable[4])(test717);
            if ($tmp720.value) {
            {
                $returnValue530 = ((panda$core$Bit) { true });
                $tmp522 = 17;
                goto $l520;
                $l721:;
                return $returnValue530;
            }
            }
            {
                int $tmp725;
                {
                    ITable* $tmp729 = ((panda$collections$Iterable*) statements715)->$class->itable;
                    while ($tmp729->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp729 = $tmp729->next;
                    }
                    $fn731 $tmp730 = $tmp729->methods[0];
                    panda$collections$Iterator* $tmp732 = $tmp730(((panda$collections$Iterable*) statements715));
                    $tmp728 = $tmp732;
                    $tmp727 = $tmp728;
                    Iter$299$17726 = $tmp727;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp727));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp728));
                    $l733:;
                    ITable* $tmp736 = Iter$299$17726->$class->itable;
                    while ($tmp736->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp736 = $tmp736->next;
                    }
                    $fn738 $tmp737 = $tmp736->methods[0];
                    panda$core$Bit $tmp739 = $tmp737(Iter$299$17726);
                    panda$core$Bit $tmp740 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp739);
                    bool $tmp735 = $tmp740.value;
                    if (!$tmp735) goto $l734;
                    {
                        int $tmp743;
                        {
                            ITable* $tmp747 = Iter$299$17726->$class->itable;
                            while ($tmp747->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp747 = $tmp747->next;
                            }
                            $fn749 $tmp748 = $tmp747->methods[1];
                            panda$core$Object* $tmp750 = $tmp748(Iter$299$17726);
                            $tmp746 = $tmp750;
                            $tmp745 = ((org$pandalanguage$pandac$IRNode*) $tmp746);
                            s744 = $tmp745;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp745));
                            panda$core$Panda$unref$panda$core$Object($tmp746);
                            panda$core$Bit $tmp752 = (($fn751) s744->$class->vtable[4])(s744);
                            if ($tmp752.value) {
                            {
                                $returnValue530 = ((panda$core$Bit) { true });
                                $tmp743 = 0;
                                goto $l741;
                                $l753:;
                                $tmp725 = 0;
                                goto $l723;
                                $l754:;
                                $tmp522 = 18;
                                goto $l520;
                                $l755:;
                                return $returnValue530;
                            }
                            }
                        }
                        $tmp743 = -1;
                        goto $l741;
                        $l741:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s744));
                        s744 = NULL;
                        switch ($tmp743) {
                            case -1: goto $l757;
                            case 0: goto $l753;
                        }
                        $l757:;
                    }
                    goto $l733;
                    $l734:;
                }
                $tmp725 = -1;
                goto $l723;
                $l723:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$299$17726));
                Iter$299$17726 = NULL;
                switch ($tmp725) {
                    case 0: goto $l754;
                    case -1: goto $l758;
                }
                $l758:;
            }
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 19;
            goto $l520;
            $l759:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp761.value) {
        {
            $returnValue530 = ((panda$core$Bit) { true });
            $tmp522 = 20;
            goto $l520;
            $l762:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp764.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp766 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 24));
            base765 = *$tmp766;
            org$pandalanguage$pandac$FieldDecl** $tmp768 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$253_9523->$data + 32));
            field767 = *$tmp768;
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 21;
            goto $l520;
            $l769:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp771.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp773 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 16));
            test772 = *$tmp773;
            panda$collections$ImmutableArray** $tmp775 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9523->$data + 24));
            ifTrue774 = *$tmp775;
            org$pandalanguage$pandac$IRNode** $tmp777 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 32));
            ifFalse776 = *$tmp777;
            panda$core$Bit $tmp779 = (($fn778) test772->$class->vtable[4])(test772);
            if ($tmp779.value) {
            {
                $returnValue530 = ((panda$core$Bit) { true });
                $tmp522 = 22;
                goto $l520;
                $l780:;
                return $returnValue530;
            }
            }
            {
                int $tmp784;
                {
                    ITable* $tmp788 = ((panda$collections$Iterable*) ifTrue774)->$class->itable;
                    while ($tmp788->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp788 = $tmp788->next;
                    }
                    $fn790 $tmp789 = $tmp788->methods[0];
                    panda$collections$Iterator* $tmp791 = $tmp789(((panda$collections$Iterable*) ifTrue774));
                    $tmp787 = $tmp791;
                    $tmp786 = $tmp787;
                    Iter$313$17785 = $tmp786;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp786));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp787));
                    $l792:;
                    ITable* $tmp795 = Iter$313$17785->$class->itable;
                    while ($tmp795->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp795 = $tmp795->next;
                    }
                    $fn797 $tmp796 = $tmp795->methods[0];
                    panda$core$Bit $tmp798 = $tmp796(Iter$313$17785);
                    panda$core$Bit $tmp799 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp798);
                    bool $tmp794 = $tmp799.value;
                    if (!$tmp794) goto $l793;
                    {
                        int $tmp802;
                        {
                            ITable* $tmp806 = Iter$313$17785->$class->itable;
                            while ($tmp806->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp806 = $tmp806->next;
                            }
                            $fn808 $tmp807 = $tmp806->methods[1];
                            panda$core$Object* $tmp809 = $tmp807(Iter$313$17785);
                            $tmp805 = $tmp809;
                            $tmp804 = ((org$pandalanguage$pandac$IRNode*) $tmp805);
                            s803 = $tmp804;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp804));
                            panda$core$Panda$unref$panda$core$Object($tmp805);
                            panda$core$Bit $tmp811 = (($fn810) s803->$class->vtable[4])(s803);
                            if ($tmp811.value) {
                            {
                                $returnValue530 = ((panda$core$Bit) { true });
                                $tmp802 = 0;
                                goto $l800;
                                $l812:;
                                $tmp784 = 0;
                                goto $l782;
                                $l813:;
                                $tmp522 = 23;
                                goto $l520;
                                $l814:;
                                return $returnValue530;
                            }
                            }
                        }
                        $tmp802 = -1;
                        goto $l800;
                        $l800:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s803));
                        s803 = NULL;
                        switch ($tmp802) {
                            case 0: goto $l812;
                            case -1: goto $l816;
                        }
                        $l816:;
                    }
                    goto $l792;
                    $l793:;
                }
                $tmp784 = -1;
                goto $l782;
                $l782:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$313$17785));
                Iter$313$17785 = NULL;
                switch ($tmp784) {
                    case 0: goto $l813;
                    case -1: goto $l817;
                }
                $l817:;
            }
            panda$core$Bit $tmp819 = (($fn818) ifFalse776->$class->vtable[4])(ifFalse776);
            $returnValue530 = $tmp819;
            $tmp522 = 24;
            goto $l520;
            $l820:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp822.value) {
        {
            panda$core$UInt64* $tmp824 = ((panda$core$UInt64*) ((char*) $match$253_9523->$data + 24));
            value823 = *$tmp824;
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 25;
            goto $l520;
            $l825:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp827.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp829 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 16));
            value828 = *$tmp829;
            panda$core$Bit $tmp831 = (($fn830) value828->$class->vtable[4])(value828);
            $returnValue530 = $tmp831;
            $tmp522 = 26;
            goto $l520;
            $l832:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp834.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp836 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 16));
            value835 = *$tmp836;
            panda$core$Bit $tmp838 = (($fn837) value835->$class->vtable[4])(value835);
            $returnValue530 = $tmp838;
            $tmp522 = 27;
            goto $l520;
            $l839:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp841.value) {
        {
            panda$core$String** $tmp843 = ((panda$core$String**) ((char*) $match$253_9523->$data + 16));
            label842 = *$tmp843;
            panda$collections$ImmutableArray** $tmp845 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9523->$data + 24));
            statements844 = *$tmp845;
            {
                int $tmp848;
                {
                    ITable* $tmp852 = ((panda$collections$Iterable*) statements844)->$class->itable;
                    while ($tmp852->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp852 = $tmp852->next;
                    }
                    $fn854 $tmp853 = $tmp852->methods[0];
                    panda$collections$Iterator* $tmp855 = $tmp853(((panda$collections$Iterable*) statements844));
                    $tmp851 = $tmp855;
                    $tmp850 = $tmp851;
                    Iter$326$17849 = $tmp850;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp850));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp851));
                    $l856:;
                    ITable* $tmp859 = Iter$326$17849->$class->itable;
                    while ($tmp859->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp859 = $tmp859->next;
                    }
                    $fn861 $tmp860 = $tmp859->methods[0];
                    panda$core$Bit $tmp862 = $tmp860(Iter$326$17849);
                    panda$core$Bit $tmp863 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp862);
                    bool $tmp858 = $tmp863.value;
                    if (!$tmp858) goto $l857;
                    {
                        int $tmp866;
                        {
                            ITable* $tmp870 = Iter$326$17849->$class->itable;
                            while ($tmp870->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp870 = $tmp870->next;
                            }
                            $fn872 $tmp871 = $tmp870->methods[1];
                            panda$core$Object* $tmp873 = $tmp871(Iter$326$17849);
                            $tmp869 = $tmp873;
                            $tmp868 = ((org$pandalanguage$pandac$IRNode*) $tmp869);
                            s867 = $tmp868;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp868));
                            panda$core$Panda$unref$panda$core$Object($tmp869);
                            panda$core$Bit $tmp875 = (($fn874) s867->$class->vtable[4])(s867);
                            if ($tmp875.value) {
                            {
                                $returnValue530 = ((panda$core$Bit) { true });
                                $tmp866 = 0;
                                goto $l864;
                                $l876:;
                                $tmp848 = 0;
                                goto $l846;
                                $l877:;
                                $tmp522 = 28;
                                goto $l520;
                                $l878:;
                                return $returnValue530;
                            }
                            }
                        }
                        $tmp866 = -1;
                        goto $l864;
                        $l864:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s867));
                        s867 = NULL;
                        switch ($tmp866) {
                            case 0: goto $l876;
                            case -1: goto $l880;
                        }
                        $l880:;
                    }
                    goto $l856;
                    $l857:;
                }
                $tmp848 = -1;
                goto $l846;
                $l846:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$326$17849));
                Iter$326$17849 = NULL;
                switch ($tmp848) {
                    case 0: goto $l877;
                    case -1: goto $l881;
                }
                $l881:;
            }
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 29;
            goto $l520;
            $l882:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp884.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp886 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 16));
            value885 = *$tmp886;
            panda$collections$ImmutableArray** $tmp888 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9523->$data + 24));
            whens887 = *$tmp888;
            panda$collections$ImmutableArray** $tmp890 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9523->$data + 32));
            other889 = *$tmp890;
            panda$core$Bit $tmp892 = (($fn891) value885->$class->vtable[4])(value885);
            if ($tmp892.value) {
            {
                $returnValue530 = ((panda$core$Bit) { true });
                $tmp522 = 30;
                goto $l520;
                $l893:;
                return $returnValue530;
            }
            }
            {
                int $tmp897;
                {
                    ITable* $tmp901 = ((panda$collections$Iterable*) whens887)->$class->itable;
                    while ($tmp901->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp901 = $tmp901->next;
                    }
                    $fn903 $tmp902 = $tmp901->methods[0];
                    panda$collections$Iterator* $tmp904 = $tmp902(((panda$collections$Iterable*) whens887));
                    $tmp900 = $tmp904;
                    $tmp899 = $tmp900;
                    Iter$336$17898 = $tmp899;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp899));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp900));
                    $l905:;
                    ITable* $tmp908 = Iter$336$17898->$class->itable;
                    while ($tmp908->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp908 = $tmp908->next;
                    }
                    $fn910 $tmp909 = $tmp908->methods[0];
                    panda$core$Bit $tmp911 = $tmp909(Iter$336$17898);
                    panda$core$Bit $tmp912 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp911);
                    bool $tmp907 = $tmp912.value;
                    if (!$tmp907) goto $l906;
                    {
                        int $tmp915;
                        {
                            ITable* $tmp919 = Iter$336$17898->$class->itable;
                            while ($tmp919->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp919 = $tmp919->next;
                            }
                            $fn921 $tmp920 = $tmp919->methods[1];
                            panda$core$Object* $tmp922 = $tmp920(Iter$336$17898);
                            $tmp918 = $tmp922;
                            $tmp917 = ((org$pandalanguage$pandac$IRNode*) $tmp918);
                            w916 = $tmp917;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp917));
                            panda$core$Panda$unref$panda$core$Object($tmp918);
                            panda$core$Bit $tmp924 = (($fn923) w916->$class->vtable[4])(w916);
                            if ($tmp924.value) {
                            {
                                $returnValue530 = ((panda$core$Bit) { true });
                                $tmp915 = 0;
                                goto $l913;
                                $l925:;
                                $tmp897 = 0;
                                goto $l895;
                                $l926:;
                                $tmp522 = 31;
                                goto $l520;
                                $l927:;
                                return $returnValue530;
                            }
                            }
                        }
                        $tmp915 = -1;
                        goto $l913;
                        $l913:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w916));
                        w916 = NULL;
                        switch ($tmp915) {
                            case -1: goto $l929;
                            case 0: goto $l925;
                        }
                        $l929:;
                    }
                    goto $l905;
                    $l906:;
                }
                $tmp897 = -1;
                goto $l895;
                $l895:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$336$17898));
                Iter$336$17898 = NULL;
                switch ($tmp897) {
                    case -1: goto $l930;
                    case 0: goto $l926;
                }
                $l930:;
            }
            {
                int $tmp933;
                {
                    ITable* $tmp937 = ((panda$collections$Iterable*) other889)->$class->itable;
                    while ($tmp937->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp937 = $tmp937->next;
                    }
                    $fn939 $tmp938 = $tmp937->methods[0];
                    panda$collections$Iterator* $tmp940 = $tmp938(((panda$collections$Iterable*) other889));
                    $tmp936 = $tmp940;
                    $tmp935 = $tmp936;
                    Iter$341$17934 = $tmp935;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp935));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp936));
                    $l941:;
                    ITable* $tmp944 = Iter$341$17934->$class->itable;
                    while ($tmp944->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp944 = $tmp944->next;
                    }
                    $fn946 $tmp945 = $tmp944->methods[0];
                    panda$core$Bit $tmp947 = $tmp945(Iter$341$17934);
                    panda$core$Bit $tmp948 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp947);
                    bool $tmp943 = $tmp948.value;
                    if (!$tmp943) goto $l942;
                    {
                        int $tmp951;
                        {
                            ITable* $tmp955 = Iter$341$17934->$class->itable;
                            while ($tmp955->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp955 = $tmp955->next;
                            }
                            $fn957 $tmp956 = $tmp955->methods[1];
                            panda$core$Object* $tmp958 = $tmp956(Iter$341$17934);
                            $tmp954 = $tmp958;
                            $tmp953 = ((org$pandalanguage$pandac$IRNode*) $tmp954);
                            s952 = $tmp953;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp953));
                            panda$core$Panda$unref$panda$core$Object($tmp954);
                            panda$core$Bit $tmp960 = (($fn959) s952->$class->vtable[4])(s952);
                            if ($tmp960.value) {
                            {
                                $returnValue530 = ((panda$core$Bit) { true });
                                $tmp951 = 0;
                                goto $l949;
                                $l961:;
                                $tmp933 = 0;
                                goto $l931;
                                $l962:;
                                $tmp522 = 32;
                                goto $l520;
                                $l963:;
                                return $returnValue530;
                            }
                            }
                        }
                        $tmp951 = -1;
                        goto $l949;
                        $l949:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s952));
                        s952 = NULL;
                        switch ($tmp951) {
                            case 0: goto $l961;
                            case -1: goto $l965;
                        }
                        $l965:;
                    }
                    goto $l941;
                    $l942:;
                }
                $tmp933 = -1;
                goto $l931;
                $l931:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$341$17934));
                Iter$341$17934 = NULL;
                switch ($tmp933) {
                    case -1: goto $l966;
                    case 0: goto $l962;
                }
                $l966:;
            }
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 33;
            goto $l520;
            $l967:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp969.value) {
        {
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 34;
            goto $l520;
            $l970:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp972.value) {
        {
            panda$core$UInt64* $tmp974 = ((panda$core$UInt64*) ((char*) $match$253_9523->$data + 24));
            value973 = *$tmp974;
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 35;
            goto $l520;
            $l975:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp977.value) {
        {
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 36;
            goto $l520;
            $l978:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp980 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp980.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp982 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$253_9523->$data + 16));
            op981 = *$tmp982;
            org$pandalanguage$pandac$IRNode** $tmp984 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 24));
            base983 = *$tmp984;
            panda$core$Bit $tmp986 = (($fn985) base983->$class->vtable[4])(base983);
            $returnValue530 = $tmp986;
            $tmp522 = 37;
            goto $l520;
            $l987:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp989.value) {
        {
            panda$core$String** $tmp991 = ((panda$core$String**) ((char*) $match$253_9523->$data + 16));
            label990 = *$tmp991;
            org$pandalanguage$pandac$IRNode** $tmp993 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 24));
            target992 = *$tmp993;
            org$pandalanguage$pandac$IRNode** $tmp995 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 32));
            list994 = *$tmp995;
            panda$collections$ImmutableArray** $tmp997 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9523->$data + 40));
            statements996 = *$tmp997;
            panda$core$Bit $tmp999 = (($fn998) list994->$class->vtable[4])(list994);
            if ($tmp999.value) {
            {
                $returnValue530 = ((panda$core$Bit) { true });
                $tmp522 = 38;
                goto $l520;
                $l1000:;
                return $returnValue530;
            }
            }
            {
                int $tmp1004;
                {
                    ITable* $tmp1008 = ((panda$collections$Iterable*) statements996)->$class->itable;
                    while ($tmp1008->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1008 = $tmp1008->next;
                    }
                    $fn1010 $tmp1009 = $tmp1008->methods[0];
                    panda$collections$Iterator* $tmp1011 = $tmp1009(((panda$collections$Iterable*) statements996));
                    $tmp1007 = $tmp1011;
                    $tmp1006 = $tmp1007;
                    Iter$360$171005 = $tmp1006;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1006));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1007));
                    $l1012:;
                    ITable* $tmp1015 = Iter$360$171005->$class->itable;
                    while ($tmp1015->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1015 = $tmp1015->next;
                    }
                    $fn1017 $tmp1016 = $tmp1015->methods[0];
                    panda$core$Bit $tmp1018 = $tmp1016(Iter$360$171005);
                    panda$core$Bit $tmp1019 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1018);
                    bool $tmp1014 = $tmp1019.value;
                    if (!$tmp1014) goto $l1013;
                    {
                        int $tmp1022;
                        {
                            ITable* $tmp1026 = Iter$360$171005->$class->itable;
                            while ($tmp1026->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1026 = $tmp1026->next;
                            }
                            $fn1028 $tmp1027 = $tmp1026->methods[1];
                            panda$core$Object* $tmp1029 = $tmp1027(Iter$360$171005);
                            $tmp1025 = $tmp1029;
                            $tmp1024 = ((org$pandalanguage$pandac$IRNode*) $tmp1025);
                            s1023 = $tmp1024;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1024));
                            panda$core$Panda$unref$panda$core$Object($tmp1025);
                            panda$core$Bit $tmp1031 = (($fn1030) s1023->$class->vtable[4])(s1023);
                            if ($tmp1031.value) {
                            {
                                $returnValue530 = ((panda$core$Bit) { true });
                                $tmp1022 = 0;
                                goto $l1020;
                                $l1032:;
                                $tmp1004 = 0;
                                goto $l1002;
                                $l1033:;
                                $tmp522 = 39;
                                goto $l520;
                                $l1034:;
                                return $returnValue530;
                            }
                            }
                        }
                        $tmp1022 = -1;
                        goto $l1020;
                        $l1020:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1023));
                        s1023 = NULL;
                        switch ($tmp1022) {
                            case 0: goto $l1032;
                            case -1: goto $l1036;
                        }
                        $l1036:;
                    }
                    goto $l1012;
                    $l1013:;
                }
                $tmp1004 = -1;
                goto $l1002;
                $l1002:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$360$171005));
                Iter$360$171005 = NULL;
                switch ($tmp1004) {
                    case 0: goto $l1033;
                    case -1: goto $l1037;
                }
                $l1037:;
            }
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 40;
            goto $l520;
            $l1038:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp1040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1040.value) {
        {
            panda$core$Real64* $tmp1042 = ((panda$core$Real64*) ((char*) $match$253_9523->$data + 24));
            value1041 = *$tmp1042;
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 41;
            goto $l520;
            $l1043:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp1045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1045.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1047 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 16));
            value1046 = *$tmp1047;
            panda$core$Bit $tmp1049 = (($fn1048) value1046->$class->vtable[4])(value1046);
            $returnValue530 = $tmp1049;
            $tmp522 = 42;
            goto $l520;
            $l1050:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp1052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1052.value) {
        {
            panda$core$Int64* $tmp1054 = ((panda$core$Int64*) ((char*) $match$253_9523->$data + 24));
            id1053 = *$tmp1054;
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 43;
            goto $l520;
            $l1055:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp1057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1057.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1059 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 0));
            base1058 = *$tmp1059;
            panda$core$Int64* $tmp1061 = ((panda$core$Int64*) ((char*) $match$253_9523->$data + 8));
            id1060 = *$tmp1061;
            panda$core$Bit $tmp1063 = (($fn1062) base1058->$class->vtable[4])(base1058);
            $returnValue530 = $tmp1063;
            $tmp522 = 44;
            goto $l520;
            $l1064:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp1066 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1066.value) {
        {
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 45;
            goto $l520;
            $l1067:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp1069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1069.value) {
        {
            panda$core$String** $tmp1071 = ((panda$core$String**) ((char*) $match$253_9523->$data + 16));
            str1070 = *$tmp1071;
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 46;
            goto $l520;
            $l1072:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp1074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1074.value) {
        {
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 47;
            goto $l520;
            $l1075:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp1077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1077.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1079 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 16));
            test1078 = *$tmp1079;
            org$pandalanguage$pandac$IRNode** $tmp1081 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 24));
            ifTrue1080 = *$tmp1081;
            org$pandalanguage$pandac$IRNode** $tmp1083 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 32));
            ifFalse1082 = *$tmp1083;
            panda$core$Bit $tmp1087 = (($fn1086) test1078->$class->vtable[4])(test1078);
            bool $tmp1085 = $tmp1087.value;
            if ($tmp1085) goto $l1088;
            panda$core$Bit $tmp1090 = (($fn1089) ifTrue1080->$class->vtable[4])(ifTrue1080);
            $tmp1085 = $tmp1090.value;
            $l1088:;
            panda$core$Bit $tmp1091 = { $tmp1085 };
            bool $tmp1084 = $tmp1091.value;
            if ($tmp1084) goto $l1092;
            panda$core$Bit $tmp1094 = (($fn1093) ifFalse1082->$class->vtable[4])(ifFalse1082);
            $tmp1084 = $tmp1094.value;
            $l1092:;
            panda$core$Bit $tmp1095 = { $tmp1084 };
            $returnValue530 = $tmp1095;
            $tmp522 = 48;
            goto $l520;
            $l1096:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp1098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1098.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1100 = ((org$pandalanguage$pandac$Type**) ((char*) $match$253_9523->$data + 16));
            type1099 = *$tmp1100;
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 49;
            goto $l520;
            $l1101:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp1103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1103.value) {
        {
            panda$core$String** $tmp1105 = ((panda$core$String**) ((char*) $match$253_9523->$data + 16));
            name1104 = *$tmp1105;
            if (((panda$core$Bit) { false }).value) goto $l1106; else goto $l1107;
            $l1107:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1108, (panda$core$Int64) { 385 });
            abort();
            $l1106:;
        }
        }
        else {
        panda$core$Bit $tmp1109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1109.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1111 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 24));
            base1110 = *$tmp1111;
            panda$collections$ImmutableArray** $tmp1113 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9523->$data + 32));
            args1112 = *$tmp1113;
            if (((panda$core$Bit) { false }).value) goto $l1114; else goto $l1115;
            $l1115:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1116, (panda$core$Int64) { 387 });
            abort();
            $l1114:;
        }
        }
        else {
        panda$core$Bit $tmp1117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1117.value) {
        {
            if (((panda$core$Bit) { false }).value) goto $l1118; else goto $l1119;
            $l1119:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1120, (panda$core$Int64) { 389 });
            abort();
            $l1118:;
        }
        }
        else {
        panda$core$Bit $tmp1121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1121.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1123 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 24));
            target1122 = *$tmp1123;
            panda$collections$ImmutableArray** $tmp1125 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9523->$data + 32));
            methods1124 = *$tmp1125;
            panda$collections$ImmutableArray** $tmp1127 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9523->$data + 40));
            args1126 = *$tmp1127;
            if (((panda$core$Bit) { false }).value) goto $l1128; else goto $l1129;
            $l1129:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1130, (panda$core$Int64) { 391 });
            abort();
            $l1128:;
        }
        }
        else {
        panda$core$Bit $tmp1131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1131.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1133 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 16));
            target1132 = *$tmp1133;
            panda$collections$ImmutableArray** $tmp1135 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9523->$data + 24));
            methods1134 = *$tmp1135;
            if (((panda$core$Bit) { false }).value) goto $l1136; else goto $l1137;
            $l1137:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1138, (panda$core$Int64) { 393 });
            abort();
            $l1136:;
        }
        }
        else {
        panda$core$Bit $tmp1139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1139.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1141 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 16));
            start1140 = *$tmp1141;
            org$pandalanguage$pandac$IRNode** $tmp1143 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 24));
            end1142 = *$tmp1143;
            panda$core$Bit* $tmp1145 = ((panda$core$Bit*) ((char*) $match$253_9523->$data + 32));
            inclusive1144 = *$tmp1145;
            org$pandalanguage$pandac$IRNode** $tmp1147 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 33));
            step1146 = *$tmp1147;
            if (((panda$core$Bit) { false }).value) goto $l1148; else goto $l1149;
            $l1149:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1150, (panda$core$Int64) { 395 });
            abort();
            $l1148:;
        }
        }
        else {
        panda$core$Bit $tmp1151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp1151.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1153 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$253_9523->$data + 16));
            kind1152 = *$tmp1153;
            panda$collections$ImmutableArray** $tmp1155 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9523->$data + 24));
            decls1154 = *$tmp1155;
            {
                int $tmp1158;
                {
                    ITable* $tmp1162 = ((panda$collections$Iterable*) decls1154)->$class->itable;
                    while ($tmp1162->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1162 = $tmp1162->next;
                    }
                    $fn1164 $tmp1163 = $tmp1162->methods[0];
                    panda$collections$Iterator* $tmp1165 = $tmp1163(((panda$collections$Iterable*) decls1154));
                    $tmp1161 = $tmp1165;
                    $tmp1160 = $tmp1161;
                    Iter$397$171159 = $tmp1160;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1160));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1161));
                    $l1166:;
                    ITable* $tmp1169 = Iter$397$171159->$class->itable;
                    while ($tmp1169->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1169 = $tmp1169->next;
                    }
                    $fn1171 $tmp1170 = $tmp1169->methods[0];
                    panda$core$Bit $tmp1172 = $tmp1170(Iter$397$171159);
                    panda$core$Bit $tmp1173 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1172);
                    bool $tmp1168 = $tmp1173.value;
                    if (!$tmp1168) goto $l1167;
                    {
                        int $tmp1176;
                        {
                            ITable* $tmp1180 = Iter$397$171159->$class->itable;
                            while ($tmp1180->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1180 = $tmp1180->next;
                            }
                            $fn1182 $tmp1181 = $tmp1180->methods[1];
                            panda$core$Object* $tmp1183 = $tmp1181(Iter$397$171159);
                            $tmp1179 = $tmp1183;
                            $tmp1178 = ((org$pandalanguage$pandac$IRNode*) $tmp1179);
                            d1177 = $tmp1178;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1178));
                            panda$core$Panda$unref$panda$core$Object($tmp1179);
                            panda$core$Bit $tmp1185 = (($fn1184) d1177->$class->vtable[4])(d1177);
                            if ($tmp1185.value) {
                            {
                                $returnValue530 = ((panda$core$Bit) { true });
                                $tmp1176 = 0;
                                goto $l1174;
                                $l1186:;
                                $tmp1158 = 0;
                                goto $l1156;
                                $l1187:;
                                $tmp522 = 50;
                                goto $l520;
                                $l1188:;
                                return $returnValue530;
                            }
                            }
                        }
                        $tmp1176 = -1;
                        goto $l1174;
                        $l1174:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) d1177));
                        d1177 = NULL;
                        switch ($tmp1176) {
                            case -1: goto $l1190;
                            case 0: goto $l1186;
                        }
                        $l1190:;
                    }
                    goto $l1166;
                    $l1167:;
                }
                $tmp1158 = -1;
                goto $l1156;
                $l1156:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$397$171159));
                Iter$397$171159 = NULL;
                switch ($tmp1158) {
                    case 0: goto $l1187;
                    case -1: goto $l1191;
                }
                $l1191:;
            }
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 51;
            goto $l520;
            $l1192:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp1194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp1194.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp1196 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$253_9523->$data + 16));
            variable1195 = *$tmp1196;
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 52;
            goto $l520;
            $l1197:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp1199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp1199.value) {
        {
            panda$collections$ImmutableArray** $tmp1201 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9523->$data + 16));
            tests1200 = *$tmp1201;
            panda$collections$ImmutableArray** $tmp1203 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9523->$data + 24));
            statements1202 = *$tmp1203;
            {
                int $tmp1206;
                {
                    ITable* $tmp1210 = ((panda$collections$Iterable*) tests1200)->$class->itable;
                    while ($tmp1210->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1210 = $tmp1210->next;
                    }
                    $fn1212 $tmp1211 = $tmp1210->methods[0];
                    panda$collections$Iterator* $tmp1213 = $tmp1211(((panda$collections$Iterable*) tests1200));
                    $tmp1209 = $tmp1213;
                    $tmp1208 = $tmp1209;
                    Iter$406$171207 = $tmp1208;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1208));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1209));
                    $l1214:;
                    ITable* $tmp1217 = Iter$406$171207->$class->itable;
                    while ($tmp1217->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1217 = $tmp1217->next;
                    }
                    $fn1219 $tmp1218 = $tmp1217->methods[0];
                    panda$core$Bit $tmp1220 = $tmp1218(Iter$406$171207);
                    panda$core$Bit $tmp1221 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1220);
                    bool $tmp1216 = $tmp1221.value;
                    if (!$tmp1216) goto $l1215;
                    {
                        int $tmp1224;
                        {
                            ITable* $tmp1228 = Iter$406$171207->$class->itable;
                            while ($tmp1228->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1228 = $tmp1228->next;
                            }
                            $fn1230 $tmp1229 = $tmp1228->methods[1];
                            panda$core$Object* $tmp1231 = $tmp1229(Iter$406$171207);
                            $tmp1227 = $tmp1231;
                            $tmp1226 = ((org$pandalanguage$pandac$IRNode*) $tmp1227);
                            t1225 = $tmp1226;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1226));
                            panda$core$Panda$unref$panda$core$Object($tmp1227);
                            panda$core$Bit $tmp1233 = (($fn1232) t1225->$class->vtable[4])(t1225);
                            if ($tmp1233.value) {
                            {
                                $returnValue530 = ((panda$core$Bit) { true });
                                $tmp1224 = 0;
                                goto $l1222;
                                $l1234:;
                                $tmp1206 = 0;
                                goto $l1204;
                                $l1235:;
                                $tmp522 = 53;
                                goto $l520;
                                $l1236:;
                                return $returnValue530;
                            }
                            }
                        }
                        $tmp1224 = -1;
                        goto $l1222;
                        $l1222:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1225));
                        t1225 = NULL;
                        switch ($tmp1224) {
                            case -1: goto $l1238;
                            case 0: goto $l1234;
                        }
                        $l1238:;
                    }
                    goto $l1214;
                    $l1215:;
                }
                $tmp1206 = -1;
                goto $l1204;
                $l1204:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$406$171207));
                Iter$406$171207 = NULL;
                switch ($tmp1206) {
                    case 0: goto $l1235;
                    case -1: goto $l1239;
                }
                $l1239:;
            }
            {
                int $tmp1242;
                {
                    ITable* $tmp1246 = ((panda$collections$Iterable*) statements1202)->$class->itable;
                    while ($tmp1246->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1246 = $tmp1246->next;
                    }
                    $fn1248 $tmp1247 = $tmp1246->methods[0];
                    panda$collections$Iterator* $tmp1249 = $tmp1247(((panda$collections$Iterable*) statements1202));
                    $tmp1245 = $tmp1249;
                    $tmp1244 = $tmp1245;
                    Iter$411$171243 = $tmp1244;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1244));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1245));
                    $l1250:;
                    ITable* $tmp1253 = Iter$411$171243->$class->itable;
                    while ($tmp1253->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1253 = $tmp1253->next;
                    }
                    $fn1255 $tmp1254 = $tmp1253->methods[0];
                    panda$core$Bit $tmp1256 = $tmp1254(Iter$411$171243);
                    panda$core$Bit $tmp1257 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1256);
                    bool $tmp1252 = $tmp1257.value;
                    if (!$tmp1252) goto $l1251;
                    {
                        int $tmp1260;
                        {
                            ITable* $tmp1264 = Iter$411$171243->$class->itable;
                            while ($tmp1264->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1264 = $tmp1264->next;
                            }
                            $fn1266 $tmp1265 = $tmp1264->methods[1];
                            panda$core$Object* $tmp1267 = $tmp1265(Iter$411$171243);
                            $tmp1263 = $tmp1267;
                            $tmp1262 = ((org$pandalanguage$pandac$IRNode*) $tmp1263);
                            s1261 = $tmp1262;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1262));
                            panda$core$Panda$unref$panda$core$Object($tmp1263);
                            panda$core$Bit $tmp1269 = (($fn1268) s1261->$class->vtable[4])(s1261);
                            if ($tmp1269.value) {
                            {
                                $returnValue530 = ((panda$core$Bit) { true });
                                $tmp1260 = 0;
                                goto $l1258;
                                $l1270:;
                                $tmp1242 = 0;
                                goto $l1240;
                                $l1271:;
                                $tmp522 = 54;
                                goto $l520;
                                $l1272:;
                                return $returnValue530;
                            }
                            }
                        }
                        $tmp1260 = -1;
                        goto $l1258;
                        $l1258:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1261));
                        s1261 = NULL;
                        switch ($tmp1260) {
                            case -1: goto $l1274;
                            case 0: goto $l1270;
                        }
                        $l1274:;
                    }
                    goto $l1250;
                    $l1251:;
                }
                $tmp1242 = -1;
                goto $l1240;
                $l1240:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$411$171243));
                Iter$411$171243 = NULL;
                switch ($tmp1242) {
                    case 0: goto $l1271;
                    case -1: goto $l1275;
                }
                $l1275:;
            }
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 55;
            goto $l520;
            $l1276:;
            return $returnValue530;
        }
        }
        else {
        panda$core$Bit $tmp1278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9523->$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp1278.value) {
        {
            panda$core$String** $tmp1280 = ((panda$core$String**) ((char*) $match$253_9523->$data + 16));
            label1279 = *$tmp1280;
            org$pandalanguage$pandac$IRNode** $tmp1282 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9523->$data + 24));
            test1281 = *$tmp1282;
            panda$collections$ImmutableArray** $tmp1284 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9523->$data + 32));
            statements1283 = *$tmp1284;
            panda$core$Bit $tmp1286 = (($fn1285) test1281->$class->vtable[4])(test1281);
            if ($tmp1286.value) {
            {
                $returnValue530 = ((panda$core$Bit) { true });
                $tmp522 = 56;
                goto $l520;
                $l1287:;
                return $returnValue530;
            }
            }
            {
                int $tmp1291;
                {
                    ITable* $tmp1295 = ((panda$collections$Iterable*) statements1283)->$class->itable;
                    while ($tmp1295->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1295 = $tmp1295->next;
                    }
                    $fn1297 $tmp1296 = $tmp1295->methods[0];
                    panda$collections$Iterator* $tmp1298 = $tmp1296(((panda$collections$Iterable*) statements1283));
                    $tmp1294 = $tmp1298;
                    $tmp1293 = $tmp1294;
                    Iter$421$171292 = $tmp1293;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1293));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1294));
                    $l1299:;
                    ITable* $tmp1302 = Iter$421$171292->$class->itable;
                    while ($tmp1302->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1302 = $tmp1302->next;
                    }
                    $fn1304 $tmp1303 = $tmp1302->methods[0];
                    panda$core$Bit $tmp1305 = $tmp1303(Iter$421$171292);
                    panda$core$Bit $tmp1306 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1305);
                    bool $tmp1301 = $tmp1306.value;
                    if (!$tmp1301) goto $l1300;
                    {
                        int $tmp1309;
                        {
                            ITable* $tmp1313 = Iter$421$171292->$class->itable;
                            while ($tmp1313->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1313 = $tmp1313->next;
                            }
                            $fn1315 $tmp1314 = $tmp1313->methods[1];
                            panda$core$Object* $tmp1316 = $tmp1314(Iter$421$171292);
                            $tmp1312 = $tmp1316;
                            $tmp1311 = ((org$pandalanguage$pandac$IRNode*) $tmp1312);
                            s1310 = $tmp1311;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1311));
                            panda$core$Panda$unref$panda$core$Object($tmp1312);
                            panda$core$Bit $tmp1318 = (($fn1317) s1310->$class->vtable[4])(s1310);
                            if ($tmp1318.value) {
                            {
                                $returnValue530 = ((panda$core$Bit) { true });
                                $tmp1309 = 0;
                                goto $l1307;
                                $l1319:;
                                $tmp1291 = 0;
                                goto $l1289;
                                $l1320:;
                                $tmp522 = 57;
                                goto $l520;
                                $l1321:;
                                return $returnValue530;
                            }
                            }
                        }
                        $tmp1309 = -1;
                        goto $l1307;
                        $l1307:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1310));
                        s1310 = NULL;
                        switch ($tmp1309) {
                            case 0: goto $l1319;
                            case -1: goto $l1323;
                        }
                        $l1323:;
                    }
                    goto $l1299;
                    $l1300:;
                }
                $tmp1291 = -1;
                goto $l1289;
                $l1289:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$421$171292));
                Iter$421$171292 = NULL;
                switch ($tmp1291) {
                    case -1: goto $l1324;
                    case 0: goto $l1320;
                }
                $l1324:;
            }
            $returnValue530 = ((panda$core$Bit) { false });
            $tmp522 = 58;
            goto $l520;
            $l1325:;
            return $returnValue530;
        }
        }
        else {
        {
            if (((panda$core$Bit) { false }).value) goto $l1327; else goto $l1328;
            $l1328:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1329, (panda$core$Int64) { 428 });
            abort();
            $l1327:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp522 = -1;
    goto $l520;
    $l520:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp524));
    switch ($tmp522) {
        case 2: goto $l561;
        case 22: goto $l780;
        case 15: goto $l698;
        case 8: goto $l654;
        case 47: goto $l1075;
        case 41: goto $l1043;
        case 9: goto $l658;
        case 40: goto $l1038;
        case 10: goto $l665;
        case 21: goto $l769;
        case 37: goto $l987;
        case 39: goto $l1034;
        case 28: goto $l878;
        case 36: goto $l978;
        case 27: goto $l839;
        case 35: goto $l975;
        case 38: goto $l1000;
        case 53: goto $l1236;
        case 43: goto $l1055;
        case 0: goto $l538;
        case 1: goto $l541;
        case 46: goto $l1072;
        case 45: goto $l1067;
        case 51: goto $l1192;
        case 18: goto $l755;
        case 52: goto $l1197;
        case 19: goto $l759;
        case 20: goto $l762;
        case 55: goto $l1276;
        case 56: goto $l1287;
        case 12: goto $l679;
        case 54: goto $l1272;
        case 57: goto $l1321;
        case 58: goto $l1325;
        case 42: goto $l1050;
        case 23: goto $l814;
        case 16: goto $l710;
        case 24: goto $l820;
        case 6: goto $l612;
        case 5: goto $l607;
        case 44: goto $l1064;
        case 4: goto $l603;
        case 48: goto $l1096;
        case 31: goto $l927;
        case 14: goto $l693;
        case 11: goto $l670;
        case 50: goto $l1188;
        case 17: goto $l721;
        case 3: goto $l566;
        case 49: goto $l1101;
        case -1: goto $l1330;
        case 34: goto $l970;
        case 33: goto $l967;
        case 7: goto $l620;
        case 26: goto $l832;
        case 29: goto $l882;
        case 30: goto $l893;
        case 13: goto $l688;
        case 25: goto $l825;
        case 32: goto $l963;
    }
    $l1330:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$434_91334 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1335;
    org$pandalanguage$pandac$IRNode* test1337 = NULL;
    org$pandalanguage$pandac$IRNode* msg1339 = NULL;
    panda$core$String* $returnValue1341;
    panda$core$String* $tmp1342;
    panda$core$String* $tmp1343;
    panda$core$String* $tmp1344;
    panda$core$String* $tmp1345;
    panda$core$String* $tmp1346;
    panda$core$String* $tmp1356;
    panda$core$String* $tmp1357;
    panda$core$String* $tmp1358;
    panda$core$String* $tmp1366;
    org$pandalanguage$pandac$IRNode* left1371 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op1373;
    org$pandalanguage$pandac$IRNode* right1375 = NULL;
    panda$core$String* $tmp1377;
    panda$core$String* $tmp1378;
    panda$core$String* $tmp1379;
    panda$core$String* $tmp1380;
    panda$core$String* $tmp1381;
    panda$core$String* $tmp1382;
    panda$core$String* $tmp1383;
    panda$core$Object* $tmp1388;
    panda$core$Bit bit1399;
    panda$core$String* $tmp1401;
    panda$core$String* $tmp1402;
    panda$collections$ImmutableArray* statements1407 = NULL;
    panda$core$MutableString* result1412 = NULL;
    panda$core$MutableString* $tmp1413;
    panda$core$MutableString* $tmp1414;
    panda$collections$Iterator* Iter$448$171420 = NULL;
    panda$collections$Iterator* $tmp1421;
    panda$collections$Iterator* $tmp1422;
    org$pandalanguage$pandac$IRNode* s1438 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1439;
    panda$core$Object* $tmp1440;
    panda$core$String* $tmp1445;
    panda$core$Char8 $tmp1450;
    panda$core$String* $tmp1451;
    panda$core$String* $tmp1452;
    panda$collections$ImmutableArray* statements1459 = NULL;
    panda$collections$ImmutableArray* finally1461 = NULL;
    panda$core$MutableString* result1466 = NULL;
    panda$core$MutableString* $tmp1467;
    panda$core$MutableString* $tmp1468;
    panda$collections$Iterator* Iter$455$171474 = NULL;
    panda$collections$Iterator* $tmp1475;
    panda$collections$Iterator* $tmp1476;
    org$pandalanguage$pandac$IRNode* s1492 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1493;
    panda$core$Object* $tmp1494;
    panda$core$String* $tmp1499;
    panda$collections$Iterator* Iter$459$171508 = NULL;
    panda$collections$Iterator* $tmp1509;
    panda$collections$Iterator* $tmp1510;
    org$pandalanguage$pandac$IRNode* s1526 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1527;
    panda$core$Object* $tmp1528;
    panda$core$String* $tmp1533;
    panda$core$Char8 $tmp1538;
    panda$core$String* $tmp1539;
    panda$core$String* $tmp1540;
    panda$core$String* label1547 = NULL;
    panda$core$String* $tmp1549;
    panda$core$String* $tmp1550;
    panda$core$String* $tmp1551;
    panda$core$String* $tmp1558;
    org$pandalanguage$pandac$MethodRef* m1563 = NULL;
    panda$collections$ImmutableArray* args1565 = NULL;
    panda$core$String* $tmp1567;
    panda$core$String* $tmp1568;
    panda$core$String* $tmp1569;
    panda$core$String* $tmp1570;
    panda$core$String* $tmp1571;
    panda$core$String* $tmp1575;
    org$pandalanguage$pandac$IRNode* value1586 = NULL;
    org$pandalanguage$pandac$Type* type1588 = NULL;
    panda$core$String* $tmp1590;
    panda$core$String* $tmp1591;
    panda$core$String* $tmp1592;
    panda$core$String* $tmp1593;
    panda$core$String* $tmp1594;
    org$pandalanguage$pandac$ChoiceEntry* ce1605 = NULL;
    panda$core$String* $tmp1607;
    panda$core$String* $tmp1608;
    org$pandalanguage$pandac$IRNode* base1613 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce1615 = NULL;
    panda$core$Int64 field1617;
    panda$core$String* $tmp1619;
    panda$core$String* $tmp1620;
    panda$core$String* $tmp1621;
    panda$core$String* $tmp1622;
    panda$core$String* $tmp1623;
    panda$core$String* $tmp1624;
    panda$core$String* $tmp1625;
    panda$core$Object* $tmp1633;
    org$pandalanguage$pandac$Type* type1641 = NULL;
    org$pandalanguage$pandac$IRNode* call1643 = NULL;
    org$pandalanguage$pandac$IRNode* $match$478_171648 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1649;
    panda$collections$ImmutableArray* args1651 = NULL;
    panda$core$String* $tmp1653;
    panda$core$String* $tmp1654;
    panda$core$String* $tmp1655;
    panda$core$String* $tmp1656;
    panda$core$String* $tmp1657;
    panda$core$String* $tmp1661;
    org$pandalanguage$pandac$Type* Type1677 = NULL;
    panda$core$String* $tmp1679;
    panda$core$String* label1684 = NULL;
    panda$core$String* $tmp1686;
    panda$core$String* $tmp1687;
    panda$core$String* $tmp1688;
    panda$core$String* $tmp1695;
    org$pandalanguage$pandac$IRNode* target1700 = NULL;
    org$pandalanguage$pandac$IRNode* value1702 = NULL;
    panda$core$String* $tmp1704;
    panda$core$String* $tmp1705;
    panda$core$String* $tmp1706;
    panda$core$String* $tmp1707;
    panda$core$String* $tmp1708;
    panda$core$String* $tmp1718;
    panda$core$String* $tmp1719;
    panda$core$String* label1725 = NULL;
    panda$collections$ImmutableArray* statements1727 = NULL;
    org$pandalanguage$pandac$IRNode* test1729 = NULL;
    panda$core$MutableString* result1734 = NULL;
    panda$core$MutableString* $tmp1735;
    panda$core$MutableString* $tmp1736;
    panda$core$String* $tmp1738;
    panda$core$String* $tmp1739;
    panda$collections$Iterator* Iter$502$171747 = NULL;
    panda$collections$Iterator* $tmp1748;
    panda$collections$Iterator* $tmp1749;
    org$pandalanguage$pandac$IRNode* s1765 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1766;
    panda$core$Object* $tmp1767;
    panda$core$String* $tmp1772;
    panda$core$String* $tmp1777;
    panda$core$String* $tmp1778;
    panda$core$String* $tmp1783;
    panda$core$String* $tmp1784;
    org$pandalanguage$pandac$IRNode* m1791 = NULL;
    panda$collections$ImmutableArray* args1793 = NULL;
    panda$core$String* $tmp1795;
    panda$core$String* $tmp1796;
    panda$core$String* $tmp1797;
    panda$core$String* $tmp1798;
    panda$core$String* $tmp1799;
    panda$core$String* $tmp1804;
    org$pandalanguage$pandac$IRNode* expr1816 = NULL;
    org$pandalanguage$pandac$IRNode* stmt1818 = NULL;
    panda$core$String* $tmp1820;
    panda$core$String* $tmp1821;
    panda$core$String* $tmp1822;
    panda$core$String* $tmp1823;
    panda$core$String* $tmp1824;
    org$pandalanguage$pandac$IRNode* base1835 = NULL;
    org$pandalanguage$pandac$FieldDecl* field1837 = NULL;
    panda$core$String* $tmp1839;
    panda$core$String* $tmp1840;
    panda$core$String* $tmp1841;
    panda$core$String* $tmp1842;
    panda$core$String* $tmp1843;
    org$pandalanguage$pandac$IRNode* test1854 = NULL;
    panda$collections$ImmutableArray* ifTrue1856 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse1858 = NULL;
    panda$core$MutableString* result1863 = NULL;
    panda$core$MutableString* $tmp1864;
    panda$core$MutableString* $tmp1865;
    panda$core$String* $tmp1867;
    panda$core$String* $tmp1868;
    panda$collections$Iterator* Iter$515$171876 = NULL;
    panda$collections$Iterator* $tmp1877;
    panda$collections$Iterator* $tmp1878;
    org$pandalanguage$pandac$IRNode* s1894 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1895;
    panda$core$Object* $tmp1896;
    panda$core$String* $tmp1901;
    panda$core$Char8 $tmp1906;
    panda$core$String* $tmp1907;
    panda$core$String* $tmp1908;
    panda$core$String* $tmp1913;
    panda$core$String* $tmp1914;
    panda$core$UInt64 value1921;
    panda$core$String* $tmp1923;
    panda$core$String* $tmp1924;
    org$pandalanguage$pandac$IRNode* value1929 = NULL;
    panda$core$String* $tmp1931;
    panda$core$String* $tmp1932;
    panda$core$String* $tmp1933;
    org$pandalanguage$pandac$IRNode* value1941 = NULL;
    panda$core$String* $tmp1943;
    panda$core$String* $tmp1944;
    panda$core$String* $tmp1945;
    panda$core$String* label1953 = NULL;
    panda$collections$ImmutableArray* statements1955 = NULL;
    panda$core$MutableString* result1960 = NULL;
    panda$core$MutableString* $tmp1961;
    panda$core$MutableString* $tmp1962;
    panda$core$String* $tmp1964;
    panda$core$String* $tmp1965;
    panda$collections$Iterator* Iter$535$171973 = NULL;
    panda$collections$Iterator* $tmp1974;
    panda$collections$Iterator* $tmp1975;
    org$pandalanguage$pandac$IRNode* s1991 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1992;
    panda$core$Object* $tmp1993;
    panda$core$String* $tmp1998;
    panda$core$Char8 $tmp2003;
    panda$core$String* $tmp2004;
    panda$core$String* $tmp2005;
    org$pandalanguage$pandac$IRNode* value2012 = NULL;
    panda$collections$ImmutableArray* whens2014 = NULL;
    panda$collections$ImmutableArray* other2016 = NULL;
    panda$core$MutableString* result2021 = NULL;
    panda$core$MutableString* $tmp2022;
    panda$core$MutableString* $tmp2023;
    panda$core$String* $tmp2025;
    panda$core$String* $tmp2026;
    panda$collections$Iterator* Iter$542$172034 = NULL;
    panda$collections$Iterator* $tmp2035;
    panda$collections$Iterator* $tmp2036;
    org$pandalanguage$pandac$IRNode* w2052 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2053;
    panda$core$Object* $tmp2054;
    panda$core$String* $tmp2059;
    panda$collections$Iterator* Iter$547$212068 = NULL;
    panda$collections$Iterator* $tmp2069;
    panda$collections$Iterator* $tmp2070;
    org$pandalanguage$pandac$IRNode* s2086 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2087;
    panda$core$Object* $tmp2088;
    panda$core$String* $tmp2093;
    panda$core$Char8 $tmp2098;
    panda$core$String* $tmp2099;
    panda$core$String* $tmp2100;
    org$pandalanguage$pandac$IRNode* target2107 = NULL;
    org$pandalanguage$pandac$MethodRef* m2109 = NULL;
    panda$core$String* $tmp2111;
    panda$core$String* $tmp2112;
    panda$core$String* $tmp2113;
    panda$core$String* $tmp2114;
    panda$core$String* $tmp2115;
    panda$core$String* $tmp2125;
    panda$core$UInt64 value2129;
    panda$core$String* $tmp2131;
    panda$core$String* $tmp2132;
    panda$core$Object* $tmp2134;
    panda$core$String* $tmp2140;
    org$pandalanguage$pandac$parser$Token$Kind op2145;
    org$pandalanguage$pandac$IRNode* base2147 = NULL;
    panda$core$String* $tmp2149;
    panda$core$String* $tmp2150;
    panda$core$String* $tmp2151;
    panda$core$String* $tmp2152;
    panda$core$String* $tmp2153;
    panda$core$Object* $tmp2154;
    panda$core$String* label2166 = NULL;
    org$pandalanguage$pandac$IRNode* target2168 = NULL;
    org$pandalanguage$pandac$IRNode* list2170 = NULL;
    panda$collections$ImmutableArray* statements2172 = NULL;
    panda$core$MutableString* result2177 = NULL;
    panda$core$MutableString* $tmp2178;
    panda$core$MutableString* $tmp2179;
    panda$core$String* $tmp2181;
    panda$core$String* $tmp2182;
    panda$core$String* $tmp2186;
    panda$core$String* $tmp2187;
    panda$core$String* $tmp2188;
    panda$core$String* $tmp2189;
    panda$collections$Iterator* Iter$570$172200 = NULL;
    panda$collections$Iterator* $tmp2201;
    panda$collections$Iterator* $tmp2202;
    org$pandalanguage$pandac$IRNode* s2218 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2219;
    panda$core$Object* $tmp2220;
    panda$core$String* $tmp2225;
    panda$core$Char8 $tmp2230;
    panda$core$String* $tmp2231;
    panda$core$String* $tmp2232;
    panda$core$Real64 value2239;
    panda$core$String* $tmp2241;
    panda$core$String* $tmp2242;
    org$pandalanguage$pandac$IRNode* value2247 = NULL;
    panda$core$String* $tmp2249;
    panda$core$String* $tmp2250;
    panda$core$String* $tmp2251;
    panda$core$String* $tmp2258;
    org$pandalanguage$pandac$Type* type2263 = NULL;
    panda$core$Int64 id2265;
    panda$core$String* $tmp2267;
    panda$core$String* $tmp2268;
    panda$core$String* $tmp2269;
    panda$core$Object* $tmp2271;
    org$pandalanguage$pandac$IRNode* base2279 = NULL;
    panda$core$Int64 id2281;
    panda$core$String* $tmp2283;
    panda$core$String* $tmp2284;
    panda$core$String* $tmp2285;
    panda$core$String* $tmp2286;
    panda$core$String* $tmp2287;
    panda$core$Object* $tmp2289;
    panda$core$String* $tmp2300;
    panda$core$String* str2305 = NULL;
    panda$core$String* $tmp2307;
    panda$core$String* $tmp2308;
    panda$core$String* $tmp2314;
    org$pandalanguage$pandac$IRNode* test2319 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue2321 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse2323 = NULL;
    panda$core$String* $tmp2325;
    panda$core$String* $tmp2326;
    panda$core$String* $tmp2327;
    panda$core$String* $tmp2328;
    panda$core$String* $tmp2329;
    panda$core$String* $tmp2330;
    panda$core$String* $tmp2331;
    org$pandalanguage$pandac$Type* type2345 = NULL;
    panda$core$String* $tmp2347;
    panda$core$String* $tmp2348;
    panda$core$String* name2353 = NULL;
    panda$core$String* $tmp2355;
    org$pandalanguage$pandac$IRNode* base2359 = NULL;
    panda$collections$ImmutableArray* args2361 = NULL;
    panda$core$String* $tmp2363;
    panda$core$String* $tmp2364;
    panda$core$String* $tmp2365;
    panda$core$String* $tmp2366;
    panda$core$String* $tmp2367;
    panda$core$String* $tmp2372;
    panda$collections$ImmutableArray* params2383 = NULL;
    org$pandalanguage$pandac$ASTNode* body2385 = NULL;
    panda$core$String* $tmp2387;
    panda$core$String* $tmp2388;
    panda$core$String* $tmp2389;
    panda$core$String* $tmp2390;
    panda$core$String* $tmp2391;
    panda$core$String* $tmp2393;
    org$pandalanguage$pandac$IRNode* target2407 = NULL;
    panda$collections$ImmutableArray* methods2409 = NULL;
    panda$collections$ImmutableArray* args2411 = NULL;
    panda$core$String* $tmp2413;
    panda$core$String* $tmp2414;
    panda$core$String* $tmp2415;
    panda$core$String* $tmp2416;
    panda$core$String* $tmp2417;
    panda$core$String* $tmp2418;
    panda$core$String* $tmp2419;
    panda$core$Object* $tmp2424;
    panda$core$String* $tmp2429;
    panda$core$String* $tmp2439;
    panda$core$String* $tmp2440;
    panda$core$String* $tmp2441;
    panda$core$String* $tmp2442;
    panda$core$String* $tmp2443;
    panda$core$Object* $tmp2445;
    panda$core$String* $tmp2450;
    org$pandalanguage$pandac$IRNode* target2461 = NULL;
    panda$collections$ImmutableArray* methods2463 = NULL;
    panda$core$String* $tmp2465;
    panda$core$String* $tmp2466;
    panda$core$String* $tmp2467;
    panda$core$String* $tmp2468;
    panda$core$String* $tmp2469;
    panda$core$Object* $tmp2474;
    panda$core$String* $tmp2481;
    panda$core$String* $tmp2482;
    panda$core$String* $tmp2483;
    panda$core$Object* $tmp2484;
    org$pandalanguage$pandac$IRNode* start2492 = NULL;
    org$pandalanguage$pandac$IRNode* end2494 = NULL;
    panda$core$Bit inclusive2496;
    org$pandalanguage$pandac$IRNode* step2498 = NULL;
    panda$core$MutableString* result2503 = NULL;
    panda$core$MutableString* $tmp2504;
    panda$core$MutableString* $tmp2505;
    panda$core$String* $tmp2509;
    panda$core$String* $tmp2510;
    panda$core$String* $tmp2515;
    panda$core$String* $tmp2516;
    org$pandalanguage$pandac$Variable$Kind kind2523;
    panda$collections$ImmutableArray* decls2525 = NULL;
    panda$core$MutableString* result2530 = NULL;
    panda$core$MutableString* $tmp2531;
    panda$core$MutableString* $tmp2532;
    org$pandalanguage$pandac$Variable$Kind $match$636_172534;
    panda$core$String* $tmp2543;
    panda$core$String* $tmp2548;
    panda$core$String* $tmp2549;
    org$pandalanguage$pandac$Variable* variable2556 = NULL;
    panda$core$String* $tmp2558;
    panda$collections$ImmutableArray* tests2562 = NULL;
    panda$collections$ImmutableArray* statements2564 = NULL;
    panda$core$String* $tmp2566;
    panda$core$String* $tmp2567;
    panda$core$String* $tmp2568;
    panda$core$String* $tmp2569;
    panda$core$String* $tmp2570;
    panda$core$String* $tmp2572;
    panda$core$String* $tmp2580;
    panda$core$String* label2592 = NULL;
    org$pandalanguage$pandac$IRNode* test2594 = NULL;
    panda$collections$ImmutableArray* statements2596 = NULL;
    panda$core$MutableString* result2601 = NULL;
    panda$core$MutableString* $tmp2602;
    panda$core$MutableString* $tmp2603;
    panda$core$String* $tmp2605;
    panda$core$String* $tmp2606;
    panda$core$String* $tmp2610;
    panda$core$String* $tmp2611;
    panda$collections$Iterator* Iter$654$172619 = NULL;
    panda$collections$Iterator* $tmp2620;
    panda$collections$Iterator* $tmp2621;
    org$pandalanguage$pandac$IRNode* s2637 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2638;
    panda$core$Object* $tmp2639;
    panda$core$String* $tmp2644;
    panda$core$Char8 $tmp2649;
    panda$core$String* $tmp2650;
    panda$core$String* $tmp2651;
    int $tmp1333;
    {
        $tmp1335 = self;
        $match$434_91334 = $tmp1335;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1335));
        panda$core$Bit $tmp1336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp1336.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1338 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 16));
            test1337 = *$tmp1338;
            org$pandalanguage$pandac$IRNode** $tmp1340 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 24));
            msg1339 = *$tmp1340;
            if (((panda$core$Bit) { msg1339 != NULL }).value) {
            {
                panda$core$String* $tmp1348 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1347, ((panda$core$Object*) test1337));
                $tmp1346 = $tmp1348;
                panda$core$String* $tmp1350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1346, &$s1349);
                $tmp1345 = $tmp1350;
                panda$core$String* $tmp1351 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1345, ((panda$core$Object*) msg1339));
                $tmp1344 = $tmp1351;
                panda$core$String* $tmp1353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1344, &$s1352);
                $tmp1343 = $tmp1353;
                $tmp1342 = $tmp1343;
                $returnValue1341 = $tmp1342;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1342));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1343));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1344));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1345));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1346));
                $tmp1333 = 0;
                goto $l1331;
                $l1354:;
                return $returnValue1341;
            }
            }
            panda$core$String* $tmp1360 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1359, ((panda$core$Object*) test1337));
            $tmp1358 = $tmp1360;
            panda$core$String* $tmp1362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1358, &$s1361);
            $tmp1357 = $tmp1362;
            $tmp1356 = $tmp1357;
            $returnValue1341 = $tmp1356;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1356));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1357));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1358));
            $tmp1333 = 1;
            goto $l1331;
            $l1363:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp1365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1365.value) {
        {
            $tmp1366 = &$s1367;
            $returnValue1341 = $tmp1366;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1366));
            $tmp1333 = 2;
            goto $l1331;
            $l1368:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp1370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1370.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1372 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 24));
            left1371 = *$tmp1372;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1374 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$434_91334->$data + 32));
            op1373 = *$tmp1374;
            org$pandalanguage$pandac$IRNode** $tmp1376 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 40));
            right1375 = *$tmp1376;
            panda$core$String* $tmp1385 = (($fn1384) left1371->$class->vtable[0])(left1371);
            $tmp1383 = $tmp1385;
            panda$core$String* $tmp1387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1383, &$s1386);
            $tmp1382 = $tmp1387;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1389;
            $tmp1389 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1389->value = op1373;
            $tmp1388 = ((panda$core$Object*) $tmp1389);
            panda$core$String* $tmp1390 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1382, $tmp1388);
            $tmp1381 = $tmp1390;
            panda$core$String* $tmp1392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1381, &$s1391);
            $tmp1380 = $tmp1392;
            panda$core$String* $tmp1393 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1380, ((panda$core$Object*) right1375));
            $tmp1379 = $tmp1393;
            panda$core$String* $tmp1395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1379, &$s1394);
            $tmp1378 = $tmp1395;
            $tmp1377 = $tmp1378;
            $returnValue1341 = $tmp1377;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1377));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1378));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1379));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1380));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1381));
            panda$core$Panda$unref$panda$core$Object($tmp1388);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1382));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1383));
            $tmp1333 = 3;
            goto $l1331;
            $l1396:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp1398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp1398.value) {
        {
            panda$core$Bit* $tmp1400 = ((panda$core$Bit*) ((char*) $match$434_91334->$data + 24));
            bit1399 = *$tmp1400;
            panda$core$String* $tmp1403 = panda$core$Bit$convert$R$panda$core$String(bit1399);
            $tmp1402 = $tmp1403;
            $tmp1401 = $tmp1402;
            $returnValue1341 = $tmp1401;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1401));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1402));
            $tmp1333 = 4;
            goto $l1331;
            $l1404:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp1406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp1406.value) {
        {
            panda$collections$ImmutableArray** $tmp1408 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91334->$data + 16));
            statements1407 = *$tmp1408;
            int $tmp1411;
            {
                panda$core$MutableString* $tmp1415 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1415, &$s1416);
                $tmp1414 = $tmp1415;
                $tmp1413 = $tmp1414;
                result1412 = $tmp1413;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1413));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1414));
                {
                    int $tmp1419;
                    {
                        ITable* $tmp1423 = ((panda$collections$Iterable*) statements1407)->$class->itable;
                        while ($tmp1423->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1423 = $tmp1423->next;
                        }
                        $fn1425 $tmp1424 = $tmp1423->methods[0];
                        panda$collections$Iterator* $tmp1426 = $tmp1424(((panda$collections$Iterable*) statements1407));
                        $tmp1422 = $tmp1426;
                        $tmp1421 = $tmp1422;
                        Iter$448$171420 = $tmp1421;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1421));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1422));
                        $l1427:;
                        ITable* $tmp1430 = Iter$448$171420->$class->itable;
                        while ($tmp1430->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1430 = $tmp1430->next;
                        }
                        $fn1432 $tmp1431 = $tmp1430->methods[0];
                        panda$core$Bit $tmp1433 = $tmp1431(Iter$448$171420);
                        panda$core$Bit $tmp1434 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1433);
                        bool $tmp1429 = $tmp1434.value;
                        if (!$tmp1429) goto $l1428;
                        {
                            int $tmp1437;
                            {
                                ITable* $tmp1441 = Iter$448$171420->$class->itable;
                                while ($tmp1441->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1441 = $tmp1441->next;
                                }
                                $fn1443 $tmp1442 = $tmp1441->methods[1];
                                panda$core$Object* $tmp1444 = $tmp1442(Iter$448$171420);
                                $tmp1440 = $tmp1444;
                                $tmp1439 = ((org$pandalanguage$pandac$IRNode*) $tmp1440);
                                s1438 = $tmp1439;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1439));
                                panda$core$Panda$unref$panda$core$Object($tmp1440);
                                panda$core$String* $tmp1447 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1438), &$s1446);
                                $tmp1445 = $tmp1447;
                                panda$core$MutableString$append$panda$core$String(result1412, $tmp1445);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1445));
                            }
                            $tmp1437 = -1;
                            goto $l1435;
                            $l1435:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1438));
                            s1438 = NULL;
                            switch ($tmp1437) {
                                case -1: goto $l1448;
                            }
                            $l1448:;
                        }
                        goto $l1427;
                        $l1428:;
                    }
                    $tmp1419 = -1;
                    goto $l1417;
                    $l1417:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$448$171420));
                    Iter$448$171420 = NULL;
                    switch ($tmp1419) {
                        case -1: goto $l1449;
                    }
                    $l1449:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1450, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1412, $tmp1450);
                panda$core$String* $tmp1453 = panda$core$MutableString$finish$R$panda$core$String(result1412);
                $tmp1452 = $tmp1453;
                $tmp1451 = $tmp1452;
                $returnValue1341 = $tmp1451;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1451));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1452));
                $tmp1411 = 0;
                goto $l1409;
                $l1454:;
                $tmp1333 = 5;
                goto $l1331;
                $l1455:;
                return $returnValue1341;
            }
            $l1409:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1412));
            result1412 = NULL;
            switch ($tmp1411) {
                case 0: goto $l1454;
            }
            $l1457:;
        }
        }
        else {
        panda$core$Bit $tmp1458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp1458.value) {
        {
            panda$collections$ImmutableArray** $tmp1460 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91334->$data + 16));
            statements1459 = *$tmp1460;
            panda$collections$ImmutableArray** $tmp1462 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91334->$data + 24));
            finally1461 = *$tmp1462;
            int $tmp1465;
            {
                panda$core$MutableString* $tmp1469 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1469, &$s1470);
                $tmp1468 = $tmp1469;
                $tmp1467 = $tmp1468;
                result1466 = $tmp1467;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1467));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1468));
                {
                    int $tmp1473;
                    {
                        ITable* $tmp1477 = ((panda$collections$Iterable*) statements1459)->$class->itable;
                        while ($tmp1477->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1477 = $tmp1477->next;
                        }
                        $fn1479 $tmp1478 = $tmp1477->methods[0];
                        panda$collections$Iterator* $tmp1480 = $tmp1478(((panda$collections$Iterable*) statements1459));
                        $tmp1476 = $tmp1480;
                        $tmp1475 = $tmp1476;
                        Iter$455$171474 = $tmp1475;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1475));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1476));
                        $l1481:;
                        ITable* $tmp1484 = Iter$455$171474->$class->itable;
                        while ($tmp1484->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1484 = $tmp1484->next;
                        }
                        $fn1486 $tmp1485 = $tmp1484->methods[0];
                        panda$core$Bit $tmp1487 = $tmp1485(Iter$455$171474);
                        panda$core$Bit $tmp1488 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1487);
                        bool $tmp1483 = $tmp1488.value;
                        if (!$tmp1483) goto $l1482;
                        {
                            int $tmp1491;
                            {
                                ITable* $tmp1495 = Iter$455$171474->$class->itable;
                                while ($tmp1495->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1495 = $tmp1495->next;
                                }
                                $fn1497 $tmp1496 = $tmp1495->methods[1];
                                panda$core$Object* $tmp1498 = $tmp1496(Iter$455$171474);
                                $tmp1494 = $tmp1498;
                                $tmp1493 = ((org$pandalanguage$pandac$IRNode*) $tmp1494);
                                s1492 = $tmp1493;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1493));
                                panda$core$Panda$unref$panda$core$Object($tmp1494);
                                panda$core$String* $tmp1501 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1492), &$s1500);
                                $tmp1499 = $tmp1501;
                                panda$core$MutableString$append$panda$core$String(result1466, $tmp1499);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1499));
                            }
                            $tmp1491 = -1;
                            goto $l1489;
                            $l1489:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1492));
                            s1492 = NULL;
                            switch ($tmp1491) {
                                case -1: goto $l1502;
                            }
                            $l1502:;
                        }
                        goto $l1481;
                        $l1482:;
                    }
                    $tmp1473 = -1;
                    goto $l1471;
                    $l1471:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$455$171474));
                    Iter$455$171474 = NULL;
                    switch ($tmp1473) {
                        case -1: goto $l1503;
                    }
                    $l1503:;
                }
                panda$core$MutableString$append$panda$core$String(result1466, &$s1504);
                {
                    int $tmp1507;
                    {
                        ITable* $tmp1511 = ((panda$collections$Iterable*) finally1461)->$class->itable;
                        while ($tmp1511->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1511 = $tmp1511->next;
                        }
                        $fn1513 $tmp1512 = $tmp1511->methods[0];
                        panda$collections$Iterator* $tmp1514 = $tmp1512(((panda$collections$Iterable*) finally1461));
                        $tmp1510 = $tmp1514;
                        $tmp1509 = $tmp1510;
                        Iter$459$171508 = $tmp1509;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1509));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1510));
                        $l1515:;
                        ITable* $tmp1518 = Iter$459$171508->$class->itable;
                        while ($tmp1518->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1518 = $tmp1518->next;
                        }
                        $fn1520 $tmp1519 = $tmp1518->methods[0];
                        panda$core$Bit $tmp1521 = $tmp1519(Iter$459$171508);
                        panda$core$Bit $tmp1522 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1521);
                        bool $tmp1517 = $tmp1522.value;
                        if (!$tmp1517) goto $l1516;
                        {
                            int $tmp1525;
                            {
                                ITable* $tmp1529 = Iter$459$171508->$class->itable;
                                while ($tmp1529->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1529 = $tmp1529->next;
                                }
                                $fn1531 $tmp1530 = $tmp1529->methods[1];
                                panda$core$Object* $tmp1532 = $tmp1530(Iter$459$171508);
                                $tmp1528 = $tmp1532;
                                $tmp1527 = ((org$pandalanguage$pandac$IRNode*) $tmp1528);
                                s1526 = $tmp1527;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1527));
                                panda$core$Panda$unref$panda$core$Object($tmp1528);
                                panda$core$String* $tmp1535 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1526), &$s1534);
                                $tmp1533 = $tmp1535;
                                panda$core$MutableString$append$panda$core$String(result1466, $tmp1533);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1533));
                            }
                            $tmp1525 = -1;
                            goto $l1523;
                            $l1523:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1526));
                            s1526 = NULL;
                            switch ($tmp1525) {
                                case -1: goto $l1536;
                            }
                            $l1536:;
                        }
                        goto $l1515;
                        $l1516:;
                    }
                    $tmp1507 = -1;
                    goto $l1505;
                    $l1505:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$459$171508));
                    Iter$459$171508 = NULL;
                    switch ($tmp1507) {
                        case -1: goto $l1537;
                    }
                    $l1537:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1538, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1466, $tmp1538);
                panda$core$String* $tmp1541 = panda$core$MutableString$finish$R$panda$core$String(result1466);
                $tmp1540 = $tmp1541;
                $tmp1539 = $tmp1540;
                $returnValue1341 = $tmp1539;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1539));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1540));
                $tmp1465 = 0;
                goto $l1463;
                $l1542:;
                $tmp1333 = 6;
                goto $l1331;
                $l1543:;
                return $returnValue1341;
            }
            $l1463:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1466));
            result1466 = NULL;
            switch ($tmp1465) {
                case 0: goto $l1542;
            }
            $l1545:;
        }
        }
        else {
        panda$core$Bit $tmp1546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp1546.value) {
        {
            panda$core$String** $tmp1548 = ((panda$core$String**) ((char*) $match$434_91334->$data + 16));
            label1547 = *$tmp1548;
            if (((panda$core$Bit) { label1547 != NULL }).value) {
            {
                panda$core$String* $tmp1553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1552, label1547);
                $tmp1551 = $tmp1553;
                panda$core$String* $tmp1555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1551, &$s1554);
                $tmp1550 = $tmp1555;
                $tmp1549 = $tmp1550;
                $returnValue1341 = $tmp1549;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1549));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1550));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1551));
                $tmp1333 = 7;
                goto $l1331;
                $l1556:;
                return $returnValue1341;
            }
            }
            $tmp1558 = &$s1559;
            $returnValue1341 = $tmp1558;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1558));
            $tmp1333 = 8;
            goto $l1331;
            $l1560:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp1562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp1562.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp1564 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$434_91334->$data + 24));
            m1563 = *$tmp1564;
            panda$collections$ImmutableArray** $tmp1566 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91334->$data + 32));
            args1565 = *$tmp1566;
            panda$core$String* $tmp1572 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) m1563->value)->name);
            $tmp1571 = $tmp1572;
            panda$core$String* $tmp1574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1571, &$s1573);
            $tmp1570 = $tmp1574;
            ITable* $tmp1576 = ((panda$collections$ListView*) args1565)->$class->itable;
            while ($tmp1576->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1576 = $tmp1576->next;
            }
            $fn1578 $tmp1577 = $tmp1576->methods[4];
            panda$core$String* $tmp1579 = $tmp1577(((panda$collections$ListView*) args1565));
            $tmp1575 = $tmp1579;
            panda$core$String* $tmp1580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1570, $tmp1575);
            $tmp1569 = $tmp1580;
            panda$core$String* $tmp1582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1569, &$s1581);
            $tmp1568 = $tmp1582;
            $tmp1567 = $tmp1568;
            $returnValue1341 = $tmp1567;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1567));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1568));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1569));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1575));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1570));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1571));
            $tmp1333 = 9;
            goto $l1331;
            $l1583:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp1585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp1585.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1587 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 16));
            value1586 = *$tmp1587;
            org$pandalanguage$pandac$Type** $tmp1589 = ((org$pandalanguage$pandac$Type**) ((char*) $match$434_91334->$data + 24));
            type1588 = *$tmp1589;
            panda$core$String* $tmp1596 = (($fn1595) value1586->$class->vtable[0])(value1586);
            $tmp1594 = $tmp1596;
            panda$core$String* $tmp1598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1594, &$s1597);
            $tmp1593 = $tmp1598;
            panda$core$String* $tmp1599 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1593, ((panda$core$Object*) type1588));
            $tmp1592 = $tmp1599;
            panda$core$String* $tmp1601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1592, &$s1600);
            $tmp1591 = $tmp1601;
            $tmp1590 = $tmp1591;
            $returnValue1341 = $tmp1590;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1590));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1591));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1592));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1593));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1594));
            $tmp1333 = 10;
            goto $l1331;
            $l1602:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp1604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1604.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp1606 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$434_91334->$data + 16));
            ce1605 = *$tmp1606;
            panda$core$String* $tmp1609 = org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(ce1605);
            $tmp1608 = $tmp1609;
            $tmp1607 = $tmp1608;
            $returnValue1341 = $tmp1607;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1607));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1608));
            $tmp1333 = 11;
            goto $l1331;
            $l1610:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp1612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp1612.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1614 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 16));
            base1613 = *$tmp1614;
            org$pandalanguage$pandac$ChoiceEntry** $tmp1616 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$434_91334->$data + 24));
            ce1615 = *$tmp1616;
            panda$core$Int64* $tmp1618 = ((panda$core$Int64*) ((char*) $match$434_91334->$data + 32));
            field1617 = *$tmp1618;
            panda$core$String* $tmp1627 = (($fn1626) base1613->$class->vtable[0])(base1613);
            $tmp1625 = $tmp1627;
            panda$core$String* $tmp1629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1625, &$s1628);
            $tmp1624 = $tmp1629;
            panda$core$String* $tmp1630 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1624, ((panda$core$Object*) ce1615));
            $tmp1623 = $tmp1630;
            panda$core$String* $tmp1632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1623, &$s1631);
            $tmp1622 = $tmp1632;
            panda$core$Int64$wrapper* $tmp1634;
            $tmp1634 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1634->value = field1617;
            $tmp1633 = ((panda$core$Object*) $tmp1634);
            panda$core$String* $tmp1635 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1622, $tmp1633);
            $tmp1621 = $tmp1635;
            panda$core$String* $tmp1637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1621, &$s1636);
            $tmp1620 = $tmp1637;
            $tmp1619 = $tmp1620;
            $returnValue1341 = $tmp1619;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1619));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1620));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1621));
            panda$core$Panda$unref$panda$core$Object($tmp1633);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1622));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1623));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1624));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1625));
            $tmp1333 = 12;
            goto $l1331;
            $l1638:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp1640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1640.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1642 = ((org$pandalanguage$pandac$Type**) ((char*) $match$434_91334->$data + 16));
            type1641 = *$tmp1642;
            org$pandalanguage$pandac$IRNode** $tmp1644 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 24));
            call1643 = *$tmp1644;
            int $tmp1647;
            {
                $tmp1649 = call1643;
                $match$478_171648 = $tmp1649;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1649));
                panda$core$Bit $tmp1650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$478_171648->$rawValue, ((panda$core$Int64) { 7 }));
                if ($tmp1650.value) {
                {
                    panda$collections$ImmutableArray** $tmp1652 = ((panda$collections$ImmutableArray**) ((char*) $match$478_171648->$data + 32));
                    args1651 = *$tmp1652;
                    panda$core$String* $tmp1658 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type1641);
                    $tmp1657 = $tmp1658;
                    panda$core$String* $tmp1660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1657, &$s1659);
                    $tmp1656 = $tmp1660;
                    ITable* $tmp1662 = ((panda$collections$ListView*) args1651)->$class->itable;
                    while ($tmp1662->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp1662 = $tmp1662->next;
                    }
                    $fn1664 $tmp1663 = $tmp1662->methods[4];
                    panda$core$String* $tmp1665 = $tmp1663(((panda$collections$ListView*) args1651));
                    $tmp1661 = $tmp1665;
                    panda$core$String* $tmp1666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1656, $tmp1661);
                    $tmp1655 = $tmp1666;
                    panda$core$String* $tmp1668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1655, &$s1667);
                    $tmp1654 = $tmp1668;
                    $tmp1653 = $tmp1654;
                    $returnValue1341 = $tmp1653;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1653));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1654));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1655));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1661));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1656));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1657));
                    $tmp1647 = 0;
                    goto $l1645;
                    $l1669:;
                    $tmp1333 = 13;
                    goto $l1331;
                    $l1670:;
                    return $returnValue1341;
                }
                }
                else {
                {
                    if (((panda$core$Bit) { false }).value) goto $l1672; else goto $l1673;
                    $l1673:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1674, (panda$core$Int64) { 482 });
                    abort();
                    $l1672:;
                }
                }
            }
            $tmp1647 = -1;
            goto $l1645;
            $l1645:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1649));
            switch ($tmp1647) {
                case 0: goto $l1669;
                case -1: goto $l1675;
            }
            $l1675:;
        }
        }
        else {
        panda$core$Bit $tmp1676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1676.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1678 = ((org$pandalanguage$pandac$Type**) ((char*) $match$434_91334->$data + 16));
            Type1677 = *$tmp1678;
            $tmp1679 = &$s1680;
            $returnValue1341 = $tmp1679;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1679));
            $tmp1333 = 14;
            goto $l1331;
            $l1681:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp1683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1683.value) {
        {
            panda$core$String** $tmp1685 = ((panda$core$String**) ((char*) $match$434_91334->$data + 16));
            label1684 = *$tmp1685;
            if (((panda$core$Bit) { label1684 != NULL }).value) {
            {
                panda$core$String* $tmp1690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1689, label1684);
                $tmp1688 = $tmp1690;
                panda$core$String* $tmp1692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1688, &$s1691);
                $tmp1687 = $tmp1692;
                $tmp1686 = $tmp1687;
                $returnValue1341 = $tmp1686;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1686));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1687));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1688));
                $tmp1333 = 15;
                goto $l1331;
                $l1693:;
                return $returnValue1341;
            }
            }
            $tmp1695 = &$s1696;
            $returnValue1341 = $tmp1695;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1695));
            $tmp1333 = 16;
            goto $l1331;
            $l1697:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp1699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1699.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1701 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 0));
            target1700 = *$tmp1701;
            org$pandalanguage$pandac$IRNode** $tmp1703 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 8));
            value1702 = *$tmp1703;
            if (((panda$core$Bit) { value1702 != NULL }).value) {
            {
                panda$core$String* $tmp1710 = (($fn1709) target1700->$class->vtable[0])(target1700);
                $tmp1708 = $tmp1710;
                panda$core$String* $tmp1712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1708, &$s1711);
                $tmp1707 = $tmp1712;
                panda$core$String* $tmp1713 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1707, ((panda$core$Object*) value1702));
                $tmp1706 = $tmp1713;
                panda$core$String* $tmp1715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1706, &$s1714);
                $tmp1705 = $tmp1715;
                $tmp1704 = $tmp1705;
                $returnValue1341 = $tmp1704;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1704));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1705));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1706));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1707));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1708));
                $tmp1333 = 17;
                goto $l1331;
                $l1716:;
                return $returnValue1341;
            }
            }
            panda$core$String* $tmp1721 = (($fn1720) target1700->$class->vtable[0])(target1700);
            $tmp1719 = $tmp1721;
            $tmp1718 = $tmp1719;
            $returnValue1341 = $tmp1718;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1718));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1719));
            $tmp1333 = 18;
            goto $l1331;
            $l1722:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp1724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1724.value) {
        {
            panda$core$String** $tmp1726 = ((panda$core$String**) ((char*) $match$434_91334->$data + 16));
            label1725 = *$tmp1726;
            panda$collections$ImmutableArray** $tmp1728 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91334->$data + 24));
            statements1727 = *$tmp1728;
            org$pandalanguage$pandac$IRNode** $tmp1730 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 32));
            test1729 = *$tmp1730;
            int $tmp1733;
            {
                panda$core$MutableString* $tmp1737 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1737);
                $tmp1736 = $tmp1737;
                $tmp1735 = $tmp1736;
                result1734 = $tmp1735;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1735));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1736));
                if (((panda$core$Bit) { label1725 != NULL }).value) {
                {
                    panda$core$String* $tmp1740 = panda$core$String$convert$R$panda$core$String(label1725);
                    $tmp1739 = $tmp1740;
                    panda$core$String* $tmp1742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1739, &$s1741);
                    $tmp1738 = $tmp1742;
                    panda$core$MutableString$append$panda$core$String(result1734, $tmp1738);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1738));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1739));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1734, &$s1743);
                {
                    int $tmp1746;
                    {
                        ITable* $tmp1750 = ((panda$collections$Iterable*) statements1727)->$class->itable;
                        while ($tmp1750->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1750 = $tmp1750->next;
                        }
                        $fn1752 $tmp1751 = $tmp1750->methods[0];
                        panda$collections$Iterator* $tmp1753 = $tmp1751(((panda$collections$Iterable*) statements1727));
                        $tmp1749 = $tmp1753;
                        $tmp1748 = $tmp1749;
                        Iter$502$171747 = $tmp1748;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1748));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1749));
                        $l1754:;
                        ITable* $tmp1757 = Iter$502$171747->$class->itable;
                        while ($tmp1757->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1757 = $tmp1757->next;
                        }
                        $fn1759 $tmp1758 = $tmp1757->methods[0];
                        panda$core$Bit $tmp1760 = $tmp1758(Iter$502$171747);
                        panda$core$Bit $tmp1761 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1760);
                        bool $tmp1756 = $tmp1761.value;
                        if (!$tmp1756) goto $l1755;
                        {
                            int $tmp1764;
                            {
                                ITable* $tmp1768 = Iter$502$171747->$class->itable;
                                while ($tmp1768->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1768 = $tmp1768->next;
                                }
                                $fn1770 $tmp1769 = $tmp1768->methods[1];
                                panda$core$Object* $tmp1771 = $tmp1769(Iter$502$171747);
                                $tmp1767 = $tmp1771;
                                $tmp1766 = ((org$pandalanguage$pandac$IRNode*) $tmp1767);
                                s1765 = $tmp1766;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1766));
                                panda$core$Panda$unref$panda$core$Object($tmp1767);
                                panda$core$String* $tmp1774 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1765), &$s1773);
                                $tmp1772 = $tmp1774;
                                panda$core$MutableString$append$panda$core$String(result1734, $tmp1772);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1772));
                            }
                            $tmp1764 = -1;
                            goto $l1762;
                            $l1762:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1765));
                            s1765 = NULL;
                            switch ($tmp1764) {
                                case -1: goto $l1775;
                            }
                            $l1775:;
                        }
                        goto $l1754;
                        $l1755:;
                    }
                    $tmp1746 = -1;
                    goto $l1744;
                    $l1744:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$502$171747));
                    Iter$502$171747 = NULL;
                    switch ($tmp1746) {
                        case -1: goto $l1776;
                    }
                    $l1776:;
                }
                panda$core$String* $tmp1780 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1779, ((panda$core$Object*) test1729));
                $tmp1778 = $tmp1780;
                panda$core$String* $tmp1782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1778, &$s1781);
                $tmp1777 = $tmp1782;
                panda$core$MutableString$append$panda$core$String(result1734, $tmp1777);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1777));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1778));
                panda$core$String* $tmp1785 = panda$core$MutableString$finish$R$panda$core$String(result1734);
                $tmp1784 = $tmp1785;
                $tmp1783 = $tmp1784;
                $returnValue1341 = $tmp1783;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1783));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1784));
                $tmp1733 = 0;
                goto $l1731;
                $l1786:;
                $tmp1333 = 19;
                goto $l1331;
                $l1787:;
                return $returnValue1341;
            }
            $l1731:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1734));
            result1734 = NULL;
            switch ($tmp1733) {
                case 0: goto $l1786;
            }
            $l1789:;
        }
        }
        else {
        panda$core$Bit $tmp1790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1790.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1792 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 0));
            m1791 = *$tmp1792;
            panda$collections$ImmutableArray** $tmp1794 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91334->$data + 8));
            args1793 = *$tmp1794;
            panda$core$String* $tmp1801 = (($fn1800) m1791->$class->vtable[0])(m1791);
            $tmp1799 = $tmp1801;
            panda$core$String* $tmp1803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1799, &$s1802);
            $tmp1798 = $tmp1803;
            ITable* $tmp1806 = ((panda$collections$ListView*) args1793)->$class->itable;
            while ($tmp1806->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1806 = $tmp1806->next;
            }
            $fn1808 $tmp1807 = $tmp1806->methods[5];
            panda$core$String* $tmp1809 = $tmp1807(((panda$collections$ListView*) args1793), &$s1805);
            $tmp1804 = $tmp1809;
            panda$core$String* $tmp1810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1798, $tmp1804);
            $tmp1797 = $tmp1810;
            panda$core$String* $tmp1812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1797, &$s1811);
            $tmp1796 = $tmp1812;
            $tmp1795 = $tmp1796;
            $returnValue1341 = $tmp1795;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1795));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1796));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1797));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1804));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1798));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1799));
            $tmp1333 = 20;
            goto $l1331;
            $l1813:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp1815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1815.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1817 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 0));
            expr1816 = *$tmp1817;
            org$pandalanguage$pandac$IRNode** $tmp1819 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 8));
            stmt1818 = *$tmp1819;
            panda$core$String* $tmp1826 = (($fn1825) expr1816->$class->vtable[0])(expr1816);
            $tmp1824 = $tmp1826;
            panda$core$String* $tmp1828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1824, &$s1827);
            $tmp1823 = $tmp1828;
            panda$core$String* $tmp1829 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1823, ((panda$core$Object*) stmt1818));
            $tmp1822 = $tmp1829;
            panda$core$String* $tmp1831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1822, &$s1830);
            $tmp1821 = $tmp1831;
            $tmp1820 = $tmp1821;
            $returnValue1341 = $tmp1820;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1820));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1821));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1822));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1823));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1824));
            $tmp1333 = 21;
            goto $l1331;
            $l1832:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp1834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1834.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1836 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 24));
            base1835 = *$tmp1836;
            org$pandalanguage$pandac$FieldDecl** $tmp1838 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$434_91334->$data + 32));
            field1837 = *$tmp1838;
            panda$core$String* $tmp1845 = (($fn1844) base1835->$class->vtable[0])(base1835);
            $tmp1843 = $tmp1845;
            panda$core$String* $tmp1847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1843, &$s1846);
            $tmp1842 = $tmp1847;
            panda$core$String* $tmp1848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1842, ((org$pandalanguage$pandac$Symbol*) field1837)->name);
            $tmp1841 = $tmp1848;
            panda$core$String* $tmp1850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1841, &$s1849);
            $tmp1840 = $tmp1850;
            $tmp1839 = $tmp1840;
            $returnValue1341 = $tmp1839;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1839));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1840));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1841));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1842));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1843));
            $tmp1333 = 22;
            goto $l1331;
            $l1851:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp1853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1853.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1855 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 16));
            test1854 = *$tmp1855;
            panda$collections$ImmutableArray** $tmp1857 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91334->$data + 24));
            ifTrue1856 = *$tmp1857;
            org$pandalanguage$pandac$IRNode** $tmp1859 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 32));
            ifFalse1858 = *$tmp1859;
            int $tmp1862;
            {
                panda$core$MutableString* $tmp1866 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1870 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1869, ((panda$core$Object*) test1854));
                $tmp1868 = $tmp1870;
                panda$core$String* $tmp1872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1868, &$s1871);
                $tmp1867 = $tmp1872;
                panda$core$MutableString$init$panda$core$String($tmp1866, $tmp1867);
                $tmp1865 = $tmp1866;
                $tmp1864 = $tmp1865;
                result1863 = $tmp1864;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1864));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1865));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1867));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1868));
                {
                    int $tmp1875;
                    {
                        ITable* $tmp1879 = ((panda$collections$Iterable*) ifTrue1856)->$class->itable;
                        while ($tmp1879->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1879 = $tmp1879->next;
                        }
                        $fn1881 $tmp1880 = $tmp1879->methods[0];
                        panda$collections$Iterator* $tmp1882 = $tmp1880(((panda$collections$Iterable*) ifTrue1856));
                        $tmp1878 = $tmp1882;
                        $tmp1877 = $tmp1878;
                        Iter$515$171876 = $tmp1877;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1877));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1878));
                        $l1883:;
                        ITable* $tmp1886 = Iter$515$171876->$class->itable;
                        while ($tmp1886->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1886 = $tmp1886->next;
                        }
                        $fn1888 $tmp1887 = $tmp1886->methods[0];
                        panda$core$Bit $tmp1889 = $tmp1887(Iter$515$171876);
                        panda$core$Bit $tmp1890 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1889);
                        bool $tmp1885 = $tmp1890.value;
                        if (!$tmp1885) goto $l1884;
                        {
                            int $tmp1893;
                            {
                                ITable* $tmp1897 = Iter$515$171876->$class->itable;
                                while ($tmp1897->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1897 = $tmp1897->next;
                                }
                                $fn1899 $tmp1898 = $tmp1897->methods[1];
                                panda$core$Object* $tmp1900 = $tmp1898(Iter$515$171876);
                                $tmp1896 = $tmp1900;
                                $tmp1895 = ((org$pandalanguage$pandac$IRNode*) $tmp1896);
                                s1894 = $tmp1895;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1895));
                                panda$core$Panda$unref$panda$core$Object($tmp1896);
                                panda$core$String* $tmp1903 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1894), &$s1902);
                                $tmp1901 = $tmp1903;
                                panda$core$MutableString$append$panda$core$String(result1863, $tmp1901);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1901));
                            }
                            $tmp1893 = -1;
                            goto $l1891;
                            $l1891:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1894));
                            s1894 = NULL;
                            switch ($tmp1893) {
                                case -1: goto $l1904;
                            }
                            $l1904:;
                        }
                        goto $l1883;
                        $l1884:;
                    }
                    $tmp1875 = -1;
                    goto $l1873;
                    $l1873:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$515$171876));
                    Iter$515$171876 = NULL;
                    switch ($tmp1875) {
                        case -1: goto $l1905;
                    }
                    $l1905:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1906, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1863, $tmp1906);
                if (((panda$core$Bit) { ifFalse1858 != NULL }).value) {
                {
                    panda$core$String* $tmp1910 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1909, ((panda$core$Object*) ifFalse1858));
                    $tmp1908 = $tmp1910;
                    panda$core$String* $tmp1912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1908, &$s1911);
                    $tmp1907 = $tmp1912;
                    panda$core$MutableString$append$panda$core$String(result1863, $tmp1907);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1907));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1908));
                }
                }
                panda$core$String* $tmp1915 = panda$core$MutableString$finish$R$panda$core$String(result1863);
                $tmp1914 = $tmp1915;
                $tmp1913 = $tmp1914;
                $returnValue1341 = $tmp1913;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1913));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1914));
                $tmp1862 = 0;
                goto $l1860;
                $l1916:;
                $tmp1333 = 23;
                goto $l1331;
                $l1917:;
                return $returnValue1341;
            }
            $l1860:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1863));
            result1863 = NULL;
            switch ($tmp1862) {
                case 0: goto $l1916;
            }
            $l1919:;
        }
        }
        else {
        panda$core$Bit $tmp1920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1920.value) {
        {
            panda$core$UInt64* $tmp1922 = ((panda$core$UInt64*) ((char*) $match$434_91334->$data + 24));
            value1921 = *$tmp1922;
            panda$core$String* $tmp1925 = panda$core$UInt64$convert$R$panda$core$String(value1921);
            $tmp1924 = $tmp1925;
            $tmp1923 = $tmp1924;
            $returnValue1341 = $tmp1923;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1923));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1924));
            $tmp1333 = 24;
            goto $l1331;
            $l1926:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp1928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1928.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1930 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 16));
            value1929 = *$tmp1930;
            panda$core$String* $tmp1935 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1934, ((panda$core$Object*) value1929));
            $tmp1933 = $tmp1935;
            panda$core$String* $tmp1937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1933, &$s1936);
            $tmp1932 = $tmp1937;
            $tmp1931 = $tmp1932;
            $returnValue1341 = $tmp1931;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1931));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1932));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1933));
            $tmp1333 = 25;
            goto $l1331;
            $l1938:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp1940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1940.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1942 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 16));
            value1941 = *$tmp1942;
            panda$core$String* $tmp1947 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1946, ((panda$core$Object*) value1941));
            $tmp1945 = $tmp1947;
            panda$core$String* $tmp1949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1945, &$s1948);
            $tmp1944 = $tmp1949;
            $tmp1943 = $tmp1944;
            $returnValue1341 = $tmp1943;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1943));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1944));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1945));
            $tmp1333 = 26;
            goto $l1331;
            $l1950:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp1952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1952.value) {
        {
            panda$core$String** $tmp1954 = ((panda$core$String**) ((char*) $match$434_91334->$data + 16));
            label1953 = *$tmp1954;
            panda$collections$ImmutableArray** $tmp1956 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91334->$data + 24));
            statements1955 = *$tmp1956;
            int $tmp1959;
            {
                panda$core$MutableString* $tmp1963 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1963);
                $tmp1962 = $tmp1963;
                $tmp1961 = $tmp1962;
                result1960 = $tmp1961;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1961));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1962));
                if (((panda$core$Bit) { label1953 != NULL }).value) {
                {
                    panda$core$String* $tmp1966 = panda$core$String$convert$R$panda$core$String(label1953);
                    $tmp1965 = $tmp1966;
                    panda$core$String* $tmp1968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1965, &$s1967);
                    $tmp1964 = $tmp1968;
                    panda$core$MutableString$append$panda$core$String(result1960, $tmp1964);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1964));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1965));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1960, &$s1969);
                {
                    int $tmp1972;
                    {
                        ITable* $tmp1976 = ((panda$collections$Iterable*) statements1955)->$class->itable;
                        while ($tmp1976->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1976 = $tmp1976->next;
                        }
                        $fn1978 $tmp1977 = $tmp1976->methods[0];
                        panda$collections$Iterator* $tmp1979 = $tmp1977(((panda$collections$Iterable*) statements1955));
                        $tmp1975 = $tmp1979;
                        $tmp1974 = $tmp1975;
                        Iter$535$171973 = $tmp1974;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1974));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1975));
                        $l1980:;
                        ITable* $tmp1983 = Iter$535$171973->$class->itable;
                        while ($tmp1983->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1983 = $tmp1983->next;
                        }
                        $fn1985 $tmp1984 = $tmp1983->methods[0];
                        panda$core$Bit $tmp1986 = $tmp1984(Iter$535$171973);
                        panda$core$Bit $tmp1987 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1986);
                        bool $tmp1982 = $tmp1987.value;
                        if (!$tmp1982) goto $l1981;
                        {
                            int $tmp1990;
                            {
                                ITable* $tmp1994 = Iter$535$171973->$class->itable;
                                while ($tmp1994->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1994 = $tmp1994->next;
                                }
                                $fn1996 $tmp1995 = $tmp1994->methods[1];
                                panda$core$Object* $tmp1997 = $tmp1995(Iter$535$171973);
                                $tmp1993 = $tmp1997;
                                $tmp1992 = ((org$pandalanguage$pandac$IRNode*) $tmp1993);
                                s1991 = $tmp1992;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1992));
                                panda$core$Panda$unref$panda$core$Object($tmp1993);
                                panda$core$String* $tmp2000 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1991), &$s1999);
                                $tmp1998 = $tmp2000;
                                panda$core$MutableString$append$panda$core$String(result1960, $tmp1998);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1998));
                            }
                            $tmp1990 = -1;
                            goto $l1988;
                            $l1988:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1991));
                            s1991 = NULL;
                            switch ($tmp1990) {
                                case -1: goto $l2001;
                            }
                            $l2001:;
                        }
                        goto $l1980;
                        $l1981:;
                    }
                    $tmp1972 = -1;
                    goto $l1970;
                    $l1970:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$535$171973));
                    Iter$535$171973 = NULL;
                    switch ($tmp1972) {
                        case -1: goto $l2002;
                    }
                    $l2002:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2003, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1960, $tmp2003);
                panda$core$String* $tmp2006 = panda$core$MutableString$finish$R$panda$core$String(result1960);
                $tmp2005 = $tmp2006;
                $tmp2004 = $tmp2005;
                $returnValue1341 = $tmp2004;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2004));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2005));
                $tmp1959 = 0;
                goto $l1957;
                $l2007:;
                $tmp1333 = 27;
                goto $l1331;
                $l2008:;
                return $returnValue1341;
            }
            $l1957:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1960));
            result1960 = NULL;
            switch ($tmp1959) {
                case 0: goto $l2007;
            }
            $l2010:;
        }
        }
        else {
        panda$core$Bit $tmp2011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp2011.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2013 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 16));
            value2012 = *$tmp2013;
            panda$collections$ImmutableArray** $tmp2015 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91334->$data + 24));
            whens2014 = *$tmp2015;
            panda$collections$ImmutableArray** $tmp2017 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91334->$data + 32));
            other2016 = *$tmp2017;
            int $tmp2020;
            {
                panda$core$MutableString* $tmp2024 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp2028 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2027, ((panda$core$Object*) value2012));
                $tmp2026 = $tmp2028;
                panda$core$String* $tmp2030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2026, &$s2029);
                $tmp2025 = $tmp2030;
                panda$core$MutableString$init$panda$core$String($tmp2024, $tmp2025);
                $tmp2023 = $tmp2024;
                $tmp2022 = $tmp2023;
                result2021 = $tmp2022;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2022));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2023));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2025));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2026));
                {
                    int $tmp2033;
                    {
                        ITable* $tmp2037 = ((panda$collections$Iterable*) whens2014)->$class->itable;
                        while ($tmp2037->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2037 = $tmp2037->next;
                        }
                        $fn2039 $tmp2038 = $tmp2037->methods[0];
                        panda$collections$Iterator* $tmp2040 = $tmp2038(((panda$collections$Iterable*) whens2014));
                        $tmp2036 = $tmp2040;
                        $tmp2035 = $tmp2036;
                        Iter$542$172034 = $tmp2035;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2035));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2036));
                        $l2041:;
                        ITable* $tmp2044 = Iter$542$172034->$class->itable;
                        while ($tmp2044->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2044 = $tmp2044->next;
                        }
                        $fn2046 $tmp2045 = $tmp2044->methods[0];
                        panda$core$Bit $tmp2047 = $tmp2045(Iter$542$172034);
                        panda$core$Bit $tmp2048 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2047);
                        bool $tmp2043 = $tmp2048.value;
                        if (!$tmp2043) goto $l2042;
                        {
                            int $tmp2051;
                            {
                                ITable* $tmp2055 = Iter$542$172034->$class->itable;
                                while ($tmp2055->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2055 = $tmp2055->next;
                                }
                                $fn2057 $tmp2056 = $tmp2055->methods[1];
                                panda$core$Object* $tmp2058 = $tmp2056(Iter$542$172034);
                                $tmp2054 = $tmp2058;
                                $tmp2053 = ((org$pandalanguage$pandac$IRNode*) $tmp2054);
                                w2052 = $tmp2053;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2053));
                                panda$core$Panda$unref$panda$core$Object($tmp2054);
                                panda$core$String* $tmp2061 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w2052), &$s2060);
                                $tmp2059 = $tmp2061;
                                panda$core$MutableString$append$panda$core$String(result2021, $tmp2059);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2059));
                            }
                            $tmp2051 = -1;
                            goto $l2049;
                            $l2049:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w2052));
                            w2052 = NULL;
                            switch ($tmp2051) {
                                case -1: goto $l2062;
                            }
                            $l2062:;
                        }
                        goto $l2041;
                        $l2042:;
                    }
                    $tmp2033 = -1;
                    goto $l2031;
                    $l2031:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$542$172034));
                    Iter$542$172034 = NULL;
                    switch ($tmp2033) {
                        case -1: goto $l2063;
                    }
                    $l2063:;
                }
                if (((panda$core$Bit) { other2016 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2021, &$s2064);
                    {
                        int $tmp2067;
                        {
                            ITable* $tmp2071 = ((panda$collections$Iterable*) other2016)->$class->itable;
                            while ($tmp2071->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp2071 = $tmp2071->next;
                            }
                            $fn2073 $tmp2072 = $tmp2071->methods[0];
                            panda$collections$Iterator* $tmp2074 = $tmp2072(((panda$collections$Iterable*) other2016));
                            $tmp2070 = $tmp2074;
                            $tmp2069 = $tmp2070;
                            Iter$547$212068 = $tmp2069;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2069));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2070));
                            $l2075:;
                            ITable* $tmp2078 = Iter$547$212068->$class->itable;
                            while ($tmp2078->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2078 = $tmp2078->next;
                            }
                            $fn2080 $tmp2079 = $tmp2078->methods[0];
                            panda$core$Bit $tmp2081 = $tmp2079(Iter$547$212068);
                            panda$core$Bit $tmp2082 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2081);
                            bool $tmp2077 = $tmp2082.value;
                            if (!$tmp2077) goto $l2076;
                            {
                                int $tmp2085;
                                {
                                    ITable* $tmp2089 = Iter$547$212068->$class->itable;
                                    while ($tmp2089->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp2089 = $tmp2089->next;
                                    }
                                    $fn2091 $tmp2090 = $tmp2089->methods[1];
                                    panda$core$Object* $tmp2092 = $tmp2090(Iter$547$212068);
                                    $tmp2088 = $tmp2092;
                                    $tmp2087 = ((org$pandalanguage$pandac$IRNode*) $tmp2088);
                                    s2086 = $tmp2087;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2087));
                                    panda$core$Panda$unref$panda$core$Object($tmp2088);
                                    panda$core$String* $tmp2095 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2086), &$s2094);
                                    $tmp2093 = $tmp2095;
                                    panda$core$MutableString$append$panda$core$String(result2021, $tmp2093);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2093));
                                }
                                $tmp2085 = -1;
                                goto $l2083;
                                $l2083:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2086));
                                s2086 = NULL;
                                switch ($tmp2085) {
                                    case -1: goto $l2096;
                                }
                                $l2096:;
                            }
                            goto $l2075;
                            $l2076:;
                        }
                        $tmp2067 = -1;
                        goto $l2065;
                        $l2065:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$547$212068));
                        Iter$547$212068 = NULL;
                        switch ($tmp2067) {
                            case -1: goto $l2097;
                        }
                        $l2097:;
                    }
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2098, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2021, $tmp2098);
                panda$core$String* $tmp2101 = panda$core$MutableString$finish$R$panda$core$String(result2021);
                $tmp2100 = $tmp2101;
                $tmp2099 = $tmp2100;
                $returnValue1341 = $tmp2099;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2099));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2100));
                $tmp2020 = 0;
                goto $l2018;
                $l2102:;
                $tmp1333 = 28;
                goto $l1331;
                $l2103:;
                return $returnValue1341;
            }
            $l2018:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2021));
            result2021 = NULL;
            switch ($tmp2020) {
                case 0: goto $l2102;
            }
            $l2105:;
        }
        }
        else {
        panda$core$Bit $tmp2106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp2106.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2108 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 24));
            target2107 = *$tmp2108;
            org$pandalanguage$pandac$MethodRef** $tmp2110 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$434_91334->$data + 32));
            m2109 = *$tmp2110;
            if (((panda$core$Bit) { target2107 != NULL }).value) {
            {
                panda$core$String* $tmp2117 = (($fn2116) target2107->$class->vtable[0])(target2107);
                $tmp2115 = $tmp2117;
                panda$core$String* $tmp2119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2115, &$s2118);
                $tmp2114 = $tmp2119;
                panda$core$String* $tmp2120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2114, ((org$pandalanguage$pandac$Symbol*) m2109->value)->name);
                $tmp2113 = $tmp2120;
                panda$core$String* $tmp2122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2113, &$s2121);
                $tmp2112 = $tmp2122;
                $tmp2111 = $tmp2112;
                $returnValue1341 = $tmp2111;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2111));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2112));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2113));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2114));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2115));
                $tmp1333 = 29;
                goto $l1331;
                $l2123:;
                return $returnValue1341;
            }
            }
            $tmp2125 = ((org$pandalanguage$pandac$Symbol*) m2109->value)->name;
            $returnValue1341 = $tmp2125;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2125));
            $tmp1333 = 30;
            goto $l1331;
            $l2126:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp2128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp2128.value) {
        {
            panda$core$UInt64* $tmp2130 = ((panda$core$UInt64*) ((char*) $match$434_91334->$data + 24));
            value2129 = *$tmp2130;
            panda$core$UInt64$wrapper* $tmp2135;
            $tmp2135 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
            $tmp2135->value = value2129;
            $tmp2134 = ((panda$core$Object*) $tmp2135);
            panda$core$String* $tmp2136 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2133, $tmp2134);
            $tmp2132 = $tmp2136;
            $tmp2131 = $tmp2132;
            $returnValue1341 = $tmp2131;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2131));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2132));
            panda$core$Panda$unref$panda$core$Object($tmp2134);
            $tmp1333 = 31;
            goto $l1331;
            $l2137:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp2139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp2139.value) {
        {
            $tmp2140 = &$s2141;
            $returnValue1341 = $tmp2140;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2140));
            $tmp1333 = 32;
            goto $l1331;
            $l2142:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp2144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp2144.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2146 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$434_91334->$data + 16));
            op2145 = *$tmp2146;
            org$pandalanguage$pandac$IRNode** $tmp2148 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 24));
            base2147 = *$tmp2148;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2155;
            $tmp2155 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp2155->value = op2145;
            $tmp2154 = ((panda$core$Object*) $tmp2155);
            panda$core$String* $tmp2157 = (($fn2156) $tmp2154->$class->vtable[0])($tmp2154);
            $tmp2153 = $tmp2157;
            panda$core$String* $tmp2159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2153, &$s2158);
            $tmp2152 = $tmp2159;
            panda$core$String* $tmp2160 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2152, ((panda$core$Object*) base2147));
            $tmp2151 = $tmp2160;
            panda$core$String* $tmp2162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2151, &$s2161);
            $tmp2150 = $tmp2162;
            $tmp2149 = $tmp2150;
            $returnValue1341 = $tmp2149;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2149));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2150));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2151));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2152));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2153));
            panda$core$Panda$unref$panda$core$Object($tmp2154);
            $tmp1333 = 33;
            goto $l1331;
            $l2163:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp2165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2165.value) {
        {
            panda$core$String** $tmp2167 = ((panda$core$String**) ((char*) $match$434_91334->$data + 16));
            label2166 = *$tmp2167;
            org$pandalanguage$pandac$IRNode** $tmp2169 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 24));
            target2168 = *$tmp2169;
            org$pandalanguage$pandac$IRNode** $tmp2171 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 32));
            list2170 = *$tmp2171;
            panda$collections$ImmutableArray** $tmp2173 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91334->$data + 40));
            statements2172 = *$tmp2173;
            int $tmp2176;
            {
                panda$core$MutableString* $tmp2180 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2180);
                $tmp2179 = $tmp2180;
                $tmp2178 = $tmp2179;
                result2177 = $tmp2178;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2178));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2179));
                if (((panda$core$Bit) { label2166 != NULL }).value) {
                {
                    panda$core$String* $tmp2183 = panda$core$String$convert$R$panda$core$String(label2166);
                    $tmp2182 = $tmp2183;
                    panda$core$String* $tmp2185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2182, &$s2184);
                    $tmp2181 = $tmp2185;
                    panda$core$MutableString$append$panda$core$String(result2177, $tmp2181);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2181));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2182));
                }
                }
                panda$core$String* $tmp2191 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2190, ((panda$core$Object*) target2168));
                $tmp2189 = $tmp2191;
                panda$core$String* $tmp2193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2189, &$s2192);
                $tmp2188 = $tmp2193;
                panda$core$String* $tmp2194 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2188, ((panda$core$Object*) list2170));
                $tmp2187 = $tmp2194;
                panda$core$String* $tmp2196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2187, &$s2195);
                $tmp2186 = $tmp2196;
                panda$core$MutableString$append$panda$core$String(result2177, $tmp2186);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2186));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2187));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2188));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2189));
                {
                    int $tmp2199;
                    {
                        ITable* $tmp2203 = ((panda$collections$Iterable*) statements2172)->$class->itable;
                        while ($tmp2203->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2203 = $tmp2203->next;
                        }
                        $fn2205 $tmp2204 = $tmp2203->methods[0];
                        panda$collections$Iterator* $tmp2206 = $tmp2204(((panda$collections$Iterable*) statements2172));
                        $tmp2202 = $tmp2206;
                        $tmp2201 = $tmp2202;
                        Iter$570$172200 = $tmp2201;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2201));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2202));
                        $l2207:;
                        ITable* $tmp2210 = Iter$570$172200->$class->itable;
                        while ($tmp2210->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2210 = $tmp2210->next;
                        }
                        $fn2212 $tmp2211 = $tmp2210->methods[0];
                        panda$core$Bit $tmp2213 = $tmp2211(Iter$570$172200);
                        panda$core$Bit $tmp2214 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2213);
                        bool $tmp2209 = $tmp2214.value;
                        if (!$tmp2209) goto $l2208;
                        {
                            int $tmp2217;
                            {
                                ITable* $tmp2221 = Iter$570$172200->$class->itable;
                                while ($tmp2221->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2221 = $tmp2221->next;
                                }
                                $fn2223 $tmp2222 = $tmp2221->methods[1];
                                panda$core$Object* $tmp2224 = $tmp2222(Iter$570$172200);
                                $tmp2220 = $tmp2224;
                                $tmp2219 = ((org$pandalanguage$pandac$IRNode*) $tmp2220);
                                s2218 = $tmp2219;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2219));
                                panda$core$Panda$unref$panda$core$Object($tmp2220);
                                panda$core$String* $tmp2227 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2218), &$s2226);
                                $tmp2225 = $tmp2227;
                                panda$core$MutableString$append$panda$core$String(result2177, $tmp2225);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2225));
                            }
                            $tmp2217 = -1;
                            goto $l2215;
                            $l2215:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2218));
                            s2218 = NULL;
                            switch ($tmp2217) {
                                case -1: goto $l2228;
                            }
                            $l2228:;
                        }
                        goto $l2207;
                        $l2208:;
                    }
                    $tmp2199 = -1;
                    goto $l2197;
                    $l2197:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$570$172200));
                    Iter$570$172200 = NULL;
                    switch ($tmp2199) {
                        case -1: goto $l2229;
                    }
                    $l2229:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2230, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2177, $tmp2230);
                panda$core$String* $tmp2233 = panda$core$MutableString$finish$R$panda$core$String(result2177);
                $tmp2232 = $tmp2233;
                $tmp2231 = $tmp2232;
                $returnValue1341 = $tmp2231;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2231));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2232));
                $tmp2176 = 0;
                goto $l2174;
                $l2234:;
                $tmp1333 = 34;
                goto $l1331;
                $l2235:;
                return $returnValue1341;
            }
            $l2174:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2177));
            result2177 = NULL;
            switch ($tmp2176) {
                case 0: goto $l2234;
            }
            $l2237:;
        }
        }
        else {
        panda$core$Bit $tmp2238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2238.value) {
        {
            panda$core$Real64* $tmp2240 = ((panda$core$Real64*) ((char*) $match$434_91334->$data + 24));
            value2239 = *$tmp2240;
            panda$core$String* $tmp2243 = panda$core$Real64$convert$R$panda$core$String(value2239);
            $tmp2242 = $tmp2243;
            $tmp2241 = $tmp2242;
            $returnValue1341 = $tmp2241;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2241));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2242));
            $tmp1333 = 35;
            goto $l1331;
            $l2244:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp2246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2246.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2248 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 16));
            value2247 = *$tmp2248;
            if (((panda$core$Bit) { value2247 != NULL }).value) {
            {
                panda$core$String* $tmp2253 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2252, ((panda$core$Object*) value2247));
                $tmp2251 = $tmp2253;
                panda$core$String* $tmp2255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2251, &$s2254);
                $tmp2250 = $tmp2255;
                $tmp2249 = $tmp2250;
                $returnValue1341 = $tmp2249;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2249));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2250));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2251));
                $tmp1333 = 36;
                goto $l1331;
                $l2256:;
                return $returnValue1341;
            }
            }
            $tmp2258 = &$s2259;
            $returnValue1341 = $tmp2258;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2258));
            $tmp1333 = 37;
            goto $l1331;
            $l2260:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp2262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2262.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2264 = ((org$pandalanguage$pandac$Type**) ((char*) $match$434_91334->$data + 16));
            type2263 = *$tmp2264;
            panda$core$Int64* $tmp2266 = ((panda$core$Int64*) ((char*) $match$434_91334->$data + 24));
            id2265 = *$tmp2266;
            panda$core$Int64$wrapper* $tmp2272;
            $tmp2272 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2272->value = id2265;
            $tmp2271 = ((panda$core$Object*) $tmp2272);
            panda$core$String* $tmp2273 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2270, $tmp2271);
            $tmp2269 = $tmp2273;
            panda$core$String* $tmp2275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2269, &$s2274);
            $tmp2268 = $tmp2275;
            $tmp2267 = $tmp2268;
            $returnValue1341 = $tmp2267;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2267));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2268));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2269));
            panda$core$Panda$unref$panda$core$Object($tmp2271);
            $tmp1333 = 38;
            goto $l1331;
            $l2276:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp2278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp2278.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2280 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 0));
            base2279 = *$tmp2280;
            panda$core$Int64* $tmp2282 = ((panda$core$Int64*) ((char*) $match$434_91334->$data + 8));
            id2281 = *$tmp2282;
            panda$core$Int64$wrapper* $tmp2290;
            $tmp2290 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2290->value = id2281;
            $tmp2289 = ((panda$core$Object*) $tmp2290);
            panda$core$String* $tmp2291 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2288, $tmp2289);
            $tmp2287 = $tmp2291;
            panda$core$String* $tmp2293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2287, &$s2292);
            $tmp2286 = $tmp2293;
            panda$core$String* $tmp2294 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2286, ((panda$core$Object*) base2279));
            $tmp2285 = $tmp2294;
            panda$core$String* $tmp2296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2285, &$s2295);
            $tmp2284 = $tmp2296;
            $tmp2283 = $tmp2284;
            $returnValue1341 = $tmp2283;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2283));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2284));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2285));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2286));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2287));
            panda$core$Panda$unref$panda$core$Object($tmp2289);
            $tmp1333 = 39;
            goto $l1331;
            $l2297:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp2299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp2299.value) {
        {
            $tmp2300 = &$s2301;
            $returnValue1341 = $tmp2300;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2300));
            $tmp1333 = 40;
            goto $l1331;
            $l2302:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp2304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2304.value) {
        {
            panda$core$String** $tmp2306 = ((panda$core$String**) ((char*) $match$434_91334->$data + 16));
            str2305 = *$tmp2306;
            panda$core$String* $tmp2310 = panda$core$String$format$panda$core$String$R$panda$core$String(str2305, &$s2309);
            $tmp2308 = $tmp2310;
            $tmp2307 = $tmp2308;
            $returnValue1341 = $tmp2307;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2307));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2308));
            $tmp1333 = 41;
            goto $l1331;
            $l2311:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp2313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp2313.value) {
        {
            $tmp2314 = &$s2315;
            $returnValue1341 = $tmp2314;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2314));
            $tmp1333 = 42;
            goto $l1331;
            $l2316:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp2318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp2318.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2320 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 16));
            test2319 = *$tmp2320;
            org$pandalanguage$pandac$IRNode** $tmp2322 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 24));
            ifTrue2321 = *$tmp2322;
            org$pandalanguage$pandac$IRNode** $tmp2324 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 32));
            ifFalse2323 = *$tmp2324;
            panda$core$String* $tmp2333 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2332, ((panda$core$Object*) test2319));
            $tmp2331 = $tmp2333;
            panda$core$String* $tmp2335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2331, &$s2334);
            $tmp2330 = $tmp2335;
            panda$core$String* $tmp2336 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2330, ((panda$core$Object*) ifTrue2321));
            $tmp2329 = $tmp2336;
            panda$core$String* $tmp2338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2329, &$s2337);
            $tmp2328 = $tmp2338;
            panda$core$String* $tmp2339 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2328, ((panda$core$Object*) ifFalse2323));
            $tmp2327 = $tmp2339;
            panda$core$String* $tmp2341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2327, &$s2340);
            $tmp2326 = $tmp2341;
            $tmp2325 = $tmp2326;
            $returnValue1341 = $tmp2325;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2325));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2326));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2327));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2328));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2329));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2330));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2331));
            $tmp1333 = 43;
            goto $l1331;
            $l2342:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp2344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp2344.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2346 = ((org$pandalanguage$pandac$Type**) ((char*) $match$434_91334->$data + 16));
            type2345 = *$tmp2346;
            panda$core$String* $tmp2349 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type2345);
            $tmp2348 = $tmp2349;
            $tmp2347 = $tmp2348;
            $returnValue1341 = $tmp2347;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2347));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2348));
            $tmp1333 = 44;
            goto $l1331;
            $l2350:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp2352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp2352.value) {
        {
            panda$core$String** $tmp2354 = ((panda$core$String**) ((char*) $match$434_91334->$data + 16));
            name2353 = *$tmp2354;
            $tmp2355 = name2353;
            $returnValue1341 = $tmp2355;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2355));
            $tmp1333 = 45;
            goto $l1331;
            $l2356:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp2358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp2358.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2360 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 24));
            base2359 = *$tmp2360;
            panda$collections$ImmutableArray** $tmp2362 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91334->$data + 32));
            args2361 = *$tmp2362;
            panda$core$String* $tmp2369 = (($fn2368) base2359->$class->vtable[0])(base2359);
            $tmp2367 = $tmp2369;
            panda$core$String* $tmp2371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2367, &$s2370);
            $tmp2366 = $tmp2371;
            ITable* $tmp2373 = ((panda$collections$ListView*) args2361)->$class->itable;
            while ($tmp2373->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2373 = $tmp2373->next;
            }
            $fn2375 $tmp2374 = $tmp2373->methods[4];
            panda$core$String* $tmp2376 = $tmp2374(((panda$collections$ListView*) args2361));
            $tmp2372 = $tmp2376;
            panda$core$String* $tmp2377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2366, $tmp2372);
            $tmp2365 = $tmp2377;
            panda$core$String* $tmp2379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2365, &$s2378);
            $tmp2364 = $tmp2379;
            $tmp2363 = $tmp2364;
            $returnValue1341 = $tmp2363;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2363));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2364));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2365));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2372));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2366));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2367));
            $tmp1333 = 46;
            goto $l1331;
            $l2380:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp2382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp2382.value) {
        {
            panda$collections$ImmutableArray** $tmp2384 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91334->$data + 16));
            params2383 = *$tmp2384;
            org$pandalanguage$pandac$ASTNode** $tmp2386 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$434_91334->$data + 24));
            body2385 = *$tmp2386;
            ITable* $tmp2394 = ((panda$collections$ListView*) params2383)->$class->itable;
            while ($tmp2394->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2394 = $tmp2394->next;
            }
            $fn2396 $tmp2395 = $tmp2394->methods[4];
            panda$core$String* $tmp2397 = $tmp2395(((panda$collections$ListView*) params2383));
            $tmp2393 = $tmp2397;
            panda$core$String* $tmp2398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2392, $tmp2393);
            $tmp2391 = $tmp2398;
            panda$core$String* $tmp2400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2391, &$s2399);
            $tmp2390 = $tmp2400;
            panda$core$String* $tmp2401 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2390, ((panda$core$Object*) body2385));
            $tmp2389 = $tmp2401;
            panda$core$String* $tmp2403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2389, &$s2402);
            $tmp2388 = $tmp2403;
            $tmp2387 = $tmp2388;
            $returnValue1341 = $tmp2387;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2387));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2388));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2389));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2390));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2391));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2393));
            $tmp1333 = 47;
            goto $l1331;
            $l2404:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp2406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2406.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2408 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 24));
            target2407 = *$tmp2408;
            panda$collections$ImmutableArray** $tmp2410 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91334->$data + 32));
            methods2409 = *$tmp2410;
            panda$collections$ImmutableArray** $tmp2412 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91334->$data + 40));
            args2411 = *$tmp2412;
            if (((panda$core$Bit) { target2407 != NULL }).value) {
            {
                panda$core$String* $tmp2421 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2420, ((panda$core$Object*) target2407));
                $tmp2419 = $tmp2421;
                panda$core$String* $tmp2423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2419, &$s2422);
                $tmp2418 = $tmp2423;
                panda$core$Object* $tmp2425 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2409, ((panda$core$Int64) { 0 }));
                $tmp2424 = $tmp2425;
                panda$core$String* $tmp2426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2418, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2424)->value)->name);
                $tmp2417 = $tmp2426;
                panda$core$String* $tmp2428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2417, &$s2427);
                $tmp2416 = $tmp2428;
                ITable* $tmp2430 = ((panda$collections$ListView*) args2411)->$class->itable;
                while ($tmp2430->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2430 = $tmp2430->next;
                }
                $fn2432 $tmp2431 = $tmp2430->methods[4];
                panda$core$String* $tmp2433 = $tmp2431(((panda$collections$ListView*) args2411));
                $tmp2429 = $tmp2433;
                panda$core$String* $tmp2434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2416, $tmp2429);
                $tmp2415 = $tmp2434;
                panda$core$String* $tmp2436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2415, &$s2435);
                $tmp2414 = $tmp2436;
                $tmp2413 = $tmp2414;
                $returnValue1341 = $tmp2413;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2413));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2414));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2415));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2429));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2416));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2417));
                panda$core$Panda$unref$panda$core$Object($tmp2424);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2418));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2419));
                $tmp1333 = 48;
                goto $l1331;
                $l2437:;
                return $returnValue1341;
            }
            }
            else {
            {
                panda$core$Object* $tmp2446 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2409, ((panda$core$Int64) { 0 }));
                $tmp2445 = $tmp2446;
                panda$core$String* $tmp2447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2444, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2445)->value)->name);
                $tmp2443 = $tmp2447;
                panda$core$String* $tmp2449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2443, &$s2448);
                $tmp2442 = $tmp2449;
                ITable* $tmp2451 = ((panda$collections$ListView*) args2411)->$class->itable;
                while ($tmp2451->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2451 = $tmp2451->next;
                }
                $fn2453 $tmp2452 = $tmp2451->methods[4];
                panda$core$String* $tmp2454 = $tmp2452(((panda$collections$ListView*) args2411));
                $tmp2450 = $tmp2454;
                panda$core$String* $tmp2455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2442, $tmp2450);
                $tmp2441 = $tmp2455;
                panda$core$String* $tmp2457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2441, &$s2456);
                $tmp2440 = $tmp2457;
                $tmp2439 = $tmp2440;
                $returnValue1341 = $tmp2439;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2439));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2440));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2441));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2450));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2442));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2443));
                panda$core$Panda$unref$panda$core$Object($tmp2445);
                $tmp1333 = 49;
                goto $l1331;
                $l2458:;
                return $returnValue1341;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp2460.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2462 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 16));
            target2461 = *$tmp2462;
            panda$collections$ImmutableArray** $tmp2464 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91334->$data + 24));
            methods2463 = *$tmp2464;
            if (((panda$core$Bit) { target2461 != NULL }).value) {
            {
                panda$core$String* $tmp2471 = (($fn2470) target2461->$class->vtable[0])(target2461);
                $tmp2469 = $tmp2471;
                panda$core$String* $tmp2473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2469, &$s2472);
                $tmp2468 = $tmp2473;
                panda$core$Object* $tmp2475 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2463, ((panda$core$Int64) { 0 }));
                $tmp2474 = $tmp2475;
                panda$core$String* $tmp2476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2468, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2474)->value)->name);
                $tmp2467 = $tmp2476;
                panda$core$String* $tmp2478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2467, &$s2477);
                $tmp2466 = $tmp2478;
                $tmp2465 = $tmp2466;
                $returnValue1341 = $tmp2465;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2465));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2466));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2467));
                panda$core$Panda$unref$panda$core$Object($tmp2474);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2468));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2469));
                $tmp1333 = 50;
                goto $l1331;
                $l2479:;
                return $returnValue1341;
            }
            }
            else {
            {
                panda$core$Object* $tmp2485 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2463, ((panda$core$Int64) { 0 }));
                $tmp2484 = $tmp2485;
                panda$core$String* $tmp2486 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2484)->value)->name);
                $tmp2483 = $tmp2486;
                panda$core$String* $tmp2488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2483, &$s2487);
                $tmp2482 = $tmp2488;
                $tmp2481 = $tmp2482;
                $returnValue1341 = $tmp2481;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2481));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2482));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2483));
                panda$core$Panda$unref$panda$core$Object($tmp2484);
                $tmp1333 = 51;
                goto $l1331;
                $l2489:;
                return $returnValue1341;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp2491.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2493 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 16));
            start2492 = *$tmp2493;
            org$pandalanguage$pandac$IRNode** $tmp2495 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 24));
            end2494 = *$tmp2495;
            panda$core$Bit* $tmp2497 = ((panda$core$Bit*) ((char*) $match$434_91334->$data + 32));
            inclusive2496 = *$tmp2497;
            org$pandalanguage$pandac$IRNode** $tmp2499 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 33));
            step2498 = *$tmp2499;
            int $tmp2502;
            {
                panda$core$MutableString* $tmp2506 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2506);
                $tmp2505 = $tmp2506;
                $tmp2504 = $tmp2505;
                result2503 = $tmp2504;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2504));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2505));
                if (((panda$core$Bit) { start2492 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2503, ((panda$core$Object*) start2492));
                }
                }
                if (inclusive2496.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2503, &$s2507);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result2503, &$s2508);
                }
                }
                if (((panda$core$Bit) { end2494 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2503, ((panda$core$Object*) end2494));
                }
                }
                if (((panda$core$Bit) { step2498 != NULL }).value) {
                {
                    panda$core$String* $tmp2512 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2511, ((panda$core$Object*) step2498));
                    $tmp2510 = $tmp2512;
                    panda$core$String* $tmp2514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2510, &$s2513);
                    $tmp2509 = $tmp2514;
                    panda$core$MutableString$append$panda$core$String(result2503, $tmp2509);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2509));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2510));
                }
                }
                panda$core$String* $tmp2517 = panda$core$MutableString$finish$R$panda$core$String(result2503);
                $tmp2516 = $tmp2517;
                $tmp2515 = $tmp2516;
                $returnValue1341 = $tmp2515;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2515));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2516));
                $tmp2502 = 0;
                goto $l2500;
                $l2518:;
                $tmp1333 = 52;
                goto $l1331;
                $l2519:;
                return $returnValue1341;
            }
            $l2500:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2503));
            result2503 = NULL;
            switch ($tmp2502) {
                case 0: goto $l2518;
            }
            $l2521:;
        }
        }
        else {
        panda$core$Bit $tmp2522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp2522.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp2524 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$434_91334->$data + 16));
            kind2523 = *$tmp2524;
            panda$collections$ImmutableArray** $tmp2526 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91334->$data + 24));
            decls2525 = *$tmp2526;
            int $tmp2529;
            {
                panda$core$MutableString* $tmp2533 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2533);
                $tmp2532 = $tmp2533;
                $tmp2531 = $tmp2532;
                result2530 = $tmp2531;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2531));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2532));
                {
                    $match$636_172534 = kind2523;
                    panda$core$Bit $tmp2535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$636_172534.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp2535.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2530, &$s2536);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$636_172534.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp2537.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2530, &$s2538);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$636_172534.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp2539.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2530, &$s2540);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$636_172534.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp2541.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2530, &$s2542);
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp2544 = ((panda$collections$ListView*) decls2525)->$class->itable;
                while ($tmp2544->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2544 = $tmp2544->next;
                }
                $fn2546 $tmp2545 = $tmp2544->methods[4];
                panda$core$String* $tmp2547 = $tmp2545(((panda$collections$ListView*) decls2525));
                $tmp2543 = $tmp2547;
                panda$core$MutableString$append$panda$core$String(result2530, $tmp2543);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2543));
                panda$core$String* $tmp2550 = panda$core$MutableString$finish$R$panda$core$String(result2530);
                $tmp2549 = $tmp2550;
                $tmp2548 = $tmp2549;
                $returnValue1341 = $tmp2548;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2548));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2549));
                $tmp2529 = 0;
                goto $l2527;
                $l2551:;
                $tmp1333 = 53;
                goto $l1331;
                $l2552:;
                return $returnValue1341;
            }
            $l2527:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2530));
            result2530 = NULL;
            switch ($tmp2529) {
                case 0: goto $l2551;
            }
            $l2554:;
        }
        }
        else {
        panda$core$Bit $tmp2555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp2555.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2557 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$434_91334->$data + 16));
            variable2556 = *$tmp2557;
            $tmp2558 = ((org$pandalanguage$pandac$Symbol*) variable2556)->name;
            $returnValue1341 = $tmp2558;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2558));
            $tmp1333 = 54;
            goto $l1331;
            $l2559:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp2561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp2561.value) {
        {
            panda$collections$ImmutableArray** $tmp2563 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91334->$data + 16));
            tests2562 = *$tmp2563;
            panda$collections$ImmutableArray** $tmp2565 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91334->$data + 24));
            statements2564 = *$tmp2565;
            ITable* $tmp2573 = ((panda$collections$ListView*) tests2562)->$class->itable;
            while ($tmp2573->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2573 = $tmp2573->next;
            }
            $fn2575 $tmp2574 = $tmp2573->methods[4];
            panda$core$String* $tmp2576 = $tmp2574(((panda$collections$ListView*) tests2562));
            $tmp2572 = $tmp2576;
            panda$core$String* $tmp2577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2571, $tmp2572);
            $tmp2570 = $tmp2577;
            panda$core$String* $tmp2579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2570, &$s2578);
            $tmp2569 = $tmp2579;
            ITable* $tmp2582 = ((panda$collections$ListView*) statements2564)->$class->itable;
            while ($tmp2582->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2582 = $tmp2582->next;
            }
            $fn2584 $tmp2583 = $tmp2582->methods[5];
            panda$core$String* $tmp2585 = $tmp2583(((panda$collections$ListView*) statements2564), &$s2581);
            $tmp2580 = $tmp2585;
            panda$core$String* $tmp2586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2569, $tmp2580);
            $tmp2568 = $tmp2586;
            panda$core$String* $tmp2588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2568, &$s2587);
            $tmp2567 = $tmp2588;
            $tmp2566 = $tmp2567;
            $returnValue1341 = $tmp2566;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2566));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2567));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2568));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2580));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2569));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2570));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2572));
            $tmp1333 = 55;
            goto $l1331;
            $l2589:;
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp2591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91334->$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp2591.value) {
        {
            panda$core$String** $tmp2593 = ((panda$core$String**) ((char*) $match$434_91334->$data + 16));
            label2592 = *$tmp2593;
            org$pandalanguage$pandac$IRNode** $tmp2595 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91334->$data + 24));
            test2594 = *$tmp2595;
            panda$collections$ImmutableArray** $tmp2597 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91334->$data + 32));
            statements2596 = *$tmp2597;
            int $tmp2600;
            {
                panda$core$MutableString* $tmp2604 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2604);
                $tmp2603 = $tmp2604;
                $tmp2602 = $tmp2603;
                result2601 = $tmp2602;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2602));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2603));
                if (((panda$core$Bit) { label2592 != NULL }).value) {
                {
                    panda$core$String* $tmp2607 = panda$core$String$convert$R$panda$core$String(label2592);
                    $tmp2606 = $tmp2607;
                    panda$core$String* $tmp2609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2606, &$s2608);
                    $tmp2605 = $tmp2609;
                    panda$core$MutableString$append$panda$core$String(result2601, $tmp2605);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2605));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2606));
                }
                }
                panda$core$String* $tmp2613 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2612, ((panda$core$Object*) test2594));
                $tmp2611 = $tmp2613;
                panda$core$String* $tmp2615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2611, &$s2614);
                $tmp2610 = $tmp2615;
                panda$core$MutableString$append$panda$core$String(result2601, $tmp2610);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2610));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2611));
                {
                    int $tmp2618;
                    {
                        ITable* $tmp2622 = ((panda$collections$Iterable*) statements2596)->$class->itable;
                        while ($tmp2622->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2622 = $tmp2622->next;
                        }
                        $fn2624 $tmp2623 = $tmp2622->methods[0];
                        panda$collections$Iterator* $tmp2625 = $tmp2623(((panda$collections$Iterable*) statements2596));
                        $tmp2621 = $tmp2625;
                        $tmp2620 = $tmp2621;
                        Iter$654$172619 = $tmp2620;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2620));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2621));
                        $l2626:;
                        ITable* $tmp2629 = Iter$654$172619->$class->itable;
                        while ($tmp2629->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2629 = $tmp2629->next;
                        }
                        $fn2631 $tmp2630 = $tmp2629->methods[0];
                        panda$core$Bit $tmp2632 = $tmp2630(Iter$654$172619);
                        panda$core$Bit $tmp2633 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2632);
                        bool $tmp2628 = $tmp2633.value;
                        if (!$tmp2628) goto $l2627;
                        {
                            int $tmp2636;
                            {
                                ITable* $tmp2640 = Iter$654$172619->$class->itable;
                                while ($tmp2640->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2640 = $tmp2640->next;
                                }
                                $fn2642 $tmp2641 = $tmp2640->methods[1];
                                panda$core$Object* $tmp2643 = $tmp2641(Iter$654$172619);
                                $tmp2639 = $tmp2643;
                                $tmp2638 = ((org$pandalanguage$pandac$IRNode*) $tmp2639);
                                s2637 = $tmp2638;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2638));
                                panda$core$Panda$unref$panda$core$Object($tmp2639);
                                panda$core$String* $tmp2646 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2637), &$s2645);
                                $tmp2644 = $tmp2646;
                                panda$core$MutableString$append$panda$core$String(result2601, $tmp2644);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2644));
                            }
                            $tmp2636 = -1;
                            goto $l2634;
                            $l2634:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2637));
                            s2637 = NULL;
                            switch ($tmp2636) {
                                case -1: goto $l2647;
                            }
                            $l2647:;
                        }
                        goto $l2626;
                        $l2627:;
                    }
                    $tmp2618 = -1;
                    goto $l2616;
                    $l2616:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$654$172619));
                    Iter$654$172619 = NULL;
                    switch ($tmp2618) {
                        case -1: goto $l2648;
                    }
                    $l2648:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2649, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2601, $tmp2649);
                panda$core$String* $tmp2652 = panda$core$MutableString$finish$R$panda$core$String(result2601);
                $tmp2651 = $tmp2652;
                $tmp2650 = $tmp2651;
                $returnValue1341 = $tmp2650;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2650));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2651));
                $tmp2600 = 0;
                goto $l2598;
                $l2653:;
                $tmp1333 = 56;
                goto $l1331;
                $l2654:;
                return $returnValue1341;
            }
            $l2598:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2601));
            result2601 = NULL;
            switch ($tmp2600) {
                case 0: goto $l2653;
            }
            $l2656:;
        }
        }
        else {
        {
            if (((panda$core$Bit) { false }).value) goto $l2657; else goto $l2658;
            $l2658:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2659, (panda$core$Int64) { 660 });
            abort();
            $l2657:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp1333 = -1;
    goto $l1331;
    $l1331:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1335));
    switch ($tmp1333) {
        case 28: goto $l2103;
        case 38: goto $l2276;
        case 14: goto $l1681;
        case 33: goto $l2163;
        case 42: goto $l2316;
        case 9: goto $l1583;
        case 47: goto $l2404;
        case 43: goto $l2342;
        case 54: goto $l2559;
        case 53: goto $l2552;
        case 50: goto $l2479;
        case 0: goto $l1354;
        case 12: goto $l1638;
        case 27: goto $l2008;
        case 3: goto $l1396;
        case 32: goto $l2142;
        case 39: goto $l2297;
        case 44: goto $l2350;
        case 55: goto $l2589;
        case 2: goto $l1368;
        case 34: goto $l2235;
        case 41: goto $l2311;
        case 18: goto $l1722;
        case 35: goto $l2244;
        case 15: goto $l1693;
        case 22: goto $l1851;
        case 19: goto $l1787;
        case 24: goto $l1926;
        case 20: goto $l1813;
        case 23: goto $l1917;
        case 11: goto $l1610;
        case 56: goto $l2654;
        case 48: goto $l2437;
        case 17: goto $l1716;
        case 26: goto $l1950;
        case 36: goto $l2256;
        case 45: goto $l2356;
        case 21: goto $l1832;
        case 46: goto $l2380;
        case -1: goto $l2660;
        case 10: goto $l1602;
        case 51: goto $l2489;
        case 1: goto $l1363;
        case 30: goto $l2126;
        case 31: goto $l2137;
        case 16: goto $l1697;
        case 13: goto $l1670;
        case 25: goto $l1938;
        case 37: goto $l2260;
        case 40: goto $l2302;
        case 49: goto $l2458;
        case 4: goto $l1404;
        case 5: goto $l1455;
        case 7: goto $l1556;
        case 6: goto $l1543;
        case 52: goto $l2519;
        case 8: goto $l1560;
        case 29: goto $l2123;
    }
    $l2660:;
    abort();
}
void org$pandalanguage$pandac$IRNode$cleanup(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$5_12667 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2668;
    org$pandalanguage$pandac$Position _f02670;
    org$pandalanguage$pandac$IRNode* _f12672 = NULL;
    org$pandalanguage$pandac$IRNode* _f22674 = NULL;
    org$pandalanguage$pandac$Position _f02677;
    org$pandalanguage$pandac$Type* _f12679 = NULL;
    org$pandalanguage$pandac$Position _f02682;
    org$pandalanguage$pandac$Type* _f12684 = NULL;
    org$pandalanguage$pandac$IRNode* _f22686 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f32688;
    org$pandalanguage$pandac$IRNode* _f42690 = NULL;
    org$pandalanguage$pandac$Position _f02693;
    org$pandalanguage$pandac$Type* _f12695 = NULL;
    panda$core$Bit _f22697;
    org$pandalanguage$pandac$Position _f02700;
    panda$collections$ImmutableArray* _f12702 = NULL;
    org$pandalanguage$pandac$Position _f02705;
    panda$collections$ImmutableArray* _f12707 = NULL;
    panda$collections$ImmutableArray* _f22709 = NULL;
    org$pandalanguage$pandac$Position _f02712;
    panda$core$String* _f12714 = NULL;
    org$pandalanguage$pandac$Position _f02717;
    org$pandalanguage$pandac$Type* _f12719 = NULL;
    org$pandalanguage$pandac$MethodRef* _f22721 = NULL;
    panda$collections$ImmutableArray* _f32723 = NULL;
    org$pandalanguage$pandac$Position _f02726;
    org$pandalanguage$pandac$IRNode* _f12728 = NULL;
    org$pandalanguage$pandac$Type* _f22730 = NULL;
    panda$core$Bit _f32732;
    org$pandalanguage$pandac$Position _f02735;
    org$pandalanguage$pandac$ChoiceEntry* _f12737 = NULL;
    org$pandalanguage$pandac$Position _f02740;
    org$pandalanguage$pandac$IRNode* _f12742 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f22744 = NULL;
    panda$core$Int64 _f32746;
    org$pandalanguage$pandac$Position _f02749;
    org$pandalanguage$pandac$Type* _f12751 = NULL;
    org$pandalanguage$pandac$IRNode* _f22753 = NULL;
    org$pandalanguage$pandac$Position _f02756;
    org$pandalanguage$pandac$Type* _f12758 = NULL;
    org$pandalanguage$pandac$Position _f02761;
    panda$core$String* _f12763 = NULL;
    org$pandalanguage$pandac$IRNode* _f02766 = NULL;
    org$pandalanguage$pandac$IRNode* _f12768 = NULL;
    org$pandalanguage$pandac$Position _f02771;
    panda$core$String* _f12773 = NULL;
    panda$collections$ImmutableArray* _f22775 = NULL;
    org$pandalanguage$pandac$IRNode* _f32777 = NULL;
    org$pandalanguage$pandac$IRNode* _f02780 = NULL;
    panda$collections$ImmutableArray* _f12782 = NULL;
    org$pandalanguage$pandac$IRNode* _f02785 = NULL;
    org$pandalanguage$pandac$IRNode* _f12787 = NULL;
    org$pandalanguage$pandac$Position _f02790;
    org$pandalanguage$pandac$Type* _f12792 = NULL;
    org$pandalanguage$pandac$IRNode* _f22794 = NULL;
    org$pandalanguage$pandac$FieldDecl* _f32796 = NULL;
    org$pandalanguage$pandac$Position _f02799;
    org$pandalanguage$pandac$IRNode* _f12801 = NULL;
    panda$collections$ImmutableArray* _f22803 = NULL;
    org$pandalanguage$pandac$IRNode* _f32805 = NULL;
    org$pandalanguage$pandac$Position _f02808;
    org$pandalanguage$pandac$Type* _f12810 = NULL;
    panda$core$UInt64 _f22812;
    org$pandalanguage$pandac$Position _f02815;
    org$pandalanguage$pandac$IRNode* _f12817 = NULL;
    org$pandalanguage$pandac$Position _f02820;
    org$pandalanguage$pandac$IRNode* _f12822 = NULL;
    org$pandalanguage$pandac$Position _f02825;
    panda$core$String* _f12827 = NULL;
    panda$collections$ImmutableArray* _f22829 = NULL;
    org$pandalanguage$pandac$Position _f02832;
    org$pandalanguage$pandac$IRNode* _f12834 = NULL;
    panda$collections$ImmutableArray* _f22836 = NULL;
    panda$collections$ImmutableArray* _f32838 = NULL;
    org$pandalanguage$pandac$Position _f02841;
    org$pandalanguage$pandac$Type* _f12843 = NULL;
    org$pandalanguage$pandac$IRNode* _f22845 = NULL;
    org$pandalanguage$pandac$MethodRef* _f32847 = NULL;
    org$pandalanguage$pandac$Position _f02850;
    org$pandalanguage$pandac$Type* _f12852 = NULL;
    panda$core$UInt64 _f22854;
    org$pandalanguage$pandac$Position _f02857;
    org$pandalanguage$pandac$Type* _f12859 = NULL;
    org$pandalanguage$pandac$Position _f02862;
    org$pandalanguage$pandac$parser$Token$Kind _f12864;
    org$pandalanguage$pandac$IRNode* _f22866 = NULL;
    org$pandalanguage$pandac$Position _f02869;
    panda$core$String* _f12871 = NULL;
    org$pandalanguage$pandac$IRNode* _f22873 = NULL;
    org$pandalanguage$pandac$IRNode* _f32875 = NULL;
    panda$collections$ImmutableArray* _f42877 = NULL;
    org$pandalanguage$pandac$Position _f02880;
    org$pandalanguage$pandac$Type* _f12882 = NULL;
    panda$core$Real64 _f22884;
    org$pandalanguage$pandac$Position _f02887;
    org$pandalanguage$pandac$IRNode* _f12889 = NULL;
    org$pandalanguage$pandac$Position _f02892;
    org$pandalanguage$pandac$Type* _f12894 = NULL;
    panda$core$Int64 _f22896;
    org$pandalanguage$pandac$IRNode* _f02899 = NULL;
    panda$core$Int64 _f12901;
    org$pandalanguage$pandac$Position _f02904;
    org$pandalanguage$pandac$Type* _f12906 = NULL;
    org$pandalanguage$pandac$Position _f02909;
    panda$core$String* _f12911 = NULL;
    org$pandalanguage$pandac$Position _f02914;
    org$pandalanguage$pandac$Type* _f12916 = NULL;
    org$pandalanguage$pandac$Position _f02919;
    org$pandalanguage$pandac$IRNode* _f12921 = NULL;
    org$pandalanguage$pandac$IRNode* _f22923 = NULL;
    org$pandalanguage$pandac$IRNode* _f32925 = NULL;
    org$pandalanguage$pandac$Position _f02928;
    org$pandalanguage$pandac$Type* _f12930 = NULL;
    org$pandalanguage$pandac$Position _f02933;
    panda$core$String* _f12935 = NULL;
    org$pandalanguage$pandac$Position _f02938;
    org$pandalanguage$pandac$Type* _f12940 = NULL;
    org$pandalanguage$pandac$IRNode* _f22942 = NULL;
    panda$collections$ImmutableArray* _f32944 = NULL;
    org$pandalanguage$pandac$Position _f02947;
    panda$collections$ImmutableArray* _f12949 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22951 = NULL;
    org$pandalanguage$pandac$Position _f02954;
    org$pandalanguage$pandac$Type* _f12956 = NULL;
    org$pandalanguage$pandac$IRNode* _f22958 = NULL;
    panda$collections$ImmutableArray* _f32960 = NULL;
    panda$collections$ImmutableArray* _f42962 = NULL;
    org$pandalanguage$pandac$Position _f02965;
    org$pandalanguage$pandac$IRNode* _f12967 = NULL;
    panda$collections$ImmutableArray* _f22969 = NULL;
    org$pandalanguage$pandac$Position _f02972;
    org$pandalanguage$pandac$IRNode* _f12974 = NULL;
    org$pandalanguage$pandac$IRNode* _f22976 = NULL;
    panda$core$Bit _f32978;
    org$pandalanguage$pandac$IRNode* _f42980 = NULL;
    org$pandalanguage$pandac$Position _f02983;
    org$pandalanguage$pandac$Variable$Kind _f12985;
    panda$collections$ImmutableArray* _f22987 = NULL;
    org$pandalanguage$pandac$Position _f02990;
    org$pandalanguage$pandac$Variable* _f12992 = NULL;
    org$pandalanguage$pandac$Position _f02995;
    panda$collections$ImmutableArray* _f12997 = NULL;
    panda$collections$ImmutableArray* _f22999 = NULL;
    org$pandalanguage$pandac$Position _f03002;
    panda$core$String* _f13004 = NULL;
    org$pandalanguage$pandac$IRNode* _f23006 = NULL;
    panda$collections$ImmutableArray* _f33008 = NULL;
    int $tmp2663;
    {
        int $tmp2666;
        {
            $tmp2668 = self;
            $match$5_12667 = $tmp2668;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2668));
            panda$core$Bit $tmp2669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp2669.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2671 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02670 = *$tmp2671;
                org$pandalanguage$pandac$IRNode** $tmp2673 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 16));
                _f12672 = *$tmp2673;
                org$pandalanguage$pandac$IRNode** $tmp2675 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 24));
                _f22674 = *$tmp2675;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12672));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22674));
            }
            }
            else {
            panda$core$Bit $tmp2676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp2676.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2678 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02677 = *$tmp2678;
                org$pandalanguage$pandac$Type** $tmp2680 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12667->$data + 16));
                _f12679 = *$tmp2680;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12679));
            }
            }
            else {
            panda$core$Bit $tmp2681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp2681.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2683 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02682 = *$tmp2683;
                org$pandalanguage$pandac$Type** $tmp2685 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12667->$data + 16));
                _f12684 = *$tmp2685;
                org$pandalanguage$pandac$IRNode** $tmp2687 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 24));
                _f22686 = *$tmp2687;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2689 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12667->$data + 32));
                _f32688 = *$tmp2689;
                org$pandalanguage$pandac$IRNode** $tmp2691 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 40));
                _f42690 = *$tmp2691;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12684));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22686));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42690));
            }
            }
            else {
            panda$core$Bit $tmp2692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp2692.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2694 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02693 = *$tmp2694;
                org$pandalanguage$pandac$Type** $tmp2696 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12667->$data + 16));
                _f12695 = *$tmp2696;
                panda$core$Bit* $tmp2698 = ((panda$core$Bit*) ((char*) $match$5_12667->$data + 24));
                _f22697 = *$tmp2698;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12695));
            }
            }
            else {
            panda$core$Bit $tmp2699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp2699.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2701 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02700 = *$tmp2701;
                panda$collections$ImmutableArray** $tmp2703 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12667->$data + 16));
                _f12702 = *$tmp2703;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12702));
            }
            }
            else {
            panda$core$Bit $tmp2704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp2704.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2706 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02705 = *$tmp2706;
                panda$collections$ImmutableArray** $tmp2708 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12667->$data + 16));
                _f12707 = *$tmp2708;
                panda$collections$ImmutableArray** $tmp2710 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12667->$data + 24));
                _f22709 = *$tmp2710;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12707));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22709));
            }
            }
            else {
            panda$core$Bit $tmp2711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp2711.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2713 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02712 = *$tmp2713;
                panda$core$String** $tmp2715 = ((panda$core$String**) ((char*) $match$5_12667->$data + 16));
                _f12714 = *$tmp2715;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12714));
            }
            }
            else {
            panda$core$Bit $tmp2716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 7 }));
            if ($tmp2716.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2718 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02717 = *$tmp2718;
                org$pandalanguage$pandac$Type** $tmp2720 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12667->$data + 16));
                _f12719 = *$tmp2720;
                org$pandalanguage$pandac$MethodRef** $tmp2722 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12667->$data + 24));
                _f22721 = *$tmp2722;
                panda$collections$ImmutableArray** $tmp2724 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12667->$data + 32));
                _f32723 = *$tmp2724;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12719));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22721));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32723));
            }
            }
            else {
            panda$core$Bit $tmp2725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp2725.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2727 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02726 = *$tmp2727;
                org$pandalanguage$pandac$IRNode** $tmp2729 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 16));
                _f12728 = *$tmp2729;
                org$pandalanguage$pandac$Type** $tmp2731 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12667->$data + 24));
                _f22730 = *$tmp2731;
                panda$core$Bit* $tmp2733 = ((panda$core$Bit*) ((char*) $match$5_12667->$data + 32));
                _f32732 = *$tmp2733;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12728));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22730));
            }
            }
            else {
            panda$core$Bit $tmp2734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp2734.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2736 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02735 = *$tmp2736;
                org$pandalanguage$pandac$ChoiceEntry** $tmp2738 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12667->$data + 16));
                _f12737 = *$tmp2738;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12737));
            }
            }
            else {
            panda$core$Bit $tmp2739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 10 }));
            if ($tmp2739.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2741 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02740 = *$tmp2741;
                org$pandalanguage$pandac$IRNode** $tmp2743 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 16));
                _f12742 = *$tmp2743;
                org$pandalanguage$pandac$ChoiceEntry** $tmp2745 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12667->$data + 24));
                _f22744 = *$tmp2745;
                panda$core$Int64* $tmp2747 = ((panda$core$Int64*) ((char*) $match$5_12667->$data + 32));
                _f32746 = *$tmp2747;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12742));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22744));
            }
            }
            else {
            panda$core$Bit $tmp2748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp2748.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2750 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02749 = *$tmp2750;
                org$pandalanguage$pandac$Type** $tmp2752 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12667->$data + 16));
                _f12751 = *$tmp2752;
                org$pandalanguage$pandac$IRNode** $tmp2754 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 24));
                _f22753 = *$tmp2754;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12751));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22753));
            }
            }
            else {
            panda$core$Bit $tmp2755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp2755.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2757 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02756 = *$tmp2757;
                org$pandalanguage$pandac$Type** $tmp2759 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12667->$data + 16));
                _f12758 = *$tmp2759;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12758));
            }
            }
            else {
            panda$core$Bit $tmp2760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp2760.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2762 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02761 = *$tmp2762;
                panda$core$String** $tmp2764 = ((panda$core$String**) ((char*) $match$5_12667->$data + 16));
                _f12763 = *$tmp2764;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12763));
            }
            }
            else {
            panda$core$Bit $tmp2765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp2765.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2767 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 0));
                _f02766 = *$tmp2767;
                org$pandalanguage$pandac$IRNode** $tmp2769 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 8));
                _f12768 = *$tmp2769;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02766));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12768));
            }
            }
            else {
            panda$core$Bit $tmp2770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp2770.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2772 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02771 = *$tmp2772;
                panda$core$String** $tmp2774 = ((panda$core$String**) ((char*) $match$5_12667->$data + 16));
                _f12773 = *$tmp2774;
                panda$collections$ImmutableArray** $tmp2776 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12667->$data + 24));
                _f22775 = *$tmp2776;
                org$pandalanguage$pandac$IRNode** $tmp2778 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 32));
                _f32777 = *$tmp2778;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12773));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22775));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32777));
            }
            }
            else {
            panda$core$Bit $tmp2779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 16 }));
            if ($tmp2779.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2781 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 0));
                _f02780 = *$tmp2781;
                panda$collections$ImmutableArray** $tmp2783 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12667->$data + 8));
                _f12782 = *$tmp2783;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02780));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12782));
            }
            }
            else {
            panda$core$Bit $tmp2784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp2784.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2786 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 0));
                _f02785 = *$tmp2786;
                org$pandalanguage$pandac$IRNode** $tmp2788 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 8));
                _f12787 = *$tmp2788;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02785));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12787));
            }
            }
            else {
            panda$core$Bit $tmp2789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp2789.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2791 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02790 = *$tmp2791;
                org$pandalanguage$pandac$Type** $tmp2793 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12667->$data + 16));
                _f12792 = *$tmp2793;
                org$pandalanguage$pandac$IRNode** $tmp2795 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 24));
                _f22794 = *$tmp2795;
                org$pandalanguage$pandac$FieldDecl** $tmp2797 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$5_12667->$data + 32));
                _f32796 = *$tmp2797;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12792));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22794));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32796));
            }
            }
            else {
            panda$core$Bit $tmp2798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp2798.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2800 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02799 = *$tmp2800;
                org$pandalanguage$pandac$IRNode** $tmp2802 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 16));
                _f12801 = *$tmp2802;
                panda$collections$ImmutableArray** $tmp2804 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12667->$data + 24));
                _f22803 = *$tmp2804;
                org$pandalanguage$pandac$IRNode** $tmp2806 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 32));
                _f32805 = *$tmp2806;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12801));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22803));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32805));
            }
            }
            else {
            panda$core$Bit $tmp2807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 20 }));
            if ($tmp2807.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2809 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02808 = *$tmp2809;
                org$pandalanguage$pandac$Type** $tmp2811 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12667->$data + 16));
                _f12810 = *$tmp2811;
                panda$core$UInt64* $tmp2813 = ((panda$core$UInt64*) ((char*) $match$5_12667->$data + 24));
                _f22812 = *$tmp2813;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12810));
            }
            }
            else {
            panda$core$Bit $tmp2814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 21 }));
            if ($tmp2814.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2816 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02815 = *$tmp2816;
                org$pandalanguage$pandac$IRNode** $tmp2818 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 16));
                _f12817 = *$tmp2818;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12817));
            }
            }
            else {
            panda$core$Bit $tmp2819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp2819.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2821 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02820 = *$tmp2821;
                org$pandalanguage$pandac$IRNode** $tmp2823 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 16));
                _f12822 = *$tmp2823;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12822));
            }
            }
            else {
            panda$core$Bit $tmp2824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp2824.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2826 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02825 = *$tmp2826;
                panda$core$String** $tmp2828 = ((panda$core$String**) ((char*) $match$5_12667->$data + 16));
                _f12827 = *$tmp2828;
                panda$collections$ImmutableArray** $tmp2830 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12667->$data + 24));
                _f22829 = *$tmp2830;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12827));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22829));
            }
            }
            else {
            panda$core$Bit $tmp2831 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp2831.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2833 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02832 = *$tmp2833;
                org$pandalanguage$pandac$IRNode** $tmp2835 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 16));
                _f12834 = *$tmp2835;
                panda$collections$ImmutableArray** $tmp2837 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12667->$data + 24));
                _f22836 = *$tmp2837;
                panda$collections$ImmutableArray** $tmp2839 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12667->$data + 32));
                _f32838 = *$tmp2839;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12834));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22836));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32838));
            }
            }
            else {
            panda$core$Bit $tmp2840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp2840.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2842 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02841 = *$tmp2842;
                org$pandalanguage$pandac$Type** $tmp2844 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12667->$data + 16));
                _f12843 = *$tmp2844;
                org$pandalanguage$pandac$IRNode** $tmp2846 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 24));
                _f22845 = *$tmp2846;
                org$pandalanguage$pandac$MethodRef** $tmp2848 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12667->$data + 32));
                _f32847 = *$tmp2848;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12843));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22845));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32847));
            }
            }
            else {
            panda$core$Bit $tmp2849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp2849.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2851 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02850 = *$tmp2851;
                org$pandalanguage$pandac$Type** $tmp2853 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12667->$data + 16));
                _f12852 = *$tmp2853;
                panda$core$UInt64* $tmp2855 = ((panda$core$UInt64*) ((char*) $match$5_12667->$data + 24));
                _f22854 = *$tmp2855;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12852));
            }
            }
            else {
            panda$core$Bit $tmp2856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 27 }));
            if ($tmp2856.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2858 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02857 = *$tmp2858;
                org$pandalanguage$pandac$Type** $tmp2860 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12667->$data + 16));
                _f12859 = *$tmp2860;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12859));
            }
            }
            else {
            panda$core$Bit $tmp2861 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 28 }));
            if ($tmp2861.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2863 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02862 = *$tmp2863;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2865 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12667->$data + 16));
                _f12864 = *$tmp2865;
                org$pandalanguage$pandac$IRNode** $tmp2867 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 24));
                _f22866 = *$tmp2867;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22866));
            }
            }
            else {
            panda$core$Bit $tmp2868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 29 }));
            if ($tmp2868.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2870 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02869 = *$tmp2870;
                panda$core$String** $tmp2872 = ((panda$core$String**) ((char*) $match$5_12667->$data + 16));
                _f12871 = *$tmp2872;
                org$pandalanguage$pandac$IRNode** $tmp2874 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 24));
                _f22873 = *$tmp2874;
                org$pandalanguage$pandac$IRNode** $tmp2876 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 32));
                _f32875 = *$tmp2876;
                panda$collections$ImmutableArray** $tmp2878 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12667->$data + 40));
                _f42877 = *$tmp2878;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12871));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22873));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32875));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42877));
            }
            }
            else {
            panda$core$Bit $tmp2879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 30 }));
            if ($tmp2879.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2881 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02880 = *$tmp2881;
                org$pandalanguage$pandac$Type** $tmp2883 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12667->$data + 16));
                _f12882 = *$tmp2883;
                panda$core$Real64* $tmp2885 = ((panda$core$Real64*) ((char*) $match$5_12667->$data + 24));
                _f22884 = *$tmp2885;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12882));
            }
            }
            else {
            panda$core$Bit $tmp2886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 31 }));
            if ($tmp2886.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2888 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02887 = *$tmp2888;
                org$pandalanguage$pandac$IRNode** $tmp2890 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 16));
                _f12889 = *$tmp2890;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12889));
            }
            }
            else {
            panda$core$Bit $tmp2891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 32 }));
            if ($tmp2891.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2893 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02892 = *$tmp2893;
                org$pandalanguage$pandac$Type** $tmp2895 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12667->$data + 16));
                _f12894 = *$tmp2895;
                panda$core$Int64* $tmp2897 = ((panda$core$Int64*) ((char*) $match$5_12667->$data + 24));
                _f22896 = *$tmp2897;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12894));
            }
            }
            else {
            panda$core$Bit $tmp2898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp2898.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2900 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 0));
                _f02899 = *$tmp2900;
                panda$core$Int64* $tmp2902 = ((panda$core$Int64*) ((char*) $match$5_12667->$data + 8));
                _f12901 = *$tmp2902;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02899));
            }
            }
            else {
            panda$core$Bit $tmp2903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp2903.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2905 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02904 = *$tmp2905;
                org$pandalanguage$pandac$Type** $tmp2907 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12667->$data + 16));
                _f12906 = *$tmp2907;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12906));
            }
            }
            else {
            panda$core$Bit $tmp2908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 35 }));
            if ($tmp2908.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2910 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02909 = *$tmp2910;
                panda$core$String** $tmp2912 = ((panda$core$String**) ((char*) $match$5_12667->$data + 16));
                _f12911 = *$tmp2912;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12911));
            }
            }
            else {
            panda$core$Bit $tmp2913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp2913.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2915 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02914 = *$tmp2915;
                org$pandalanguage$pandac$Type** $tmp2917 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12667->$data + 16));
                _f12916 = *$tmp2917;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12916));
            }
            }
            else {
            panda$core$Bit $tmp2918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 37 }));
            if ($tmp2918.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2920 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02919 = *$tmp2920;
                org$pandalanguage$pandac$IRNode** $tmp2922 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 16));
                _f12921 = *$tmp2922;
                org$pandalanguage$pandac$IRNode** $tmp2924 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 24));
                _f22923 = *$tmp2924;
                org$pandalanguage$pandac$IRNode** $tmp2926 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 32));
                _f32925 = *$tmp2926;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12921));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22923));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32925));
            }
            }
            else {
            panda$core$Bit $tmp2927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 38 }));
            if ($tmp2927.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2929 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02928 = *$tmp2929;
                org$pandalanguage$pandac$Type** $tmp2931 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12667->$data + 16));
                _f12930 = *$tmp2931;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12930));
            }
            }
            else {
            panda$core$Bit $tmp2932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp2932.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2934 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02933 = *$tmp2934;
                panda$core$String** $tmp2936 = ((panda$core$String**) ((char*) $match$5_12667->$data + 16));
                _f12935 = *$tmp2936;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12935));
            }
            }
            else {
            panda$core$Bit $tmp2937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp2937.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2939 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02938 = *$tmp2939;
                org$pandalanguage$pandac$Type** $tmp2941 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12667->$data + 16));
                _f12940 = *$tmp2941;
                org$pandalanguage$pandac$IRNode** $tmp2943 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 24));
                _f22942 = *$tmp2943;
                panda$collections$ImmutableArray** $tmp2945 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12667->$data + 32));
                _f32944 = *$tmp2945;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12940));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22942));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32944));
            }
            }
            else {
            panda$core$Bit $tmp2946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 41 }));
            if ($tmp2946.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2948 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02947 = *$tmp2948;
                panda$collections$ImmutableArray** $tmp2950 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12667->$data + 16));
                _f12949 = *$tmp2950;
                org$pandalanguage$pandac$ASTNode** $tmp2952 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12667->$data + 24));
                _f22951 = *$tmp2952;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12949));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22951));
            }
            }
            else {
            panda$core$Bit $tmp2953 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 42 }));
            if ($tmp2953.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2955 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02954 = *$tmp2955;
                org$pandalanguage$pandac$Type** $tmp2957 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12667->$data + 16));
                _f12956 = *$tmp2957;
                org$pandalanguage$pandac$IRNode** $tmp2959 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 24));
                _f22958 = *$tmp2959;
                panda$collections$ImmutableArray** $tmp2961 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12667->$data + 32));
                _f32960 = *$tmp2961;
                panda$collections$ImmutableArray** $tmp2963 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12667->$data + 40));
                _f42962 = *$tmp2963;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12956));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22958));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32960));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42962));
            }
            }
            else {
            panda$core$Bit $tmp2964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 43 }));
            if ($tmp2964.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2966 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02965 = *$tmp2966;
                org$pandalanguage$pandac$IRNode** $tmp2968 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 16));
                _f12967 = *$tmp2968;
                panda$collections$ImmutableArray** $tmp2970 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12667->$data + 24));
                _f22969 = *$tmp2970;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12967));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22969));
            }
            }
            else {
            panda$core$Bit $tmp2971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 44 }));
            if ($tmp2971.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2973 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02972 = *$tmp2973;
                org$pandalanguage$pandac$IRNode** $tmp2975 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 16));
                _f12974 = *$tmp2975;
                org$pandalanguage$pandac$IRNode** $tmp2977 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 24));
                _f22976 = *$tmp2977;
                panda$core$Bit* $tmp2979 = ((panda$core$Bit*) ((char*) $match$5_12667->$data + 32));
                _f32978 = *$tmp2979;
                org$pandalanguage$pandac$IRNode** $tmp2981 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 33));
                _f42980 = *$tmp2981;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12974));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22976));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42980));
            }
            }
            else {
            panda$core$Bit $tmp2982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 45 }));
            if ($tmp2982.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2984 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02983 = *$tmp2984;
                org$pandalanguage$pandac$Variable$Kind* $tmp2986 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_12667->$data + 16));
                _f12985 = *$tmp2986;
                panda$collections$ImmutableArray** $tmp2988 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12667->$data + 24));
                _f22987 = *$tmp2988;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22987));
            }
            }
            else {
            panda$core$Bit $tmp2989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 46 }));
            if ($tmp2989.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2991 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02990 = *$tmp2991;
                org$pandalanguage$pandac$Variable** $tmp2993 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$5_12667->$data + 16));
                _f12992 = *$tmp2993;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12992));
            }
            }
            else {
            panda$core$Bit $tmp2994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 47 }));
            if ($tmp2994.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2996 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f02995 = *$tmp2996;
                panda$collections$ImmutableArray** $tmp2998 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12667->$data + 16));
                _f12997 = *$tmp2998;
                panda$collections$ImmutableArray** $tmp3000 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12667->$data + 24));
                _f22999 = *$tmp3000;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12997));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22999));
            }
            }
            else {
            panda$core$Bit $tmp3001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12667->$rawValue, ((panda$core$Int64) { 48 }));
            if ($tmp3001.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3003 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12667->$data + 0));
                _f03002 = *$tmp3003;
                panda$core$String** $tmp3005 = ((panda$core$String**) ((char*) $match$5_12667->$data + 16));
                _f13004 = *$tmp3005;
                org$pandalanguage$pandac$IRNode** $tmp3007 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12667->$data + 24));
                _f23006 = *$tmp3007;
                panda$collections$ImmutableArray** $tmp3009 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12667->$data + 32));
                _f33008 = *$tmp3009;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13004));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23006));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33008));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp2666 = -1;
        goto $l2664;
        $l2664:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2668));
        switch ($tmp2666) {
            case -1: goto $l3010;
        }
        $l3010:;
    }
    $tmp2663 = -1;
    goto $l2661;
    $l2661:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2663) {
        case -1: goto $l3011;
    }
    $l3011:;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3013;
    org$pandalanguage$pandac$IRNode* $tmp3016;
    org$pandalanguage$pandac$IRNode* $tmp3017;
    org$pandalanguage$pandac$IRNode* $tmp3020;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3012 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3012 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3014 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3013 = *$tmp3014;
        org$pandalanguage$pandac$IRNode** $tmp3015 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3016 = p_f1;
        *$tmp3015 = $tmp3016;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3016));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3013));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3018 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3017 = *$tmp3018;
        org$pandalanguage$pandac$IRNode** $tmp3019 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3020 = p_f2;
        *$tmp3019 = $tmp3020;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3020));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3017));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1) {
    org$pandalanguage$pandac$Type* $tmp3022;
    org$pandalanguage$pandac$Type* $tmp3025;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3021 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3021 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3023 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3022 = *$tmp3023;
        org$pandalanguage$pandac$Type** $tmp3024 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3025 = p_f1;
        *$tmp3024 = $tmp3025;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3025));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3022));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$parser$Token$Kind p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$Type* $tmp3027;
    org$pandalanguage$pandac$Type* $tmp3030;
    org$pandalanguage$pandac$IRNode* $tmp3031;
    org$pandalanguage$pandac$IRNode* $tmp3034;
    org$pandalanguage$pandac$IRNode* $tmp3036;
    org$pandalanguage$pandac$IRNode* $tmp3039;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3026 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3026 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3028 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3027 = *$tmp3028;
        org$pandalanguage$pandac$Type** $tmp3029 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3030 = p_f1;
        *$tmp3029 = $tmp3030;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3030));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3027));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3032 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3031 = *$tmp3032;
        org$pandalanguage$pandac$IRNode** $tmp3033 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3034 = p_f2;
        *$tmp3033 = $tmp3034;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3034));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3031));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp3035 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 32));
    *$tmp3035 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp3037 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp3036 = *$tmp3037;
        org$pandalanguage$pandac$IRNode** $tmp3038 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp3039 = p_f4;
        *$tmp3038 = $tmp3039;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3039));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3036));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Bit p_f2) {
    org$pandalanguage$pandac$Type* $tmp3041;
    org$pandalanguage$pandac$Type* $tmp3044;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3040 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3040 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3042 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3041 = *$tmp3042;
        org$pandalanguage$pandac$Type** $tmp3043 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3044 = p_f1;
        *$tmp3043 = $tmp3044;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3044));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3041));
    }
    panda$core$Bit* $tmp3045 = ((panda$core$Bit*) ((char*) self->$data + 24));
    *$tmp3045 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp3047;
    panda$collections$ImmutableArray* $tmp3050;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3046 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3046 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp3048 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3047 = *$tmp3048;
        panda$collections$ImmutableArray** $tmp3049 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3050 = p_f1;
        *$tmp3049 = $tmp3050;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3050));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3047));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp3052;
    panda$collections$ImmutableArray* $tmp3055;
    panda$collections$ImmutableArray* $tmp3056;
    panda$collections$ImmutableArray* $tmp3059;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3051 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3051 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp3053 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3052 = *$tmp3053;
        panda$collections$ImmutableArray** $tmp3054 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3055 = p_f1;
        *$tmp3054 = $tmp3055;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3055));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3052));
    }
    {
        panda$collections$ImmutableArray** $tmp3057 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3056 = *$tmp3057;
        panda$collections$ImmutableArray** $tmp3058 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3059 = p_f2;
        *$tmp3058 = $tmp3059;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3059));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3056));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp3061;
    panda$core$String* $tmp3064;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3060 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3060 = p_f0;
    {
        panda$core$String** $tmp3062 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3061 = *$tmp3062;
        panda$core$String** $tmp3063 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3064 = p_f1;
        *$tmp3063 = $tmp3064;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3064));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3061));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$MethodRef* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3066;
    org$pandalanguage$pandac$Type* $tmp3069;
    org$pandalanguage$pandac$MethodRef* $tmp3070;
    org$pandalanguage$pandac$MethodRef* $tmp3073;
    panda$collections$ImmutableArray* $tmp3074;
    panda$collections$ImmutableArray* $tmp3077;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3065 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3065 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3067 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3066 = *$tmp3067;
        org$pandalanguage$pandac$Type** $tmp3068 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3069 = p_f1;
        *$tmp3068 = $tmp3069;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3069));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3066));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp3071 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3070 = *$tmp3071;
        org$pandalanguage$pandac$MethodRef** $tmp3072 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3073 = p_f2;
        *$tmp3072 = $tmp3073;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3073));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3070));
    }
    {
        panda$collections$ImmutableArray** $tmp3075 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3074 = *$tmp3075;
        panda$collections$ImmutableArray** $tmp3076 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3077 = p_f3;
        *$tmp3076 = $tmp3077;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3077));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3074));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$Type* p_f2, panda$core$Bit p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3079;
    org$pandalanguage$pandac$IRNode* $tmp3082;
    org$pandalanguage$pandac$Type* $tmp3083;
    org$pandalanguage$pandac$Type* $tmp3086;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3078 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3078 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3080 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3079 = *$tmp3080;
        org$pandalanguage$pandac$IRNode** $tmp3081 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3082 = p_f1;
        *$tmp3081 = $tmp3082;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3082));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3079));
    }
    {
        org$pandalanguage$pandac$Type** $tmp3084 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp3083 = *$tmp3084;
        org$pandalanguage$pandac$Type** $tmp3085 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp3086 = p_f2;
        *$tmp3085 = $tmp3086;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3086));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3083));
    }
    panda$core$Bit* $tmp3087 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp3087 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceEntry(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ChoiceEntry* p_f1) {
    org$pandalanguage$pandac$ChoiceEntry* $tmp3089;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3092;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3088 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3088 = p_f0;
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp3090 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp3089 = *$tmp3090;
        org$pandalanguage$pandac$ChoiceEntry** $tmp3091 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp3092 = p_f1;
        *$tmp3091 = $tmp3092;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3092));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3089));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3094;
    org$pandalanguage$pandac$IRNode* $tmp3097;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3098;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3101;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3093 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3093 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3095 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3094 = *$tmp3095;
        org$pandalanguage$pandac$IRNode** $tmp3096 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3097 = p_f1;
        *$tmp3096 = $tmp3097;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3097));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3094));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp3099 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp3098 = *$tmp3099;
        org$pandalanguage$pandac$ChoiceEntry** $tmp3100 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp3101 = p_f2;
        *$tmp3100 = $tmp3101;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3101));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3098));
    }
    panda$core$Int64* $tmp3102 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp3102 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$Type* $tmp3104;
    org$pandalanguage$pandac$Type* $tmp3107;
    org$pandalanguage$pandac$IRNode* $tmp3108;
    org$pandalanguage$pandac$IRNode* $tmp3111;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3103 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3103 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3105 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3104 = *$tmp3105;
        org$pandalanguage$pandac$Type** $tmp3106 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3107 = p_f1;
        *$tmp3106 = $tmp3107;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3107));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3104));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3109 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3108 = *$tmp3109;
        org$pandalanguage$pandac$IRNode** $tmp3110 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3111 = p_f2;
        *$tmp3110 = $tmp3111;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3111));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3108));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3112;
    org$pandalanguage$pandac$IRNode* $tmp3115;
    org$pandalanguage$pandac$IRNode* $tmp3116;
    org$pandalanguage$pandac$IRNode* $tmp3119;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3113 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3112 = *$tmp3113;
        org$pandalanguage$pandac$IRNode** $tmp3114 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3115 = p_f0;
        *$tmp3114 = $tmp3115;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3115));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3112));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3117 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3116 = *$tmp3117;
        org$pandalanguage$pandac$IRNode** $tmp3118 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3119 = p_f1;
        *$tmp3118 = $tmp3119;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3119));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3116));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    panda$core$String* $tmp3121;
    panda$core$String* $tmp3124;
    panda$collections$ImmutableArray* $tmp3125;
    panda$collections$ImmutableArray* $tmp3128;
    org$pandalanguage$pandac$IRNode* $tmp3129;
    org$pandalanguage$pandac$IRNode* $tmp3132;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3120 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3120 = p_f0;
    {
        panda$core$String** $tmp3122 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3121 = *$tmp3122;
        panda$core$String** $tmp3123 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3124 = p_f1;
        *$tmp3123 = $tmp3124;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3124));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3121));
    }
    {
        panda$collections$ImmutableArray** $tmp3126 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3125 = *$tmp3126;
        panda$collections$ImmutableArray** $tmp3127 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3128 = p_f2;
        *$tmp3127 = $tmp3128;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3128));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3125));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3130 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3129 = *$tmp3130;
        org$pandalanguage$pandac$IRNode** $tmp3131 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3132 = p_f3;
        *$tmp3131 = $tmp3132;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3132));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3129));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$collections$ImmutableArray* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3133;
    org$pandalanguage$pandac$IRNode* $tmp3136;
    panda$collections$ImmutableArray* $tmp3137;
    panda$collections$ImmutableArray* $tmp3140;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3134 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3133 = *$tmp3134;
        org$pandalanguage$pandac$IRNode** $tmp3135 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3136 = p_f0;
        *$tmp3135 = $tmp3136;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3136));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3133));
    }
    {
        panda$collections$ImmutableArray** $tmp3138 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp3137 = *$tmp3138;
        panda$collections$ImmutableArray** $tmp3139 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp3140 = p_f1;
        *$tmp3139 = $tmp3140;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3140));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3137));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3141;
    org$pandalanguage$pandac$IRNode* $tmp3144;
    org$pandalanguage$pandac$IRNode* $tmp3145;
    org$pandalanguage$pandac$IRNode* $tmp3148;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3142 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3141 = *$tmp3142;
        org$pandalanguage$pandac$IRNode** $tmp3143 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3144 = p_f0;
        *$tmp3143 = $tmp3144;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3144));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3141));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3146 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3145 = *$tmp3146;
        org$pandalanguage$pandac$IRNode** $tmp3147 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3148 = p_f1;
        *$tmp3147 = $tmp3148;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3148));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3145));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$FieldDecl* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3150;
    org$pandalanguage$pandac$Type* $tmp3153;
    org$pandalanguage$pandac$IRNode* $tmp3154;
    org$pandalanguage$pandac$IRNode* $tmp3157;
    org$pandalanguage$pandac$FieldDecl* $tmp3158;
    org$pandalanguage$pandac$FieldDecl* $tmp3161;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3149 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3149 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3151 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3150 = *$tmp3151;
        org$pandalanguage$pandac$Type** $tmp3152 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3153 = p_f1;
        *$tmp3152 = $tmp3153;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3153));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3150));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3155 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3154 = *$tmp3155;
        org$pandalanguage$pandac$IRNode** $tmp3156 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3157 = p_f2;
        *$tmp3156 = $tmp3157;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3157));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3154));
    }
    {
        org$pandalanguage$pandac$FieldDecl** $tmp3159 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp3158 = *$tmp3159;
        org$pandalanguage$pandac$FieldDecl** $tmp3160 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp3161 = p_f3;
        *$tmp3160 = $tmp3161;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3161));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3158));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3163;
    org$pandalanguage$pandac$IRNode* $tmp3166;
    panda$collections$ImmutableArray* $tmp3167;
    panda$collections$ImmutableArray* $tmp3170;
    org$pandalanguage$pandac$IRNode* $tmp3171;
    org$pandalanguage$pandac$IRNode* $tmp3174;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3162 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3162 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3164 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3163 = *$tmp3164;
        org$pandalanguage$pandac$IRNode** $tmp3165 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3166 = p_f1;
        *$tmp3165 = $tmp3166;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3166));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3163));
    }
    {
        panda$collections$ImmutableArray** $tmp3168 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3167 = *$tmp3168;
        panda$collections$ImmutableArray** $tmp3169 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3170 = p_f2;
        *$tmp3169 = $tmp3170;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3170));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3167));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3172 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3171 = *$tmp3172;
        org$pandalanguage$pandac$IRNode** $tmp3173 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3174 = p_f3;
        *$tmp3173 = $tmp3174;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3174));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3171));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$UInt64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3176;
    org$pandalanguage$pandac$Type* $tmp3179;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3175 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3175 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3177 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3176 = *$tmp3177;
        org$pandalanguage$pandac$Type** $tmp3178 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3179 = p_f1;
        *$tmp3178 = $tmp3179;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3179));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3176));
    }
    panda$core$UInt64* $tmp3180 = ((panda$core$UInt64*) ((char*) self->$data + 24));
    *$tmp3180 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3182;
    org$pandalanguage$pandac$IRNode* $tmp3185;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3181 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3181 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3183 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3182 = *$tmp3183;
        org$pandalanguage$pandac$IRNode** $tmp3184 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3185 = p_f1;
        *$tmp3184 = $tmp3185;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3185));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3182));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp3187;
    panda$core$String* $tmp3190;
    panda$collections$ImmutableArray* $tmp3191;
    panda$collections$ImmutableArray* $tmp3194;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3186 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3186 = p_f0;
    {
        panda$core$String** $tmp3188 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3187 = *$tmp3188;
        panda$core$String** $tmp3189 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3190 = p_f1;
        *$tmp3189 = $tmp3190;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3190));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3187));
    }
    {
        panda$collections$ImmutableArray** $tmp3192 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3191 = *$tmp3192;
        panda$collections$ImmutableArray** $tmp3193 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3194 = p_f2;
        *$tmp3193 = $tmp3194;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3194));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3191));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3196;
    org$pandalanguage$pandac$IRNode* $tmp3199;
    panda$collections$ImmutableArray* $tmp3200;
    panda$collections$ImmutableArray* $tmp3203;
    panda$collections$ImmutableArray* $tmp3204;
    panda$collections$ImmutableArray* $tmp3207;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3195 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3195 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3197 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3196 = *$tmp3197;
        org$pandalanguage$pandac$IRNode** $tmp3198 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3199 = p_f1;
        *$tmp3198 = $tmp3199;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3199));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3196));
    }
    {
        panda$collections$ImmutableArray** $tmp3201 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3200 = *$tmp3201;
        panda$collections$ImmutableArray** $tmp3202 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3203 = p_f2;
        *$tmp3202 = $tmp3203;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3203));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3200));
    }
    {
        panda$collections$ImmutableArray** $tmp3205 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3204 = *$tmp3205;
        panda$collections$ImmutableArray** $tmp3206 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3207 = p_f3;
        *$tmp3206 = $tmp3207;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3207));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3204));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$MethodRef* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3209;
    org$pandalanguage$pandac$Type* $tmp3212;
    org$pandalanguage$pandac$IRNode* $tmp3213;
    org$pandalanguage$pandac$IRNode* $tmp3216;
    org$pandalanguage$pandac$MethodRef* $tmp3217;
    org$pandalanguage$pandac$MethodRef* $tmp3220;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3208 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3208 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3210 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3209 = *$tmp3210;
        org$pandalanguage$pandac$Type** $tmp3211 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3212 = p_f1;
        *$tmp3211 = $tmp3212;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3212));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3209));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3214 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3213 = *$tmp3214;
        org$pandalanguage$pandac$IRNode** $tmp3215 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3216 = p_f2;
        *$tmp3215 = $tmp3216;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3216));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3213));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp3218 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 32));
        $tmp3217 = *$tmp3218;
        org$pandalanguage$pandac$MethodRef** $tmp3219 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 32));
        $tmp3220 = p_f3;
        *$tmp3219 = $tmp3220;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3220));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3217));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3223;
    org$pandalanguage$pandac$IRNode* $tmp3226;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3221 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3221 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp3222 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp3222 = p_f1;
    {
        org$pandalanguage$pandac$IRNode** $tmp3224 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3223 = *$tmp3224;
        org$pandalanguage$pandac$IRNode** $tmp3225 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3226 = p_f2;
        *$tmp3225 = $tmp3226;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3226));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3223));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp3228;
    panda$core$String* $tmp3231;
    org$pandalanguage$pandac$IRNode* $tmp3232;
    org$pandalanguage$pandac$IRNode* $tmp3235;
    org$pandalanguage$pandac$IRNode* $tmp3236;
    org$pandalanguage$pandac$IRNode* $tmp3239;
    panda$collections$ImmutableArray* $tmp3240;
    panda$collections$ImmutableArray* $tmp3243;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3227 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3227 = p_f0;
    {
        panda$core$String** $tmp3229 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3228 = *$tmp3229;
        panda$core$String** $tmp3230 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3231 = p_f1;
        *$tmp3230 = $tmp3231;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3231));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3228));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3233 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3232 = *$tmp3233;
        org$pandalanguage$pandac$IRNode** $tmp3234 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3235 = p_f2;
        *$tmp3234 = $tmp3235;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3235));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3232));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3237 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3236 = *$tmp3237;
        org$pandalanguage$pandac$IRNode** $tmp3238 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3239 = p_f3;
        *$tmp3238 = $tmp3239;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3239));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3236));
    }
    {
        panda$collections$ImmutableArray** $tmp3241 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3240 = *$tmp3241;
        panda$collections$ImmutableArray** $tmp3242 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3243 = p_f4;
        *$tmp3242 = $tmp3243;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3243));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3240));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Real64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3245;
    org$pandalanguage$pandac$Type* $tmp3248;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3244 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3244 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3246 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3245 = *$tmp3246;
        org$pandalanguage$pandac$Type** $tmp3247 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3248 = p_f1;
        *$tmp3247 = $tmp3248;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3248));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3245));
    }
    panda$core$Real64* $tmp3249 = ((panda$core$Real64*) ((char*) self->$data + 24));
    *$tmp3249 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3251;
    org$pandalanguage$pandac$IRNode* $tmp3254;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3250 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3250 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3252 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3251 = *$tmp3252;
        org$pandalanguage$pandac$IRNode** $tmp3253 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3254 = p_f1;
        *$tmp3253 = $tmp3254;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3254));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3251));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Int64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3256;
    org$pandalanguage$pandac$Type* $tmp3259;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3255 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3255 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3257 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3256 = *$tmp3257;
        org$pandalanguage$pandac$Type** $tmp3258 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3259 = p_f1;
        *$tmp3258 = $tmp3259;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3259));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3256));
    }
    panda$core$Int64* $tmp3260 = ((panda$core$Int64*) ((char*) self->$data + 24));
    *$tmp3260 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$core$Int64 p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3261;
    org$pandalanguage$pandac$IRNode* $tmp3264;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3262 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3261 = *$tmp3262;
        org$pandalanguage$pandac$IRNode** $tmp3263 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3264 = p_f0;
        *$tmp3263 = $tmp3264;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3264));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3261));
    }
    panda$core$Int64* $tmp3265 = ((panda$core$Int64*) ((char*) self->$data + 8));
    *$tmp3265 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp3267;
    panda$core$String* $tmp3270;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3266 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3266 = p_f0;
    {
        panda$core$String** $tmp3268 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3267 = *$tmp3268;
        panda$core$String** $tmp3269 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3270 = p_f1;
        *$tmp3269 = $tmp3270;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3270));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3267));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3272;
    org$pandalanguage$pandac$IRNode* $tmp3275;
    org$pandalanguage$pandac$IRNode* $tmp3276;
    org$pandalanguage$pandac$IRNode* $tmp3279;
    org$pandalanguage$pandac$IRNode* $tmp3280;
    org$pandalanguage$pandac$IRNode* $tmp3283;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3271 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3271 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3273 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3272 = *$tmp3273;
        org$pandalanguage$pandac$IRNode** $tmp3274 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3275 = p_f1;
        *$tmp3274 = $tmp3275;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3275));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3272));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3277 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3276 = *$tmp3277;
        org$pandalanguage$pandac$IRNode** $tmp3278 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3279 = p_f2;
        *$tmp3278 = $tmp3279;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3279));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3276));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3281 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3280 = *$tmp3281;
        org$pandalanguage$pandac$IRNode** $tmp3282 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3283 = p_f3;
        *$tmp3282 = $tmp3283;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3283));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3280));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3285;
    org$pandalanguage$pandac$Type* $tmp3288;
    org$pandalanguage$pandac$IRNode* $tmp3289;
    org$pandalanguage$pandac$IRNode* $tmp3292;
    panda$collections$ImmutableArray* $tmp3293;
    panda$collections$ImmutableArray* $tmp3296;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3284 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3284 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3286 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3285 = *$tmp3286;
        org$pandalanguage$pandac$Type** $tmp3287 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3288 = p_f1;
        *$tmp3287 = $tmp3288;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3288));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3285));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3290 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3289 = *$tmp3290;
        org$pandalanguage$pandac$IRNode** $tmp3291 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3292 = p_f2;
        *$tmp3291 = $tmp3292;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3292));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3289));
    }
    {
        panda$collections$ImmutableArray** $tmp3294 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3293 = *$tmp3294;
        panda$collections$ImmutableArray** $tmp3295 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3296 = p_f3;
        *$tmp3295 = $tmp3296;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3296));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3293));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTpanda$core$String$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$collections$ImmutableArray* $tmp3298;
    panda$collections$ImmutableArray* $tmp3301;
    org$pandalanguage$pandac$ASTNode* $tmp3302;
    org$pandalanguage$pandac$ASTNode* $tmp3305;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3297 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3297 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp3299 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3298 = *$tmp3299;
        panda$collections$ImmutableArray** $tmp3300 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3301 = p_f1;
        *$tmp3300 = $tmp3301;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3301));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3298));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp3303 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp3302 = *$tmp3303;
        org$pandalanguage$pandac$ASTNode** $tmp3304 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp3305 = p_f2;
        *$tmp3304 = $tmp3305;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3305));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3302));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3, panda$collections$ImmutableArray* p_f4) {
    org$pandalanguage$pandac$Type* $tmp3307;
    org$pandalanguage$pandac$Type* $tmp3310;
    org$pandalanguage$pandac$IRNode* $tmp3311;
    org$pandalanguage$pandac$IRNode* $tmp3314;
    panda$collections$ImmutableArray* $tmp3315;
    panda$collections$ImmutableArray* $tmp3318;
    panda$collections$ImmutableArray* $tmp3319;
    panda$collections$ImmutableArray* $tmp3322;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3306 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3306 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3308 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3307 = *$tmp3308;
        org$pandalanguage$pandac$Type** $tmp3309 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3310 = p_f1;
        *$tmp3309 = $tmp3310;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3310));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3307));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3312 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3311 = *$tmp3312;
        org$pandalanguage$pandac$IRNode** $tmp3313 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3314 = p_f2;
        *$tmp3313 = $tmp3314;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3314));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3311));
    }
    {
        panda$collections$ImmutableArray** $tmp3316 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3315 = *$tmp3316;
        panda$collections$ImmutableArray** $tmp3317 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3318 = p_f3;
        *$tmp3317 = $tmp3318;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3318));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3315));
    }
    {
        panda$collections$ImmutableArray** $tmp3320 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3319 = *$tmp3320;
        panda$collections$ImmutableArray** $tmp3321 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3322 = p_f4;
        *$tmp3321 = $tmp3322;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3322));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3319));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3324;
    org$pandalanguage$pandac$IRNode* $tmp3327;
    panda$collections$ImmutableArray* $tmp3328;
    panda$collections$ImmutableArray* $tmp3331;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3323 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3323 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3325 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3324 = *$tmp3325;
        org$pandalanguage$pandac$IRNode** $tmp3326 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3327 = p_f1;
        *$tmp3326 = $tmp3327;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3327));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3324));
    }
    {
        panda$collections$ImmutableArray** $tmp3329 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3328 = *$tmp3329;
        panda$collections$ImmutableArray** $tmp3330 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3331 = p_f2;
        *$tmp3330 = $tmp3331;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3331));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3328));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$IRNode* $tmp3333;
    org$pandalanguage$pandac$IRNode* $tmp3336;
    org$pandalanguage$pandac$IRNode* $tmp3337;
    org$pandalanguage$pandac$IRNode* $tmp3340;
    org$pandalanguage$pandac$IRNode* $tmp3342;
    org$pandalanguage$pandac$IRNode* $tmp3345;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3332 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3332 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3334 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3333 = *$tmp3334;
        org$pandalanguage$pandac$IRNode** $tmp3335 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3336 = p_f1;
        *$tmp3335 = $tmp3336;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3336));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3333));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3338 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3337 = *$tmp3338;
        org$pandalanguage$pandac$IRNode** $tmp3339 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3340 = p_f2;
        *$tmp3339 = $tmp3340;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3340));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3337));
    }
    panda$core$Bit* $tmp3341 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp3341 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp3343 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3342 = *$tmp3343;
        org$pandalanguage$pandac$IRNode** $tmp3344 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3345 = p_f4;
        *$tmp3344 = $tmp3345;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3345));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3342));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp3348;
    panda$collections$ImmutableArray* $tmp3351;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3346 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3346 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp3347 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp3347 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp3349 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3348 = *$tmp3349;
        panda$collections$ImmutableArray** $tmp3350 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3351 = p_f2;
        *$tmp3350 = $tmp3351;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3351));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3348));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable* p_f1) {
    org$pandalanguage$pandac$Variable* $tmp3353;
    org$pandalanguage$pandac$Variable* $tmp3356;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3352 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3352 = p_f0;
    {
        org$pandalanguage$pandac$Variable** $tmp3354 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3353 = *$tmp3354;
        org$pandalanguage$pandac$Variable** $tmp3355 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3356 = p_f1;
        *$tmp3355 = $tmp3356;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3356));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3353));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp3358;
    panda$core$String* $tmp3361;
    org$pandalanguage$pandac$IRNode* $tmp3362;
    org$pandalanguage$pandac$IRNode* $tmp3365;
    panda$collections$ImmutableArray* $tmp3366;
    panda$collections$ImmutableArray* $tmp3369;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3357 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3357 = p_f0;
    {
        panda$core$String** $tmp3359 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3358 = *$tmp3359;
        panda$core$String** $tmp3360 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3361 = p_f1;
        *$tmp3360 = $tmp3361;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3361));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3358));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3363 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3362 = *$tmp3363;
        org$pandalanguage$pandac$IRNode** $tmp3364 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3365 = p_f2;
        *$tmp3364 = $tmp3365;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3365));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3362));
    }
    {
        panda$collections$ImmutableArray** $tmp3367 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3366 = *$tmp3367;
        panda$collections$ImmutableArray** $tmp3368 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3369 = p_f3;
        *$tmp3368 = $tmp3369;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3369));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3366));
    }
}

