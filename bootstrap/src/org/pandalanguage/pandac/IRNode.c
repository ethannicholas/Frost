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
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "panda/core/UInt64.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"

static panda$core$String $s1;
org$pandalanguage$pandac$IRNode$class_type org$pandalanguage$pandac$IRNode$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$IRNode$convert$R$panda$core$String, org$pandalanguage$pandac$IRNode$cleanup, org$pandalanguage$pandac$IRNode$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position, org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit} };

typedef org$pandalanguage$pandac$Type* (*$fn84)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn87)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn101)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn164)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn190)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn229)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn232)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn240)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn400)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn414)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn422)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn520)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn644)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn647)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn669)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn673)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn695)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn702)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn713)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn715)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn751)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn758)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn769)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn771)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn804)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn826)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn839)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn852)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn859)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn870)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn872)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn902)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn915)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn922)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn933)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn935)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn944)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn957)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn965)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn983)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn990)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1001)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1003)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1023)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1036)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1043)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1054)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1056)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1073)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1080)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1091)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1093)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1124)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1134)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1147)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1154)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1165)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1167)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1188)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1201)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1235)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1238)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1242)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1300)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1307)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1318)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1320)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1356)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1363)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1374)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1376)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1393)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1400)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1411)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1413)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1431)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1444)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1451)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1462)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1464)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1537)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1580)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1587)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1598)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1636)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1643)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1654)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1670)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1677)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1688)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1738)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1756)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1789)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1829)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1880)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1885)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1900)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1905)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1941)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1948)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1959)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1990)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1998)(panda$collections$ListView*, panda$core$String*);
typedef panda$core$String* (*$fn2016)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2036)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn2074)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2081)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2092)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2176)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2183)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2194)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2239)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2246)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2257)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2273)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2280)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2291)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2318)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn2408)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2415)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2426)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2589)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2596)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2618)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2656)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2678)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2696)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2780)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2821)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2830)(panda$collections$ListView*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2871)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2878)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2889)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x4e\x6f\x64\x65", 31, -8857975469778350849, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s629 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s1500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s1512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s1539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1547 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s1601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x79\x20\x7b\x0a", 6, 2292679699717, NULL };
static panda$core$String $s1657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x66\x69\x6e\x61\x6c\x6c\x79\x20\x7b\x0a", 12, -1355183944487068280, NULL };
static panda$core$String $s1691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s1713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s1733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1758 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1761 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1799 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1840 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x2a\x2d", 24, 1541443738414735436, NULL };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1864 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s1882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1908 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1930 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s1962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s1970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1992 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1995 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2001 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2018 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x2a\x20\x61\x6e\x64\x20\x74\x68\x65\x6e\x3a\x20", 14, -3277098584181619124, NULL };
static panda$core$String $s2021 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s2038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2041 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s2064 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s2095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s2105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s2143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s2165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s2197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s2229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s2294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s2360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s2395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s2398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s2460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s2477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s2503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66\x2d\x2a\x63\x61\x70\x74\x75\x72\x65\x2a\x2d", 15, 7664694969176949793, NULL };
static panda$core$String $s2525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s2532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s2550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s2555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s2558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s2614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s2624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2643 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44\x2a\x2d", 14, -8805999466873262330, NULL };
static panda$core$String $s2645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2651 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44\x2a\x2d", 14, -8805999466873262330, NULL };
static panda$core$String $s2673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2715 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s2737 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s2740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s2742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s2770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s2773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s2776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s2802 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x63\x61\x70\x74\x75\x72\x65\x2a\x2d", 11, -3294192213738444701, NULL };
static panda$core$String $s2817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s2824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s2827 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2833 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s2861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2892 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2908 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };

