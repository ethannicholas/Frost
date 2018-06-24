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
#include "panda/collections/CollectionView.h"
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
typedef panda$core$String* (*$fn1738)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1756)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1789)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1829)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1880)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1885)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1900)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1905)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1941)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1948)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1959)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1990)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1998)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$String* (*$fn2016)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2036)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn2077)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2084)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2095)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2179)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2186)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2197)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2242)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2249)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2260)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2276)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2283)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2294)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2321)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn2411)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2418)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2429)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2592)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2599)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2621)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2659)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2681)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2699)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2783)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2824)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2833)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2874)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2881)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2892)(panda$collections$Iterator*);

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
static panda$core$String $s2065 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s2067 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s2098 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s2108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s2146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s2168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s2200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s2232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s2297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s2363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s2398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s2401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s2463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s2480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2484 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s2506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66\x2d\x2a\x63\x61\x70\x74\x75\x72\x65\x2a\x2d", 15, 7664694969176949793, NULL };
static panda$core$String $s2528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s2535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s2553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s2558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s2561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2602 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s2617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s2627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44\x2a\x2d", 14, -8805999466873262330, NULL };
static panda$core$String $s2648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2671 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44\x2a\x2d", 14, -8805999466873262330, NULL };
static panda$core$String $s2676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2701 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s2740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s2743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s2745 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s2773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s2776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s2779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s2805 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x63\x61\x70\x74\x75\x72\x65\x2a\x2d", 11, -3294192213738444701, NULL };
static panda$core$String $s2820 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s2827 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s2830 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2858 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s2864 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2911 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };

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
    panda$core$String* $tmp2045;
    panda$core$Int64 $tmp2048;
    org$pandalanguage$pandac$IRNode* test2050 = NULL;
    panda$collections$ImmutableArray* ifTrue2052 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse2054 = NULL;
    panda$core$MutableString* result2059 = NULL;
    panda$core$MutableString* $tmp2060;
    panda$core$MutableString* $tmp2061;
    panda$core$String* $tmp2063;
    panda$core$String* $tmp2064;
    panda$collections$Iterator* Iter$532$172072 = NULL;
    panda$collections$Iterator* $tmp2073;
    panda$collections$Iterator* $tmp2074;
    org$pandalanguage$pandac$IRNode* s2090 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2091;
    panda$core$Object* $tmp2092;
    panda$core$String* $tmp2097;
    panda$core$Char8 $tmp2102;
    panda$core$UInt8 $tmp2103;
    panda$core$String* $tmp2104;
    panda$core$String* $tmp2105;
    panda$core$String* $tmp2110;
    panda$core$String* $tmp2111;
    panda$core$Int64 $tmp2117;
    panda$core$UInt64 value2119;
    panda$core$String* $tmp2121;
    panda$core$String* $tmp2122;
    panda$core$Int64 $tmp2126;
    org$pandalanguage$pandac$IRNode* value2128 = NULL;
    panda$core$String* $tmp2130;
    panda$core$String* $tmp2131;
    panda$core$String* $tmp2132;
    panda$core$Int64 $tmp2139;
    org$pandalanguage$pandac$IRNode* value2141 = NULL;
    panda$core$String* $tmp2143;
    panda$core$String* $tmp2144;
    panda$core$String* $tmp2145;
    panda$core$Int64 $tmp2152;
    panda$core$String* label2154 = NULL;
    panda$collections$ImmutableArray* statements2156 = NULL;
    panda$core$MutableString* result2161 = NULL;
    panda$core$MutableString* $tmp2162;
    panda$core$MutableString* $tmp2163;
    panda$core$String* $tmp2165;
    panda$core$String* $tmp2166;
    panda$collections$Iterator* Iter$552$172174 = NULL;
    panda$collections$Iterator* $tmp2175;
    panda$collections$Iterator* $tmp2176;
    org$pandalanguage$pandac$IRNode* s2192 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2193;
    panda$core$Object* $tmp2194;
    panda$core$String* $tmp2199;
    panda$core$Char8 $tmp2204;
    panda$core$UInt8 $tmp2205;
    panda$core$String* $tmp2206;
    panda$core$String* $tmp2207;
    panda$core$Int64 $tmp2213;
    org$pandalanguage$pandac$IRNode* value2215 = NULL;
    panda$collections$ImmutableArray* whens2217 = NULL;
    panda$collections$ImmutableArray* other2219 = NULL;
    panda$core$MutableString* result2224 = NULL;
    panda$core$MutableString* $tmp2225;
    panda$core$MutableString* $tmp2226;
    panda$core$String* $tmp2228;
    panda$core$String* $tmp2229;
    panda$collections$Iterator* Iter$559$172237 = NULL;
    panda$collections$Iterator* $tmp2238;
    panda$collections$Iterator* $tmp2239;
    org$pandalanguage$pandac$IRNode* w2255 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2256;
    panda$core$Object* $tmp2257;
    panda$core$String* $tmp2262;
    panda$collections$Iterator* Iter$564$212271 = NULL;
    panda$collections$Iterator* $tmp2272;
    panda$collections$Iterator* $tmp2273;
    org$pandalanguage$pandac$IRNode* s2289 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2290;
    panda$core$Object* $tmp2291;
    panda$core$String* $tmp2296;
    panda$core$Char8 $tmp2301;
    panda$core$UInt8 $tmp2302;
    panda$core$String* $tmp2303;
    panda$core$String* $tmp2304;
    panda$core$Int64 $tmp2310;
    org$pandalanguage$pandac$IRNode* target2312 = NULL;
    org$pandalanguage$pandac$MethodRef* m2314 = NULL;
    panda$core$String* $tmp2316;
    panda$core$String* $tmp2317;
    panda$core$String* $tmp2318;
    panda$core$String* $tmp2319;
    panda$core$String* $tmp2320;
    panda$core$String* $tmp2330;
    panda$core$Int64 $tmp2333;
    panda$core$UInt64 value2335;
    panda$core$String* $tmp2337;
    panda$core$String* $tmp2338;
    panda$core$Object* $tmp2340;
    panda$core$Int64 $tmp2345;
    panda$core$String* $tmp2347;
    panda$core$Int64 $tmp2351;
    org$pandalanguage$pandac$parser$Token$Kind op2353;
    org$pandalanguage$pandac$IRNode* base2355 = NULL;
    panda$core$String* $tmp2357;
    panda$core$String* $tmp2358;
    panda$core$String* $tmp2359;
    panda$core$String* $tmp2360;
    panda$core$String* $tmp2361;
    panda$core$Int64 $tmp2370;
    panda$core$String* label2372 = NULL;
    org$pandalanguage$pandac$IRNode* target2374 = NULL;
    org$pandalanguage$pandac$IRNode* list2376 = NULL;
    panda$collections$ImmutableArray* statements2378 = NULL;
    panda$core$MutableString* result2383 = NULL;
    panda$core$MutableString* $tmp2384;
    panda$core$MutableString* $tmp2385;
    panda$core$String* $tmp2387;
    panda$core$String* $tmp2388;
    panda$core$String* $tmp2392;
    panda$core$String* $tmp2393;
    panda$core$String* $tmp2394;
    panda$core$String* $tmp2395;
    panda$collections$Iterator* Iter$587$172406 = NULL;
    panda$collections$Iterator* $tmp2407;
    panda$collections$Iterator* $tmp2408;
    org$pandalanguage$pandac$IRNode* s2424 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2425;
    panda$core$Object* $tmp2426;
    panda$core$String* $tmp2431;
    panda$core$Char8 $tmp2436;
    panda$core$UInt8 $tmp2437;
    panda$core$String* $tmp2438;
    panda$core$String* $tmp2439;
    panda$core$Int64 $tmp2445;
    panda$core$Real64 value2447;
    panda$core$String* $tmp2449;
    panda$core$String* $tmp2450;
    panda$core$Int64 $tmp2454;
    org$pandalanguage$pandac$IRNode* value2456 = NULL;
    panda$core$String* $tmp2458;
    panda$core$String* $tmp2459;
    panda$core$String* $tmp2460;
    panda$core$String* $tmp2467;
    panda$core$Int64 $tmp2471;
    org$pandalanguage$pandac$Type* type2473 = NULL;
    panda$core$Int64 id2475;
    panda$core$String* $tmp2477;
    panda$core$String* $tmp2478;
    panda$core$String* $tmp2479;
    panda$core$Object* $tmp2481;
    panda$core$Int64 $tmp2488;
    org$pandalanguage$pandac$IRNode* base2490 = NULL;
    panda$core$Int64 id2492;
    panda$core$String* $tmp2494;
    panda$core$String* $tmp2495;
    panda$core$String* $tmp2496;
    panda$core$String* $tmp2497;
    panda$core$String* $tmp2498;
    panda$core$Object* $tmp2500;
    panda$core$Int64 $tmp2510;
    panda$core$String* $tmp2512;
    panda$core$Int64 $tmp2516;
    panda$core$String* $tmp2518;
    panda$core$Int64 $tmp2522;
    panda$core$String* str2524 = NULL;
    panda$core$String* $tmp2526;
    panda$core$String* $tmp2527;
    panda$core$Int64 $tmp2532;
    panda$core$String* $tmp2534;
    panda$core$Int64 $tmp2538;
    org$pandalanguage$pandac$IRNode* test2540 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue2542 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse2544 = NULL;
    panda$core$String* $tmp2546;
    panda$core$String* $tmp2547;
    panda$core$String* $tmp2548;
    panda$core$String* $tmp2549;
    panda$core$String* $tmp2550;
    panda$core$String* $tmp2551;
    panda$core$String* $tmp2552;
    panda$core$Int64 $tmp2565;
    org$pandalanguage$pandac$Type* type2567 = NULL;
    panda$core$String* $tmp2569;
    panda$core$String* $tmp2570;
    panda$core$Int64 $tmp2574;
    panda$core$String* name2576 = NULL;
    panda$core$String* $tmp2578;
    panda$core$Int64 $tmp2581;
    org$pandalanguage$pandac$IRNode* base2583 = NULL;
    panda$collections$ImmutableArray* args2585 = NULL;
    panda$core$String* $tmp2587;
    panda$core$String* $tmp2588;
    panda$core$String* $tmp2589;
    panda$core$String* $tmp2590;
    panda$core$String* $tmp2591;
    panda$core$String* $tmp2596;
    panda$core$Int64 $tmp2606;
    panda$collections$ImmutableArray* params2608 = NULL;
    org$pandalanguage$pandac$ASTNode* body2610 = NULL;
    panda$core$String* $tmp2612;
    panda$core$String* $tmp2613;
    panda$core$String* $tmp2614;
    panda$core$String* $tmp2615;
    panda$core$String* $tmp2616;
    panda$core$String* $tmp2618;
    panda$core$Int64 $tmp2631;
    org$pandalanguage$pandac$IRNode* target2633 = NULL;
    panda$collections$ImmutableArray* methods2635 = NULL;
    panda$collections$ImmutableArray* args2637 = NULL;
    panda$core$String* $tmp2639;
    panda$core$String* $tmp2640;
    panda$core$String* $tmp2641;
    panda$core$String* $tmp2642;
    panda$core$String* $tmp2643;
    panda$core$String* $tmp2644;
    panda$core$String* $tmp2645;
    panda$core$Object* $tmp2650;
    panda$core$Int64 $tmp2651;
    panda$core$String* $tmp2656;
    panda$core$String* $tmp2666;
    panda$core$String* $tmp2667;
    panda$core$String* $tmp2668;
    panda$core$String* $tmp2669;
    panda$core$String* $tmp2670;
    panda$core$Object* $tmp2672;
    panda$core$Int64 $tmp2673;
    panda$core$String* $tmp2678;
    panda$core$Int64 $tmp2688;
    org$pandalanguage$pandac$IRNode* target2690 = NULL;
    panda$collections$ImmutableArray* methods2692 = NULL;
    panda$core$String* $tmp2694;
    panda$core$String* $tmp2695;
    panda$core$String* $tmp2696;
    panda$core$String* $tmp2697;
    panda$core$String* $tmp2698;
    panda$core$Object* $tmp2703;
    panda$core$Int64 $tmp2704;
    panda$core$String* $tmp2711;
    panda$core$String* $tmp2712;
    panda$core$String* $tmp2713;
    panda$core$Object* $tmp2714;
    panda$core$Int64 $tmp2715;
    panda$core$Int64 $tmp2722;
    org$pandalanguage$pandac$IRNode* start2724 = NULL;
    org$pandalanguage$pandac$IRNode* end2726 = NULL;
    panda$core$Bit inclusive2728;
    org$pandalanguage$pandac$IRNode* step2730 = NULL;
    panda$core$MutableString* result2735 = NULL;
    panda$core$MutableString* $tmp2736;
    panda$core$MutableString* $tmp2737;
    panda$core$String* $tmp2741;
    panda$core$String* $tmp2742;
    panda$core$String* $tmp2747;
    panda$core$String* $tmp2748;
    panda$core$Int64 $tmp2754;
    org$pandalanguage$pandac$Variable$Kind kind2756;
    panda$collections$ImmutableArray* decls2758 = NULL;
    panda$core$MutableString* result2763 = NULL;
    panda$core$MutableString* $tmp2764;
    panda$core$MutableString* $tmp2765;
    org$pandalanguage$pandac$Variable$Kind $match$655_172767;
    panda$core$Int64 $tmp2768;
    panda$core$Int64 $tmp2771;
    panda$core$Int64 $tmp2774;
    panda$core$Int64 $tmp2777;
    panda$core$String* $tmp2780;
    panda$core$String* $tmp2785;
    panda$core$String* $tmp2786;
    panda$core$Int64 $tmp2792;
    panda$core$String* name2794 = NULL;
    panda$core$String* $tmp2796;
    panda$core$Int64 $tmp2799;
    org$pandalanguage$pandac$Variable* variable2801 = NULL;
    panda$core$String* $tmp2803;
    panda$core$String* $tmp2804;
    panda$core$Int64 $tmp2809;
    panda$collections$ImmutableArray* tests2811 = NULL;
    panda$collections$ImmutableArray* statements2813 = NULL;
    panda$core$String* $tmp2815;
    panda$core$String* $tmp2816;
    panda$core$String* $tmp2817;
    panda$core$String* $tmp2818;
    panda$core$String* $tmp2819;
    panda$core$String* $tmp2821;
    panda$core$String* $tmp2829;
    panda$core$Int64 $tmp2840;
    panda$core$String* label2842 = NULL;
    org$pandalanguage$pandac$IRNode* test2844 = NULL;
    panda$collections$ImmutableArray* statements2846 = NULL;
    panda$core$MutableString* result2851 = NULL;
    panda$core$MutableString* $tmp2852;
    panda$core$MutableString* $tmp2853;
    panda$core$String* $tmp2855;
    panda$core$String* $tmp2856;
    panda$core$String* $tmp2860;
    panda$core$String* $tmp2861;
    panda$collections$Iterator* Iter$675$172869 = NULL;
    panda$collections$Iterator* $tmp2870;
    panda$collections$Iterator* $tmp2871;
    org$pandalanguage$pandac$IRNode* s2887 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2888;
    panda$core$Object* $tmp2889;
    panda$core$String* $tmp2894;
    panda$core$Char8 $tmp2899;
    panda$core$UInt8 $tmp2900;
    panda$core$String* $tmp2901;
    panda$core$String* $tmp2902;
    panda$core$Bit $tmp2908;
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
            ITable* $tmp1736 = ((panda$collections$CollectionView*) args1725)->$class->itable;
            while ($tmp1736->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1736 = $tmp1736->next;
            }
            $fn1738 $tmp1737 = $tmp1736->methods[1];
            panda$core$String* $tmp1739 = $tmp1737(((panda$collections$CollectionView*) args1725));
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
                    ITable* $tmp1827 = ((panda$collections$CollectionView*) args1816)->$class->itable;
                    while ($tmp1827->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp1827 = $tmp1827->next;
                    }
                    $fn1829 $tmp1828 = $tmp1827->methods[1];
                    panda$core$String* $tmp1830 = $tmp1828(((panda$collections$CollectionView*) args1816));
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
            ITable* $tmp1996 = ((panda$collections$CollectionView*) args1983)->$class->itable;
            while ($tmp1996->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1996 = $tmp1996->next;
            }
            $fn1998 $tmp1997 = $tmp1996->methods[2];
            panda$core$String* $tmp1999 = $tmp1997(((panda$collections$CollectionView*) args1983), &$s1995);
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
            if (((panda$core$Bit) { base2027 != NULL }).value) {
            {
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
            $tmp2045 = ((org$pandalanguage$pandac$Symbol*) field2029)->name;
            $returnValue1492 = $tmp2045;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2045));
            $tmp1483 = 23;
            goto $l1481;
            $l2046:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2048, 19);
        panda$core$Bit $tmp2049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2048);
        if ($tmp2049.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2051 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 16));
            test2050 = *$tmp2051;
            panda$collections$ImmutableArray** $tmp2053 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 24));
            ifTrue2052 = *$tmp2053;
            org$pandalanguage$pandac$IRNode** $tmp2055 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 32));
            ifFalse2054 = *$tmp2055;
            int $tmp2058;
            {
                panda$core$MutableString* $tmp2062 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp2066 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2065, ((panda$core$Object*) test2050));
                $tmp2064 = $tmp2066;
                panda$core$String* $tmp2068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2064, &$s2067);
                $tmp2063 = $tmp2068;
                panda$core$MutableString$init$panda$core$String($tmp2062, $tmp2063);
                $tmp2061 = $tmp2062;
                $tmp2060 = $tmp2061;
                result2059 = $tmp2060;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2060));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2061));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2063));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2064));
                {
                    int $tmp2071;
                    {
                        ITable* $tmp2075 = ((panda$collections$Iterable*) ifTrue2052)->$class->itable;
                        while ($tmp2075->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2075 = $tmp2075->next;
                        }
                        $fn2077 $tmp2076 = $tmp2075->methods[0];
                        panda$collections$Iterator* $tmp2078 = $tmp2076(((panda$collections$Iterable*) ifTrue2052));
                        $tmp2074 = $tmp2078;
                        $tmp2073 = $tmp2074;
                        Iter$532$172072 = $tmp2073;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2073));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2074));
                        $l2079:;
                        ITable* $tmp2082 = Iter$532$172072->$class->itable;
                        while ($tmp2082->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2082 = $tmp2082->next;
                        }
                        $fn2084 $tmp2083 = $tmp2082->methods[0];
                        panda$core$Bit $tmp2085 = $tmp2083(Iter$532$172072);
                        panda$core$Bit $tmp2086 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2085);
                        bool $tmp2081 = $tmp2086.value;
                        if (!$tmp2081) goto $l2080;
                        {
                            int $tmp2089;
                            {
                                ITable* $tmp2093 = Iter$532$172072->$class->itable;
                                while ($tmp2093->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2093 = $tmp2093->next;
                                }
                                $fn2095 $tmp2094 = $tmp2093->methods[1];
                                panda$core$Object* $tmp2096 = $tmp2094(Iter$532$172072);
                                $tmp2092 = $tmp2096;
                                $tmp2091 = ((org$pandalanguage$pandac$IRNode*) $tmp2092);
                                s2090 = $tmp2091;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2091));
                                panda$core$Panda$unref$panda$core$Object($tmp2092);
                                panda$core$String* $tmp2099 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2090), &$s2098);
                                $tmp2097 = $tmp2099;
                                panda$core$MutableString$append$panda$core$String(result2059, $tmp2097);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2097));
                            }
                            $tmp2089 = -1;
                            goto $l2087;
                            $l2087:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2090));
                            s2090 = NULL;
                            switch ($tmp2089) {
                                case -1: goto $l2100;
                            }
                            $l2100:;
                        }
                        goto $l2079;
                        $l2080:;
                    }
                    $tmp2071 = -1;
                    goto $l2069;
                    $l2069:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$532$172072));
                    Iter$532$172072 = NULL;
                    switch ($tmp2071) {
                        case -1: goto $l2101;
                    }
                    $l2101:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2103, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2102, $tmp2103);
                panda$core$MutableString$append$panda$core$Char8(result2059, $tmp2102);
                if (((panda$core$Bit) { ifFalse2054 != NULL }).value) {
                {
                    panda$core$String* $tmp2107 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2106, ((panda$core$Object*) ifFalse2054));
                    $tmp2105 = $tmp2107;
                    panda$core$String* $tmp2109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2105, &$s2108);
                    $tmp2104 = $tmp2109;
                    panda$core$MutableString$append$panda$core$String(result2059, $tmp2104);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2104));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2105));
                }
                }
                panda$core$String* $tmp2112 = panda$core$MutableString$finish$R$panda$core$String(result2059);
                $tmp2111 = $tmp2112;
                $tmp2110 = $tmp2111;
                $returnValue1492 = $tmp2110;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2110));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2111));
                $tmp2058 = 0;
                goto $l2056;
                $l2113:;
                $tmp1483 = 24;
                goto $l1481;
                $l2114:;
                return $returnValue1492;
            }
            $l2056:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2059));
            result2059 = NULL;
            switch ($tmp2058) {
                case 0: goto $l2113;
            }
            $l2116:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2117, 20);
        panda$core$Bit $tmp2118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2117);
        if ($tmp2118.value) {
        {
            panda$core$UInt64* $tmp2120 = ((panda$core$UInt64*) ((char*) $match$448_91484->$data + 24));
            value2119 = *$tmp2120;
            panda$core$String* $tmp2123 = panda$core$UInt64$convert$R$panda$core$String(value2119);
            $tmp2122 = $tmp2123;
            $tmp2121 = $tmp2122;
            $returnValue1492 = $tmp2121;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2121));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2122));
            $tmp1483 = 25;
            goto $l1481;
            $l2124:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2126, 21);
        panda$core$Bit $tmp2127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2126);
        if ($tmp2127.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2129 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 16));
            value2128 = *$tmp2129;
            panda$core$String* $tmp2134 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2133, ((panda$core$Object*) value2128));
            $tmp2132 = $tmp2134;
            panda$core$String* $tmp2136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2132, &$s2135);
            $tmp2131 = $tmp2136;
            $tmp2130 = $tmp2131;
            $returnValue1492 = $tmp2130;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2130));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2131));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2132));
            $tmp1483 = 26;
            goto $l1481;
            $l2137:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2139, 22);
        panda$core$Bit $tmp2140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2139);
        if ($tmp2140.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2142 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 16));
            value2141 = *$tmp2142;
            panda$core$String* $tmp2147 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2146, ((panda$core$Object*) value2141));
            $tmp2145 = $tmp2147;
            panda$core$String* $tmp2149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2145, &$s2148);
            $tmp2144 = $tmp2149;
            $tmp2143 = $tmp2144;
            $returnValue1492 = $tmp2143;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2143));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2144));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2145));
            $tmp1483 = 27;
            goto $l1481;
            $l2150:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2152, 23);
        panda$core$Bit $tmp2153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2152);
        if ($tmp2153.value) {
        {
            panda$core$String** $tmp2155 = ((panda$core$String**) ((char*) $match$448_91484->$data + 16));
            label2154 = *$tmp2155;
            panda$collections$ImmutableArray** $tmp2157 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 24));
            statements2156 = *$tmp2157;
            int $tmp2160;
            {
                panda$core$MutableString* $tmp2164 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2164);
                $tmp2163 = $tmp2164;
                $tmp2162 = $tmp2163;
                result2161 = $tmp2162;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2162));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2163));
                if (((panda$core$Bit) { label2154 != NULL }).value) {
                {
                    panda$core$String* $tmp2167 = panda$core$String$convert$R$panda$core$String(label2154);
                    $tmp2166 = $tmp2167;
                    panda$core$String* $tmp2169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2166, &$s2168);
                    $tmp2165 = $tmp2169;
                    panda$core$MutableString$append$panda$core$String(result2161, $tmp2165);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2165));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2166));
                }
                }
                panda$core$MutableString$append$panda$core$String(result2161, &$s2170);
                {
                    int $tmp2173;
                    {
                        ITable* $tmp2177 = ((panda$collections$Iterable*) statements2156)->$class->itable;
                        while ($tmp2177->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2177 = $tmp2177->next;
                        }
                        $fn2179 $tmp2178 = $tmp2177->methods[0];
                        panda$collections$Iterator* $tmp2180 = $tmp2178(((panda$collections$Iterable*) statements2156));
                        $tmp2176 = $tmp2180;
                        $tmp2175 = $tmp2176;
                        Iter$552$172174 = $tmp2175;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2175));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2176));
                        $l2181:;
                        ITable* $tmp2184 = Iter$552$172174->$class->itable;
                        while ($tmp2184->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2184 = $tmp2184->next;
                        }
                        $fn2186 $tmp2185 = $tmp2184->methods[0];
                        panda$core$Bit $tmp2187 = $tmp2185(Iter$552$172174);
                        panda$core$Bit $tmp2188 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2187);
                        bool $tmp2183 = $tmp2188.value;
                        if (!$tmp2183) goto $l2182;
                        {
                            int $tmp2191;
                            {
                                ITable* $tmp2195 = Iter$552$172174->$class->itable;
                                while ($tmp2195->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2195 = $tmp2195->next;
                                }
                                $fn2197 $tmp2196 = $tmp2195->methods[1];
                                panda$core$Object* $tmp2198 = $tmp2196(Iter$552$172174);
                                $tmp2194 = $tmp2198;
                                $tmp2193 = ((org$pandalanguage$pandac$IRNode*) $tmp2194);
                                s2192 = $tmp2193;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2193));
                                panda$core$Panda$unref$panda$core$Object($tmp2194);
                                panda$core$String* $tmp2201 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2192), &$s2200);
                                $tmp2199 = $tmp2201;
                                panda$core$MutableString$append$panda$core$String(result2161, $tmp2199);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2199));
                            }
                            $tmp2191 = -1;
                            goto $l2189;
                            $l2189:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2192));
                            s2192 = NULL;
                            switch ($tmp2191) {
                                case -1: goto $l2202;
                            }
                            $l2202:;
                        }
                        goto $l2181;
                        $l2182:;
                    }
                    $tmp2173 = -1;
                    goto $l2171;
                    $l2171:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$552$172174));
                    Iter$552$172174 = NULL;
                    switch ($tmp2173) {
                        case -1: goto $l2203;
                    }
                    $l2203:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2205, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2204, $tmp2205);
                panda$core$MutableString$append$panda$core$Char8(result2161, $tmp2204);
                panda$core$String* $tmp2208 = panda$core$MutableString$finish$R$panda$core$String(result2161);
                $tmp2207 = $tmp2208;
                $tmp2206 = $tmp2207;
                $returnValue1492 = $tmp2206;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2206));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2207));
                $tmp2160 = 0;
                goto $l2158;
                $l2209:;
                $tmp1483 = 28;
                goto $l1481;
                $l2210:;
                return $returnValue1492;
            }
            $l2158:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2161));
            result2161 = NULL;
            switch ($tmp2160) {
                case 0: goto $l2209;
            }
            $l2212:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2213, 24);
        panda$core$Bit $tmp2214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2213);
        if ($tmp2214.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2216 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 16));
            value2215 = *$tmp2216;
            panda$collections$ImmutableArray** $tmp2218 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 24));
            whens2217 = *$tmp2218;
            panda$collections$ImmutableArray** $tmp2220 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 32));
            other2219 = *$tmp2220;
            int $tmp2223;
            {
                panda$core$MutableString* $tmp2227 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp2231 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2230, ((panda$core$Object*) value2215));
                $tmp2229 = $tmp2231;
                panda$core$String* $tmp2233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2229, &$s2232);
                $tmp2228 = $tmp2233;
                panda$core$MutableString$init$panda$core$String($tmp2227, $tmp2228);
                $tmp2226 = $tmp2227;
                $tmp2225 = $tmp2226;
                result2224 = $tmp2225;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2225));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2226));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2228));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2229));
                {
                    int $tmp2236;
                    {
                        ITable* $tmp2240 = ((panda$collections$Iterable*) whens2217)->$class->itable;
                        while ($tmp2240->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2240 = $tmp2240->next;
                        }
                        $fn2242 $tmp2241 = $tmp2240->methods[0];
                        panda$collections$Iterator* $tmp2243 = $tmp2241(((panda$collections$Iterable*) whens2217));
                        $tmp2239 = $tmp2243;
                        $tmp2238 = $tmp2239;
                        Iter$559$172237 = $tmp2238;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2238));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2239));
                        $l2244:;
                        ITable* $tmp2247 = Iter$559$172237->$class->itable;
                        while ($tmp2247->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2247 = $tmp2247->next;
                        }
                        $fn2249 $tmp2248 = $tmp2247->methods[0];
                        panda$core$Bit $tmp2250 = $tmp2248(Iter$559$172237);
                        panda$core$Bit $tmp2251 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2250);
                        bool $tmp2246 = $tmp2251.value;
                        if (!$tmp2246) goto $l2245;
                        {
                            int $tmp2254;
                            {
                                ITable* $tmp2258 = Iter$559$172237->$class->itable;
                                while ($tmp2258->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2258 = $tmp2258->next;
                                }
                                $fn2260 $tmp2259 = $tmp2258->methods[1];
                                panda$core$Object* $tmp2261 = $tmp2259(Iter$559$172237);
                                $tmp2257 = $tmp2261;
                                $tmp2256 = ((org$pandalanguage$pandac$IRNode*) $tmp2257);
                                w2255 = $tmp2256;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2256));
                                panda$core$Panda$unref$panda$core$Object($tmp2257);
                                panda$core$String* $tmp2264 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w2255), &$s2263);
                                $tmp2262 = $tmp2264;
                                panda$core$MutableString$append$panda$core$String(result2224, $tmp2262);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2262));
                            }
                            $tmp2254 = -1;
                            goto $l2252;
                            $l2252:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w2255));
                            w2255 = NULL;
                            switch ($tmp2254) {
                                case -1: goto $l2265;
                            }
                            $l2265:;
                        }
                        goto $l2244;
                        $l2245:;
                    }
                    $tmp2236 = -1;
                    goto $l2234;
                    $l2234:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$559$172237));
                    Iter$559$172237 = NULL;
                    switch ($tmp2236) {
                        case -1: goto $l2266;
                    }
                    $l2266:;
                }
                if (((panda$core$Bit) { other2219 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2224, &$s2267);
                    {
                        int $tmp2270;
                        {
                            ITable* $tmp2274 = ((panda$collections$Iterable*) other2219)->$class->itable;
                            while ($tmp2274->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp2274 = $tmp2274->next;
                            }
                            $fn2276 $tmp2275 = $tmp2274->methods[0];
                            panda$collections$Iterator* $tmp2277 = $tmp2275(((panda$collections$Iterable*) other2219));
                            $tmp2273 = $tmp2277;
                            $tmp2272 = $tmp2273;
                            Iter$564$212271 = $tmp2272;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2272));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2273));
                            $l2278:;
                            ITable* $tmp2281 = Iter$564$212271->$class->itable;
                            while ($tmp2281->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2281 = $tmp2281->next;
                            }
                            $fn2283 $tmp2282 = $tmp2281->methods[0];
                            panda$core$Bit $tmp2284 = $tmp2282(Iter$564$212271);
                            panda$core$Bit $tmp2285 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2284);
                            bool $tmp2280 = $tmp2285.value;
                            if (!$tmp2280) goto $l2279;
                            {
                                int $tmp2288;
                                {
                                    ITable* $tmp2292 = Iter$564$212271->$class->itable;
                                    while ($tmp2292->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp2292 = $tmp2292->next;
                                    }
                                    $fn2294 $tmp2293 = $tmp2292->methods[1];
                                    panda$core$Object* $tmp2295 = $tmp2293(Iter$564$212271);
                                    $tmp2291 = $tmp2295;
                                    $tmp2290 = ((org$pandalanguage$pandac$IRNode*) $tmp2291);
                                    s2289 = $tmp2290;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2290));
                                    panda$core$Panda$unref$panda$core$Object($tmp2291);
                                    panda$core$String* $tmp2298 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2289), &$s2297);
                                    $tmp2296 = $tmp2298;
                                    panda$core$MutableString$append$panda$core$String(result2224, $tmp2296);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2296));
                                }
                                $tmp2288 = -1;
                                goto $l2286;
                                $l2286:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2289));
                                s2289 = NULL;
                                switch ($tmp2288) {
                                    case -1: goto $l2299;
                                }
                                $l2299:;
                            }
                            goto $l2278;
                            $l2279:;
                        }
                        $tmp2270 = -1;
                        goto $l2268;
                        $l2268:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$564$212271));
                        Iter$564$212271 = NULL;
                        switch ($tmp2270) {
                            case -1: goto $l2300;
                        }
                        $l2300:;
                    }
                }
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2302, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2301, $tmp2302);
                panda$core$MutableString$append$panda$core$Char8(result2224, $tmp2301);
                panda$core$String* $tmp2305 = panda$core$MutableString$finish$R$panda$core$String(result2224);
                $tmp2304 = $tmp2305;
                $tmp2303 = $tmp2304;
                $returnValue1492 = $tmp2303;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2303));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2304));
                $tmp2223 = 0;
                goto $l2221;
                $l2306:;
                $tmp1483 = 29;
                goto $l1481;
                $l2307:;
                return $returnValue1492;
            }
            $l2221:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2224));
            result2224 = NULL;
            switch ($tmp2223) {
                case 0: goto $l2306;
            }
            $l2309:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2310, 25);
        panda$core$Bit $tmp2311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2310);
        if ($tmp2311.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2313 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 24));
            target2312 = *$tmp2313;
            org$pandalanguage$pandac$MethodRef** $tmp2315 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$448_91484->$data + 32));
            m2314 = *$tmp2315;
            if (((panda$core$Bit) { target2312 != NULL }).value) {
            {
                panda$core$String* $tmp2322 = (($fn2321) target2312->$class->vtable[0])(target2312);
                $tmp2320 = $tmp2322;
                panda$core$String* $tmp2324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2320, &$s2323);
                $tmp2319 = $tmp2324;
                panda$core$String* $tmp2325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2319, ((org$pandalanguage$pandac$Symbol*) m2314->value)->name);
                $tmp2318 = $tmp2325;
                panda$core$String* $tmp2327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2318, &$s2326);
                $tmp2317 = $tmp2327;
                $tmp2316 = $tmp2317;
                $returnValue1492 = $tmp2316;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2316));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2317));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2318));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2319));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2320));
                $tmp1483 = 30;
                goto $l1481;
                $l2328:;
                return $returnValue1492;
            }
            }
            $tmp2330 = ((org$pandalanguage$pandac$Symbol*) m2314->value)->name;
            $returnValue1492 = $tmp2330;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2330));
            $tmp1483 = 31;
            goto $l1481;
            $l2331:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2333, 26);
        panda$core$Bit $tmp2334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2333);
        if ($tmp2334.value) {
        {
            panda$core$UInt64* $tmp2336 = ((panda$core$UInt64*) ((char*) $match$448_91484->$data + 24));
            value2335 = *$tmp2336;
            panda$core$UInt64$wrapper* $tmp2341;
            $tmp2341 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
            $tmp2341->value = value2335;
            $tmp2340 = ((panda$core$Object*) $tmp2341);
            panda$core$String* $tmp2342 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2339, $tmp2340);
            $tmp2338 = $tmp2342;
            $tmp2337 = $tmp2338;
            $returnValue1492 = $tmp2337;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2337));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2338));
            panda$core$Panda$unref$panda$core$Object($tmp2340);
            $tmp1483 = 32;
            goto $l1481;
            $l2343:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2345, 27);
        panda$core$Bit $tmp2346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2345);
        if ($tmp2346.value) {
        {
            $tmp2347 = &$s2348;
            $returnValue1492 = $tmp2347;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2347));
            $tmp1483 = 33;
            goto $l1481;
            $l2349:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2351, 28);
        panda$core$Bit $tmp2352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2351);
        if ($tmp2352.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2354 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$448_91484->$data + 16));
            op2353 = *$tmp2354;
            org$pandalanguage$pandac$IRNode** $tmp2356 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 24));
            base2355 = *$tmp2356;
            panda$core$String* $tmp2362 = org$pandalanguage$pandac$parser$Token$Kind$convert$R$panda$core$String(op2353);
            $tmp2361 = $tmp2362;
            panda$core$String* $tmp2364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2361, &$s2363);
            $tmp2360 = $tmp2364;
            panda$core$String* $tmp2365 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2360, ((panda$core$Object*) base2355));
            $tmp2359 = $tmp2365;
            panda$core$String* $tmp2367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2359, &$s2366);
            $tmp2358 = $tmp2367;
            $tmp2357 = $tmp2358;
            $returnValue1492 = $tmp2357;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2357));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2358));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2359));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2360));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2361));
            $tmp1483 = 34;
            goto $l1481;
            $l2368:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2370, 29);
        panda$core$Bit $tmp2371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2370);
        if ($tmp2371.value) {
        {
            panda$core$String** $tmp2373 = ((panda$core$String**) ((char*) $match$448_91484->$data + 16));
            label2372 = *$tmp2373;
            org$pandalanguage$pandac$IRNode** $tmp2375 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 24));
            target2374 = *$tmp2375;
            org$pandalanguage$pandac$IRNode** $tmp2377 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 32));
            list2376 = *$tmp2377;
            panda$collections$ImmutableArray** $tmp2379 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 40));
            statements2378 = *$tmp2379;
            int $tmp2382;
            {
                panda$core$MutableString* $tmp2386 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2386);
                $tmp2385 = $tmp2386;
                $tmp2384 = $tmp2385;
                result2383 = $tmp2384;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2384));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2385));
                if (((panda$core$Bit) { label2372 != NULL }).value) {
                {
                    panda$core$String* $tmp2389 = panda$core$String$convert$R$panda$core$String(label2372);
                    $tmp2388 = $tmp2389;
                    panda$core$String* $tmp2391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2388, &$s2390);
                    $tmp2387 = $tmp2391;
                    panda$core$MutableString$append$panda$core$String(result2383, $tmp2387);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2387));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2388));
                }
                }
                panda$core$String* $tmp2397 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2396, ((panda$core$Object*) target2374));
                $tmp2395 = $tmp2397;
                panda$core$String* $tmp2399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2395, &$s2398);
                $tmp2394 = $tmp2399;
                panda$core$String* $tmp2400 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2394, ((panda$core$Object*) list2376));
                $tmp2393 = $tmp2400;
                panda$core$String* $tmp2402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2393, &$s2401);
                $tmp2392 = $tmp2402;
                panda$core$MutableString$append$panda$core$String(result2383, $tmp2392);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2392));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2393));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2394));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2395));
                {
                    int $tmp2405;
                    {
                        ITable* $tmp2409 = ((panda$collections$Iterable*) statements2378)->$class->itable;
                        while ($tmp2409->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2409 = $tmp2409->next;
                        }
                        $fn2411 $tmp2410 = $tmp2409->methods[0];
                        panda$collections$Iterator* $tmp2412 = $tmp2410(((panda$collections$Iterable*) statements2378));
                        $tmp2408 = $tmp2412;
                        $tmp2407 = $tmp2408;
                        Iter$587$172406 = $tmp2407;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2407));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2408));
                        $l2413:;
                        ITable* $tmp2416 = Iter$587$172406->$class->itable;
                        while ($tmp2416->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2416 = $tmp2416->next;
                        }
                        $fn2418 $tmp2417 = $tmp2416->methods[0];
                        panda$core$Bit $tmp2419 = $tmp2417(Iter$587$172406);
                        panda$core$Bit $tmp2420 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2419);
                        bool $tmp2415 = $tmp2420.value;
                        if (!$tmp2415) goto $l2414;
                        {
                            int $tmp2423;
                            {
                                ITable* $tmp2427 = Iter$587$172406->$class->itable;
                                while ($tmp2427->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2427 = $tmp2427->next;
                                }
                                $fn2429 $tmp2428 = $tmp2427->methods[1];
                                panda$core$Object* $tmp2430 = $tmp2428(Iter$587$172406);
                                $tmp2426 = $tmp2430;
                                $tmp2425 = ((org$pandalanguage$pandac$IRNode*) $tmp2426);
                                s2424 = $tmp2425;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2425));
                                panda$core$Panda$unref$panda$core$Object($tmp2426);
                                panda$core$String* $tmp2433 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2424), &$s2432);
                                $tmp2431 = $tmp2433;
                                panda$core$MutableString$append$panda$core$String(result2383, $tmp2431);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2431));
                            }
                            $tmp2423 = -1;
                            goto $l2421;
                            $l2421:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2424));
                            s2424 = NULL;
                            switch ($tmp2423) {
                                case -1: goto $l2434;
                            }
                            $l2434:;
                        }
                        goto $l2413;
                        $l2414:;
                    }
                    $tmp2405 = -1;
                    goto $l2403;
                    $l2403:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$587$172406));
                    Iter$587$172406 = NULL;
                    switch ($tmp2405) {
                        case -1: goto $l2435;
                    }
                    $l2435:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2437, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2436, $tmp2437);
                panda$core$MutableString$append$panda$core$Char8(result2383, $tmp2436);
                panda$core$String* $tmp2440 = panda$core$MutableString$finish$R$panda$core$String(result2383);
                $tmp2439 = $tmp2440;
                $tmp2438 = $tmp2439;
                $returnValue1492 = $tmp2438;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2438));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2439));
                $tmp2382 = 0;
                goto $l2380;
                $l2441:;
                $tmp1483 = 35;
                goto $l1481;
                $l2442:;
                return $returnValue1492;
            }
            $l2380:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2383));
            result2383 = NULL;
            switch ($tmp2382) {
                case 0: goto $l2441;
            }
            $l2444:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2445, 30);
        panda$core$Bit $tmp2446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2445);
        if ($tmp2446.value) {
        {
            panda$core$Real64* $tmp2448 = ((panda$core$Real64*) ((char*) $match$448_91484->$data + 24));
            value2447 = *$tmp2448;
            panda$core$String* $tmp2451 = panda$core$Real64$convert$R$panda$core$String(value2447);
            $tmp2450 = $tmp2451;
            $tmp2449 = $tmp2450;
            $returnValue1492 = $tmp2449;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2449));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2450));
            $tmp1483 = 36;
            goto $l1481;
            $l2452:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2454, 31);
        panda$core$Bit $tmp2455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2454);
        if ($tmp2455.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2457 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 16));
            value2456 = *$tmp2457;
            if (((panda$core$Bit) { value2456 != NULL }).value) {
            {
                panda$core$String* $tmp2462 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2461, ((panda$core$Object*) value2456));
                $tmp2460 = $tmp2462;
                panda$core$String* $tmp2464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2460, &$s2463);
                $tmp2459 = $tmp2464;
                $tmp2458 = $tmp2459;
                $returnValue1492 = $tmp2458;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2458));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2459));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2460));
                $tmp1483 = 37;
                goto $l1481;
                $l2465:;
                return $returnValue1492;
            }
            }
            $tmp2467 = &$s2468;
            $returnValue1492 = $tmp2467;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2467));
            $tmp1483 = 38;
            goto $l1481;
            $l2469:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2471, 32);
        panda$core$Bit $tmp2472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2471);
        if ($tmp2472.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2474 = ((org$pandalanguage$pandac$Type**) ((char*) $match$448_91484->$data + 16));
            type2473 = *$tmp2474;
            panda$core$Int64* $tmp2476 = ((panda$core$Int64*) ((char*) $match$448_91484->$data + 24));
            id2475 = *$tmp2476;
            panda$core$Int64$wrapper* $tmp2482;
            $tmp2482 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2482->value = id2475;
            $tmp2481 = ((panda$core$Object*) $tmp2482);
            panda$core$String* $tmp2483 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2480, $tmp2481);
            $tmp2479 = $tmp2483;
            panda$core$String* $tmp2485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2479, &$s2484);
            $tmp2478 = $tmp2485;
            $tmp2477 = $tmp2478;
            $returnValue1492 = $tmp2477;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2477));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2478));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2479));
            panda$core$Panda$unref$panda$core$Object($tmp2481);
            $tmp1483 = 39;
            goto $l1481;
            $l2486:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2488, 33);
        panda$core$Bit $tmp2489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2488);
        if ($tmp2489.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2491 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 0));
            base2490 = *$tmp2491;
            panda$core$Int64* $tmp2493 = ((panda$core$Int64*) ((char*) $match$448_91484->$data + 8));
            id2492 = *$tmp2493;
            panda$core$Int64$wrapper* $tmp2501;
            $tmp2501 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2501->value = id2492;
            $tmp2500 = ((panda$core$Object*) $tmp2501);
            panda$core$String* $tmp2502 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2499, $tmp2500);
            $tmp2498 = $tmp2502;
            panda$core$String* $tmp2504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2498, &$s2503);
            $tmp2497 = $tmp2504;
            panda$core$String* $tmp2505 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2497, ((panda$core$Object*) base2490));
            $tmp2496 = $tmp2505;
            panda$core$String* $tmp2507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2496, &$s2506);
            $tmp2495 = $tmp2507;
            $tmp2494 = $tmp2495;
            $returnValue1492 = $tmp2494;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2494));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2495));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2496));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2497));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2498));
            panda$core$Panda$unref$panda$core$Object($tmp2500);
            $tmp1483 = 40;
            goto $l1481;
            $l2508:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2510, 34);
        panda$core$Bit $tmp2511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2510);
        if ($tmp2511.value) {
        {
            $tmp2512 = &$s2513;
            $returnValue1492 = $tmp2512;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2512));
            $tmp1483 = 41;
            goto $l1481;
            $l2514:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2516, 35);
        panda$core$Bit $tmp2517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2516);
        if ($tmp2517.value) {
        {
            $tmp2518 = &$s2519;
            $returnValue1492 = $tmp2518;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2518));
            $tmp1483 = 42;
            goto $l1481;
            $l2520:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2522, 36);
        panda$core$Bit $tmp2523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2522);
        if ($tmp2523.value) {
        {
            panda$core$String** $tmp2525 = ((panda$core$String**) ((char*) $match$448_91484->$data + 16));
            str2524 = *$tmp2525;
            panda$core$String* $tmp2529 = panda$core$String$format$panda$core$String$R$panda$core$String(str2524, &$s2528);
            $tmp2527 = $tmp2529;
            $tmp2526 = $tmp2527;
            $returnValue1492 = $tmp2526;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2526));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2527));
            $tmp1483 = 43;
            goto $l1481;
            $l2530:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2532, 37);
        panda$core$Bit $tmp2533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2532);
        if ($tmp2533.value) {
        {
            $tmp2534 = &$s2535;
            $returnValue1492 = $tmp2534;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2534));
            $tmp1483 = 44;
            goto $l1481;
            $l2536:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2538, 38);
        panda$core$Bit $tmp2539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2538);
        if ($tmp2539.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2541 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 16));
            test2540 = *$tmp2541;
            org$pandalanguage$pandac$IRNode** $tmp2543 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 24));
            ifTrue2542 = *$tmp2543;
            org$pandalanguage$pandac$IRNode** $tmp2545 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 32));
            ifFalse2544 = *$tmp2545;
            panda$core$String* $tmp2554 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2553, ((panda$core$Object*) test2540));
            $tmp2552 = $tmp2554;
            panda$core$String* $tmp2556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2552, &$s2555);
            $tmp2551 = $tmp2556;
            panda$core$String* $tmp2557 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2551, ((panda$core$Object*) ifTrue2542));
            $tmp2550 = $tmp2557;
            panda$core$String* $tmp2559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2550, &$s2558);
            $tmp2549 = $tmp2559;
            panda$core$String* $tmp2560 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2549, ((panda$core$Object*) ifFalse2544));
            $tmp2548 = $tmp2560;
            panda$core$String* $tmp2562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2548, &$s2561);
            $tmp2547 = $tmp2562;
            $tmp2546 = $tmp2547;
            $returnValue1492 = $tmp2546;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2546));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2547));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2548));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2549));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2550));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2551));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2552));
            $tmp1483 = 45;
            goto $l1481;
            $l2563:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2565, 39);
        panda$core$Bit $tmp2566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2565);
        if ($tmp2566.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2568 = ((org$pandalanguage$pandac$Type**) ((char*) $match$448_91484->$data + 16));
            type2567 = *$tmp2568;
            panda$core$String* $tmp2571 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type2567);
            $tmp2570 = $tmp2571;
            $tmp2569 = $tmp2570;
            $returnValue1492 = $tmp2569;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2569));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2570));
            $tmp1483 = 46;
            goto $l1481;
            $l2572:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2574, 40);
        panda$core$Bit $tmp2575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2574);
        if ($tmp2575.value) {
        {
            panda$core$String** $tmp2577 = ((panda$core$String**) ((char*) $match$448_91484->$data + 16));
            name2576 = *$tmp2577;
            $tmp2578 = name2576;
            $returnValue1492 = $tmp2578;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2578));
            $tmp1483 = 47;
            goto $l1481;
            $l2579:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2581, 41);
        panda$core$Bit $tmp2582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2581);
        if ($tmp2582.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2584 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 24));
            base2583 = *$tmp2584;
            panda$collections$ImmutableArray** $tmp2586 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 32));
            args2585 = *$tmp2586;
            panda$core$String* $tmp2593 = (($fn2592) base2583->$class->vtable[0])(base2583);
            $tmp2591 = $tmp2593;
            panda$core$String* $tmp2595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2591, &$s2594);
            $tmp2590 = $tmp2595;
            ITable* $tmp2597 = ((panda$collections$CollectionView*) args2585)->$class->itable;
            while ($tmp2597->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp2597 = $tmp2597->next;
            }
            $fn2599 $tmp2598 = $tmp2597->methods[1];
            panda$core$String* $tmp2600 = $tmp2598(((panda$collections$CollectionView*) args2585));
            $tmp2596 = $tmp2600;
            panda$core$String* $tmp2601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2590, $tmp2596);
            $tmp2589 = $tmp2601;
            panda$core$String* $tmp2603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2589, &$s2602);
            $tmp2588 = $tmp2603;
            $tmp2587 = $tmp2588;
            $returnValue1492 = $tmp2587;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2587));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2588));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2589));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2596));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2590));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2591));
            $tmp1483 = 48;
            goto $l1481;
            $l2604:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2606, 42);
        panda$core$Bit $tmp2607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2606);
        if ($tmp2607.value) {
        {
            panda$collections$ImmutableArray** $tmp2609 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 16));
            params2608 = *$tmp2609;
            org$pandalanguage$pandac$ASTNode** $tmp2611 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$448_91484->$data + 24));
            body2610 = *$tmp2611;
            ITable* $tmp2619 = ((panda$collections$CollectionView*) params2608)->$class->itable;
            while ($tmp2619->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp2619 = $tmp2619->next;
            }
            $fn2621 $tmp2620 = $tmp2619->methods[1];
            panda$core$String* $tmp2622 = $tmp2620(((panda$collections$CollectionView*) params2608));
            $tmp2618 = $tmp2622;
            panda$core$String* $tmp2623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2617, $tmp2618);
            $tmp2616 = $tmp2623;
            panda$core$String* $tmp2625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2616, &$s2624);
            $tmp2615 = $tmp2625;
            panda$core$String* $tmp2626 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2615, ((panda$core$Object*) body2610));
            $tmp2614 = $tmp2626;
            panda$core$String* $tmp2628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2614, &$s2627);
            $tmp2613 = $tmp2628;
            $tmp2612 = $tmp2613;
            $returnValue1492 = $tmp2612;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2612));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2613));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2614));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2615));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2616));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2618));
            $tmp1483 = 49;
            goto $l1481;
            $l2629:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2631, 43);
        panda$core$Bit $tmp2632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2631);
        if ($tmp2632.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2634 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 24));
            target2633 = *$tmp2634;
            panda$collections$ImmutableArray** $tmp2636 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 32));
            methods2635 = *$tmp2636;
            panda$collections$ImmutableArray** $tmp2638 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 40));
            args2637 = *$tmp2638;
            if (((panda$core$Bit) { target2633 != NULL }).value) {
            {
                panda$core$String* $tmp2647 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2646, ((panda$core$Object*) target2633));
                $tmp2645 = $tmp2647;
                panda$core$String* $tmp2649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2645, &$s2648);
                $tmp2644 = $tmp2649;
                panda$core$Int64$init$builtin_int64(&$tmp2651, 0);
                panda$core$Object* $tmp2652 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2635, $tmp2651);
                $tmp2650 = $tmp2652;
                panda$core$String* $tmp2653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2644, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2650)->value)->name);
                $tmp2643 = $tmp2653;
                panda$core$String* $tmp2655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2643, &$s2654);
                $tmp2642 = $tmp2655;
                ITable* $tmp2657 = ((panda$collections$CollectionView*) args2637)->$class->itable;
                while ($tmp2657->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp2657 = $tmp2657->next;
                }
                $fn2659 $tmp2658 = $tmp2657->methods[1];
                panda$core$String* $tmp2660 = $tmp2658(((panda$collections$CollectionView*) args2637));
                $tmp2656 = $tmp2660;
                panda$core$String* $tmp2661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2642, $tmp2656);
                $tmp2641 = $tmp2661;
                panda$core$String* $tmp2663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2641, &$s2662);
                $tmp2640 = $tmp2663;
                $tmp2639 = $tmp2640;
                $returnValue1492 = $tmp2639;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2639));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2640));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2641));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2656));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2642));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2643));
                panda$core$Panda$unref$panda$core$Object($tmp2650);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2644));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2645));
                $tmp1483 = 50;
                goto $l1481;
                $l2664:;
                return $returnValue1492;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp2673, 0);
                panda$core$Object* $tmp2674 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2635, $tmp2673);
                $tmp2672 = $tmp2674;
                panda$core$String* $tmp2675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2671, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2672)->value)->name);
                $tmp2670 = $tmp2675;
                panda$core$String* $tmp2677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2670, &$s2676);
                $tmp2669 = $tmp2677;
                ITable* $tmp2679 = ((panda$collections$CollectionView*) args2637)->$class->itable;
                while ($tmp2679->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp2679 = $tmp2679->next;
                }
                $fn2681 $tmp2680 = $tmp2679->methods[1];
                panda$core$String* $tmp2682 = $tmp2680(((panda$collections$CollectionView*) args2637));
                $tmp2678 = $tmp2682;
                panda$core$String* $tmp2683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2669, $tmp2678);
                $tmp2668 = $tmp2683;
                panda$core$String* $tmp2685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2668, &$s2684);
                $tmp2667 = $tmp2685;
                $tmp2666 = $tmp2667;
                $returnValue1492 = $tmp2666;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2666));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2667));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2668));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2678));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2669));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2670));
                panda$core$Panda$unref$panda$core$Object($tmp2672);
                $tmp1483 = 51;
                goto $l1481;
                $l2686:;
                return $returnValue1492;
            }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2688, 44);
        panda$core$Bit $tmp2689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2688);
        if ($tmp2689.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2691 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 16));
            target2690 = *$tmp2691;
            panda$collections$ImmutableArray** $tmp2693 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 24));
            methods2692 = *$tmp2693;
            if (((panda$core$Bit) { target2690 != NULL }).value) {
            {
                panda$core$String* $tmp2700 = (($fn2699) target2690->$class->vtable[0])(target2690);
                $tmp2698 = $tmp2700;
                panda$core$String* $tmp2702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2698, &$s2701);
                $tmp2697 = $tmp2702;
                panda$core$Int64$init$builtin_int64(&$tmp2704, 0);
                panda$core$Object* $tmp2705 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2692, $tmp2704);
                $tmp2703 = $tmp2705;
                panda$core$String* $tmp2706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2697, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2703)->value)->name);
                $tmp2696 = $tmp2706;
                panda$core$String* $tmp2708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2696, &$s2707);
                $tmp2695 = $tmp2708;
                $tmp2694 = $tmp2695;
                $returnValue1492 = $tmp2694;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2694));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2695));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2696));
                panda$core$Panda$unref$panda$core$Object($tmp2703);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2697));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2698));
                $tmp1483 = 52;
                goto $l1481;
                $l2709:;
                return $returnValue1492;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp2715, 0);
                panda$core$Object* $tmp2716 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2692, $tmp2715);
                $tmp2714 = $tmp2716;
                panda$core$String* $tmp2717 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2714)->value)->name);
                $tmp2713 = $tmp2717;
                panda$core$String* $tmp2719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2713, &$s2718);
                $tmp2712 = $tmp2719;
                $tmp2711 = $tmp2712;
                $returnValue1492 = $tmp2711;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2711));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2712));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2713));
                panda$core$Panda$unref$panda$core$Object($tmp2714);
                $tmp1483 = 53;
                goto $l1481;
                $l2720:;
                return $returnValue1492;
            }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2722, 45);
        panda$core$Bit $tmp2723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2722);
        if ($tmp2723.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2725 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 16));
            start2724 = *$tmp2725;
            org$pandalanguage$pandac$IRNode** $tmp2727 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 24));
            end2726 = *$tmp2727;
            panda$core$Bit* $tmp2729 = ((panda$core$Bit*) ((char*) $match$448_91484->$data + 32));
            inclusive2728 = *$tmp2729;
            org$pandalanguage$pandac$IRNode** $tmp2731 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 33));
            step2730 = *$tmp2731;
            int $tmp2734;
            {
                panda$core$MutableString* $tmp2738 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2738);
                $tmp2737 = $tmp2738;
                $tmp2736 = $tmp2737;
                result2735 = $tmp2736;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2736));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2737));
                if (((panda$core$Bit) { start2724 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2735, ((panda$core$Object*) start2724));
                }
                }
                if (inclusive2728.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2735, &$s2739);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result2735, &$s2740);
                }
                }
                if (((panda$core$Bit) { end2726 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2735, ((panda$core$Object*) end2726));
                }
                }
                if (((panda$core$Bit) { step2730 != NULL }).value) {
                {
                    panda$core$String* $tmp2744 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2743, ((panda$core$Object*) step2730));
                    $tmp2742 = $tmp2744;
                    panda$core$String* $tmp2746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2742, &$s2745);
                    $tmp2741 = $tmp2746;
                    panda$core$MutableString$append$panda$core$String(result2735, $tmp2741);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2741));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2742));
                }
                }
                panda$core$String* $tmp2749 = panda$core$MutableString$finish$R$panda$core$String(result2735);
                $tmp2748 = $tmp2749;
                $tmp2747 = $tmp2748;
                $returnValue1492 = $tmp2747;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2747));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2748));
                $tmp2734 = 0;
                goto $l2732;
                $l2750:;
                $tmp1483 = 54;
                goto $l1481;
                $l2751:;
                return $returnValue1492;
            }
            $l2732:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2735));
            result2735 = NULL;
            switch ($tmp2734) {
                case 0: goto $l2750;
            }
            $l2753:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2754, 46);
        panda$core$Bit $tmp2755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2754);
        if ($tmp2755.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp2757 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$448_91484->$data + 16));
            kind2756 = *$tmp2757;
            panda$collections$ImmutableArray** $tmp2759 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 24));
            decls2758 = *$tmp2759;
            int $tmp2762;
            {
                panda$core$MutableString* $tmp2766 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2766);
                $tmp2765 = $tmp2766;
                $tmp2764 = $tmp2765;
                result2763 = $tmp2764;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2764));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2765));
                {
                    $match$655_172767 = kind2756;
                    panda$core$Int64$init$builtin_int64(&$tmp2768, 0);
                    panda$core$Bit $tmp2769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$655_172767.$rawValue, $tmp2768);
                    if ($tmp2769.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2763, &$s2770);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp2771, 1);
                    panda$core$Bit $tmp2772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$655_172767.$rawValue, $tmp2771);
                    if ($tmp2772.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2763, &$s2773);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp2774, 2);
                    panda$core$Bit $tmp2775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$655_172767.$rawValue, $tmp2774);
                    if ($tmp2775.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2763, &$s2776);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp2777, 3);
                    panda$core$Bit $tmp2778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$655_172767.$rawValue, $tmp2777);
                    if ($tmp2778.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2763, &$s2779);
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp2781 = ((panda$collections$CollectionView*) decls2758)->$class->itable;
                while ($tmp2781->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp2781 = $tmp2781->next;
                }
                $fn2783 $tmp2782 = $tmp2781->methods[1];
                panda$core$String* $tmp2784 = $tmp2782(((panda$collections$CollectionView*) decls2758));
                $tmp2780 = $tmp2784;
                panda$core$MutableString$append$panda$core$String(result2763, $tmp2780);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2780));
                panda$core$String* $tmp2787 = panda$core$MutableString$finish$R$panda$core$String(result2763);
                $tmp2786 = $tmp2787;
                $tmp2785 = $tmp2786;
                $returnValue1492 = $tmp2785;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2785));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2786));
                $tmp2762 = 0;
                goto $l2760;
                $l2788:;
                $tmp1483 = 55;
                goto $l1481;
                $l2789:;
                return $returnValue1492;
            }
            $l2760:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2763));
            result2763 = NULL;
            switch ($tmp2762) {
                case 0: goto $l2788;
            }
            $l2791:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2792, 47);
        panda$core$Bit $tmp2793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2792);
        if ($tmp2793.value) {
        {
            panda$core$String** $tmp2795 = ((panda$core$String**) ((char*) $match$448_91484->$data + 16));
            name2794 = *$tmp2795;
            $tmp2796 = name2794;
            $returnValue1492 = $tmp2796;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2796));
            $tmp1483 = 56;
            goto $l1481;
            $l2797:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2799, 48);
        panda$core$Bit $tmp2800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2799);
        if ($tmp2800.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2802 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$448_91484->$data + 16));
            variable2801 = *$tmp2802;
            panda$core$String* $tmp2806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) variable2801)->name, &$s2805);
            $tmp2804 = $tmp2806;
            $tmp2803 = $tmp2804;
            $returnValue1492 = $tmp2803;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2803));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2804));
            $tmp1483 = 57;
            goto $l1481;
            $l2807:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2809, 49);
        panda$core$Bit $tmp2810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2809);
        if ($tmp2810.value) {
        {
            panda$collections$ImmutableArray** $tmp2812 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 16));
            tests2811 = *$tmp2812;
            panda$collections$ImmutableArray** $tmp2814 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 24));
            statements2813 = *$tmp2814;
            ITable* $tmp2822 = ((panda$collections$CollectionView*) tests2811)->$class->itable;
            while ($tmp2822->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp2822 = $tmp2822->next;
            }
            $fn2824 $tmp2823 = $tmp2822->methods[1];
            panda$core$String* $tmp2825 = $tmp2823(((panda$collections$CollectionView*) tests2811));
            $tmp2821 = $tmp2825;
            panda$core$String* $tmp2826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2820, $tmp2821);
            $tmp2819 = $tmp2826;
            panda$core$String* $tmp2828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2819, &$s2827);
            $tmp2818 = $tmp2828;
            ITable* $tmp2831 = ((panda$collections$CollectionView*) statements2813)->$class->itable;
            while ($tmp2831->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp2831 = $tmp2831->next;
            }
            $fn2833 $tmp2832 = $tmp2831->methods[2];
            panda$core$String* $tmp2834 = $tmp2832(((panda$collections$CollectionView*) statements2813), &$s2830);
            $tmp2829 = $tmp2834;
            panda$core$String* $tmp2835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2818, $tmp2829);
            $tmp2817 = $tmp2835;
            panda$core$String* $tmp2837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2817, &$s2836);
            $tmp2816 = $tmp2837;
            $tmp2815 = $tmp2816;
            $returnValue1492 = $tmp2815;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2815));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2816));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2817));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2829));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2818));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2819));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2821));
            $tmp1483 = 58;
            goto $l1481;
            $l2838:;
            return $returnValue1492;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2840, 50);
        panda$core$Bit $tmp2841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_91484->$rawValue, $tmp2840);
        if ($tmp2841.value) {
        {
            panda$core$String** $tmp2843 = ((panda$core$String**) ((char*) $match$448_91484->$data + 16));
            label2842 = *$tmp2843;
            org$pandalanguage$pandac$IRNode** $tmp2845 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$448_91484->$data + 24));
            test2844 = *$tmp2845;
            panda$collections$ImmutableArray** $tmp2847 = ((panda$collections$ImmutableArray**) ((char*) $match$448_91484->$data + 32));
            statements2846 = *$tmp2847;
            int $tmp2850;
            {
                panda$core$MutableString* $tmp2854 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2854);
                $tmp2853 = $tmp2854;
                $tmp2852 = $tmp2853;
                result2851 = $tmp2852;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2852));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2853));
                if (((panda$core$Bit) { label2842 != NULL }).value) {
                {
                    panda$core$String* $tmp2857 = panda$core$String$convert$R$panda$core$String(label2842);
                    $tmp2856 = $tmp2857;
                    panda$core$String* $tmp2859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2856, &$s2858);
                    $tmp2855 = $tmp2859;
                    panda$core$MutableString$append$panda$core$String(result2851, $tmp2855);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2855));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2856));
                }
                }
                panda$core$String* $tmp2863 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2862, ((panda$core$Object*) test2844));
                $tmp2861 = $tmp2863;
                panda$core$String* $tmp2865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2861, &$s2864);
                $tmp2860 = $tmp2865;
                panda$core$MutableString$append$panda$core$String(result2851, $tmp2860);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2860));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2861));
                {
                    int $tmp2868;
                    {
                        ITable* $tmp2872 = ((panda$collections$Iterable*) statements2846)->$class->itable;
                        while ($tmp2872->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2872 = $tmp2872->next;
                        }
                        $fn2874 $tmp2873 = $tmp2872->methods[0];
                        panda$collections$Iterator* $tmp2875 = $tmp2873(((panda$collections$Iterable*) statements2846));
                        $tmp2871 = $tmp2875;
                        $tmp2870 = $tmp2871;
                        Iter$675$172869 = $tmp2870;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2870));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2871));
                        $l2876:;
                        ITable* $tmp2879 = Iter$675$172869->$class->itable;
                        while ($tmp2879->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2879 = $tmp2879->next;
                        }
                        $fn2881 $tmp2880 = $tmp2879->methods[0];
                        panda$core$Bit $tmp2882 = $tmp2880(Iter$675$172869);
                        panda$core$Bit $tmp2883 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2882);
                        bool $tmp2878 = $tmp2883.value;
                        if (!$tmp2878) goto $l2877;
                        {
                            int $tmp2886;
                            {
                                ITable* $tmp2890 = Iter$675$172869->$class->itable;
                                while ($tmp2890->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2890 = $tmp2890->next;
                                }
                                $fn2892 $tmp2891 = $tmp2890->methods[1];
                                panda$core$Object* $tmp2893 = $tmp2891(Iter$675$172869);
                                $tmp2889 = $tmp2893;
                                $tmp2888 = ((org$pandalanguage$pandac$IRNode*) $tmp2889);
                                s2887 = $tmp2888;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2888));
                                panda$core$Panda$unref$panda$core$Object($tmp2889);
                                panda$core$String* $tmp2896 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2887), &$s2895);
                                $tmp2894 = $tmp2896;
                                panda$core$MutableString$append$panda$core$String(result2851, $tmp2894);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2894));
                            }
                            $tmp2886 = -1;
                            goto $l2884;
                            $l2884:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2887));
                            s2887 = NULL;
                            switch ($tmp2886) {
                                case -1: goto $l2897;
                            }
                            $l2897:;
                        }
                        goto $l2876;
                        $l2877:;
                    }
                    $tmp2868 = -1;
                    goto $l2866;
                    $l2866:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$675$172869));
                    Iter$675$172869 = NULL;
                    switch ($tmp2868) {
                        case -1: goto $l2898;
                    }
                    $l2898:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2900, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2899, $tmp2900);
                panda$core$MutableString$append$panda$core$Char8(result2851, $tmp2899);
                panda$core$String* $tmp2903 = panda$core$MutableString$finish$R$panda$core$String(result2851);
                $tmp2902 = $tmp2903;
                $tmp2901 = $tmp2902;
                $returnValue1492 = $tmp2901;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2901));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2902));
                $tmp2850 = 0;
                goto $l2848;
                $l2904:;
                $tmp1483 = 59;
                goto $l1481;
                $l2905:;
                return $returnValue1492;
            }
            $l2848:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2851));
            result2851 = NULL;
            switch ($tmp2850) {
                case 0: goto $l2904;
            }
            $l2907:;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp2908, false);
            if ($tmp2908.value) goto $l2909; else goto $l2910;
            $l2910:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2911, (panda$core$Int64) { 681 });
            abort();
            $l2909:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
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
        case 35: goto $l2442;
        case 36: goto $l2452;
        case 2: goto $l1520;
        case 31: goto $l2331;
        case 7: goto $l1715;
        case 43: goto $l2530;
        case 52: goto $l2709;
        case 24: goto $l2114;
        case 25: goto $l2124;
        case 8: goto $l1719;
        case 37: goto $l2465;
        case 57: goto $l2807;
        case 56: goto $l2797;
        case 0: goto $l1505;
        case 46: goto $l2572;
        case 5: goto $l1611;
        case 44: goto $l2536;
        case 27: goto $l2150;
        case 33: goto $l2349;
        case 12: goto $l1801;
        case 9: goto $l1743;
        case 34: goto $l2368;
        case 21: goto $l2023;
        case 29: goto $l2307;
        case 54: goto $l2751;
        case 30: goto $l2328;
        case 3: goto $l1549;
        case 59: goto $l2905;
        case 22: goto $l2043;
        case 40: goto $l2508;
        case 14: goto $l1848;
        case 32: goto $l2343;
        case -1: goto $l2912;
        case 45: goto $l2563;
        case 15: goto $l1861;
        case 11: goto $l1772;
        case 53: goto $l2720;
        case 13: goto $l1835;
        case 41: goto $l2514;
        case 10: goto $l1763;
        case 4: goto $l1558;
        case 49: goto $l2629;
        case 26: goto $l2137;
        case 38: goto $l2469;
        case 19: goto $l1976;
        case 51: goto $l2686;
        case 39: goto $l2486;
        case 1: goto $l1514;
        case 42: goto $l2520;
        case 17: goto $l1893;
        case 48: goto $l2604;
        case 23: goto $l2046;
        case 18: goto $l1910;
        case 16: goto $l1865;
        case 28: goto $l2210;
        case 55: goto $l2789;
        case 58: goto $l2838;
        case 50: goto $l2664;
        case 20: goto $l2003;
        case 47: goto $l2579;
    }
    $l2912:;
    abort();
}
void org$pandalanguage$pandac$IRNode$cleanup(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$5_12919 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2920;
    panda$core$Int64 $tmp2921;
    org$pandalanguage$pandac$Position _f02923;
    org$pandalanguage$pandac$IRNode* _f12925 = NULL;
    org$pandalanguage$pandac$IRNode* _f22927 = NULL;
    panda$core$Int64 $tmp2929;
    org$pandalanguage$pandac$Position _f02931;
    org$pandalanguage$pandac$Type* _f12933 = NULL;
    panda$core$Int64 $tmp2935;
    org$pandalanguage$pandac$Position _f02937;
    org$pandalanguage$pandac$Type* _f12939 = NULL;
    org$pandalanguage$pandac$IRNode* _f22941 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f32943;
    org$pandalanguage$pandac$IRNode* _f42945 = NULL;
    panda$core$Int64 $tmp2947;
    org$pandalanguage$pandac$Position _f02949;
    org$pandalanguage$pandac$Type* _f12951 = NULL;
    panda$core$Bit _f22953;
    panda$core$Int64 $tmp2955;
    org$pandalanguage$pandac$Position _f02957;
    panda$collections$ImmutableArray* _f12959 = NULL;
    panda$core$Int64 $tmp2961;
    org$pandalanguage$pandac$Position _f02963;
    panda$collections$ImmutableArray* _f12965 = NULL;
    panda$collections$ImmutableArray* _f22967 = NULL;
    panda$core$Int64 $tmp2969;
    org$pandalanguage$pandac$Position _f02971;
    panda$core$String* _f12973 = NULL;
    panda$core$Int64 $tmp2975;
    org$pandalanguage$pandac$Position _f02977;
    org$pandalanguage$pandac$Type* _f12979 = NULL;
    org$pandalanguage$pandac$MethodRef* _f22981 = NULL;
    panda$collections$ImmutableArray* _f32983 = NULL;
    panda$core$Int64 $tmp2985;
    org$pandalanguage$pandac$Position _f02987;
    org$pandalanguage$pandac$IRNode* _f12989 = NULL;
    org$pandalanguage$pandac$Type* _f22991 = NULL;
    panda$core$Bit _f32993;
    panda$core$Int64 $tmp2995;
    org$pandalanguage$pandac$Position _f02997;
    org$pandalanguage$pandac$ChoiceEntry* _f12999 = NULL;
    panda$core$Int64 $tmp3001;
    org$pandalanguage$pandac$Position _f03003;
    org$pandalanguage$pandac$IRNode* _f13005 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f23007 = NULL;
    panda$core$Int64 _f33009;
    panda$core$Int64 $tmp3011;
    org$pandalanguage$pandac$Position _f03013;
    org$pandalanguage$pandac$Type* _f13015 = NULL;
    org$pandalanguage$pandac$IRNode* _f23017 = NULL;
    panda$core$Int64 $tmp3019;
    org$pandalanguage$pandac$Position _f03021;
    org$pandalanguage$pandac$Type* _f13023 = NULL;
    panda$core$Int64 $tmp3025;
    org$pandalanguage$pandac$Position _f03027;
    panda$core$String* _f13029 = NULL;
    panda$core$Int64 $tmp3031;
    org$pandalanguage$pandac$IRNode* _f03033 = NULL;
    org$pandalanguage$pandac$IRNode* _f13035 = NULL;
    panda$core$Int64 $tmp3037;
    org$pandalanguage$pandac$Position _f03039;
    panda$core$String* _f13041 = NULL;
    panda$collections$ImmutableArray* _f23043 = NULL;
    org$pandalanguage$pandac$IRNode* _f33045 = NULL;
    panda$core$Int64 $tmp3047;
    org$pandalanguage$pandac$IRNode* _f03049 = NULL;
    panda$collections$ImmutableArray* _f13051 = NULL;
    panda$core$Int64 $tmp3053;
    org$pandalanguage$pandac$IRNode* _f03055 = NULL;
    org$pandalanguage$pandac$IRNode* _f13057 = NULL;
    panda$core$Int64 $tmp3059;
    org$pandalanguage$pandac$Position _f03061;
    org$pandalanguage$pandac$Type* _f13063 = NULL;
    org$pandalanguage$pandac$IRNode* _f23065 = NULL;
    org$pandalanguage$pandac$FieldDecl* _f33067 = NULL;
    panda$core$Int64 $tmp3069;
    org$pandalanguage$pandac$Position _f03071;
    org$pandalanguage$pandac$IRNode* _f13073 = NULL;
    panda$collections$ImmutableArray* _f23075 = NULL;
    org$pandalanguage$pandac$IRNode* _f33077 = NULL;
    panda$core$Int64 $tmp3079;
    org$pandalanguage$pandac$Position _f03081;
    org$pandalanguage$pandac$Type* _f13083 = NULL;
    panda$core$UInt64 _f23085;
    panda$core$Int64 $tmp3087;
    org$pandalanguage$pandac$Position _f03089;
    org$pandalanguage$pandac$IRNode* _f13091 = NULL;
    panda$core$Int64 $tmp3093;
    org$pandalanguage$pandac$Position _f03095;
    org$pandalanguage$pandac$IRNode* _f13097 = NULL;
    panda$core$Int64 $tmp3099;
    org$pandalanguage$pandac$Position _f03101;
    panda$core$String* _f13103 = NULL;
    panda$collections$ImmutableArray* _f23105 = NULL;
    panda$core$Int64 $tmp3107;
    org$pandalanguage$pandac$Position _f03109;
    org$pandalanguage$pandac$IRNode* _f13111 = NULL;
    panda$collections$ImmutableArray* _f23113 = NULL;
    panda$collections$ImmutableArray* _f33115 = NULL;
    panda$core$Int64 $tmp3117;
    org$pandalanguage$pandac$Position _f03119;
    org$pandalanguage$pandac$Type* _f13121 = NULL;
    org$pandalanguage$pandac$IRNode* _f23123 = NULL;
    org$pandalanguage$pandac$MethodRef* _f33125 = NULL;
    panda$core$Int64 $tmp3127;
    org$pandalanguage$pandac$Position _f03129;
    org$pandalanguage$pandac$Type* _f13131 = NULL;
    panda$core$UInt64 _f23133;
    panda$core$Int64 $tmp3135;
    org$pandalanguage$pandac$Position _f03137;
    org$pandalanguage$pandac$Type* _f13139 = NULL;
    panda$core$Int64 $tmp3141;
    org$pandalanguage$pandac$Position _f03143;
    org$pandalanguage$pandac$parser$Token$Kind _f13145;
    org$pandalanguage$pandac$IRNode* _f23147 = NULL;
    panda$core$Int64 $tmp3149;
    org$pandalanguage$pandac$Position _f03151;
    panda$core$String* _f13153 = NULL;
    org$pandalanguage$pandac$IRNode* _f23155 = NULL;
    org$pandalanguage$pandac$IRNode* _f33157 = NULL;
    panda$collections$ImmutableArray* _f43159 = NULL;
    panda$core$Int64 $tmp3161;
    org$pandalanguage$pandac$Position _f03163;
    org$pandalanguage$pandac$Type* _f13165 = NULL;
    panda$core$Real64 _f23167;
    panda$core$Int64 $tmp3169;
    org$pandalanguage$pandac$Position _f03171;
    org$pandalanguage$pandac$IRNode* _f13173 = NULL;
    panda$core$Int64 $tmp3175;
    org$pandalanguage$pandac$Position _f03177;
    org$pandalanguage$pandac$Type* _f13179 = NULL;
    panda$core$Int64 _f23181;
    panda$core$Int64 $tmp3183;
    org$pandalanguage$pandac$IRNode* _f03185 = NULL;
    panda$core$Int64 _f13187;
    panda$core$Int64 $tmp3189;
    org$pandalanguage$pandac$Position _f03191;
    org$pandalanguage$pandac$Type* _f13193 = NULL;
    panda$core$Int64 $tmp3195;
    org$pandalanguage$pandac$Position _f03197;
    org$pandalanguage$pandac$Type* _f13199 = NULL;
    panda$core$Int64 $tmp3201;
    org$pandalanguage$pandac$Position _f03203;
    panda$core$String* _f13205 = NULL;
    panda$core$Int64 $tmp3207;
    org$pandalanguage$pandac$Position _f03209;
    org$pandalanguage$pandac$Type* _f13211 = NULL;
    panda$core$Int64 $tmp3213;
    org$pandalanguage$pandac$Position _f03215;
    org$pandalanguage$pandac$IRNode* _f13217 = NULL;
    org$pandalanguage$pandac$IRNode* _f23219 = NULL;
    org$pandalanguage$pandac$IRNode* _f33221 = NULL;
    panda$core$Int64 $tmp3223;
    org$pandalanguage$pandac$Position _f03225;
    org$pandalanguage$pandac$Type* _f13227 = NULL;
    panda$core$Int64 $tmp3229;
    org$pandalanguage$pandac$Position _f03231;
    panda$core$String* _f13233 = NULL;
    panda$core$Int64 $tmp3235;
    org$pandalanguage$pandac$Position _f03237;
    org$pandalanguage$pandac$Type* _f13239 = NULL;
    org$pandalanguage$pandac$IRNode* _f23241 = NULL;
    panda$collections$ImmutableArray* _f33243 = NULL;
    panda$core$Int64 $tmp3245;
    org$pandalanguage$pandac$Position _f03247;
    panda$collections$ImmutableArray* _f13249 = NULL;
    org$pandalanguage$pandac$ASTNode* _f23251 = NULL;
    panda$core$Int64 $tmp3253;
    org$pandalanguage$pandac$Position _f03255;
    org$pandalanguage$pandac$Type* _f13257 = NULL;
    org$pandalanguage$pandac$IRNode* _f23259 = NULL;
    panda$collections$ImmutableArray* _f33261 = NULL;
    panda$collections$ImmutableArray* _f43263 = NULL;
    panda$core$Int64 $tmp3265;
    org$pandalanguage$pandac$Position _f03267;
    org$pandalanguage$pandac$IRNode* _f13269 = NULL;
    panda$collections$ImmutableArray* _f23271 = NULL;
    panda$core$Int64 $tmp3273;
    org$pandalanguage$pandac$Position _f03275;
    org$pandalanguage$pandac$IRNode* _f13277 = NULL;
    org$pandalanguage$pandac$IRNode* _f23279 = NULL;
    panda$core$Bit _f33281;
    org$pandalanguage$pandac$IRNode* _f43283 = NULL;
    panda$core$Int64 $tmp3285;
    org$pandalanguage$pandac$Position _f03287;
    org$pandalanguage$pandac$Variable$Kind _f13289;
    panda$collections$ImmutableArray* _f23291 = NULL;
    panda$core$Int64 $tmp3293;
    org$pandalanguage$pandac$Position _f03295;
    panda$core$String* _f13297 = NULL;
    org$pandalanguage$pandac$Type* _f23299 = NULL;
    panda$core$Int64 $tmp3301;
    org$pandalanguage$pandac$Position _f03303;
    org$pandalanguage$pandac$Variable* _f13305 = NULL;
    panda$core$Int64 $tmp3307;
    org$pandalanguage$pandac$Position _f03309;
    panda$collections$ImmutableArray* _f13311 = NULL;
    panda$collections$ImmutableArray* _f23313 = NULL;
    panda$core$Int64 $tmp3315;
    org$pandalanguage$pandac$Position _f03317;
    panda$core$String* _f13319 = NULL;
    org$pandalanguage$pandac$IRNode* _f23321 = NULL;
    panda$collections$ImmutableArray* _f33323 = NULL;
    int $tmp2915;
    {
        int $tmp2918;
        {
            $tmp2920 = self;
            $match$5_12919 = $tmp2920;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2920));
            panda$core$Int64$init$builtin_int64(&$tmp2921, 0);
            panda$core$Bit $tmp2922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp2921);
            if ($tmp2922.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2924 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f02923 = *$tmp2924;
                org$pandalanguage$pandac$IRNode** $tmp2926 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 16));
                _f12925 = *$tmp2926;
                org$pandalanguage$pandac$IRNode** $tmp2928 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 24));
                _f22927 = *$tmp2928;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12925));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22927));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2929, 1);
            panda$core$Bit $tmp2930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp2929);
            if ($tmp2930.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2932 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f02931 = *$tmp2932;
                org$pandalanguage$pandac$Type** $tmp2934 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12919->$data + 16));
                _f12933 = *$tmp2934;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12933));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2935, 2);
            panda$core$Bit $tmp2936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp2935);
            if ($tmp2936.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2938 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f02937 = *$tmp2938;
                org$pandalanguage$pandac$Type** $tmp2940 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12919->$data + 16));
                _f12939 = *$tmp2940;
                org$pandalanguage$pandac$IRNode** $tmp2942 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 24));
                _f22941 = *$tmp2942;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2944 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12919->$data + 32));
                _f32943 = *$tmp2944;
                org$pandalanguage$pandac$IRNode** $tmp2946 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 40));
                _f42945 = *$tmp2946;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12939));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22941));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42945));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2947, 3);
            panda$core$Bit $tmp2948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp2947);
            if ($tmp2948.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2950 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f02949 = *$tmp2950;
                org$pandalanguage$pandac$Type** $tmp2952 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12919->$data + 16));
                _f12951 = *$tmp2952;
                panda$core$Bit* $tmp2954 = ((panda$core$Bit*) ((char*) $match$5_12919->$data + 24));
                _f22953 = *$tmp2954;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12951));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2955, 4);
            panda$core$Bit $tmp2956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp2955);
            if ($tmp2956.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2958 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f02957 = *$tmp2958;
                panda$collections$ImmutableArray** $tmp2960 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12919->$data + 16));
                _f12959 = *$tmp2960;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12959));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2961, 5);
            panda$core$Bit $tmp2962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp2961);
            if ($tmp2962.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2964 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f02963 = *$tmp2964;
                panda$collections$ImmutableArray** $tmp2966 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12919->$data + 16));
                _f12965 = *$tmp2966;
                panda$collections$ImmutableArray** $tmp2968 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12919->$data + 24));
                _f22967 = *$tmp2968;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12965));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22967));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2969, 6);
            panda$core$Bit $tmp2970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp2969);
            if ($tmp2970.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2972 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f02971 = *$tmp2972;
                panda$core$String** $tmp2974 = ((panda$core$String**) ((char*) $match$5_12919->$data + 16));
                _f12973 = *$tmp2974;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12973));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2975, 7);
            panda$core$Bit $tmp2976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp2975);
            if ($tmp2976.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2978 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f02977 = *$tmp2978;
                org$pandalanguage$pandac$Type** $tmp2980 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12919->$data + 16));
                _f12979 = *$tmp2980;
                org$pandalanguage$pandac$MethodRef** $tmp2982 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12919->$data + 24));
                _f22981 = *$tmp2982;
                panda$collections$ImmutableArray** $tmp2984 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12919->$data + 32));
                _f32983 = *$tmp2984;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12979));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22981));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32983));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2985, 8);
            panda$core$Bit $tmp2986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp2985);
            if ($tmp2986.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2988 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f02987 = *$tmp2988;
                org$pandalanguage$pandac$IRNode** $tmp2990 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 16));
                _f12989 = *$tmp2990;
                org$pandalanguage$pandac$Type** $tmp2992 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12919->$data + 24));
                _f22991 = *$tmp2992;
                panda$core$Bit* $tmp2994 = ((panda$core$Bit*) ((char*) $match$5_12919->$data + 32));
                _f32993 = *$tmp2994;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12989));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22991));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2995, 9);
            panda$core$Bit $tmp2996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp2995);
            if ($tmp2996.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2998 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f02997 = *$tmp2998;
                org$pandalanguage$pandac$ChoiceEntry** $tmp3000 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12919->$data + 16));
                _f12999 = *$tmp3000;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12999));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3001, 10);
            panda$core$Bit $tmp3002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3001);
            if ($tmp3002.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3004 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03003 = *$tmp3004;
                org$pandalanguage$pandac$IRNode** $tmp3006 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 16));
                _f13005 = *$tmp3006;
                org$pandalanguage$pandac$ChoiceEntry** $tmp3008 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12919->$data + 24));
                _f23007 = *$tmp3008;
                panda$core$Int64* $tmp3010 = ((panda$core$Int64*) ((char*) $match$5_12919->$data + 32));
                _f33009 = *$tmp3010;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13005));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23007));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3011, 11);
            panda$core$Bit $tmp3012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3011);
            if ($tmp3012.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3014 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03013 = *$tmp3014;
                org$pandalanguage$pandac$Type** $tmp3016 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12919->$data + 16));
                _f13015 = *$tmp3016;
                org$pandalanguage$pandac$IRNode** $tmp3018 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 24));
                _f23017 = *$tmp3018;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13015));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23017));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3019, 12);
            panda$core$Bit $tmp3020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3019);
            if ($tmp3020.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3022 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03021 = *$tmp3022;
                org$pandalanguage$pandac$Type** $tmp3024 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12919->$data + 16));
                _f13023 = *$tmp3024;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13023));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3025, 13);
            panda$core$Bit $tmp3026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3025);
            if ($tmp3026.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3028 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03027 = *$tmp3028;
                panda$core$String** $tmp3030 = ((panda$core$String**) ((char*) $match$5_12919->$data + 16));
                _f13029 = *$tmp3030;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13029));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3031, 14);
            panda$core$Bit $tmp3032 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3031);
            if ($tmp3032.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp3034 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 0));
                _f03033 = *$tmp3034;
                org$pandalanguage$pandac$IRNode** $tmp3036 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 8));
                _f13035 = *$tmp3036;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f03033));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13035));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3037, 15);
            panda$core$Bit $tmp3038 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3037);
            if ($tmp3038.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3040 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03039 = *$tmp3040;
                panda$core$String** $tmp3042 = ((panda$core$String**) ((char*) $match$5_12919->$data + 16));
                _f13041 = *$tmp3042;
                panda$collections$ImmutableArray** $tmp3044 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12919->$data + 24));
                _f23043 = *$tmp3044;
                org$pandalanguage$pandac$IRNode** $tmp3046 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 32));
                _f33045 = *$tmp3046;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13041));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23043));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33045));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3047, 16);
            panda$core$Bit $tmp3048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3047);
            if ($tmp3048.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp3050 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 0));
                _f03049 = *$tmp3050;
                panda$collections$ImmutableArray** $tmp3052 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12919->$data + 8));
                _f13051 = *$tmp3052;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f03049));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13051));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3053, 17);
            panda$core$Bit $tmp3054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3053);
            if ($tmp3054.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp3056 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 0));
                _f03055 = *$tmp3056;
                org$pandalanguage$pandac$IRNode** $tmp3058 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 8));
                _f13057 = *$tmp3058;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f03055));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13057));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3059, 18);
            panda$core$Bit $tmp3060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3059);
            if ($tmp3060.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3062 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03061 = *$tmp3062;
                org$pandalanguage$pandac$Type** $tmp3064 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12919->$data + 16));
                _f13063 = *$tmp3064;
                org$pandalanguage$pandac$IRNode** $tmp3066 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 24));
                _f23065 = *$tmp3066;
                org$pandalanguage$pandac$FieldDecl** $tmp3068 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$5_12919->$data + 32));
                _f33067 = *$tmp3068;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13063));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23065));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33067));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3069, 19);
            panda$core$Bit $tmp3070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3069);
            if ($tmp3070.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3072 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03071 = *$tmp3072;
                org$pandalanguage$pandac$IRNode** $tmp3074 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 16));
                _f13073 = *$tmp3074;
                panda$collections$ImmutableArray** $tmp3076 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12919->$data + 24));
                _f23075 = *$tmp3076;
                org$pandalanguage$pandac$IRNode** $tmp3078 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 32));
                _f33077 = *$tmp3078;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13073));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23075));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33077));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3079, 20);
            panda$core$Bit $tmp3080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3079);
            if ($tmp3080.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3082 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03081 = *$tmp3082;
                org$pandalanguage$pandac$Type** $tmp3084 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12919->$data + 16));
                _f13083 = *$tmp3084;
                panda$core$UInt64* $tmp3086 = ((panda$core$UInt64*) ((char*) $match$5_12919->$data + 24));
                _f23085 = *$tmp3086;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13083));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3087, 21);
            panda$core$Bit $tmp3088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3087);
            if ($tmp3088.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3090 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03089 = *$tmp3090;
                org$pandalanguage$pandac$IRNode** $tmp3092 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 16));
                _f13091 = *$tmp3092;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13091));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3093, 22);
            panda$core$Bit $tmp3094 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3093);
            if ($tmp3094.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3096 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03095 = *$tmp3096;
                org$pandalanguage$pandac$IRNode** $tmp3098 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 16));
                _f13097 = *$tmp3098;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13097));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3099, 23);
            panda$core$Bit $tmp3100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3099);
            if ($tmp3100.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3102 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03101 = *$tmp3102;
                panda$core$String** $tmp3104 = ((panda$core$String**) ((char*) $match$5_12919->$data + 16));
                _f13103 = *$tmp3104;
                panda$collections$ImmutableArray** $tmp3106 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12919->$data + 24));
                _f23105 = *$tmp3106;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13103));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23105));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3107, 24);
            panda$core$Bit $tmp3108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3107);
            if ($tmp3108.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3110 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03109 = *$tmp3110;
                org$pandalanguage$pandac$IRNode** $tmp3112 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 16));
                _f13111 = *$tmp3112;
                panda$collections$ImmutableArray** $tmp3114 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12919->$data + 24));
                _f23113 = *$tmp3114;
                panda$collections$ImmutableArray** $tmp3116 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12919->$data + 32));
                _f33115 = *$tmp3116;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13111));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23113));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33115));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3117, 25);
            panda$core$Bit $tmp3118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3117);
            if ($tmp3118.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3120 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03119 = *$tmp3120;
                org$pandalanguage$pandac$Type** $tmp3122 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12919->$data + 16));
                _f13121 = *$tmp3122;
                org$pandalanguage$pandac$IRNode** $tmp3124 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 24));
                _f23123 = *$tmp3124;
                org$pandalanguage$pandac$MethodRef** $tmp3126 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12919->$data + 32));
                _f33125 = *$tmp3126;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13121));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23123));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33125));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3127, 26);
            panda$core$Bit $tmp3128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3127);
            if ($tmp3128.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3130 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03129 = *$tmp3130;
                org$pandalanguage$pandac$Type** $tmp3132 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12919->$data + 16));
                _f13131 = *$tmp3132;
                panda$core$UInt64* $tmp3134 = ((panda$core$UInt64*) ((char*) $match$5_12919->$data + 24));
                _f23133 = *$tmp3134;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13131));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3135, 27);
            panda$core$Bit $tmp3136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3135);
            if ($tmp3136.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3138 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03137 = *$tmp3138;
                org$pandalanguage$pandac$Type** $tmp3140 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12919->$data + 16));
                _f13139 = *$tmp3140;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13139));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3141, 28);
            panda$core$Bit $tmp3142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3141);
            if ($tmp3142.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3144 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03143 = *$tmp3144;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp3146 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12919->$data + 16));
                _f13145 = *$tmp3146;
                org$pandalanguage$pandac$IRNode** $tmp3148 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 24));
                _f23147 = *$tmp3148;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23147));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3149, 29);
            panda$core$Bit $tmp3150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3149);
            if ($tmp3150.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3152 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03151 = *$tmp3152;
                panda$core$String** $tmp3154 = ((panda$core$String**) ((char*) $match$5_12919->$data + 16));
                _f13153 = *$tmp3154;
                org$pandalanguage$pandac$IRNode** $tmp3156 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 24));
                _f23155 = *$tmp3156;
                org$pandalanguage$pandac$IRNode** $tmp3158 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 32));
                _f33157 = *$tmp3158;
                panda$collections$ImmutableArray** $tmp3160 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12919->$data + 40));
                _f43159 = *$tmp3160;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13153));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23155));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33157));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f43159));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3161, 30);
            panda$core$Bit $tmp3162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3161);
            if ($tmp3162.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3164 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03163 = *$tmp3164;
                org$pandalanguage$pandac$Type** $tmp3166 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12919->$data + 16));
                _f13165 = *$tmp3166;
                panda$core$Real64* $tmp3168 = ((panda$core$Real64*) ((char*) $match$5_12919->$data + 24));
                _f23167 = *$tmp3168;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13165));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3169, 31);
            panda$core$Bit $tmp3170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3169);
            if ($tmp3170.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3172 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03171 = *$tmp3172;
                org$pandalanguage$pandac$IRNode** $tmp3174 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 16));
                _f13173 = *$tmp3174;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13173));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3175, 32);
            panda$core$Bit $tmp3176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3175);
            if ($tmp3176.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3178 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03177 = *$tmp3178;
                org$pandalanguage$pandac$Type** $tmp3180 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12919->$data + 16));
                _f13179 = *$tmp3180;
                panda$core$Int64* $tmp3182 = ((panda$core$Int64*) ((char*) $match$5_12919->$data + 24));
                _f23181 = *$tmp3182;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13179));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3183, 33);
            panda$core$Bit $tmp3184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3183);
            if ($tmp3184.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp3186 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 0));
                _f03185 = *$tmp3186;
                panda$core$Int64* $tmp3188 = ((panda$core$Int64*) ((char*) $match$5_12919->$data + 8));
                _f13187 = *$tmp3188;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f03185));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3189, 34);
            panda$core$Bit $tmp3190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3189);
            if ($tmp3190.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3192 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03191 = *$tmp3192;
                org$pandalanguage$pandac$Type** $tmp3194 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12919->$data + 16));
                _f13193 = *$tmp3194;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13193));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3195, 35);
            panda$core$Bit $tmp3196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3195);
            if ($tmp3196.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3198 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03197 = *$tmp3198;
                org$pandalanguage$pandac$Type** $tmp3200 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12919->$data + 16));
                _f13199 = *$tmp3200;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13199));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3201, 36);
            panda$core$Bit $tmp3202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3201);
            if ($tmp3202.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3204 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03203 = *$tmp3204;
                panda$core$String** $tmp3206 = ((panda$core$String**) ((char*) $match$5_12919->$data + 16));
                _f13205 = *$tmp3206;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13205));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3207, 37);
            panda$core$Bit $tmp3208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3207);
            if ($tmp3208.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3210 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03209 = *$tmp3210;
                org$pandalanguage$pandac$Type** $tmp3212 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12919->$data + 16));
                _f13211 = *$tmp3212;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13211));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3213, 38);
            panda$core$Bit $tmp3214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3213);
            if ($tmp3214.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3216 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03215 = *$tmp3216;
                org$pandalanguage$pandac$IRNode** $tmp3218 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 16));
                _f13217 = *$tmp3218;
                org$pandalanguage$pandac$IRNode** $tmp3220 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 24));
                _f23219 = *$tmp3220;
                org$pandalanguage$pandac$IRNode** $tmp3222 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 32));
                _f33221 = *$tmp3222;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13217));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23219));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33221));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3223, 39);
            panda$core$Bit $tmp3224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3223);
            if ($tmp3224.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3226 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03225 = *$tmp3226;
                org$pandalanguage$pandac$Type** $tmp3228 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12919->$data + 16));
                _f13227 = *$tmp3228;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13227));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3229, 40);
            panda$core$Bit $tmp3230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3229);
            if ($tmp3230.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3232 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03231 = *$tmp3232;
                panda$core$String** $tmp3234 = ((panda$core$String**) ((char*) $match$5_12919->$data + 16));
                _f13233 = *$tmp3234;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13233));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3235, 41);
            panda$core$Bit $tmp3236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3235);
            if ($tmp3236.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3238 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03237 = *$tmp3238;
                org$pandalanguage$pandac$Type** $tmp3240 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12919->$data + 16));
                _f13239 = *$tmp3240;
                org$pandalanguage$pandac$IRNode** $tmp3242 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 24));
                _f23241 = *$tmp3242;
                panda$collections$ImmutableArray** $tmp3244 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12919->$data + 32));
                _f33243 = *$tmp3244;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13239));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23241));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33243));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3245, 42);
            panda$core$Bit $tmp3246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3245);
            if ($tmp3246.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3248 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03247 = *$tmp3248;
                panda$collections$ImmutableArray** $tmp3250 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12919->$data + 16));
                _f13249 = *$tmp3250;
                org$pandalanguage$pandac$ASTNode** $tmp3252 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12919->$data + 24));
                _f23251 = *$tmp3252;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13249));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23251));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3253, 43);
            panda$core$Bit $tmp3254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3253);
            if ($tmp3254.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3256 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03255 = *$tmp3256;
                org$pandalanguage$pandac$Type** $tmp3258 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12919->$data + 16));
                _f13257 = *$tmp3258;
                org$pandalanguage$pandac$IRNode** $tmp3260 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 24));
                _f23259 = *$tmp3260;
                panda$collections$ImmutableArray** $tmp3262 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12919->$data + 32));
                _f33261 = *$tmp3262;
                panda$collections$ImmutableArray** $tmp3264 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12919->$data + 40));
                _f43263 = *$tmp3264;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13257));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23259));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33261));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f43263));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3265, 44);
            panda$core$Bit $tmp3266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3265);
            if ($tmp3266.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3268 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03267 = *$tmp3268;
                org$pandalanguage$pandac$IRNode** $tmp3270 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 16));
                _f13269 = *$tmp3270;
                panda$collections$ImmutableArray** $tmp3272 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12919->$data + 24));
                _f23271 = *$tmp3272;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13269));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23271));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3273, 45);
            panda$core$Bit $tmp3274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3273);
            if ($tmp3274.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3276 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03275 = *$tmp3276;
                org$pandalanguage$pandac$IRNode** $tmp3278 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 16));
                _f13277 = *$tmp3278;
                org$pandalanguage$pandac$IRNode** $tmp3280 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 24));
                _f23279 = *$tmp3280;
                panda$core$Bit* $tmp3282 = ((panda$core$Bit*) ((char*) $match$5_12919->$data + 32));
                _f33281 = *$tmp3282;
                org$pandalanguage$pandac$IRNode** $tmp3284 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 33));
                _f43283 = *$tmp3284;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13277));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23279));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f43283));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3285, 46);
            panda$core$Bit $tmp3286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3285);
            if ($tmp3286.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3288 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03287 = *$tmp3288;
                org$pandalanguage$pandac$Variable$Kind* $tmp3290 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_12919->$data + 16));
                _f13289 = *$tmp3290;
                panda$collections$ImmutableArray** $tmp3292 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12919->$data + 24));
                _f23291 = *$tmp3292;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23291));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3293, 47);
            panda$core$Bit $tmp3294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3293);
            if ($tmp3294.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3296 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03295 = *$tmp3296;
                panda$core$String** $tmp3298 = ((panda$core$String**) ((char*) $match$5_12919->$data + 16));
                _f13297 = *$tmp3298;
                org$pandalanguage$pandac$Type** $tmp3300 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12919->$data + 24));
                _f23299 = *$tmp3300;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13297));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23299));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3301, 48);
            panda$core$Bit $tmp3302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3301);
            if ($tmp3302.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3304 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03303 = *$tmp3304;
                org$pandalanguage$pandac$Variable** $tmp3306 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$5_12919->$data + 16));
                _f13305 = *$tmp3306;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13305));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3307, 49);
            panda$core$Bit $tmp3308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3307);
            if ($tmp3308.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3310 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03309 = *$tmp3310;
                panda$collections$ImmutableArray** $tmp3312 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12919->$data + 16));
                _f13311 = *$tmp3312;
                panda$collections$ImmutableArray** $tmp3314 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12919->$data + 24));
                _f23313 = *$tmp3314;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13311));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23313));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3315, 50);
            panda$core$Bit $tmp3316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12919->$rawValue, $tmp3315);
            if ($tmp3316.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3318 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12919->$data + 0));
                _f03317 = *$tmp3318;
                panda$core$String** $tmp3320 = ((panda$core$String**) ((char*) $match$5_12919->$data + 16));
                _f13319 = *$tmp3320;
                org$pandalanguage$pandac$IRNode** $tmp3322 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12919->$data + 24));
                _f23321 = *$tmp3322;
                panda$collections$ImmutableArray** $tmp3324 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12919->$data + 32));
                _f33323 = *$tmp3324;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13319));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23321));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33323));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp2918 = -1;
        goto $l2916;
        $l2916:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2920));
        switch ($tmp2918) {
            case -1: goto $l3325;
        }
        $l3325:;
    }
    $tmp2915 = -1;
    goto $l2913;
    $l2913:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2915) {
        case -1: goto $l3326;
    }
    $l3326:;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3328;
    org$pandalanguage$pandac$IRNode* $tmp3331;
    org$pandalanguage$pandac$IRNode* $tmp3332;
    org$pandalanguage$pandac$IRNode* $tmp3335;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3327 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3327 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3329 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3328 = *$tmp3329;
        org$pandalanguage$pandac$IRNode** $tmp3330 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3331 = p_f1;
        *$tmp3330 = $tmp3331;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3331));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3328));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3333 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3332 = *$tmp3333;
        org$pandalanguage$pandac$IRNode** $tmp3334 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3335 = p_f2;
        *$tmp3334 = $tmp3335;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3335));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3332));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1) {
    org$pandalanguage$pandac$Type* $tmp3337;
    org$pandalanguage$pandac$Type* $tmp3340;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3336 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3336 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3338 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3337 = *$tmp3338;
        org$pandalanguage$pandac$Type** $tmp3339 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3340 = p_f1;
        *$tmp3339 = $tmp3340;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3340));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3337));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$parser$Token$Kind p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$Type* $tmp3342;
    org$pandalanguage$pandac$Type* $tmp3345;
    org$pandalanguage$pandac$IRNode* $tmp3346;
    org$pandalanguage$pandac$IRNode* $tmp3349;
    org$pandalanguage$pandac$IRNode* $tmp3351;
    org$pandalanguage$pandac$IRNode* $tmp3354;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3341 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3341 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3343 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3342 = *$tmp3343;
        org$pandalanguage$pandac$Type** $tmp3344 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3345 = p_f1;
        *$tmp3344 = $tmp3345;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3345));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3342));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3347 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3346 = *$tmp3347;
        org$pandalanguage$pandac$IRNode** $tmp3348 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3349 = p_f2;
        *$tmp3348 = $tmp3349;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3349));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3346));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp3350 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 32));
    *$tmp3350 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp3352 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp3351 = *$tmp3352;
        org$pandalanguage$pandac$IRNode** $tmp3353 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp3354 = p_f4;
        *$tmp3353 = $tmp3354;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3354));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3351));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Bit p_f2) {
    org$pandalanguage$pandac$Type* $tmp3356;
    org$pandalanguage$pandac$Type* $tmp3359;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3355 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3355 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3357 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3356 = *$tmp3357;
        org$pandalanguage$pandac$Type** $tmp3358 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3359 = p_f1;
        *$tmp3358 = $tmp3359;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3359));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3356));
    }
    panda$core$Bit* $tmp3360 = ((panda$core$Bit*) ((char*) self->$data + 24));
    *$tmp3360 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp3362;
    panda$collections$ImmutableArray* $tmp3365;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3361 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3361 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp3363 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3362 = *$tmp3363;
        panda$collections$ImmutableArray** $tmp3364 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3365 = p_f1;
        *$tmp3364 = $tmp3365;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3365));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3362));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp3367;
    panda$collections$ImmutableArray* $tmp3370;
    panda$collections$ImmutableArray* $tmp3371;
    panda$collections$ImmutableArray* $tmp3374;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3366 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3366 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp3368 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3367 = *$tmp3368;
        panda$collections$ImmutableArray** $tmp3369 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3370 = p_f1;
        *$tmp3369 = $tmp3370;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3370));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3367));
    }
    {
        panda$collections$ImmutableArray** $tmp3372 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3371 = *$tmp3372;
        panda$collections$ImmutableArray** $tmp3373 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3374 = p_f2;
        *$tmp3373 = $tmp3374;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3374));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3371));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp3376;
    panda$core$String* $tmp3379;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3375 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3375 = p_f0;
    {
        panda$core$String** $tmp3377 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3376 = *$tmp3377;
        panda$core$String** $tmp3378 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3379 = p_f1;
        *$tmp3378 = $tmp3379;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3379));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3376));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$MethodRef* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3381;
    org$pandalanguage$pandac$Type* $tmp3384;
    org$pandalanguage$pandac$MethodRef* $tmp3385;
    org$pandalanguage$pandac$MethodRef* $tmp3388;
    panda$collections$ImmutableArray* $tmp3389;
    panda$collections$ImmutableArray* $tmp3392;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3380 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3380 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3382 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3381 = *$tmp3382;
        org$pandalanguage$pandac$Type** $tmp3383 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3384 = p_f1;
        *$tmp3383 = $tmp3384;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3384));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3381));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp3386 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3385 = *$tmp3386;
        org$pandalanguage$pandac$MethodRef** $tmp3387 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3388 = p_f2;
        *$tmp3387 = $tmp3388;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3388));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3385));
    }
    {
        panda$collections$ImmutableArray** $tmp3390 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3389 = *$tmp3390;
        panda$collections$ImmutableArray** $tmp3391 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3392 = p_f3;
        *$tmp3391 = $tmp3392;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3392));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3389));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$Type* p_f2, panda$core$Bit p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3394;
    org$pandalanguage$pandac$IRNode* $tmp3397;
    org$pandalanguage$pandac$Type* $tmp3398;
    org$pandalanguage$pandac$Type* $tmp3401;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3393 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3393 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3395 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3394 = *$tmp3395;
        org$pandalanguage$pandac$IRNode** $tmp3396 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3397 = p_f1;
        *$tmp3396 = $tmp3397;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3397));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3394));
    }
    {
        org$pandalanguage$pandac$Type** $tmp3399 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp3398 = *$tmp3399;
        org$pandalanguage$pandac$Type** $tmp3400 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp3401 = p_f2;
        *$tmp3400 = $tmp3401;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3401));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3398));
    }
    panda$core$Bit* $tmp3402 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp3402 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceEntry(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ChoiceEntry* p_f1) {
    org$pandalanguage$pandac$ChoiceEntry* $tmp3404;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3407;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3403 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3403 = p_f0;
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp3405 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp3404 = *$tmp3405;
        org$pandalanguage$pandac$ChoiceEntry** $tmp3406 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp3407 = p_f1;
        *$tmp3406 = $tmp3407;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3407));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3404));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3409;
    org$pandalanguage$pandac$IRNode* $tmp3412;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3413;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3416;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3408 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3408 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3410 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3409 = *$tmp3410;
        org$pandalanguage$pandac$IRNode** $tmp3411 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3412 = p_f1;
        *$tmp3411 = $tmp3412;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3412));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3409));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp3414 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp3413 = *$tmp3414;
        org$pandalanguage$pandac$ChoiceEntry** $tmp3415 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp3416 = p_f2;
        *$tmp3415 = $tmp3416;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3416));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3413));
    }
    panda$core$Int64* $tmp3417 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp3417 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$Type* $tmp3419;
    org$pandalanguage$pandac$Type* $tmp3422;
    org$pandalanguage$pandac$IRNode* $tmp3423;
    org$pandalanguage$pandac$IRNode* $tmp3426;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3418 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3418 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3420 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3419 = *$tmp3420;
        org$pandalanguage$pandac$Type** $tmp3421 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3422 = p_f1;
        *$tmp3421 = $tmp3422;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3422));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3419));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3424 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3423 = *$tmp3424;
        org$pandalanguage$pandac$IRNode** $tmp3425 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3426 = p_f2;
        *$tmp3425 = $tmp3426;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3426));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3423));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3427;
    org$pandalanguage$pandac$IRNode* $tmp3430;
    org$pandalanguage$pandac$IRNode* $tmp3431;
    org$pandalanguage$pandac$IRNode* $tmp3434;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3428 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3427 = *$tmp3428;
        org$pandalanguage$pandac$IRNode** $tmp3429 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3430 = p_f0;
        *$tmp3429 = $tmp3430;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3430));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3427));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3432 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3431 = *$tmp3432;
        org$pandalanguage$pandac$IRNode** $tmp3433 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3434 = p_f1;
        *$tmp3433 = $tmp3434;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3434));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3431));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    panda$core$String* $tmp3436;
    panda$core$String* $tmp3439;
    panda$collections$ImmutableArray* $tmp3440;
    panda$collections$ImmutableArray* $tmp3443;
    org$pandalanguage$pandac$IRNode* $tmp3444;
    org$pandalanguage$pandac$IRNode* $tmp3447;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3435 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3435 = p_f0;
    {
        panda$core$String** $tmp3437 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3436 = *$tmp3437;
        panda$core$String** $tmp3438 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3439 = p_f1;
        *$tmp3438 = $tmp3439;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3439));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3436));
    }
    {
        panda$collections$ImmutableArray** $tmp3441 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3440 = *$tmp3441;
        panda$collections$ImmutableArray** $tmp3442 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3443 = p_f2;
        *$tmp3442 = $tmp3443;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3443));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3440));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3445 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3444 = *$tmp3445;
        org$pandalanguage$pandac$IRNode** $tmp3446 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3447 = p_f3;
        *$tmp3446 = $tmp3447;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3447));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3444));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$collections$ImmutableArray* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3448;
    org$pandalanguage$pandac$IRNode* $tmp3451;
    panda$collections$ImmutableArray* $tmp3452;
    panda$collections$ImmutableArray* $tmp3455;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3449 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3448 = *$tmp3449;
        org$pandalanguage$pandac$IRNode** $tmp3450 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3451 = p_f0;
        *$tmp3450 = $tmp3451;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3451));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3448));
    }
    {
        panda$collections$ImmutableArray** $tmp3453 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp3452 = *$tmp3453;
        panda$collections$ImmutableArray** $tmp3454 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp3455 = p_f1;
        *$tmp3454 = $tmp3455;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3455));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3452));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3456;
    org$pandalanguage$pandac$IRNode* $tmp3459;
    org$pandalanguage$pandac$IRNode* $tmp3460;
    org$pandalanguage$pandac$IRNode* $tmp3463;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3457 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3456 = *$tmp3457;
        org$pandalanguage$pandac$IRNode** $tmp3458 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3459 = p_f0;
        *$tmp3458 = $tmp3459;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3459));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3456));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3461 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3460 = *$tmp3461;
        org$pandalanguage$pandac$IRNode** $tmp3462 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3463 = p_f1;
        *$tmp3462 = $tmp3463;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3463));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3460));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$FieldDecl* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3465;
    org$pandalanguage$pandac$Type* $tmp3468;
    org$pandalanguage$pandac$IRNode* $tmp3469;
    org$pandalanguage$pandac$IRNode* $tmp3472;
    org$pandalanguage$pandac$FieldDecl* $tmp3473;
    org$pandalanguage$pandac$FieldDecl* $tmp3476;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3464 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3464 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3466 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3465 = *$tmp3466;
        org$pandalanguage$pandac$Type** $tmp3467 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3468 = p_f1;
        *$tmp3467 = $tmp3468;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3468));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3465));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3470 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3469 = *$tmp3470;
        org$pandalanguage$pandac$IRNode** $tmp3471 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3472 = p_f2;
        *$tmp3471 = $tmp3472;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3472));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3469));
    }
    {
        org$pandalanguage$pandac$FieldDecl** $tmp3474 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp3473 = *$tmp3474;
        org$pandalanguage$pandac$FieldDecl** $tmp3475 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp3476 = p_f3;
        *$tmp3475 = $tmp3476;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3476));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3473));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3478;
    org$pandalanguage$pandac$IRNode* $tmp3481;
    panda$collections$ImmutableArray* $tmp3482;
    panda$collections$ImmutableArray* $tmp3485;
    org$pandalanguage$pandac$IRNode* $tmp3486;
    org$pandalanguage$pandac$IRNode* $tmp3489;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3477 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3477 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3479 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3478 = *$tmp3479;
        org$pandalanguage$pandac$IRNode** $tmp3480 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3481 = p_f1;
        *$tmp3480 = $tmp3481;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3481));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3478));
    }
    {
        panda$collections$ImmutableArray** $tmp3483 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3482 = *$tmp3483;
        panda$collections$ImmutableArray** $tmp3484 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3485 = p_f2;
        *$tmp3484 = $tmp3485;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3485));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3482));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3487 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3486 = *$tmp3487;
        org$pandalanguage$pandac$IRNode** $tmp3488 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3489 = p_f3;
        *$tmp3488 = $tmp3489;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3489));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3486));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$UInt64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3491;
    org$pandalanguage$pandac$Type* $tmp3494;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3490 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3490 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3492 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3491 = *$tmp3492;
        org$pandalanguage$pandac$Type** $tmp3493 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3494 = p_f1;
        *$tmp3493 = $tmp3494;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3494));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3491));
    }
    panda$core$UInt64* $tmp3495 = ((panda$core$UInt64*) ((char*) self->$data + 24));
    *$tmp3495 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3497;
    org$pandalanguage$pandac$IRNode* $tmp3500;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3496 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3496 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3498 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3497 = *$tmp3498;
        org$pandalanguage$pandac$IRNode** $tmp3499 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3500 = p_f1;
        *$tmp3499 = $tmp3500;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3500));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3497));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp3502;
    panda$core$String* $tmp3505;
    panda$collections$ImmutableArray* $tmp3506;
    panda$collections$ImmutableArray* $tmp3509;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3501 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3501 = p_f0;
    {
        panda$core$String** $tmp3503 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3502 = *$tmp3503;
        panda$core$String** $tmp3504 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3505 = p_f1;
        *$tmp3504 = $tmp3505;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3505));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3502));
    }
    {
        panda$collections$ImmutableArray** $tmp3507 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3506 = *$tmp3507;
        panda$collections$ImmutableArray** $tmp3508 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3509 = p_f2;
        *$tmp3508 = $tmp3509;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3509));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3506));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3511;
    org$pandalanguage$pandac$IRNode* $tmp3514;
    panda$collections$ImmutableArray* $tmp3515;
    panda$collections$ImmutableArray* $tmp3518;
    panda$collections$ImmutableArray* $tmp3519;
    panda$collections$ImmutableArray* $tmp3522;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3510 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3510 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3512 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3511 = *$tmp3512;
        org$pandalanguage$pandac$IRNode** $tmp3513 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3514 = p_f1;
        *$tmp3513 = $tmp3514;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3514));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3511));
    }
    {
        panda$collections$ImmutableArray** $tmp3516 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3515 = *$tmp3516;
        panda$collections$ImmutableArray** $tmp3517 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3518 = p_f2;
        *$tmp3517 = $tmp3518;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3518));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3515));
    }
    {
        panda$collections$ImmutableArray** $tmp3520 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3519 = *$tmp3520;
        panda$collections$ImmutableArray** $tmp3521 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3522 = p_f3;
        *$tmp3521 = $tmp3522;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3522));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3519));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$MethodRef* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3524;
    org$pandalanguage$pandac$Type* $tmp3527;
    org$pandalanguage$pandac$IRNode* $tmp3528;
    org$pandalanguage$pandac$IRNode* $tmp3531;
    org$pandalanguage$pandac$MethodRef* $tmp3532;
    org$pandalanguage$pandac$MethodRef* $tmp3535;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3523 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3523 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3525 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3524 = *$tmp3525;
        org$pandalanguage$pandac$Type** $tmp3526 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3527 = p_f1;
        *$tmp3526 = $tmp3527;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3527));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3524));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3529 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3528 = *$tmp3529;
        org$pandalanguage$pandac$IRNode** $tmp3530 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3531 = p_f2;
        *$tmp3530 = $tmp3531;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3531));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3528));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp3533 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 32));
        $tmp3532 = *$tmp3533;
        org$pandalanguage$pandac$MethodRef** $tmp3534 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 32));
        $tmp3535 = p_f3;
        *$tmp3534 = $tmp3535;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3535));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3532));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3538;
    org$pandalanguage$pandac$IRNode* $tmp3541;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3536 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3536 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp3537 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp3537 = p_f1;
    {
        org$pandalanguage$pandac$IRNode** $tmp3539 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3538 = *$tmp3539;
        org$pandalanguage$pandac$IRNode** $tmp3540 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3541 = p_f2;
        *$tmp3540 = $tmp3541;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3541));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3538));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp3543;
    panda$core$String* $tmp3546;
    org$pandalanguage$pandac$IRNode* $tmp3547;
    org$pandalanguage$pandac$IRNode* $tmp3550;
    org$pandalanguage$pandac$IRNode* $tmp3551;
    org$pandalanguage$pandac$IRNode* $tmp3554;
    panda$collections$ImmutableArray* $tmp3555;
    panda$collections$ImmutableArray* $tmp3558;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3542 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3542 = p_f0;
    {
        panda$core$String** $tmp3544 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3543 = *$tmp3544;
        panda$core$String** $tmp3545 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3546 = p_f1;
        *$tmp3545 = $tmp3546;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3546));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3543));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3548 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3547 = *$tmp3548;
        org$pandalanguage$pandac$IRNode** $tmp3549 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3550 = p_f2;
        *$tmp3549 = $tmp3550;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3550));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3547));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3552 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3551 = *$tmp3552;
        org$pandalanguage$pandac$IRNode** $tmp3553 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3554 = p_f3;
        *$tmp3553 = $tmp3554;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3554));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3551));
    }
    {
        panda$collections$ImmutableArray** $tmp3556 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3555 = *$tmp3556;
        panda$collections$ImmutableArray** $tmp3557 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3558 = p_f4;
        *$tmp3557 = $tmp3558;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3558));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3555));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Real64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3560;
    org$pandalanguage$pandac$Type* $tmp3563;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3559 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3559 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3561 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3560 = *$tmp3561;
        org$pandalanguage$pandac$Type** $tmp3562 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3563 = p_f1;
        *$tmp3562 = $tmp3563;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3563));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3560));
    }
    panda$core$Real64* $tmp3564 = ((panda$core$Real64*) ((char*) self->$data + 24));
    *$tmp3564 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3566;
    org$pandalanguage$pandac$IRNode* $tmp3569;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3565 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3565 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3567 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3566 = *$tmp3567;
        org$pandalanguage$pandac$IRNode** $tmp3568 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3569 = p_f1;
        *$tmp3568 = $tmp3569;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3569));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3566));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Int64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3571;
    org$pandalanguage$pandac$Type* $tmp3574;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3570 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3570 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3572 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3571 = *$tmp3572;
        org$pandalanguage$pandac$Type** $tmp3573 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3574 = p_f1;
        *$tmp3573 = $tmp3574;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3574));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3571));
    }
    panda$core$Int64* $tmp3575 = ((panda$core$Int64*) ((char*) self->$data + 24));
    *$tmp3575 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$core$Int64 p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3576;
    org$pandalanguage$pandac$IRNode* $tmp3579;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3577 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3576 = *$tmp3577;
        org$pandalanguage$pandac$IRNode** $tmp3578 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3579 = p_f0;
        *$tmp3578 = $tmp3579;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3579));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3576));
    }
    panda$core$Int64* $tmp3580 = ((panda$core$Int64*) ((char*) self->$data + 8));
    *$tmp3580 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp3582;
    panda$core$String* $tmp3585;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3581 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3581 = p_f0;
    {
        panda$core$String** $tmp3583 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3582 = *$tmp3583;
        panda$core$String** $tmp3584 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3585 = p_f1;
        *$tmp3584 = $tmp3585;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3585));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3582));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3587;
    org$pandalanguage$pandac$IRNode* $tmp3590;
    org$pandalanguage$pandac$IRNode* $tmp3591;
    org$pandalanguage$pandac$IRNode* $tmp3594;
    org$pandalanguage$pandac$IRNode* $tmp3595;
    org$pandalanguage$pandac$IRNode* $tmp3598;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3586 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3586 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3588 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3587 = *$tmp3588;
        org$pandalanguage$pandac$IRNode** $tmp3589 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3590 = p_f1;
        *$tmp3589 = $tmp3590;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3590));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3587));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3592 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3591 = *$tmp3592;
        org$pandalanguage$pandac$IRNode** $tmp3593 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3594 = p_f2;
        *$tmp3593 = $tmp3594;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3594));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3591));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3596 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3595 = *$tmp3596;
        org$pandalanguage$pandac$IRNode** $tmp3597 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3598 = p_f3;
        *$tmp3597 = $tmp3598;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3598));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3595));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3600;
    org$pandalanguage$pandac$Type* $tmp3603;
    org$pandalanguage$pandac$IRNode* $tmp3604;
    org$pandalanguage$pandac$IRNode* $tmp3607;
    panda$collections$ImmutableArray* $tmp3608;
    panda$collections$ImmutableArray* $tmp3611;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3599 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3599 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3601 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3600 = *$tmp3601;
        org$pandalanguage$pandac$Type** $tmp3602 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3603 = p_f1;
        *$tmp3602 = $tmp3603;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3603));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3600));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3605 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3604 = *$tmp3605;
        org$pandalanguage$pandac$IRNode** $tmp3606 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3607 = p_f2;
        *$tmp3606 = $tmp3607;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3607));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3604));
    }
    {
        panda$collections$ImmutableArray** $tmp3609 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3608 = *$tmp3609;
        panda$collections$ImmutableArray** $tmp3610 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3611 = p_f3;
        *$tmp3610 = $tmp3611;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3611));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3608));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTpanda$core$String$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$collections$ImmutableArray* $tmp3613;
    panda$collections$ImmutableArray* $tmp3616;
    org$pandalanguage$pandac$ASTNode* $tmp3617;
    org$pandalanguage$pandac$ASTNode* $tmp3620;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3612 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3612 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp3614 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3613 = *$tmp3614;
        panda$collections$ImmutableArray** $tmp3615 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3616 = p_f1;
        *$tmp3615 = $tmp3616;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3616));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3613));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp3618 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp3617 = *$tmp3618;
        org$pandalanguage$pandac$ASTNode** $tmp3619 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp3620 = p_f2;
        *$tmp3619 = $tmp3620;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3620));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3617));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3, panda$collections$ImmutableArray* p_f4) {
    org$pandalanguage$pandac$Type* $tmp3622;
    org$pandalanguage$pandac$Type* $tmp3625;
    org$pandalanguage$pandac$IRNode* $tmp3626;
    org$pandalanguage$pandac$IRNode* $tmp3629;
    panda$collections$ImmutableArray* $tmp3630;
    panda$collections$ImmutableArray* $tmp3633;
    panda$collections$ImmutableArray* $tmp3634;
    panda$collections$ImmutableArray* $tmp3637;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3621 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3621 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3623 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3622 = *$tmp3623;
        org$pandalanguage$pandac$Type** $tmp3624 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3625 = p_f1;
        *$tmp3624 = $tmp3625;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3625));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3622));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3627 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3626 = *$tmp3627;
        org$pandalanguage$pandac$IRNode** $tmp3628 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3629 = p_f2;
        *$tmp3628 = $tmp3629;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3629));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3626));
    }
    {
        panda$collections$ImmutableArray** $tmp3631 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3630 = *$tmp3631;
        panda$collections$ImmutableArray** $tmp3632 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3633 = p_f3;
        *$tmp3632 = $tmp3633;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3633));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3630));
    }
    {
        panda$collections$ImmutableArray** $tmp3635 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3634 = *$tmp3635;
        panda$collections$ImmutableArray** $tmp3636 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3637 = p_f4;
        *$tmp3636 = $tmp3637;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3637));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3634));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3639;
    org$pandalanguage$pandac$IRNode* $tmp3642;
    panda$collections$ImmutableArray* $tmp3643;
    panda$collections$ImmutableArray* $tmp3646;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3638 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3638 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3640 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3639 = *$tmp3640;
        org$pandalanguage$pandac$IRNode** $tmp3641 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3642 = p_f1;
        *$tmp3641 = $tmp3642;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3642));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3639));
    }
    {
        panda$collections$ImmutableArray** $tmp3644 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3643 = *$tmp3644;
        panda$collections$ImmutableArray** $tmp3645 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3646 = p_f2;
        *$tmp3645 = $tmp3646;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3646));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3643));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$IRNode* $tmp3648;
    org$pandalanguage$pandac$IRNode* $tmp3651;
    org$pandalanguage$pandac$IRNode* $tmp3652;
    org$pandalanguage$pandac$IRNode* $tmp3655;
    org$pandalanguage$pandac$IRNode* $tmp3657;
    org$pandalanguage$pandac$IRNode* $tmp3660;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3647 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3647 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3649 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3648 = *$tmp3649;
        org$pandalanguage$pandac$IRNode** $tmp3650 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3651 = p_f1;
        *$tmp3650 = $tmp3651;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3651));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3648));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3653 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3652 = *$tmp3653;
        org$pandalanguage$pandac$IRNode** $tmp3654 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3655 = p_f2;
        *$tmp3654 = $tmp3655;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3655));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3652));
    }
    panda$core$Bit* $tmp3656 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp3656 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp3658 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3657 = *$tmp3658;
        org$pandalanguage$pandac$IRNode** $tmp3659 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3660 = p_f4;
        *$tmp3659 = $tmp3660;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3660));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3657));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp3663;
    panda$collections$ImmutableArray* $tmp3666;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3661 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3661 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp3662 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp3662 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp3664 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3663 = *$tmp3664;
        panda$collections$ImmutableArray** $tmp3665 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3666 = p_f2;
        *$tmp3665 = $tmp3666;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3666));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3663));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$Type* p_f2) {
    panda$core$String* $tmp3668;
    panda$core$String* $tmp3671;
    org$pandalanguage$pandac$Type* $tmp3672;
    org$pandalanguage$pandac$Type* $tmp3675;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3667 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3667 = p_f0;
    {
        panda$core$String** $tmp3669 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3668 = *$tmp3669;
        panda$core$String** $tmp3670 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3671 = p_f1;
        *$tmp3670 = $tmp3671;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3671));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3668));
    }
    {
        org$pandalanguage$pandac$Type** $tmp3673 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp3672 = *$tmp3673;
        org$pandalanguage$pandac$Type** $tmp3674 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp3675 = p_f2;
        *$tmp3674 = $tmp3675;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3675));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3672));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable* p_f1) {
    org$pandalanguage$pandac$Variable* $tmp3677;
    org$pandalanguage$pandac$Variable* $tmp3680;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3676 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3676 = p_f0;
    {
        org$pandalanguage$pandac$Variable** $tmp3678 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3677 = *$tmp3678;
        org$pandalanguage$pandac$Variable** $tmp3679 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3680 = p_f1;
        *$tmp3679 = $tmp3680;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3680));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3677));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp3682;
    panda$core$String* $tmp3685;
    org$pandalanguage$pandac$IRNode* $tmp3686;
    org$pandalanguage$pandac$IRNode* $tmp3689;
    panda$collections$ImmutableArray* $tmp3690;
    panda$collections$ImmutableArray* $tmp3693;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3681 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3681 = p_f0;
    {
        panda$core$String** $tmp3683 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3682 = *$tmp3683;
        panda$core$String** $tmp3684 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3685 = p_f1;
        *$tmp3684 = $tmp3685;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3685));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3682));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3687 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3686 = *$tmp3687;
        org$pandalanguage$pandac$IRNode** $tmp3688 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3689 = p_f2;
        *$tmp3688 = $tmp3689;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3689));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3686));
    }
    {
        panda$collections$ImmutableArray** $tmp3691 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3690 = *$tmp3691;
        panda$collections$ImmutableArray** $tmp3692 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3693 = p_f3;
        *$tmp3692 = $tmp3693;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3693));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3690));
    }
}