org$pandalanguage$pandac$Type* org$pandalanguage$pandac$IRNode$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$76_95 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp6;
    panda$core$Int64 $tmp7;
    org$pandalanguage$pandac$Type* type9 = NULL;
    org$pandalanguage$pandac$Type* $returnValue11;
    org$pandalanguage$pandac$Type* $tmp12;
    panda$core$Int64 $tmp15;
    org$pandalanguage$pandac$Type* type17 = NULL;
    org$pandalanguage$pandac$Type* $tmp19;
    panda$core$Int64 $tmp22;
    org$pandalanguage$pandac$Type* type24 = NULL;
    org$pandalanguage$pandac$Type* $tmp26;
    panda$core$Int64 $tmp29;
    org$pandalanguage$pandac$Type* type31 = NULL;
    org$pandalanguage$pandac$Type* $tmp33;
    panda$core$Int64 $tmp36;
    org$pandalanguage$pandac$Type* type38 = NULL;
    org$pandalanguage$pandac$Type* $tmp40;
    panda$core$Int64 $tmp43;
    org$pandalanguage$pandac$ChoiceEntry* ce45 = NULL;
    org$pandalanguage$pandac$Type* $tmp47;
    org$pandalanguage$pandac$Type* $tmp48;
    panda$core$Int64 $tmp52;
    org$pandalanguage$pandac$ChoiceEntry* ce54 = NULL;
    panda$core$Int64 field56;
    org$pandalanguage$pandac$Type* $tmp58;
    panda$core$Object* $tmp59;
    panda$core$Int64 $tmp63;
    org$pandalanguage$pandac$Type* type65 = NULL;
    org$pandalanguage$pandac$Type* $tmp67;
    panda$core$Int64 $tmp70;
    org$pandalanguage$pandac$Type* type72 = NULL;
    org$pandalanguage$pandac$Type* $tmp74;
    panda$core$Int64 $tmp77;
    org$pandalanguage$pandac$IRNode* m79 = NULL;
    org$pandalanguage$pandac$Type* $tmp81;
    panda$core$Object* $tmp82;
    org$pandalanguage$pandac$Type* $tmp83;
    org$pandalanguage$pandac$Type* $tmp86;
    panda$core$Int64 $tmp90;
    panda$core$Int64 $tmp95;
    org$pandalanguage$pandac$IRNode* expr97 = NULL;
    org$pandalanguage$pandac$Type* $tmp99;
    org$pandalanguage$pandac$Type* $tmp100;
    panda$core$Int64 $tmp105;
    org$pandalanguage$pandac$Type* type107 = NULL;
    org$pandalanguage$pandac$Type* $tmp109;
    panda$core$Int64 $tmp112;
    org$pandalanguage$pandac$Type* type114 = NULL;
    org$pandalanguage$pandac$Type* $tmp116;
    panda$core$Int64 $tmp119;
    org$pandalanguage$pandac$Type* $tmp121;
    org$pandalanguage$pandac$Type* $tmp122;
    panda$core$Int64 $tmp126;
    org$pandalanguage$pandac$Type* $tmp128;
    org$pandalanguage$pandac$Type* $tmp129;
    panda$core$Int64 $tmp133;
    org$pandalanguage$pandac$Type* type135 = NULL;
    org$pandalanguage$pandac$IRNode* target137 = NULL;
    org$pandalanguage$pandac$MethodRef* m139 = NULL;
    org$pandalanguage$pandac$Type* $tmp141;
    panda$core$Int64 $tmp144;
    org$pandalanguage$pandac$Type* type146 = NULL;
    org$pandalanguage$pandac$Type* $tmp148;
    panda$core$Int64 $tmp151;
    org$pandalanguage$pandac$Type* type153 = NULL;
    org$pandalanguage$pandac$Type* $tmp155;
    panda$core$Int64 $tmp158;
    org$pandalanguage$pandac$IRNode* base160 = NULL;
    org$pandalanguage$pandac$Type* $tmp162;
    org$pandalanguage$pandac$Type* $tmp163;
    panda$core$Int64 $tmp168;
    org$pandalanguage$pandac$Type* type170 = NULL;
    org$pandalanguage$pandac$Type* $tmp172;
    panda$core$Int64 $tmp175;
    org$pandalanguage$pandac$Type* type177 = NULL;
    panda$core$Int64 id179;
    org$pandalanguage$pandac$Type* $tmp181;
    panda$core$Int64 $tmp184;
    org$pandalanguage$pandac$IRNode* base186 = NULL;
    org$pandalanguage$pandac$Type* $tmp188;
    org$pandalanguage$pandac$Type* $tmp189;
    panda$core$Int64 $tmp194;
    org$pandalanguage$pandac$Type* type196 = NULL;
    org$pandalanguage$pandac$Type* $tmp198;
    panda$core$Int64 $tmp201;
    org$pandalanguage$pandac$Type* type203 = NULL;
    org$pandalanguage$pandac$Type* $tmp205;
    panda$core$Int64 $tmp208;
    org$pandalanguage$pandac$Type* $tmp210;
    org$pandalanguage$pandac$Type* $tmp211;
    panda$core$Int64 $tmp215;
    org$pandalanguage$pandac$Type* type217 = NULL;
    org$pandalanguage$pandac$Type* $tmp219;
    panda$core$Int64 $tmp222;
    org$pandalanguage$pandac$IRNode* ifTrue224 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse226 = NULL;
    org$pandalanguage$pandac$Type* $tmp228;
    org$pandalanguage$pandac$Type* $tmp231;
    org$pandalanguage$pandac$Type* $tmp238;
    org$pandalanguage$pandac$Type* $tmp239;
    panda$core$Int64 $tmp244;
    org$pandalanguage$pandac$Type* $tmp246;
    org$pandalanguage$pandac$Type* $tmp247;
    panda$core$Int64 $tmp251;
    org$pandalanguage$pandac$Type* $tmp253;
    org$pandalanguage$pandac$Type* $tmp254;
    panda$core$Int64 $tmp258;
    org$pandalanguage$pandac$Type* type260 = NULL;
    org$pandalanguage$pandac$Type* $tmp262;
    panda$core$Int64 $tmp265;
    org$pandalanguage$pandac$Type* $tmp267;
    org$pandalanguage$pandac$Type* $tmp268;
    panda$core$Int64 $tmp272;
    org$pandalanguage$pandac$Type* type274 = NULL;
    org$pandalanguage$pandac$Type* $tmp276;
    panda$core$Int64 $tmp279;
    org$pandalanguage$pandac$Type* $tmp281;
    org$pandalanguage$pandac$Type* $tmp282;
    panda$core$Int64 $tmp286;
    org$pandalanguage$pandac$Type* $tmp288;
    org$pandalanguage$pandac$Type* $tmp289;
    panda$core$Int64 $tmp293;
    org$pandalanguage$pandac$Type* type295 = NULL;
    org$pandalanguage$pandac$Type* $tmp297;
    panda$core$Int64 $tmp300;
    org$pandalanguage$pandac$Variable* variable302 = NULL;
    org$pandalanguage$pandac$Type* $tmp304;
    panda$core$Bit $tmp307;
    int $tmp4;
    {
        $tmp6 = self;
        $match$76_95 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Int64$init$builtin_int64(&$tmp7, 1);
        panda$core$Bit $tmp8 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp7);
        if ($tmp8.value) {
        {
            org$pandalanguage$pandac$Type** $tmp10 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type9 = *$tmp10;
            $tmp12 = type9;
            $returnValue11 = $tmp12;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
            $tmp4 = 0;
            goto $l2;
            $l13:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp15, 2);
        panda$core$Bit $tmp16 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp15);
        if ($tmp16.value) {
        {
            org$pandalanguage$pandac$Type** $tmp18 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type17 = *$tmp18;
            $tmp19 = type17;
            $returnValue11 = $tmp19;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp19));
            $tmp4 = 1;
            goto $l2;
            $l20:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp22, 3);
        panda$core$Bit $tmp23 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp22);
        if ($tmp23.value) {
        {
            org$pandalanguage$pandac$Type** $tmp25 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type24 = *$tmp25;
            $tmp26 = type24;
            $returnValue11 = $tmp26;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp26));
            $tmp4 = 2;
            goto $l2;
            $l27:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp29, 7);
        panda$core$Bit $tmp30 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp29);
        if ($tmp30.value) {
        {
            org$pandalanguage$pandac$Type** $tmp32 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type31 = *$tmp32;
            $tmp33 = type31;
            $returnValue11 = $tmp33;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp33));
            $tmp4 = 3;
            goto $l2;
            $l34:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp36, 8);
        panda$core$Bit $tmp37 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp36);
        if ($tmp37.value) {
        {
            org$pandalanguage$pandac$Type** $tmp39 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 24));
            type38 = *$tmp39;
            $tmp40 = type38;
            $returnValue11 = $tmp40;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp40));
            $tmp4 = 4;
            goto $l2;
            $l41:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp43, 9);
        panda$core$Bit $tmp44 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp43);
        if ($tmp44.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp46 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$76_95->$data + 16));
            ce45 = *$tmp46;
            org$pandalanguage$pandac$Type* $tmp49 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp48 = $tmp49;
            $tmp47 = $tmp48;
            $returnValue11 = $tmp47;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp47));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
            $tmp4 = 5;
            goto $l2;
            $l50:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp52, 10);
        panda$core$Bit $tmp53 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp52);
        if ($tmp53.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp55 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$76_95->$data + 24));
            ce54 = *$tmp55;
            panda$core$Int64* $tmp57 = ((panda$core$Int64*) ((char*) $match$76_95->$data + 32));
            field56 = *$tmp57;
            panda$core$Object* $tmp60 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(ce54->fields, field56);
            $tmp59 = $tmp60;
            $tmp58 = ((org$pandalanguage$pandac$Type*) $tmp59);
            $returnValue11 = $tmp58;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp58));
            panda$core$Panda$unref$panda$core$Object($tmp59);
            $tmp4 = 6;
            goto $l2;
            $l61:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp63, 11);
        panda$core$Bit $tmp64 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp63);
        if ($tmp64.value) {
        {
            org$pandalanguage$pandac$Type** $tmp66 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type65 = *$tmp66;
            $tmp67 = type65;
            $returnValue11 = $tmp67;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp67));
            $tmp4 = 7;
            goto $l2;
            $l68:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp70, 12);
        panda$core$Bit $tmp71 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp70);
        if ($tmp71.value) {
        {
            org$pandalanguage$pandac$Type** $tmp73 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type72 = *$tmp73;
            $tmp74 = type72;
            $returnValue11 = $tmp74;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp74));
            $tmp4 = 8;
            goto $l2;
            $l75:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp77, 16);
        panda$core$Bit $tmp78 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp77);
        if ($tmp78.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp80 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 0));
            m79 = *$tmp80;
            org$pandalanguage$pandac$Type* $tmp85 = (($fn84) m79->$class->vtable[2])(m79);
            $tmp83 = $tmp85;
            org$pandalanguage$pandac$Type* $tmp88 = (($fn87) m79->$class->vtable[2])(m79);
            $tmp86 = $tmp88;
            panda$core$Int64 $tmp89 = panda$collections$Array$get_count$R$panda$core$Int64($tmp86->subtypes);
            panda$core$Int64$init$builtin_int64(&$tmp90, 1);
            panda$core$Int64 $tmp91 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp89, $tmp90);
            panda$core$Object* $tmp92 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp83->subtypes, $tmp91);
            $tmp82 = $tmp92;
            $tmp81 = ((org$pandalanguage$pandac$Type*) $tmp82);
            $returnValue11 = $tmp81;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp81));
            panda$core$Panda$unref$panda$core$Object($tmp82);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp83));
            $tmp4 = 9;
            goto $l2;
            $l93:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp95, 17);
        panda$core$Bit $tmp96 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp95);
        if ($tmp96.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp98 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 0));
            expr97 = *$tmp98;
            org$pandalanguage$pandac$Type* $tmp102 = (($fn101) expr97->$class->vtable[2])(expr97);
            $tmp100 = $tmp102;
            $tmp99 = $tmp100;
            $returnValue11 = $tmp99;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp99));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp100));
            $tmp4 = 10;
            goto $l2;
            $l103:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp105, 18);
        panda$core$Bit $tmp106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp105);
        if ($tmp106.value) {
        {
            org$pandalanguage$pandac$Type** $tmp108 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type107 = *$tmp108;
            $tmp109 = type107;
            $returnValue11 = $tmp109;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp109));
            $tmp4 = 11;
            goto $l2;
            $l110:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp112, 20);
        panda$core$Bit $tmp113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp112);
        if ($tmp113.value) {
        {
            org$pandalanguage$pandac$Type** $tmp115 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type114 = *$tmp115;
            $tmp116 = type114;
            $returnValue11 = $tmp116;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp116));
            $tmp4 = 12;
            goto $l2;
            $l117:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp119, 21);
        panda$core$Bit $tmp120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp119);
        if ($tmp120.value) {
        {
            org$pandalanguage$pandac$Type* $tmp123 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            $tmp122 = $tmp123;
            $tmp121 = $tmp122;
            $returnValue11 = $tmp121;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp121));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp122));
            $tmp4 = 13;
            goto $l2;
            $l124:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp126, 22);
        panda$core$Bit $tmp127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp126);
        if ($tmp127.value) {
        {
            org$pandalanguage$pandac$Type* $tmp130 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            $tmp129 = $tmp130;
            $tmp128 = $tmp129;
            $returnValue11 = $tmp128;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp128));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp129));
            $tmp4 = 14;
            goto $l2;
            $l131:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp133, 25);
        panda$core$Bit $tmp134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp133);
        if ($tmp134.value) {
        {
            org$pandalanguage$pandac$Type** $tmp136 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type135 = *$tmp136;
            org$pandalanguage$pandac$IRNode** $tmp138 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 24));
            target137 = *$tmp138;
            org$pandalanguage$pandac$MethodRef** $tmp140 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$76_95->$data + 32));
            m139 = *$tmp140;
            $tmp141 = type135;
            $returnValue11 = $tmp141;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp141));
            $tmp4 = 15;
            goto $l2;
            $l142:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp144, 26);
        panda$core$Bit $tmp145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp144);
        if ($tmp145.value) {
        {
            org$pandalanguage$pandac$Type** $tmp147 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type146 = *$tmp147;
            $tmp148 = type146;
            $returnValue11 = $tmp148;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp148));
            $tmp4 = 16;
            goto $l2;
            $l149:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp151, 27);
        panda$core$Bit $tmp152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp151);
        if ($tmp152.value) {
        {
            org$pandalanguage$pandac$Type** $tmp154 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type153 = *$tmp154;
            $tmp155 = type153;
            $returnValue11 = $tmp155;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp155));
            $tmp4 = 17;
            goto $l2;
            $l156:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp158, 28);
        panda$core$Bit $tmp159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp158);
        if ($tmp159.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp161 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 24));
            base160 = *$tmp161;
            org$pandalanguage$pandac$Type* $tmp165 = (($fn164) base160->$class->vtable[2])(base160);
            $tmp163 = $tmp165;
            $tmp162 = $tmp163;
            $returnValue11 = $tmp162;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp162));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp163));
            $tmp4 = 18;
            goto $l2;
            $l166:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp168, 30);
        panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp168);
        if ($tmp169.value) {
        {
            org$pandalanguage$pandac$Type** $tmp171 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type170 = *$tmp171;
            $tmp172 = type170;
            $returnValue11 = $tmp172;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp172));
            $tmp4 = 19;
            goto $l2;
            $l173:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp175, 32);
        panda$core$Bit $tmp176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp175);
        if ($tmp176.value) {
        {
            org$pandalanguage$pandac$Type** $tmp178 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type177 = *$tmp178;
            panda$core$Int64* $tmp180 = ((panda$core$Int64*) ((char*) $match$76_95->$data + 24));
            id179 = *$tmp180;
            $tmp181 = type177;
            $returnValue11 = $tmp181;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp181));
            $tmp4 = 20;
            goto $l2;
            $l182:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp184, 33);
        panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp184);
        if ($tmp185.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp187 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 0));
            base186 = *$tmp187;
            org$pandalanguage$pandac$Type* $tmp191 = (($fn190) base186->$class->vtable[2])(base186);
            $tmp189 = $tmp191;
            $tmp188 = $tmp189;
            $returnValue11 = $tmp188;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp188));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp189));
            $tmp4 = 21;
            goto $l2;
            $l192:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp194, 34);
        panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp194);
        if ($tmp195.value) {
        {
            org$pandalanguage$pandac$Type** $tmp197 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type196 = *$tmp197;
            $tmp198 = type196;
            $returnValue11 = $tmp198;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp198));
            $tmp4 = 22;
            goto $l2;
            $l199:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp201, 35);
        panda$core$Bit $tmp202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp201);
        if ($tmp202.value) {
        {
            org$pandalanguage$pandac$Type** $tmp204 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type203 = *$tmp204;
            $tmp205 = type203;
            $returnValue11 = $tmp205;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp205));
            $tmp4 = 23;
            goto $l2;
            $l206:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp208, 36);
        panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp208);
        if ($tmp209.value) {
        {
            org$pandalanguage$pandac$Type* $tmp212 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
            $tmp211 = $tmp212;
            $tmp210 = $tmp211;
            $returnValue11 = $tmp210;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp210));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp211));
            $tmp4 = 24;
            goto $l2;
            $l213:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp215, 37);
        panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp215);
        if ($tmp216.value) {
        {
            org$pandalanguage$pandac$Type** $tmp218 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type217 = *$tmp218;
            $tmp219 = type217;
            $returnValue11 = $tmp219;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp219));
            $tmp4 = 25;
            goto $l2;
            $l220:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp222, 38);
        panda$core$Bit $tmp223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp222);
        if ($tmp223.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp225 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 24));
            ifTrue224 = *$tmp225;
            org$pandalanguage$pandac$IRNode** $tmp227 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 32));
            ifFalse226 = *$tmp227;
            org$pandalanguage$pandac$Type* $tmp230 = (($fn229) ifTrue224->$class->vtable[2])(ifTrue224);
            $tmp228 = $tmp230;
            org$pandalanguage$pandac$Type* $tmp233 = (($fn232) ifFalse226->$class->vtable[2])(ifFalse226);
            $tmp231 = $tmp233;
            panda$core$Bit $tmp234 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp228, $tmp231);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp231));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp228));
            if ($tmp234.value) goto $l235; else goto $l236;
            $l236:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s237, (panda$core$Int64) { 130 });
            abort();
            $l235:;
            org$pandalanguage$pandac$Type* $tmp241 = (($fn240) ifTrue224->$class->vtable[2])(ifTrue224);
            $tmp239 = $tmp241;
            $tmp238 = $tmp239;
            $returnValue11 = $tmp238;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp238));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
            $tmp4 = 26;
            goto $l2;
            $l242:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp244, 39);
        panda$core$Bit $tmp245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp244);
        if ($tmp245.value) {
        {
            org$pandalanguage$pandac$Type* $tmp248 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            $tmp247 = $tmp248;
            $tmp246 = $tmp247;
            $returnValue11 = $tmp246;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp246));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp247));
            $tmp4 = 27;
            goto $l2;
            $l249:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp251, 40);
        panda$core$Bit $tmp252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp251);
        if ($tmp252.value) {
        {
            org$pandalanguage$pandac$Type* $tmp255 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp254 = $tmp255;
            $tmp253 = $tmp254;
            $returnValue11 = $tmp253;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp253));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp254));
            $tmp4 = 28;
            goto $l2;
            $l256:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp258, 41);
        panda$core$Bit $tmp259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp258);
        if ($tmp259.value) {
        {
            org$pandalanguage$pandac$Type** $tmp261 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type260 = *$tmp261;
            $tmp262 = type260;
            $returnValue11 = $tmp262;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp262));
            $tmp4 = 29;
            goto $l2;
            $l263:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp265, 42);
        panda$core$Bit $tmp266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp265);
        if ($tmp266.value) {
        {
            org$pandalanguage$pandac$Type* $tmp269 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp268 = $tmp269;
            $tmp267 = $tmp268;
            $returnValue11 = $tmp267;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp267));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp268));
            $tmp4 = 30;
            goto $l2;
            $l270:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp272, 43);
        panda$core$Bit $tmp273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp272);
        if ($tmp273.value) {
        {
            org$pandalanguage$pandac$Type** $tmp275 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type274 = *$tmp275;
            $tmp276 = type274;
            $returnValue11 = $tmp276;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp276));
            $tmp4 = 31;
            goto $l2;
            $l277:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp279, 44);
        panda$core$Bit $tmp280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp279);
        if ($tmp280.value) {
        {
            org$pandalanguage$pandac$Type* $tmp283 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp282 = $tmp283;
            $tmp281 = $tmp282;
            $returnValue11 = $tmp281;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp281));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp282));
            $tmp4 = 32;
            goto $l2;
            $l284:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp286, 45);
        panda$core$Bit $tmp287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp286);
        if ($tmp287.value) {
        {
            org$pandalanguage$pandac$Type* $tmp290 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp289 = $tmp290;
            $tmp288 = $tmp289;
            $returnValue11 = $tmp288;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp288));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp289));
            $tmp4 = 33;
            goto $l2;
            $l291:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp293, 47);
        panda$core$Bit $tmp294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp293);
        if ($tmp294.value) {
        {
            org$pandalanguage$pandac$Type** $tmp296 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 24));
            type295 = *$tmp296;
            $tmp297 = type295;
            $returnValue11 = $tmp297;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp297));
            $tmp4 = 34;
            goto $l2;
            $l298:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp300, 48);
        panda$core$Bit $tmp301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp300);
        if ($tmp301.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp303 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$76_95->$data + 16));
            variable302 = *$tmp303;
            $tmp304 = variable302->type;
            $returnValue11 = $tmp304;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp304));
            $tmp4 = 35;
            goto $l2;
            $l305:;
            return $returnValue11;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp307, false);
            if ($tmp307.value) goto $l308; else goto $l309;
            $l309:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s310, (panda$core$Int64) { 151 });
            abort();
            $l308:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
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
        case 22: goto $l199;
        case 15: goto $l142;
        case 24: goto $l213;
        case 33: goto $l291;
        case 8: goto $l75;
        case 3: goto $l34;
        case 28: goto $l256;
        case 5: goto $l50;
        case 11: goto $l110;
        case 7: goto $l68;
        case 13: goto $l124;
        case 25: goto $l220;
        case 31: goto $l277;
        case 20: goto $l182;
        case -1: goto $l311;
        case 27: goto $l249;
        case 12: goto $l117;
        case 23: goto $l206;
        case 1: goto $l20;
        case 18: goto $l166;
        case 0: goto $l13;
        case 9: goto $l93;
        case 32: goto $l284;
        case 21: goto $l192;
        case 29: goto $l263;
        case 4: goto $l41;
        case 26: goto $l242;
        case 10: goto $l103;
        case 6: goto $l61;
        case 30: goto $l270;
        case 17: goto $l156;
        case 35: goto $l305;
        case 14: goto $l131;
        case 34: goto $l298;
        case 19: goto $l173;
        case 16: goto $l149;
        case 2: goto $l27;
    }
    $l311:;
    abort();
}
org$pandalanguage$pandac$Position org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$156_9315 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp316;
    panda$core$Int64 $tmp317;
    org$pandalanguage$pandac$Position position319;
    org$pandalanguage$pandac$Position $returnValue321;
    panda$core$Int64 $tmp324;
    org$pandalanguage$pandac$Position position326;
    panda$core$Int64 $tmp330;
    org$pandalanguage$pandac$Position position332;
    panda$core$Int64 $tmp336;
    org$pandalanguage$pandac$Position position338;
    panda$core$Int64 $tmp342;
    org$pandalanguage$pandac$Position position344;
    panda$core$Int64 $tmp348;
    org$pandalanguage$pandac$Position position350;
    panda$core$Int64 $tmp354;
    org$pandalanguage$pandac$Position position356;
    panda$core$Int64 $tmp360;
    org$pandalanguage$pandac$Position position362;
    panda$core$Int64 $tmp366;
    org$pandalanguage$pandac$Position position368;
    panda$core$Int64 $tmp372;
    org$pandalanguage$pandac$Position position374;
    panda$core$Int64 $tmp378;
    org$pandalanguage$pandac$Position position380;
    panda$core$Int64 $tmp384;
    org$pandalanguage$pandac$Position position386;
    panda$core$Int64 $tmp390;
    org$pandalanguage$pandac$Position position392;
    panda$core$Int64 $tmp396;
    org$pandalanguage$pandac$IRNode* target398 = NULL;
    panda$core$Int64 $tmp404;
    org$pandalanguage$pandac$Position position406;
    panda$core$Int64 $tmp410;
    org$pandalanguage$pandac$IRNode* m412 = NULL;
    panda$core$Int64 $tmp418;
    org$pandalanguage$pandac$IRNode* expr420 = NULL;
    panda$core$Int64 $tmp426;
    org$pandalanguage$pandac$Position position428;
    panda$core$Int64 $tmp432;
    org$pandalanguage$pandac$Position position434;
    panda$core$Int64 $tmp438;
    org$pandalanguage$pandac$Position position440;
    panda$core$Int64 $tmp444;
    org$pandalanguage$pandac$Position position446;
    panda$core$Int64 $tmp450;
    org$pandalanguage$pandac$Position position452;
    panda$core$Int64 $tmp456;
    org$pandalanguage$pandac$Position position458;
    panda$core$Int64 $tmp462;
    org$pandalanguage$pandac$Position position464;
    panda$core$Int64 $tmp468;
    org$pandalanguage$pandac$Position position470;
    panda$core$Int64 $tmp474;
    org$pandalanguage$pandac$Position position476;
    panda$core$Int64 $tmp480;
    org$pandalanguage$pandac$Position position482;
    panda$core$Int64 $tmp486;
    org$pandalanguage$pandac$Position position488;
    panda$core$Int64 $tmp492;
    org$pandalanguage$pandac$Position position494;
    panda$core$Int64 $tmp498;
    org$pandalanguage$pandac$Position position500;
    panda$core$Int64 $tmp504;
    org$pandalanguage$pandac$Position position506;
    panda$core$Int64 $tmp510;
    org$pandalanguage$pandac$Position position512;
    panda$core$Int64 $tmp516;
    org$pandalanguage$pandac$IRNode* base518 = NULL;
    panda$core$Int64 $tmp524;
    org$pandalanguage$pandac$Position position526;
    panda$core$Int64 $tmp530;
    org$pandalanguage$pandac$Position position532;
    panda$core$Int64 $tmp536;
    org$pandalanguage$pandac$Position position538;
    panda$core$Int64 $tmp542;
    org$pandalanguage$pandac$Position position544;
    panda$core$Int64 $tmp548;
    org$pandalanguage$pandac$Position position550;
    panda$core$Int64 $tmp554;
    org$pandalanguage$pandac$Position position556;
    panda$core$Int64 $tmp560;
    org$pandalanguage$pandac$Position position562;
    panda$core$Int64 $tmp566;
    org$pandalanguage$pandac$Position position568;
    panda$core$Int64 $tmp572;
    org$pandalanguage$pandac$Position position574;
    panda$core$Int64 $tmp578;
    org$pandalanguage$pandac$Position position580;
    panda$core$Int64 $tmp584;
    org$pandalanguage$pandac$Position position586;
    panda$core$Int64 $tmp590;
    org$pandalanguage$pandac$Position position592;
    panda$core$Int64 $tmp596;
    org$pandalanguage$pandac$Position position598;
    panda$core$Int64 $tmp602;
    org$pandalanguage$pandac$Position position604;
    panda$core$Int64 $tmp608;
    org$pandalanguage$pandac$Position position610;
    panda$core$Int64 $tmp614;
    org$pandalanguage$pandac$Position position616;
    panda$core$Int64 $tmp620;
    org$pandalanguage$pandac$Position position622;
    panda$core$Bit $tmp626;
    int $tmp314;
    {
        $tmp316 = self;
        $match$156_9315 = $tmp316;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp316));
        panda$core$Int64$init$builtin_int64(&$tmp317, 0);
        panda$core$Bit $tmp318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp317);
        if ($tmp318.value) {
        {
            org$pandalanguage$pandac$Position* $tmp320 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position319 = *$tmp320;
            $returnValue321 = position319;
            $tmp314 = 0;
            goto $l312;
            $l322:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp324, 1);
        panda$core$Bit $tmp325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp324);
        if ($tmp325.value) {
        {
            org$pandalanguage$pandac$Position* $tmp327 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position326 = *$tmp327;
            $returnValue321 = position326;
            $tmp314 = 1;
            goto $l312;
            $l328:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp330, 2);
        panda$core$Bit $tmp331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp330);
        if ($tmp331.value) {
        {
            org$pandalanguage$pandac$Position* $tmp333 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position332 = *$tmp333;
            $returnValue321 = position332;
            $tmp314 = 2;
            goto $l312;
            $l334:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp336, 3);
        panda$core$Bit $tmp337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp336);
        if ($tmp337.value) {
        {
            org$pandalanguage$pandac$Position* $tmp339 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position338 = *$tmp339;
            $returnValue321 = position338;
            $tmp314 = 3;
            goto $l312;
            $l340:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp342, 4);
        panda$core$Bit $tmp343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp342);
        if ($tmp343.value) {
        {
            org$pandalanguage$pandac$Position* $tmp345 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position344 = *$tmp345;
            $returnValue321 = position344;
            $tmp314 = 4;
            goto $l312;
            $l346:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp348, 6);
        panda$core$Bit $tmp349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp348);
        if ($tmp349.value) {
        {
            org$pandalanguage$pandac$Position* $tmp351 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position350 = *$tmp351;
            $returnValue321 = position350;
            $tmp314 = 5;
            goto $l312;
            $l352:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp354, 7);
        panda$core$Bit $tmp355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp354);
        if ($tmp355.value) {
        {
            org$pandalanguage$pandac$Position* $tmp357 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position356 = *$tmp357;
            $returnValue321 = position356;
            $tmp314 = 6;
            goto $l312;
            $l358:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp360, 8);
        panda$core$Bit $tmp361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp360);
        if ($tmp361.value) {
        {
            org$pandalanguage$pandac$Position* $tmp363 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position362 = *$tmp363;
            $returnValue321 = position362;
            $tmp314 = 7;
            goto $l312;
            $l364:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp366, 9);
        panda$core$Bit $tmp367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp366);
        if ($tmp367.value) {
        {
            org$pandalanguage$pandac$Position* $tmp369 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position368 = *$tmp369;
            $returnValue321 = position368;
            $tmp314 = 8;
            goto $l312;
            $l370:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp372, 10);
        panda$core$Bit $tmp373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp372);
        if ($tmp373.value) {
        {
            org$pandalanguage$pandac$Position* $tmp375 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position374 = *$tmp375;
            $returnValue321 = position374;
            $tmp314 = 9;
            goto $l312;
            $l376:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp378, 11);
        panda$core$Bit $tmp379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp378);
        if ($tmp379.value) {
        {
            org$pandalanguage$pandac$Position* $tmp381 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position380 = *$tmp381;
            $returnValue321 = position380;
            $tmp314 = 10;
            goto $l312;
            $l382:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp384, 12);
        panda$core$Bit $tmp385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp384);
        if ($tmp385.value) {
        {
            org$pandalanguage$pandac$Position* $tmp387 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position386 = *$tmp387;
            $returnValue321 = position386;
            $tmp314 = 11;
            goto $l312;
            $l388:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp390, 13);
        panda$core$Bit $tmp391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp390);
        if ($tmp391.value) {
        {
            org$pandalanguage$pandac$Position* $tmp393 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position392 = *$tmp393;
            $returnValue321 = position392;
            $tmp314 = 12;
            goto $l312;
            $l394:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp396, 14);
        panda$core$Bit $tmp397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp396);
        if ($tmp397.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp399 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$156_9315->$data + 0));
            target398 = *$tmp399;
            org$pandalanguage$pandac$Position $tmp401 = (($fn400) target398->$class->vtable[3])(target398);
            $returnValue321 = $tmp401;
            $tmp314 = 13;
            goto $l312;
            $l402:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp404, 15);
        panda$core$Bit $tmp405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp404);
        if ($tmp405.value) {
        {
            org$pandalanguage$pandac$Position* $tmp407 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position406 = *$tmp407;
            $returnValue321 = position406;
            $tmp314 = 14;
            goto $l312;
            $l408:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp410, 16);
        panda$core$Bit $tmp411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp410);
        if ($tmp411.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp413 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$156_9315->$data + 0));
            m412 = *$tmp413;
            org$pandalanguage$pandac$Position $tmp415 = (($fn414) m412->$class->vtable[3])(m412);
            $returnValue321 = $tmp415;
            $tmp314 = 15;
            goto $l312;
            $l416:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp418, 17);
        panda$core$Bit $tmp419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp418);
        if ($tmp419.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp421 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$156_9315->$data + 0));
            expr420 = *$tmp421;
            org$pandalanguage$pandac$Position $tmp423 = (($fn422) expr420->$class->vtable[3])(expr420);
            $returnValue321 = $tmp423;
            $tmp314 = 16;
            goto $l312;
            $l424:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp426, 18);
        panda$core$Bit $tmp427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp426);
        if ($tmp427.value) {
        {
            org$pandalanguage$pandac$Position* $tmp429 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position428 = *$tmp429;
            $returnValue321 = position428;
            $tmp314 = 17;
            goto $l312;
            $l430:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp432, 19);
        panda$core$Bit $tmp433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp432);
        if ($tmp433.value) {
        {
            org$pandalanguage$pandac$Position* $tmp435 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position434 = *$tmp435;
            $returnValue321 = position434;
            $tmp314 = 18;
            goto $l312;
            $l436:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp438, 20);
        panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp438);
        if ($tmp439.value) {
        {
            org$pandalanguage$pandac$Position* $tmp441 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position440 = *$tmp441;
            $returnValue321 = position440;
            $tmp314 = 19;
            goto $l312;
            $l442:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp444, 21);
        panda$core$Bit $tmp445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp444);
        if ($tmp445.value) {
        {
            org$pandalanguage$pandac$Position* $tmp447 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position446 = *$tmp447;
            $returnValue321 = position446;
            $tmp314 = 20;
            goto $l312;
            $l448:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp450, 22);
        panda$core$Bit $tmp451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp450);
        if ($tmp451.value) {
        {
            org$pandalanguage$pandac$Position* $tmp453 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position452 = *$tmp453;
            $returnValue321 = position452;
            $tmp314 = 21;
            goto $l312;
            $l454:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp456, 23);
        panda$core$Bit $tmp457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp456);
        if ($tmp457.value) {
        {
            org$pandalanguage$pandac$Position* $tmp459 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position458 = *$tmp459;
            $returnValue321 = position458;
            $tmp314 = 22;
            goto $l312;
            $l460:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp462, 24);
        panda$core$Bit $tmp463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp462);
        if ($tmp463.value) {
        {
            org$pandalanguage$pandac$Position* $tmp465 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position464 = *$tmp465;
            $returnValue321 = position464;
            $tmp314 = 23;
            goto $l312;
            $l466:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp468, 25);
        panda$core$Bit $tmp469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp468);
        if ($tmp469.value) {
        {
            org$pandalanguage$pandac$Position* $tmp471 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position470 = *$tmp471;
            $returnValue321 = position470;
            $tmp314 = 24;
            goto $l312;
            $l472:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp474, 26);
        panda$core$Bit $tmp475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp474);
        if ($tmp475.value) {
        {
            org$pandalanguage$pandac$Position* $tmp477 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position476 = *$tmp477;
            $returnValue321 = position476;
            $tmp314 = 25;
            goto $l312;
            $l478:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp480, 27);
        panda$core$Bit $tmp481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp480);
        if ($tmp481.value) {
        {
            org$pandalanguage$pandac$Position* $tmp483 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position482 = *$tmp483;
            $returnValue321 = position482;
            $tmp314 = 26;
            goto $l312;
            $l484:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp486, 28);
        panda$core$Bit $tmp487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp486);
        if ($tmp487.value) {
        {
            org$pandalanguage$pandac$Position* $tmp489 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position488 = *$tmp489;
            $returnValue321 = position488;
            $tmp314 = 27;
            goto $l312;
            $l490:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp492, 29);
        panda$core$Bit $tmp493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp492);
        if ($tmp493.value) {
        {
            org$pandalanguage$pandac$Position* $tmp495 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position494 = *$tmp495;
            $returnValue321 = position494;
            $tmp314 = 28;
            goto $l312;
            $l496:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp498, 30);
        panda$core$Bit $tmp499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp498);
        if ($tmp499.value) {
        {
            org$pandalanguage$pandac$Position* $tmp501 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position500 = *$tmp501;
            $returnValue321 = position500;
            $tmp314 = 29;
            goto $l312;
            $l502:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp504, 31);
        panda$core$Bit $tmp505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp504);
        if ($tmp505.value) {
        {
            org$pandalanguage$pandac$Position* $tmp507 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position506 = *$tmp507;
            $returnValue321 = position506;
            $tmp314 = 30;
            goto $l312;
            $l508:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp510, 32);
        panda$core$Bit $tmp511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp510);
        if ($tmp511.value) {
        {
            org$pandalanguage$pandac$Position* $tmp513 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position512 = *$tmp513;
            $returnValue321 = position512;
            $tmp314 = 31;
            goto $l312;
            $l514:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp516, 33);
        panda$core$Bit $tmp517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp516);
        if ($tmp517.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp519 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$156_9315->$data + 0));
            base518 = *$tmp519;
            org$pandalanguage$pandac$Position $tmp521 = (($fn520) base518->$class->vtable[3])(base518);
            $returnValue321 = $tmp521;
            $tmp314 = 32;
            goto $l312;
            $l522:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp524, 34);
        panda$core$Bit $tmp525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp524);
        if ($tmp525.value) {
        {
            org$pandalanguage$pandac$Position* $tmp527 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position526 = *$tmp527;
            $returnValue321 = position526;
            $tmp314 = 33;
            goto $l312;
            $l528:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp530, 35);
        panda$core$Bit $tmp531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp530);
        if ($tmp531.value) {
        {
            org$pandalanguage$pandac$Position* $tmp533 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position532 = *$tmp533;
            $returnValue321 = position532;
            $tmp314 = 34;
            goto $l312;
            $l534:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp536, 36);
        panda$core$Bit $tmp537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp536);
        if ($tmp537.value) {
        {
            org$pandalanguage$pandac$Position* $tmp539 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position538 = *$tmp539;
            $returnValue321 = position538;
            $tmp314 = 35;
            goto $l312;
            $l540:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp542, 37);
        panda$core$Bit $tmp543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp542);
        if ($tmp543.value) {
        {
            org$pandalanguage$pandac$Position* $tmp545 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position544 = *$tmp545;
            $returnValue321 = position544;
            $tmp314 = 36;
            goto $l312;
            $l546:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp548, 38);
        panda$core$Bit $tmp549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp548);
        if ($tmp549.value) {
        {
            org$pandalanguage$pandac$Position* $tmp551 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position550 = *$tmp551;
            $returnValue321 = position550;
            $tmp314 = 37;
            goto $l312;
            $l552:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp554, 39);
        panda$core$Bit $tmp555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp554);
        if ($tmp555.value) {
        {
            org$pandalanguage$pandac$Position* $tmp557 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position556 = *$tmp557;
            $returnValue321 = position556;
            $tmp314 = 38;
            goto $l312;
            $l558:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp560, 40);
        panda$core$Bit $tmp561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp560);
        if ($tmp561.value) {
        {
            org$pandalanguage$pandac$Position* $tmp563 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position562 = *$tmp563;
            $returnValue321 = position562;
            $tmp314 = 39;
            goto $l312;
            $l564:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp566, 41);
        panda$core$Bit $tmp567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp566);
        if ($tmp567.value) {
        {
            org$pandalanguage$pandac$Position* $tmp569 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position568 = *$tmp569;
            $returnValue321 = position568;
            $tmp314 = 40;
            goto $l312;
            $l570:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp572, 42);
        panda$core$Bit $tmp573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp572);
        if ($tmp573.value) {
        {
            org$pandalanguage$pandac$Position* $tmp575 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position574 = *$tmp575;
            $returnValue321 = position574;
            $tmp314 = 41;
            goto $l312;
            $l576:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp578, 43);
        panda$core$Bit $tmp579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp578);
        if ($tmp579.value) {
        {
            org$pandalanguage$pandac$Position* $tmp581 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position580 = *$tmp581;
            $returnValue321 = position580;
            $tmp314 = 42;
            goto $l312;
            $l582:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp584, 44);
        panda$core$Bit $tmp585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp584);
        if ($tmp585.value) {
        {
            org$pandalanguage$pandac$Position* $tmp587 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position586 = *$tmp587;
            $returnValue321 = position586;
            $tmp314 = 43;
            goto $l312;
            $l588:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp590, 45);
        panda$core$Bit $tmp591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp590);
        if ($tmp591.value) {
        {
            org$pandalanguage$pandac$Position* $tmp593 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position592 = *$tmp593;
            $returnValue321 = position592;
            $tmp314 = 44;
            goto $l312;
            $l594:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp596, 46);
        panda$core$Bit $tmp597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp596);
        if ($tmp597.value) {
        {
            org$pandalanguage$pandac$Position* $tmp599 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position598 = *$tmp599;
            $returnValue321 = position598;
            $tmp314 = 45;
            goto $l312;
            $l600:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp602, 47);
        panda$core$Bit $tmp603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp602);
        if ($tmp603.value) {
        {
            org$pandalanguage$pandac$Position* $tmp605 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position604 = *$tmp605;
            $returnValue321 = position604;
            $tmp314 = 46;
            goto $l312;
            $l606:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp608, 48);
        panda$core$Bit $tmp609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp608);
        if ($tmp609.value) {
        {
            org$pandalanguage$pandac$Position* $tmp611 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position610 = *$tmp611;
            $returnValue321 = position610;
            $tmp314 = 47;
            goto $l312;
            $l612:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp614, 49);
        panda$core$Bit $tmp615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp614);
        if ($tmp615.value) {
        {
            org$pandalanguage$pandac$Position* $tmp617 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position616 = *$tmp617;
            $returnValue321 = position616;
            $tmp314 = 48;
            goto $l312;
            $l618:;
            return $returnValue321;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp620, 50);
        panda$core$Bit $tmp621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9315->$rawValue, $tmp620);
        if ($tmp621.value) {
        {
            org$pandalanguage$pandac$Position* $tmp623 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9315->$data + 0));
            position622 = *$tmp623;
            $returnValue321 = position622;
            $tmp314 = 49;
            goto $l312;
            $l624:;
            return $returnValue321;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp626, false);
            if ($tmp626.value) goto $l627; else goto $l628;
            $l628:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s629, (panda$core$Int64) { 258 });
            abort();
            $l627:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp314 = -1;
    goto $l312;
    $l312:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp316));
    switch ($tmp314) {
        case 16: goto $l424;
        case 10: goto $l382;
        case 39: goto $l564;
        case 44: goto $l594;
        case 37: goto $l552;
        case 9: goto $l376;
        case 32: goto $l522;
        case 36: goto $l546;
        case 12: goto $l394;
        case 17: goto $l430;
        case 8: goto $l370;
        case 43: goto $l588;
        case 2: goto $l334;
        case 0: goto $l322;
        case -1: goto $l630;
        case 27: goto $l490;
        case 1: goto $l328;
        case 35: goto $l540;
        case 15: goto $l416;
        case 25: goto $l478;
        case 45: goto $l600;
        case 19: goto $l442;
        case 21: goto $l454;
        case 14: goto $l408;
        case 26: goto $l484;
        case 18: goto $l436;
        case 3: goto $l340;
        case 34: goto $l534;
        case 5: goto $l352;
        case 4: goto $l346;
        case 22: goto $l460;
        case 20: goto $l448;
        case 33: goto $l528;
        case 47: goto $l612;
        case 31: goto $l514;
        case 46: goto $l606;
        case 6: goto $l358;
        case 40: goto $l570;
        case 30: goto $l508;
        case 11: goto $l388;
        case 13: goto $l402;
        case 29: goto $l502;
        case 7: goto $l364;
        case 24: goto $l472;
        case 41: goto $l576;
        case 48: goto $l618;
        case 38: goto $l558;
        case 28: goto $l496;
        case 42: goto $l582;
        case 49: goto $l624;
        case 23: goto $l466;
    }
    $l630:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$263_9634 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp635;
    panda$core$Int64 $tmp636;
    org$pandalanguage$pandac$IRNode* test638 = NULL;
    org$pandalanguage$pandac$IRNode* msg640 = NULL;
    panda$core$Bit $returnValue642;
    panda$core$Int64 $tmp652;
    panda$core$Bit $tmp654;
    panda$core$Int64 $tmp657;
    org$pandalanguage$pandac$IRNode* left659 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op661;
    org$pandalanguage$pandac$IRNode* right663 = NULL;
    panda$core$Int64 $tmp678;
    panda$core$Bit $tmp680;
    panda$core$Int64 $tmp683;
    panda$collections$ImmutableArray* statements685 = NULL;
    panda$collections$Iterator* Iter$273$17690 = NULL;
    panda$collections$Iterator* $tmp691;
    panda$collections$Iterator* $tmp692;
    org$pandalanguage$pandac$IRNode* s708 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp709;
    panda$core$Object* $tmp710;
    panda$core$Bit $tmp717;
    panda$core$Bit $tmp724;
    panda$core$Int64 $tmp727;
    panda$core$Bit $tmp729;
    panda$core$Int64 $tmp732;
    org$pandalanguage$pandac$MethodRef* m734 = NULL;
    panda$collections$ImmutableArray* args736 = NULL;
    panda$core$Int64 $tmp738;
    panda$core$Bit $tmp740;
    panda$collections$Iterator* Iter$285$17746 = NULL;
    panda$collections$Iterator* $tmp747;
    panda$collections$Iterator* $tmp748;
    org$pandalanguage$pandac$IRNode* arg764 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp765;
    panda$core$Object* $tmp766;
    panda$core$Bit $tmp773;
    panda$core$Bit $tmp780;
    panda$core$Int64 $tmp783;
    panda$core$Bit $tmp785;
    panda$core$Int64 $tmp788;
    panda$core$Bit $tmp790;
    panda$core$Int64 $tmp793;
    panda$core$Bit $tmp795;
    panda$core$Int64 $tmp798;
    org$pandalanguage$pandac$Type* type800 = NULL;
    org$pandalanguage$pandac$IRNode* call802 = NULL;
    panda$core$Int64 $tmp808;
    panda$core$Bit $tmp810;
    panda$core$Int64 $tmp813;
    panda$core$Bit $tmp815;
    panda$core$Int64 $tmp818;
    org$pandalanguage$pandac$IRNode* target820 = NULL;
    org$pandalanguage$pandac$IRNode* value822 = NULL;
    panda$core$Int64 $tmp831;
    panda$core$String* label833 = NULL;
    panda$collections$ImmutableArray* statements835 = NULL;
    org$pandalanguage$pandac$IRNode* test837 = NULL;
    panda$core$Bit $tmp841;
    panda$collections$Iterator* Iter$309$17847 = NULL;
    panda$collections$Iterator* $tmp848;
    panda$collections$Iterator* $tmp849;
    org$pandalanguage$pandac$IRNode* s865 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp866;
    panda$core$Object* $tmp867;
    panda$core$Bit $tmp874;
    panda$core$Bit $tmp881;
    panda$core$Int64 $tmp884;
    panda$core$Bit $tmp886;
    panda$core$Int64 $tmp889;
    panda$core$Bit $tmp891;
    panda$core$Int64 $tmp894;
    org$pandalanguage$pandac$IRNode* test896 = NULL;
    panda$collections$ImmutableArray* ifTrue898 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse900 = NULL;
    panda$core$Bit $tmp904;
    panda$collections$Iterator* Iter$323$17910 = NULL;
    panda$collections$Iterator* $tmp911;
    panda$collections$Iterator* $tmp912;
    org$pandalanguage$pandac$IRNode* s928 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp929;
    panda$core$Object* $tmp930;
    panda$core$Bit $tmp937;
    panda$core$Int64 $tmp948;
    panda$core$Bit $tmp950;
    panda$core$Int64 $tmp953;
    org$pandalanguage$pandac$IRNode* value955 = NULL;
    panda$core$Int64 $tmp961;
    org$pandalanguage$pandac$IRNode* value963 = NULL;
    panda$core$Int64 $tmp969;
    panda$core$String* label971 = NULL;
    panda$collections$ImmutableArray* statements973 = NULL;
    panda$collections$Iterator* Iter$336$17978 = NULL;
    panda$collections$Iterator* $tmp979;
    panda$collections$Iterator* $tmp980;
    org$pandalanguage$pandac$IRNode* s996 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp997;
    panda$core$Object* $tmp998;
    panda$core$Bit $tmp1005;
    panda$core$Bit $tmp1012;
    panda$core$Int64 $tmp1015;
    org$pandalanguage$pandac$IRNode* value1017 = NULL;
    panda$collections$ImmutableArray* whens1019 = NULL;
    panda$collections$ImmutableArray* other1021 = NULL;
    panda$core$Bit $tmp1025;
    panda$collections$Iterator* Iter$346$171031 = NULL;
    panda$collections$Iterator* $tmp1032;
    panda$collections$Iterator* $tmp1033;
    org$pandalanguage$pandac$IRNode* w1049 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1050;
    panda$core$Object* $tmp1051;
    panda$core$Bit $tmp1058;
    panda$collections$Iterator* Iter$351$171068 = NULL;
    panda$collections$Iterator* $tmp1069;
    panda$collections$Iterator* $tmp1070;
    org$pandalanguage$pandac$IRNode* s1086 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1087;
    panda$core$Object* $tmp1088;
    panda$core$Bit $tmp1095;
    panda$core$Bit $tmp1102;
    panda$core$Int64 $tmp1105;
    panda$core$Bit $tmp1107;
    panda$core$Int64 $tmp1110;
    panda$core$Bit $tmp1112;
    panda$core$Int64 $tmp1115;
    panda$core$Bit $tmp1117;
    panda$core$Int64 $tmp1120;
    org$pandalanguage$pandac$IRNode* base1122 = NULL;
    panda$core$Int64 $tmp1128;
    org$pandalanguage$pandac$IRNode* list1130 = NULL;
    panda$collections$ImmutableArray* statements1132 = NULL;
    panda$core$Bit $tmp1136;
    panda$collections$Iterator* Iter$370$171142 = NULL;
    panda$collections$Iterator* $tmp1143;
    panda$collections$Iterator* $tmp1144;
    org$pandalanguage$pandac$IRNode* s1160 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1161;
    panda$core$Object* $tmp1162;
    panda$core$Bit $tmp1169;
    panda$core$Bit $tmp1176;
    panda$core$Int64 $tmp1179;
    panda$core$Bit $tmp1181;
    panda$core$Int64 $tmp1184;
    org$pandalanguage$pandac$IRNode* value1186 = NULL;
    panda$core$Int64 $tmp1192;
    panda$core$Bit $tmp1194;
    panda$core$Int64 $tmp1197;
    org$pandalanguage$pandac$IRNode* base1199 = NULL;
    panda$core$Int64 $tmp1205;
    panda$core$Bit $tmp1207;
    panda$core$Int64 $tmp1210;
    panda$core$Bit $tmp1212;
    panda$core$Int64 $tmp1215;
    panda$core$Bit $tmp1217;
    panda$core$Int64 $tmp1220;
    panda$core$Bit $tmp1222;
    panda$core$Int64 $tmp1225;
    org$pandalanguage$pandac$IRNode* test1227 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue1229 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse1231 = NULL;
    panda$core$Int64 $tmp1247;
    panda$core$Bit $tmp1249;
    panda$core$Int64 $tmp1252;
    panda$core$Bit $tmp1254;
    panda$core$Int64 $tmp1258;
    panda$core$Bit $tmp1260;
    panda$core$Int64 $tmp1264;
    panda$core$Bit $tmp1266;
    panda$core$Int64 $tmp1270;
    panda$core$Bit $tmp1272;
    panda$core$Int64 $tmp1276;
    panda$core$Bit $tmp1278;
    panda$core$Int64 $tmp1282;
    panda$core$Bit $tmp1284;
    panda$core$Int64 $tmp1288;
    panda$collections$ImmutableArray* decls1290 = NULL;
    panda$collections$Iterator* Iter$409$171295 = NULL;
    panda$collections$Iterator* $tmp1296;
    panda$collections$Iterator* $tmp1297;
    org$pandalanguage$pandac$IRNode* d1313 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1314;
    panda$core$Object* $tmp1315;
    panda$core$Bit $tmp1322;
    panda$core$Bit $tmp1329;
    panda$core$Int64 $tmp1332;
    panda$core$Bit $tmp1334;
    panda$core$Int64 $tmp1337;
    panda$core$Bit $tmp1339;
    panda$core$Int64 $tmp1342;
    panda$collections$ImmutableArray* tests1344 = NULL;
    panda$collections$ImmutableArray* statements1346 = NULL;
    panda$collections$Iterator* Iter$420$171351 = NULL;
    panda$collections$Iterator* $tmp1352;
    panda$collections$Iterator* $tmp1353;
    org$pandalanguage$pandac$IRNode* t1369 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1370;
    panda$core$Object* $tmp1371;
    panda$core$Bit $tmp1378;
    panda$collections$Iterator* Iter$425$171388 = NULL;
    panda$collections$Iterator* $tmp1389;
    panda$collections$Iterator* $tmp1390;
    org$pandalanguage$pandac$IRNode* s1406 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1407;
    panda$core$Object* $tmp1408;
    panda$core$Bit $tmp1415;
    panda$core$Bit $tmp1422;
    panda$core$Int64 $tmp1425;
    org$pandalanguage$pandac$IRNode* test1427 = NULL;
    panda$collections$ImmutableArray* statements1429 = NULL;
    panda$core$Bit $tmp1433;
    panda$collections$Iterator* Iter$435$171439 = NULL;
    panda$collections$Iterator* $tmp1440;
    panda$collections$Iterator* $tmp1441;
    org$pandalanguage$pandac$IRNode* s1457 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1458;
    panda$core$Object* $tmp1459;
    panda$core$Bit $tmp1466;
    panda$core$Bit $tmp1473;
    panda$core$Bit $tmp1476;
    int $tmp633;
    {
        $tmp635 = self;
        $match$263_9634 = $tmp635;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp635));
        panda$core$Int64$init$builtin_int64(&$tmp636, 0);
        panda$core$Bit $tmp637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp636);
        if ($tmp637.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp639 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 16));
            test638 = *$tmp639;
            org$pandalanguage$pandac$IRNode** $tmp641 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 24));
            msg640 = *$tmp641;
            panda$core$Bit $tmp645 = (($fn644) test638->$class->vtable[4])(test638);
            bool $tmp643 = $tmp645.value;
            if ($tmp643) goto $l646;
            panda$core$Bit $tmp648 = (($fn647) msg640->$class->vtable[4])(msg640);
            $tmp643 = $tmp648.value;
            $l646:;
            panda$core$Bit $tmp649 = { $tmp643 };
            $returnValue642 = $tmp649;
            $tmp633 = 0;
            goto $l631;
            $l650:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp652, 1);
        panda$core$Bit $tmp653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp652);
        if ($tmp653.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp654, false);
            $returnValue642 = $tmp654;
            $tmp633 = 1;
            goto $l631;
            $l655:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp657, 2);
        panda$core$Bit $tmp658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp657);
        if ($tmp658.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp660 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 24));
            left659 = *$tmp660;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp662 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$263_9634->$data + 32));
            op661 = *$tmp662;
            org$pandalanguage$pandac$IRNode** $tmp664 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 40));
            right663 = *$tmp664;
            panda$core$Bit $tmp667 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(op661);
            bool $tmp666 = $tmp667.value;
            if ($tmp666) goto $l668;
            panda$core$Bit $tmp670 = (($fn669) left659->$class->vtable[4])(left659);
            $tmp666 = $tmp670.value;
            $l668:;
            panda$core$Bit $tmp671 = { $tmp666 };
            bool $tmp665 = $tmp671.value;
            if ($tmp665) goto $l672;
            panda$core$Bit $tmp674 = (($fn673) right663->$class->vtable[4])(right663);
            $tmp665 = $tmp674.value;
            $l672:;
            panda$core$Bit $tmp675 = { $tmp665 };
            $returnValue642 = $tmp675;
            $tmp633 = 2;
            goto $l631;
            $l676:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp678, 3);
        panda$core$Bit $tmp679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp678);
        if ($tmp679.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp680, false);
            $returnValue642 = $tmp680;
            $tmp633 = 3;
            goto $l631;
            $l681:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp683, 4);
        panda$core$Bit $tmp684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp683);
        if ($tmp684.value) {
        {
            panda$collections$ImmutableArray** $tmp686 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9634->$data + 16));
            statements685 = *$tmp686;
            {
                int $tmp689;
                {
                    ITable* $tmp693 = ((panda$collections$Iterable*) statements685)->$class->itable;
                    while ($tmp693->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp693 = $tmp693->next;
                    }
                    $fn695 $tmp694 = $tmp693->methods[0];
                    panda$collections$Iterator* $tmp696 = $tmp694(((panda$collections$Iterable*) statements685));
                    $tmp692 = $tmp696;
                    $tmp691 = $tmp692;
                    Iter$273$17690 = $tmp691;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp691));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp692));
                    $l697:;
                    ITable* $tmp700 = Iter$273$17690->$class->itable;
                    while ($tmp700->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp700 = $tmp700->next;
                    }
                    $fn702 $tmp701 = $tmp700->methods[0];
                    panda$core$Bit $tmp703 = $tmp701(Iter$273$17690);
                    panda$core$Bit $tmp704 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp703);
                    bool $tmp699 = $tmp704.value;
                    if (!$tmp699) goto $l698;
                    {
                        int $tmp707;
                        {
                            ITable* $tmp711 = Iter$273$17690->$class->itable;
                            while ($tmp711->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp711 = $tmp711->next;
                            }
                            $fn713 $tmp712 = $tmp711->methods[1];
                            panda$core$Object* $tmp714 = $tmp712(Iter$273$17690);
                            $tmp710 = $tmp714;
                            $tmp709 = ((org$pandalanguage$pandac$IRNode*) $tmp710);
                            s708 = $tmp709;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp709));
                            panda$core$Panda$unref$panda$core$Object($tmp710);
                            panda$core$Bit $tmp716 = (($fn715) s708->$class->vtable[4])(s708);
                            if ($tmp716.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp717, true);
                                $returnValue642 = $tmp717;
                                $tmp707 = 0;
                                goto $l705;
                                $l718:;
                                $tmp689 = 0;
                                goto $l687;
                                $l719:;
                                $tmp633 = 4;
                                goto $l631;
                                $l720:;
                                return $returnValue642;
                            }
                            }
                        }
                        $tmp707 = -1;
                        goto $l705;
                        $l705:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s708));
                        s708 = NULL;
                        switch ($tmp707) {
                            case 0: goto $l718;
                            case -1: goto $l722;
                        }
                        $l722:;
                    }
                    goto $l697;
                    $l698:;
                }
                $tmp689 = -1;
                goto $l687;
                $l687:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$273$17690));
                Iter$273$17690 = NULL;
                switch ($tmp689) {
                    case 0: goto $l719;
                    case -1: goto $l723;
                }
                $l723:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp724, false);
            $returnValue642 = $tmp724;
            $tmp633 = 5;
            goto $l631;
            $l725:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp727, 6);
        panda$core$Bit $tmp728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp727);
        if ($tmp728.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp729, false);
            $returnValue642 = $tmp729;
            $tmp633 = 6;
            goto $l631;
            $l730:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp732, 7);
        panda$core$Bit $tmp733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp732);
        if ($tmp733.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp735 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$263_9634->$data + 24));
            m734 = *$tmp735;
            panda$collections$ImmutableArray** $tmp737 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9634->$data + 32));
            args736 = *$tmp737;
            panda$core$Int64$init$builtin_int64(&$tmp738, 0);
            panda$core$Bit $tmp739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m734->value->methodKind.$rawValue, $tmp738);
            if ($tmp739.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp740, true);
                $returnValue642 = $tmp740;
                $tmp633 = 7;
                goto $l631;
                $l741:;
                return $returnValue642;
            }
            }
            {
                int $tmp745;
                {
                    ITable* $tmp749 = ((panda$collections$Iterable*) args736)->$class->itable;
                    while ($tmp749->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp749 = $tmp749->next;
                    }
                    $fn751 $tmp750 = $tmp749->methods[0];
                    panda$collections$Iterator* $tmp752 = $tmp750(((panda$collections$Iterable*) args736));
                    $tmp748 = $tmp752;
                    $tmp747 = $tmp748;
                    Iter$285$17746 = $tmp747;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp747));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp748));
                    $l753:;
                    ITable* $tmp756 = Iter$285$17746->$class->itable;
                    while ($tmp756->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp756 = $tmp756->next;
                    }
                    $fn758 $tmp757 = $tmp756->methods[0];
                    panda$core$Bit $tmp759 = $tmp757(Iter$285$17746);
                    panda$core$Bit $tmp760 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp759);
                    bool $tmp755 = $tmp760.value;
                    if (!$tmp755) goto $l754;
                    {
                        int $tmp763;
                        {
                            ITable* $tmp767 = Iter$285$17746->$class->itable;
                            while ($tmp767->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp767 = $tmp767->next;
                            }
                            $fn769 $tmp768 = $tmp767->methods[1];
                            panda$core$Object* $tmp770 = $tmp768(Iter$285$17746);
                            $tmp766 = $tmp770;
                            $tmp765 = ((org$pandalanguage$pandac$IRNode*) $tmp766);
                            arg764 = $tmp765;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp765));
                            panda$core$Panda$unref$panda$core$Object($tmp766);
                            panda$core$Bit $tmp772 = (($fn771) arg764->$class->vtable[4])(arg764);
                            if ($tmp772.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp773, true);
                                $returnValue642 = $tmp773;
                                $tmp763 = 0;
                                goto $l761;
                                $l774:;
                                $tmp745 = 0;
                                goto $l743;
                                $l775:;
                                $tmp633 = 8;
                                goto $l631;
                                $l776:;
                                return $returnValue642;
                            }
                            }
                        }
                        $tmp763 = -1;
                        goto $l761;
                        $l761:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg764));
                        arg764 = NULL;
                        switch ($tmp763) {
                            case 0: goto $l774;
                            case -1: goto $l778;
                        }
                        $l778:;
                    }
                    goto $l753;
                    $l754:;
                }
                $tmp745 = -1;
                goto $l743;
                $l743:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$285$17746));
                Iter$285$17746 = NULL;
                switch ($tmp745) {
                    case -1: goto $l779;
                    case 0: goto $l775;
                }
                $l779:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp780, false);
            $returnValue642 = $tmp780;
            $tmp633 = 9;
            goto $l631;
            $l781:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp783, 8);
        panda$core$Bit $tmp784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp783);
        if ($tmp784.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp785, false);
            $returnValue642 = $tmp785;
            $tmp633 = 10;
            goto $l631;
            $l786:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp788, 9);
        panda$core$Bit $tmp789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp788);
        if ($tmp789.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp790, false);
            $returnValue642 = $tmp790;
            $tmp633 = 11;
            goto $l631;
            $l791:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp793, 10);
        panda$core$Bit $tmp794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp793);
        if ($tmp794.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp795, false);
            $returnValue642 = $tmp795;
            $tmp633 = 12;
            goto $l631;
            $l796:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp798, 11);
        panda$core$Bit $tmp799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp798);
        if ($tmp799.value) {
        {
            org$pandalanguage$pandac$Type** $tmp801 = ((org$pandalanguage$pandac$Type**) ((char*) $match$263_9634->$data + 16));
            type800 = *$tmp801;
            org$pandalanguage$pandac$IRNode** $tmp803 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 24));
            call802 = *$tmp803;
            panda$core$Bit $tmp805 = (($fn804) call802->$class->vtable[4])(call802);
            $returnValue642 = $tmp805;
            $tmp633 = 13;
            goto $l631;
            $l806:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp808, 12);
        panda$core$Bit $tmp809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp808);
        if ($tmp809.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp810, false);
            $returnValue642 = $tmp810;
            $tmp633 = 14;
            goto $l631;
            $l811:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp813, 13);
        panda$core$Bit $tmp814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp813);
        if ($tmp814.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp815, false);
            $returnValue642 = $tmp815;
            $tmp633 = 15;
            goto $l631;
            $l816:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp818, 14);
        panda$core$Bit $tmp819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp818);
        if ($tmp819.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp821 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 0));
            target820 = *$tmp821;
            org$pandalanguage$pandac$IRNode** $tmp823 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 8));
            value822 = *$tmp823;
            bool $tmp824 = ((panda$core$Bit) { value822 != NULL }).value;
            if (!$tmp824) goto $l825;
            panda$core$Bit $tmp827 = (($fn826) value822->$class->vtable[4])(value822);
            $tmp824 = $tmp827.value;
            $l825:;
            panda$core$Bit $tmp828 = { $tmp824 };
            $returnValue642 = $tmp828;
            $tmp633 = 16;
            goto $l631;
            $l829:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp831, 15);
        panda$core$Bit $tmp832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp831);
        if ($tmp832.value) {
        {
            panda$core$String** $tmp834 = ((panda$core$String**) ((char*) $match$263_9634->$data + 16));
            label833 = *$tmp834;
            panda$collections$ImmutableArray** $tmp836 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9634->$data + 24));
            statements835 = *$tmp836;
            org$pandalanguage$pandac$IRNode** $tmp838 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 32));
            test837 = *$tmp838;
            panda$core$Bit $tmp840 = (($fn839) test837->$class->vtable[4])(test837);
            if ($tmp840.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp841, true);
                $returnValue642 = $tmp841;
                $tmp633 = 17;
                goto $l631;
                $l842:;
                return $returnValue642;
            }
            }
            {
                int $tmp846;
                {
                    ITable* $tmp850 = ((panda$collections$Iterable*) statements835)->$class->itable;
                    while ($tmp850->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp850 = $tmp850->next;
                    }
                    $fn852 $tmp851 = $tmp850->methods[0];
                    panda$collections$Iterator* $tmp853 = $tmp851(((panda$collections$Iterable*) statements835));
                    $tmp849 = $tmp853;
                    $tmp848 = $tmp849;
                    Iter$309$17847 = $tmp848;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp848));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp849));
                    $l854:;
                    ITable* $tmp857 = Iter$309$17847->$class->itable;
                    while ($tmp857->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp857 = $tmp857->next;
                    }
                    $fn859 $tmp858 = $tmp857->methods[0];
                    panda$core$Bit $tmp860 = $tmp858(Iter$309$17847);
                    panda$core$Bit $tmp861 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp860);
                    bool $tmp856 = $tmp861.value;
                    if (!$tmp856) goto $l855;
                    {
                        int $tmp864;
                        {
                            ITable* $tmp868 = Iter$309$17847->$class->itable;
                            while ($tmp868->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp868 = $tmp868->next;
                            }
                            $fn870 $tmp869 = $tmp868->methods[1];
                            panda$core$Object* $tmp871 = $tmp869(Iter$309$17847);
                            $tmp867 = $tmp871;
                            $tmp866 = ((org$pandalanguage$pandac$IRNode*) $tmp867);
                            s865 = $tmp866;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp866));
                            panda$core$Panda$unref$panda$core$Object($tmp867);
                            panda$core$Bit $tmp873 = (($fn872) s865->$class->vtable[4])(s865);
                            if ($tmp873.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp874, true);
                                $returnValue642 = $tmp874;
                                $tmp864 = 0;
                                goto $l862;
                                $l875:;
                                $tmp846 = 0;
                                goto $l844;
                                $l876:;
                                $tmp633 = 18;
                                goto $l631;
                                $l877:;
                                return $returnValue642;
                            }
                            }
                        }
                        $tmp864 = -1;
                        goto $l862;
                        $l862:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s865));
                        s865 = NULL;
                        switch ($tmp864) {
                            case -1: goto $l879;
                            case 0: goto $l875;
                        }
                        $l879:;
                    }
                    goto $l854;
                    $l855:;
                }
                $tmp846 = -1;
                goto $l844;
                $l844:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$309$17847));
                Iter$309$17847 = NULL;
                switch ($tmp846) {
                    case 0: goto $l876;
                    case -1: goto $l880;
                }
                $l880:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp881, false);
            $returnValue642 = $tmp881;
            $tmp633 = 19;
            goto $l631;
            $l882:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp884, 17);
        panda$core$Bit $tmp885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp884);
        if ($tmp885.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp886, true);
            $returnValue642 = $tmp886;
            $tmp633 = 20;
            goto $l631;
            $l887:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp889, 18);
        panda$core$Bit $tmp890 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp889);
        if ($tmp890.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp891, false);
            $returnValue642 = $tmp891;
            $tmp633 = 21;
            goto $l631;
            $l892:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp894, 19);
        panda$core$Bit $tmp895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp894);
        if ($tmp895.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp897 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 16));
            test896 = *$tmp897;
            panda$collections$ImmutableArray** $tmp899 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9634->$data + 24));
            ifTrue898 = *$tmp899;
            org$pandalanguage$pandac$IRNode** $tmp901 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 32));
            ifFalse900 = *$tmp901;
            panda$core$Bit $tmp903 = (($fn902) test896->$class->vtable[4])(test896);
            if ($tmp903.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp904, true);
                $returnValue642 = $tmp904;
                $tmp633 = 22;
                goto $l631;
                $l905:;
                return $returnValue642;
            }
            }
            {
                int $tmp909;
                {
                    ITable* $tmp913 = ((panda$collections$Iterable*) ifTrue898)->$class->itable;
                    while ($tmp913->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp913 = $tmp913->next;
                    }
                    $fn915 $tmp914 = $tmp913->methods[0];
                    panda$collections$Iterator* $tmp916 = $tmp914(((panda$collections$Iterable*) ifTrue898));
                    $tmp912 = $tmp916;
                    $tmp911 = $tmp912;
                    Iter$323$17910 = $tmp911;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp911));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp912));
                    $l917:;
                    ITable* $tmp920 = Iter$323$17910->$class->itable;
                    while ($tmp920->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp920 = $tmp920->next;
                    }
                    $fn922 $tmp921 = $tmp920->methods[0];
                    panda$core$Bit $tmp923 = $tmp921(Iter$323$17910);
                    panda$core$Bit $tmp924 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp923);
                    bool $tmp919 = $tmp924.value;
                    if (!$tmp919) goto $l918;
                    {
                        int $tmp927;
                        {
                            ITable* $tmp931 = Iter$323$17910->$class->itable;
                            while ($tmp931->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp931 = $tmp931->next;
                            }
                            $fn933 $tmp932 = $tmp931->methods[1];
                            panda$core$Object* $tmp934 = $tmp932(Iter$323$17910);
                            $tmp930 = $tmp934;
                            $tmp929 = ((org$pandalanguage$pandac$IRNode*) $tmp930);
                            s928 = $tmp929;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp929));
                            panda$core$Panda$unref$panda$core$Object($tmp930);
                            panda$core$Bit $tmp936 = (($fn935) s928->$class->vtable[4])(s928);
                            if ($tmp936.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp937, true);
                                $returnValue642 = $tmp937;
                                $tmp927 = 0;
                                goto $l925;
                                $l938:;
                                $tmp909 = 0;
                                goto $l907;
                                $l939:;
                                $tmp633 = 23;
                                goto $l631;
                                $l940:;
                                return $returnValue642;
                            }
                            }
                        }
                        $tmp927 = -1;
                        goto $l925;
                        $l925:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s928));
                        s928 = NULL;
                        switch ($tmp927) {
                            case -1: goto $l942;
                            case 0: goto $l938;
                        }
                        $l942:;
                    }
                    goto $l917;
                    $l918:;
                }
                $tmp909 = -1;
                goto $l907;
                $l907:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$323$17910));
                Iter$323$17910 = NULL;
                switch ($tmp909) {
                    case 0: goto $l939;
                    case -1: goto $l943;
                }
                $l943:;
            }
            panda$core$Bit $tmp945 = (($fn944) ifFalse900->$class->vtable[4])(ifFalse900);
            $returnValue642 = $tmp945;
            $tmp633 = 24;
            goto $l631;
            $l946:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp948, 20);
        panda$core$Bit $tmp949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp948);
        if ($tmp949.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp950, false);
            $returnValue642 = $tmp950;
            $tmp633 = 25;
            goto $l631;
            $l951:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp953, 21);
        panda$core$Bit $tmp954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp953);
        if ($tmp954.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp956 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 16));
            value955 = *$tmp956;
            panda$core$Bit $tmp958 = (($fn957) value955->$class->vtable[4])(value955);
            $returnValue642 = $tmp958;
            $tmp633 = 26;
            goto $l631;
            $l959:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp961, 22);
        panda$core$Bit $tmp962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp961);
        if ($tmp962.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp964 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 16));
            value963 = *$tmp964;
            panda$core$Bit $tmp966 = (($fn965) value963->$class->vtable[4])(value963);
            $returnValue642 = $tmp966;
            $tmp633 = 27;
            goto $l631;
            $l967:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp969, 23);
        panda$core$Bit $tmp970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp969);
        if ($tmp970.value) {
        {
            panda$core$String** $tmp972 = ((panda$core$String**) ((char*) $match$263_9634->$data + 16));
            label971 = *$tmp972;
            panda$collections$ImmutableArray** $tmp974 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9634->$data + 24));
            statements973 = *$tmp974;
            {
                int $tmp977;
                {
                    ITable* $tmp981 = ((panda$collections$Iterable*) statements973)->$class->itable;
                    while ($tmp981->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp981 = $tmp981->next;
                    }
                    $fn983 $tmp982 = $tmp981->methods[0];
                    panda$collections$Iterator* $tmp984 = $tmp982(((panda$collections$Iterable*) statements973));
                    $tmp980 = $tmp984;
                    $tmp979 = $tmp980;
                    Iter$336$17978 = $tmp979;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp979));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp980));
                    $l985:;
                    ITable* $tmp988 = Iter$336$17978->$class->itable;
                    while ($tmp988->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp988 = $tmp988->next;
                    }
                    $fn990 $tmp989 = $tmp988->methods[0];
                    panda$core$Bit $tmp991 = $tmp989(Iter$336$17978);
                    panda$core$Bit $tmp992 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp991);
                    bool $tmp987 = $tmp992.value;
                    if (!$tmp987) goto $l986;
                    {
                        int $tmp995;
                        {
                            ITable* $tmp999 = Iter$336$17978->$class->itable;
                            while ($tmp999->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp999 = $tmp999->next;
                            }
                            $fn1001 $tmp1000 = $tmp999->methods[1];
                            panda$core$Object* $tmp1002 = $tmp1000(Iter$336$17978);
                            $tmp998 = $tmp1002;
                            $tmp997 = ((org$pandalanguage$pandac$IRNode*) $tmp998);
                            s996 = $tmp997;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp997));
                            panda$core$Panda$unref$panda$core$Object($tmp998);
                            panda$core$Bit $tmp1004 = (($fn1003) s996->$class->vtable[4])(s996);
                            if ($tmp1004.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1005, true);
                                $returnValue642 = $tmp1005;
                                $tmp995 = 0;
                                goto $l993;
                                $l1006:;
                                $tmp977 = 0;
                                goto $l975;
                                $l1007:;
                                $tmp633 = 28;
                                goto $l631;
                                $l1008:;
                                return $returnValue642;
                            }
                            }
                        }
                        $tmp995 = -1;
                        goto $l993;
                        $l993:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s996));
                        s996 = NULL;
                        switch ($tmp995) {
                            case 0: goto $l1006;
                            case -1: goto $l1010;
                        }
                        $l1010:;
                    }
                    goto $l985;
                    $l986:;
                }
                $tmp977 = -1;
                goto $l975;
                $l975:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$336$17978));
                Iter$336$17978 = NULL;
                switch ($tmp977) {
                    case -1: goto $l1011;
                    case 0: goto $l1007;
                }
                $l1011:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1012, false);
            $returnValue642 = $tmp1012;
            $tmp633 = 29;
            goto $l631;
            $l1013:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1015, 24);
        panda$core$Bit $tmp1016 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1015);
        if ($tmp1016.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1018 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 16));
            value1017 = *$tmp1018;
            panda$collections$ImmutableArray** $tmp1020 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9634->$data + 24));
            whens1019 = *$tmp1020;
            panda$collections$ImmutableArray** $tmp1022 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9634->$data + 32));
            other1021 = *$tmp1022;
            panda$core$Bit $tmp1024 = (($fn1023) value1017->$class->vtable[4])(value1017);
            if ($tmp1024.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1025, true);
                $returnValue642 = $tmp1025;
                $tmp633 = 30;
                goto $l631;
                $l1026:;
                return $returnValue642;
            }
            }
            {
                int $tmp1030;
                {
                    ITable* $tmp1034 = ((panda$collections$Iterable*) whens1019)->$class->itable;
                    while ($tmp1034->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1034 = $tmp1034->next;
                    }
                    $fn1036 $tmp1035 = $tmp1034->methods[0];
                    panda$collections$Iterator* $tmp1037 = $tmp1035(((panda$collections$Iterable*) whens1019));
                    $tmp1033 = $tmp1037;
                    $tmp1032 = $tmp1033;
                    Iter$346$171031 = $tmp1032;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1032));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1033));
                    $l1038:;
                    ITable* $tmp1041 = Iter$346$171031->$class->itable;
                    while ($tmp1041->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1041 = $tmp1041->next;
                    }
                    $fn1043 $tmp1042 = $tmp1041->methods[0];
                    panda$core$Bit $tmp1044 = $tmp1042(Iter$346$171031);
                    panda$core$Bit $tmp1045 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1044);
                    bool $tmp1040 = $tmp1045.value;
                    if (!$tmp1040) goto $l1039;
                    {
                        int $tmp1048;
                        {
                            ITable* $tmp1052 = Iter$346$171031->$class->itable;
                            while ($tmp1052->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1052 = $tmp1052->next;
                            }
                            $fn1054 $tmp1053 = $tmp1052->methods[1];
                            panda$core$Object* $tmp1055 = $tmp1053(Iter$346$171031);
                            $tmp1051 = $tmp1055;
                            $tmp1050 = ((org$pandalanguage$pandac$IRNode*) $tmp1051);
                            w1049 = $tmp1050;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1050));
                            panda$core$Panda$unref$panda$core$Object($tmp1051);
                            panda$core$Bit $tmp1057 = (($fn1056) w1049->$class->vtable[4])(w1049);
                            if ($tmp1057.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1058, true);
                                $returnValue642 = $tmp1058;
                                $tmp1048 = 0;
                                goto $l1046;
                                $l1059:;
                                $tmp1030 = 0;
                                goto $l1028;
                                $l1060:;
                                $tmp633 = 31;
                                goto $l631;
                                $l1061:;
                                return $returnValue642;
                            }
                            }
                        }
                        $tmp1048 = -1;
                        goto $l1046;
                        $l1046:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1049));
                        w1049 = NULL;
                        switch ($tmp1048) {
                            case -1: goto $l1063;
                            case 0: goto $l1059;
                        }
                        $l1063:;
                    }
                    goto $l1038;
                    $l1039:;
                }
                $tmp1030 = -1;
                goto $l1028;
                $l1028:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$346$171031));
                Iter$346$171031 = NULL;
                switch ($tmp1030) {
                    case 0: goto $l1060;
                    case -1: goto $l1064;
                }
                $l1064:;
            }
            {
                int $tmp1067;
                {
                    ITable* $tmp1071 = ((panda$collections$Iterable*) other1021)->$class->itable;
                    while ($tmp1071->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1071 = $tmp1071->next;
                    }
                    $fn1073 $tmp1072 = $tmp1071->methods[0];
                    panda$collections$Iterator* $tmp1074 = $tmp1072(((panda$collections$Iterable*) other1021));
                    $tmp1070 = $tmp1074;
                    $tmp1069 = $tmp1070;
                    Iter$351$171068 = $tmp1069;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1069));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1070));
                    $l1075:;
                    ITable* $tmp1078 = Iter$351$171068->$class->itable;
                    while ($tmp1078->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1078 = $tmp1078->next;
                    }
                    $fn1080 $tmp1079 = $tmp1078->methods[0];
                    panda$core$Bit $tmp1081 = $tmp1079(Iter$351$171068);
                    panda$core$Bit $tmp1082 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1081);
                    bool $tmp1077 = $tmp1082.value;
                    if (!$tmp1077) goto $l1076;
                    {
                        int $tmp1085;
                        {
                            ITable* $tmp1089 = Iter$351$171068->$class->itable;
                            while ($tmp1089->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1089 = $tmp1089->next;
                            }
                            $fn1091 $tmp1090 = $tmp1089->methods[1];
                            panda$core$Object* $tmp1092 = $tmp1090(Iter$351$171068);
                            $tmp1088 = $tmp1092;
                            $tmp1087 = ((org$pandalanguage$pandac$IRNode*) $tmp1088);
                            s1086 = $tmp1087;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1087));
                            panda$core$Panda$unref$panda$core$Object($tmp1088);
                            panda$core$Bit $tmp1094 = (($fn1093) s1086->$class->vtable[4])(s1086);
                            if ($tmp1094.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1095, true);
                                $returnValue642 = $tmp1095;
                                $tmp1085 = 0;
                                goto $l1083;
                                $l1096:;
                                $tmp1067 = 0;
                                goto $l1065;
                                $l1097:;
                                $tmp633 = 32;
                                goto $l631;
                                $l1098:;
                                return $returnValue642;
                            }
                            }
                        }
                        $tmp1085 = -1;
                        goto $l1083;
                        $l1083:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1086));
                        s1086 = NULL;
                        switch ($tmp1085) {
                            case 0: goto $l1096;
                            case -1: goto $l1100;
                        }
                        $l1100:;
                    }
                    goto $l1075;
                    $l1076:;
                }
                $tmp1067 = -1;
                goto $l1065;
                $l1065:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$351$171068));
                Iter$351$171068 = NULL;
                switch ($tmp1067) {
                    case -1: goto $l1101;
                    case 0: goto $l1097;
                }
                $l1101:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1102, false);
            $returnValue642 = $tmp1102;
            $tmp633 = 33;
            goto $l631;
            $l1103:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1105, 25);
        panda$core$Bit $tmp1106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1105);
        if ($tmp1106.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1107, false);
            $returnValue642 = $tmp1107;
            $tmp633 = 34;
            goto $l631;
            $l1108:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1110, 26);
        panda$core$Bit $tmp1111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1110);
        if ($tmp1111.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1112, false);
            $returnValue642 = $tmp1112;
            $tmp633 = 35;
            goto $l631;
            $l1113:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1115, 27);
        panda$core$Bit $tmp1116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1115);
        if ($tmp1116.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1117, false);
            $returnValue642 = $tmp1117;
            $tmp633 = 36;
            goto $l631;
            $l1118:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1120, 28);
        panda$core$Bit $tmp1121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1120);
        if ($tmp1121.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1123 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 24));
            base1122 = *$tmp1123;
            panda$core$Bit $tmp1125 = (($fn1124) base1122->$class->vtable[4])(base1122);
            $returnValue642 = $tmp1125;
            $tmp633 = 37;
            goto $l631;
            $l1126:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1128, 29);
        panda$core$Bit $tmp1129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1128);
        if ($tmp1129.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1131 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 32));
            list1130 = *$tmp1131;
            panda$collections$ImmutableArray** $tmp1133 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9634->$data + 40));
            statements1132 = *$tmp1133;
            panda$core$Bit $tmp1135 = (($fn1134) list1130->$class->vtable[4])(list1130);
            if ($tmp1135.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1136, true);
                $returnValue642 = $tmp1136;
                $tmp633 = 38;
                goto $l631;
                $l1137:;
                return $returnValue642;
            }
            }
            {
                int $tmp1141;
                {
                    ITable* $tmp1145 = ((panda$collections$Iterable*) statements1132)->$class->itable;
                    while ($tmp1145->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1145 = $tmp1145->next;
                    }
                    $fn1147 $tmp1146 = $tmp1145->methods[0];
                    panda$collections$Iterator* $tmp1148 = $tmp1146(((panda$collections$Iterable*) statements1132));
                    $tmp1144 = $tmp1148;
                    $tmp1143 = $tmp1144;
                    Iter$370$171142 = $tmp1143;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1143));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1144));
                    $l1149:;
                    ITable* $tmp1152 = Iter$370$171142->$class->itable;
                    while ($tmp1152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1152 = $tmp1152->next;
                    }
                    $fn1154 $tmp1153 = $tmp1152->methods[0];
                    panda$core$Bit $tmp1155 = $tmp1153(Iter$370$171142);
                    panda$core$Bit $tmp1156 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1155);
                    bool $tmp1151 = $tmp1156.value;
                    if (!$tmp1151) goto $l1150;
                    {
                        int $tmp1159;
                        {
                            ITable* $tmp1163 = Iter$370$171142->$class->itable;
                            while ($tmp1163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1163 = $tmp1163->next;
                            }
                            $fn1165 $tmp1164 = $tmp1163->methods[1];
                            panda$core$Object* $tmp1166 = $tmp1164(Iter$370$171142);
                            $tmp1162 = $tmp1166;
                            $tmp1161 = ((org$pandalanguage$pandac$IRNode*) $tmp1162);
                            s1160 = $tmp1161;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1161));
                            panda$core$Panda$unref$panda$core$Object($tmp1162);
                            panda$core$Bit $tmp1168 = (($fn1167) s1160->$class->vtable[4])(s1160);
                            if ($tmp1168.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1169, true);
                                $returnValue642 = $tmp1169;
                                $tmp1159 = 0;
                                goto $l1157;
                                $l1170:;
                                $tmp1141 = 0;
                                goto $l1139;
                                $l1171:;
                                $tmp633 = 39;
                                goto $l631;
                                $l1172:;
                                return $returnValue642;
                            }
                            }
                        }
                        $tmp1159 = -1;
                        goto $l1157;
                        $l1157:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1160));
                        s1160 = NULL;
                        switch ($tmp1159) {
                            case 0: goto $l1170;
                            case -1: goto $l1174;
                        }
                        $l1174:;
                    }
                    goto $l1149;
                    $l1150:;
                }
                $tmp1141 = -1;
                goto $l1139;
                $l1139:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$370$171142));
                Iter$370$171142 = NULL;
                switch ($tmp1141) {
                    case -1: goto $l1175;
                    case 0: goto $l1171;
                }
                $l1175:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1176, false);
            $returnValue642 = $tmp1176;
            $tmp633 = 40;
            goto $l631;
            $l1177:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1179, 30);
        panda$core$Bit $tmp1180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1179);
        if ($tmp1180.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1181, false);
            $returnValue642 = $tmp1181;
            $tmp633 = 41;
            goto $l631;
            $l1182:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1184, 31);
        panda$core$Bit $tmp1185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1184);
        if ($tmp1185.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1187 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 16));
            value1186 = *$tmp1187;
            panda$core$Bit $tmp1189 = (($fn1188) value1186->$class->vtable[4])(value1186);
            $returnValue642 = $tmp1189;
            $tmp633 = 42;
            goto $l631;
            $l1190:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1192, 32);
        panda$core$Bit $tmp1193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1192);
        if ($tmp1193.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1194, false);
            $returnValue642 = $tmp1194;
            $tmp633 = 43;
            goto $l631;
            $l1195:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1197, 33);
        panda$core$Bit $tmp1198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1197);
        if ($tmp1198.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1200 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 0));
            base1199 = *$tmp1200;
            panda$core$Bit $tmp1202 = (($fn1201) base1199->$class->vtable[4])(base1199);
            $returnValue642 = $tmp1202;
            $tmp633 = 44;
            goto $l631;
            $l1203:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1205, 34);
        panda$core$Bit $tmp1206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1205);
        if ($tmp1206.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1207, false);
            $returnValue642 = $tmp1207;
            $tmp633 = 45;
            goto $l631;
            $l1208:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1210, 35);
        panda$core$Bit $tmp1211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1210);
        if ($tmp1211.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1212, false);
            $returnValue642 = $tmp1212;
            $tmp633 = 46;
            goto $l631;
            $l1213:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1215, 36);
        panda$core$Bit $tmp1216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1215);
        if ($tmp1216.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1217, false);
            $returnValue642 = $tmp1217;
            $tmp633 = 47;
            goto $l631;
            $l1218:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1220, 37);
        panda$core$Bit $tmp1221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1220);
        if ($tmp1221.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1222, false);
            $returnValue642 = $tmp1222;
            $tmp633 = 48;
            goto $l631;
            $l1223:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1225, 38);
        panda$core$Bit $tmp1226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1225);
        if ($tmp1226.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1228 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 16));
            test1227 = *$tmp1228;
            org$pandalanguage$pandac$IRNode** $tmp1230 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 24));
            ifTrue1229 = *$tmp1230;
            org$pandalanguage$pandac$IRNode** $tmp1232 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 32));
            ifFalse1231 = *$tmp1232;
            panda$core$Bit $tmp1236 = (($fn1235) test1227->$class->vtable[4])(test1227);
            bool $tmp1234 = $tmp1236.value;
            if ($tmp1234) goto $l1237;
            panda$core$Bit $tmp1239 = (($fn1238) ifTrue1229->$class->vtable[4])(ifTrue1229);
            $tmp1234 = $tmp1239.value;
            $l1237:;
            panda$core$Bit $tmp1240 = { $tmp1234 };
            bool $tmp1233 = $tmp1240.value;
            if ($tmp1233) goto $l1241;
            panda$core$Bit $tmp1243 = (($fn1242) ifFalse1231->$class->vtable[4])(ifFalse1231);
            $tmp1233 = $tmp1243.value;
            $l1241:;
            panda$core$Bit $tmp1244 = { $tmp1233 };
            $returnValue642 = $tmp1244;
            $tmp633 = 49;
            goto $l631;
            $l1245:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1247, 39);
        panda$core$Bit $tmp1248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1247);
        if ($tmp1248.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1249, false);
            $returnValue642 = $tmp1249;
            $tmp633 = 50;
            goto $l631;
            $l1250:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1252, 40);
        panda$core$Bit $tmp1253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1252);
        if ($tmp1253.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1254, false);
            if ($tmp1254.value) goto $l1255; else goto $l1256;
            $l1256:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1257, (panda$core$Int64) { 397 });
            abort();
            $l1255:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1258, 41);
        panda$core$Bit $tmp1259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1258);
        if ($tmp1259.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1260, false);
            if ($tmp1260.value) goto $l1261; else goto $l1262;
            $l1262:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1263, (panda$core$Int64) { 399 });
            abort();
            $l1261:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1264, 42);
        panda$core$Bit $tmp1265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1264);
        if ($tmp1265.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1266, false);
            if ($tmp1266.value) goto $l1267; else goto $l1268;
            $l1268:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1269, (panda$core$Int64) { 401 });
            abort();
            $l1267:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1270, 43);
        panda$core$Bit $tmp1271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1270);
        if ($tmp1271.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1272, false);
            if ($tmp1272.value) goto $l1273; else goto $l1274;
            $l1274:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1275, (panda$core$Int64) { 403 });
            abort();
            $l1273:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1276, 44);
        panda$core$Bit $tmp1277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1276);
        if ($tmp1277.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1278, false);
            if ($tmp1278.value) goto $l1279; else goto $l1280;
            $l1280:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1281, (panda$core$Int64) { 405 });
            abort();
            $l1279:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1282, 45);
        panda$core$Bit $tmp1283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1282);
        if ($tmp1283.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1284, false);
            if ($tmp1284.value) goto $l1285; else goto $l1286;
            $l1286:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1287, (panda$core$Int64) { 407 });
            abort();
            $l1285:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1288, 46);
        panda$core$Bit $tmp1289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1288);
        if ($tmp1289.value) {
        {
            panda$collections$ImmutableArray** $tmp1291 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9634->$data + 24));
            decls1290 = *$tmp1291;
            {
                int $tmp1294;
                {
                    ITable* $tmp1298 = ((panda$collections$Iterable*) decls1290)->$class->itable;
                    while ($tmp1298->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1298 = $tmp1298->next;
                    }
                    $fn1300 $tmp1299 = $tmp1298->methods[0];
                    panda$collections$Iterator* $tmp1301 = $tmp1299(((panda$collections$Iterable*) decls1290));
                    $tmp1297 = $tmp1301;
                    $tmp1296 = $tmp1297;
                    Iter$409$171295 = $tmp1296;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1296));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1297));
                    $l1302:;
                    ITable* $tmp1305 = Iter$409$171295->$class->itable;
                    while ($tmp1305->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1305 = $tmp1305->next;
                    }
                    $fn1307 $tmp1306 = $tmp1305->methods[0];
                    panda$core$Bit $tmp1308 = $tmp1306(Iter$409$171295);
                    panda$core$Bit $tmp1309 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1308);
                    bool $tmp1304 = $tmp1309.value;
                    if (!$tmp1304) goto $l1303;
                    {
                        int $tmp1312;
                        {
                            ITable* $tmp1316 = Iter$409$171295->$class->itable;
                            while ($tmp1316->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1316 = $tmp1316->next;
                            }
                            $fn1318 $tmp1317 = $tmp1316->methods[1];
                            panda$core$Object* $tmp1319 = $tmp1317(Iter$409$171295);
                            $tmp1315 = $tmp1319;
                            $tmp1314 = ((org$pandalanguage$pandac$IRNode*) $tmp1315);
                            d1313 = $tmp1314;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1314));
                            panda$core$Panda$unref$panda$core$Object($tmp1315);
                            panda$core$Bit $tmp1321 = (($fn1320) d1313->$class->vtable[4])(d1313);
                            if ($tmp1321.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1322, true);
                                $returnValue642 = $tmp1322;
                                $tmp1312 = 0;
                                goto $l1310;
                                $l1323:;
                                $tmp1294 = 0;
                                goto $l1292;
                                $l1324:;
                                $tmp633 = 51;
                                goto $l631;
                                $l1325:;
                                return $returnValue642;
                            }
                            }
                        }
                        $tmp1312 = -1;
                        goto $l1310;
                        $l1310:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) d1313));
                        d1313 = NULL;
                        switch ($tmp1312) {
                            case -1: goto $l1327;
                            case 0: goto $l1323;
                        }
                        $l1327:;
                    }
                    goto $l1302;
                    $l1303:;
                }
                $tmp1294 = -1;
                goto $l1292;
                $l1292:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$409$171295));
                Iter$409$171295 = NULL;
                switch ($tmp1294) {
                    case -1: goto $l1328;
                    case 0: goto $l1324;
                }
                $l1328:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1329, false);
            $returnValue642 = $tmp1329;
            $tmp633 = 52;
            goto $l631;
            $l1330:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1332, 47);
        panda$core$Bit $tmp1333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1332);
        if ($tmp1333.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1334, false);
            $returnValue642 = $tmp1334;
            $tmp633 = 53;
            goto $l631;
            $l1335:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1337, 48);
        panda$core$Bit $tmp1338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1337);
        if ($tmp1338.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1339, false);
            $returnValue642 = $tmp1339;
            $tmp633 = 54;
            goto $l631;
            $l1340:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1342, 49);
        panda$core$Bit $tmp1343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1342);
        if ($tmp1343.value) {
        {
            panda$collections$ImmutableArray** $tmp1345 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9634->$data + 16));
            tests1344 = *$tmp1345;
            panda$collections$ImmutableArray** $tmp1347 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9634->$data + 24));
            statements1346 = *$tmp1347;
            {
                int $tmp1350;
                {
                    ITable* $tmp1354 = ((panda$collections$Iterable*) tests1344)->$class->itable;
                    while ($tmp1354->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1354 = $tmp1354->next;
                    }
                    $fn1356 $tmp1355 = $tmp1354->methods[0];
                    panda$collections$Iterator* $tmp1357 = $tmp1355(((panda$collections$Iterable*) tests1344));
                    $tmp1353 = $tmp1357;
                    $tmp1352 = $tmp1353;
                    Iter$420$171351 = $tmp1352;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1352));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1353));
                    $l1358:;
                    ITable* $tmp1361 = Iter$420$171351->$class->itable;
                    while ($tmp1361->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1361 = $tmp1361->next;
                    }
                    $fn1363 $tmp1362 = $tmp1361->methods[0];
                    panda$core$Bit $tmp1364 = $tmp1362(Iter$420$171351);
                    panda$core$Bit $tmp1365 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1364);
                    bool $tmp1360 = $tmp1365.value;
                    if (!$tmp1360) goto $l1359;
                    {
                        int $tmp1368;
                        {
                            ITable* $tmp1372 = Iter$420$171351->$class->itable;
                            while ($tmp1372->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1372 = $tmp1372->next;
                            }
                            $fn1374 $tmp1373 = $tmp1372->methods[1];
                            panda$core$Object* $tmp1375 = $tmp1373(Iter$420$171351);
                            $tmp1371 = $tmp1375;
                            $tmp1370 = ((org$pandalanguage$pandac$IRNode*) $tmp1371);
                            t1369 = $tmp1370;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1370));
                            panda$core$Panda$unref$panda$core$Object($tmp1371);
                            panda$core$Bit $tmp1377 = (($fn1376) t1369->$class->vtable[4])(t1369);
                            if ($tmp1377.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1378, true);
                                $returnValue642 = $tmp1378;
                                $tmp1368 = 0;
                                goto $l1366;
                                $l1379:;
                                $tmp1350 = 0;
                                goto $l1348;
                                $l1380:;
                                $tmp633 = 55;
                                goto $l631;
                                $l1381:;
                                return $returnValue642;
                            }
                            }
                        }
                        $tmp1368 = -1;
                        goto $l1366;
                        $l1366:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1369));
                        t1369 = NULL;
                        switch ($tmp1368) {
                            case -1: goto $l1383;
                            case 0: goto $l1379;
                        }
                        $l1383:;
                    }
                    goto $l1358;
                    $l1359:;
                }
                $tmp1350 = -1;
                goto $l1348;
                $l1348:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$420$171351));
                Iter$420$171351 = NULL;
                switch ($tmp1350) {
                    case 0: goto $l1380;
                    case -1: goto $l1384;
                }
                $l1384:;
            }
            {
                int $tmp1387;
                {
                    ITable* $tmp1391 = ((panda$collections$Iterable*) statements1346)->$class->itable;
                    while ($tmp1391->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1391 = $tmp1391->next;
                    }
                    $fn1393 $tmp1392 = $tmp1391->methods[0];
                    panda$collections$Iterator* $tmp1394 = $tmp1392(((panda$collections$Iterable*) statements1346));
                    $tmp1390 = $tmp1394;
                    $tmp1389 = $tmp1390;
                    Iter$425$171388 = $tmp1389;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1389));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1390));
                    $l1395:;
                    ITable* $tmp1398 = Iter$425$171388->$class->itable;
                    while ($tmp1398->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1398 = $tmp1398->next;
                    }
                    $fn1400 $tmp1399 = $tmp1398->methods[0];
                    panda$core$Bit $tmp1401 = $tmp1399(Iter$425$171388);
                    panda$core$Bit $tmp1402 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1401);
                    bool $tmp1397 = $tmp1402.value;
                    if (!$tmp1397) goto $l1396;
                    {
                        int $tmp1405;
                        {
                            ITable* $tmp1409 = Iter$425$171388->$class->itable;
                            while ($tmp1409->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1409 = $tmp1409->next;
                            }
                            $fn1411 $tmp1410 = $tmp1409->methods[1];
                            panda$core$Object* $tmp1412 = $tmp1410(Iter$425$171388);
                            $tmp1408 = $tmp1412;
                            $tmp1407 = ((org$pandalanguage$pandac$IRNode*) $tmp1408);
                            s1406 = $tmp1407;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1407));
                            panda$core$Panda$unref$panda$core$Object($tmp1408);
                            panda$core$Bit $tmp1414 = (($fn1413) s1406->$class->vtable[4])(s1406);
                            if ($tmp1414.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1415, true);
                                $returnValue642 = $tmp1415;
                                $tmp1405 = 0;
                                goto $l1403;
                                $l1416:;
                                $tmp1387 = 0;
                                goto $l1385;
                                $l1417:;
                                $tmp633 = 56;
                                goto $l631;
                                $l1418:;
                                return $returnValue642;
                            }
                            }
                        }
                        $tmp1405 = -1;
                        goto $l1403;
                        $l1403:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1406));
                        s1406 = NULL;
                        switch ($tmp1405) {
                            case 0: goto $l1416;
                            case -1: goto $l1420;
                        }
                        $l1420:;
                    }
                    goto $l1395;
                    $l1396:;
                }
                $tmp1387 = -1;
                goto $l1385;
                $l1385:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$425$171388));
                Iter$425$171388 = NULL;
                switch ($tmp1387) {
                    case -1: goto $l1421;
                    case 0: goto $l1417;
                }
                $l1421:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1422, false);
            $returnValue642 = $tmp1422;
            $tmp633 = 57;
            goto $l631;
            $l1423:;
            return $returnValue642;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1425, 50);
        panda$core$Bit $tmp1426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9634->$rawValue, $tmp1425);
        if ($tmp1426.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1428 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9634->$data + 24));
            test1427 = *$tmp1428;
            panda$collections$ImmutableArray** $tmp1430 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9634->$data + 32));
            statements1429 = *$tmp1430;
            panda$core$Bit $tmp1432 = (($fn1431) test1427->$class->vtable[4])(test1427);
            if ($tmp1432.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1433, true);
                $returnValue642 = $tmp1433;
                $tmp633 = 58;
                goto $l631;
                $l1434:;
                return $returnValue642;
            }
            }
            {
                int $tmp1438;
                {
                    ITable* $tmp1442 = ((panda$collections$Iterable*) statements1429)->$class->itable;
                    while ($tmp1442->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1442 = $tmp1442->next;
                    }
                    $fn1444 $tmp1443 = $tmp1442->methods[0];
                    panda$collections$Iterator* $tmp1445 = $tmp1443(((panda$collections$Iterable*) statements1429));
                    $tmp1441 = $tmp1445;
                    $tmp1440 = $tmp1441;
                    Iter$435$171439 = $tmp1440;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1440));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1441));
                    $l1446:;
                    ITable* $tmp1449 = Iter$435$171439->$class->itable;
                    while ($tmp1449->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1449 = $tmp1449->next;
                    }
                    $fn1451 $tmp1450 = $tmp1449->methods[0];
                    panda$core$Bit $tmp1452 = $tmp1450(Iter$435$171439);
                    panda$core$Bit $tmp1453 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1452);
                    bool $tmp1448 = $tmp1453.value;
                    if (!$tmp1448) goto $l1447;
                    {
                        int $tmp1456;
                        {
                            ITable* $tmp1460 = Iter$435$171439->$class->itable;
                            while ($tmp1460->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1460 = $tmp1460->next;
                            }
                            $fn1462 $tmp1461 = $tmp1460->methods[1];
                            panda$core$Object* $tmp1463 = $tmp1461(Iter$435$171439);
                            $tmp1459 = $tmp1463;
                            $tmp1458 = ((org$pandalanguage$pandac$IRNode*) $tmp1459);
                            s1457 = $tmp1458;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1458));
                            panda$core$Panda$unref$panda$core$Object($tmp1459);
                            panda$core$Bit $tmp1465 = (($fn1464) s1457->$class->vtable[4])(s1457);
                            if ($tmp1465.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1466, true);
                                $returnValue642 = $tmp1466;
                                $tmp1456 = 0;
                                goto $l1454;
                                $l1467:;
                                $tmp1438 = 0;
                                goto $l1436;
                                $l1468:;
                                $tmp633 = 59;
                                goto $l631;
                                $l1469:;
                                return $returnValue642;
                            }
                            }
                        }
                        $tmp1456 = -1;
                        goto $l1454;
                        $l1454:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1457));
                        s1457 = NULL;
                        switch ($tmp1456) {
                            case -1: goto $l1471;
                            case 0: goto $l1467;
                        }
                        $l1471:;
                    }
                    goto $l1446;
                    $l1447:;
                }
                $tmp1438 = -1;
                goto $l1436;
                $l1436:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$435$171439));
                Iter$435$171439 = NULL;
                switch ($tmp1438) {
                    case -1: goto $l1472;
                    case 0: goto $l1468;
                }
                $l1472:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1473, false);
            $returnValue642 = $tmp1473;
            $tmp633 = 60;
            goto $l631;
            $l1474:;
            return $returnValue642;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1476, false);
            if ($tmp1476.value) goto $l1477; else goto $l1478;
            $l1478:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1479, (panda$core$Int64) { 442 });
            abort();
            $l1477:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp633 = -1;
    goto $l631;
    $l631:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp635));
    switch ($tmp633) {
        case 1: goto $l655;
        case 18: goto $l877;
        case 34: goto $l1108;
        case 9: goto $l781;
        case 33: goto $l1103;
        case 35: goto $l1113;
        case 46: goto $l1213;
        case 31: goto $l1061;
        case 37: goto $l1126;
        case 28: goto $l1008;
        case 36: goto $l1118;
        case 44: goto $l1203;
        case 60: goto $l1474;
        case 56: goto $l1418;
        case 14: goto $l811;
        case 25: goto $l951;
        case 43: goto $l1195;
        case -1: goto $l1480;
        case 0: goto $l650;
        case 26: goto $l959;
        case 38: goto $l1137;
        case 23: goto $l940;
        case 41: goto $l1182;
        case 58: goto $l1434;
        case 27: goto $l967;
        case 17: goto $l842;
        case 40: goto $l1177;
        case 57: goto $l1423;
        case 11: goto $l791;
        case 39: goto $l1172;
        case 51: goto $l1325;
        case 15: goto $l816;
        case 4: goto $l720;
        case 59: goto $l1469;
        case 24: goto $l946;
        case 30: goto $l1026;
        case 29: goto $l1013;
        case 53: goto $l1335;
        case 54: goto $l1340;
        case 22: goto $l905;
        case 12: goto $l796;
        case 13: goto $l806;
        case 49: goto $l1245;
        case 45: goto $l1208;
        case 8: goto $l776;
        case 32: goto $l1098;
        case 42: goto $l1190;
        case 7: goto $l741;
        case 52: goto $l1330;
        case 55: goto $l1381;
        case 19: goto $l882;
        case 16: goto $l829;
        case 10: goto $l786;
        case 20: goto $l887;
        case 50: goto $l1250;
        case 3: goto $l681;
        case 47: goto $l1218;
        case 21: goto $l892;
        case 5: goto $l725;
        case 48: goto $l1223;
        case 2: goto $l676;
        case 6: goto $l730;
    }
    $l1480:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$448_91484 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1485;
    panda$core$Int64 $tmp1486;
    org$pandalanguage$pandac$IRNode* test1488 = NULL;
    org$pandalanguage$pandac$IRNode* msg1490 = NULL;
    panda$core$String* $returnValue1492;
    panda$core$String* $tmp1493;
    panda$core$String* $tmp1494;
    panda$core$String* $tmp1495;
    panda$core$String* $tmp1496;
    panda$core$String* $tmp1497;
    panda$core$String* $tmp1507;
    panda$core$String* $tmp1508;
    panda$core$String* $tmp1509;
    panda$core$Int64 $tmp1516;
    panda$core$String* $tmp1518;
    panda$core$Int64 $tmp1522;
    org$pandalanguage$pandac$IRNode* left1524 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op1526;
    org$pandalanguage$pandac$IRNode* right1528 = NULL;
    panda$core$String* $tmp1530;
    panda$core$String* $tmp1531;
    panda$core$String* $tmp1532;
    panda$core$String* $tmp1533;
    panda$core$String* $tmp1534;
    panda$core$String* $tmp1535;
    panda$core$String* $tmp1536;
    panda$core$Object* $tmp1541;
    panda$core$Int64 $tmp1551;
    panda$core$Bit bit1553;
    panda$core$String* $tmp1555;
    panda$core$String* $tmp1556;
    panda$core$Int64 $tmp1560;
    panda$collections$ImmutableArray* statements1562 = NULL;
    panda$core$MutableString* result1567 = NULL;
    panda$core$MutableString* $tmp1568;
    panda$core$MutableString* $tmp1569;
    panda$collections$Iterator* Iter$462$171575 = NULL;
    panda$collections$Iterator* $tmp1576;
    panda$collections$Iterator* $tmp1577;
    org$pandalanguage$pandac$IRNode* s1593 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1594;
    panda$core$Object* $tmp1595;
    panda$core$String* $tmp1600;
    panda$core$Char8 $tmp1605;
    panda$core$UInt8 $tmp1606;
    panda$core$String* $tmp1607;
    panda$core$String* $tmp1608;
    panda$core$Int64 $tmp1614;
    panda$collections$ImmutableArray* statements1616 = NULL;
    panda$collections$ImmutableArray* finally1618 = NULL;
    panda$core$MutableString* result1623 = NULL;
    panda$core$MutableString* $tmp1624;
    panda$core$MutableString* $tmp1625;
    panda$collections$Iterator* Iter$469$171631 = NULL;
    panda$collections$Iterator* $tmp1632;
    panda$collections$Iterator* $tmp1633;
    org$pandalanguage$pandac$IRNode* s1649 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1650;
    panda$core$Object* $tmp1651;
    panda$core$String* $tmp1656;
    panda$collections$Iterator* Iter$473$171665 = NULL;
    panda$collections$Iterator* $tmp1666;
    panda$collections$Iterator* $tmp1667;
    org$pandalanguage$pandac$IRNode* s1683 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1684;
    panda$core$Object* $tmp1685;
    panda$core$String* $tmp1690;
    panda$core$Char8 $tmp1695;
    panda$core$UInt8 $tmp1696;
    panda$core$String* $tmp1697;
    panda$core$String* $tmp1698;
    panda$core$Int64 $tmp1704;
    panda$core$String* label1706 = NULL;
    panda$core$String* $tmp1708;
    panda$core$String* $tmp1709;
    panda$core$String* $tmp1710;
    panda$core$String* $tmp1717;
    panda$core$Int64 $tmp1721;
    org$pandalanguage$pandac$MethodRef* m1723 = NULL;
    panda$collections$ImmutableArray* args1725 = NULL;
    panda$core$String* $tmp1727;
    panda$core$String* $tmp1728;
    panda$core$String* $tmp1729;
    panda$core$String* $tmp1730;
    panda$core$String* $tmp1731;
    panda$core$String* $tmp1735;
    panda$core$Int64 $tmp1745;
    org$pandalanguage$pandac$IRNode* value1747 = NULL;
    org$pandalanguage$pandac$Type* type1749 = NULL;
    panda$core$String* $tmp1751;
    panda$core$String* $tmp1752;
    panda$core$String* $tmp1753;
    panda$core$String* $tmp1754;
    panda$core$String* $tmp1755;
    panda$core$Int64 $tmp1765;
    org$pandalanguage$pandac$ChoiceEntry* ce1767 = NULL;
    panda$core$String* $tmp1769;
    panda$core$String* $tmp1770;
    panda$core$Int64 $tmp1774;
    org$pandalanguage$pandac$IRNode* base1776 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce1778 = NULL;
    panda$core$Int64 field1780;
    panda$core$String* $tmp1782;
    panda$core$String* $tmp1783;
    panda$core$String* $tmp1784;
    panda$core$String* $tmp1785;
    panda$core$String* $tmp1786;
    panda$core$String* $tmp1787;
    panda$core$String* $tmp1788;
    panda$core$Object* $tmp1796;
    panda$core$Int64 $tmp1803;
    org$pandalanguage$pandac$Type* type1805 = NULL;
    org$pandalanguage$pandac$IRNode* call1807 = NULL;
    org$pandalanguage$pandac$IRNode* $match$492_171812 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1813;
    panda$core$Int64 $tmp1814;
    panda$collections$ImmutableArray* args1816 = NULL;
    panda$core$String* $tmp1818;
    panda$core$String* $tmp1819;
    panda$core$String* $tmp1820;
    panda$core$String* $tmp1821;
    panda$core$String* $tmp1822;
    panda$core$String* $tmp1826;
    panda$core$Bit $tmp1837;
    panda$core$Int64 $tmp1842;
    org$pandalanguage$pandac$Type* Type1844 = NULL;
    panda$core$String* $tmp1846;
    panda$core$Int64 $tmp1850;
    panda$core$String* label1852 = NULL;
    panda$core$String* $tmp1854;
    panda$core$String* $tmp1855;
    panda$core$String* $tmp1856;
    panda$core$String* $tmp1863;
    panda$core$Int64 $tmp1867;
    org$pandalanguage$pandac$IRNode* target1869 = NULL;
    org$pandalanguage$pandac$IRNode* value1871 = NULL;
    panda$core$String* $tmp1873;
    panda$core$String* $tmp1874;
    panda$core$String* $tmp1875;
    panda$core$String* $tmp1876;
    panda$core$String* $tmp1877;
    panda$core$String* $tmp1878;
    panda$core$String* $tmp1879;
    org$pandalanguage$pandac$Type* $tmp1884;
    panda$core$String* $tmp1895;
    panda$core$String* $tmp1896;
    panda$core$String* $tmp1897;
    panda$core$String* $tmp1898;
    panda$core$String* $tmp1899;
    org$pandalanguage$pandac$Type* $tmp1904;
    panda$core$Int64 $tmp1912;
    panda$core$String* label1914 = NULL;
    panda$collections$ImmutableArray* statements1916 = NULL;
    org$pandalanguage$pandac$IRNode* test1918 = NULL;
    panda$core$MutableString* result1923 = NULL;
    panda$core$MutableString* $tmp1924;
    panda$core$MutableString* $tmp1925;
    panda$core$String* $tmp1927;
    panda$core$String* $tmp1928;
    panda$collections$Iterator* Iter$516$171936 = NULL;
    panda$collections$Iterator* $tmp1937;
    panda$collections$Iterator* $tmp1938;
    org$pandalanguage$pandac$IRNode* s1954 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1955;
    panda$core$Object* $tmp1956;
    panda$core$String* $tmp1961;
    panda$core$String* $tmp1966;
    panda$core$String* $tmp1967;
    panda$core$String* $tmp1972;
    panda$core$String* $tmp1973;
    panda$core$Int64 $tmp1979;
    org$pandalanguage$pandac$IRNode* m1981 = NULL;
    panda$collections$ImmutableArray* args1983 = NULL;
    panda$core$String* $tmp1985;
    panda$core$String* $tmp1986;
    panda$core$String* $tmp1987;
    panda$core$String* $tmp1988;
    panda$core$String* $tmp1989;
    panda$core$String* $tmp1994;
    panda$core$Int64 $tmp2005;
    org$pandalanguage$pandac$IRNode* expr2007 = NULL;
    org$pandalanguage$pandac$IRNode* stmt2009 = NULL;
    panda$core$String* $tmp2011;
    panda$core$String* $tmp2012;
    panda$core$String* $tmp2013;
    panda$core$String* $tmp2014;
    panda$core$String* $tmp2015;
    panda$core$Int64 $tmp2025;
    org$pandalanguage$pandac$IRNode* base2027 = NULL;
    org$pandalanguage$pandac$FieldDecl* field2029 = NULL;
    panda$core$String* $tmp2031;
    panda$core$String* $tmp2032;
    panda$core$String* $tmp2033;
    panda$core$String* $tmp2034;
    panda$core$String* $tmp2035;
    panda$core$Int64 $tmp2045;
    org$pandalanguage$pandac$IRNode* test2047 = NULL;
    panda$collections$ImmutableArray* ifTrue2049 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse2051 = NULL;
    panda$core$MutableString* result2056 = NULL;
    panda$core$MutableString* $tmp2057;
    panda$core$MutableString* $tmp2058;
    panda$core$String* $tmp2060;
    panda$core$String* $tmp2061;
    panda$collections$Iterator* Iter$529$172069 = NULL;
    panda$collections$Iterator* $tmp2070;
    panda$collections$Iterator* $tmp2071;
    org$pandalanguage$pandac$IRNode* s2087 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2088;
    panda$core$Object* $tmp2089;
    panda$core$String* $tmp2094;
    panda$core$Char8 $tmp2099;
    panda$core$UInt8 $tmp2100;
    panda$core$String* $tmp2101;
    panda$core$String* $tmp2102;
    panda$core$String* $tmp2107;
    panda$core$String* $tmp2108;
    panda$core$Int64 $tmp2114;
    panda$core$UInt64 value2116;
    panda$core$String* $tmp2118;
    panda$core$String* $tmp2119;
    panda$core$Int64 $tmp2123;
    org$pandalanguage$pandac$IRNode* value2125 = NULL;
    panda$core$String* $tmp2127;
    panda$core$String* $tmp2128;
    panda$core$String* $tmp2129;
    panda$core$Int64 $tmp2136;
    org$pandalanguage$pandac$IRNode* value2138 = NULL;
    panda$core$String* $tmp2140;
    panda$core$String* $tmp2141;
    panda$core$String* $tmp2142;
    panda$core$Int64 $tmp2149;
    panda$core$String* label2151 = NULL;
    panda$collections$ImmutableArray* statements2153 = NULL;
    panda$core$MutableString* result2158 = NULL;
    panda$core$MutableString* $tmp2159;
    panda$core$MutableString* $tmp2160;
    panda$core$String* $tmp2162;
    panda$core$String* $tmp2163;
    panda$collections$Iterator* Iter$549$172171 = NULL;
    panda$collections$Iterator* $tmp2172;
    panda$collections$Iterator* $tmp2173;
    org$pandalanguage$pandac$IRNode* s2189 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2190;
    panda$core$Object* $tmp2191;
    panda$core$String* $tmp2196;
    panda$core$Char8 $tmp2201;
    panda$core$UInt8 $tmp2202;
    panda$core$String* $tmp2203;
    panda$core$String* $tmp2204;
    panda$core$Int64 $tmp2210;
    org$pandalanguage$pandac$IRNode* value2212 = NULL;
    panda$collections$ImmutableArray* whens2214 = NULL;
    panda$collections$ImmutableArray* other2216 = NULL;
    panda$core$MutableString* result2221 = NULL;
    panda$core$MutableString* $tmp2222;
    panda$core$MutableString* $tmp2223;
    panda$core$String* $tmp2225;
    panda$core$String* $tmp2226;
    panda$collections$Iterator* Iter$556$172234 = NULL;
    panda$collections$Iterator* $tmp2235;
    panda$collections$Iterator* $tmp2236;
    org$pandalanguage$pandac$IRNode* w2252 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2253;
    panda$core$Object* $tmp2254;
    panda$core$String* $tmp2259;
    panda$collections$Iterator* Iter$561$212268 = NULL;
    panda$collections$Iterator* $tmp2269;
    panda$collections$Iterator* $tmp2270;
    org$pandalanguage$pandac$IRNode* s2286 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2287;
    panda$core$Object* $tmp2288;
    panda$core$String* $tmp2293;
    panda$core$Char8 $tmp2298;
    panda$core$UInt8 $tmp2299;
    panda$core$String* $tmp2300;
    panda$core$String* $tmp2301;
    panda$core$Int64 $tmp2307;
    org$pandalanguage$pandac$IRNode* target2309 = NULL;
    org$pandalanguage$pandac$MethodRef* m2311 = NULL;
    panda$core$String* $tmp2313;
    panda$core$String* $tmp2314;
    panda$core$String* $tmp2315;
    panda$core$String* $tmp2316;
    panda$core$String* $tmp2317;
    panda$core$String* $tmp2327;
    panda$core$Int64 $tmp2330;
    panda$core$UInt64 value2332;
    panda$core$String* $tmp2334;
    panda$core$String* $tmp2335;
    panda$core$Object* $tmp2337;
    panda$core$Int64 $tmp2342;
    panda$core$String* $tmp2344;
    panda$core$Int64 $tmp2348;
    org$pandalanguage$pandac$parser$Token$Kind op2350;
    org$pandalanguage$pandac$IRNode* base2352 = NULL;
    panda$core$String* $tmp2354;
    panda$core$String* $tmp2355;
    panda$core$String* $tmp2356;
    panda$core$String* $tmp2357;
    panda$core$String* $tmp2358;
    panda$core$Int64 $tmp2367;
    panda$core$String* label2369 = NULL;
    org$pandalanguage$pandac$IRNode* target2371 = NULL;
    org$pandalanguage$pandac$IRNode* list2373 = NULL;
    panda$collections$ImmutableArray* statements2375 = NULL;
    panda$core$MutableString* result2380 = NULL;
    panda$core$MutableString* $tmp2381;
    panda$core$MutableString* $tmp2382;
    panda$core$String* $tmp2384;
    panda$core$String* $tmp2385;
    panda$core$String* $tmp2389;
    panda$core$String* $tmp2390;
    panda$core$String* $tmp2391;
    panda$core$String* $tmp2392;
    panda$collections$Iterator* Iter$584$172403 = NULL;
    panda$collections$Iterator* $tmp2404;
    panda$collections$Iterator* $tmp2405;
    org$pandalanguage$pandac$IRNode* s2421 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2422;
    panda$core$Object* $tmp2423;
    panda$core$String* $tmp2428;
    panda$core$Char8 $tmp2433;
    panda$core$UInt8 $tmp2434;
    panda$core$String* $tmp2435;
    panda$core$String* $tmp2436;
    panda$core$Int64 $tmp2442;
    panda$core$Real64 value2444;
    panda$core$String* $tmp2446;
    panda$core$String* $tmp2447;
    panda$core$Int64 $tmp2451;
    org$pandalanguage$pandac$IRNode* value2453 = NULL;
    panda$core$String* $tmp2455;
    panda$core$String* $tmp2456;
    panda$core$String* $tmp2457;
    panda$core$String* $tmp2464;
    panda$core$Int64 $tmp2468;
    org$pandalanguage$pandac$Type* type2470 = NULL;
    panda$core$Int64 id2472;
    panda$core$String* $tmp2474;
    panda$core$String* $tmp2475;
    panda$core$String* $tmp2476;
    panda$core$Object* $tmp2478;
    panda$core$Int64 $tmp2485;
    org$pandalanguage$pandac$IRNode* base2487 = NULL;
    panda$core$Int64 id2489;
    panda$core$String* $tmp2491;
    panda$core$String* $tmp2492;
    panda$core$String* $tmp2493;
    panda$core$String* $tmp2494;
    panda$core$String* $tmp2495;
    panda$core$Object* $tmp2497;
    panda$core$Int64 $tmp2507;
    panda$core$String* $tmp2509;
    panda$core$Int64 $tmp2513;
    panda$core$String* $tmp2515;
    panda$core$Int64 $tmp2519;
    panda$core$String* str2521 = NULL;
    panda$core$String* $tmp2523;
    panda$core$String* $tmp2524;
    panda$core$Int64 $tmp2529;
    panda$core$String* $tmp2531;
    panda$core$Int64 $tmp2535;
    org$pandalanguage$pandac$IRNode* test2537 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue2539 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse2541 = NULL;
    panda$core$String* $tmp2543;
    panda$core$String* $tmp2544;
    panda$core$String* $tmp2545;
    panda$core$String* $tmp2546;
    panda$core$String* $tmp2547;
    panda$core$String* $tmp2548;
    panda$core$String* $tmp2549;
    panda$core$Int64 $tmp2562;
    org$pandalanguage$pandac$Type* type2564 = NULL;
    panda$core$String* $tmp2566;
    panda$core$String* $tmp2567;
    panda$core$Int64 $tmp2571;
    panda$core$String* name2573 = NULL;
    panda$core$String* $tmp2575;
    panda$core$Int64 $tmp2578;
    org$pandalanguage$pandac$IRNode* base2580 = NULL;
    panda$collections$ImmutableArray* args2582 = NULL;
    panda$core$String* $tmp2584;
    panda$core$String* $tmp2585;
    panda$core$String* $tmp2586;
    panda$core$String* $tmp2587;
    panda$core$String* $tmp2588;
    panda$core$String* $tmp2593;
    panda$core$Int64 $tmp2603;
    panda$collections$ImmutableArray* params2605 = NULL;
    org$pandalanguage$pandac$ASTNode* body2607 = NULL;
    panda$core$String* $tmp2609;
    panda$core$String* $tmp2610;
    panda$core$String* $tmp2611;
    panda$core$String* $tmp2612;
    panda$core$String* $tmp2613;
    panda$core$String* $tmp2615;
    panda$core$Int64 $tmp2628;
    org$pandalanguage$pandac$IRNode* target2630 = NULL;
    panda$collections$ImmutableArray* methods2632 = NULL;
    panda$collections$ImmutableArray* args2634 = NULL;
    panda$core$String* $tmp2636;
    panda$core$String* $tmp2637;
    panda$core$String* $tmp2638;
    panda$core$String* $tmp2639;
    panda$core$String* $tmp2640;
    panda$core$String* $tmp2641;
    panda$core$String* $tmp2642;
    panda$core$Object* $tmp2647;
    panda$core$Int64 $tmp2648;
    panda$core$String* $tmp2653;
    panda$core$String* $tmp2663;
    panda$core$String* $tmp2664;
    panda$core$String* $tmp2665;
    panda$core$String* $tmp2666;
    panda$core$String* $tmp2667;
    panda$core$Object* $tmp2669;
    panda$core$Int64 $tmp2670;
    panda$core$String* $tmp2675;
    panda$core$Int64 $tmp2685;
    org$pandalanguage$pandac$IRNode* target2687 = NULL;
    panda$collections$ImmutableArray* methods2689 = NULL;
    panda$core$String* $tmp2691;
    panda$core$String* $tmp2692;
    panda$core$String* $tmp2693;
    panda$core$String* $tmp2694;
    panda$core$String* $tmp2695;
    panda$core$Object* $tmp2700;
    panda$core$Int64 $tmp2701;
    panda$core$String* $tmp2708;
    panda$core$String* $tmp2709;
    panda$core$String* $tmp2710;
    panda$core$Object* $tmp2711;
    panda$core$Int64 $tmp2712;
    panda$core$Int64 $tmp2719;
    org$pandalanguage$pandac$IRNode* start2721 = NULL;
    org$pandalanguage$pandac$IRNode* end2723 = NULL;
    panda$core$Bit inclusive2725;
    org$pandalanguage$pandac$IRNode* step2727 = NULL;
    panda$core$MutableString* result2732 = NULL;
    panda$core$MutableString* $tmp2733;
    panda$core$MutableString* $tmp2734;
    panda$core$String* $tmp2738;
    panda$core$String* $tmp2739;
    panda$core$String* $tmp2744;
    panda$core$String* $tmp2745;
    panda$core$Int64 $tmp2751;
    org$pandalanguage$pandac$Variable$Kind kind2753;
    panda$collections$ImmutableArray* decls2755 = NULL;
    panda$core$MutableString* result2760 = NULL;
    panda$core$MutableString* $tmp2761;
    panda$core$MutableString* $tmp2762;
    org$pandalanguage$pandac$Variable$Kind $match$652_172764;
    panda$core$Int64 $tmp2765;
    panda$core$Int64 $tmp2768;
    panda$core$Int64 $tmp2771;
    panda$core$Int64 $tmp2774;
    panda$core$String* $tmp2777;
    panda$core$String* $tmp2782;
    panda$core$String* $tmp2783;
    panda$core$Int64 $tmp2789;
    panda$core$String* name2791 = NULL;
    panda$core$String* $tmp2793;
    panda$core$Int64 $tmp2796;
    org$pandalanguage$pandac$Variable* variable2798 = NULL;
    panda$core$String* $tmp2800;
    panda$core$String* $tmp2801;
    panda$core$Int64 $tmp2806;
    panda$collections$ImmutableArray* tests2808 = NULL;
    panda$collections$ImmutableArray* statements2810 = NULL;
    panda$core$String* $tmp2812;
    panda$core$String* $tmp2813;
    panda$core$String* $tmp2814;
    panda$core$String* $tmp2815;
    panda$core$String* $tmp2816;
    panda$core$String* $tmp2818;
    panda$core$String* $tmp2826;
    panda$core$Int64 $tmp2837;
    panda$core$String* label2839 = NULL;
    org$pandalanguage$pandac$IRNode* test2841 = NULL;
    panda$collections$ImmutableArray* statements2843 = NULL;
    panda$core$MutableString* result2848 = NULL;
    panda$core$MutableString* $tmp2849;
    panda$core$MutableString* $tmp2850;
    panda$core$String* $tmp2852;
    panda$core$String* $tmp2853;
    panda$core$String* $tmp2857;
    panda$core$String* $tmp2858;
    panda$collections$Iterator* Iter$672$172866 = NULL;
    panda$collections$Iterator* $tmp2867;
    panda$collections$Iterator* $tmp2868;
    org$pandalanguage$pandac$IRNode* s2884 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2885;
    panda$core$Object* $tmp2886;
    panda$core$String* $tmp2891;
    panda$core$Char8 $tmp2896;
    panda$core$UInt8 $tmp2897;
    panda$core$String* $tmp2898;
    panda$core$String* $tmp2899;
    panda$core$Bit $tmp2905;
    int $tmp1483;
    {
        $tmp1485 = self;
        $match$448_91484 = $tmp1485;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1485));
        panda$core$Int64$init$builtin_int64(&$tmp1486, 0);
        panda$core$Bit $tmp1487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp1486);
        if ($tmp1487.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1489 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 16));
            test1488 = *$tmp1489;
            org$pandalanguage$pandac$IRNode** $tmp1491 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 24));
            msg1490 = *$tmp1491;
            if (((panda$core$Bit) { msg1490 != NULL }).value) {
            {
                panda$core$String* $tmp1499 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1498, ((panda$core$Object*) test1488));
                $tmp1497 = $tmp1499;
                panda$core$String* $tmp1501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1497, &$s1500);
                $tmp1496 = $tmp1501;
                panda$core$String* $tmp1502 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1496, ((panda$core$Object*) msg1490));
                $tmp1495 = $tmp1502;
                panda$core$String* $tmp1504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1495, &$s1503);
                $tmp1494 = $tmp1504;
                $tmp1493 = $tmp1494;
                $returnValue1492 = $tmp1493;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1493));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1494));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1495));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1496));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1497));
                $tmp1483 = 0;
                goto $l1481;
                $l1505:;
                return $returnValue1492;
            }
            }
            panda$core$String* $tmp1511 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1510, ((panda$core$Object*) test1488));
            $tmp1509 = $tmp1511;
            panda$core$String* $tmp1513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1509, &$s1512);
            $tmp1508 = $tmp1513;
            $tmp1507 = $tmp1508;
            $returnValue1492 = $tmp1507;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1507));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1508));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1509));
            $tmp1483 = 1;
            goto $l1481;
            $l1514:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1516, 1);
        panda$core$Bit $tmp1517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp1516);
        if ($tmp1517.value) {
        {
            $tmp1518 = &$s1519;
            $returnValue1492 = $tmp1518;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1518));
            $tmp1483 = 2;
            goto $l1481;
            $l1520:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1522, 2);
        panda$core$Bit $tmp1523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp1522);
        if ($tmp1523.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1525 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 24));
            left1524 = *$tmp1525;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1527 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$448_91484->$data + 32));
            op1526 = *$tmp1527;
            org$pandalanguage$pandac$IRNode** $tmp1529 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 40));
            right1528 = *$tmp1529;
            panda$core$String* $tmp1538 = (($fn1537) left1524->$class->vtable[0])(left1524);
            $tmp1536 = $tmp1538;
            panda$core$String* $tmp1540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1536, &$s1539);
            $tmp1535 = $tmp1540;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1542;
            $tmp1542 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1542->value = op1526;
            $tmp1541 = ((panda$core$Object*) $tmp1542);
            panda$core$String* $tmp1543 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1535, $tmp1541);
            $tmp1534 = $tmp1543;
            panda$core$String* $tmp1545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1534, &$s1544);
            $tmp1533 = $tmp1545;
            panda$core$String* $tmp1546 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1533, ((panda$core$Object*) right1528));
            $tmp1532 = $tmp1546;
            panda$core$String* $tmp1548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1532, &$s1547);
            $tmp1531 = $tmp1548;
            $tmp1530 = $tmp1531;
            $returnValue1492 = $tmp1530;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1530));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1531));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1532));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1533));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1534));
            panda$core$Panda$unref$panda$core$Object($tmp1541);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1535));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1536));
            $tmp1483 = 3;
            goto $l1481;
            $l1549:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1551, 3);
        panda$core$Bit $tmp1552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp1551);
        if ($tmp1552.value) {
        {
            panda$core$Bit* $tmp1554 = ((panda$core$Bit*) ((char*) $match$448_91484->$data + 24));
            bit1553 = *$tmp1554;
            panda$core$String* $tmp1557 = panda$core$Bit$convert$R$panda$core$String(bit1553);
            $tmp1556 = $tmp1557;
            $tmp1555 = $tmp1556;
            $returnValue1492 = $tmp1555;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1555));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1556));
            $tmp1483 = 4;
            goto $l1481;
            $l1558:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1560, 4);
        panda$core$Bit $tmp1561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp1560);
        if ($tmp1561.value) {
        {
            panda$collections$ImmutableArray** $tmp1563 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 16));
            statements1562 = *$tmp1563;
            int $tmp1566;
            {
                panda$core$MutableString* $tmp1570 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1570, &$s1571);
                $tmp1569 = $tmp1570;
                $tmp1568 = $tmp1569;
                result1567 = $tmp1568;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1568));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1569));
                {
                    int $tmp1574;
                    {
                        ITable* $tmp1578 = ((panda$collections$Iterable*) statements1562)->$class->itable;
                        while ($tmp1578->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1578 = $tmp1578->next;
                        }
                        $fn1580 $tmp1579 = $tmp1578->methods[0];
                        panda$collections$Iterator* $tmp1581 = $tmp1579(((panda$collections$Iterable*) statements1562));
                        $tmp1577 = $tmp1581;
                        $tmp1576 = $tmp1577;
                        Iter$462$171575 = $tmp1576;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1576));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1577));
                        $l1582:;
                        ITable* $tmp1585 = Iter$462$171575->$class->itable;
                        while ($tmp1585->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1585 = $tmp1585->next;
                        }
                        $fn1587 $tmp1586 = $tmp1585->methods[0];
                        panda$core$Bit $tmp1588 = $tmp1586(Iter$462$171575);
                        panda$core$Bit $tmp1589 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1588);
                        bool $tmp1584 = $tmp1589.value;
                        if (!$tmp1584) goto $l1583;
                        {
                            int $tmp1592;
                            {
                                ITable* $tmp1596 = Iter$462$171575->$class->itable;
                                while ($tmp1596->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1596 = $tmp1596->next;
                                }
                                $fn1598 $tmp1597 = $tmp1596->methods[1];
                                panda$core$Object* $tmp1599 = $tmp1597(Iter$462$171575);
                                $tmp1595 = $tmp1599;
                                $tmp1594 = ((org$pandalanguage$pandac$IRNode*) $tmp1595);
                                s1593 = $tmp1594;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1594));
                                panda$core$Panda$unref$panda$core$Object($tmp1595);
                                panda$core$String* $tmp1602 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1593), &$s1601);
                                $tmp1600 = $tmp1602;
                                panda$core$MutableString$append$panda$core$String(result1567, $tmp1600);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1600));
                            }
                            $tmp1592 = -1;
                            goto $l1590;
                            $l1590:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1593));
                            s1593 = NULL;
                            switch ($tmp1592) {
                                case -1: goto $l1603;
                            }
                            $l1603:;
                        }
                        goto $l1582;
                        $l1583:;
                    }
                    $tmp1574 = -1;
                    goto $l1572;
                    $l1572:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$462$171575));
                    Iter$462$171575 = NULL;
                    switch ($tmp1574) {
                        case -1: goto $l1604;
                    }
                    $l1604:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp1606, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp1605, $tmp1606);
                panda$core$MutableString$append$panda$core$Char8(result1567, $tmp1605);
                panda$core$String* $tmp1609 = panda$core$MutableString$finish$R$panda$core$String(result1567);
                $tmp1608 = $tmp1609;
                $tmp1607 = $tmp1608;
                $returnValue1492 = $tmp1607;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1607));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1608));
                $tmp1566 = 0;
                goto $l1564;
                $l1610:;
                $tmp1483 = 5;
                goto $l1481;
                $l1611:;
                return $returnValue1492;
            }
            $l1564:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1567));
            result1567 = NULL;
            switch ($tmp1566) {
                case 0: goto $l1610;
            }
            $l1613:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1614, 5);
        panda$core$Bit $tmp1615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp1614);
        if ($tmp1615.value) {
        {
            panda$collections$ImmutableArray** $tmp1617 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 16));
            statements1616 = *$tmp1617;
            panda$collections$ImmutableArray** $tmp1619 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 24));
            finally1618 = *$tmp1619;
            int $tmp1622;
            {
                panda$core$MutableString* $tmp1626 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1626, &$s1627);
                $tmp1625 = $tmp1626;
                $tmp1624 = $tmp1625;
                result1623 = $tmp1624;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1624));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1625));
                {
                    int $tmp1630;
                    {
                        ITable* $tmp1634 = ((panda$collections$Iterable*) statements1616)->$class->itable;
                        while ($tmp1634->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1634 = $tmp1634->next;
                        }
                        $fn1636 $tmp1635 = $tmp1634->methods[0];
                        panda$collections$Iterator* $tmp1637 = $tmp1635(((panda$collections$Iterable*) statements1616));
                        $tmp1633 = $tmp1637;
                        $tmp1632 = $tmp1633;
                        Iter$469$171631 = $tmp1632;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1632));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1633));
                        $l1638:;
                        ITable* $tmp1641 = Iter$469$171631->$class->itable;
                        while ($tmp1641->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1641 = $tmp1641->next;
                        }
                        $fn1643 $tmp1642 = $tmp1641->methods[0];
                        panda$core$Bit $tmp1644 = $tmp1642(Iter$469$171631);
                        panda$core$Bit $tmp1645 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1644);
                        bool $tmp1640 = $tmp1645.value;
                        if (!$tmp1640) goto $l1639;
                        {
                            int $tmp1648;
                            {
                                ITable* $tmp1652 = Iter$469$171631->$class->itable;
                                while ($tmp1652->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1652 = $tmp1652->next;
                                }
                                $fn1654 $tmp1653 = $tmp1652->methods[1];
                                panda$core$Object* $tmp1655 = $tmp1653(Iter$469$171631);
                                $tmp1651 = $tmp1655;
                                $tmp1650 = ((org$pandalanguage$pandac$IRNode*) $tmp1651);
                                s1649 = $tmp1650;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1650));
                                panda$core$Panda$unref$panda$core$Object($tmp1651);
                                panda$core$String* $tmp1658 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1649), &$s1657);
                                $tmp1656 = $tmp1658;
                                panda$core$MutableString$append$panda$core$String(result1623, $tmp1656);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1656));
                            }
                            $tmp1648 = -1;
                            goto $l1646;
                            $l1646:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1649));
                            s1649 = NULL;
                            switch ($tmp1648) {
                                case -1: goto $l1659;
                            }
                            $l1659:;
                        }
                        goto $l1638;
                        $l1639:;
                    }
                    $tmp1630 = -1;
                    goto $l1628;
                    $l1628:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$469$171631));
                    Iter$469$171631 = NULL;
                    switch ($tmp1630) {
                        case -1: goto $l1660;
                    }
                    $l1660:;
                }
                panda$core$MutableString$append$panda$core$String(result1623, &$s1661);
                {
                    int $tmp1664;
                    {
                        ITable* $tmp1668 = ((panda$collections$Iterable*) finally1618)->$class->itable;
                        while ($tmp1668->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1668 = $tmp1668->next;
                        }
                        $fn1670 $tmp1669 = $tmp1668->methods[0];
                        panda$collections$Iterator* $tmp1671 = $tmp1669(((panda$collections$Iterable*) finally1618));
                        $tmp1667 = $tmp1671;
                        $tmp1666 = $tmp1667;
                        Iter$473$171665 = $tmp1666;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1666));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1667));
                        $l1672:;
                        ITable* $tmp1675 = Iter$473$171665->$class->itable;
                        while ($tmp1675->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1675 = $tmp1675->next;
                        }
                        $fn1677 $tmp1676 = $tmp1675->methods[0];
                        panda$core$Bit $tmp1678 = $tmp1676(Iter$473$171665);
                        panda$core$Bit $tmp1679 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1678);
                        bool $tmp1674 = $tmp1679.value;
                        if (!$tmp1674) goto $l1673;
                        {
                            int $tmp1682;
                            {
                                ITable* $tmp1686 = Iter$473$171665->$class->itable;
                                while ($tmp1686->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1686 = $tmp1686->next;
                                }
                                $fn1688 $tmp1687 = $tmp1686->methods[1];
                                panda$core$Object* $tmp1689 = $tmp1687(Iter$473$171665);
                                $tmp1685 = $tmp1689;
                                $tmp1684 = ((org$pandalanguage$pandac$IRNode*) $tmp1685);
                                s1683 = $tmp1684;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1684));
                                panda$core$Panda$unref$panda$core$Object($tmp1685);
                                panda$core$String* $tmp1692 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1683), &$s1691);
                                $tmp1690 = $tmp1692;
                                panda$core$MutableString$append$panda$core$String(result1623, $tmp1690);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1690));
                            }
                            $tmp1682 = -1;
                            goto $l1680;
                            $l1680:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1683));
                            s1683 = NULL;
                            switch ($tmp1682) {
                                case -1: goto $l1693;
                            }
                            $l1693:;
                        }
                        goto $l1672;
                        $l1673:;
                    }
                    $tmp1664 = -1;
                    goto $l1662;
                    $l1662:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$473$171665));
                    Iter$473$171665 = NULL;
                    switch ($tmp1664) {
                        case -1: goto $l1694;
                    }
                    $l1694:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp1696, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp1695, $tmp1696);
                panda$core$MutableString$append$panda$core$Char8(result1623, $tmp1695);
                panda$core$String* $tmp1699 = panda$core$MutableString$finish$R$panda$core$String(result1623);
                $tmp1698 = $tmp1699;
                $tmp1697 = $tmp1698;
                $returnValue1492 = $tmp1697;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1697));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1698));
                $tmp1622 = 0;
                goto $l1620;
                $l1700:;
                $tmp1483 = 6;
                goto $l1481;
                $l1701:;
                return $returnValue1492;
            }
            $l1620:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1623));
            result1623 = NULL;
            switch ($tmp1622) {
                case 0: goto $l1700;
            }
            $l1703:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1704, 6);
        panda$core$Bit $tmp1705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp1704);
        if ($tmp1705.value) {
        {
            panda$core$String** $tmp1707 = ((panda$core$String**) ((char*) $match$448_91484->$data + 16));
            label1706 = *$tmp1707;
            if (((panda$core$Bit) { label1706 != NULL }).value) {
            {
                panda$core$String* $tmp1712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1711, label1706);
                $tmp1710 = $tmp1712;
                panda$core$String* $tmp1714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1710, &$s1713);
                $tmp1709 = $tmp1714;
                $tmp1708 = $tmp1709;
                $returnValue1492 = $tmp1708;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1708));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1709));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1710));
                $tmp1483 = 7;
                goto $l1481;
                $l1715:;
                return $returnValue1492;
            }
            }
            $tmp1717 = &$s1718;
            $returnValue1492 = $tmp1717;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1717));
            $tmp1483 = 8;
            goto $l1481;
            $l1719:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1721, 7);
        panda$core$Bit $tmp1722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp1721);
        if ($tmp1722.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp1724 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$448_91484->$data + 24));
            m1723 = *$tmp1724;
            panda$collections$ImmutableArray** $tmp1726 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 32));
            args1725 = *$tmp1726;
            panda$core$String* $tmp1732 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) m1723->value)->name);
            $tmp1731 = $tmp1732;
            panda$core$String* $tmp1734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1731, &$s1733);
            $tmp1730 = $tmp1734;
            ITable* $tmp1736 = ((panda$collections$ListView*) args1725)->$class->itable;
            while ($tmp1736->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1736 = $tmp1736->next;
            }
            $fn1738 $tmp1737 = $tmp1736->methods[4];
            panda$core$String* $tmp1739 = $tmp1737(((panda$collections$ListView*) args1725));
            $tmp1735 = $tmp1739;
            panda$core$String* $tmp1740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1730, $tmp1735);
            $tmp1729 = $tmp1740;
            panda$core$String* $tmp1742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1729, &$s1741);
            $tmp1728 = $tmp1742;
            $tmp1727 = $tmp1728;
            $returnValue1492 = $tmp1727;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1727));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1728));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1729));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1735));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1730));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1731));
            $tmp1483 = 9;
            goto $l1481;
            $l1743:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1745, 8);
        panda$core$Bit $tmp1746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp1745);
        if ($tmp1746.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1748 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 16));
            value1747 = *$tmp1748;
            org$pandalanguage$pandac$Type** $tmp1750 = ((org$pandalanguage$pandac$Type**) ((char*) $match$448_91484->$data + 24));
            type1749 = *$tmp1750;
            panda$core$String* $tmp1757 = (($fn1756) value1747->$class->vtable[0])(value1747);
            $tmp1755 = $tmp1757;
            panda$core$String* $tmp1759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1755, &$s1758);
            $tmp1754 = $tmp1759;
            panda$core$String* $tmp1760 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1754, ((panda$core$Object*) type1749));
            $tmp1753 = $tmp1760;
            panda$core$String* $tmp1762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1753, &$s1761);
            $tmp1752 = $tmp1762;
            $tmp1751 = $tmp1752;
            $returnValue1492 = $tmp1751;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1751));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1752));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1753));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1754));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1755));
            $tmp1483 = 10;
            goto $l1481;
            $l1763:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1765, 9);
        panda$core$Bit $tmp1766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp1765);
        if ($tmp1766.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp1768 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$448_91484->$data + 16));
            ce1767 = *$tmp1768;
            panda$core$String* $tmp1771 = org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(ce1767);
            $tmp1770 = $tmp1771;
            $tmp1769 = $tmp1770;
            $returnValue1492 = $tmp1769;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1769));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1770));
            $tmp1483 = 11;
            goto $l1481;
            $l1772:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1774, 10);
        panda$core$Bit $tmp1775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp1774);
        if ($tmp1775.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1777 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 16));
            base1776 = *$tmp1777;
            org$pandalanguage$pandac$ChoiceEntry** $tmp1779 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$448_91484->$data + 24));
            ce1778 = *$tmp1779;
            panda$core$Int64* $tmp1781 = ((panda$core$Int64*) ((char*) $match$448_91484->$data + 32));
            field1780 = *$tmp1781;
            panda$core$String* $tmp1790 = (($fn1789) base1776->$class->vtable[0])(base1776);
            $tmp1788 = $tmp1790;
            panda$core$String* $tmp1792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1788, &$s1791);
            $tmp1787 = $tmp1792;
            panda$core$String* $tmp1793 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1787, ((panda$core$Object*) ce1778));
            $tmp1786 = $tmp1793;
            panda$core$String* $tmp1795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1786, &$s1794);
            $tmp1785 = $tmp1795;
            panda$core$Int64$wrapper* $tmp1797;
            $tmp1797 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1797->value = field1780;
            $tmp1796 = ((panda$core$Object*) $tmp1797);
            panda$core$String* $tmp1798 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1785, $tmp1796);
            $tmp1784 = $tmp1798;
            panda$core$String* $tmp1800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1784, &$s1799);
            $tmp1783 = $tmp1800;
            $tmp1782 = $tmp1783;
            $returnValue1492 = $tmp1782;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1782));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1783));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1784));
            panda$core$Panda$unref$panda$core$Object($tmp1796);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1785));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1786));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1787));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1788));
            $tmp1483 = 12;
            goto $l1481;
            $l1801:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1803, 11);
        panda$core$Bit $tmp1804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp1803);
        if ($tmp1804.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1806 = ((org$pandalanguage$pandac$Type**) ((char*) $match$448_91484->$data + 16));
            type1805 = *$tmp1806;
            org$pandalanguage$pandac$IRNode** $tmp1808 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 24));
            call1807 = *$tmp1808;
            int $tmp1811;
            {
                $tmp1813 = call1807;
                $match$492_171812 = $tmp1813;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1813));
                panda$core$Int64$init$builtin_int64(&$tmp1814, 7);
                panda$core$Bit $tmp1815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$492_171812->$rawValue, $tmp1814);
                if ($tmp1815.value) {
                {
                    panda$collections$ImmutableArray** $tmp1817 = ((panda$collections$ImmutableArray**) ((char*) $match$492_171812->$data + 32));
                    args1816 = *$tmp1817;
                    panda$core$String* $tmp1823 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type1805);
                    $tmp1822 = $tmp1823;
                    panda$core$String* $tmp1825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1822, &$s1824);
                    $tmp1821 = $tmp1825;
                    ITable* $tmp1827 = ((panda$collections$ListView*) args1816)->$class->itable;
                    while ($tmp1827->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp1827 = $tmp1827->next;
                    }
                    $fn1829 $tmp1828 = $tmp1827->methods[4];
                    panda$core$String* $tmp1830 = $tmp1828(((panda$collections$ListView*) args1816));
                    $tmp1826 = $tmp1830;
                    panda$core$String* $tmp1831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1821, $tmp1826);
                    $tmp1820 = $tmp1831;
                    panda$core$String* $tmp1833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1820, &$s1832);
                    $tmp1819 = $tmp1833;
                    $tmp1818 = $tmp1819;
                    $returnValue1492 = $tmp1818;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1818));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1819));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1820));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1826));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1821));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1822));
                    $tmp1811 = 0;
                    goto $l1809;
                    $l1834:;
                    $tmp1483 = 13;
                    goto $l1481;
                    $l1835:;
                    return $returnValue1492;
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1837, false);
                    if ($tmp1837.value) goto $l1838; else goto $l1839;
                    $l1839:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1840, (panda$core$Int64) { 496 });
                    abort();
                    $l1838:;
                }
                }
            }
            $tmp1811 = -1;
            goto $l1809;
            $l1809:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1813));
            switch ($tmp1811) {
                case 0: goto $l1834;
                case -1: goto $l1841;
            }
            $l1841:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1842, 12);
        panda$core$Bit $tmp1843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp1842);
        if ($tmp1843.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1845 = ((org$pandalanguage$pandac$Type**) ((char*) $match$448_91484->$data + 16));
            Type1844 = *$tmp1845;
            $tmp1846 = &$s1847;
            $returnValue1492 = $tmp1846;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1846));
            $tmp1483 = 14;
            goto $l1481;
            $l1848:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1850, 13);
        panda$core$Bit $tmp1851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp1850);
        if ($tmp1851.value) {
        {
            panda$core$String** $tmp1853 = ((panda$core$String**) ((char*) $match$448_91484->$data + 16));
            label1852 = *$tmp1853;
            if (((panda$core$Bit) { label1852 != NULL }).value) {
            {
                panda$core$String* $tmp1858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1857, label1852);
                $tmp1856 = $tmp1858;
                panda$core$String* $tmp1860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1856, &$s1859);
                $tmp1855 = $tmp1860;
                $tmp1854 = $tmp1855;
                $returnValue1492 = $tmp1854;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1854));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1855));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1856));
                $tmp1483 = 15;
                goto $l1481;
                $l1861:;
                return $returnValue1492;
            }
            }
            $tmp1863 = &$s1864;
            $returnValue1492 = $tmp1863;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1863));
            $tmp1483 = 16;
            goto $l1481;
            $l1865:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1867, 14);
        panda$core$Bit $tmp1868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp1867);
        if ($tmp1868.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1870 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 0));
            target1869 = *$tmp1870;
            org$pandalanguage$pandac$IRNode** $tmp1872 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 8));
            value1871 = *$tmp1872;
            if (((panda$core$Bit) { value1871 != NULL }).value) {
            {
                panda$core$String* $tmp1881 = (($fn1880) target1869->$class->vtable[0])(target1869);
                $tmp1879 = $tmp1881;
                panda$core$String* $tmp1883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1879, &$s1882);
                $tmp1878 = $tmp1883;
                org$pandalanguage$pandac$Type* $tmp1886 = (($fn1885) target1869->$class->vtable[2])(target1869);
                $tmp1884 = $tmp1886;
                panda$core$String* $tmp1887 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1878, ((panda$core$Object*) $tmp1884));
                $tmp1877 = $tmp1887;
                panda$core$String* $tmp1889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1877, &$s1888);
                $tmp1876 = $tmp1889;
                panda$core$String* $tmp1890 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1876, ((panda$core$Object*) value1871));
                $tmp1875 = $tmp1890;
                panda$core$String* $tmp1892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1875, &$s1891);
                $tmp1874 = $tmp1892;
                $tmp1873 = $tmp1874;
                $returnValue1492 = $tmp1873;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1873));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1874));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1875));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1876));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1877));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1884));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1878));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1879));
                $tmp1483 = 17;
                goto $l1481;
                $l1893:;
                return $returnValue1492;
            }
            }
            panda$core$String* $tmp1901 = (($fn1900) target1869->$class->vtable[0])(target1869);
            $tmp1899 = $tmp1901;
            panda$core$String* $tmp1903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1899, &$s1902);
            $tmp1898 = $tmp1903;
            org$pandalanguage$pandac$Type* $tmp1906 = (($fn1905) target1869->$class->vtable[2])(target1869);
            $tmp1904 = $tmp1906;
            panda$core$String* $tmp1907 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1898, ((panda$core$Object*) $tmp1904));
            $tmp1897 = $tmp1907;
            panda$core$String* $tmp1909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1897, &$s1908);
            $tmp1896 = $tmp1909;
            $tmp1895 = $tmp1896;
            $returnValue1492 = $tmp1895;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1895));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1896));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1897));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1904));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1898));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1899));
            $tmp1483 = 18;
            goto $l1481;
            $l1910:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1912, 15);
        panda$core$Bit $tmp1913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp1912);
        if ($tmp1913.value) {
        {
            panda$core$String** $tmp1915 = ((panda$core$String**) ((char*) $match$448_91484->$data + 16));
            label1914 = *$tmp1915;
            panda$collections$ImmutableArray** $tmp1917 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 24));
            statements1916 = *$tmp1917;
            org$pandalanguage$pandac$IRNode** $tmp1919 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 32));
            test1918 = *$tmp1919;
            int $tmp1922;
            {
                panda$core$MutableString* $tmp1926 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1926);
                $tmp1925 = $tmp1926;
                $tmp1924 = $tmp1925;
                result1923 = $tmp1924;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1924));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1925));
                if (((panda$core$Bit) { label1914 != NULL }).value) {
                {
                    panda$core$String* $tmp1929 = panda$core$String$convert$R$panda$core$String(label1914);
                    $tmp1928 = $tmp1929;
                    panda$core$String* $tmp1931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1928, &$s1930);
                    $tmp1927 = $tmp1931;
                    panda$core$MutableString$append$panda$core$String(result1923, $tmp1927);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1927));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1928));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1923, &$s1932);
                {
                    int $tmp1935;
                    {
                        ITable* $tmp1939 = ((panda$collections$Iterable*) statements1916)->$class->itable;
                        while ($tmp1939->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1939 = $tmp1939->next;
                        }
                        $fn1941 $tmp1940 = $tmp1939->methods[0];
                        panda$collections$Iterator* $tmp1942 = $tmp1940(((panda$collections$Iterable*) statements1916));
                        $tmp1938 = $tmp1942;
                        $tmp1937 = $tmp1938;
                        Iter$516$171936 = $tmp1937;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1937));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1938));
                        $l1943:;
                        ITable* $tmp1946 = Iter$516$171936->$class->itable;
                        while ($tmp1946->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1946 = $tmp1946->next;
                        }
                        $fn1948 $tmp1947 = $tmp1946->methods[0];
                        panda$core$Bit $tmp1949 = $tmp1947(Iter$516$171936);
                        panda$core$Bit $tmp1950 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1949);
                        bool $tmp1945 = $tmp1950.value;
                        if (!$tmp1945) goto $l1944;
                        {
                            int $tmp1953;
                            {
                                ITable* $tmp1957 = Iter$516$171936->$class->itable;
                                while ($tmp1957->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1957 = $tmp1957->next;
                                }
                                $fn1959 $tmp1958 = $tmp1957->methods[1];
                                panda$core$Object* $tmp1960 = $tmp1958(Iter$516$171936);
                                $tmp1956 = $tmp1960;
                                $tmp1955 = ((org$pandalanguage$pandac$IRNode*) $tmp1956);
                                s1954 = $tmp1955;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1955));
                                panda$core$Panda$unref$panda$core$Object($tmp1956);
                                panda$core$String* $tmp1963 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1954), &$s1962);
                                $tmp1961 = $tmp1963;
                                panda$core$MutableString$append$panda$core$String(result1923, $tmp1961);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1961));
                            }
                            $tmp1953 = -1;
                            goto $l1951;
                            $l1951:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1954));
                            s1954 = NULL;
                            switch ($tmp1953) {
                                case -1: goto $l1964;
                            }
                            $l1964:;
                        }
                        goto $l1943;
                        $l1944:;
                    }
                    $tmp1935 = -1;
                    goto $l1933;
                    $l1933:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$516$171936));
                    Iter$516$171936 = NULL;
                    switch ($tmp1935) {
                        case -1: goto $l1965;
                    }
                    $l1965:;
                }
                panda$core$String* $tmp1969 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1968, ((panda$core$Object*) test1918));
                $tmp1967 = $tmp1969;
                panda$core$String* $tmp1971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1967, &$s1970);
                $tmp1966 = $tmp1971;
                panda$core$MutableString$append$panda$core$String(result1923, $tmp1966);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1966));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1967));
                panda$core$String* $tmp1974 = panda$core$MutableString$finish$R$panda$core$String(result1923);
                $tmp1973 = $tmp1974;
                $tmp1972 = $tmp1973;
                $returnValue1492 = $tmp1972;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1972));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1973));
                $tmp1922 = 0;
                goto $l1920;
                $l1975:;
                $tmp1483 = 19;
                goto $l1481;
                $l1976:;
                return $returnValue1492;
            }
            $l1920:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1923));
            result1923 = NULL;
            switch ($tmp1922) {
                case 0: goto $l1975;
            }
            $l1978:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1979, 16);
        panda$core$Bit $tmp1980 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp1979);
        if ($tmp1980.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1982 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 0));
            m1981 = *$tmp1982;
            panda$collections$ImmutableArray** $tmp1984 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 8));
            args1983 = *$tmp1984;
            panda$core$String* $tmp1991 = (($fn1990) m1981->$class->vtable[0])(m1981);
            $tmp1989 = $tmp1991;
            panda$core$String* $tmp1993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1989, &$s1992);
            $tmp1988 = $tmp1993;
            ITable* $tmp1996 = ((panda$collections$ListView*) args1983)->$class->itable;
            while ($tmp1996->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1996 = $tmp1996->next;
            }
            $fn1998 $tmp1997 = $tmp1996->methods[5];
            panda$core$String* $tmp1999 = $tmp1997(((panda$collections$ListView*) args1983), &$s1995);
            $tmp1994 = $tmp1999;
            panda$core$String* $tmp2000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1988, $tmp1994);
            $tmp1987 = $tmp2000;
            panda$core$String* $tmp2002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1987, &$s2001);
            $tmp1986 = $tmp2002;
            $tmp1985 = $tmp1986;
            $returnValue1492 = $tmp1985;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1985));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1986));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1987));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1994));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1988));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1989));
            $tmp1483 = 20;
            goto $l1481;
            $l2003:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2005, 17);
        panda$core$Bit $tmp2006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2005);
        if ($tmp2006.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2008 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 0));
            expr2007 = *$tmp2008;
            org$pandalanguage$pandac$IRNode** $tmp2010 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 8));
            stmt2009 = *$tmp2010;
            panda$core$String* $tmp2017 = (($fn2016) expr2007->$class->vtable[0])(expr2007);
            $tmp2015 = $tmp2017;
            panda$core$String* $tmp2019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2015, &$s2018);
            $tmp2014 = $tmp2019;
            panda$core$String* $tmp2020 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2014, ((panda$core$Object*) stmt2009));
            $tmp2013 = $tmp2020;
            panda$core$String* $tmp2022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2013, &$s2021);
            $tmp2012 = $tmp2022;
            $tmp2011 = $tmp2012;
            $returnValue1492 = $tmp2011;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2011));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2012));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2013));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2014));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2015));
            $tmp1483 = 21;
            goto $l1481;
            $l2023:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2025, 18);
        panda$core$Bit $tmp2026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2025);
        if ($tmp2026.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2028 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 24));
            base2027 = *$tmp2028;
            org$pandalanguage$pandac$FieldDecl** $tmp2030 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$448_91484->$data + 32));
            field2029 = *$tmp2030;
            panda$core$String* $tmp2037 = (($fn2036) base2027->$class->vtable[0])(base2027);
            $tmp2035 = $tmp2037;
            panda$core$String* $tmp2039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2035, &$s2038);
            $tmp2034 = $tmp2039;
            panda$core$String* $tmp2040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2034, ((org$pandalanguage$pandac$Symbol*) field2029)->name);
            $tmp2033 = $tmp2040;
            panda$core$String* $tmp2042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2033, &$s2041);
            $tmp2032 = $tmp2042;
            $tmp2031 = $tmp2032;
            $returnValue1492 = $tmp2031;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2031));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2032));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2033));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2034));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2035));
            $tmp1483 = 22;
            goto $l1481;
            $l2043:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2045, 19);
        panda$core$Bit $tmp2046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2045);
        if ($tmp2046.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2048 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 16));
            test2047 = *$tmp2048;
            panda$collections$ImmutableArray** $tmp2050 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 24));
            ifTrue2049 = *$tmp2050;
            org$pandalanguage$pandac$IRNode** $tmp2052 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 32));
            ifFalse2051 = *$tmp2052;
            int $tmp2055;
            {
                panda$core$MutableString* $tmp2059 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp2063 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2062, ((panda$core$Object*) test2047));
                $tmp2061 = $tmp2063;
                panda$core$String* $tmp2065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2061, &$s2064);
                $tmp2060 = $tmp2065;
                panda$core$MutableString$init$panda$core$String($tmp2059, $tmp2060);
                $tmp2058 = $tmp2059;
                $tmp2057 = $tmp2058;
                result2056 = $tmp2057;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2057));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2058));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2060));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2061));
                {
                    int $tmp2068;
                    {
                        ITable* $tmp2072 = ((panda$collections$Iterable*) ifTrue2049)->$class->itable;
                        while ($tmp2072->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2072 = $tmp2072->next;
                        }
                        $fn2074 $tmp2073 = $tmp2072->methods[0];
                        panda$collections$Iterator* $tmp2075 = $tmp2073(((panda$collections$Iterable*) ifTrue2049));
                        $tmp2071 = $tmp2075;
                        $tmp2070 = $tmp2071;
                        Iter$529$172069 = $tmp2070;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2070));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2071));
                        $l2076:;
                        ITable* $tmp2079 = Iter$529$172069->$class->itable;
                        while ($tmp2079->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2079 = $tmp2079->next;
                        }
                        $fn2081 $tmp2080 = $tmp2079->methods[0];
                        panda$core$Bit $tmp2082 = $tmp2080(Iter$529$172069);
                        panda$core$Bit $tmp2083 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2082);
                        bool $tmp2078 = $tmp2083.value;
                        if (!$tmp2078) goto $l2077;
                        {
                            int $tmp2086;
                            {
                                ITable* $tmp2090 = Iter$529$172069->$class->itable;
                                while ($tmp2090->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2090 = $tmp2090->next;
                                }
                                $fn2092 $tmp2091 = $tmp2090->methods[1];
                                panda$core$Object* $tmp2093 = $tmp2091(Iter$529$172069);
                                $tmp2089 = $tmp2093;
                                $tmp2088 = ((org$pandalanguage$pandac$IRNode*) $tmp2089);
                                s2087 = $tmp2088;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2088));
                                panda$core$Panda$unref$panda$core$Object($tmp2089);
                                panda$core$String* $tmp2096 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2087), &$s2095);
                                $tmp2094 = $tmp2096;
                                panda$core$MutableString$append$panda$core$String(result2056, $tmp2094);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2094));
                            }
                            $tmp2086 = -1;
                            goto $l2084;
                            $l2084:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2087));
                            s2087 = NULL;
                            switch ($tmp2086) {
                                case -1: goto $l2097;
                            }
                            $l2097:;
                        }
                        goto $l2076;
                        $l2077:;
                    }
                    $tmp2068 = -1;
                    goto $l2066;
                    $l2066:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$529$172069));
                    Iter$529$172069 = NULL;
                    switch ($tmp2068) {
                        case -1: goto $l2098;
                    }
                    $l2098:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2100, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2099, $tmp2100);
                panda$core$MutableString$append$panda$core$Char8(result2056, $tmp2099);
                if (((panda$core$Bit) { ifFalse2051 != NULL }).value) {
                {
                    panda$core$String* $tmp2104 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2103, ((panda$core$Object*) ifFalse2051));
                    $tmp2102 = $tmp2104;
                    panda$core$String* $tmp2106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2102, &$s2105);
                    $tmp2101 = $tmp2106;
                    panda$core$MutableString$append$panda$core$String(result2056, $tmp2101);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2101));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2102));
                }
                }
                panda$core$String* $tmp2109 = panda$core$MutableString$finish$R$panda$core$String(result2056);
                $tmp2108 = $tmp2109;
                $tmp2107 = $tmp2108;
                $returnValue1492 = $tmp2107;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2107));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2108));
                $tmp2055 = 0;
                goto $l2053;
                $l2110:;
                $tmp1483 = 23;
                goto $l1481;
                $l2111:;
                return $returnValue1492;
            }
            $l2053:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2056));
            result2056 = NULL;
            switch ($tmp2055) {
                case 0: goto $l2110;
            }
            $l2113:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2114, 20);
        panda$core$Bit $tmp2115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2114);
        if ($tmp2115.value) {
        {
            panda$core$UInt64* $tmp2117 = ((panda$core$UInt64*) ((char*) $match$448_91484->$data + 24));
            value2116 = *$tmp2117;
            panda$core$String* $tmp2120 = panda$core$UInt64$convert$R$panda$core$String(value2116);
            $tmp2119 = $tmp2120;
            $tmp2118 = $tmp2119;
            $returnValue1492 = $tmp2118;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2118));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2119));
            $tmp1483 = 24;
            goto $l1481;
            $l2121:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2123, 21);
        panda$core$Bit $tmp2124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2123);
        if ($tmp2124.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2126 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 16));
            value2125 = *$tmp2126;
            panda$core$String* $tmp2131 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2130, ((panda$core$Object*) value2125));
            $tmp2129 = $tmp2131;
            panda$core$String* $tmp2133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2129, &$s2132);
            $tmp2128 = $tmp2133;
            $tmp2127 = $tmp2128;
            $returnValue1492 = $tmp2127;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2127));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2128));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2129));
            $tmp1483 = 25;
            goto $l1481;
            $l2134:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2136, 22);
        panda$core$Bit $tmp2137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2136);
        if ($tmp2137.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2139 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 16));
            value2138 = *$tmp2139;
            panda$core$String* $tmp2144 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2143, ((panda$core$Object*) value2138));
            $tmp2142 = $tmp2144;
            panda$core$String* $tmp2146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2142, &$s2145);
            $tmp2141 = $tmp2146;
            $tmp2140 = $tmp2141;
            $returnValue1492 = $tmp2140;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2140));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2141));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2142));
            $tmp1483 = 26;
            goto $l1481;
            $l2147:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2149, 23);
        panda$core$Bit $tmp2150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2149);
        if ($tmp2150.value) {
        {
            panda$core$String** $tmp2152 = ((panda$core$String**) ((char*) $match$448_91484->$data + 16));
            label2151 = *$tmp2152;
            panda$collections$ImmutableArray** $tmp2154 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 24));
            statements2153 = *$tmp2154;
            int $tmp2157;
            {
                panda$core$MutableString* $tmp2161 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2161);
                $tmp2160 = $tmp2161;
                $tmp2159 = $tmp2160;
                result2158 = $tmp2159;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2159));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2160));
                if (((panda$core$Bit) { label2151 != NULL }).value) {
                {
                    panda$core$String* $tmp2164 = panda$core$String$convert$R$panda$core$String(label2151);
                    $tmp2163 = $tmp2164;
                    panda$core$String* $tmp2166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2163, &$s2165);
                    $tmp2162 = $tmp2166;
                    panda$core$MutableString$append$panda$core$String(result2158, $tmp2162);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2162));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2163));
                }
                }
                panda$core$MutableString$append$panda$core$String(result2158, &$s2167);
                {
                    int $tmp2170;
                    {
                        ITable* $tmp2174 = ((panda$collections$Iterable*) statements2153)->$class->itable;
                        while ($tmp2174->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2174 = $tmp2174->next;
                        }
                        $fn2176 $tmp2175 = $tmp2174->methods[0];
                        panda$collections$Iterator* $tmp2177 = $tmp2175(((panda$collections$Iterable*) statements2153));
                        $tmp2173 = $tmp2177;
                        $tmp2172 = $tmp2173;
                        Iter$549$172171 = $tmp2172;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2172));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2173));
                        $l2178:;
                        ITable* $tmp2181 = Iter$549$172171->$class->itable;
                        while ($tmp2181->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2181 = $tmp2181->next;
                        }
                        $fn2183 $tmp2182 = $tmp2181->methods[0];
                        panda$core$Bit $tmp2184 = $tmp2182(Iter$549$172171);
                        panda$core$Bit $tmp2185 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2184);
                        bool $tmp2180 = $tmp2185.value;
                        if (!$tmp2180) goto $l2179;
                        {
                            int $tmp2188;
                            {
                                ITable* $tmp2192 = Iter$549$172171->$class->itable;
                                while ($tmp2192->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2192 = $tmp2192->next;
                                }
                                $fn2194 $tmp2193 = $tmp2192->methods[1];
                                panda$core$Object* $tmp2195 = $tmp2193(Iter$549$172171);
                                $tmp2191 = $tmp2195;
                                $tmp2190 = ((org$pandalanguage$pandac$IRNode*) $tmp2191);
                                s2189 = $tmp2190;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2190));
                                panda$core$Panda$unref$panda$core$Object($tmp2191);
                                panda$core$String* $tmp2198 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2189), &$s2197);
                                $tmp2196 = $tmp2198;
                                panda$core$MutableString$append$panda$core$String(result2158, $tmp2196);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2196));
                            }
                            $tmp2188 = -1;
                            goto $l2186;
                            $l2186:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2189));
                            s2189 = NULL;
                            switch ($tmp2188) {
                                case -1: goto $l2199;
                            }
                            $l2199:;
                        }
                        goto $l2178;
                        $l2179:;
                    }
                    $tmp2170 = -1;
                    goto $l2168;
                    $l2168:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$549$172171));
                    Iter$549$172171 = NULL;
                    switch ($tmp2170) {
                        case -1: goto $l2200;
                    }
                    $l2200:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2202, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2201, $tmp2202);
                panda$core$MutableString$append$panda$core$Char8(result2158, $tmp2201);
                panda$core$String* $tmp2205 = panda$core$MutableString$finish$R$panda$core$String(result2158);
                $tmp2204 = $tmp2205;
                $tmp2203 = $tmp2204;
                $returnValue1492 = $tmp2203;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2203));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2204));
                $tmp2157 = 0;
                goto $l2155;
                $l2206:;
                $tmp1483 = 27;
                goto $l1481;
                $l2207:;
                return $returnValue1492;
            }
            $l2155:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2158));
            result2158 = NULL;
            switch ($tmp2157) {
                case 0: goto $l2206;
            }
            $l2209:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2210, 24);
        panda$core$Bit $tmp2211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2210);
        if ($tmp2211.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2213 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 16));
            value2212 = *$tmp2213;
            panda$collections$ImmutableArray** $tmp2215 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 24));
            whens2214 = *$tmp2215;
            panda$collections$ImmutableArray** $tmp2217 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 32));
            other2216 = *$tmp2217;
            int $tmp2220;
            {
                panda$core$MutableString* $tmp2224 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp2228 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2227, ((panda$core$Object*) value2212));
                $tmp2226 = $tmp2228;
                panda$core$String* $tmp2230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2226, &$s2229);
                $tmp2225 = $tmp2230;
                panda$core$MutableString$init$panda$core$String($tmp2224, $tmp2225);
                $tmp2223 = $tmp2224;
                $tmp2222 = $tmp2223;
                result2221 = $tmp2222;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2222));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2223));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2225));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2226));
                {
                    int $tmp2233;
                    {
                        ITable* $tmp2237 = ((panda$collections$Iterable*) whens2214)->$class->itable;
                        while ($tmp2237->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2237 = $tmp2237->next;
                        }
                        $fn2239 $tmp2238 = $tmp2237->methods[0];
                        panda$collections$Iterator* $tmp2240 = $tmp2238(((panda$collections$Iterable*) whens2214));
                        $tmp2236 = $tmp2240;
                        $tmp2235 = $tmp2236;
                        Iter$556$172234 = $tmp2235;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2235));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2236));
                        $l2241:;
                        ITable* $tmp2244 = Iter$556$172234->$class->itable;
                        while ($tmp2244->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2244 = $tmp2244->next;
                        }
                        $fn2246 $tmp2245 = $tmp2244->methods[0];
                        panda$core$Bit $tmp2247 = $tmp2245(Iter$556$172234);
                        panda$core$Bit $tmp2248 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2247);
                        bool $tmp2243 = $tmp2248.value;
                        if (!$tmp2243) goto $l2242;
                        {
                            int $tmp2251;
                            {
                                ITable* $tmp2255 = Iter$556$172234->$class->itable;
                                while ($tmp2255->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2255 = $tmp2255->next;
                                }
                                $fn2257 $tmp2256 = $tmp2255->methods[1];
                                panda$core$Object* $tmp2258 = $tmp2256(Iter$556$172234);
                                $tmp2254 = $tmp2258;
                                $tmp2253 = ((org$pandalanguage$pandac$IRNode*) $tmp2254);
                                w2252 = $tmp2253;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2253));
                                panda$core$Panda$unref$panda$core$Object($tmp2254);
                                panda$core$String* $tmp2261 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w2252), &$s2260);
                                $tmp2259 = $tmp2261;
                                panda$core$MutableString$append$panda$core$String(result2221, $tmp2259);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2259));
                            }
                            $tmp2251 = -1;
                            goto $l2249;
                            $l2249:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w2252));
                            w2252 = NULL;
                            switch ($tmp2251) {
                                case -1: goto $l2262;
                            }
                            $l2262:;
                        }
                        goto $l2241;
                        $l2242:;
                    }
                    $tmp2233 = -1;
                    goto $l2231;
                    $l2231:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$556$172234));
                    Iter$556$172234 = NULL;
                    switch ($tmp2233) {
                        case -1: goto $l2263;
                    }
                    $l2263:;
                }
                if (((panda$core$Bit) { other2216 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2221, &$s2264);
                    {
                        int $tmp2267;
                        {
                            ITable* $tmp2271 = ((panda$collections$Iterable*) other2216)->$class->itable;
                            while ($tmp2271->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp2271 = $tmp2271->next;
                            }
                            $fn2273 $tmp2272 = $tmp2271->methods[0];
                            panda$collections$Iterator* $tmp2274 = $tmp2272(((panda$collections$Iterable*) other2216));
                            $tmp2270 = $tmp2274;
                            $tmp2269 = $tmp2270;
                            Iter$561$212268 = $tmp2269;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2269));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2270));
                            $l2275:;
                            ITable* $tmp2278 = Iter$561$212268->$class->itable;
                            while ($tmp2278->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2278 = $tmp2278->next;
                            }
                            $fn2280 $tmp2279 = $tmp2278->methods[0];
                            panda$core$Bit $tmp2281 = $tmp2279(Iter$561$212268);
                            panda$core$Bit $tmp2282 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2281);
                            bool $tmp2277 = $tmp2282.value;
                            if (!$tmp2277) goto $l2276;
                            {
                                int $tmp2285;
                                {
                                    ITable* $tmp2289 = Iter$561$212268->$class->itable;
                                    while ($tmp2289->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp2289 = $tmp2289->next;
                                    }
                                    $fn2291 $tmp2290 = $tmp2289->methods[1];
                                    panda$core$Object* $tmp2292 = $tmp2290(Iter$561$212268);
                                    $tmp2288 = $tmp2292;
                                    $tmp2287 = ((org$pandalanguage$pandac$IRNode*) $tmp2288);
                                    s2286 = $tmp2287;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2287));
                                    panda$core$Panda$unref$panda$core$Object($tmp2288);
                                    panda$core$String* $tmp2295 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2286), &$s2294);
                                    $tmp2293 = $tmp2295;
                                    panda$core$MutableString$append$panda$core$String(result2221, $tmp2293);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2293));
                                }
                                $tmp2285 = -1;
                                goto $l2283;
                                $l2283:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2286));
                                s2286 = NULL;
                                switch ($tmp2285) {
                                    case -1: goto $l2296;
                                }
                                $l2296:;
                            }
                            goto $l2275;
                            $l2276:;
                        }
                        $tmp2267 = -1;
                        goto $l2265;
                        $l2265:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$561$212268));
                        Iter$561$212268 = NULL;
                        switch ($tmp2267) {
                            case -1: goto $l2297;
                        }
                        $l2297:;
                    }
                }
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2299, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2298, $tmp2299);
                panda$core$MutableString$append$panda$core$Char8(result2221, $tmp2298);
                panda$core$String* $tmp2302 = panda$core$MutableString$finish$R$panda$core$String(result2221);
                $tmp2301 = $tmp2302;
                $tmp2300 = $tmp2301;
                $returnValue1492 = $tmp2300;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2300));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2301));
                $tmp2220 = 0;
                goto $l2218;
                $l2303:;
                $tmp1483 = 28;
                goto $l1481;
                $l2304:;
                return $returnValue1492;
            }
            $l2218:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2221));
            result2221 = NULL;
            switch ($tmp2220) {
                case 0: goto $l2303;
            }
            $l2306:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2307, 25);
        panda$core$Bit $tmp2308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2307);
        if ($tmp2308.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2310 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 24));
            target2309 = *$tmp2310;
            org$pandalanguage$pandac$MethodRef** $tmp2312 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$448_91484->$data + 32));
            m2311 = *$tmp2312;
            if (((panda$core$Bit) { target2309 != NULL }).value) {
            {
                panda$core$String* $tmp2319 = (($fn2318) target2309->$class->vtable[0])(target2309);
                $tmp2317 = $tmp2319;
                panda$core$String* $tmp2321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2317, &$s2320);
                $tmp2316 = $tmp2321;
                panda$core$String* $tmp2322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2316, ((org$pandalanguage$pandac$Symbol*) m2311->value)->name);
                $tmp2315 = $tmp2322;
                panda$core$String* $tmp2324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2315, &$s2323);
                $tmp2314 = $tmp2324;
                $tmp2313 = $tmp2314;
                $returnValue1492 = $tmp2313;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2313));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2314));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2315));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2316));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2317));
                $tmp1483 = 29;
                goto $l1481;
                $l2325:;
                return $returnValue1492;
            }
            }
            $tmp2327 = ((org$pandalanguage$pandac$Symbol*) m2311->value)->name;
            $returnValue1492 = $tmp2327;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2327));
            $tmp1483 = 30;
            goto $l1481;
            $l2328:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2330, 26);
        panda$core$Bit $tmp2331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2330);
        if ($tmp2331.value) {
        {
            panda$core$UInt64* $tmp2333 = ((panda$core$UInt64*) ((char*) $match$448_91484->$data + 24));
            value2332 = *$tmp2333;
            panda$core$UInt64$wrapper* $tmp2338;
            $tmp2338 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
            $tmp2338->value = value2332;
            $tmp2337 = ((panda$core$Object*) $tmp2338);
            panda$core$String* $tmp2339 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2336, $tmp2337);
            $tmp2335 = $tmp2339;
            $tmp2334 = $tmp2335;
            $returnValue1492 = $tmp2334;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2334));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2335));
            panda$core$Panda$unref$panda$core$Object($tmp2337);
            $tmp1483 = 31;
            goto $l1481;
            $l2340:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2342, 27);
        panda$core$Bit $tmp2343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2342);
        if ($tmp2343.value) {
        {
            $tmp2344 = &$s2345;
            $returnValue1492 = $tmp2344;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2344));
            $tmp1483 = 32;
            goto $l1481;
            $l2346:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2348, 28);
        panda$core$Bit $tmp2349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2348);
        if ($tmp2349.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2351 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$448_91484->$data + 16));
            op2350 = *$tmp2351;
            org$pandalanguage$pandac$IRNode** $tmp2353 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 24));
            base2352 = *$tmp2353;
            panda$core$String* $tmp2359 = org$pandalanguage$pandac$parser$Token$Kind$convert$R$panda$core$String(op2350);
            $tmp2358 = $tmp2359;
            panda$core$String* $tmp2361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2358, &$s2360);
            $tmp2357 = $tmp2361;
            panda$core$String* $tmp2362 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2357, ((panda$core$Object*) base2352));
            $tmp2356 = $tmp2362;
            panda$core$String* $tmp2364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2356, &$s2363);
            $tmp2355 = $tmp2364;
            $tmp2354 = $tmp2355;
            $returnValue1492 = $tmp2354;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2354));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2355));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2356));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2357));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2358));
            $tmp1483 = 33;
            goto $l1481;
            $l2365:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2367, 29);
        panda$core$Bit $tmp2368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2367);
        if ($tmp2368.value) {
        {
            panda$core$String** $tmp2370 = ((panda$core$String**) ((char*) $match$448_91484->$data + 16));
            label2369 = *$tmp2370;
            org$pandalanguage$pandac$IRNode** $tmp2372 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 24));
            target2371 = *$tmp2372;
            org$pandalanguage$pandac$IRNode** $tmp2374 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 32));
            list2373 = *$tmp2374;
            panda$collections$ImmutableArray** $tmp2376 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 40));
            statements2375 = *$tmp2376;
            int $tmp2379;
            {
                panda$core$MutableString* $tmp2383 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2383);
                $tmp2382 = $tmp2383;
                $tmp2381 = $tmp2382;
                result2380 = $tmp2381;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2381));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2382));
                if (((panda$core$Bit) { label2369 != NULL }).value) {
                {
                    panda$core$String* $tmp2386 = panda$core$String$convert$R$panda$core$String(label2369);
                    $tmp2385 = $tmp2386;
                    panda$core$String* $tmp2388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2385, &$s2387);
                    $tmp2384 = $tmp2388;
                    panda$core$MutableString$append$panda$core$String(result2380, $tmp2384);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2384));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2385));
                }
                }
                panda$core$String* $tmp2394 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2393, ((panda$core$Object*) target2371));
                $tmp2392 = $tmp2394;
                panda$core$String* $tmp2396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2392, &$s2395);
                $tmp2391 = $tmp2396;
                panda$core$String* $tmp2397 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2391, ((panda$core$Object*) list2373));
                $tmp2390 = $tmp2397;
                panda$core$String* $tmp2399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2390, &$s2398);
                $tmp2389 = $tmp2399;
                panda$core$MutableString$append$panda$core$String(result2380, $tmp2389);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2389));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2390));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2391));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2392));
                {
                    int $tmp2402;
                    {
                        ITable* $tmp2406 = ((panda$collections$Iterable*) statements2375)->$class->itable;
                        while ($tmp2406->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2406 = $tmp2406->next;
                        }
                        $fn2408 $tmp2407 = $tmp2406->methods[0];
                        panda$collections$Iterator* $tmp2409 = $tmp2407(((panda$collections$Iterable*) statements2375));
                        $tmp2405 = $tmp2409;
                        $tmp2404 = $tmp2405;
                        Iter$584$172403 = $tmp2404;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2404));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2405));
                        $l2410:;
                        ITable* $tmp2413 = Iter$584$172403->$class->itable;
                        while ($tmp2413->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2413 = $tmp2413->next;
                        }
                        $fn2415 $tmp2414 = $tmp2413->methods[0];
                        panda$core$Bit $tmp2416 = $tmp2414(Iter$584$172403);
                        panda$core$Bit $tmp2417 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2416);
                        bool $tmp2412 = $tmp2417.value;
                        if (!$tmp2412) goto $l2411;
                        {
                            int $tmp2420;
                            {
                                ITable* $tmp2424 = Iter$584$172403->$class->itable;
                                while ($tmp2424->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2424 = $tmp2424->next;
                                }
                                $fn2426 $tmp2425 = $tmp2424->methods[1];
                                panda$core$Object* $tmp2427 = $tmp2425(Iter$584$172403);
                                $tmp2423 = $tmp2427;
                                $tmp2422 = ((org$pandalanguage$pandac$IRNode*) $tmp2423);
                                s2421 = $tmp2422;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2422));
                                panda$core$Panda$unref$panda$core$Object($tmp2423);
                                panda$core$String* $tmp2430 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2421), &$s2429);
                                $tmp2428 = $tmp2430;
                                panda$core$MutableString$append$panda$core$String(result2380, $tmp2428);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2428));
                            }
                            $tmp2420 = -1;
                            goto $l2418;
                            $l2418:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2421));
                            s2421 = NULL;
                            switch ($tmp2420) {
                                case -1: goto $l2431;
                            }
                            $l2431:;
                        }
                        goto $l2410;
                        $l2411:;
                    }
                    $tmp2402 = -1;
                    goto $l2400;
                    $l2400:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$584$172403));
                    Iter$584$172403 = NULL;
                    switch ($tmp2402) {
                        case -1: goto $l2432;
                    }
                    $l2432:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2434, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2433, $tmp2434);
                panda$core$MutableString$append$panda$core$Char8(result2380, $tmp2433);
                panda$core$String* $tmp2437 = panda$core$MutableString$finish$R$panda$core$String(result2380);
                $tmp2436 = $tmp2437;
                $tmp2435 = $tmp2436;
                $returnValue1492 = $tmp2435;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2435));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2436));
                $tmp2379 = 0;
                goto $l2377;
                $l2438:;
                $tmp1483 = 34;
                goto $l1481;
                $l2439:;
                return $returnValue1492;
            }
            $l2377:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2380));
            result2380 = NULL;
            switch ($tmp2379) {
                case 0: goto $l2438;
            }
            $l2441:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2442, 30);
        panda$core$Bit $tmp2443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2442);
        if ($tmp2443.value) {
        {
            panda$core$Real64* $tmp2445 = ((panda$core$Real64*) ((char*) $match$448_91484->$data + 24));
            value2444 = *$tmp2445;
            panda$core$String* $tmp2448 = panda$core$Real64$convert$R$panda$core$String(value2444);
            $tmp2447 = $tmp2448;
            $tmp2446 = $tmp2447;
            $returnValue1492 = $tmp2446;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2446));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2447));
            $tmp1483 = 35;
            goto $l1481;
            $l2449:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2451, 31);
        panda$core$Bit $tmp2452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2451);
        if ($tmp2452.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2454 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 16));
            value2453 = *$tmp2454;
            if (((panda$core$Bit) { value2453 != NULL }).value) {
            {
                panda$core$String* $tmp2459 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2458, ((panda$core$Object*) value2453));
                $tmp2457 = $tmp2459;
                panda$core$String* $tmp2461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2457, &$s2460);
                $tmp2456 = $tmp2461;
                $tmp2455 = $tmp2456;
                $returnValue1492 = $tmp2455;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2455));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2456));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2457));
                $tmp1483 = 36;
                goto $l1481;
                $l2462:;
                return $returnValue1492;
            }
            }
            $tmp2464 = &$s2465;
            $returnValue1492 = $tmp2464;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2464));
            $tmp1483 = 37;
            goto $l1481;
            $l2466:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2468, 32);
        panda$core$Bit $tmp2469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2468);
        if ($tmp2469.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2471 = ((org$pandalanguage$pandac$Type**) ((char*) $match$448_91484->$data + 16));
            type2470 = *$tmp2471;
            panda$core$Int64* $tmp2473 = ((panda$core$Int64*) ((char*) $match$448_91484->$data + 24));
            id2472 = *$tmp2473;
            panda$core$Int64$wrapper* $tmp2479;
            $tmp2479 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2479->value = id2472;
            $tmp2478 = ((panda$core$Object*) $tmp2479);
            panda$core$String* $tmp2480 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2477, $tmp2478);
            $tmp2476 = $tmp2480;
            panda$core$String* $tmp2482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2476, &$s2481);
            $tmp2475 = $tmp2482;
            $tmp2474 = $tmp2475;
            $returnValue1492 = $tmp2474;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2474));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2475));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2476));
            panda$core$Panda$unref$panda$core$Object($tmp2478);
            $tmp1483 = 38;
            goto $l1481;
            $l2483:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2485, 33);
        panda$core$Bit $tmp2486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2485);
        if ($tmp2486.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2488 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 0));
            base2487 = *$tmp2488;
            panda$core$Int64* $tmp2490 = ((panda$core$Int64*) ((char*) $match$448_91484->$data + 8));
            id2489 = *$tmp2490;
            panda$core$Int64$wrapper* $tmp2498;
            $tmp2498 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2498->value = id2489;
            $tmp2497 = ((panda$core$Object*) $tmp2498);
            panda$core$String* $tmp2499 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2496, $tmp2497);
            $tmp2495 = $tmp2499;
            panda$core$String* $tmp2501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2495, &$s2500);
            $tmp2494 = $tmp2501;
            panda$core$String* $tmp2502 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2494, ((panda$core$Object*) base2487));
            $tmp2493 = $tmp2502;
            panda$core$String* $tmp2504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2493, &$s2503);
            $tmp2492 = $tmp2504;
            $tmp2491 = $tmp2492;
            $returnValue1492 = $tmp2491;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2491));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2492));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2493));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2494));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2495));
            panda$core$Panda$unref$panda$core$Object($tmp2497);
            $tmp1483 = 39;
            goto $l1481;
            $l2505:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2507, 34);
        panda$core$Bit $tmp2508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2507);
        if ($tmp2508.value) {
        {
            $tmp2509 = &$s2510;
            $returnValue1492 = $tmp2509;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2509));
            $tmp1483 = 40;
            goto $l1481;
            $l2511:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2513, 35);
        panda$core$Bit $tmp2514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2513);
        if ($tmp2514.value) {
        {
            $tmp2515 = &$s2516;
            $returnValue1492 = $tmp2515;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2515));
            $tmp1483 = 41;
            goto $l1481;
            $l2517:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2519, 36);
        panda$core$Bit $tmp2520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2519);
        if ($tmp2520.value) {
        {
            panda$core$String** $tmp2522 = ((panda$core$String**) ((char*) $match$448_91484->$data + 16));
            str2521 = *$tmp2522;
            panda$core$String* $tmp2526 = panda$core$String$format$panda$core$String$R$panda$core$String(str2521, &$s2525);
            $tmp2524 = $tmp2526;
            $tmp2523 = $tmp2524;
            $returnValue1492 = $tmp2523;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2523));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2524));
            $tmp1483 = 42;
            goto $l1481;
            $l2527:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2529, 37);
        panda$core$Bit $tmp2530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2529);
        if ($tmp2530.value) {
        {
            $tmp2531 = &$s2532;
            $returnValue1492 = $tmp2531;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2531));
            $tmp1483 = 43;
            goto $l1481;
            $l2533:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2535, 38);
        panda$core$Bit $tmp2536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2535);
        if ($tmp2536.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2538 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 16));
            test2537 = *$tmp2538;
            org$pandalanguage$pandac$IRNode** $tmp2540 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 24));
            ifTrue2539 = *$tmp2540;
            org$pandalanguage$pandac$IRNode** $tmp2542 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 32));
            ifFalse2541 = *$tmp2542;
            panda$core$String* $tmp2551 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2550, ((panda$core$Object*) test2537));
            $tmp2549 = $tmp2551;
            panda$core$String* $tmp2553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2549, &$s2552);
            $tmp2548 = $tmp2553;
            panda$core$String* $tmp2554 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2548, ((panda$core$Object*) ifTrue2539));
            $tmp2547 = $tmp2554;
            panda$core$String* $tmp2556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2547, &$s2555);
            $tmp2546 = $tmp2556;
            panda$core$String* $tmp2557 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2546, ((panda$core$Object*) ifFalse2541));
            $tmp2545 = $tmp2557;
            panda$core$String* $tmp2559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2545, &$s2558);
            $tmp2544 = $tmp2559;
            $tmp2543 = $tmp2544;
            $returnValue1492 = $tmp2543;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2543));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2544));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2545));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2546));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2547));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2548));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2549));
            $tmp1483 = 44;
            goto $l1481;
            $l2560:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2562, 39);
        panda$core$Bit $tmp2563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2562);
        if ($tmp2563.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2565 = ((org$pandalanguage$pandac$Type**) ((char*) $match$448_91484->$data + 16));
            type2564 = *$tmp2565;
            panda$core$String* $tmp2568 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type2564);
            $tmp2567 = $tmp2568;
            $tmp2566 = $tmp2567;
            $returnValue1492 = $tmp2566;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2566));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2567));
            $tmp1483 = 45;
            goto $l1481;
            $l2569:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2571, 40);
        panda$core$Bit $tmp2572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2571);
        if ($tmp2572.value) {
        {
            panda$core$String** $tmp2574 = ((panda$core$String**) ((char*) $match$448_91484->$data + 16));
            name2573 = *$tmp2574;
            $tmp2575 = name2573;
            $returnValue1492 = $tmp2575;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2575));
            $tmp1483 = 46;
            goto $l1481;
            $l2576:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2578, 41);
        panda$core$Bit $tmp2579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2578);
        if ($tmp2579.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2581 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 24));
            base2580 = *$tmp2581;
            panda$collections$ImmutableArray** $tmp2583 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 32));
            args2582 = *$tmp2583;
            panda$core$String* $tmp2590 = (($fn2589) base2580->$class->vtable[0])(base2580);
            $tmp2588 = $tmp2590;
            panda$core$String* $tmp2592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2588, &$s2591);
            $tmp2587 = $tmp2592;
            ITable* $tmp2594 = ((panda$collections$ListView*) args2582)->$class->itable;
            while ($tmp2594->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2594 = $tmp2594->next;
            }
            $fn2596 $tmp2595 = $tmp2594->methods[4];
            panda$core$String* $tmp2597 = $tmp2595(((panda$collections$ListView*) args2582));
            $tmp2593 = $tmp2597;
            panda$core$String* $tmp2598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2587, $tmp2593);
            $tmp2586 = $tmp2598;
            panda$core$String* $tmp2600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2586, &$s2599);
            $tmp2585 = $tmp2600;
            $tmp2584 = $tmp2585;
            $returnValue1492 = $tmp2584;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2584));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2585));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2586));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2593));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2587));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2588));
            $tmp1483 = 47;
            goto $l1481;
            $l2601:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2603, 42);
        panda$core$Bit $tmp2604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2603);
        if ($tmp2604.value) {
        {
            panda$collections$ImmutableArray** $tmp2606 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 16));
            params2605 = *$tmp2606;
            org$pandalanguage$pandac$ASTNode** $tmp2608 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$448_91484->$data + 24));
            body2607 = *$tmp2608;
            ITable* $tmp2616 = ((panda$collections$ListView*) params2605)->$class->itable;
            while ($tmp2616->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2616 = $tmp2616->next;
            }
            $fn2618 $tmp2617 = $tmp2616->methods[4];
            panda$core$String* $tmp2619 = $tmp2617(((panda$collections$ListView*) params2605));
            $tmp2615 = $tmp2619;
            panda$core$String* $tmp2620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2614, $tmp2615);
            $tmp2613 = $tmp2620;
            panda$core$String* $tmp2622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2613, &$s2621);
            $tmp2612 = $tmp2622;
            panda$core$String* $tmp2623 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2612, ((panda$core$Object*) body2607));
            $tmp2611 = $tmp2623;
            panda$core$String* $tmp2625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2611, &$s2624);
            $tmp2610 = $tmp2625;
            $tmp2609 = $tmp2610;
            $returnValue1492 = $tmp2609;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2609));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2610));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2611));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2612));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2613));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2615));
            $tmp1483 = 48;
            goto $l1481;
            $l2626:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2628, 43);
        panda$core$Bit $tmp2629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2628);
        if ($tmp2629.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2631 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 24));
            target2630 = *$tmp2631;
            panda$collections$ImmutableArray** $tmp2633 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 32));
            methods2632 = *$tmp2633;
            panda$collections$ImmutableArray** $tmp2635 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 40));
            args2634 = *$tmp2635;
            if (((panda$core$Bit) { target2630 != NULL }).value) {
            {
                panda$core$String* $tmp2644 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2643, ((panda$core$Object*) target2630));
                $tmp2642 = $tmp2644;
                panda$core$String* $tmp2646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2642, &$s2645);
                $tmp2641 = $tmp2646;
                panda$core$Int64$init$builtin_int64(&$tmp2648, 0);
                panda$core$Object* $tmp2649 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2632, $tmp2648);
                $tmp2647 = $tmp2649;
                panda$core$String* $tmp2650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2641, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2647)->value)->name);
                $tmp2640 = $tmp2650;
                panda$core$String* $tmp2652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2640, &$s2651);
                $tmp2639 = $tmp2652;
                ITable* $tmp2654 = ((panda$collections$ListView*) args2634)->$class->itable;
                while ($tmp2654->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2654 = $tmp2654->next;
                }
                $fn2656 $tmp2655 = $tmp2654->methods[4];
                panda$core$String* $tmp2657 = $tmp2655(((panda$collections$ListView*) args2634));
                $tmp2653 = $tmp2657;
                panda$core$String* $tmp2658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2639, $tmp2653);
                $tmp2638 = $tmp2658;
                panda$core$String* $tmp2660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2638, &$s2659);
                $tmp2637 = $tmp2660;
                $tmp2636 = $tmp2637;
                $returnValue1492 = $tmp2636;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2636));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2637));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2638));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2653));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2639));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2640));
                panda$core$Panda$unref$panda$core$Object($tmp2647);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2641));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2642));
                $tmp1483 = 49;
                goto $l1481;
                $l2661:;
                return $returnValue1492;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp2670, 0);
                panda$core$Object* $tmp2671 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2632, $tmp2670);
                $tmp2669 = $tmp2671;
                panda$core$String* $tmp2672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2668, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2669)->value)->name);
                $tmp2667 = $tmp2672;
                panda$core$String* $tmp2674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2667, &$s2673);
                $tmp2666 = $tmp2674;
                ITable* $tmp2676 = ((panda$collections$ListView*) args2634)->$class->itable;
                while ($tmp2676->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2676 = $tmp2676->next;
                }
                $fn2678 $tmp2677 = $tmp2676->methods[4];
                panda$core$String* $tmp2679 = $tmp2677(((panda$collections$ListView*) args2634));
                $tmp2675 = $tmp2679;
                panda$core$String* $tmp2680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2666, $tmp2675);
                $tmp2665 = $tmp2680;
                panda$core$String* $tmp2682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2665, &$s2681);
                $tmp2664 = $tmp2682;
                $tmp2663 = $tmp2664;
                $returnValue1492 = $tmp2663;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2663));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2664));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2665));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2675));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2666));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2667));
                panda$core$Panda$unref$panda$core$Object($tmp2669);
                $tmp1483 = 50;
                goto $l1481;
                $l2683:;
                return $returnValue1492;
            }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2685, 44);
        panda$core$Bit $tmp2686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2685);
        if ($tmp2686.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2688 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 16));
            target2687 = *$tmp2688;
            panda$collections$ImmutableArray** $tmp2690 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 24));
            methods2689 = *$tmp2690;
            if (((panda$core$Bit) { target2687 != NULL }).value) {
            {
                panda$core$String* $tmp2697 = (($fn2696) target2687->$class->vtable[0])(target2687);
                $tmp2695 = $tmp2697;
                panda$core$String* $tmp2699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2695, &$s2698);
                $tmp2694 = $tmp2699;
                panda$core$Int64$init$builtin_int64(&$tmp2701, 0);
                panda$core$Object* $tmp2702 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2689, $tmp2701);
                $tmp2700 = $tmp2702;
                panda$core$String* $tmp2703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2694, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2700)->value)->name);
                $tmp2693 = $tmp2703;
                panda$core$String* $tmp2705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2693, &$s2704);
                $tmp2692 = $tmp2705;
                $tmp2691 = $tmp2692;
                $returnValue1492 = $tmp2691;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2691));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2692));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2693));
                panda$core$Panda$unref$panda$core$Object($tmp2700);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2694));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2695));
                $tmp1483 = 51;
                goto $l1481;
                $l2706:;
                return $returnValue1492;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp2712, 0);
                panda$core$Object* $tmp2713 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2689, $tmp2712);
                $tmp2711 = $tmp2713;
                panda$core$String* $tmp2714 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2711)->value)->name);
                $tmp2710 = $tmp2714;
                panda$core$String* $tmp2716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2710, &$s2715);
                $tmp2709 = $tmp2716;
                $tmp2708 = $tmp2709;
                $returnValue1492 = $tmp2708;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2708));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2709));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2710));
                panda$core$Panda$unref$panda$core$Object($tmp2711);
                $tmp1483 = 52;
                goto $l1481;
                $l2717:;
                return $returnValue1492;
            }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2719, 45);
        panda$core$Bit $tmp2720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2719);
        if ($tmp2720.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2722 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 16));
            start2721 = *$tmp2722;
            org$pandalanguage$pandac$IRNode** $tmp2724 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 24));
            end2723 = *$tmp2724;
            panda$core$Bit* $tmp2726 = ((panda$core$Bit*) ((char*) $match$448_91484->$data + 32));
            inclusive2725 = *$tmp2726;
            org$pandalanguage$pandac$IRNode** $tmp2728 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 33));
            step2727 = *$tmp2728;
            int $tmp2731;
            {
                panda$core$MutableString* $tmp2735 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2735);
                $tmp2734 = $tmp2735;
                $tmp2733 = $tmp2734;
                result2732 = $tmp2733;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2733));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2734));
                if (((panda$core$Bit) { start2721 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2732, ((panda$core$Object*) start2721));
                }
                }
                if (inclusive2725.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2732, &$s2736);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result2732, &$s2737);
                }
                }
                if (((panda$core$Bit) { end2723 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2732, ((panda$core$Object*) end2723));
                }
                }
                if (((panda$core$Bit) { step2727 != NULL }).value) {
                {
                    panda$core$String* $tmp2741 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2740, ((panda$core$Object*) step2727));
                    $tmp2739 = $tmp2741;
                    panda$core$String* $tmp2743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2739, &$s2742);
                    $tmp2738 = $tmp2743;
                    panda$core$MutableString$append$panda$core$String(result2732, $tmp2738);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2738));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2739));
                }
                }
                panda$core$String* $tmp2746 = panda$core$MutableString$finish$R$panda$core$String(result2732);
                $tmp2745 = $tmp2746;
                $tmp2744 = $tmp2745;
                $returnValue1492 = $tmp2744;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2744));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2745));
                $tmp2731 = 0;
                goto $l2729;
                $l2747:;
                $tmp1483 = 53;
                goto $l1481;
                $l2748:;
                return $returnValue1492;
            }
            $l2729:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2732));
            result2732 = NULL;
            switch ($tmp2731) {
                case 0: goto $l2747;
            }
            $l2750:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2751, 46);
        panda$core$Bit $tmp2752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2751);
        if ($tmp2752.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp2754 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$448_91484->$data + 16));
            kind2753 = *$tmp2754;
            panda$collections$ImmutableArray** $tmp2756 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 24));
            decls2755 = *$tmp2756;
            int $tmp2759;
            {
                panda$core$MutableString* $tmp2763 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2763);
                $tmp2762 = $tmp2763;
                $tmp2761 = $tmp2762;
                result2760 = $tmp2761;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2761));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2762));
                {
                    $match$652_172764 = kind2753;
                    panda$core$Int64$init$builtin_int64(&$tmp2765, 0);
                    panda$core$Bit $tmp2766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_172764.$rawValue, $tmp2765);
                    if ($tmp2766.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2760, &$s2767);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp2768, 1);
                    panda$core$Bit $tmp2769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_172764.$rawValue, $tmp2768);
                    if ($tmp2769.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2760, &$s2770);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp2771, 2);
                    panda$core$Bit $tmp2772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_172764.$rawValue, $tmp2771);
                    if ($tmp2772.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2760, &$s2773);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp2774, 3);
                    panda$core$Bit $tmp2775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_172764.$rawValue, $tmp2774);
                    if ($tmp2775.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2760, &$s2776);
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp2778 = ((panda$collections$ListView*) decls2755)->$class->itable;
                while ($tmp2778->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2778 = $tmp2778->next;
                }
                $fn2780 $tmp2779 = $tmp2778->methods[4];
                panda$core$String* $tmp2781 = $tmp2779(((panda$collections$ListView*) decls2755));
                $tmp2777 = $tmp2781;
                panda$core$MutableString$append$panda$core$String(result2760, $tmp2777);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2777));
                panda$core$String* $tmp2784 = panda$core$MutableString$finish$R$panda$core$String(result2760);
                $tmp2783 = $tmp2784;
                $tmp2782 = $tmp2783;
                $returnValue1492 = $tmp2782;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2782));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2783));
                $tmp2759 = 0;
                goto $l2757;
                $l2785:;
                $tmp1483 = 54;
                goto $l1481;
                $l2786:;
                return $returnValue1492;
            }
            $l2757:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2760));
            result2760 = NULL;
            switch ($tmp2759) {
                case 0: goto $l2785;
            }
            $l2788:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2789, 47);
        panda$core$Bit $tmp2790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2789);
        if ($tmp2790.value) {
        {
            panda$core$String** $tmp2792 = ((panda$core$String**) ((char*) $match$448_91484->$data + 16));
            name2791 = *$tmp2792;
            $tmp2793 = name2791;
            $returnValue1492 = $tmp2793;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2793));
            $tmp1483 = 55;
            goto $l1481;
            $l2794:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2796, 48);
        panda$core$Bit $tmp2797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2796);
        if ($tmp2797.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2799 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$448_91484->$data + 16));
            variable2798 = *$tmp2799;
            panda$core$String* $tmp2803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) variable2798)->name, &$s2802);
            $tmp2801 = $tmp2803;
            $tmp2800 = $tmp2801;
            $returnValue1492 = $tmp2800;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2800));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2801));
            $tmp1483 = 56;
            goto $l1481;
            $l2804:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2806, 49);
        panda$core$Bit $tmp2807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2806);
        if ($tmp2807.value) {
        {
            panda$collections$ImmutableArray** $tmp2809 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 16));
            tests2808 = *$tmp2809;
            panda$collections$ImmutableArray** $tmp2811 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 24));
            statements2810 = *$tmp2811;
            ITable* $tmp2819 = ((panda$collections$ListView*) tests2808)->$class->itable;
            while ($tmp2819->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2819 = $tmp2819->next;
            }
            $fn2821 $tmp2820 = $tmp2819->methods[4];
            panda$core$String* $tmp2822 = $tmp2820(((panda$collections$ListView*) tests2808));
            $tmp2818 = $tmp2822;
            panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2817, $tmp2818);
            $tmp2816 = $tmp2823;
            panda$core$String* $tmp2825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2816, &$s2824);
            $tmp2815 = $tmp2825;
            ITable* $tmp2828 = ((panda$collections$ListView*) statements2810)->$class->itable;
            while ($tmp2828->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2828 = $tmp2828->next;
            }
            $fn2830 $tmp2829 = $tmp2828->methods[5];
            panda$core$String* $tmp2831 = $tmp2829(((panda$collections$ListView*) statements2810), &$s2827);
            $tmp2826 = $tmp2831;
            panda$core$String* $tmp2832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2815, $tmp2826);
            $tmp2814 = $tmp2832;
            panda$core$String* $tmp2834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2814, &$s2833);
            $tmp2813 = $tmp2834;
            $tmp2812 = $tmp2813;
            $returnValue1492 = $tmp2812;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2812));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2813));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2814));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2826));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2815));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2816));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2818));
            $tmp1483 = 57;
            goto $l1481;
            $l2835:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2837, 50);
        panda$core$Bit $tmp2838 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2837);
        if ($tmp2838.value) {
        {
            panda$core$String** $tmp2840 = ((panda$core$String**) ((char*) $match$448_91484->$data + 16));
            label2839 = *$tmp2840;
            org$pandalanguage$pandac$IRNode** $tmp2842 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 24));
            test2841 = *$tmp2842;
            panda$collections$ImmutableArray** $tmp2844 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 32));
            statements2843 = *$tmp2844;
            int $tmp2847;
            {
                panda$core$MutableString* $tmp2851 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2851);
                $tmp2850 = $tmp2851;
                $tmp2849 = $tmp2850;
                result2848 = $tmp2849;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2849));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2850));
                if (((panda$core$Bit) { label2839 != NULL }).value) {
                {
                    panda$core$String* $tmp2854 = panda$core$String$convert$R$panda$core$String(label2839);
                    $tmp2853 = $tmp2854;
                    panda$core$String* $tmp2856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2853, &$s2855);
                    $tmp2852 = $tmp2856;
                    panda$core$MutableString$append$panda$core$String(result2848, $tmp2852);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2852));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2853));
                }
                }
                panda$core$String* $tmp2860 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2859, ((panda$core$Object*) test2841));
                $tmp2858 = $tmp2860;
                panda$core$String* $tmp2862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2858, &$s2861);
                $tmp2857 = $tmp2862;
                panda$core$MutableString$append$panda$core$String(result2848, $tmp2857);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2857));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2858));
                {
                    int $tmp2865;
                    {
                        ITable* $tmp2869 = ((panda$collections$Iterable*) statements2843)->$class->itable;
                        while ($tmp2869->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2869 = $tmp2869->next;
                        }
                        $fn2871 $tmp2870 = $tmp2869->methods[0];
                        panda$collections$Iterator* $tmp2872 = $tmp2870(((panda$collections$Iterable*) statements2843));
                        $tmp2868 = $tmp2872;
                        $tmp2867 = $tmp2868;
                        Iter$672$172866 = $tmp2867;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2867));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2868));
                        $l2873:;
                        ITable* $tmp2876 = Iter$672$172866->$class->itable;
                        while ($tmp2876->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2876 = $tmp2876->next;
                        }
                        $fn2878 $tmp2877 = $tmp2876->methods[0];
                        panda$core$Bit $tmp2879 = $tmp2877(Iter$672$172866);
                        panda$core$Bit $tmp2880 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2879);
                        bool $tmp2875 = $tmp2880.value;
                        if (!$tmp2875) goto $l2874;
                        {
                            int $tmp2883;
                            {
                                ITable* $tmp2887 = Iter$672$172866->$class->itable;
                                while ($tmp2887->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2887 = $tmp2887->next;
                                }
                                $fn2889 $tmp2888 = $tmp2887->methods[1];
                                panda$core$Object* $tmp2890 = $tmp2888(Iter$672$172866);
                                $tmp2886 = $tmp2890;
                                $tmp2885 = ((org$pandalanguage$pandac$IRNode*) $tmp2886);
                                s2884 = $tmp2885;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2885));
                                panda$core$Panda$unref$panda$core$Object($tmp2886);
                                panda$core$String* $tmp2893 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2884), &$s2892);
                                $tmp2891 = $tmp2893;
                                panda$core$MutableString$append$panda$core$String(result2848, $tmp2891);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2891));
                            }
                            $tmp2883 = -1;
                            goto $l2881;
                            $l2881:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2884));
                            s2884 = NULL;
                            switch ($tmp2883) {
                                case -1: goto $l2894;
                            }
                            $l2894:;
                        }
                        goto $l2873;
                        $l2874:;
                    }
                    $tmp2865 = -1;
                    goto $l2863;
                    $l2863:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$672$172866));
                    Iter$672$172866 = NULL;
                    switch ($tmp2865) {
                        case -1: goto $l2895;
                    }
                    $l2895:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2897, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2896, $tmp2897);
                panda$core$MutableString$append$panda$core$Char8(result2848, $tmp2896);
                panda$core$String* $tmp2900 = panda$core$MutableString$finish$R$panda$core$String(result2848);
                $tmp2899 = $tmp2900;
                $tmp2898 = $tmp2899;
                $returnValue1492 = $tmp2898;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2898));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2899));
                $tmp2847 = 0;
                goto $l2845;
                $l2901:;
                $tmp1483 = 58;
                goto $l1481;
                $l2902:;
                return $returnValue1492;
            }
            $l2845:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2848));
            result2848 = NULL;
            switch ($tmp2847) {
                case 0: goto $l2901;
            }
            $l2904:;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp2905, false);
            if ($tmp2905.value) goto $l2906; else goto $l2907;
            $l2907:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2908, (panda$core$Int64) { 678 });
            abort();
            $l2906:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp1483 = -1;
    goto $l1481;
    $l1481:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1485));
    switch ($tmp1483) {
        case 6: goto $l1701;
        case 35: goto $l2449;
        case 2: goto $l1520;
        case 31: goto $l2340;
        case 54: goto $l2786;
        case 7: goto $l1715;
        case 51: goto $l2706;
        case 24: goto $l2121;
        case 23: goto $l2111;
        case 8: goto $l1719;
        case 43: goto $l2533;
        case 46: goto $l2576;
        case 0: goto $l1505;
        case 56: goto $l2804;
        case 5: goto $l1611;
        case 32: goto $l2346;
        case 12: goto $l1801;
        case 28: goto $l2304;
        case 9: goto $l1743;
        case 33: goto $l2365;
        case 21: goto $l2023;
        case 29: goto $l2325;
        case 3: goto $l1549;
        case 22: goto $l2043;
        case -1: goto $l2909;
        case 14: goto $l1848;
        case 39: goto $l2505;
        case 26: goto $l2147;
        case 36: goto $l2462;
        case 58: goto $l2902;
        case 15: goto $l1861;
        case 44: goto $l2560;
        case 52: goto $l2717;
        case 11: goto $l1772;
        case 13: goto $l1835;
        case 10: goto $l1763;
        case 4: goto $l1558;
        case 25: goto $l2134;
        case 40: goto $l2511;
        case 48: goto $l2626;
        case 19: goto $l1976;
        case 38: goto $l2483;
        case 57: goto $l2835;
        case 41: goto $l2517;
        case 50: goto $l2683;
        case 1: goto $l1514;
        case 34: goto $l2439;
        case 17: goto $l1893;
        case 42: goto $l2527;
        case 53: goto $l2748;
        case 37: goto $l2466;
        case 27: goto $l2207;
        case 30: goto $l2328;
        case 47: goto $l2601;
        case 18: goto $l1910;
        case 16: goto $l1865;
        case 55: goto $l2794;
        case 45: goto $l2569;
        case 49: goto $l2661;
        case 20: goto $l2003;
    }
    $l2909:;
    abort();
}
void org$pandalanguage$pandac$IRNode$cleanup(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$5_12916 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2917;
    panda$core$Int64 $tmp2918;
    org$pandalanguage$pandac$Position _f02920;
    org$pandalanguage$pandac$IRNode* _f12922 = NULL;
    org$pandalanguage$pandac$IRNode* _f22924 = NULL;
    panda$core$Int64 $tmp2926;
    org$pandalanguage$pandac$Position _f02928;
    org$pandalanguage$pandac$Type* _f12930 = NULL;
    panda$core$Int64 $tmp2932;
    org$pandalanguage$pandac$Position _f02934;
    org$pandalanguage$pandac$Type* _f12936 = NULL;
    org$pandalanguage$pandac$IRNode* _f22938 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f32940;
    org$pandalanguage$pandac$IRNode* _f42942 = NULL;
    panda$core$Int64 $tmp2944;
    org$pandalanguage$pandac$Position _f02946;
    org$pandalanguage$pandac$Type* _f12948 = NULL;
    panda$core$Bit _f22950;
    panda$core$Int64 $tmp2952;
    org$pandalanguage$pandac$Position _f02954;
    panda$collections$ImmutableArray* _f12956 = NULL;
    panda$core$Int64 $tmp2958;
    org$pandalanguage$pandac$Position _f02960;
    panda$collections$ImmutableArray* _f12962 = NULL;
    panda$collections$ImmutableArray* _f22964 = NULL;
    panda$core$Int64 $tmp2966;
    org$pandalanguage$pandac$Position _f02968;
    panda$core$String* _f12970 = NULL;
    panda$core$Int64 $tmp2972;
    org$pandalanguage$pandac$Position _f02974;
    org$pandalanguage$pandac$Type* _f12976 = NULL;
    org$pandalanguage$pandac$MethodRef* _f22978 = NULL;
    panda$collections$ImmutableArray* _f32980 = NULL;
    panda$core$Int64 $tmp2982;
    org$pandalanguage$pandac$Position _f02984;
    org$pandalanguage$pandac$IRNode* _f12986 = NULL;
    org$pandalanguage$pandac$Type* _f22988 = NULL;
    panda$core$Bit _f32990;
    panda$core$Int64 $tmp2992;
    org$pandalanguage$pandac$Position _f02994;
    org$pandalanguage$pandac$ChoiceEntry* _f12996 = NULL;
    panda$core$Int64 $tmp2998;
    org$pandalanguage$pandac$Position _f03000;
    org$pandalanguage$pandac$IRNode* _f13002 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f23004 = NULL;
    panda$core$Int64 _f33006;
    panda$core$Int64 $tmp3008;
    org$pandalanguage$pandac$Position _f03010;
    org$pandalanguage$pandac$Type* _f13012 = NULL;
    org$pandalanguage$pandac$IRNode* _f23014 = NULL;
    panda$core$Int64 $tmp3016;
    org$pandalanguage$pandac$Position _f03018;
    org$pandalanguage$pandac$Type* _f13020 = NULL;
    panda$core$Int64 $tmp3022;
    org$pandalanguage$pandac$Position _f03024;
    panda$core$String* _f13026 = NULL;
    panda$core$Int64 $tmp3028;
    org$pandalanguage$pandac$IRNode* _f03030 = NULL;
    org$pandalanguage$pandac$IRNode* _f13032 = NULL;
    panda$core$Int64 $tmp3034;
    org$pandalanguage$pandac$Position _f03036;
    panda$core$String* _f13038 = NULL;
    panda$collections$ImmutableArray* _f23040 = NULL;
    org$pandalanguage$pandac$IRNode* _f33042 = NULL;
    panda$core$Int64 $tmp3044;
    org$pandalanguage$pandac$IRNode* _f03046 = NULL;
    panda$collections$ImmutableArray* _f13048 = NULL;
    panda$core$Int64 $tmp3050;
    org$pandalanguage$pandac$IRNode* _f03052 = NULL;
    org$pandalanguage$pandac$IRNode* _f13054 = NULL;
    panda$core$Int64 $tmp3056;
    org$pandalanguage$pandac$Position _f03058;
    org$pandalanguage$pandac$Type* _f13060 = NULL;
    org$pandalanguage$pandac$IRNode* _f23062 = NULL;
    org$pandalanguage$pandac$FieldDecl* _f33064 = NULL;
    panda$core$Int64 $tmp3066;
    org$pandalanguage$pandac$Position _f03068;
    org$pandalanguage$pandac$IRNode* _f13070 = NULL;
    panda$collections$ImmutableArray* _f23072 = NULL;
    org$pandalanguage$pandac$IRNode* _f33074 = NULL;
    panda$core$Int64 $tmp3076;
    org$pandalanguage$pandac$Position _f03078;
    org$pandalanguage$pandac$Type* _f13080 = NULL;
    panda$core$UInt64 _f23082;
    panda$core$Int64 $tmp3084;
    org$pandalanguage$pandac$Position _f03086;
    org$pandalanguage$pandac$IRNode* _f13088 = NULL;
    panda$core$Int64 $tmp3090;
    org$pandalanguage$pandac$Position _f03092;
    org$pandalanguage$pandac$IRNode* _f13094 = NULL;
    panda$core$Int64 $tmp3096;
    org$pandalanguage$pandac$Position _f03098;
    panda$core$String* _f13100 = NULL;
    panda$collections$ImmutableArray* _f23102 = NULL;
    panda$core$Int64 $tmp3104;
    org$pandalanguage$pandac$Position _f03106;
    org$pandalanguage$pandac$IRNode* _f13108 = NULL;
    panda$collections$ImmutableArray* _f23110 = NULL;
    panda$collections$ImmutableArray* _f33112 = NULL;
    panda$core$Int64 $tmp3114;
    org$pandalanguage$pandac$Position _f03116;
    org$pandalanguage$pandac$Type* _f13118 = NULL;
    org$pandalanguage$pandac$IRNode* _f23120 = NULL;
    org$pandalanguage$pandac$MethodRef* _f33122 = NULL;
    panda$core$Int64 $tmp3124;
    org$pandalanguage$pandac$Position _f03126;
    org$pandalanguage$pandac$Type* _f13128 = NULL;
    panda$core$UInt64 _f23130;
    panda$core$Int64 $tmp3132;
    org$pandalanguage$pandac$Position _f03134;
    org$pandalanguage$pandac$Type* _f13136 = NULL;
    panda$core$Int64 $tmp3138;
    org$pandalanguage$pandac$Position _f03140;
    org$pandalanguage$pandac$parser$Token$Kind _f13142;
    org$pandalanguage$pandac$IRNode* _f23144 = NULL;
    panda$core$Int64 $tmp3146;
    org$pandalanguage$pandac$Position _f03148;
    panda$core$String* _f13150 = NULL;
    org$pandalanguage$pandac$IRNode* _f23152 = NULL;
    org$pandalanguage$pandac$IRNode* _f33154 = NULL;
    panda$collections$ImmutableArray* _f43156 = NULL;
    panda$core$Int64 $tmp3158;
    org$pandalanguage$pandac$Position _f03160;
    org$pandalanguage$pandac$Type* _f13162 = NULL;
    panda$core$Real64 _f23164;
    panda$core$Int64 $tmp3166;
    org$pandalanguage$pandac$Position _f03168;
    org$pandalanguage$pandac$IRNode* _f13170 = NULL;
    panda$core$Int64 $tmp3172;
    org$pandalanguage$pandac$Position _f03174;
    org$pandalanguage$pandac$Type* _f13176 = NULL;
    panda$core$Int64 _f23178;
    panda$core$Int64 $tmp3180;
    org$pandalanguage$pandac$IRNode* _f03182 = NULL;
    panda$core$Int64 _f13184;
    panda$core$Int64 $tmp3186;
    org$pandalanguage$pandac$Position _f03188;
    org$pandalanguage$pandac$Type* _f13190 = NULL;
    panda$core$Int64 $tmp3192;
    org$pandalanguage$pandac$Position _f03194;
    org$pandalanguage$pandac$Type* _f13196 = NULL;
    panda$core$Int64 $tmp3198;
    org$pandalanguage$pandac$Position _f03200;
    panda$core$String* _f13202 = NULL;
    panda$core$Int64 $tmp3204;
    org$pandalanguage$pandac$Position _f03206;
    org$pandalanguage$pandac$Type* _f13208 = NULL;
    panda$core$Int64 $tmp3210;
    org$pandalanguage$pandac$Position _f03212;
    org$pandalanguage$pandac$IRNode* _f13214 = NULL;
    org$pandalanguage$pandac$IRNode* _f23216 = NULL;
    org$pandalanguage$pandac$IRNode* _f33218 = NULL;
    panda$core$Int64 $tmp3220;
    org$pandalanguage$pandac$Position _f03222;
    org$pandalanguage$pandac$Type* _f13224 = NULL;
    panda$core$Int64 $tmp3226;
    org$pandalanguage$pandac$Position _f03228;
    panda$core$String* _f13230 = NULL;
    panda$core$Int64 $tmp3232;
    org$pandalanguage$pandac$Position _f03234;
    org$pandalanguage$pandac$Type* _f13236 = NULL;
    org$pandalanguage$pandac$IRNode* _f23238 = NULL;
    panda$collections$ImmutableArray* _f33240 = NULL;
    panda$core$Int64 $tmp3242;
    org$pandalanguage$pandac$Position _f03244;
    panda$collections$ImmutableArray* _f13246 = NULL;
    org$pandalanguage$pandac$ASTNode* _f23248 = NULL;
    panda$core$Int64 $tmp3250;
    org$pandalanguage$pandac$Position _f03252;
    org$pandalanguage$pandac$Type* _f13254 = NULL;
    org$pandalanguage$pandac$IRNode* _f23256 = NULL;
    panda$collections$ImmutableArray* _f33258 = NULL;
    panda$collections$ImmutableArray* _f43260 = NULL;
    panda$core$Int64 $tmp3262;
    org$pandalanguage$pandac$Position _f03264;
    org$pandalanguage$pandac$IRNode* _f13266 = NULL;
    panda$collections$ImmutableArray* _f23268 = NULL;
    panda$core$Int64 $tmp3270;
    org$pandalanguage$pandac$Position _f03272;
    org$pandalanguage$pandac$IRNode* _f13274 = NULL;
    org$pandalanguage$pandac$IRNode* _f23276 = NULL;
    panda$core$Bit _f33278;
    org$pandalanguage$pandac$IRNode* _f43280 = NULL;
    panda$core$Int64 $tmp3282;
    org$pandalanguage$pandac$Position _f03284;
    org$pandalanguage$pandac$Variable$Kind _f13286;
    panda$collections$ImmutableArray* _f23288 = NULL;
    panda$core$Int64 $tmp3290;
    org$pandalanguage$pandac$Position _f03292;
    panda$core$String* _f13294 = NULL;
    org$pandalanguage$pandac$Type* _f23296 = NULL;
    panda$core$Int64 $tmp3298;
    org$pandalanguage$pandac$Position _f03300;
    org$pandalanguage$pandac$Variable* _f13302 = NULL;
    panda$core$Int64 $tmp3304;
    org$pandalanguage$pandac$Position _f03306;
    panda$collections$ImmutableArray* _f13308 = NULL;
    panda$collections$ImmutableArray* _f23310 = NULL;
    panda$core$Int64 $tmp3312;
    org$pandalanguage$pandac$Position _f03314;
    panda$core$String* _f13316 = NULL;
    org$pandalanguage$pandac$IRNode* _f23318 = NULL;
    panda$collections$ImmutableArray* _f33320 = NULL;
    int $tmp2912;
    {
        int $tmp2915;
        {
            $tmp2917 = self;
            $match$5_12916 = $tmp2917;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2917));
            panda$core$Int64$init$builtin_int64(&$tmp2918, 0);
            panda$core$Bit $tmp2919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp2918);
            if ($tmp2919.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2921 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f02920 = *$tmp2921;
                org$pandalanguage$pandac$IRNode** $tmp2923 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 16));
                _f12922 = *$tmp2923;
                org$pandalanguage$pandac$IRNode** $tmp2925 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 24));
                _f22924 = *$tmp2925;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12922));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22924));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2926, 1);
            panda$core$Bit $tmp2927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp2926);
            if ($tmp2927.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2929 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f02928 = *$tmp2929;
                org$pandalanguage$pandac$Type** $tmp2931 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12916->$data + 16));
                _f12930 = *$tmp2931;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12930));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2932, 2);
            panda$core$Bit $tmp2933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp2932);
            if ($tmp2933.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2935 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f02934 = *$tmp2935;
                org$pandalanguage$pandac$Type** $tmp2937 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12916->$data + 16));
                _f12936 = *$tmp2937;
                org$pandalanguage$pandac$IRNode** $tmp2939 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 24));
                _f22938 = *$tmp2939;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2941 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12916->$data + 32));
                _f32940 = *$tmp2941;
                org$pandalanguage$pandac$IRNode** $tmp2943 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 40));
                _f42942 = *$tmp2943;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12936));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22938));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42942));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2944, 3);
            panda$core$Bit $tmp2945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp2944);
            if ($tmp2945.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2947 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f02946 = *$tmp2947;
                org$pandalanguage$pandac$Type** $tmp2949 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12916->$data + 16));
                _f12948 = *$tmp2949;
                panda$core$Bit* $tmp2951 = ((panda$core$Bit*) ((char*) $match$5_12916->$data + 24));
                _f22950 = *$tmp2951;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12948));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2952, 4);
            panda$core$Bit $tmp2953 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp2952);
            if ($tmp2953.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2955 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f02954 = *$tmp2955;
                panda$collections$ImmutableArray** $tmp2957 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12916->$data + 16));
                _f12956 = *$tmp2957;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12956));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2958, 5);
            panda$core$Bit $tmp2959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp2958);
            if ($tmp2959.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2961 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f02960 = *$tmp2961;
                panda$collections$ImmutableArray** $tmp2963 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12916->$data + 16));
                _f12962 = *$tmp2963;
                panda$collections$ImmutableArray** $tmp2965 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12916->$data + 24));
                _f22964 = *$tmp2965;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12962));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22964));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2966, 6);
            panda$core$Bit $tmp2967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp2966);
            if ($tmp2967.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2969 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f02968 = *$tmp2969;
                panda$core$String** $tmp2971 = ((panda$core$String**) ((char*) $match$5_12916->$data + 16));
                _f12970 = *$tmp2971;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12970));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2972, 7);
            panda$core$Bit $tmp2973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp2972);
            if ($tmp2973.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2975 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f02974 = *$tmp2975;
                org$pandalanguage$pandac$Type** $tmp2977 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12916->$data + 16));
                _f12976 = *$tmp2977;
                org$pandalanguage$pandac$MethodRef** $tmp2979 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12916->$data + 24));
                _f22978 = *$tmp2979;
                panda$collections$ImmutableArray** $tmp2981 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12916->$data + 32));
                _f32980 = *$tmp2981;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12976));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22978));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32980));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2982, 8);
            panda$core$Bit $tmp2983 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp2982);
            if ($tmp2983.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2985 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f02984 = *$tmp2985;
                org$pandalanguage$pandac$IRNode** $tmp2987 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 16));
                _f12986 = *$tmp2987;
                org$pandalanguage$pandac$Type** $tmp2989 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12916->$data + 24));
                _f22988 = *$tmp2989;
                panda$core$Bit* $tmp2991 = ((panda$core$Bit*) ((char*) $match$5_12916->$data + 32));
                _f32990 = *$tmp2991;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12986));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22988));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2992, 9);
            panda$core$Bit $tmp2993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp2992);
            if ($tmp2993.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2995 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f02994 = *$tmp2995;
                org$pandalanguage$pandac$ChoiceEntry** $tmp2997 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12916->$data + 16));
                _f12996 = *$tmp2997;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12996));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2998, 10);
            panda$core$Bit $tmp2999 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp2998);
            if ($tmp2999.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3001 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03000 = *$tmp3001;
                org$pandalanguage$pandac$IRNode** $tmp3003 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 16));
                _f13002 = *$tmp3003;
                org$pandalanguage$pandac$ChoiceEntry** $tmp3005 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12916->$data + 24));
                _f23004 = *$tmp3005;
                panda$core$Int64* $tmp3007 = ((panda$core$Int64*) ((char*) $match$5_12916->$data + 32));
                _f33006 = *$tmp3007;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13002));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23004));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3008, 11);
            panda$core$Bit $tmp3009 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3008);
            if ($tmp3009.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3011 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03010 = *$tmp3011;
                org$pandalanguage$pandac$Type** $tmp3013 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12916->$data + 16));
                _f13012 = *$tmp3013;
                org$pandalanguage$pandac$IRNode** $tmp3015 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 24));
                _f23014 = *$tmp3015;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13012));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23014));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3016, 12);
            panda$core$Bit $tmp3017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3016);
            if ($tmp3017.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3019 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03018 = *$tmp3019;
                org$pandalanguage$pandac$Type** $tmp3021 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12916->$data + 16));
                _f13020 = *$tmp3021;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13020));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3022, 13);
            panda$core$Bit $tmp3023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3022);
            if ($tmp3023.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3025 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03024 = *$tmp3025;
                panda$core$String** $tmp3027 = ((panda$core$String**) ((char*) $match$5_12916->$data + 16));
                _f13026 = *$tmp3027;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13026));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3028, 14);
            panda$core$Bit $tmp3029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3028);
            if ($tmp3029.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp3031 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 0));
                _f03030 = *$tmp3031;
                org$pandalanguage$pandac$IRNode** $tmp3033 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 8));
                _f13032 = *$tmp3033;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f03030));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13032));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3034, 15);
            panda$core$Bit $tmp3035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3034);
            if ($tmp3035.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3037 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03036 = *$tmp3037;
                panda$core$String** $tmp3039 = ((panda$core$String**) ((char*) $match$5_12916->$data + 16));
                _f13038 = *$tmp3039;
                panda$collections$ImmutableArray** $tmp3041 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12916->$data + 24));
                _f23040 = *$tmp3041;
                org$pandalanguage$pandac$IRNode** $tmp3043 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 32));
                _f33042 = *$tmp3043;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13038));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23040));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33042));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3044, 16);
            panda$core$Bit $tmp3045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3044);
            if ($tmp3045.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp3047 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 0));
                _f03046 = *$tmp3047;
                panda$collections$ImmutableArray** $tmp3049 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12916->$data + 8));
                _f13048 = *$tmp3049;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f03046));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13048));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3050, 17);
            panda$core$Bit $tmp3051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3050);
            if ($tmp3051.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp3053 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 0));
                _f03052 = *$tmp3053;
                org$pandalanguage$pandac$IRNode** $tmp3055 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 8));
                _f13054 = *$tmp3055;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f03052));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13054));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3056, 18);
            panda$core$Bit $tmp3057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3056);
            if ($tmp3057.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3059 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03058 = *$tmp3059;
                org$pandalanguage$pandac$Type** $tmp3061 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12916->$data + 16));
                _f13060 = *$tmp3061;
                org$pandalanguage$pandac$IRNode** $tmp3063 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 24));
                _f23062 = *$tmp3063;
                org$pandalanguage$pandac$FieldDecl** $tmp3065 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$5_12916->$data + 32));
                _f33064 = *$tmp3065;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13060));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23062));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33064));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3066, 19);
            panda$core$Bit $tmp3067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3066);
            if ($tmp3067.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3069 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03068 = *$tmp3069;
                org$pandalanguage$pandac$IRNode** $tmp3071 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 16));
                _f13070 = *$tmp3071;
                panda$collections$ImmutableArray** $tmp3073 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12916->$data + 24));
                _f23072 = *$tmp3073;
                org$pandalanguage$pandac$IRNode** $tmp3075 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 32));
                _f33074 = *$tmp3075;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13070));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23072));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33074));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3076, 20);
            panda$core$Bit $tmp3077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3076);
            if ($tmp3077.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3079 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03078 = *$tmp3079;
                org$pandalanguage$pandac$Type** $tmp3081 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12916->$data + 16));
                _f13080 = *$tmp3081;
                panda$core$UInt64* $tmp3083 = ((panda$core$UInt64*) ((char*) $match$5_12916->$data + 24));
                _f23082 = *$tmp3083;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13080));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3084, 21);
            panda$core$Bit $tmp3085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3084);
            if ($tmp3085.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3087 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03086 = *$tmp3087;
                org$pandalanguage$pandac$IRNode** $tmp3089 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 16));
                _f13088 = *$tmp3089;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13088));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3090, 22);
            panda$core$Bit $tmp3091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3090);
            if ($tmp3091.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3093 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03092 = *$tmp3093;
                org$pandalanguage$pandac$IRNode** $tmp3095 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 16));
                _f13094 = *$tmp3095;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13094));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3096, 23);
            panda$core$Bit $tmp3097 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3096);
            if ($tmp3097.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3099 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03098 = *$tmp3099;
                panda$core$String** $tmp3101 = ((panda$core$String**) ((char*) $match$5_12916->$data + 16));
                _f13100 = *$tmp3101;
                panda$collections$ImmutableArray** $tmp3103 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12916->$data + 24));
                _f23102 = *$tmp3103;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13100));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23102));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3104, 24);
            panda$core$Bit $tmp3105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3104);
            if ($tmp3105.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3107 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03106 = *$tmp3107;
                org$pandalanguage$pandac$IRNode** $tmp3109 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 16));
                _f13108 = *$tmp3109;
                panda$collections$ImmutableArray** $tmp3111 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12916->$data + 24));
                _f23110 = *$tmp3111;
                panda$collections$ImmutableArray** $tmp3113 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12916->$data + 32));
                _f33112 = *$tmp3113;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13108));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23110));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33112));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3114, 25);
            panda$core$Bit $tmp3115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3114);
            if ($tmp3115.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3117 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03116 = *$tmp3117;
                org$pandalanguage$pandac$Type** $tmp3119 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12916->$data + 16));
                _f13118 = *$tmp3119;
                org$pandalanguage$pandac$IRNode** $tmp3121 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 24));
                _f23120 = *$tmp3121;
                org$pandalanguage$pandac$MethodRef** $tmp3123 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12916->$data + 32));
                _f33122 = *$tmp3123;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13118));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23120));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33122));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3124, 26);
            panda$core$Bit $tmp3125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3124);
            if ($tmp3125.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3127 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03126 = *$tmp3127;
                org$pandalanguage$pandac$Type** $tmp3129 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12916->$data + 16));
                _f13128 = *$tmp3129;
                panda$core$UInt64* $tmp3131 = ((panda$core$UInt64*) ((char*) $match$5_12916->$data + 24));
                _f23130 = *$tmp3131;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13128));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3132, 27);
            panda$core$Bit $tmp3133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3132);
            if ($tmp3133.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3135 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03134 = *$tmp3135;
                org$pandalanguage$pandac$Type** $tmp3137 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12916->$data + 16));
                _f13136 = *$tmp3137;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13136));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3138, 28);
            panda$core$Bit $tmp3139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3138);
            if ($tmp3139.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3141 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03140 = *$tmp3141;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp3143 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12916->$data + 16));
                _f13142 = *$tmp3143;
                org$pandalanguage$pandac$IRNode** $tmp3145 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 24));
                _f23144 = *$tmp3145;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23144));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3146, 29);
            panda$core$Bit $tmp3147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3146);
            if ($tmp3147.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3149 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03148 = *$tmp3149;
                panda$core$String** $tmp3151 = ((panda$core$String**) ((char*) $match$5_12916->$data + 16));
                _f13150 = *$tmp3151;
                org$pandalanguage$pandac$IRNode** $tmp3153 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 24));
                _f23152 = *$tmp3153;
                org$pandalanguage$pandac$IRNode** $tmp3155 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 32));
                _f33154 = *$tmp3155;
                panda$collections$ImmutableArray** $tmp3157 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12916->$data + 40));
                _f43156 = *$tmp3157;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13150));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23152));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33154));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f43156));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3158, 30);
            panda$core$Bit $tmp3159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3158);
            if ($tmp3159.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3161 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03160 = *$tmp3161;
                org$pandalanguage$pandac$Type** $tmp3163 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12916->$data + 16));
                _f13162 = *$tmp3163;
                panda$core$Real64* $tmp3165 = ((panda$core$Real64*) ((char*) $match$5_12916->$data + 24));
                _f23164 = *$tmp3165;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13162));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3166, 31);
            panda$core$Bit $tmp3167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3166);
            if ($tmp3167.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3169 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03168 = *$tmp3169;
                org$pandalanguage$pandac$IRNode** $tmp3171 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 16));
                _f13170 = *$tmp3171;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13170));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3172, 32);
            panda$core$Bit $tmp3173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3172);
            if ($tmp3173.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3175 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03174 = *$tmp3175;
                org$pandalanguage$pandac$Type** $tmp3177 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12916->$data + 16));
                _f13176 = *$tmp3177;
                panda$core$Int64* $tmp3179 = ((panda$core$Int64*) ((char*) $match$5_12916->$data + 24));
                _f23178 = *$tmp3179;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13176));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3180, 33);
            panda$core$Bit $tmp3181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3180);
            if ($tmp3181.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp3183 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 0));
                _f03182 = *$tmp3183;
                panda$core$Int64* $tmp3185 = ((panda$core$Int64*) ((char*) $match$5_12916->$data + 8));
                _f13184 = *$tmp3185;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f03182));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3186, 34);
            panda$core$Bit $tmp3187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3186);
            if ($tmp3187.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3189 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03188 = *$tmp3189;
                org$pandalanguage$pandac$Type** $tmp3191 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12916->$data + 16));
                _f13190 = *$tmp3191;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13190));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3192, 35);
            panda$core$Bit $tmp3193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3192);
            if ($tmp3193.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3195 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03194 = *$tmp3195;
                org$pandalanguage$pandac$Type** $tmp3197 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12916->$data + 16));
                _f13196 = *$tmp3197;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13196));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3198, 36);
            panda$core$Bit $tmp3199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3198);
            if ($tmp3199.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3201 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03200 = *$tmp3201;
                panda$core$String** $tmp3203 = ((panda$core$String**) ((char*) $match$5_12916->$data + 16));
                _f13202 = *$tmp3203;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13202));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3204, 37);
            panda$core$Bit $tmp3205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3204);
            if ($tmp3205.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3207 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03206 = *$tmp3207;
                org$pandalanguage$pandac$Type** $tmp3209 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12916->$data + 16));
                _f13208 = *$tmp3209;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13208));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3210, 38);
            panda$core$Bit $tmp3211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3210);
            if ($tmp3211.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3213 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03212 = *$tmp3213;
                org$pandalanguage$pandac$IRNode** $tmp3215 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 16));
                _f13214 = *$tmp3215;
                org$pandalanguage$pandac$IRNode** $tmp3217 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 24));
                _f23216 = *$tmp3217;
                org$pandalanguage$pandac$IRNode** $tmp3219 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 32));
                _f33218 = *$tmp3219;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13214));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23216));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33218));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3220, 39);
            panda$core$Bit $tmp3221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3220);
            if ($tmp3221.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3223 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03222 = *$tmp3223;
                org$pandalanguage$pandac$Type** $tmp3225 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12916->$data + 16));
                _f13224 = *$tmp3225;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13224));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3226, 40);
            panda$core$Bit $tmp3227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3226);
            if ($tmp3227.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3229 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03228 = *$tmp3229;
                panda$core$String** $tmp3231 = ((panda$core$String**) ((char*) $match$5_12916->$data + 16));
                _f13230 = *$tmp3231;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13230));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3232, 41);
            panda$core$Bit $tmp3233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3232);
            if ($tmp3233.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3235 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03234 = *$tmp3235;
                org$pandalanguage$pandac$Type** $tmp3237 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12916->$data + 16));
                _f13236 = *$tmp3237;
                org$pandalanguage$pandac$IRNode** $tmp3239 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 24));
                _f23238 = *$tmp3239;
                panda$collections$ImmutableArray** $tmp3241 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12916->$data + 32));
                _f33240 = *$tmp3241;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13236));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23238));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33240));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3242, 42);
            panda$core$Bit $tmp3243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3242);
            if ($tmp3243.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3245 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03244 = *$tmp3245;
                panda$collections$ImmutableArray** $tmp3247 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12916->$data + 16));
                _f13246 = *$tmp3247;
                org$pandalanguage$pandac$ASTNode** $tmp3249 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12916->$data + 24));
                _f23248 = *$tmp3249;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13246));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23248));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3250, 43);
            panda$core$Bit $tmp3251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3250);
            if ($tmp3251.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3253 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03252 = *$tmp3253;
                org$pandalanguage$pandac$Type** $tmp3255 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12916->$data + 16));
                _f13254 = *$tmp3255;
                org$pandalanguage$pandac$IRNode** $tmp3257 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 24));
                _f23256 = *$tmp3257;
                panda$collections$ImmutableArray** $tmp3259 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12916->$data + 32));
                _f33258 = *$tmp3259;
                panda$collections$ImmutableArray** $tmp3261 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12916->$data + 40));
                _f43260 = *$tmp3261;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13254));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23256));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33258));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f43260));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3262, 44);
            panda$core$Bit $tmp3263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3262);
            if ($tmp3263.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3265 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03264 = *$tmp3265;
                org$pandalanguage$pandac$IRNode** $tmp3267 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 16));
                _f13266 = *$tmp3267;
                panda$collections$ImmutableArray** $tmp3269 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12916->$data + 24));
                _f23268 = *$tmp3269;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13266));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23268));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3270, 45);
            panda$core$Bit $tmp3271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3270);
            if ($tmp3271.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3273 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03272 = *$tmp3273;
                org$pandalanguage$pandac$IRNode** $tmp3275 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 16));
                _f13274 = *$tmp3275;
                org$pandalanguage$pandac$IRNode** $tmp3277 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 24));
                _f23276 = *$tmp3277;
                panda$core$Bit* $tmp3279 = ((panda$core$Bit*) ((char*) $match$5_12916->$data + 32));
                _f33278 = *$tmp3279;
                org$pandalanguage$pandac$IRNode** $tmp3281 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 33));
                _f43280 = *$tmp3281;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13274));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23276));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f43280));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3282, 46);
            panda$core$Bit $tmp3283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3282);
            if ($tmp3283.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3285 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03284 = *$tmp3285;
                org$pandalanguage$pandac$Variable$Kind* $tmp3287 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_12916->$data + 16));
                _f13286 = *$tmp3287;
                panda$collections$ImmutableArray** $tmp3289 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12916->$data + 24));
                _f23288 = *$tmp3289;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23288));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3290, 47);
            panda$core$Bit $tmp3291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3290);
            if ($tmp3291.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3293 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03292 = *$tmp3293;
                panda$core$String** $tmp3295 = ((panda$core$String**) ((char*) $match$5_12916->$data + 16));
                _f13294 = *$tmp3295;
                org$pandalanguage$pandac$Type** $tmp3297 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12916->$data + 24));
                _f23296 = *$tmp3297;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13294));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23296));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3298, 48);
            panda$core$Bit $tmp3299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3298);
            if ($tmp3299.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3301 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03300 = *$tmp3301;
                org$pandalanguage$pandac$Variable** $tmp3303 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$5_12916->$data + 16));
                _f13302 = *$tmp3303;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13302));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3304, 49);
            panda$core$Bit $tmp3305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3304);
            if ($tmp3305.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3307 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03306 = *$tmp3307;
                panda$collections$ImmutableArray** $tmp3309 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12916->$data + 16));
                _f13308 = *$tmp3309;
                panda$collections$ImmutableArray** $tmp3311 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12916->$data + 24));
                _f23310 = *$tmp3311;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13308));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23310));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3312, 50);
            panda$core$Bit $tmp3313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12916->$rawValue, $tmp3312);
            if ($tmp3313.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3315 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12916->$data + 0));
                _f03314 = *$tmp3315;
                panda$core$String** $tmp3317 = ((panda$core$String**) ((char*) $match$5_12916->$data + 16));
                _f13316 = *$tmp3317;
                org$pandalanguage$pandac$IRNode** $tmp3319 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12916->$data + 24));
                _f23318 = *$tmp3319;
                panda$collections$ImmutableArray** $tmp3321 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12916->$data + 32));
                _f33320 = *$tmp3321;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13316));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23318));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33320));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp2915 = -1;
        goto $l2913;
        $l2913:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2917));
        switch ($tmp2915) {
            case -1: goto $l3322;
        }
        $l3322:;
    }
    $tmp2912 = -1;
    goto $l2910;
    $l2910:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2912) {
        case -1: goto $l3323;
    }
    $l3323:;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3325;
    org$pandalanguage$pandac$IRNode* $tmp3328;
    org$pandalanguage$pandac$IRNode* $tmp3329;
    org$pandalanguage$pandac$IRNode* $tmp3332;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3324 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3324 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3326 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3325 = *$tmp3326;
        org$pandalanguage$pandac$IRNode** $tmp3327 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3328 = p_f1;
        *$tmp3327 = $tmp3328;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3328));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3325));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3330 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3329 = *$tmp3330;
        org$pandalanguage$pandac$IRNode** $tmp3331 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3332 = p_f2;
        *$tmp3331 = $tmp3332;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3332));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3329));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1) {
    org$pandalanguage$pandac$Type* $tmp3334;
    org$pandalanguage$pandac$Type* $tmp3337;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3333 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3333 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3335 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3334 = *$tmp3335;
        org$pandalanguage$pandac$Type** $tmp3336 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3337 = p_f1;
        *$tmp3336 = $tmp3337;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3337));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3334));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$parser$Token$Kind p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$Type* $tmp3339;
    org$pandalanguage$pandac$Type* $tmp3342;
    org$pandalanguage$pandac$IRNode* $tmp3343;
    org$pandalanguage$pandac$IRNode* $tmp3346;
    org$pandalanguage$pandac$IRNode* $tmp3348;
    org$pandalanguage$pandac$IRNode* $tmp3351;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3338 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3338 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3340 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3339 = *$tmp3340;
        org$pandalanguage$pandac$Type** $tmp3341 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3342 = p_f1;
        *$tmp3341 = $tmp3342;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3342));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3339));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3344 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3343 = *$tmp3344;
        org$pandalanguage$pandac$IRNode** $tmp3345 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3346 = p_f2;
        *$tmp3345 = $tmp3346;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3346));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3343));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp3347 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 32));
    *$tmp3347 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp3349 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp3348 = *$tmp3349;
        org$pandalanguage$pandac$IRNode** $tmp3350 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp3351 = p_f4;
        *$tmp3350 = $tmp3351;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3351));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3348));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Bit p_f2) {
    org$pandalanguage$pandac$Type* $tmp3353;
    org$pandalanguage$pandac$Type* $tmp3356;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3352 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3352 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3354 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3353 = *$tmp3354;
        org$pandalanguage$pandac$Type** $tmp3355 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3356 = p_f1;
        *$tmp3355 = $tmp3356;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3356));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3353));
    }
    panda$core$Bit* $tmp3357 = ((panda$core$Bit*) ((char*) self->$data + 24));
    *$tmp3357 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp3359;
    panda$collections$ImmutableArray* $tmp3362;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3358 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3358 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp3360 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3359 = *$tmp3360;
        panda$collections$ImmutableArray** $tmp3361 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3362 = p_f1;
        *$tmp3361 = $tmp3362;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3362));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3359));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp3364;
    panda$collections$ImmutableArray* $tmp3367;
    panda$collections$ImmutableArray* $tmp3368;
    panda$collections$ImmutableArray* $tmp3371;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3363 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3363 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp3365 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3364 = *$tmp3365;
        panda$collections$ImmutableArray** $tmp3366 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3367 = p_f1;
        *$tmp3366 = $tmp3367;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3367));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3364));
    }
    {
        panda$collections$ImmutableArray** $tmp3369 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3368 = *$tmp3369;
        panda$collections$ImmutableArray** $tmp3370 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3371 = p_f2;
        *$tmp3370 = $tmp3371;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3371));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3368));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp3373;
    panda$core$String* $tmp3376;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3372 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3372 = p_f0;
    {
        panda$core$String** $tmp3374 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3373 = *$tmp3374;
        panda$core$String** $tmp3375 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3376 = p_f1;
        *$tmp3375 = $tmp3376;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3376));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3373));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$MethodRef* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3378;
    org$pandalanguage$pandac$Type* $tmp3381;
    org$pandalanguage$pandac$MethodRef* $tmp3382;
    org$pandalanguage$pandac$MethodRef* $tmp3385;
    panda$collections$ImmutableArray* $tmp3386;
    panda$collections$ImmutableArray* $tmp3389;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3377 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3377 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3379 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3378 = *$tmp3379;
        org$pandalanguage$pandac$Type** $tmp3380 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3381 = p_f1;
        *$tmp3380 = $tmp3381;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3381));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3378));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp3383 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3382 = *$tmp3383;
        org$pandalanguage$pandac$MethodRef** $tmp3384 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3385 = p_f2;
        *$tmp3384 = $tmp3385;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3385));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3382));
    }
    {
        panda$collections$ImmutableArray** $tmp3387 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3386 = *$tmp3387;
        panda$collections$ImmutableArray** $tmp3388 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3389 = p_f3;
        *$tmp3388 = $tmp3389;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3389));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3386));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$Type* p_f2, panda$core$Bit p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3391;
    org$pandalanguage$pandac$IRNode* $tmp3394;
    org$pandalanguage$pandac$Type* $tmp3395;
    org$pandalanguage$pandac$Type* $tmp3398;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3390 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3390 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3392 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3391 = *$tmp3392;
        org$pandalanguage$pandac$IRNode** $tmp3393 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3394 = p_f1;
        *$tmp3393 = $tmp3394;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3394));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3391));
    }
    {
        org$pandalanguage$pandac$Type** $tmp3396 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp3395 = *$tmp3396;
        org$pandalanguage$pandac$Type** $tmp3397 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp3398 = p_f2;
        *$tmp3397 = $tmp3398;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3398));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3395));
    }
    panda$core$Bit* $tmp3399 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp3399 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceEntry(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ChoiceEntry* p_f1) {
    org$pandalanguage$pandac$ChoiceEntry* $tmp3401;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3404;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3400 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3400 = p_f0;
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp3402 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp3401 = *$tmp3402;
        org$pandalanguage$pandac$ChoiceEntry** $tmp3403 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp3404 = p_f1;
        *$tmp3403 = $tmp3404;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3404));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3401));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3406;
    org$pandalanguage$pandac$IRNode* $tmp3409;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3410;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3413;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3405 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3405 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3407 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3406 = *$tmp3407;
        org$pandalanguage$pandac$IRNode** $tmp3408 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3409 = p_f1;
        *$tmp3408 = $tmp3409;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3409));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3406));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp3411 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp3410 = *$tmp3411;
        org$pandalanguage$pandac$ChoiceEntry** $tmp3412 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp3413 = p_f2;
        *$tmp3412 = $tmp3413;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3413));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3410));
    }
    panda$core$Int64* $tmp3414 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp3414 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$Type* $tmp3416;
    org$pandalanguage$pandac$Type* $tmp3419;
    org$pandalanguage$pandac$IRNode* $tmp3420;
    org$pandalanguage$pandac$IRNode* $tmp3423;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3415 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3415 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3417 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3416 = *$tmp3417;
        org$pandalanguage$pandac$Type** $tmp3418 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3419 = p_f1;
        *$tmp3418 = $tmp3419;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3419));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3416));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3421 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3420 = *$tmp3421;
        org$pandalanguage$pandac$IRNode** $tmp3422 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3423 = p_f2;
        *$tmp3422 = $tmp3423;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3423));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3420));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3424;
    org$pandalanguage$pandac$IRNode* $tmp3427;
    org$pandalanguage$pandac$IRNode* $tmp3428;
    org$pandalanguage$pandac$IRNode* $tmp3431;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3425 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3424 = *$tmp3425;
        org$pandalanguage$pandac$IRNode** $tmp3426 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3427 = p_f0;
        *$tmp3426 = $tmp3427;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3427));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3424));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3429 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3428 = *$tmp3429;
        org$pandalanguage$pandac$IRNode** $tmp3430 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3431 = p_f1;
        *$tmp3430 = $tmp3431;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3431));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3428));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    panda$core$String* $tmp3433;
    panda$core$String* $tmp3436;
    panda$collections$ImmutableArray* $tmp3437;
    panda$collections$ImmutableArray* $tmp3440;
    org$pandalanguage$pandac$IRNode* $tmp3441;
    org$pandalanguage$pandac$IRNode* $tmp3444;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3432 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3432 = p_f0;
    {
        panda$core$String** $tmp3434 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3433 = *$tmp3434;
        panda$core$String** $tmp3435 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3436 = p_f1;
        *$tmp3435 = $tmp3436;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3436));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3433));
    }
    {
        panda$collections$ImmutableArray** $tmp3438 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3437 = *$tmp3438;
        panda$collections$ImmutableArray** $tmp3439 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3440 = p_f2;
        *$tmp3439 = $tmp3440;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3440));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3437));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3442 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3441 = *$tmp3442;
        org$pandalanguage$pandac$IRNode** $tmp3443 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3444 = p_f3;
        *$tmp3443 = $tmp3444;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3444));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3441));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$collections$ImmutableArray* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3445;
    org$pandalanguage$pandac$IRNode* $tmp3448;
    panda$collections$ImmutableArray* $tmp3449;
    panda$collections$ImmutableArray* $tmp3452;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3446 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3445 = *$tmp3446;
        org$pandalanguage$pandac$IRNode** $tmp3447 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3448 = p_f0;
        *$tmp3447 = $tmp3448;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3448));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3445));
    }
    {
        panda$collections$ImmutableArray** $tmp3450 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp3449 = *$tmp3450;
        panda$collections$ImmutableArray** $tmp3451 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp3452 = p_f1;
        *$tmp3451 = $tmp3452;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3452));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3449));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3453;
    org$pandalanguage$pandac$IRNode* $tmp3456;
    org$pandalanguage$pandac$IRNode* $tmp3457;
    org$pandalanguage$pandac$IRNode* $tmp3460;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3454 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3453 = *$tmp3454;
        org$pandalanguage$pandac$IRNode** $tmp3455 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3456 = p_f0;
        *$tmp3455 = $tmp3456;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3456));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3453));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3458 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3457 = *$tmp3458;
        org$pandalanguage$pandac$IRNode** $tmp3459 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3460 = p_f1;
        *$tmp3459 = $tmp3460;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3460));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3457));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$FieldDecl* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3462;
    org$pandalanguage$pandac$Type* $tmp3465;
    org$pandalanguage$pandac$IRNode* $tmp3466;
    org$pandalanguage$pandac$IRNode* $tmp3469;
    org$pandalanguage$pandac$FieldDecl* $tmp3470;
    org$pandalanguage$pandac$FieldDecl* $tmp3473;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3461 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3461 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3463 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3462 = *$tmp3463;
        org$pandalanguage$pandac$Type** $tmp3464 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3465 = p_f1;
        *$tmp3464 = $tmp3465;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3465));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3462));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3467 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3466 = *$tmp3467;
        org$pandalanguage$pandac$IRNode** $tmp3468 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3469 = p_f2;
        *$tmp3468 = $tmp3469;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3469));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3466));
    }
    {
        org$pandalanguage$pandac$FieldDecl** $tmp3471 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp3470 = *$tmp3471;
        org$pandalanguage$pandac$FieldDecl** $tmp3472 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp3473 = p_f3;
        *$tmp3472 = $tmp3473;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3473));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3470));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3475;
    org$pandalanguage$pandac$IRNode* $tmp3478;
    panda$collections$ImmutableArray* $tmp3479;
    panda$collections$ImmutableArray* $tmp3482;
    org$pandalanguage$pandac$IRNode* $tmp3483;
    org$pandalanguage$pandac$IRNode* $tmp3486;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3474 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3474 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3476 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3475 = *$tmp3476;
        org$pandalanguage$pandac$IRNode** $tmp3477 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3478 = p_f1;
        *$tmp3477 = $tmp3478;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3478));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3475));
    }
    {
        panda$collections$ImmutableArray** $tmp3480 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3479 = *$tmp3480;
        panda$collections$ImmutableArray** $tmp3481 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3482 = p_f2;
        *$tmp3481 = $tmp3482;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3482));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3479));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3484 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3483 = *$tmp3484;
        org$pandalanguage$pandac$IRNode** $tmp3485 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3486 = p_f3;
        *$tmp3485 = $tmp3486;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3486));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3483));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$UInt64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3488;
    org$pandalanguage$pandac$Type* $tmp3491;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3487 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3487 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3489 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3488 = *$tmp3489;
        org$pandalanguage$pandac$Type** $tmp3490 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3491 = p_f1;
        *$tmp3490 = $tmp3491;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3491));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3488));
    }
    panda$core$UInt64* $tmp3492 = ((panda$core$UInt64*) ((char*) self->$data + 24));
    *$tmp3492 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3494;
    org$pandalanguage$pandac$IRNode* $tmp3497;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3493 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3493 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3495 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3494 = *$tmp3495;
        org$pandalanguage$pandac$IRNode** $tmp3496 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3497 = p_f1;
        *$tmp3496 = $tmp3497;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3497));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3494));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp3499;
    panda$core$String* $tmp3502;
    panda$collections$ImmutableArray* $tmp3503;
    panda$collections$ImmutableArray* $tmp3506;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3498 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3498 = p_f0;
    {
        panda$core$String** $tmp3500 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3499 = *$tmp3500;
        panda$core$String** $tmp3501 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3502 = p_f1;
        *$tmp3501 = $tmp3502;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3502));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3499));
    }
    {
        panda$collections$ImmutableArray** $tmp3504 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3503 = *$tmp3504;
        panda$collections$ImmutableArray** $tmp3505 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3506 = p_f2;
        *$tmp3505 = $tmp3506;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3506));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3503));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3508;
    org$pandalanguage$pandac$IRNode* $tmp3511;
    panda$collections$ImmutableArray* $tmp3512;
    panda$collections$ImmutableArray* $tmp3515;
    panda$collections$ImmutableArray* $tmp3516;
    panda$collections$ImmutableArray* $tmp3519;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3507 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3507 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3509 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3508 = *$tmp3509;
        org$pandalanguage$pandac$IRNode** $tmp3510 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3511 = p_f1;
        *$tmp3510 = $tmp3511;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3511));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3508));
    }
    {
        panda$collections$ImmutableArray** $tmp3513 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3512 = *$tmp3513;
        panda$collections$ImmutableArray** $tmp3514 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3515 = p_f2;
        *$tmp3514 = $tmp3515;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3515));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3512));
    }
    {
        panda$collections$ImmutableArray** $tmp3517 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3516 = *$tmp3517;
        panda$collections$ImmutableArray** $tmp3518 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3519 = p_f3;
        *$tmp3518 = $tmp3519;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3519));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3516));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$MethodRef* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3521;
    org$pandalanguage$pandac$Type* $tmp3524;
    org$pandalanguage$pandac$IRNode* $tmp3525;
    org$pandalanguage$pandac$IRNode* $tmp3528;
    org$pandalanguage$pandac$MethodRef* $tmp3529;
    org$pandalanguage$pandac$MethodRef* $tmp3532;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3520 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3520 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3522 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3521 = *$tmp3522;
        org$pandalanguage$pandac$Type** $tmp3523 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3524 = p_f1;
        *$tmp3523 = $tmp3524;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3524));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3521));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3526 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3525 = *$tmp3526;
        org$pandalanguage$pandac$IRNode** $tmp3527 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3528 = p_f2;
        *$tmp3527 = $tmp3528;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3528));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3525));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp3530 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 32));
        $tmp3529 = *$tmp3530;
        org$pandalanguage$pandac$MethodRef** $tmp3531 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 32));
        $tmp3532 = p_f3;
        *$tmp3531 = $tmp3532;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3532));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3529));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3535;
    org$pandalanguage$pandac$IRNode* $tmp3538;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3533 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3533 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp3534 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp3534 = p_f1;
    {
        org$pandalanguage$pandac$IRNode** $tmp3536 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3535 = *$tmp3536;
        org$pandalanguage$pandac$IRNode** $tmp3537 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3538 = p_f2;
        *$tmp3537 = $tmp3538;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3538));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3535));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp3540;
    panda$core$String* $tmp3543;
    org$pandalanguage$pandac$IRNode* $tmp3544;
    org$pandalanguage$pandac$IRNode* $tmp3547;
    org$pandalanguage$pandac$IRNode* $tmp3548;
    org$pandalanguage$pandac$IRNode* $tmp3551;
    panda$collections$ImmutableArray* $tmp3552;
    panda$collections$ImmutableArray* $tmp3555;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3539 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3539 = p_f0;
    {
        panda$core$String** $tmp3541 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3540 = *$tmp3541;
        panda$core$String** $tmp3542 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3543 = p_f1;
        *$tmp3542 = $tmp3543;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3543));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3540));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3545 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3544 = *$tmp3545;
        org$pandalanguage$pandac$IRNode** $tmp3546 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3547 = p_f2;
        *$tmp3546 = $tmp3547;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3547));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3544));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3549 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3548 = *$tmp3549;
        org$pandalanguage$pandac$IRNode** $tmp3550 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3551 = p_f3;
        *$tmp3550 = $tmp3551;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3551));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3548));
    }
    {
        panda$collections$ImmutableArray** $tmp3553 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3552 = *$tmp3553;
        panda$collections$ImmutableArray** $tmp3554 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3555 = p_f4;
        *$tmp3554 = $tmp3555;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3555));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3552));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Real64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3557;
    org$pandalanguage$pandac$Type* $tmp3560;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3556 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3556 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3558 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3557 = *$tmp3558;
        org$pandalanguage$pandac$Type** $tmp3559 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3560 = p_f1;
        *$tmp3559 = $tmp3560;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3560));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3557));
    }
    panda$core$Real64* $tmp3561 = ((panda$core$Real64*) ((char*) self->$data + 24));
    *$tmp3561 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3563;
    org$pandalanguage$pandac$IRNode* $tmp3566;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3562 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3562 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3564 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3563 = *$tmp3564;
        org$pandalanguage$pandac$IRNode** $tmp3565 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3566 = p_f1;
        *$tmp3565 = $tmp3566;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3566));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3563));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Int64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3568;
    org$pandalanguage$pandac$Type* $tmp3571;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3567 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3567 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3569 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3568 = *$tmp3569;
        org$pandalanguage$pandac$Type** $tmp3570 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3571 = p_f1;
        *$tmp3570 = $tmp3571;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3571));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3568));
    }
    panda$core$Int64* $tmp3572 = ((panda$core$Int64*) ((char*) self->$data + 24));
    *$tmp3572 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$core$Int64 p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3573;
    org$pandalanguage$pandac$IRNode* $tmp3576;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3574 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3573 = *$tmp3574;
        org$pandalanguage$pandac$IRNode** $tmp3575 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3576 = p_f0;
        *$tmp3575 = $tmp3576;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3576));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3573));
    }
    panda$core$Int64* $tmp3577 = ((panda$core$Int64*) ((char*) self->$data + 8));
    *$tmp3577 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp3579;
    panda$core$String* $tmp3582;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3578 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3578 = p_f0;
    {
        panda$core$String** $tmp3580 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3579 = *$tmp3580;
        panda$core$String** $tmp3581 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3582 = p_f1;
        *$tmp3581 = $tmp3582;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3582));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3579));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3584;
    org$pandalanguage$pandac$IRNode* $tmp3587;
    org$pandalanguage$pandac$IRNode* $tmp3588;
    org$pandalanguage$pandac$IRNode* $tmp3591;
    org$pandalanguage$pandac$IRNode* $tmp3592;
    org$pandalanguage$pandac$IRNode* $tmp3595;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3583 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3583 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3585 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3584 = *$tmp3585;
        org$pandalanguage$pandac$IRNode** $tmp3586 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3587 = p_f1;
        *$tmp3586 = $tmp3587;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3587));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3584));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3589 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3588 = *$tmp3589;
        org$pandalanguage$pandac$IRNode** $tmp3590 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3591 = p_f2;
        *$tmp3590 = $tmp3591;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3591));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3588));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3593 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3592 = *$tmp3593;
        org$pandalanguage$pandac$IRNode** $tmp3594 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3595 = p_f3;
        *$tmp3594 = $tmp3595;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3595));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3592));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3597;
    org$pandalanguage$pandac$Type* $tmp3600;
    org$pandalanguage$pandac$IRNode* $tmp3601;
    org$pandalanguage$pandac$IRNode* $tmp3604;
    panda$collections$ImmutableArray* $tmp3605;
    panda$collections$ImmutableArray* $tmp3608;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3596 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3596 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3598 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3597 = *$tmp3598;
        org$pandalanguage$pandac$Type** $tmp3599 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3600 = p_f1;
        *$tmp3599 = $tmp3600;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3600));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3597));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3602 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3601 = *$tmp3602;
        org$pandalanguage$pandac$IRNode** $tmp3603 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3604 = p_f2;
        *$tmp3603 = $tmp3604;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3604));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3601));
    }
    {
        panda$collections$ImmutableArray** $tmp3606 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3605 = *$tmp3606;
        panda$collections$ImmutableArray** $tmp3607 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3608 = p_f3;
        *$tmp3607 = $tmp3608;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3608));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3605));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTpanda$core$String$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$collections$ImmutableArray* $tmp3610;
    panda$collections$ImmutableArray* $tmp3613;
    org$pandalanguage$pandac$ASTNode* $tmp3614;
    org$pandalanguage$pandac$ASTNode* $tmp3617;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3609 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3609 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp3611 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3610 = *$tmp3611;
        panda$collections$ImmutableArray** $tmp3612 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3613 = p_f1;
        *$tmp3612 = $tmp3613;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3613));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3610));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp3615 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp3614 = *$tmp3615;
        org$pandalanguage$pandac$ASTNode** $tmp3616 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp3617 = p_f2;
        *$tmp3616 = $tmp3617;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3617));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3614));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3, panda$collections$ImmutableArray* p_f4) {
    org$pandalanguage$pandac$Type* $tmp3619;
    org$pandalanguage$pandac$Type* $tmp3622;
    org$pandalanguage$pandac$IRNode* $tmp3623;
    org$pandalanguage$pandac$IRNode* $tmp3626;
    panda$collections$ImmutableArray* $tmp3627;
    panda$collections$ImmutableArray* $tmp3630;
    panda$collections$ImmutableArray* $tmp3631;
    panda$collections$ImmutableArray* $tmp3634;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3618 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3618 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3620 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3619 = *$tmp3620;
        org$pandalanguage$pandac$Type** $tmp3621 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3622 = p_f1;
        *$tmp3621 = $tmp3622;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3622));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3619));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3624 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3623 = *$tmp3624;
        org$pandalanguage$pandac$IRNode** $tmp3625 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3626 = p_f2;
        *$tmp3625 = $tmp3626;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3626));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3623));
    }
    {
        panda$collections$ImmutableArray** $tmp3628 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3627 = *$tmp3628;
        panda$collections$ImmutableArray** $tmp3629 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3630 = p_f3;
        *$tmp3629 = $tmp3630;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3630));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3627));
    }
    {
        panda$collections$ImmutableArray** $tmp3632 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3631 = *$tmp3632;
        panda$collections$ImmutableArray** $tmp3633 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3634 = p_f4;
        *$tmp3633 = $tmp3634;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3634));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3631));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3636;
    org$pandalanguage$pandac$IRNode* $tmp3639;
    panda$collections$ImmutableArray* $tmp3640;
    panda$collections$ImmutableArray* $tmp3643;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3635 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3635 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3637 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3636 = *$tmp3637;
        org$pandalanguage$pandac$IRNode** $tmp3638 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3639 = p_f1;
        *$tmp3638 = $tmp3639;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3639));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3636));
    }
    {
        panda$collections$ImmutableArray** $tmp3641 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3640 = *$tmp3641;
        panda$collections$ImmutableArray** $tmp3642 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3643 = p_f2;
        *$tmp3642 = $tmp3643;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3643));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3640));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$IRNode* $tmp3645;
    org$pandalanguage$pandac$IRNode* $tmp3648;
    org$pandalanguage$pandac$IRNode* $tmp3649;
    org$pandalanguage$pandac$IRNode* $tmp3652;
    org$pandalanguage$pandac$IRNode* $tmp3654;
    org$pandalanguage$pandac$IRNode* $tmp3657;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3644 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3644 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3646 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3645 = *$tmp3646;
        org$pandalanguage$pandac$IRNode** $tmp3647 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3648 = p_f1;
        *$tmp3647 = $tmp3648;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3648));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3645));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3650 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3649 = *$tmp3650;
        org$pandalanguage$pandac$IRNode** $tmp3651 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3652 = p_f2;
        *$tmp3651 = $tmp3652;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3652));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3649));
    }
    panda$core$Bit* $tmp3653 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp3653 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp3655 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3654 = *$tmp3655;
        org$pandalanguage$pandac$IRNode** $tmp3656 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3657 = p_f4;
        *$tmp3656 = $tmp3657;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3657));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3654));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp3660;
    panda$collections$ImmutableArray* $tmp3663;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3658 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3658 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp3659 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp3659 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp3661 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3660 = *$tmp3661;
        panda$collections$ImmutableArray** $tmp3662 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3663 = p_f2;
        *$tmp3662 = $tmp3663;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3663));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3660));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$Type* p_f2) {
    panda$core$String* $tmp3665;
    panda$core$String* $tmp3668;
    org$pandalanguage$pandac$Type* $tmp3669;
    org$pandalanguage$pandac$Type* $tmp3672;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3664 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3664 = p_f0;
    {
        panda$core$String** $tmp3666 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3665 = *$tmp3666;
        panda$core$String** $tmp3667 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3668 = p_f1;
        *$tmp3667 = $tmp3668;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3668));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3665));
    }
    {
        org$pandalanguage$pandac$Type** $tmp3670 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp3669 = *$tmp3670;
        org$pandalanguage$pandac$Type** $tmp3671 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp3672 = p_f2;
        *$tmp3671 = $tmp3672;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3672));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3669));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable* p_f1) {
    org$pandalanguage$pandac$Variable* $tmp3674;
    org$pandalanguage$pandac$Variable* $tmp3677;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3673 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3673 = p_f0;
    {
        org$pandalanguage$pandac$Variable** $tmp3675 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3674 = *$tmp3675;
        org$pandalanguage$pandac$Variable** $tmp3676 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3677 = p_f1;
        *$tmp3676 = $tmp3677;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3677));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3674));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp3679;
    panda$core$String* $tmp3682;
    org$pandalanguage$pandac$IRNode* $tmp3683;
    org$pandalanguage$pandac$IRNode* $tmp3686;
    panda$collections$ImmutableArray* $tmp3687;
    panda$collections$ImmutableArray* $tmp3690;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3678 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3678 = p_f0;
    {
        panda$core$String** $tmp3680 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3679 = *$tmp3680;
        panda$core$String** $tmp3681 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3682 = p_f1;
        *$tmp3681 = $tmp3682;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3682));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3679));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3684 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3683 = *$tmp3684;
        org$pandalanguage$pandac$IRNode** $tmp3685 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3686 = p_f2;
        *$tmp3685 = $tmp3686;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3686));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3683));
    }
    {
        panda$collections$ImmutableArray** $tmp3688 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3687 = *$tmp3688;
        panda$collections$ImmutableArray** $tmp3689 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3690 = p_f3;
        *$tmp3689 = $tmp3690;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3690));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3687));
    }
}

