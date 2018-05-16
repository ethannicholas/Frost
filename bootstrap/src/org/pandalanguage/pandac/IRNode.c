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
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/MethodRef.h"
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


static panda$core$String $s1;
org$pandalanguage$pandac$IRNode$class_type org$pandalanguage$pandac$IRNode$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$IRNode$convert$R$panda$core$String, org$pandalanguage$pandac$IRNode$cleanup, org$pandalanguage$pandac$IRNode$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position, org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit} };

typedef org$pandalanguage$pandac$Type* (*$fn75)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn139)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn165)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn196)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn199)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn205)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn340)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn354)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn452)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn553)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn556)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn573)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn577)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn599)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn606)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn617)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn619)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn654)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn661)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn672)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn674)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn716)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn740)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn752)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn765)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn772)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn783)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn785)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn816)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn829)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn836)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn847)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn849)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn859)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn873)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn881)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn898)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn905)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn916)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn918)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn937)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn950)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn957)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn968)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn970)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn987)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn994)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1005)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1007)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1043)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1056)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1069)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1076)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1087)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1089)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1111)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1127)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1155)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1158)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1162)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1215)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1222)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1233)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1235)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1266)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1273)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1284)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1286)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1303)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1310)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1321)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1323)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1342)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1355)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1362)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1373)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1375)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1438)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1480)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1487)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1498)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1535)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1542)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1553)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1569)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1576)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1587)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn1648)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1674)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1707)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1789)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1801)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1833)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1840)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1851)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1883)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1903)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1940)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1947)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1958)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2041)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2048)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2059)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2103)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2110)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2121)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2137)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2144)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2155)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2182)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2226)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2275)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2282)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2293)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2448)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2474)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2501)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn2640)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2647)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2658)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x4e\x6f\x64\x65", 31, -8857975469778350849, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6d\x65\x74\x68\x6f\x64\x3e", 8, 17378158564789264, NULL };
static panda$core$String $s1404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s1406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s1419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s1501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x79\x20\x7b\x0a", 6, 2292679699717, NULL };
static panda$core$String $s1556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x66\x69\x6e\x61\x6c\x6c\x79\x20\x7b\x0a", 12, -1355183944487068280, NULL };
static panda$core$String $s1590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s1612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s1633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x4e\x54\x36\x34\x5f\x57\x52\x41\x50\x28", 11, -7093166379287162761, NULL };
static panda$core$String $s1661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1679 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1717 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x2a\x2d", 24, 1541443738414735436, NULL };
static panda$core$String $s1767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s1769 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s1791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1885 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x2a\x20\x61\x6e\x64\x20\x74\x68\x65\x6e\x3a\x20", 14, -3277098584181619124, NULL };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1905 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1908 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1928 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1930 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s1961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1996 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1998 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s2009 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2011 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2032 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s2062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2091 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s2093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s2158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s2228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s2262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s2265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s2327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s2345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s2371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s2409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s2414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s2417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s2476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s2529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s2532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s2534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s2560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s2562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s2564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s2593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s2597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s2600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s2630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

org$pandalanguage$pandac$Type* org$pandalanguage$pandac$IRNode$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$71_95 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp6;
    org$pandalanguage$pandac$Type* type8 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn9;
    org$pandalanguage$pandac$Type* $tmp11;
    org$pandalanguage$pandac$Type* type15 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn16;
    org$pandalanguage$pandac$Type* $tmp18;
    org$pandalanguage$pandac$Type* type22 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn23;
    org$pandalanguage$pandac$Type* $tmp25;
    org$pandalanguage$pandac$Type* type29 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn30;
    org$pandalanguage$pandac$Type* $tmp32;
    org$pandalanguage$pandac$ChoiceEntry* ce36 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn37;
    org$pandalanguage$pandac$Type* $tmp39;
    org$pandalanguage$pandac$Type* $tmp40;
    org$pandalanguage$pandac$ChoiceEntry* ce45 = NULL;
    panda$core$Int64 field47;
    org$pandalanguage$pandac$Type* $finallyReturn48;
    org$pandalanguage$pandac$Type* $tmp50;
    panda$core$Object* $tmp51;
    org$pandalanguage$pandac$Type* type56 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn57;
    org$pandalanguage$pandac$Type* $tmp59;
    org$pandalanguage$pandac$Type* type63 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn64;
    org$pandalanguage$pandac$Type* $tmp66;
    org$pandalanguage$pandac$IRNode* expr70 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn71;
    org$pandalanguage$pandac$Type* $tmp73;
    org$pandalanguage$pandac$Type* $tmp74;
    org$pandalanguage$pandac$Type* type80 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn81;
    org$pandalanguage$pandac$Type* $tmp83;
    org$pandalanguage$pandac$Type* type87 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn88;
    org$pandalanguage$pandac$Type* $tmp90;
    org$pandalanguage$pandac$Type* $finallyReturn93;
    org$pandalanguage$pandac$Type* $tmp95;
    org$pandalanguage$pandac$Type* $tmp96;
    org$pandalanguage$pandac$Type* $finallyReturn100;
    org$pandalanguage$pandac$Type* $tmp102;
    org$pandalanguage$pandac$Type* $tmp103;
    org$pandalanguage$pandac$IRNode* ref108 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn109;
    org$pandalanguage$pandac$Type* $tmp111;
    org$pandalanguage$pandac$Type* $tmp112;
    org$pandalanguage$pandac$Type$Kind $tmp115;
    org$pandalanguage$pandac$Position $tmp116;
    org$pandalanguage$pandac$Type* type120 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn121;
    org$pandalanguage$pandac$Type* $tmp123;
    org$pandalanguage$pandac$Type* type127 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn128;
    org$pandalanguage$pandac$Type* $tmp130;
    org$pandalanguage$pandac$IRNode* base134 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn135;
    org$pandalanguage$pandac$Type* $tmp137;
    org$pandalanguage$pandac$Type* $tmp138;
    org$pandalanguage$pandac$Type* type144 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn145;
    org$pandalanguage$pandac$Type* $tmp147;
    org$pandalanguage$pandac$Type* type151 = NULL;
    panda$core$Int64 id153;
    org$pandalanguage$pandac$Type* $finallyReturn154;
    org$pandalanguage$pandac$Type* $tmp156;
    org$pandalanguage$pandac$IRNode* base160 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn161;
    org$pandalanguage$pandac$Type* $tmp163;
    org$pandalanguage$pandac$Type* $tmp164;
    org$pandalanguage$pandac$Type* type170 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn171;
    org$pandalanguage$pandac$Type* $tmp173;
    org$pandalanguage$pandac$Type* $finallyReturn176;
    org$pandalanguage$pandac$Type* $tmp178;
    org$pandalanguage$pandac$Type* $tmp179;
    org$pandalanguage$pandac$Type* type184 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn185;
    org$pandalanguage$pandac$Type* $tmp187;
    org$pandalanguage$pandac$IRNode* ifTrue191 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse193 = NULL;
    org$pandalanguage$pandac$Type* $tmp195;
    org$pandalanguage$pandac$Type* $tmp198;
    org$pandalanguage$pandac$Type* $finallyReturn201;
    org$pandalanguage$pandac$Type* $tmp203;
    org$pandalanguage$pandac$Type* $tmp204;
    org$pandalanguage$pandac$Type* $finallyReturn209;
    org$pandalanguage$pandac$Type* $tmp211;
    org$pandalanguage$pandac$Type* $tmp212;
    org$pandalanguage$pandac$Type* $finallyReturn216;
    org$pandalanguage$pandac$Type* $tmp218;
    org$pandalanguage$pandac$Type* $tmp219;
    org$pandalanguage$pandac$Type* type224 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn225;
    org$pandalanguage$pandac$Type* $tmp227;
    org$pandalanguage$pandac$Type* type231 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn232;
    org$pandalanguage$pandac$Type* $tmp234;
    org$pandalanguage$pandac$Type* $finallyReturn237;
    org$pandalanguage$pandac$Type* $tmp239;
    org$pandalanguage$pandac$Type* $tmp240;
    org$pandalanguage$pandac$Type* $finallyReturn244;
    org$pandalanguage$pandac$Type* $tmp246;
    org$pandalanguage$pandac$Type* $tmp247;
    org$pandalanguage$pandac$Variable* variable252 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn253;
    org$pandalanguage$pandac$Type* $tmp255;
    int $tmp4;
    {
        $tmp6 = self;
        $match$71_95 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp7.value) {
        {
            org$pandalanguage$pandac$Type** $tmp9 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_95->$data + 16));
            type8 = *$tmp9;
            $tmp11 = type8;
            $finallyReturn9 = $tmp11;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
            $tmp4 = 0;
            goto $l2;
            $l12:;
            return $finallyReturn9;
        }
        }
        else {
        panda$core$Bit $tmp14 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp14.value) {
        {
            org$pandalanguage$pandac$Type** $tmp16 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_95->$data + 16));
            type15 = *$tmp16;
            $tmp18 = type15;
            $finallyReturn16 = $tmp18;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp18));
            $tmp4 = 1;
            goto $l2;
            $l19:;
            return $finallyReturn16;
        }
        }
        else {
        panda$core$Bit $tmp21 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp21.value) {
        {
            org$pandalanguage$pandac$Type** $tmp23 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_95->$data + 16));
            type22 = *$tmp23;
            $tmp25 = type22;
            $finallyReturn23 = $tmp25;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp25));
            $tmp4 = 2;
            goto $l2;
            $l26:;
            return $finallyReturn23;
        }
        }
        else {
        panda$core$Bit $tmp28 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp28.value) {
        {
            org$pandalanguage$pandac$Type** $tmp30 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_95->$data + 24));
            type29 = *$tmp30;
            $tmp32 = type29;
            $finallyReturn30 = $tmp32;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp32));
            $tmp4 = 3;
            goto $l2;
            $l33:;
            return $finallyReturn30;
        }
        }
        else {
        panda$core$Bit $tmp35 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp35.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp37 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$71_95->$data + 16));
            ce36 = *$tmp37;
            org$pandalanguage$pandac$Type* $tmp41 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp40 = $tmp41;
            $tmp39 = $tmp40;
            $finallyReturn37 = $tmp39;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp39));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
            $tmp4 = 4;
            goto $l2;
            $l42:;
            return $finallyReturn37;
        }
        }
        else {
        panda$core$Bit $tmp44 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp44.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp46 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$71_95->$data + 24));
            ce45 = *$tmp46;
            panda$core$Int64* $tmp48 = ((panda$core$Int64*) ((char*) $match$71_95->$data + 32));
            field47 = *$tmp48;
            panda$core$Object* $tmp52 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(ce45->fields, field47);
            $tmp51 = $tmp52;
            $tmp50 = ((org$pandalanguage$pandac$Type*) $tmp51);
            $finallyReturn48 = $tmp50;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp50));
            panda$core$Panda$unref$panda$core$Object($tmp51);
            $tmp4 = 5;
            goto $l2;
            $l53:;
            return $finallyReturn48;
        }
        }
        else {
        panda$core$Bit $tmp55 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp55.value) {
        {
            org$pandalanguage$pandac$Type** $tmp57 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_95->$data + 16));
            type56 = *$tmp57;
            $tmp59 = type56;
            $finallyReturn57 = $tmp59;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp59));
            $tmp4 = 6;
            goto $l2;
            $l60:;
            return $finallyReturn57;
        }
        }
        else {
        panda$core$Bit $tmp62 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp62.value) {
        {
            org$pandalanguage$pandac$Type** $tmp64 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_95->$data + 16));
            type63 = *$tmp64;
            $tmp66 = type63;
            $finallyReturn64 = $tmp66;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp66));
            $tmp4 = 7;
            goto $l2;
            $l67:;
            return $finallyReturn64;
        }
        }
        else {
        panda$core$Bit $tmp69 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp69.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp71 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$71_95->$data + 0));
            expr70 = *$tmp71;
            org$pandalanguage$pandac$Type* $tmp76 = (($fn75) expr70->$class->vtable[2])(expr70);
            $tmp74 = $tmp76;
            $tmp73 = $tmp74;
            $finallyReturn71 = $tmp73;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp73));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
            $tmp4 = 8;
            goto $l2;
            $l77:;
            return $finallyReturn71;
        }
        }
        else {
        panda$core$Bit $tmp79 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp79.value) {
        {
            org$pandalanguage$pandac$Type** $tmp81 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_95->$data + 16));
            type80 = *$tmp81;
            $tmp83 = type80;
            $finallyReturn81 = $tmp83;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp83));
            $tmp4 = 9;
            goto $l2;
            $l84:;
            return $finallyReturn81;
        }
        }
        else {
        panda$core$Bit $tmp86 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp86.value) {
        {
            org$pandalanguage$pandac$Type** $tmp88 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_95->$data + 16));
            type87 = *$tmp88;
            $tmp90 = type87;
            $finallyReturn88 = $tmp90;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp90));
            $tmp4 = 10;
            goto $l2;
            $l91:;
            return $finallyReturn88;
        }
        }
        else {
        panda$core$Bit $tmp93 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp93.value) {
        {
            org$pandalanguage$pandac$Type* $tmp97 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            $tmp96 = $tmp97;
            $tmp95 = $tmp96;
            $finallyReturn93 = $tmp95;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp95));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp96));
            $tmp4 = 11;
            goto $l2;
            $l98:;
            return $finallyReturn93;
        }
        }
        else {
        panda$core$Bit $tmp100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp100.value) {
        {
            org$pandalanguage$pandac$Type* $tmp104 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            $tmp103 = $tmp104;
            $tmp102 = $tmp103;
            $finallyReturn100 = $tmp102;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp102));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp103));
            $tmp4 = 12;
            goto $l2;
            $l105:;
            return $finallyReturn100;
        }
        }
        else {
        panda$core$Bit $tmp107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp107.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp109 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$71_95->$data + 16));
            ref108 = *$tmp109;
            org$pandalanguage$pandac$Type* $tmp113 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
            org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp115, ((panda$core$Int64) { 6 }));
            org$pandalanguage$pandac$Position$init(&$tmp116);
            org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp113, &$s114, $tmp115, $tmp116, ((panda$core$Bit) { true }));
            $tmp112 = $tmp113;
            $tmp111 = $tmp112;
            $finallyReturn109 = $tmp111;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp111));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp112));
            $tmp4 = 13;
            goto $l2;
            $l117:;
            return $finallyReturn109;
        }
        }
        else {
        panda$core$Bit $tmp119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp119.value) {
        {
            org$pandalanguage$pandac$Type** $tmp121 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_95->$data + 16));
            type120 = *$tmp121;
            $tmp123 = type120;
            $finallyReturn121 = $tmp123;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp123));
            $tmp4 = 14;
            goto $l2;
            $l124:;
            return $finallyReturn121;
        }
        }
        else {
        panda$core$Bit $tmp126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp126.value) {
        {
            org$pandalanguage$pandac$Type** $tmp128 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_95->$data + 16));
            type127 = *$tmp128;
            $tmp130 = type127;
            $finallyReturn128 = $tmp130;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp130));
            $tmp4 = 15;
            goto $l2;
            $l131:;
            return $finallyReturn128;
        }
        }
        else {
        panda$core$Bit $tmp133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp133.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp135 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$71_95->$data + 24));
            base134 = *$tmp135;
            org$pandalanguage$pandac$Type* $tmp140 = (($fn139) base134->$class->vtable[2])(base134);
            $tmp138 = $tmp140;
            $tmp137 = $tmp138;
            $finallyReturn135 = $tmp137;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp137));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp138));
            $tmp4 = 16;
            goto $l2;
            $l141:;
            return $finallyReturn135;
        }
        }
        else {
        panda$core$Bit $tmp143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp143.value) {
        {
            org$pandalanguage$pandac$Type** $tmp145 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_95->$data + 16));
            type144 = *$tmp145;
            $tmp147 = type144;
            $finallyReturn145 = $tmp147;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp147));
            $tmp4 = 17;
            goto $l2;
            $l148:;
            return $finallyReturn145;
        }
        }
        else {
        panda$core$Bit $tmp150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp150.value) {
        {
            org$pandalanguage$pandac$Type** $tmp152 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_95->$data + 16));
            type151 = *$tmp152;
            panda$core$Int64* $tmp154 = ((panda$core$Int64*) ((char*) $match$71_95->$data + 24));
            id153 = *$tmp154;
            $tmp156 = type151;
            $finallyReturn154 = $tmp156;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp156));
            $tmp4 = 18;
            goto $l2;
            $l157:;
            return $finallyReturn154;
        }
        }
        else {
        panda$core$Bit $tmp159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp159.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp161 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$71_95->$data + 0));
            base160 = *$tmp161;
            org$pandalanguage$pandac$Type* $tmp166 = (($fn165) base160->$class->vtable[2])(base160);
            $tmp164 = $tmp166;
            $tmp163 = $tmp164;
            $finallyReturn161 = $tmp163;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp163));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp164));
            $tmp4 = 19;
            goto $l2;
            $l167:;
            return $finallyReturn161;
        }
        }
        else {
        panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp169.value) {
        {
            org$pandalanguage$pandac$Type** $tmp171 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_95->$data + 16));
            type170 = *$tmp171;
            $tmp173 = type170;
            $finallyReturn171 = $tmp173;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp173));
            $tmp4 = 20;
            goto $l2;
            $l174:;
            return $finallyReturn171;
        }
        }
        else {
        panda$core$Bit $tmp176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp176.value) {
        {
            org$pandalanguage$pandac$Type* $tmp180 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
            $tmp179 = $tmp180;
            $tmp178 = $tmp179;
            $finallyReturn176 = $tmp178;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp178));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp179));
            $tmp4 = 21;
            goto $l2;
            $l181:;
            return $finallyReturn176;
        }
        }
        else {
        panda$core$Bit $tmp183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp183.value) {
        {
            org$pandalanguage$pandac$Type** $tmp185 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_95->$data + 16));
            type184 = *$tmp185;
            $tmp187 = type184;
            $finallyReturn185 = $tmp187;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp187));
            $tmp4 = 22;
            goto $l2;
            $l188:;
            return $finallyReturn185;
        }
        }
        else {
        panda$core$Bit $tmp190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp190.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp192 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$71_95->$data + 24));
            ifTrue191 = *$tmp192;
            org$pandalanguage$pandac$IRNode** $tmp194 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$71_95->$data + 32));
            ifFalse193 = *$tmp194;
            org$pandalanguage$pandac$Type* $tmp197 = (($fn196) ifTrue191->$class->vtable[2])(ifTrue191);
            $tmp195 = $tmp197;
            org$pandalanguage$pandac$Type* $tmp200 = (($fn199) ifFalse193->$class->vtable[2])(ifFalse193);
            $tmp198 = $tmp200;
            panda$core$Bit $tmp201 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp195, $tmp198);
            PANDA_ASSERT($tmp201.value);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp198));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp195));
            org$pandalanguage$pandac$Type* $tmp206 = (($fn205) ifTrue191->$class->vtable[2])(ifTrue191);
            $tmp204 = $tmp206;
            $tmp203 = $tmp204;
            $finallyReturn201 = $tmp203;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp203));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp204));
            $tmp4 = 23;
            goto $l2;
            $l207:;
            return $finallyReturn201;
        }
        }
        else {
        panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp209.value) {
        {
            org$pandalanguage$pandac$Type* $tmp213 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            $tmp212 = $tmp213;
            $tmp211 = $tmp212;
            $finallyReturn209 = $tmp211;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp211));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp212));
            $tmp4 = 24;
            goto $l2;
            $l214:;
            return $finallyReturn209;
        }
        }
        else {
        panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp216.value) {
        {
            org$pandalanguage$pandac$Type* $tmp220 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp219 = $tmp220;
            $tmp218 = $tmp219;
            $finallyReturn216 = $tmp218;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp218));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp219));
            $tmp4 = 25;
            goto $l2;
            $l221:;
            return $finallyReturn216;
        }
        }
        else {
        panda$core$Bit $tmp223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp223.value) {
        {
            org$pandalanguage$pandac$Type** $tmp225 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_95->$data + 16));
            type224 = *$tmp225;
            $tmp227 = type224;
            $finallyReturn225 = $tmp227;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp227));
            $tmp4 = 26;
            goto $l2;
            $l228:;
            return $finallyReturn225;
        }
        }
        else {
        panda$core$Bit $tmp230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp230.value) {
        {
            org$pandalanguage$pandac$Type** $tmp232 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_95->$data + 16));
            type231 = *$tmp232;
            $tmp234 = type231;
            $finallyReturn232 = $tmp234;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp234));
            $tmp4 = 27;
            goto $l2;
            $l235:;
            return $finallyReturn232;
        }
        }
        else {
        panda$core$Bit $tmp237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp237.value) {
        {
            org$pandalanguage$pandac$Type* $tmp241 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp240 = $tmp241;
            $tmp239 = $tmp240;
            $finallyReturn237 = $tmp239;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp239));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp240));
            $tmp4 = 28;
            goto $l2;
            $l242:;
            return $finallyReturn237;
        }
        }
        else {
        panda$core$Bit $tmp244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp244.value) {
        {
            org$pandalanguage$pandac$Type* $tmp248 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp247 = $tmp248;
            $tmp246 = $tmp247;
            $finallyReturn244 = $tmp246;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp246));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp247));
            $tmp4 = 29;
            goto $l2;
            $l249:;
            return $finallyReturn244;
        }
        }
        else {
        panda$core$Bit $tmp251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp251.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp253 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$71_95->$data + 16));
            variable252 = *$tmp253;
            $tmp255 = variable252->type;
            $finallyReturn253 = $tmp255;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp255));
            $tmp4 = 30;
            goto $l2;
            $l256:;
            return $finallyReturn253;
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
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    switch ($tmp4) {
        case 16: goto $l141;
        case 26: goto $l228;
        case 24: goto $l214;
        case 8: goto $l77;
        case 3: goto $l33;
        case 27: goto $l235;
        case 13: goto $l117;
        case 30: goto $l256;
        case 10: goto $l91;
        case 5: goto $l53;
        case 7: goto $l67;
        case 14: goto $l124;
        case 11: goto $l98;
        case 21: goto $l181;
        case 29: goto $l249;
        case 1: goto $l19;
        case 2: goto $l26;
        case 0: goto $l12;
        case 19: goto $l167;
        case 9: goto $l84;
        case -1: goto $l258;
        case 23: goto $l207;
        case 28: goto $l242;
        case 6: goto $l60;
        case 12: goto $l105;
        case 22: goto $l188;
        case 25: goto $l221;
        case 4: goto $l42;
        case 18: goto $l157;
        case 15: goto $l131;
        case 17: goto $l148;
        case 20: goto $l174;
    }
    $l258:;
}
org$pandalanguage$pandac$Position org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$141_9262 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp263;
    org$pandalanguage$pandac$Position position265;
    org$pandalanguage$pandac$Position $finallyReturn266;
    org$pandalanguage$pandac$Position position271;
    org$pandalanguage$pandac$Position $finallyReturn272;
    org$pandalanguage$pandac$Position position277;
    org$pandalanguage$pandac$Position $finallyReturn278;
    org$pandalanguage$pandac$Position position283;
    org$pandalanguage$pandac$Position $finallyReturn284;
    org$pandalanguage$pandac$Position position289;
    org$pandalanguage$pandac$Position $finallyReturn290;
    org$pandalanguage$pandac$Position position295;
    org$pandalanguage$pandac$Position $finallyReturn296;
    org$pandalanguage$pandac$Position position301;
    org$pandalanguage$pandac$Position $finallyReturn302;
    org$pandalanguage$pandac$Position position307;
    org$pandalanguage$pandac$Position $finallyReturn308;
    org$pandalanguage$pandac$Position position313;
    org$pandalanguage$pandac$Position $finallyReturn314;
    org$pandalanguage$pandac$Position position319;
    org$pandalanguage$pandac$Position $finallyReturn320;
    org$pandalanguage$pandac$Position position325;
    org$pandalanguage$pandac$Position $finallyReturn326;
    org$pandalanguage$pandac$Position position331;
    org$pandalanguage$pandac$Position $finallyReturn332;
    org$pandalanguage$pandac$IRNode* target337 = NULL;
    org$pandalanguage$pandac$Position $finallyReturn338;
    org$pandalanguage$pandac$Position position345;
    org$pandalanguage$pandac$Position $finallyReturn346;
    org$pandalanguage$pandac$IRNode* expr351 = NULL;
    org$pandalanguage$pandac$Position $finallyReturn352;
    org$pandalanguage$pandac$Position position359;
    org$pandalanguage$pandac$Position $finallyReturn360;
    org$pandalanguage$pandac$Position position365;
    org$pandalanguage$pandac$Position $finallyReturn366;
    org$pandalanguage$pandac$Position position371;
    org$pandalanguage$pandac$Position $finallyReturn372;
    org$pandalanguage$pandac$Position position377;
    org$pandalanguage$pandac$Position $finallyReturn378;
    org$pandalanguage$pandac$Position position383;
    org$pandalanguage$pandac$Position $finallyReturn384;
    org$pandalanguage$pandac$Position position389;
    org$pandalanguage$pandac$Position $finallyReturn390;
    org$pandalanguage$pandac$Position position395;
    org$pandalanguage$pandac$Position $finallyReturn396;
    org$pandalanguage$pandac$Position position401;
    org$pandalanguage$pandac$Position $finallyReturn402;
    org$pandalanguage$pandac$Position position407;
    org$pandalanguage$pandac$Position $finallyReturn408;
    org$pandalanguage$pandac$Position position413;
    org$pandalanguage$pandac$Position $finallyReturn414;
    org$pandalanguage$pandac$Position position419;
    org$pandalanguage$pandac$Position $finallyReturn420;
    org$pandalanguage$pandac$Position position425;
    org$pandalanguage$pandac$Position $finallyReturn426;
    org$pandalanguage$pandac$Position position431;
    org$pandalanguage$pandac$Position $finallyReturn432;
    org$pandalanguage$pandac$Position position437;
    org$pandalanguage$pandac$Position $finallyReturn438;
    org$pandalanguage$pandac$Position position443;
    org$pandalanguage$pandac$Position $finallyReturn444;
    org$pandalanguage$pandac$IRNode* base449 = NULL;
    org$pandalanguage$pandac$Position $finallyReturn450;
    org$pandalanguage$pandac$Position position457;
    org$pandalanguage$pandac$Position $finallyReturn458;
    org$pandalanguage$pandac$Position position463;
    org$pandalanguage$pandac$Position $finallyReturn464;
    org$pandalanguage$pandac$Position position469;
    org$pandalanguage$pandac$Position $finallyReturn470;
    org$pandalanguage$pandac$Position position475;
    org$pandalanguage$pandac$Position $finallyReturn476;
    org$pandalanguage$pandac$Position position481;
    org$pandalanguage$pandac$Position $finallyReturn482;
    org$pandalanguage$pandac$Position position487;
    org$pandalanguage$pandac$Position $finallyReturn488;
    org$pandalanguage$pandac$Position position493;
    org$pandalanguage$pandac$Position $finallyReturn494;
    org$pandalanguage$pandac$Position position499;
    org$pandalanguage$pandac$Position $finallyReturn500;
    org$pandalanguage$pandac$Position position505;
    org$pandalanguage$pandac$Position $finallyReturn506;
    org$pandalanguage$pandac$Position position511;
    org$pandalanguage$pandac$Position $finallyReturn512;
    org$pandalanguage$pandac$Position position517;
    org$pandalanguage$pandac$Position $finallyReturn518;
    org$pandalanguage$pandac$Position position523;
    org$pandalanguage$pandac$Position $finallyReturn524;
    org$pandalanguage$pandac$Position position529;
    org$pandalanguage$pandac$Position $finallyReturn530;
    org$pandalanguage$pandac$Position position535;
    org$pandalanguage$pandac$Position $finallyReturn536;
    int $tmp261;
    {
        $tmp263 = self;
        $match$141_9262 = $tmp263;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp263));
        panda$core$Bit $tmp264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp264.value) {
        {
            org$pandalanguage$pandac$Position* $tmp266 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position265 = *$tmp266;
            $finallyReturn266 = position265;
            $tmp261 = 0;
            goto $l259;
            $l268:;
            return $finallyReturn266;
        }
        }
        else {
        panda$core$Bit $tmp270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp270.value) {
        {
            org$pandalanguage$pandac$Position* $tmp272 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position271 = *$tmp272;
            $finallyReturn272 = position271;
            $tmp261 = 1;
            goto $l259;
            $l274:;
            return $finallyReturn272;
        }
        }
        else {
        panda$core$Bit $tmp276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp276.value) {
        {
            org$pandalanguage$pandac$Position* $tmp278 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position277 = *$tmp278;
            $finallyReturn278 = position277;
            $tmp261 = 2;
            goto $l259;
            $l280:;
            return $finallyReturn278;
        }
        }
        else {
        panda$core$Bit $tmp282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp282.value) {
        {
            org$pandalanguage$pandac$Position* $tmp284 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position283 = *$tmp284;
            $finallyReturn284 = position283;
            $tmp261 = 3;
            goto $l259;
            $l286:;
            return $finallyReturn284;
        }
        }
        else {
        panda$core$Bit $tmp288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp288.value) {
        {
            org$pandalanguage$pandac$Position* $tmp290 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position289 = *$tmp290;
            $finallyReturn290 = position289;
            $tmp261 = 4;
            goto $l259;
            $l292:;
            return $finallyReturn290;
        }
        }
        else {
        panda$core$Bit $tmp294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp294.value) {
        {
            org$pandalanguage$pandac$Position* $tmp296 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position295 = *$tmp296;
            $finallyReturn296 = position295;
            $tmp261 = 5;
            goto $l259;
            $l298:;
            return $finallyReturn296;
        }
        }
        else {
        panda$core$Bit $tmp300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp300.value) {
        {
            org$pandalanguage$pandac$Position* $tmp302 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position301 = *$tmp302;
            $finallyReturn302 = position301;
            $tmp261 = 6;
            goto $l259;
            $l304:;
            return $finallyReturn302;
        }
        }
        else {
        panda$core$Bit $tmp306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp306.value) {
        {
            org$pandalanguage$pandac$Position* $tmp308 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position307 = *$tmp308;
            $finallyReturn308 = position307;
            $tmp261 = 7;
            goto $l259;
            $l310:;
            return $finallyReturn308;
        }
        }
        else {
        panda$core$Bit $tmp312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp312.value) {
        {
            org$pandalanguage$pandac$Position* $tmp314 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position313 = *$tmp314;
            $finallyReturn314 = position313;
            $tmp261 = 8;
            goto $l259;
            $l316:;
            return $finallyReturn314;
        }
        }
        else {
        panda$core$Bit $tmp318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp318.value) {
        {
            org$pandalanguage$pandac$Position* $tmp320 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position319 = *$tmp320;
            $finallyReturn320 = position319;
            $tmp261 = 9;
            goto $l259;
            $l322:;
            return $finallyReturn320;
        }
        }
        else {
        panda$core$Bit $tmp324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp324.value) {
        {
            org$pandalanguage$pandac$Position* $tmp326 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position325 = *$tmp326;
            $finallyReturn326 = position325;
            $tmp261 = 10;
            goto $l259;
            $l328:;
            return $finallyReturn326;
        }
        }
        else {
        panda$core$Bit $tmp330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp330.value) {
        {
            org$pandalanguage$pandac$Position* $tmp332 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position331 = *$tmp332;
            $finallyReturn332 = position331;
            $tmp261 = 11;
            goto $l259;
            $l334:;
            return $finallyReturn332;
        }
        }
        else {
        panda$core$Bit $tmp336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp336.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp338 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$141_9262->$data + 0));
            target337 = *$tmp338;
            org$pandalanguage$pandac$Position $tmp341 = (($fn340) target337->$class->vtable[3])(target337);
            $finallyReturn338 = $tmp341;
            $tmp261 = 12;
            goto $l259;
            $l342:;
            return $finallyReturn338;
        }
        }
        else {
        panda$core$Bit $tmp344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp344.value) {
        {
            org$pandalanguage$pandac$Position* $tmp346 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position345 = *$tmp346;
            $finallyReturn346 = position345;
            $tmp261 = 13;
            goto $l259;
            $l348:;
            return $finallyReturn346;
        }
        }
        else {
        panda$core$Bit $tmp350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp350.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp352 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$141_9262->$data + 0));
            expr351 = *$tmp352;
            org$pandalanguage$pandac$Position $tmp355 = (($fn354) expr351->$class->vtable[3])(expr351);
            $finallyReturn352 = $tmp355;
            $tmp261 = 14;
            goto $l259;
            $l356:;
            return $finallyReturn352;
        }
        }
        else {
        panda$core$Bit $tmp358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp358.value) {
        {
            org$pandalanguage$pandac$Position* $tmp360 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position359 = *$tmp360;
            $finallyReturn360 = position359;
            $tmp261 = 15;
            goto $l259;
            $l362:;
            return $finallyReturn360;
        }
        }
        else {
        panda$core$Bit $tmp364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp364.value) {
        {
            org$pandalanguage$pandac$Position* $tmp366 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position365 = *$tmp366;
            $finallyReturn366 = position365;
            $tmp261 = 16;
            goto $l259;
            $l368:;
            return $finallyReturn366;
        }
        }
        else {
        panda$core$Bit $tmp370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp370.value) {
        {
            org$pandalanguage$pandac$Position* $tmp372 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position371 = *$tmp372;
            $finallyReturn372 = position371;
            $tmp261 = 17;
            goto $l259;
            $l374:;
            return $finallyReturn372;
        }
        }
        else {
        panda$core$Bit $tmp376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp376.value) {
        {
            org$pandalanguage$pandac$Position* $tmp378 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position377 = *$tmp378;
            $finallyReturn378 = position377;
            $tmp261 = 18;
            goto $l259;
            $l380:;
            return $finallyReturn378;
        }
        }
        else {
        panda$core$Bit $tmp382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp382.value) {
        {
            org$pandalanguage$pandac$Position* $tmp384 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position383 = *$tmp384;
            $finallyReturn384 = position383;
            $tmp261 = 19;
            goto $l259;
            $l386:;
            return $finallyReturn384;
        }
        }
        else {
        panda$core$Bit $tmp388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp388.value) {
        {
            org$pandalanguage$pandac$Position* $tmp390 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position389 = *$tmp390;
            $finallyReturn390 = position389;
            $tmp261 = 20;
            goto $l259;
            $l392:;
            return $finallyReturn390;
        }
        }
        else {
        panda$core$Bit $tmp394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp394.value) {
        {
            org$pandalanguage$pandac$Position* $tmp396 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position395 = *$tmp396;
            $finallyReturn396 = position395;
            $tmp261 = 21;
            goto $l259;
            $l398:;
            return $finallyReturn396;
        }
        }
        else {
        panda$core$Bit $tmp400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp400.value) {
        {
            org$pandalanguage$pandac$Position* $tmp402 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position401 = *$tmp402;
            $finallyReturn402 = position401;
            $tmp261 = 22;
            goto $l259;
            $l404:;
            return $finallyReturn402;
        }
        }
        else {
        panda$core$Bit $tmp406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp406.value) {
        {
            org$pandalanguage$pandac$Position* $tmp408 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position407 = *$tmp408;
            $finallyReturn408 = position407;
            $tmp261 = 23;
            goto $l259;
            $l410:;
            return $finallyReturn408;
        }
        }
        else {
        panda$core$Bit $tmp412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp412.value) {
        {
            org$pandalanguage$pandac$Position* $tmp414 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position413 = *$tmp414;
            $finallyReturn414 = position413;
            $tmp261 = 24;
            goto $l259;
            $l416:;
            return $finallyReturn414;
        }
        }
        else {
        panda$core$Bit $tmp418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp418.value) {
        {
            org$pandalanguage$pandac$Position* $tmp420 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position419 = *$tmp420;
            $finallyReturn420 = position419;
            $tmp261 = 25;
            goto $l259;
            $l422:;
            return $finallyReturn420;
        }
        }
        else {
        panda$core$Bit $tmp424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp424.value) {
        {
            org$pandalanguage$pandac$Position* $tmp426 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position425 = *$tmp426;
            $finallyReturn426 = position425;
            $tmp261 = 26;
            goto $l259;
            $l428:;
            return $finallyReturn426;
        }
        }
        else {
        panda$core$Bit $tmp430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp430.value) {
        {
            org$pandalanguage$pandac$Position* $tmp432 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position431 = *$tmp432;
            $finallyReturn432 = position431;
            $tmp261 = 27;
            goto $l259;
            $l434:;
            return $finallyReturn432;
        }
        }
        else {
        panda$core$Bit $tmp436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp436.value) {
        {
            org$pandalanguage$pandac$Position* $tmp438 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position437 = *$tmp438;
            $finallyReturn438 = position437;
            $tmp261 = 28;
            goto $l259;
            $l440:;
            return $finallyReturn438;
        }
        }
        else {
        panda$core$Bit $tmp442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp442.value) {
        {
            org$pandalanguage$pandac$Position* $tmp444 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position443 = *$tmp444;
            $finallyReturn444 = position443;
            $tmp261 = 29;
            goto $l259;
            $l446:;
            return $finallyReturn444;
        }
        }
        else {
        panda$core$Bit $tmp448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp448.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp450 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$141_9262->$data + 0));
            base449 = *$tmp450;
            org$pandalanguage$pandac$Position $tmp453 = (($fn452) base449->$class->vtable[3])(base449);
            $finallyReturn450 = $tmp453;
            $tmp261 = 30;
            goto $l259;
            $l454:;
            return $finallyReturn450;
        }
        }
        else {
        panda$core$Bit $tmp456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp456.value) {
        {
            org$pandalanguage$pandac$Position* $tmp458 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position457 = *$tmp458;
            $finallyReturn458 = position457;
            $tmp261 = 31;
            goto $l259;
            $l460:;
            return $finallyReturn458;
        }
        }
        else {
        panda$core$Bit $tmp462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp462.value) {
        {
            org$pandalanguage$pandac$Position* $tmp464 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position463 = *$tmp464;
            $finallyReturn464 = position463;
            $tmp261 = 32;
            goto $l259;
            $l466:;
            return $finallyReturn464;
        }
        }
        else {
        panda$core$Bit $tmp468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp468.value) {
        {
            org$pandalanguage$pandac$Position* $tmp470 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position469 = *$tmp470;
            $finallyReturn470 = position469;
            $tmp261 = 33;
            goto $l259;
            $l472:;
            return $finallyReturn470;
        }
        }
        else {
        panda$core$Bit $tmp474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp474.value) {
        {
            org$pandalanguage$pandac$Position* $tmp476 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position475 = *$tmp476;
            $finallyReturn476 = position475;
            $tmp261 = 34;
            goto $l259;
            $l478:;
            return $finallyReturn476;
        }
        }
        else {
        panda$core$Bit $tmp480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp480.value) {
        {
            org$pandalanguage$pandac$Position* $tmp482 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position481 = *$tmp482;
            $finallyReturn482 = position481;
            $tmp261 = 35;
            goto $l259;
            $l484:;
            return $finallyReturn482;
        }
        }
        else {
        panda$core$Bit $tmp486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp486.value) {
        {
            org$pandalanguage$pandac$Position* $tmp488 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position487 = *$tmp488;
            $finallyReturn488 = position487;
            $tmp261 = 36;
            goto $l259;
            $l490:;
            return $finallyReturn488;
        }
        }
        else {
        panda$core$Bit $tmp492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp492.value) {
        {
            org$pandalanguage$pandac$Position* $tmp494 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position493 = *$tmp494;
            $finallyReturn494 = position493;
            $tmp261 = 37;
            goto $l259;
            $l496:;
            return $finallyReturn494;
        }
        }
        else {
        panda$core$Bit $tmp498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp498.value) {
        {
            org$pandalanguage$pandac$Position* $tmp500 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position499 = *$tmp500;
            $finallyReturn500 = position499;
            $tmp261 = 38;
            goto $l259;
            $l502:;
            return $finallyReturn500;
        }
        }
        else {
        panda$core$Bit $tmp504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp504.value) {
        {
            org$pandalanguage$pandac$Position* $tmp506 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position505 = *$tmp506;
            $finallyReturn506 = position505;
            $tmp261 = 39;
            goto $l259;
            $l508:;
            return $finallyReturn506;
        }
        }
        else {
        panda$core$Bit $tmp510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp510.value) {
        {
            org$pandalanguage$pandac$Position* $tmp512 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position511 = *$tmp512;
            $finallyReturn512 = position511;
            $tmp261 = 40;
            goto $l259;
            $l514:;
            return $finallyReturn512;
        }
        }
        else {
        panda$core$Bit $tmp516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp516.value) {
        {
            org$pandalanguage$pandac$Position* $tmp518 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position517 = *$tmp518;
            $finallyReturn518 = position517;
            $tmp261 = 41;
            goto $l259;
            $l520:;
            return $finallyReturn518;
        }
        }
        else {
        panda$core$Bit $tmp522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp522.value) {
        {
            org$pandalanguage$pandac$Position* $tmp524 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position523 = *$tmp524;
            $finallyReturn524 = position523;
            $tmp261 = 42;
            goto $l259;
            $l526:;
            return $finallyReturn524;
        }
        }
        else {
        panda$core$Bit $tmp528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp528.value) {
        {
            org$pandalanguage$pandac$Position* $tmp530 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position529 = *$tmp530;
            $finallyReturn530 = position529;
            $tmp261 = 43;
            goto $l259;
            $l532:;
            return $finallyReturn530;
        }
        }
        else {
        panda$core$Bit $tmp534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9262->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp534.value) {
        {
            org$pandalanguage$pandac$Position* $tmp536 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9262->$data + 0));
            position535 = *$tmp536;
            $finallyReturn536 = position535;
            $tmp261 = 44;
            goto $l259;
            $l538:;
            return $finallyReturn536;
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
    $tmp261 = -1;
    goto $l259;
    $l259:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp263));
    switch ($tmp261) {
        case 25: goto $l422;
        case 4: goto $l292;
        case 14: goto $l356;
        case 43: goto $l532;
        case 41: goto $l520;
        case 13: goto $l348;
        case 18: goto $l380;
        case 26: goto $l428;
        case 2: goto $l280;
        case 21: goto $l398;
        case 17: goto $l374;
        case 31: goto $l460;
        case 16: goto $l368;
        case 29: goto $l446;
        case 42: goto $l526;
        case 7: goto $l310;
        case 24: goto $l416;
        case 11: goto $l334;
        case 0: goto $l268;
        case 27: goto $l434;
        case 36: goto $l490;
        case 44: goto $l538;
        case 10: goto $l328;
        case 40: goto $l514;
        case 20: goto $l392;
        case 22: goto $l404;
        case -1: goto $l540;
        case 39: goto $l508;
        case 15: goto $l362;
        case 34: goto $l478;
        case 19: goto $l386;
        case 38: goto $l502;
        case 28: goto $l440;
        case 9: goto $l322;
        case 6: goto $l304;
        case 23: goto $l410;
        case 33: goto $l472;
        case 35: goto $l484;
        case 1: goto $l274;
        case 12: goto $l342;
        case 30: goto $l454;
        case 5: goto $l298;
        case 37: goto $l496;
        case 3: goto $l286;
        case 8: goto $l316;
        case 32: goto $l466;
    }
    $l540:;
}
panda$core$Bit org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$238_9544 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp545;
    org$pandalanguage$pandac$IRNode* test547 = NULL;
    org$pandalanguage$pandac$IRNode* msg549 = NULL;
    panda$core$Bit $finallyReturn550;
    org$pandalanguage$pandac$IRNode* left562 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op564;
    org$pandalanguage$pandac$IRNode* right566 = NULL;
    panda$core$Bit $finallyReturn567;
    panda$core$Bit bit583;
    panda$core$Bit $finallyReturn584;
    panda$collections$ImmutableArray* statements589 = NULL;
    panda$collections$Iterator* Iter$246$17594 = NULL;
    panda$collections$Iterator* $tmp595;
    panda$collections$Iterator* $tmp596;
    org$pandalanguage$pandac$IRNode* s612 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp613;
    panda$core$Object* $tmp614;
    panda$core$Bit $finallyReturn620;
    panda$core$Bit $finallyReturn627;
    panda$core$String* label632 = NULL;
    panda$core$Bit $finallyReturn633;
    org$pandalanguage$pandac$MethodRef* m638 = NULL;
    panda$collections$ImmutableArray* args640 = NULL;
    panda$core$Bit $finallyReturn642;
    panda$collections$Iterator* Iter$258$17649 = NULL;
    panda$collections$Iterator* $tmp650;
    panda$collections$Iterator* $tmp651;
    org$pandalanguage$pandac$IRNode* arg667 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp668;
    panda$core$Object* $tmp669;
    panda$core$Bit $finallyReturn675;
    panda$core$Bit $finallyReturn682;
    org$pandalanguage$pandac$IRNode* value687 = NULL;
    org$pandalanguage$pandac$Type* type689 = NULL;
    panda$core$Bit $finallyReturn690;
    org$pandalanguage$pandac$ChoiceEntry* ce695 = NULL;
    panda$core$Bit $finallyReturn696;
    org$pandalanguage$pandac$IRNode* base701 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce703 = NULL;
    panda$core$Int64 field705;
    panda$core$Bit $finallyReturn706;
    org$pandalanguage$pandac$Type* type711 = NULL;
    org$pandalanguage$pandac$IRNode* call713 = NULL;
    panda$core$Bit $finallyReturn714;
    org$pandalanguage$pandac$Type* Type721 = NULL;
    panda$core$Bit $finallyReturn722;
    panda$core$String* label727 = NULL;
    panda$core$Bit $finallyReturn728;
    org$pandalanguage$pandac$IRNode* target733 = NULL;
    org$pandalanguage$pandac$IRNode* value735 = NULL;
    panda$core$Bit $finallyReturn736;
    panda$core$String* label746 = NULL;
    panda$collections$ImmutableArray* statements748 = NULL;
    org$pandalanguage$pandac$IRNode* test750 = NULL;
    panda$core$Bit $finallyReturn753;
    panda$collections$Iterator* Iter$282$17760 = NULL;
    panda$collections$Iterator* $tmp761;
    panda$collections$Iterator* $tmp762;
    org$pandalanguage$pandac$IRNode* s778 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp779;
    panda$core$Object* $tmp780;
    panda$core$Bit $finallyReturn786;
    panda$core$Bit $finallyReturn793;
    panda$core$Bit $finallyReturn797;
    org$pandalanguage$pandac$IRNode* base802 = NULL;
    org$pandalanguage$pandac$FieldDecl* field804 = NULL;
    panda$core$Bit $finallyReturn805;
    org$pandalanguage$pandac$IRNode* test810 = NULL;
    panda$collections$ImmutableArray* ifTrue812 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse814 = NULL;
    panda$core$Bit $finallyReturn817;
    panda$collections$Iterator* Iter$296$17824 = NULL;
    panda$collections$Iterator* $tmp825;
    panda$collections$Iterator* $tmp826;
    org$pandalanguage$pandac$IRNode* s842 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp843;
    panda$core$Object* $tmp844;
    panda$core$Bit $finallyReturn850;
    panda$core$Bit $finallyReturn857;
    panda$core$UInt64 value864;
    panda$core$Bit $finallyReturn865;
    org$pandalanguage$pandac$IRNode* value870 = NULL;
    panda$core$Bit $finallyReturn871;
    org$pandalanguage$pandac$IRNode* value878 = NULL;
    panda$core$Bit $finallyReturn879;
    panda$core$String* label886 = NULL;
    panda$collections$ImmutableArray* statements888 = NULL;
    panda$collections$Iterator* Iter$309$17893 = NULL;
    panda$collections$Iterator* $tmp894;
    panda$collections$Iterator* $tmp895;
    org$pandalanguage$pandac$IRNode* s911 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp912;
    panda$core$Object* $tmp913;
    panda$core$Bit $finallyReturn919;
    panda$core$Bit $finallyReturn926;
    org$pandalanguage$pandac$IRNode* value931 = NULL;
    panda$collections$ImmutableArray* whens933 = NULL;
    panda$collections$ImmutableArray* other935 = NULL;
    panda$core$Bit $finallyReturn938;
    panda$collections$Iterator* Iter$319$17945 = NULL;
    panda$collections$Iterator* $tmp946;
    panda$collections$Iterator* $tmp947;
    org$pandalanguage$pandac$IRNode* w963 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp964;
    panda$core$Object* $tmp965;
    panda$core$Bit $finallyReturn971;
    panda$collections$Iterator* Iter$324$17982 = NULL;
    panda$collections$Iterator* $tmp983;
    panda$collections$Iterator* $tmp984;
    org$pandalanguage$pandac$IRNode* s1000 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1001;
    panda$core$Object* $tmp1002;
    panda$core$Bit $finallyReturn1008;
    panda$core$Bit $finallyReturn1015;
    org$pandalanguage$pandac$IRNode* target1020 = NULL;
    org$pandalanguage$pandac$MethodRef* m1022 = NULL;
    panda$core$Bit $finallyReturn1023;
    panda$core$UInt64 value1028;
    panda$core$Bit $finallyReturn1029;
    panda$core$Bit $finallyReturn1033;
    org$pandalanguage$pandac$parser$Token$Kind op1038;
    org$pandalanguage$pandac$IRNode* base1040 = NULL;
    panda$core$Bit $finallyReturn1041;
    panda$core$String* label1048 = NULL;
    org$pandalanguage$pandac$IRNode* target1050 = NULL;
    org$pandalanguage$pandac$IRNode* list1052 = NULL;
    panda$collections$ImmutableArray* statements1054 = NULL;
    panda$core$Bit $finallyReturn1057;
    panda$collections$Iterator* Iter$343$171064 = NULL;
    panda$collections$Iterator* $tmp1065;
    panda$collections$Iterator* $tmp1066;
    org$pandalanguage$pandac$IRNode* s1082 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1083;
    panda$core$Object* $tmp1084;
    panda$core$Bit $finallyReturn1090;
    panda$core$Bit $finallyReturn1097;
    panda$core$Real64 value1102;
    panda$core$Bit $finallyReturn1103;
    org$pandalanguage$pandac$IRNode* value1108 = NULL;
    panda$core$Bit $finallyReturn1109;
    panda$core$Int64 id1116;
    panda$core$Bit $finallyReturn1117;
    org$pandalanguage$pandac$IRNode* base1122 = NULL;
    panda$core$Int64 id1124;
    panda$core$Bit $finallyReturn1125;
    panda$core$Bit $finallyReturn1131;
    panda$core$String* str1136 = NULL;
    panda$core$Bit $finallyReturn1137;
    panda$core$Bit $finallyReturn1141;
    org$pandalanguage$pandac$IRNode* test1146 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue1148 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse1150 = NULL;
    panda$core$Bit $finallyReturn1151;
    org$pandalanguage$pandac$Type* type1168 = NULL;
    panda$core$Bit $finallyReturn1169;
    panda$core$String* name1174 = NULL;
    org$pandalanguage$pandac$IRNode* base1177 = NULL;
    panda$collections$ImmutableArray* args1179 = NULL;
    org$pandalanguage$pandac$IRNode* target1182 = NULL;
    panda$collections$ImmutableArray* methods1184 = NULL;
    panda$collections$ImmutableArray* args1186 = NULL;
    org$pandalanguage$pandac$IRNode* target1189 = NULL;
    panda$collections$ImmutableArray* methods1191 = NULL;
    org$pandalanguage$pandac$IRNode* start1194 = NULL;
    org$pandalanguage$pandac$IRNode* end1196 = NULL;
    panda$core$Bit inclusive1198;
    org$pandalanguage$pandac$IRNode* step1200 = NULL;
    org$pandalanguage$pandac$Variable$Kind kind1203;
    panda$collections$ImmutableArray* decls1205 = NULL;
    panda$collections$Iterator* Iter$378$171210 = NULL;
    panda$collections$Iterator* $tmp1211;
    panda$collections$Iterator* $tmp1212;
    org$pandalanguage$pandac$IRNode* d1228 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1229;
    panda$core$Object* $tmp1230;
    panda$core$Bit $finallyReturn1236;
    panda$core$Bit $finallyReturn1243;
    org$pandalanguage$pandac$Variable* variable1248 = NULL;
    panda$core$Bit $finallyReturn1249;
    panda$collections$ImmutableArray* tests1254 = NULL;
    panda$collections$ImmutableArray* statements1256 = NULL;
    panda$collections$Iterator* Iter$387$171261 = NULL;
    panda$collections$Iterator* $tmp1262;
    panda$collections$Iterator* $tmp1263;
    org$pandalanguage$pandac$IRNode* t1279 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1280;
    panda$core$Object* $tmp1281;
    panda$core$Bit $finallyReturn1287;
    panda$collections$Iterator* Iter$392$171298 = NULL;
    panda$collections$Iterator* $tmp1299;
    panda$collections$Iterator* $tmp1300;
    org$pandalanguage$pandac$IRNode* s1316 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1317;
    panda$core$Object* $tmp1318;
    panda$core$Bit $finallyReturn1324;
    panda$core$Bit $finallyReturn1331;
    panda$core$String* label1336 = NULL;
    org$pandalanguage$pandac$IRNode* test1338 = NULL;
    panda$collections$ImmutableArray* statements1340 = NULL;
    panda$core$Bit $finallyReturn1343;
    panda$collections$Iterator* Iter$402$171350 = NULL;
    panda$collections$Iterator* $tmp1351;
    panda$collections$Iterator* $tmp1352;
    org$pandalanguage$pandac$IRNode* s1368 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1369;
    panda$core$Object* $tmp1370;
    panda$core$Bit $finallyReturn1376;
    panda$core$Bit $finallyReturn1383;
    int $tmp543;
    {
        $tmp545 = self;
        $match$238_9544 = $tmp545;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp545));
        panda$core$Bit $tmp546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp546.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp548 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 16));
            test547 = *$tmp548;
            org$pandalanguage$pandac$IRNode** $tmp550 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 24));
            msg549 = *$tmp550;
            panda$core$Bit $tmp554 = (($fn553) test547->$class->vtable[4])(test547);
            bool $tmp552 = $tmp554.value;
            if ($tmp552) goto $l555;
            panda$core$Bit $tmp557 = (($fn556) msg549->$class->vtable[4])(msg549);
            $tmp552 = $tmp557.value;
            $l555:;
            panda$core$Bit $tmp558 = { $tmp552 };
            $finallyReturn550 = $tmp558;
            $tmp543 = 0;
            goto $l541;
            $l559:;
            return $finallyReturn550;
        }
        }
        else {
        panda$core$Bit $tmp561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp561.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp563 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 24));
            left562 = *$tmp563;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp565 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$238_9544->$data + 32));
            op564 = *$tmp565;
            org$pandalanguage$pandac$IRNode** $tmp567 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 40));
            right566 = *$tmp567;
            panda$core$Bit $tmp571 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(op564);
            bool $tmp570 = $tmp571.value;
            if ($tmp570) goto $l572;
            panda$core$Bit $tmp574 = (($fn573) left562->$class->vtable[4])(left562);
            $tmp570 = $tmp574.value;
            $l572:;
            panda$core$Bit $tmp575 = { $tmp570 };
            bool $tmp569 = $tmp575.value;
            if ($tmp569) goto $l576;
            panda$core$Bit $tmp578 = (($fn577) right566->$class->vtable[4])(right566);
            $tmp569 = $tmp578.value;
            $l576:;
            panda$core$Bit $tmp579 = { $tmp569 };
            $finallyReturn567 = $tmp579;
            $tmp543 = 1;
            goto $l541;
            $l580:;
            return $finallyReturn567;
        }
        }
        else {
        panda$core$Bit $tmp582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp582.value) {
        {
            panda$core$Bit* $tmp584 = ((panda$core$Bit*) ((char*) $match$238_9544->$data + 24));
            bit583 = *$tmp584;
            $finallyReturn584 = ((panda$core$Bit) { false });
            $tmp543 = 2;
            goto $l541;
            $l586:;
            return $finallyReturn584;
        }
        }
        else {
        panda$core$Bit $tmp588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp588.value) {
        {
            panda$collections$ImmutableArray** $tmp590 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9544->$data + 16));
            statements589 = *$tmp590;
            {
                int $tmp593;
                {
                    ITable* $tmp597 = ((panda$collections$Iterable*) statements589)->$class->itable;
                    while ($tmp597->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp597 = $tmp597->next;
                    }
                    $fn599 $tmp598 = $tmp597->methods[0];
                    panda$collections$Iterator* $tmp600 = $tmp598(((panda$collections$Iterable*) statements589));
                    $tmp596 = $tmp600;
                    $tmp595 = $tmp596;
                    Iter$246$17594 = $tmp595;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp595));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp596));
                    $l601:;
                    ITable* $tmp604 = Iter$246$17594->$class->itable;
                    while ($tmp604->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp604 = $tmp604->next;
                    }
                    $fn606 $tmp605 = $tmp604->methods[0];
                    panda$core$Bit $tmp607 = $tmp605(Iter$246$17594);
                    panda$core$Bit $tmp608 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp607);
                    bool $tmp603 = $tmp608.value;
                    if (!$tmp603) goto $l602;
                    {
                        int $tmp611;
                        {
                            ITable* $tmp615 = Iter$246$17594->$class->itable;
                            while ($tmp615->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp615 = $tmp615->next;
                            }
                            $fn617 $tmp616 = $tmp615->methods[1];
                            panda$core$Object* $tmp618 = $tmp616(Iter$246$17594);
                            $tmp614 = $tmp618;
                            $tmp613 = ((org$pandalanguage$pandac$IRNode*) $tmp614);
                            s612 = $tmp613;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp613));
                            panda$core$Panda$unref$panda$core$Object($tmp614);
                            panda$core$Bit $tmp620 = (($fn619) s612->$class->vtable[4])(s612);
                            if ($tmp620.value) {
                            {
                                $finallyReturn620 = ((panda$core$Bit) { true });
                                $tmp611 = 0;
                                goto $l609;
                                $l622:;
                                $tmp593 = 0;
                                goto $l591;
                                $l623:;
                                $tmp543 = 3;
                                goto $l541;
                                $l624:;
                                return $finallyReturn620;
                            }
                            }
                        }
                        $tmp611 = -1;
                        goto $l609;
                        $l609:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s612));
                        s612 = NULL;
                        switch ($tmp611) {
                            case 0: goto $l622;
                            case -1: goto $l626;
                        }
                        $l626:;
                    }
                    goto $l601;
                    $l602:;
                }
                $tmp593 = -1;
                goto $l591;
                $l591:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$246$17594));
                Iter$246$17594 = NULL;
                switch ($tmp593) {
                    case -1: goto $l627;
                    case 0: goto $l623;
                }
                $l627:;
            }
            $finallyReturn627 = ((panda$core$Bit) { false });
            $tmp543 = 4;
            goto $l541;
            $l629:;
            return $finallyReturn627;
        }
        }
        else {
        panda$core$Bit $tmp631 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp631.value) {
        {
            panda$core$String** $tmp633 = ((panda$core$String**) ((char*) $match$238_9544->$data + 16));
            label632 = *$tmp633;
            $finallyReturn633 = ((panda$core$Bit) { false });
            $tmp543 = 5;
            goto $l541;
            $l635:;
            return $finallyReturn633;
        }
        }
        else {
        panda$core$Bit $tmp637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp637.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp639 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$238_9544->$data + 24));
            m638 = *$tmp639;
            panda$collections$ImmutableArray** $tmp641 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9544->$data + 32));
            args640 = *$tmp641;
            panda$core$Bit $tmp642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m638->value->methodKind.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp642.value) {
            {
                $finallyReturn642 = ((panda$core$Bit) { true });
                $tmp543 = 6;
                goto $l541;
                $l644:;
                return $finallyReturn642;
            }
            }
            {
                int $tmp648;
                {
                    ITable* $tmp652 = ((panda$collections$Iterable*) args640)->$class->itable;
                    while ($tmp652->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp652 = $tmp652->next;
                    }
                    $fn654 $tmp653 = $tmp652->methods[0];
                    panda$collections$Iterator* $tmp655 = $tmp653(((panda$collections$Iterable*) args640));
                    $tmp651 = $tmp655;
                    $tmp650 = $tmp651;
                    Iter$258$17649 = $tmp650;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp650));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp651));
                    $l656:;
                    ITable* $tmp659 = Iter$258$17649->$class->itable;
                    while ($tmp659->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp659 = $tmp659->next;
                    }
                    $fn661 $tmp660 = $tmp659->methods[0];
                    panda$core$Bit $tmp662 = $tmp660(Iter$258$17649);
                    panda$core$Bit $tmp663 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp662);
                    bool $tmp658 = $tmp663.value;
                    if (!$tmp658) goto $l657;
                    {
                        int $tmp666;
                        {
                            ITable* $tmp670 = Iter$258$17649->$class->itable;
                            while ($tmp670->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp670 = $tmp670->next;
                            }
                            $fn672 $tmp671 = $tmp670->methods[1];
                            panda$core$Object* $tmp673 = $tmp671(Iter$258$17649);
                            $tmp669 = $tmp673;
                            $tmp668 = ((org$pandalanguage$pandac$IRNode*) $tmp669);
                            arg667 = $tmp668;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp668));
                            panda$core$Panda$unref$panda$core$Object($tmp669);
                            panda$core$Bit $tmp675 = (($fn674) arg667->$class->vtable[4])(arg667);
                            if ($tmp675.value) {
                            {
                                $finallyReturn675 = ((panda$core$Bit) { true });
                                $tmp666 = 0;
                                goto $l664;
                                $l677:;
                                $tmp648 = 0;
                                goto $l646;
                                $l678:;
                                $tmp543 = 7;
                                goto $l541;
                                $l679:;
                                return $finallyReturn675;
                            }
                            }
                        }
                        $tmp666 = -1;
                        goto $l664;
                        $l664:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg667));
                        arg667 = NULL;
                        switch ($tmp666) {
                            case -1: goto $l681;
                            case 0: goto $l677;
                        }
                        $l681:;
                    }
                    goto $l656;
                    $l657:;
                }
                $tmp648 = -1;
                goto $l646;
                $l646:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$258$17649));
                Iter$258$17649 = NULL;
                switch ($tmp648) {
                    case -1: goto $l682;
                    case 0: goto $l678;
                }
                $l682:;
            }
            $finallyReturn682 = ((panda$core$Bit) { false });
            $tmp543 = 8;
            goto $l541;
            $l684:;
            return $finallyReturn682;
        }
        }
        else {
        panda$core$Bit $tmp686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp686.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp688 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 16));
            value687 = *$tmp688;
            org$pandalanguage$pandac$Type** $tmp690 = ((org$pandalanguage$pandac$Type**) ((char*) $match$238_9544->$data + 24));
            type689 = *$tmp690;
            $finallyReturn690 = ((panda$core$Bit) { false });
            $tmp543 = 9;
            goto $l541;
            $l692:;
            return $finallyReturn690;
        }
        }
        else {
        panda$core$Bit $tmp694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp694.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp696 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$238_9544->$data + 16));
            ce695 = *$tmp696;
            $finallyReturn696 = ((panda$core$Bit) { false });
            $tmp543 = 10;
            goto $l541;
            $l698:;
            return $finallyReturn696;
        }
        }
        else {
        panda$core$Bit $tmp700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp700.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp702 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 16));
            base701 = *$tmp702;
            org$pandalanguage$pandac$ChoiceEntry** $tmp704 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$238_9544->$data + 24));
            ce703 = *$tmp704;
            panda$core$Int64* $tmp706 = ((panda$core$Int64*) ((char*) $match$238_9544->$data + 32));
            field705 = *$tmp706;
            $finallyReturn706 = ((panda$core$Bit) { false });
            $tmp543 = 11;
            goto $l541;
            $l708:;
            return $finallyReturn706;
        }
        }
        else {
        panda$core$Bit $tmp710 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp710.value) {
        {
            org$pandalanguage$pandac$Type** $tmp712 = ((org$pandalanguage$pandac$Type**) ((char*) $match$238_9544->$data + 16));
            type711 = *$tmp712;
            org$pandalanguage$pandac$IRNode** $tmp714 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 24));
            call713 = *$tmp714;
            panda$core$Bit $tmp717 = (($fn716) call713->$class->vtable[4])(call713);
            $finallyReturn714 = $tmp717;
            $tmp543 = 12;
            goto $l541;
            $l718:;
            return $finallyReturn714;
        }
        }
        else {
        panda$core$Bit $tmp720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp720.value) {
        {
            org$pandalanguage$pandac$Type** $tmp722 = ((org$pandalanguage$pandac$Type**) ((char*) $match$238_9544->$data + 16));
            Type721 = *$tmp722;
            $finallyReturn722 = ((panda$core$Bit) { false });
            $tmp543 = 13;
            goto $l541;
            $l724:;
            return $finallyReturn722;
        }
        }
        else {
        panda$core$Bit $tmp726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp726.value) {
        {
            panda$core$String** $tmp728 = ((panda$core$String**) ((char*) $match$238_9544->$data + 16));
            label727 = *$tmp728;
            $finallyReturn728 = ((panda$core$Bit) { false });
            $tmp543 = 14;
            goto $l541;
            $l730:;
            return $finallyReturn728;
        }
        }
        else {
        panda$core$Bit $tmp732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp732.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp734 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 0));
            target733 = *$tmp734;
            org$pandalanguage$pandac$IRNode** $tmp736 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 8));
            value735 = *$tmp736;
            bool $tmp738 = ((panda$core$Bit) { value735 != NULL }).value;
            if (!$tmp738) goto $l739;
            panda$core$Bit $tmp741 = (($fn740) value735->$class->vtable[4])(value735);
            $tmp738 = $tmp741.value;
            $l739:;
            panda$core$Bit $tmp742 = { $tmp738 };
            $finallyReturn736 = $tmp742;
            $tmp543 = 15;
            goto $l541;
            $l743:;
            return $finallyReturn736;
        }
        }
        else {
        panda$core$Bit $tmp745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp745.value) {
        {
            panda$core$String** $tmp747 = ((panda$core$String**) ((char*) $match$238_9544->$data + 16));
            label746 = *$tmp747;
            panda$collections$ImmutableArray** $tmp749 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9544->$data + 24));
            statements748 = *$tmp749;
            org$pandalanguage$pandac$IRNode** $tmp751 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 32));
            test750 = *$tmp751;
            panda$core$Bit $tmp753 = (($fn752) test750->$class->vtable[4])(test750);
            if ($tmp753.value) {
            {
                $finallyReturn753 = ((panda$core$Bit) { true });
                $tmp543 = 16;
                goto $l541;
                $l755:;
                return $finallyReturn753;
            }
            }
            {
                int $tmp759;
                {
                    ITable* $tmp763 = ((panda$collections$Iterable*) statements748)->$class->itable;
                    while ($tmp763->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp763 = $tmp763->next;
                    }
                    $fn765 $tmp764 = $tmp763->methods[0];
                    panda$collections$Iterator* $tmp766 = $tmp764(((panda$collections$Iterable*) statements748));
                    $tmp762 = $tmp766;
                    $tmp761 = $tmp762;
                    Iter$282$17760 = $tmp761;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp761));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp762));
                    $l767:;
                    ITable* $tmp770 = Iter$282$17760->$class->itable;
                    while ($tmp770->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp770 = $tmp770->next;
                    }
                    $fn772 $tmp771 = $tmp770->methods[0];
                    panda$core$Bit $tmp773 = $tmp771(Iter$282$17760);
                    panda$core$Bit $tmp774 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp773);
                    bool $tmp769 = $tmp774.value;
                    if (!$tmp769) goto $l768;
                    {
                        int $tmp777;
                        {
                            ITable* $tmp781 = Iter$282$17760->$class->itable;
                            while ($tmp781->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp781 = $tmp781->next;
                            }
                            $fn783 $tmp782 = $tmp781->methods[1];
                            panda$core$Object* $tmp784 = $tmp782(Iter$282$17760);
                            $tmp780 = $tmp784;
                            $tmp779 = ((org$pandalanguage$pandac$IRNode*) $tmp780);
                            s778 = $tmp779;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp779));
                            panda$core$Panda$unref$panda$core$Object($tmp780);
                            panda$core$Bit $tmp786 = (($fn785) s778->$class->vtable[4])(s778);
                            if ($tmp786.value) {
                            {
                                $finallyReturn786 = ((panda$core$Bit) { true });
                                $tmp777 = 0;
                                goto $l775;
                                $l788:;
                                $tmp759 = 0;
                                goto $l757;
                                $l789:;
                                $tmp543 = 17;
                                goto $l541;
                                $l790:;
                                return $finallyReturn786;
                            }
                            }
                        }
                        $tmp777 = -1;
                        goto $l775;
                        $l775:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s778));
                        s778 = NULL;
                        switch ($tmp777) {
                            case 0: goto $l788;
                            case -1: goto $l792;
                        }
                        $l792:;
                    }
                    goto $l767;
                    $l768:;
                }
                $tmp759 = -1;
                goto $l757;
                $l757:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$282$17760));
                Iter$282$17760 = NULL;
                switch ($tmp759) {
                    case -1: goto $l793;
                    case 0: goto $l789;
                }
                $l793:;
            }
            $finallyReturn793 = ((panda$core$Bit) { false });
            $tmp543 = 18;
            goto $l541;
            $l795:;
            return $finallyReturn793;
        }
        }
        else {
        panda$core$Bit $tmp797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp797.value) {
        {
            $finallyReturn797 = ((panda$core$Bit) { true });
            $tmp543 = 19;
            goto $l541;
            $l799:;
            return $finallyReturn797;
        }
        }
        else {
        panda$core$Bit $tmp801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp801.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp803 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 24));
            base802 = *$tmp803;
            org$pandalanguage$pandac$FieldDecl** $tmp805 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$238_9544->$data + 32));
            field804 = *$tmp805;
            $finallyReturn805 = ((panda$core$Bit) { false });
            $tmp543 = 20;
            goto $l541;
            $l807:;
            return $finallyReturn805;
        }
        }
        else {
        panda$core$Bit $tmp809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp809.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp811 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 16));
            test810 = *$tmp811;
            panda$collections$ImmutableArray** $tmp813 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9544->$data + 24));
            ifTrue812 = *$tmp813;
            org$pandalanguage$pandac$IRNode** $tmp815 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 32));
            ifFalse814 = *$tmp815;
            panda$core$Bit $tmp817 = (($fn816) test810->$class->vtable[4])(test810);
            if ($tmp817.value) {
            {
                $finallyReturn817 = ((panda$core$Bit) { true });
                $tmp543 = 21;
                goto $l541;
                $l819:;
                return $finallyReturn817;
            }
            }
            {
                int $tmp823;
                {
                    ITable* $tmp827 = ((panda$collections$Iterable*) ifTrue812)->$class->itable;
                    while ($tmp827->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp827 = $tmp827->next;
                    }
                    $fn829 $tmp828 = $tmp827->methods[0];
                    panda$collections$Iterator* $tmp830 = $tmp828(((panda$collections$Iterable*) ifTrue812));
                    $tmp826 = $tmp830;
                    $tmp825 = $tmp826;
                    Iter$296$17824 = $tmp825;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp825));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp826));
                    $l831:;
                    ITable* $tmp834 = Iter$296$17824->$class->itable;
                    while ($tmp834->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp834 = $tmp834->next;
                    }
                    $fn836 $tmp835 = $tmp834->methods[0];
                    panda$core$Bit $tmp837 = $tmp835(Iter$296$17824);
                    panda$core$Bit $tmp838 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp837);
                    bool $tmp833 = $tmp838.value;
                    if (!$tmp833) goto $l832;
                    {
                        int $tmp841;
                        {
                            ITable* $tmp845 = Iter$296$17824->$class->itable;
                            while ($tmp845->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp845 = $tmp845->next;
                            }
                            $fn847 $tmp846 = $tmp845->methods[1];
                            panda$core$Object* $tmp848 = $tmp846(Iter$296$17824);
                            $tmp844 = $tmp848;
                            $tmp843 = ((org$pandalanguage$pandac$IRNode*) $tmp844);
                            s842 = $tmp843;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp843));
                            panda$core$Panda$unref$panda$core$Object($tmp844);
                            panda$core$Bit $tmp850 = (($fn849) s842->$class->vtable[4])(s842);
                            if ($tmp850.value) {
                            {
                                $finallyReturn850 = ((panda$core$Bit) { true });
                                $tmp841 = 0;
                                goto $l839;
                                $l852:;
                                $tmp823 = 0;
                                goto $l821;
                                $l853:;
                                $tmp543 = 22;
                                goto $l541;
                                $l854:;
                                return $finallyReturn850;
                            }
                            }
                        }
                        $tmp841 = -1;
                        goto $l839;
                        $l839:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s842));
                        s842 = NULL;
                        switch ($tmp841) {
                            case 0: goto $l852;
                            case -1: goto $l856;
                        }
                        $l856:;
                    }
                    goto $l831;
                    $l832:;
                }
                $tmp823 = -1;
                goto $l821;
                $l821:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$296$17824));
                Iter$296$17824 = NULL;
                switch ($tmp823) {
                    case -1: goto $l857;
                    case 0: goto $l853;
                }
                $l857:;
            }
            panda$core$Bit $tmp860 = (($fn859) ifFalse814->$class->vtable[4])(ifFalse814);
            $finallyReturn857 = $tmp860;
            $tmp543 = 23;
            goto $l541;
            $l861:;
            return $finallyReturn857;
        }
        }
        else {
        panda$core$Bit $tmp863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp863.value) {
        {
            panda$core$UInt64* $tmp865 = ((panda$core$UInt64*) ((char*) $match$238_9544->$data + 24));
            value864 = *$tmp865;
            $finallyReturn865 = ((panda$core$Bit) { false });
            $tmp543 = 24;
            goto $l541;
            $l867:;
            return $finallyReturn865;
        }
        }
        else {
        panda$core$Bit $tmp869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp869.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp871 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 16));
            value870 = *$tmp871;
            panda$core$Bit $tmp874 = (($fn873) value870->$class->vtable[4])(value870);
            $finallyReturn871 = $tmp874;
            $tmp543 = 25;
            goto $l541;
            $l875:;
            return $finallyReturn871;
        }
        }
        else {
        panda$core$Bit $tmp877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp877.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp879 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 16));
            value878 = *$tmp879;
            panda$core$Bit $tmp882 = (($fn881) value878->$class->vtable[4])(value878);
            $finallyReturn879 = $tmp882;
            $tmp543 = 26;
            goto $l541;
            $l883:;
            return $finallyReturn879;
        }
        }
        else {
        panda$core$Bit $tmp885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp885.value) {
        {
            panda$core$String** $tmp887 = ((panda$core$String**) ((char*) $match$238_9544->$data + 16));
            label886 = *$tmp887;
            panda$collections$ImmutableArray** $tmp889 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9544->$data + 24));
            statements888 = *$tmp889;
            {
                int $tmp892;
                {
                    ITable* $tmp896 = ((panda$collections$Iterable*) statements888)->$class->itable;
                    while ($tmp896->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp896 = $tmp896->next;
                    }
                    $fn898 $tmp897 = $tmp896->methods[0];
                    panda$collections$Iterator* $tmp899 = $tmp897(((panda$collections$Iterable*) statements888));
                    $tmp895 = $tmp899;
                    $tmp894 = $tmp895;
                    Iter$309$17893 = $tmp894;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp894));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp895));
                    $l900:;
                    ITable* $tmp903 = Iter$309$17893->$class->itable;
                    while ($tmp903->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp903 = $tmp903->next;
                    }
                    $fn905 $tmp904 = $tmp903->methods[0];
                    panda$core$Bit $tmp906 = $tmp904(Iter$309$17893);
                    panda$core$Bit $tmp907 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp906);
                    bool $tmp902 = $tmp907.value;
                    if (!$tmp902) goto $l901;
                    {
                        int $tmp910;
                        {
                            ITable* $tmp914 = Iter$309$17893->$class->itable;
                            while ($tmp914->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp914 = $tmp914->next;
                            }
                            $fn916 $tmp915 = $tmp914->methods[1];
                            panda$core$Object* $tmp917 = $tmp915(Iter$309$17893);
                            $tmp913 = $tmp917;
                            $tmp912 = ((org$pandalanguage$pandac$IRNode*) $tmp913);
                            s911 = $tmp912;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp912));
                            panda$core$Panda$unref$panda$core$Object($tmp913);
                            panda$core$Bit $tmp919 = (($fn918) s911->$class->vtable[4])(s911);
                            if ($tmp919.value) {
                            {
                                $finallyReturn919 = ((panda$core$Bit) { true });
                                $tmp910 = 0;
                                goto $l908;
                                $l921:;
                                $tmp892 = 0;
                                goto $l890;
                                $l922:;
                                $tmp543 = 27;
                                goto $l541;
                                $l923:;
                                return $finallyReturn919;
                            }
                            }
                        }
                        $tmp910 = -1;
                        goto $l908;
                        $l908:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s911));
                        s911 = NULL;
                        switch ($tmp910) {
                            case -1: goto $l925;
                            case 0: goto $l921;
                        }
                        $l925:;
                    }
                    goto $l900;
                    $l901:;
                }
                $tmp892 = -1;
                goto $l890;
                $l890:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$309$17893));
                Iter$309$17893 = NULL;
                switch ($tmp892) {
                    case 0: goto $l922;
                    case -1: goto $l926;
                }
                $l926:;
            }
            $finallyReturn926 = ((panda$core$Bit) { false });
            $tmp543 = 28;
            goto $l541;
            $l928:;
            return $finallyReturn926;
        }
        }
        else {
        panda$core$Bit $tmp930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp930.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp932 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 16));
            value931 = *$tmp932;
            panda$collections$ImmutableArray** $tmp934 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9544->$data + 24));
            whens933 = *$tmp934;
            panda$collections$ImmutableArray** $tmp936 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9544->$data + 32));
            other935 = *$tmp936;
            panda$core$Bit $tmp938 = (($fn937) value931->$class->vtable[4])(value931);
            if ($tmp938.value) {
            {
                $finallyReturn938 = ((panda$core$Bit) { true });
                $tmp543 = 29;
                goto $l541;
                $l940:;
                return $finallyReturn938;
            }
            }
            {
                int $tmp944;
                {
                    ITable* $tmp948 = ((panda$collections$Iterable*) whens933)->$class->itable;
                    while ($tmp948->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp948 = $tmp948->next;
                    }
                    $fn950 $tmp949 = $tmp948->methods[0];
                    panda$collections$Iterator* $tmp951 = $tmp949(((panda$collections$Iterable*) whens933));
                    $tmp947 = $tmp951;
                    $tmp946 = $tmp947;
                    Iter$319$17945 = $tmp946;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp946));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp947));
                    $l952:;
                    ITable* $tmp955 = Iter$319$17945->$class->itable;
                    while ($tmp955->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp955 = $tmp955->next;
                    }
                    $fn957 $tmp956 = $tmp955->methods[0];
                    panda$core$Bit $tmp958 = $tmp956(Iter$319$17945);
                    panda$core$Bit $tmp959 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp958);
                    bool $tmp954 = $tmp959.value;
                    if (!$tmp954) goto $l953;
                    {
                        int $tmp962;
                        {
                            ITable* $tmp966 = Iter$319$17945->$class->itable;
                            while ($tmp966->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp966 = $tmp966->next;
                            }
                            $fn968 $tmp967 = $tmp966->methods[1];
                            panda$core$Object* $tmp969 = $tmp967(Iter$319$17945);
                            $tmp965 = $tmp969;
                            $tmp964 = ((org$pandalanguage$pandac$IRNode*) $tmp965);
                            w963 = $tmp964;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp964));
                            panda$core$Panda$unref$panda$core$Object($tmp965);
                            panda$core$Bit $tmp971 = (($fn970) w963->$class->vtable[4])(w963);
                            if ($tmp971.value) {
                            {
                                $finallyReturn971 = ((panda$core$Bit) { true });
                                $tmp962 = 0;
                                goto $l960;
                                $l973:;
                                $tmp944 = 0;
                                goto $l942;
                                $l974:;
                                $tmp543 = 30;
                                goto $l541;
                                $l975:;
                                return $finallyReturn971;
                            }
                            }
                        }
                        $tmp962 = -1;
                        goto $l960;
                        $l960:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w963));
                        w963 = NULL;
                        switch ($tmp962) {
                            case -1: goto $l977;
                            case 0: goto $l973;
                        }
                        $l977:;
                    }
                    goto $l952;
                    $l953:;
                }
                $tmp944 = -1;
                goto $l942;
                $l942:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$319$17945));
                Iter$319$17945 = NULL;
                switch ($tmp944) {
                    case -1: goto $l978;
                    case 0: goto $l974;
                }
                $l978:;
            }
            {
                int $tmp981;
                {
                    ITable* $tmp985 = ((panda$collections$Iterable*) other935)->$class->itable;
                    while ($tmp985->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp985 = $tmp985->next;
                    }
                    $fn987 $tmp986 = $tmp985->methods[0];
                    panda$collections$Iterator* $tmp988 = $tmp986(((panda$collections$Iterable*) other935));
                    $tmp984 = $tmp988;
                    $tmp983 = $tmp984;
                    Iter$324$17982 = $tmp983;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp983));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp984));
                    $l989:;
                    ITable* $tmp992 = Iter$324$17982->$class->itable;
                    while ($tmp992->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp992 = $tmp992->next;
                    }
                    $fn994 $tmp993 = $tmp992->methods[0];
                    panda$core$Bit $tmp995 = $tmp993(Iter$324$17982);
                    panda$core$Bit $tmp996 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp995);
                    bool $tmp991 = $tmp996.value;
                    if (!$tmp991) goto $l990;
                    {
                        int $tmp999;
                        {
                            ITable* $tmp1003 = Iter$324$17982->$class->itable;
                            while ($tmp1003->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1003 = $tmp1003->next;
                            }
                            $fn1005 $tmp1004 = $tmp1003->methods[1];
                            panda$core$Object* $tmp1006 = $tmp1004(Iter$324$17982);
                            $tmp1002 = $tmp1006;
                            $tmp1001 = ((org$pandalanguage$pandac$IRNode*) $tmp1002);
                            s1000 = $tmp1001;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1001));
                            panda$core$Panda$unref$panda$core$Object($tmp1002);
                            panda$core$Bit $tmp1008 = (($fn1007) s1000->$class->vtable[4])(s1000);
                            if ($tmp1008.value) {
                            {
                                $finallyReturn1008 = ((panda$core$Bit) { true });
                                $tmp999 = 0;
                                goto $l997;
                                $l1010:;
                                $tmp981 = 0;
                                goto $l979;
                                $l1011:;
                                $tmp543 = 31;
                                goto $l541;
                                $l1012:;
                                return $finallyReturn1008;
                            }
                            }
                        }
                        $tmp999 = -1;
                        goto $l997;
                        $l997:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1000));
                        s1000 = NULL;
                        switch ($tmp999) {
                            case 0: goto $l1010;
                            case -1: goto $l1014;
                        }
                        $l1014:;
                    }
                    goto $l989;
                    $l990:;
                }
                $tmp981 = -1;
                goto $l979;
                $l979:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$324$17982));
                Iter$324$17982 = NULL;
                switch ($tmp981) {
                    case 0: goto $l1011;
                    case -1: goto $l1015;
                }
                $l1015:;
            }
            $finallyReturn1015 = ((panda$core$Bit) { false });
            $tmp543 = 32;
            goto $l541;
            $l1017:;
            return $finallyReturn1015;
        }
        }
        else {
        panda$core$Bit $tmp1019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1019.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1021 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 16));
            target1020 = *$tmp1021;
            org$pandalanguage$pandac$MethodRef** $tmp1023 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$238_9544->$data + 24));
            m1022 = *$tmp1023;
            $finallyReturn1023 = ((panda$core$Bit) { false });
            $tmp543 = 33;
            goto $l541;
            $l1025:;
            return $finallyReturn1023;
        }
        }
        else {
        panda$core$Bit $tmp1027 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1027.value) {
        {
            panda$core$UInt64* $tmp1029 = ((panda$core$UInt64*) ((char*) $match$238_9544->$data + 24));
            value1028 = *$tmp1029;
            $finallyReturn1029 = ((panda$core$Bit) { false });
            $tmp543 = 34;
            goto $l541;
            $l1031:;
            return $finallyReturn1029;
        }
        }
        else {
        panda$core$Bit $tmp1033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1033.value) {
        {
            $finallyReturn1033 = ((panda$core$Bit) { false });
            $tmp543 = 35;
            goto $l541;
            $l1035:;
            return $finallyReturn1033;
        }
        }
        else {
        panda$core$Bit $tmp1037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1037.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1039 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$238_9544->$data + 16));
            op1038 = *$tmp1039;
            org$pandalanguage$pandac$IRNode** $tmp1041 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 24));
            base1040 = *$tmp1041;
            panda$core$Bit $tmp1044 = (($fn1043) base1040->$class->vtable[4])(base1040);
            $finallyReturn1041 = $tmp1044;
            $tmp543 = 36;
            goto $l541;
            $l1045:;
            return $finallyReturn1041;
        }
        }
        else {
        panda$core$Bit $tmp1047 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1047.value) {
        {
            panda$core$String** $tmp1049 = ((panda$core$String**) ((char*) $match$238_9544->$data + 16));
            label1048 = *$tmp1049;
            org$pandalanguage$pandac$IRNode** $tmp1051 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 24));
            target1050 = *$tmp1051;
            org$pandalanguage$pandac$IRNode** $tmp1053 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 32));
            list1052 = *$tmp1053;
            panda$collections$ImmutableArray** $tmp1055 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9544->$data + 40));
            statements1054 = *$tmp1055;
            panda$core$Bit $tmp1057 = (($fn1056) list1052->$class->vtable[4])(list1052);
            if ($tmp1057.value) {
            {
                $finallyReturn1057 = ((panda$core$Bit) { true });
                $tmp543 = 37;
                goto $l541;
                $l1059:;
                return $finallyReturn1057;
            }
            }
            {
                int $tmp1063;
                {
                    ITable* $tmp1067 = ((panda$collections$Iterable*) statements1054)->$class->itable;
                    while ($tmp1067->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1067 = $tmp1067->next;
                    }
                    $fn1069 $tmp1068 = $tmp1067->methods[0];
                    panda$collections$Iterator* $tmp1070 = $tmp1068(((panda$collections$Iterable*) statements1054));
                    $tmp1066 = $tmp1070;
                    $tmp1065 = $tmp1066;
                    Iter$343$171064 = $tmp1065;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1065));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1066));
                    $l1071:;
                    ITable* $tmp1074 = Iter$343$171064->$class->itable;
                    while ($tmp1074->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1074 = $tmp1074->next;
                    }
                    $fn1076 $tmp1075 = $tmp1074->methods[0];
                    panda$core$Bit $tmp1077 = $tmp1075(Iter$343$171064);
                    panda$core$Bit $tmp1078 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1077);
                    bool $tmp1073 = $tmp1078.value;
                    if (!$tmp1073) goto $l1072;
                    {
                        int $tmp1081;
                        {
                            ITable* $tmp1085 = Iter$343$171064->$class->itable;
                            while ($tmp1085->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1085 = $tmp1085->next;
                            }
                            $fn1087 $tmp1086 = $tmp1085->methods[1];
                            panda$core$Object* $tmp1088 = $tmp1086(Iter$343$171064);
                            $tmp1084 = $tmp1088;
                            $tmp1083 = ((org$pandalanguage$pandac$IRNode*) $tmp1084);
                            s1082 = $tmp1083;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1083));
                            panda$core$Panda$unref$panda$core$Object($tmp1084);
                            panda$core$Bit $tmp1090 = (($fn1089) s1082->$class->vtable[4])(s1082);
                            if ($tmp1090.value) {
                            {
                                $finallyReturn1090 = ((panda$core$Bit) { true });
                                $tmp1081 = 0;
                                goto $l1079;
                                $l1092:;
                                $tmp1063 = 0;
                                goto $l1061;
                                $l1093:;
                                $tmp543 = 38;
                                goto $l541;
                                $l1094:;
                                return $finallyReturn1090;
                            }
                            }
                        }
                        $tmp1081 = -1;
                        goto $l1079;
                        $l1079:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1082));
                        s1082 = NULL;
                        switch ($tmp1081) {
                            case -1: goto $l1096;
                            case 0: goto $l1092;
                        }
                        $l1096:;
                    }
                    goto $l1071;
                    $l1072:;
                }
                $tmp1063 = -1;
                goto $l1061;
                $l1061:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$343$171064));
                Iter$343$171064 = NULL;
                switch ($tmp1063) {
                    case 0: goto $l1093;
                    case -1: goto $l1097;
                }
                $l1097:;
            }
            $finallyReturn1097 = ((panda$core$Bit) { false });
            $tmp543 = 39;
            goto $l541;
            $l1099:;
            return $finallyReturn1097;
        }
        }
        else {
        panda$core$Bit $tmp1101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1101.value) {
        {
            panda$core$Real64* $tmp1103 = ((panda$core$Real64*) ((char*) $match$238_9544->$data + 24));
            value1102 = *$tmp1103;
            $finallyReturn1103 = ((panda$core$Bit) { false });
            $tmp543 = 40;
            goto $l541;
            $l1105:;
            return $finallyReturn1103;
        }
        }
        else {
        panda$core$Bit $tmp1107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1107.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1109 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 16));
            value1108 = *$tmp1109;
            panda$core$Bit $tmp1112 = (($fn1111) value1108->$class->vtable[4])(value1108);
            $finallyReturn1109 = $tmp1112;
            $tmp543 = 41;
            goto $l541;
            $l1113:;
            return $finallyReturn1109;
        }
        }
        else {
        panda$core$Bit $tmp1115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1115.value) {
        {
            panda$core$Int64* $tmp1117 = ((panda$core$Int64*) ((char*) $match$238_9544->$data + 24));
            id1116 = *$tmp1117;
            $finallyReturn1117 = ((panda$core$Bit) { false });
            $tmp543 = 42;
            goto $l541;
            $l1119:;
            return $finallyReturn1117;
        }
        }
        else {
        panda$core$Bit $tmp1121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1121.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1123 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 0));
            base1122 = *$tmp1123;
            panda$core$Int64* $tmp1125 = ((panda$core$Int64*) ((char*) $match$238_9544->$data + 8));
            id1124 = *$tmp1125;
            panda$core$Bit $tmp1128 = (($fn1127) base1122->$class->vtable[4])(base1122);
            $finallyReturn1125 = $tmp1128;
            $tmp543 = 43;
            goto $l541;
            $l1129:;
            return $finallyReturn1125;
        }
        }
        else {
        panda$core$Bit $tmp1131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1131.value) {
        {
            $finallyReturn1131 = ((panda$core$Bit) { false });
            $tmp543 = 44;
            goto $l541;
            $l1133:;
            return $finallyReturn1131;
        }
        }
        else {
        panda$core$Bit $tmp1135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1135.value) {
        {
            panda$core$String** $tmp1137 = ((panda$core$String**) ((char*) $match$238_9544->$data + 16));
            str1136 = *$tmp1137;
            $finallyReturn1137 = ((panda$core$Bit) { false });
            $tmp543 = 45;
            goto $l541;
            $l1139:;
            return $finallyReturn1137;
        }
        }
        else {
        panda$core$Bit $tmp1141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1141.value) {
        {
            $finallyReturn1141 = ((panda$core$Bit) { false });
            $tmp543 = 46;
            goto $l541;
            $l1143:;
            return $finallyReturn1141;
        }
        }
        else {
        panda$core$Bit $tmp1145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1145.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1147 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 16));
            test1146 = *$tmp1147;
            org$pandalanguage$pandac$IRNode** $tmp1149 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 24));
            ifTrue1148 = *$tmp1149;
            org$pandalanguage$pandac$IRNode** $tmp1151 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 32));
            ifFalse1150 = *$tmp1151;
            panda$core$Bit $tmp1156 = (($fn1155) test1146->$class->vtable[4])(test1146);
            bool $tmp1154 = $tmp1156.value;
            if ($tmp1154) goto $l1157;
            panda$core$Bit $tmp1159 = (($fn1158) ifTrue1148->$class->vtable[4])(ifTrue1148);
            $tmp1154 = $tmp1159.value;
            $l1157:;
            panda$core$Bit $tmp1160 = { $tmp1154 };
            bool $tmp1153 = $tmp1160.value;
            if ($tmp1153) goto $l1161;
            panda$core$Bit $tmp1163 = (($fn1162) ifFalse1150->$class->vtable[4])(ifFalse1150);
            $tmp1153 = $tmp1163.value;
            $l1161:;
            panda$core$Bit $tmp1164 = { $tmp1153 };
            $finallyReturn1151 = $tmp1164;
            $tmp543 = 47;
            goto $l541;
            $l1165:;
            return $finallyReturn1151;
        }
        }
        else {
        panda$core$Bit $tmp1167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1167.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1169 = ((org$pandalanguage$pandac$Type**) ((char*) $match$238_9544->$data + 16));
            type1168 = *$tmp1169;
            $finallyReturn1169 = ((panda$core$Bit) { false });
            $tmp543 = 48;
            goto $l541;
            $l1171:;
            return $finallyReturn1169;
        }
        }
        else {
        panda$core$Bit $tmp1173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1173.value) {
        {
            panda$core$String** $tmp1175 = ((panda$core$String**) ((char*) $match$238_9544->$data + 16));
            name1174 = *$tmp1175;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1176.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1178 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 24));
            base1177 = *$tmp1178;
            panda$collections$ImmutableArray** $tmp1180 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9544->$data + 32));
            args1179 = *$tmp1180;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1181.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1183 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 24));
            target1182 = *$tmp1183;
            panda$collections$ImmutableArray** $tmp1185 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9544->$data + 32));
            methods1184 = *$tmp1185;
            panda$collections$ImmutableArray** $tmp1187 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9544->$data + 40));
            args1186 = *$tmp1187;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1188.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1190 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 16));
            target1189 = *$tmp1190;
            panda$collections$ImmutableArray** $tmp1192 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9544->$data + 24));
            methods1191 = *$tmp1192;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1193.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1195 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 16));
            start1194 = *$tmp1195;
            org$pandalanguage$pandac$IRNode** $tmp1197 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 24));
            end1196 = *$tmp1197;
            panda$core$Bit* $tmp1199 = ((panda$core$Bit*) ((char*) $match$238_9544->$data + 32));
            inclusive1198 = *$tmp1199;
            org$pandalanguage$pandac$IRNode** $tmp1201 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 33));
            step1200 = *$tmp1201;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1202.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1204 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$238_9544->$data + 16));
            kind1203 = *$tmp1204;
            panda$collections$ImmutableArray** $tmp1206 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9544->$data + 24));
            decls1205 = *$tmp1206;
            {
                int $tmp1209;
                {
                    ITable* $tmp1213 = ((panda$collections$Iterable*) decls1205)->$class->itable;
                    while ($tmp1213->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1213 = $tmp1213->next;
                    }
                    $fn1215 $tmp1214 = $tmp1213->methods[0];
                    panda$collections$Iterator* $tmp1216 = $tmp1214(((panda$collections$Iterable*) decls1205));
                    $tmp1212 = $tmp1216;
                    $tmp1211 = $tmp1212;
                    Iter$378$171210 = $tmp1211;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1211));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1212));
                    $l1217:;
                    ITable* $tmp1220 = Iter$378$171210->$class->itable;
                    while ($tmp1220->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1220 = $tmp1220->next;
                    }
                    $fn1222 $tmp1221 = $tmp1220->methods[0];
                    panda$core$Bit $tmp1223 = $tmp1221(Iter$378$171210);
                    panda$core$Bit $tmp1224 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1223);
                    bool $tmp1219 = $tmp1224.value;
                    if (!$tmp1219) goto $l1218;
                    {
                        int $tmp1227;
                        {
                            ITable* $tmp1231 = Iter$378$171210->$class->itable;
                            while ($tmp1231->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1231 = $tmp1231->next;
                            }
                            $fn1233 $tmp1232 = $tmp1231->methods[1];
                            panda$core$Object* $tmp1234 = $tmp1232(Iter$378$171210);
                            $tmp1230 = $tmp1234;
                            $tmp1229 = ((org$pandalanguage$pandac$IRNode*) $tmp1230);
                            d1228 = $tmp1229;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1229));
                            panda$core$Panda$unref$panda$core$Object($tmp1230);
                            panda$core$Bit $tmp1236 = (($fn1235) d1228->$class->vtable[4])(d1228);
                            if ($tmp1236.value) {
                            {
                                $finallyReturn1236 = ((panda$core$Bit) { true });
                                $tmp1227 = 0;
                                goto $l1225;
                                $l1238:;
                                $tmp1209 = 0;
                                goto $l1207;
                                $l1239:;
                                $tmp543 = 49;
                                goto $l541;
                                $l1240:;
                                return $finallyReturn1236;
                            }
                            }
                        }
                        $tmp1227 = -1;
                        goto $l1225;
                        $l1225:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) d1228));
                        d1228 = NULL;
                        switch ($tmp1227) {
                            case -1: goto $l1242;
                            case 0: goto $l1238;
                        }
                        $l1242:;
                    }
                    goto $l1217;
                    $l1218:;
                }
                $tmp1209 = -1;
                goto $l1207;
                $l1207:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$378$171210));
                Iter$378$171210 = NULL;
                switch ($tmp1209) {
                    case 0: goto $l1239;
                    case -1: goto $l1243;
                }
                $l1243:;
            }
            $finallyReturn1243 = ((panda$core$Bit) { false });
            $tmp543 = 50;
            goto $l541;
            $l1245:;
            return $finallyReturn1243;
        }
        }
        else {
        panda$core$Bit $tmp1247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1247.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp1249 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$238_9544->$data + 16));
            variable1248 = *$tmp1249;
            $finallyReturn1249 = ((panda$core$Bit) { false });
            $tmp543 = 51;
            goto $l541;
            $l1251:;
            return $finallyReturn1249;
        }
        }
        else {
        panda$core$Bit $tmp1253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1253.value) {
        {
            panda$collections$ImmutableArray** $tmp1255 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9544->$data + 16));
            tests1254 = *$tmp1255;
            panda$collections$ImmutableArray** $tmp1257 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9544->$data + 24));
            statements1256 = *$tmp1257;
            {
                int $tmp1260;
                {
                    ITable* $tmp1264 = ((panda$collections$Iterable*) tests1254)->$class->itable;
                    while ($tmp1264->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1264 = $tmp1264->next;
                    }
                    $fn1266 $tmp1265 = $tmp1264->methods[0];
                    panda$collections$Iterator* $tmp1267 = $tmp1265(((panda$collections$Iterable*) tests1254));
                    $tmp1263 = $tmp1267;
                    $tmp1262 = $tmp1263;
                    Iter$387$171261 = $tmp1262;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1262));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1263));
                    $l1268:;
                    ITable* $tmp1271 = Iter$387$171261->$class->itable;
                    while ($tmp1271->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1271 = $tmp1271->next;
                    }
                    $fn1273 $tmp1272 = $tmp1271->methods[0];
                    panda$core$Bit $tmp1274 = $tmp1272(Iter$387$171261);
                    panda$core$Bit $tmp1275 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1274);
                    bool $tmp1270 = $tmp1275.value;
                    if (!$tmp1270) goto $l1269;
                    {
                        int $tmp1278;
                        {
                            ITable* $tmp1282 = Iter$387$171261->$class->itable;
                            while ($tmp1282->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1282 = $tmp1282->next;
                            }
                            $fn1284 $tmp1283 = $tmp1282->methods[1];
                            panda$core$Object* $tmp1285 = $tmp1283(Iter$387$171261);
                            $tmp1281 = $tmp1285;
                            $tmp1280 = ((org$pandalanguage$pandac$IRNode*) $tmp1281);
                            t1279 = $tmp1280;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1280));
                            panda$core$Panda$unref$panda$core$Object($tmp1281);
                            panda$core$Bit $tmp1287 = (($fn1286) t1279->$class->vtable[4])(t1279);
                            if ($tmp1287.value) {
                            {
                                $finallyReturn1287 = ((panda$core$Bit) { true });
                                $tmp1278 = 0;
                                goto $l1276;
                                $l1289:;
                                $tmp1260 = 0;
                                goto $l1258;
                                $l1290:;
                                $tmp543 = 52;
                                goto $l541;
                                $l1291:;
                                return $finallyReturn1287;
                            }
                            }
                        }
                        $tmp1278 = -1;
                        goto $l1276;
                        $l1276:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1279));
                        t1279 = NULL;
                        switch ($tmp1278) {
                            case -1: goto $l1293;
                            case 0: goto $l1289;
                        }
                        $l1293:;
                    }
                    goto $l1268;
                    $l1269:;
                }
                $tmp1260 = -1;
                goto $l1258;
                $l1258:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$387$171261));
                Iter$387$171261 = NULL;
                switch ($tmp1260) {
                    case 0: goto $l1290;
                    case -1: goto $l1294;
                }
                $l1294:;
            }
            {
                int $tmp1297;
                {
                    ITable* $tmp1301 = ((panda$collections$Iterable*) statements1256)->$class->itable;
                    while ($tmp1301->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1301 = $tmp1301->next;
                    }
                    $fn1303 $tmp1302 = $tmp1301->methods[0];
                    panda$collections$Iterator* $tmp1304 = $tmp1302(((panda$collections$Iterable*) statements1256));
                    $tmp1300 = $tmp1304;
                    $tmp1299 = $tmp1300;
                    Iter$392$171298 = $tmp1299;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1299));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1300));
                    $l1305:;
                    ITable* $tmp1308 = Iter$392$171298->$class->itable;
                    while ($tmp1308->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1308 = $tmp1308->next;
                    }
                    $fn1310 $tmp1309 = $tmp1308->methods[0];
                    panda$core$Bit $tmp1311 = $tmp1309(Iter$392$171298);
                    panda$core$Bit $tmp1312 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1311);
                    bool $tmp1307 = $tmp1312.value;
                    if (!$tmp1307) goto $l1306;
                    {
                        int $tmp1315;
                        {
                            ITable* $tmp1319 = Iter$392$171298->$class->itable;
                            while ($tmp1319->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1319 = $tmp1319->next;
                            }
                            $fn1321 $tmp1320 = $tmp1319->methods[1];
                            panda$core$Object* $tmp1322 = $tmp1320(Iter$392$171298);
                            $tmp1318 = $tmp1322;
                            $tmp1317 = ((org$pandalanguage$pandac$IRNode*) $tmp1318);
                            s1316 = $tmp1317;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1317));
                            panda$core$Panda$unref$panda$core$Object($tmp1318);
                            panda$core$Bit $tmp1324 = (($fn1323) s1316->$class->vtable[4])(s1316);
                            if ($tmp1324.value) {
                            {
                                $finallyReturn1324 = ((panda$core$Bit) { true });
                                $tmp1315 = 0;
                                goto $l1313;
                                $l1326:;
                                $tmp1297 = 0;
                                goto $l1295;
                                $l1327:;
                                $tmp543 = 53;
                                goto $l541;
                                $l1328:;
                                return $finallyReturn1324;
                            }
                            }
                        }
                        $tmp1315 = -1;
                        goto $l1313;
                        $l1313:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1316));
                        s1316 = NULL;
                        switch ($tmp1315) {
                            case -1: goto $l1330;
                            case 0: goto $l1326;
                        }
                        $l1330:;
                    }
                    goto $l1305;
                    $l1306:;
                }
                $tmp1297 = -1;
                goto $l1295;
                $l1295:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$392$171298));
                Iter$392$171298 = NULL;
                switch ($tmp1297) {
                    case -1: goto $l1331;
                    case 0: goto $l1327;
                }
                $l1331:;
            }
            $finallyReturn1331 = ((panda$core$Bit) { false });
            $tmp543 = 54;
            goto $l541;
            $l1333:;
            return $finallyReturn1331;
        }
        }
        else {
        panda$core$Bit $tmp1335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9544->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp1335.value) {
        {
            panda$core$String** $tmp1337 = ((panda$core$String**) ((char*) $match$238_9544->$data + 16));
            label1336 = *$tmp1337;
            org$pandalanguage$pandac$IRNode** $tmp1339 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9544->$data + 24));
            test1338 = *$tmp1339;
            panda$collections$ImmutableArray** $tmp1341 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9544->$data + 32));
            statements1340 = *$tmp1341;
            panda$core$Bit $tmp1343 = (($fn1342) test1338->$class->vtable[4])(test1338);
            if ($tmp1343.value) {
            {
                $finallyReturn1343 = ((panda$core$Bit) { true });
                $tmp543 = 55;
                goto $l541;
                $l1345:;
                return $finallyReturn1343;
            }
            }
            {
                int $tmp1349;
                {
                    ITable* $tmp1353 = ((panda$collections$Iterable*) statements1340)->$class->itable;
                    while ($tmp1353->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1353 = $tmp1353->next;
                    }
                    $fn1355 $tmp1354 = $tmp1353->methods[0];
                    panda$collections$Iterator* $tmp1356 = $tmp1354(((panda$collections$Iterable*) statements1340));
                    $tmp1352 = $tmp1356;
                    $tmp1351 = $tmp1352;
                    Iter$402$171350 = $tmp1351;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1351));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1352));
                    $l1357:;
                    ITable* $tmp1360 = Iter$402$171350->$class->itable;
                    while ($tmp1360->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1360 = $tmp1360->next;
                    }
                    $fn1362 $tmp1361 = $tmp1360->methods[0];
                    panda$core$Bit $tmp1363 = $tmp1361(Iter$402$171350);
                    panda$core$Bit $tmp1364 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1363);
                    bool $tmp1359 = $tmp1364.value;
                    if (!$tmp1359) goto $l1358;
                    {
                        int $tmp1367;
                        {
                            ITable* $tmp1371 = Iter$402$171350->$class->itable;
                            while ($tmp1371->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1371 = $tmp1371->next;
                            }
                            $fn1373 $tmp1372 = $tmp1371->methods[1];
                            panda$core$Object* $tmp1374 = $tmp1372(Iter$402$171350);
                            $tmp1370 = $tmp1374;
                            $tmp1369 = ((org$pandalanguage$pandac$IRNode*) $tmp1370);
                            s1368 = $tmp1369;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1369));
                            panda$core$Panda$unref$panda$core$Object($tmp1370);
                            panda$core$Bit $tmp1376 = (($fn1375) s1368->$class->vtable[4])(s1368);
                            if ($tmp1376.value) {
                            {
                                $finallyReturn1376 = ((panda$core$Bit) { true });
                                $tmp1367 = 0;
                                goto $l1365;
                                $l1378:;
                                $tmp1349 = 0;
                                goto $l1347;
                                $l1379:;
                                $tmp543 = 56;
                                goto $l541;
                                $l1380:;
                                return $finallyReturn1376;
                            }
                            }
                        }
                        $tmp1367 = -1;
                        goto $l1365;
                        $l1365:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1368));
                        s1368 = NULL;
                        switch ($tmp1367) {
                            case -1: goto $l1382;
                            case 0: goto $l1378;
                        }
                        $l1382:;
                    }
                    goto $l1357;
                    $l1358:;
                }
                $tmp1349 = -1;
                goto $l1347;
                $l1347:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$402$171350));
                Iter$402$171350 = NULL;
                switch ($tmp1349) {
                    case 0: goto $l1379;
                    case -1: goto $l1383;
                }
                $l1383:;
            }
            $finallyReturn1383 = ((panda$core$Bit) { false });
            $tmp543 = 57;
            goto $l541;
            $l1385:;
            return $finallyReturn1383;
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
    $tmp543 = -1;
    goto $l541;
    $l541:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp545));
    switch ($tmp543) {
        case 35: goto $l1035;
        case 0: goto $l559;
        case 10: goto $l698;
        case 36: goto $l1045;
        case 56: goto $l1380;
        case 30: goto $l975;
        case 26: goto $l883;
        case 41: goto $l1113;
        case 3: goto $l624;
        case 5: goto $l635;
        case 2: goto $l586;
        case 11: goto $l708;
        case 4: goto $l629;
        case 24: goto $l867;
        case 43: goto $l1129;
        case 21: goto $l819;
        case 48: goto $l1171;
        case 42: goto $l1119;
        case 49: goto $l1240;
        case 25: goto $l875;
        case 6: goto $l644;
        case 33: goto $l1025;
        case 52: goto $l1291;
        case 32: goto $l1017;
        case 47: goto $l1165;
        case 16: goto $l755;
        case 17: goto $l790;
        case 37: goto $l1059;
        case 12: goto $l718;
        case 13: goto $l724;
        case 31: goto $l1012;
        case 54: goto $l1333;
        case 22: goto $l854;
        case 55: goto $l1345;
        case 23: goto $l861;
        case 44: goto $l1133;
        case 15: goto $l743;
        case 27: goto $l923;
        case 38: goto $l1094;
        case 9: goto $l692;
        case 28: goto $l928;
        case 34: goto $l1031;
        case 19: goto $l799;
        case 8: goto $l684;
        case 50: goto $l1245;
        case 18: goto $l795;
        case 20: goto $l807;
        case 29: goto $l940;
        case 40: goto $l1105;
        case 39: goto $l1099;
        case 53: goto $l1328;
        case 46: goto $l1143;
        case -1: goto $l1387;
        case 57: goto $l1385;
        case 45: goto $l1139;
        case 51: goto $l1251;
        case 7: goto $l679;
        case 1: goto $l580;
        case 14: goto $l730;
    }
    $l1387:;
}
panda$core$String* org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$415_91391 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1392;
    org$pandalanguage$pandac$IRNode* test1394 = NULL;
    org$pandalanguage$pandac$IRNode* msg1396 = NULL;
    panda$core$String* $finallyReturn1397;
    panda$core$String* $tmp1399;
    panda$core$String* $tmp1400;
    panda$core$String* $tmp1401;
    panda$core$String* $tmp1402;
    panda$core$String* $tmp1403;
    panda$core$String* $finallyReturn1412;
    panda$core$String* $tmp1414;
    panda$core$String* $tmp1415;
    panda$core$String* $tmp1416;
    org$pandalanguage$pandac$IRNode* left1424 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op1426;
    org$pandalanguage$pandac$IRNode* right1428 = NULL;
    panda$core$String* $finallyReturn1429;
    panda$core$String* $tmp1431;
    panda$core$String* $tmp1432;
    panda$core$String* $tmp1433;
    panda$core$String* $tmp1434;
    panda$core$String* $tmp1435;
    panda$core$String* $tmp1436;
    panda$core$String* $tmp1437;
    panda$core$Object* $tmp1442;
    panda$core$Bit bit1453;
    panda$core$String* $finallyReturn1454;
    panda$core$String* $tmp1456;
    panda$core$String* $tmp1457;
    panda$collections$ImmutableArray* statements1462 = NULL;
    panda$core$MutableString* result1467 = NULL;
    panda$core$MutableString* $tmp1468;
    panda$core$MutableString* $tmp1469;
    panda$collections$Iterator* Iter$427$171475 = NULL;
    panda$collections$Iterator* $tmp1476;
    panda$collections$Iterator* $tmp1477;
    org$pandalanguage$pandac$IRNode* s1493 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1494;
    panda$core$Object* $tmp1495;
    panda$core$String* $tmp1500;
    panda$core$Char8 $tmp1505;
    panda$core$String* $finallyReturn1505;
    panda$core$String* $tmp1507;
    panda$core$String* $tmp1508;
    panda$collections$ImmutableArray* statements1515 = NULL;
    panda$collections$ImmutableArray* finally1517 = NULL;
    panda$core$MutableString* result1522 = NULL;
    panda$core$MutableString* $tmp1523;
    panda$core$MutableString* $tmp1524;
    panda$collections$Iterator* Iter$434$171530 = NULL;
    panda$collections$Iterator* $tmp1531;
    panda$collections$Iterator* $tmp1532;
    org$pandalanguage$pandac$IRNode* s1548 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1549;
    panda$core$Object* $tmp1550;
    panda$core$String* $tmp1555;
    panda$collections$Iterator* Iter$438$171564 = NULL;
    panda$collections$Iterator* $tmp1565;
    panda$collections$Iterator* $tmp1566;
    org$pandalanguage$pandac$IRNode* s1582 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1583;
    panda$core$Object* $tmp1584;
    panda$core$String* $tmp1589;
    panda$core$Char8 $tmp1594;
    panda$core$String* $finallyReturn1594;
    panda$core$String* $tmp1596;
    panda$core$String* $tmp1597;
    panda$core$String* label1604 = NULL;
    panda$core$String* $finallyReturn1605;
    panda$core$String* $tmp1607;
    panda$core$String* $tmp1608;
    panda$core$String* $tmp1609;
    panda$core$String* $finallyReturn1615;
    panda$core$String* $tmp1617;
    org$pandalanguage$pandac$MethodRef* m1622 = NULL;
    panda$collections$ImmutableArray* args1624 = NULL;
    panda$core$String* $finallyReturn1625;
    panda$core$String* $tmp1627;
    panda$core$String* $tmp1628;
    panda$core$String* $tmp1629;
    panda$core$String* $tmp1630;
    panda$core$String* $tmp1631;
    panda$core$String* $tmp1635;
    org$pandalanguage$pandac$IRNode* value1643 = NULL;
    org$pandalanguage$pandac$Type* type1645 = NULL;
    org$pandalanguage$pandac$Type* $tmp1647;
    org$pandalanguage$pandac$Type* $tmp1650;
    panda$core$String* $finallyReturn1652;
    panda$core$String* $tmp1654;
    panda$core$String* $tmp1655;
    panda$core$String* $tmp1656;
    panda$core$String* $tmp1657;
    panda$core$String* $tmp1658;
    panda$core$String* $finallyReturn1667;
    panda$core$String* $tmp1669;
    panda$core$String* $tmp1670;
    panda$core$String* $tmp1671;
    panda$core$String* $tmp1672;
    panda$core$String* $tmp1673;
    org$pandalanguage$pandac$ChoiceEntry* ce1684 = NULL;
    panda$core$String* $finallyReturn1685;
    panda$core$String* $tmp1687;
    panda$core$String* $tmp1688;
    org$pandalanguage$pandac$IRNode* base1693 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce1695 = NULL;
    panda$core$Int64 field1697;
    panda$core$String* $finallyReturn1698;
    panda$core$String* $tmp1700;
    panda$core$String* $tmp1701;
    panda$core$String* $tmp1702;
    panda$core$String* $tmp1703;
    panda$core$String* $tmp1704;
    panda$core$String* $tmp1705;
    panda$core$String* $tmp1706;
    panda$core$Object* $tmp1714;
    org$pandalanguage$pandac$Type* type1722 = NULL;
    org$pandalanguage$pandac$IRNode* call1724 = NULL;
    org$pandalanguage$pandac$IRNode* $match$460_171729 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1730;
    panda$collections$ImmutableArray* args1732 = NULL;
    panda$core$String* $finallyReturn1733;
    panda$core$String* $tmp1735;
    panda$core$String* $tmp1736;
    panda$core$String* $tmp1737;
    panda$core$String* $tmp1738;
    panda$core$String* $tmp1739;
    panda$core$String* $tmp1743;
    org$pandalanguage$pandac$Type* Type1753 = NULL;
    panda$core$String* $finallyReturn1754;
    panda$core$String* $tmp1756;
    panda$core$String* label1761 = NULL;
    panda$core$String* $finallyReturn1762;
    panda$core$String* $tmp1764;
    panda$core$String* $tmp1765;
    panda$core$String* $tmp1766;
    panda$core$String* $finallyReturn1772;
    panda$core$String* $tmp1774;
    org$pandalanguage$pandac$IRNode* target1779 = NULL;
    org$pandalanguage$pandac$IRNode* value1781 = NULL;
    panda$core$String* $finallyReturn1782;
    panda$core$String* $tmp1784;
    panda$core$String* $tmp1785;
    panda$core$String* $tmp1786;
    panda$core$String* $tmp1787;
    panda$core$String* $tmp1788;
    panda$core$String* $finallyReturn1797;
    panda$core$String* $tmp1799;
    panda$core$String* $tmp1800;
    panda$core$String* label1806 = NULL;
    panda$collections$ImmutableArray* statements1808 = NULL;
    org$pandalanguage$pandac$IRNode* test1810 = NULL;
    panda$core$MutableString* result1815 = NULL;
    panda$core$MutableString* $tmp1816;
    panda$core$MutableString* $tmp1817;
    panda$core$String* $tmp1819;
    panda$core$String* $tmp1820;
    panda$collections$Iterator* Iter$484$171828 = NULL;
    panda$collections$Iterator* $tmp1829;
    panda$collections$Iterator* $tmp1830;
    org$pandalanguage$pandac$IRNode* s1846 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1847;
    panda$core$Object* $tmp1848;
    panda$core$String* $tmp1853;
    panda$core$String* $tmp1858;
    panda$core$String* $tmp1859;
    panda$core$String* $finallyReturn1863;
    panda$core$String* $tmp1865;
    panda$core$String* $tmp1866;
    org$pandalanguage$pandac$IRNode* expr1873 = NULL;
    org$pandalanguage$pandac$IRNode* stmt1875 = NULL;
    panda$core$String* $finallyReturn1876;
    panda$core$String* $tmp1878;
    panda$core$String* $tmp1879;
    panda$core$String* $tmp1880;
    panda$core$String* $tmp1881;
    panda$core$String* $tmp1882;
    org$pandalanguage$pandac$IRNode* base1893 = NULL;
    org$pandalanguage$pandac$FieldDecl* field1895 = NULL;
    panda$core$String* $finallyReturn1896;
    panda$core$String* $tmp1898;
    panda$core$String* $tmp1899;
    panda$core$String* $tmp1900;
    panda$core$String* $tmp1901;
    panda$core$String* $tmp1902;
    org$pandalanguage$pandac$IRNode* test1913 = NULL;
    panda$collections$ImmutableArray* ifTrue1915 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse1917 = NULL;
    panda$core$MutableString* result1922 = NULL;
    panda$core$MutableString* $tmp1923;
    panda$core$MutableString* $tmp1924;
    panda$core$String* $tmp1926;
    panda$core$String* $tmp1927;
    panda$collections$Iterator* Iter$495$171935 = NULL;
    panda$collections$Iterator* $tmp1936;
    panda$collections$Iterator* $tmp1937;
    org$pandalanguage$pandac$IRNode* s1953 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1954;
    panda$core$Object* $tmp1955;
    panda$core$String* $tmp1960;
    panda$core$Char8 $tmp1965;
    panda$core$String* $tmp1966;
    panda$core$String* $tmp1967;
    panda$core$String* $finallyReturn1971;
    panda$core$String* $tmp1973;
    panda$core$String* $tmp1974;
    panda$core$UInt64 value1981;
    panda$core$String* $finallyReturn1982;
    panda$core$String* $tmp1984;
    panda$core$String* $tmp1985;
    org$pandalanguage$pandac$IRNode* value1990 = NULL;
    panda$core$String* $finallyReturn1991;
    panda$core$String* $tmp1993;
    panda$core$String* $tmp1994;
    panda$core$String* $tmp1995;
    org$pandalanguage$pandac$IRNode* value2003 = NULL;
    panda$core$String* $finallyReturn2004;
    panda$core$String* $tmp2006;
    panda$core$String* $tmp2007;
    panda$core$String* $tmp2008;
    panda$core$String* label2016 = NULL;
    panda$collections$ImmutableArray* statements2018 = NULL;
    panda$core$MutableString* result2023 = NULL;
    panda$core$MutableString* $tmp2024;
    panda$core$MutableString* $tmp2025;
    panda$core$String* $tmp2027;
    panda$core$String* $tmp2028;
    panda$collections$Iterator* Iter$515$172036 = NULL;
    panda$collections$Iterator* $tmp2037;
    panda$collections$Iterator* $tmp2038;
    org$pandalanguage$pandac$IRNode* s2054 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2055;
    panda$core$Object* $tmp2056;
    panda$core$String* $tmp2061;
    panda$core$Char8 $tmp2066;
    panda$core$String* $finallyReturn2066;
    panda$core$String* $tmp2068;
    panda$core$String* $tmp2069;
    org$pandalanguage$pandac$IRNode* value2076 = NULL;
    panda$collections$ImmutableArray* whens2078 = NULL;
    panda$collections$ImmutableArray* other2080 = NULL;
    panda$core$MutableString* result2085 = NULL;
    panda$core$MutableString* $tmp2086;
    panda$core$MutableString* $tmp2087;
    panda$core$String* $tmp2089;
    panda$core$String* $tmp2090;
    panda$collections$Iterator* Iter$522$172098 = NULL;
    panda$collections$Iterator* $tmp2099;
    panda$collections$Iterator* $tmp2100;
    org$pandalanguage$pandac$IRNode* w2116 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2117;
    panda$core$Object* $tmp2118;
    panda$core$String* $tmp2123;
    panda$collections$Iterator* Iter$527$212132 = NULL;
    panda$collections$Iterator* $tmp2133;
    panda$collections$Iterator* $tmp2134;
    org$pandalanguage$pandac$IRNode* s2150 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2151;
    panda$core$Object* $tmp2152;
    panda$core$String* $tmp2157;
    panda$core$Char8 $tmp2162;
    panda$core$String* $finallyReturn2162;
    panda$core$String* $tmp2164;
    panda$core$String* $tmp2165;
    org$pandalanguage$pandac$IRNode* target2172 = NULL;
    org$pandalanguage$pandac$MethodRef* m2174 = NULL;
    panda$core$String* $finallyReturn2175;
    panda$core$String* $tmp2177;
    panda$core$String* $tmp2178;
    panda$core$String* $tmp2179;
    panda$core$String* $tmp2180;
    panda$core$String* $tmp2181;
    panda$core$String* $finallyReturn2190;
    panda$core$String* $tmp2192;
    panda$core$UInt64 value2196;
    panda$core$String* $finallyReturn2197;
    panda$core$String* $tmp2199;
    panda$core$String* $tmp2200;
    panda$core$Object* $tmp2202;
    panda$core$String* $finallyReturn2207;
    panda$core$String* $tmp2209;
    org$pandalanguage$pandac$parser$Token$Kind op2214;
    org$pandalanguage$pandac$IRNode* base2216 = NULL;
    panda$core$String* $finallyReturn2217;
    panda$core$String* $tmp2219;
    panda$core$String* $tmp2220;
    panda$core$String* $tmp2221;
    panda$core$String* $tmp2222;
    panda$core$String* $tmp2223;
    panda$core$Object* $tmp2224;
    panda$core$String* label2236 = NULL;
    org$pandalanguage$pandac$IRNode* target2238 = NULL;
    org$pandalanguage$pandac$IRNode* list2240 = NULL;
    panda$collections$ImmutableArray* statements2242 = NULL;
    panda$core$MutableString* result2247 = NULL;
    panda$core$MutableString* $tmp2248;
    panda$core$MutableString* $tmp2249;
    panda$core$String* $tmp2251;
    panda$core$String* $tmp2252;
    panda$core$String* $tmp2256;
    panda$core$String* $tmp2257;
    panda$core$String* $tmp2258;
    panda$core$String* $tmp2259;
    panda$collections$Iterator* Iter$550$172270 = NULL;
    panda$collections$Iterator* $tmp2271;
    panda$collections$Iterator* $tmp2272;
    org$pandalanguage$pandac$IRNode* s2288 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2289;
    panda$core$Object* $tmp2290;
    panda$core$String* $tmp2295;
    panda$core$Char8 $tmp2300;
    panda$core$String* $finallyReturn2300;
    panda$core$String* $tmp2302;
    panda$core$String* $tmp2303;
    panda$core$Real64 value2310;
    panda$core$String* $finallyReturn2311;
    panda$core$String* $tmp2313;
    panda$core$String* $tmp2314;
    org$pandalanguage$pandac$IRNode* value2319 = NULL;
    panda$core$String* $finallyReturn2320;
    panda$core$String* $tmp2322;
    panda$core$String* $tmp2323;
    panda$core$String* $tmp2324;
    panda$core$String* $finallyReturn2330;
    panda$core$String* $tmp2332;
    org$pandalanguage$pandac$Type* type2337 = NULL;
    panda$core$Int64 id2339;
    panda$core$String* $finallyReturn2340;
    panda$core$String* $tmp2342;
    panda$core$String* $tmp2343;
    panda$core$String* $tmp2344;
    panda$core$Object* $tmp2346;
    org$pandalanguage$pandac$IRNode* base2354 = NULL;
    panda$core$Int64 id2356;
    panda$core$String* $finallyReturn2357;
    panda$core$String* $tmp2359;
    panda$core$String* $tmp2360;
    panda$core$String* $tmp2361;
    panda$core$String* $tmp2362;
    panda$core$String* $tmp2363;
    panda$core$Object* $tmp2365;
    panda$core$String* $finallyReturn2375;
    panda$core$String* $tmp2377;
    panda$core$String* str2382 = NULL;
    panda$core$String* $finallyReturn2383;
    panda$core$String* $tmp2385;
    panda$core$String* $finallyReturn2388;
    panda$core$String* $tmp2390;
    org$pandalanguage$pandac$IRNode* test2395 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue2397 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse2399 = NULL;
    panda$core$String* $finallyReturn2400;
    panda$core$String* $tmp2402;
    panda$core$String* $tmp2403;
    panda$core$String* $tmp2404;
    panda$core$String* $tmp2405;
    panda$core$String* $tmp2406;
    panda$core$String* $tmp2407;
    panda$core$String* $tmp2408;
    org$pandalanguage$pandac$Type* type2422 = NULL;
    panda$core$String* $finallyReturn2423;
    panda$core$String* $tmp2425;
    panda$core$String* $tmp2426;
    panda$core$String* name2431 = NULL;
    panda$core$String* $finallyReturn2432;
    panda$core$String* $tmp2434;
    org$pandalanguage$pandac$IRNode* base2438 = NULL;
    panda$collections$ImmutableArray* args2440 = NULL;
    panda$core$String* $finallyReturn2441;
    panda$core$String* $tmp2443;
    panda$core$String* $tmp2444;
    panda$core$String* $tmp2445;
    panda$core$String* $tmp2446;
    panda$core$String* $tmp2447;
    panda$core$String* $tmp2452;
    org$pandalanguage$pandac$IRNode* target2460 = NULL;
    panda$collections$ImmutableArray* methods2462 = NULL;
    panda$collections$ImmutableArray* args2464 = NULL;
    panda$core$String* $finallyReturn2465;
    panda$core$String* $tmp2467;
    panda$core$String* $tmp2468;
    panda$core$String* $tmp2469;
    panda$core$String* $tmp2470;
    panda$core$String* $tmp2471;
    panda$core$String* $tmp2472;
    panda$core$String* $tmp2473;
    panda$core$Object* $tmp2478;
    panda$core$String* $tmp2483;
    org$pandalanguage$pandac$IRNode* target2491 = NULL;
    panda$collections$ImmutableArray* methods2493 = NULL;
    panda$core$String* $finallyReturn2494;
    panda$core$String* $tmp2496;
    panda$core$String* $tmp2497;
    panda$core$String* $tmp2498;
    panda$core$String* $tmp2499;
    panda$core$String* $tmp2500;
    panda$core$Object* $tmp2505;
    org$pandalanguage$pandac$IRNode* start2513 = NULL;
    org$pandalanguage$pandac$IRNode* end2515 = NULL;
    panda$core$Bit inclusive2517;
    org$pandalanguage$pandac$IRNode* step2519 = NULL;
    panda$core$MutableString* result2524 = NULL;
    panda$core$MutableString* $tmp2525;
    panda$core$MutableString* $tmp2526;
    panda$core$String* $tmp2530;
    panda$core$String* $tmp2531;
    panda$core$String* $finallyReturn2535;
    panda$core$String* $tmp2537;
    panda$core$String* $tmp2538;
    org$pandalanguage$pandac$Variable$Kind kind2545;
    panda$collections$ImmutableArray* decls2547 = NULL;
    panda$core$MutableString* result2552 = NULL;
    panda$core$MutableString* $tmp2553;
    panda$core$MutableString* $tmp2554;
    org$pandalanguage$pandac$Variable$Kind $match$604_172556;
    panda$core$String* $tmp2565;
    panda$core$String* $finallyReturn2566;
    panda$core$String* $tmp2568;
    panda$core$String* $tmp2569;
    org$pandalanguage$pandac$Variable* variable2576 = NULL;
    panda$core$String* $finallyReturn2577;
    panda$core$String* $tmp2579;
    panda$collections$ImmutableArray* tests2583 = NULL;
    panda$collections$ImmutableArray* statements2585 = NULL;
    panda$core$String* $finallyReturn2586;
    panda$core$String* $tmp2588;
    panda$core$String* $tmp2589;
    panda$core$String* $tmp2590;
    panda$core$String* $tmp2591;
    panda$core$String* $tmp2592;
    panda$core$String* $tmp2594;
    panda$core$String* $tmp2599;
    panda$core$String* label2608 = NULL;
    org$pandalanguage$pandac$IRNode* test2610 = NULL;
    panda$collections$ImmutableArray* statements2612 = NULL;
    panda$core$MutableString* result2617 = NULL;
    panda$core$MutableString* $tmp2618;
    panda$core$MutableString* $tmp2619;
    panda$core$String* $tmp2621;
    panda$core$String* $tmp2622;
    panda$core$String* $tmp2626;
    panda$core$String* $tmp2627;
    panda$collections$Iterator* Iter$622$172635 = NULL;
    panda$collections$Iterator* $tmp2636;
    panda$collections$Iterator* $tmp2637;
    org$pandalanguage$pandac$IRNode* s2653 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2654;
    panda$core$Object* $tmp2655;
    panda$core$String* $tmp2660;
    panda$core$Char8 $tmp2665;
    panda$core$String* $finallyReturn2665;
    panda$core$String* $tmp2667;
    panda$core$String* $tmp2668;
    int $tmp1390;
    {
        $tmp1392 = self;
        $match$415_91391 = $tmp1392;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1392));
        panda$core$Bit $tmp1393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp1393.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1395 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 16));
            test1394 = *$tmp1395;
            org$pandalanguage$pandac$IRNode** $tmp1397 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 24));
            msg1396 = *$tmp1397;
            if (((panda$core$Bit) { msg1396 != NULL }).value) {
            {
                panda$core$String* $tmp1405 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1404, ((panda$core$Object*) test1394));
                $tmp1403 = $tmp1405;
                panda$core$String* $tmp1407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1403, &$s1406);
                $tmp1402 = $tmp1407;
                panda$core$String* $tmp1408 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1402, ((panda$core$Object*) msg1396));
                $tmp1401 = $tmp1408;
                panda$core$String* $tmp1410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1401, &$s1409);
                $tmp1400 = $tmp1410;
                $tmp1399 = $tmp1400;
                $finallyReturn1397 = $tmp1399;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1399));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1400));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1401));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1402));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1403));
                $tmp1390 = 0;
                goto $l1388;
                $l1411:;
                return $finallyReturn1397;
            }
            }
            panda$core$String* $tmp1418 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1417, ((panda$core$Object*) test1394));
            $tmp1416 = $tmp1418;
            panda$core$String* $tmp1420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1416, &$s1419);
            $tmp1415 = $tmp1420;
            $tmp1414 = $tmp1415;
            $finallyReturn1412 = $tmp1414;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1414));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1415));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1416));
            $tmp1390 = 1;
            goto $l1388;
            $l1421:;
            return $finallyReturn1412;
        }
        }
        else {
        panda$core$Bit $tmp1423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1423.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1425 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 24));
            left1424 = *$tmp1425;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1427 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$415_91391->$data + 32));
            op1426 = *$tmp1427;
            org$pandalanguage$pandac$IRNode** $tmp1429 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 40));
            right1428 = *$tmp1429;
            panda$core$String* $tmp1439 = (($fn1438) left1424->$class->vtable[0])(left1424);
            $tmp1437 = $tmp1439;
            panda$core$String* $tmp1441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1437, &$s1440);
            $tmp1436 = $tmp1441;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1443;
            $tmp1443 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1443->value = op1426;
            $tmp1442 = ((panda$core$Object*) $tmp1443);
            panda$core$String* $tmp1444 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1436, $tmp1442);
            $tmp1435 = $tmp1444;
            panda$core$String* $tmp1446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1435, &$s1445);
            $tmp1434 = $tmp1446;
            panda$core$String* $tmp1447 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1434, ((panda$core$Object*) right1428));
            $tmp1433 = $tmp1447;
            panda$core$String* $tmp1449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1433, &$s1448);
            $tmp1432 = $tmp1449;
            $tmp1431 = $tmp1432;
            $finallyReturn1429 = $tmp1431;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1431));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1432));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1433));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1434));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1435));
            panda$core$Panda$unref$panda$core$Object($tmp1442);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1436));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1437));
            $tmp1390 = 2;
            goto $l1388;
            $l1450:;
            return $finallyReturn1429;
        }
        }
        else {
        panda$core$Bit $tmp1452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1452.value) {
        {
            panda$core$Bit* $tmp1454 = ((panda$core$Bit*) ((char*) $match$415_91391->$data + 24));
            bit1453 = *$tmp1454;
            panda$core$String* $tmp1458 = panda$core$Bit$convert$R$panda$core$String(bit1453);
            $tmp1457 = $tmp1458;
            $tmp1456 = $tmp1457;
            $finallyReturn1454 = $tmp1456;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1456));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1457));
            $tmp1390 = 3;
            goto $l1388;
            $l1459:;
            return $finallyReturn1454;
        }
        }
        else {
        panda$core$Bit $tmp1461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp1461.value) {
        {
            panda$collections$ImmutableArray** $tmp1463 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91391->$data + 16));
            statements1462 = *$tmp1463;
            int $tmp1466;
            {
                panda$core$MutableString* $tmp1470 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1470, &$s1471);
                $tmp1469 = $tmp1470;
                $tmp1468 = $tmp1469;
                result1467 = $tmp1468;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1468));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1469));
                {
                    int $tmp1474;
                    {
                        ITable* $tmp1478 = ((panda$collections$Iterable*) statements1462)->$class->itable;
                        while ($tmp1478->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1478 = $tmp1478->next;
                        }
                        $fn1480 $tmp1479 = $tmp1478->methods[0];
                        panda$collections$Iterator* $tmp1481 = $tmp1479(((panda$collections$Iterable*) statements1462));
                        $tmp1477 = $tmp1481;
                        $tmp1476 = $tmp1477;
                        Iter$427$171475 = $tmp1476;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1476));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1477));
                        $l1482:;
                        ITable* $tmp1485 = Iter$427$171475->$class->itable;
                        while ($tmp1485->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1485 = $tmp1485->next;
                        }
                        $fn1487 $tmp1486 = $tmp1485->methods[0];
                        panda$core$Bit $tmp1488 = $tmp1486(Iter$427$171475);
                        panda$core$Bit $tmp1489 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1488);
                        bool $tmp1484 = $tmp1489.value;
                        if (!$tmp1484) goto $l1483;
                        {
                            int $tmp1492;
                            {
                                ITable* $tmp1496 = Iter$427$171475->$class->itable;
                                while ($tmp1496->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1496 = $tmp1496->next;
                                }
                                $fn1498 $tmp1497 = $tmp1496->methods[1];
                                panda$core$Object* $tmp1499 = $tmp1497(Iter$427$171475);
                                $tmp1495 = $tmp1499;
                                $tmp1494 = ((org$pandalanguage$pandac$IRNode*) $tmp1495);
                                s1493 = $tmp1494;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1494));
                                panda$core$Panda$unref$panda$core$Object($tmp1495);
                                panda$core$String* $tmp1502 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1493), &$s1501);
                                $tmp1500 = $tmp1502;
                                panda$core$MutableString$append$panda$core$String(result1467, $tmp1500);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1500));
                            }
                            $tmp1492 = -1;
                            goto $l1490;
                            $l1490:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1493));
                            s1493 = NULL;
                            switch ($tmp1492) {
                                case -1: goto $l1503;
                            }
                            $l1503:;
                        }
                        goto $l1482;
                        $l1483:;
                    }
                    $tmp1474 = -1;
                    goto $l1472;
                    $l1472:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$427$171475));
                    Iter$427$171475 = NULL;
                    switch ($tmp1474) {
                        case -1: goto $l1504;
                    }
                    $l1504:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1505, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1467, $tmp1505);
                panda$core$String* $tmp1509 = panda$core$MutableString$finish$R$panda$core$String(result1467);
                $tmp1508 = $tmp1509;
                $tmp1507 = $tmp1508;
                $finallyReturn1505 = $tmp1507;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1507));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1508));
                $tmp1466 = 0;
                goto $l1464;
                $l1510:;
                $tmp1390 = 4;
                goto $l1388;
                $l1511:;
                return $finallyReturn1505;
            }
            $l1464:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1467));
            result1467 = NULL;
            switch ($tmp1466) {
                case 0: goto $l1510;
            }
            $l1513:;
        }
        }
        else {
        panda$core$Bit $tmp1514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp1514.value) {
        {
            panda$collections$ImmutableArray** $tmp1516 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91391->$data + 16));
            statements1515 = *$tmp1516;
            panda$collections$ImmutableArray** $tmp1518 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91391->$data + 24));
            finally1517 = *$tmp1518;
            int $tmp1521;
            {
                panda$core$MutableString* $tmp1525 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1525, &$s1526);
                $tmp1524 = $tmp1525;
                $tmp1523 = $tmp1524;
                result1522 = $tmp1523;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1523));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1524));
                {
                    int $tmp1529;
                    {
                        ITable* $tmp1533 = ((panda$collections$Iterable*) statements1515)->$class->itable;
                        while ($tmp1533->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1533 = $tmp1533->next;
                        }
                        $fn1535 $tmp1534 = $tmp1533->methods[0];
                        panda$collections$Iterator* $tmp1536 = $tmp1534(((panda$collections$Iterable*) statements1515));
                        $tmp1532 = $tmp1536;
                        $tmp1531 = $tmp1532;
                        Iter$434$171530 = $tmp1531;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1531));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1532));
                        $l1537:;
                        ITable* $tmp1540 = Iter$434$171530->$class->itable;
                        while ($tmp1540->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1540 = $tmp1540->next;
                        }
                        $fn1542 $tmp1541 = $tmp1540->methods[0];
                        panda$core$Bit $tmp1543 = $tmp1541(Iter$434$171530);
                        panda$core$Bit $tmp1544 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1543);
                        bool $tmp1539 = $tmp1544.value;
                        if (!$tmp1539) goto $l1538;
                        {
                            int $tmp1547;
                            {
                                ITable* $tmp1551 = Iter$434$171530->$class->itable;
                                while ($tmp1551->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1551 = $tmp1551->next;
                                }
                                $fn1553 $tmp1552 = $tmp1551->methods[1];
                                panda$core$Object* $tmp1554 = $tmp1552(Iter$434$171530);
                                $tmp1550 = $tmp1554;
                                $tmp1549 = ((org$pandalanguage$pandac$IRNode*) $tmp1550);
                                s1548 = $tmp1549;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1549));
                                panda$core$Panda$unref$panda$core$Object($tmp1550);
                                panda$core$String* $tmp1557 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1548), &$s1556);
                                $tmp1555 = $tmp1557;
                                panda$core$MutableString$append$panda$core$String(result1522, $tmp1555);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1555));
                            }
                            $tmp1547 = -1;
                            goto $l1545;
                            $l1545:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1548));
                            s1548 = NULL;
                            switch ($tmp1547) {
                                case -1: goto $l1558;
                            }
                            $l1558:;
                        }
                        goto $l1537;
                        $l1538:;
                    }
                    $tmp1529 = -1;
                    goto $l1527;
                    $l1527:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$434$171530));
                    Iter$434$171530 = NULL;
                    switch ($tmp1529) {
                        case -1: goto $l1559;
                    }
                    $l1559:;
                }
                panda$core$MutableString$append$panda$core$String(result1522, &$s1560);
                {
                    int $tmp1563;
                    {
                        ITable* $tmp1567 = ((panda$collections$Iterable*) finally1517)->$class->itable;
                        while ($tmp1567->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1567 = $tmp1567->next;
                        }
                        $fn1569 $tmp1568 = $tmp1567->methods[0];
                        panda$collections$Iterator* $tmp1570 = $tmp1568(((panda$collections$Iterable*) finally1517));
                        $tmp1566 = $tmp1570;
                        $tmp1565 = $tmp1566;
                        Iter$438$171564 = $tmp1565;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1565));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1566));
                        $l1571:;
                        ITable* $tmp1574 = Iter$438$171564->$class->itable;
                        while ($tmp1574->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1574 = $tmp1574->next;
                        }
                        $fn1576 $tmp1575 = $tmp1574->methods[0];
                        panda$core$Bit $tmp1577 = $tmp1575(Iter$438$171564);
                        panda$core$Bit $tmp1578 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1577);
                        bool $tmp1573 = $tmp1578.value;
                        if (!$tmp1573) goto $l1572;
                        {
                            int $tmp1581;
                            {
                                ITable* $tmp1585 = Iter$438$171564->$class->itable;
                                while ($tmp1585->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1585 = $tmp1585->next;
                                }
                                $fn1587 $tmp1586 = $tmp1585->methods[1];
                                panda$core$Object* $tmp1588 = $tmp1586(Iter$438$171564);
                                $tmp1584 = $tmp1588;
                                $tmp1583 = ((org$pandalanguage$pandac$IRNode*) $tmp1584);
                                s1582 = $tmp1583;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1583));
                                panda$core$Panda$unref$panda$core$Object($tmp1584);
                                panda$core$String* $tmp1591 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1582), &$s1590);
                                $tmp1589 = $tmp1591;
                                panda$core$MutableString$append$panda$core$String(result1522, $tmp1589);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1589));
                            }
                            $tmp1581 = -1;
                            goto $l1579;
                            $l1579:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1582));
                            s1582 = NULL;
                            switch ($tmp1581) {
                                case -1: goto $l1592;
                            }
                            $l1592:;
                        }
                        goto $l1571;
                        $l1572:;
                    }
                    $tmp1563 = -1;
                    goto $l1561;
                    $l1561:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$438$171564));
                    Iter$438$171564 = NULL;
                    switch ($tmp1563) {
                        case -1: goto $l1593;
                    }
                    $l1593:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1594, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1522, $tmp1594);
                panda$core$String* $tmp1598 = panda$core$MutableString$finish$R$panda$core$String(result1522);
                $tmp1597 = $tmp1598;
                $tmp1596 = $tmp1597;
                $finallyReturn1594 = $tmp1596;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1596));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1597));
                $tmp1521 = 0;
                goto $l1519;
                $l1599:;
                $tmp1390 = 5;
                goto $l1388;
                $l1600:;
                return $finallyReturn1594;
            }
            $l1519:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1522));
            result1522 = NULL;
            switch ($tmp1521) {
                case 0: goto $l1599;
            }
            $l1602:;
        }
        }
        else {
        panda$core$Bit $tmp1603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp1603.value) {
        {
            panda$core$String** $tmp1605 = ((panda$core$String**) ((char*) $match$415_91391->$data + 16));
            label1604 = *$tmp1605;
            if (((panda$core$Bit) { label1604 != NULL }).value) {
            {
                panda$core$String* $tmp1611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1610, label1604);
                $tmp1609 = $tmp1611;
                panda$core$String* $tmp1613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1609, &$s1612);
                $tmp1608 = $tmp1613;
                $tmp1607 = $tmp1608;
                $finallyReturn1605 = $tmp1607;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1607));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1608));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1609));
                $tmp1390 = 6;
                goto $l1388;
                $l1614:;
                return $finallyReturn1605;
            }
            }
            $tmp1617 = &$s1618;
            $finallyReturn1615 = $tmp1617;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1617));
            $tmp1390 = 7;
            goto $l1388;
            $l1619:;
            return $finallyReturn1615;
        }
        }
        else {
        panda$core$Bit $tmp1621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp1621.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp1623 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$415_91391->$data + 24));
            m1622 = *$tmp1623;
            panda$collections$ImmutableArray** $tmp1625 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91391->$data + 32));
            args1624 = *$tmp1625;
            panda$core$String* $tmp1632 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) m1622->value)->name);
            $tmp1631 = $tmp1632;
            panda$core$String* $tmp1634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1631, &$s1633);
            $tmp1630 = $tmp1634;
            panda$core$String* $tmp1636 = panda$collections$ImmutableArray$join$R$panda$core$String(args1624);
            $tmp1635 = $tmp1636;
            panda$core$String* $tmp1637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1630, $tmp1635);
            $tmp1629 = $tmp1637;
            panda$core$String* $tmp1639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1629, &$s1638);
            $tmp1628 = $tmp1639;
            $tmp1627 = $tmp1628;
            $finallyReturn1625 = $tmp1627;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1627));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1628));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1629));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1635));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1630));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1631));
            $tmp1390 = 8;
            goto $l1388;
            $l1640:;
            return $finallyReturn1625;
        }
        }
        else {
        panda$core$Bit $tmp1642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp1642.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1644 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 16));
            value1643 = *$tmp1644;
            org$pandalanguage$pandac$Type** $tmp1646 = ((org$pandalanguage$pandac$Type**) ((char*) $match$415_91391->$data + 24));
            type1645 = *$tmp1646;
            org$pandalanguage$pandac$Type* $tmp1649 = (($fn1648) value1643->$class->vtable[2])(value1643);
            $tmp1647 = $tmp1649;
            org$pandalanguage$pandac$Type* $tmp1651 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            $tmp1650 = $tmp1651;
            panda$core$Bit $tmp1652 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1647, $tmp1650);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1650));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1647));
            if ($tmp1652.value) {
            {
                panda$core$String* $tmp1660 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1659, ((panda$core$Object*) value1643));
                $tmp1658 = $tmp1660;
                panda$core$String* $tmp1662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1658, &$s1661);
                $tmp1657 = $tmp1662;
                panda$core$String* $tmp1663 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1657, ((panda$core$Object*) type1645));
                $tmp1656 = $tmp1663;
                panda$core$String* $tmp1665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1656, &$s1664);
                $tmp1655 = $tmp1665;
                $tmp1654 = $tmp1655;
                $finallyReturn1652 = $tmp1654;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1654));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1655));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1656));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1657));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1658));
                $tmp1390 = 9;
                goto $l1388;
                $l1666:;
                return $finallyReturn1652;
            }
            }
            panda$core$String* $tmp1675 = (($fn1674) value1643->$class->vtable[0])(value1643);
            $tmp1673 = $tmp1675;
            panda$core$String* $tmp1677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1673, &$s1676);
            $tmp1672 = $tmp1677;
            panda$core$String* $tmp1678 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1672, ((panda$core$Object*) type1645));
            $tmp1671 = $tmp1678;
            panda$core$String* $tmp1680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1671, &$s1679);
            $tmp1670 = $tmp1680;
            $tmp1669 = $tmp1670;
            $finallyReturn1667 = $tmp1669;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1669));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1670));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1671));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1672));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1673));
            $tmp1390 = 10;
            goto $l1388;
            $l1681:;
            return $finallyReturn1667;
        }
        }
        else {
        panda$core$Bit $tmp1683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp1683.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp1685 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$415_91391->$data + 16));
            ce1684 = *$tmp1685;
            panda$core$String* $tmp1689 = org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(ce1684);
            $tmp1688 = $tmp1689;
            $tmp1687 = $tmp1688;
            $finallyReturn1685 = $tmp1687;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1687));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1688));
            $tmp1390 = 11;
            goto $l1388;
            $l1690:;
            return $finallyReturn1685;
        }
        }
        else {
        panda$core$Bit $tmp1692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1692.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1694 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 16));
            base1693 = *$tmp1694;
            org$pandalanguage$pandac$ChoiceEntry** $tmp1696 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$415_91391->$data + 24));
            ce1695 = *$tmp1696;
            panda$core$Int64* $tmp1698 = ((panda$core$Int64*) ((char*) $match$415_91391->$data + 32));
            field1697 = *$tmp1698;
            panda$core$String* $tmp1708 = (($fn1707) base1693->$class->vtable[0])(base1693);
            $tmp1706 = $tmp1708;
            panda$core$String* $tmp1710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1706, &$s1709);
            $tmp1705 = $tmp1710;
            panda$core$String* $tmp1711 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1705, ((panda$core$Object*) ce1695));
            $tmp1704 = $tmp1711;
            panda$core$String* $tmp1713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1704, &$s1712);
            $tmp1703 = $tmp1713;
            panda$core$Int64$wrapper* $tmp1715;
            $tmp1715 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1715->value = field1697;
            $tmp1714 = ((panda$core$Object*) $tmp1715);
            panda$core$String* $tmp1716 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1703, $tmp1714);
            $tmp1702 = $tmp1716;
            panda$core$String* $tmp1718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1702, &$s1717);
            $tmp1701 = $tmp1718;
            $tmp1700 = $tmp1701;
            $finallyReturn1698 = $tmp1700;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1700));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1701));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1702));
            panda$core$Panda$unref$panda$core$Object($tmp1714);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1703));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1704));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1705));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1706));
            $tmp1390 = 12;
            goto $l1388;
            $l1719:;
            return $finallyReturn1698;
        }
        }
        else {
        panda$core$Bit $tmp1721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp1721.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1723 = ((org$pandalanguage$pandac$Type**) ((char*) $match$415_91391->$data + 16));
            type1722 = *$tmp1723;
            org$pandalanguage$pandac$IRNode** $tmp1725 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 24));
            call1724 = *$tmp1725;
            int $tmp1728;
            {
                $tmp1730 = call1724;
                $match$460_171729 = $tmp1730;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1730));
                panda$core$Bit $tmp1731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$460_171729->$rawValue, ((panda$core$Int64) { 6 }));
                if ($tmp1731.value) {
                {
                    panda$collections$ImmutableArray** $tmp1733 = ((panda$collections$ImmutableArray**) ((char*) $match$460_171729->$data + 32));
                    args1732 = *$tmp1733;
                    panda$core$String* $tmp1740 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type1722);
                    $tmp1739 = $tmp1740;
                    panda$core$String* $tmp1742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1739, &$s1741);
                    $tmp1738 = $tmp1742;
                    panda$core$String* $tmp1744 = panda$collections$ImmutableArray$join$R$panda$core$String(args1732);
                    $tmp1743 = $tmp1744;
                    panda$core$String* $tmp1745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1738, $tmp1743);
                    $tmp1737 = $tmp1745;
                    panda$core$String* $tmp1747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1737, &$s1746);
                    $tmp1736 = $tmp1747;
                    $tmp1735 = $tmp1736;
                    $finallyReturn1733 = $tmp1735;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1735));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1736));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1737));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1743));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1738));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1739));
                    $tmp1728 = 0;
                    goto $l1726;
                    $l1748:;
                    $tmp1390 = 13;
                    goto $l1388;
                    $l1749:;
                    return $finallyReturn1733;
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1728 = -1;
            goto $l1726;
            $l1726:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1730));
            switch ($tmp1728) {
                case 0: goto $l1748;
                case -1: goto $l1751;
            }
            $l1751:;
        }
        }
        else {
        panda$core$Bit $tmp1752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1752.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1754 = ((org$pandalanguage$pandac$Type**) ((char*) $match$415_91391->$data + 16));
            Type1753 = *$tmp1754;
            $tmp1756 = &$s1757;
            $finallyReturn1754 = $tmp1756;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1756));
            $tmp1390 = 14;
            goto $l1388;
            $l1758:;
            return $finallyReturn1754;
        }
        }
        else {
        panda$core$Bit $tmp1760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1760.value) {
        {
            panda$core$String** $tmp1762 = ((panda$core$String**) ((char*) $match$415_91391->$data + 16));
            label1761 = *$tmp1762;
            if (((panda$core$Bit) { label1761 != NULL }).value) {
            {
                panda$core$String* $tmp1768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1767, label1761);
                $tmp1766 = $tmp1768;
                panda$core$String* $tmp1770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1766, &$s1769);
                $tmp1765 = $tmp1770;
                $tmp1764 = $tmp1765;
                $finallyReturn1762 = $tmp1764;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1764));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1765));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1766));
                $tmp1390 = 15;
                goto $l1388;
                $l1771:;
                return $finallyReturn1762;
            }
            }
            $tmp1774 = &$s1775;
            $finallyReturn1772 = $tmp1774;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1774));
            $tmp1390 = 16;
            goto $l1388;
            $l1776:;
            return $finallyReturn1772;
        }
        }
        else {
        panda$core$Bit $tmp1778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1778.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1780 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 0));
            target1779 = *$tmp1780;
            org$pandalanguage$pandac$IRNode** $tmp1782 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 8));
            value1781 = *$tmp1782;
            if (((panda$core$Bit) { value1781 != NULL }).value) {
            {
                panda$core$String* $tmp1790 = (($fn1789) target1779->$class->vtable[0])(target1779);
                $tmp1788 = $tmp1790;
                panda$core$String* $tmp1792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1788, &$s1791);
                $tmp1787 = $tmp1792;
                panda$core$String* $tmp1793 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1787, ((panda$core$Object*) value1781));
                $tmp1786 = $tmp1793;
                panda$core$String* $tmp1795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1786, &$s1794);
                $tmp1785 = $tmp1795;
                $tmp1784 = $tmp1785;
                $finallyReturn1782 = $tmp1784;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1784));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1785));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1786));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1787));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1788));
                $tmp1390 = 17;
                goto $l1388;
                $l1796:;
                return $finallyReturn1782;
            }
            }
            panda$core$String* $tmp1802 = (($fn1801) target1779->$class->vtable[0])(target1779);
            $tmp1800 = $tmp1802;
            $tmp1799 = $tmp1800;
            $finallyReturn1797 = $tmp1799;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1799));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1800));
            $tmp1390 = 18;
            goto $l1388;
            $l1803:;
            return $finallyReturn1797;
        }
        }
        else {
        panda$core$Bit $tmp1805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1805.value) {
        {
            panda$core$String** $tmp1807 = ((panda$core$String**) ((char*) $match$415_91391->$data + 16));
            label1806 = *$tmp1807;
            panda$collections$ImmutableArray** $tmp1809 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91391->$data + 24));
            statements1808 = *$tmp1809;
            org$pandalanguage$pandac$IRNode** $tmp1811 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 32));
            test1810 = *$tmp1811;
            int $tmp1814;
            {
                panda$core$MutableString* $tmp1818 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1818);
                $tmp1817 = $tmp1818;
                $tmp1816 = $tmp1817;
                result1815 = $tmp1816;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1816));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1817));
                if (((panda$core$Bit) { label1806 != NULL }).value) {
                {
                    panda$core$String* $tmp1821 = panda$core$String$convert$R$panda$core$String(label1806);
                    $tmp1820 = $tmp1821;
                    panda$core$String* $tmp1823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1820, &$s1822);
                    $tmp1819 = $tmp1823;
                    panda$core$MutableString$append$panda$core$String(result1815, $tmp1819);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1819));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1820));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1815, &$s1824);
                {
                    int $tmp1827;
                    {
                        ITable* $tmp1831 = ((panda$collections$Iterable*) statements1808)->$class->itable;
                        while ($tmp1831->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1831 = $tmp1831->next;
                        }
                        $fn1833 $tmp1832 = $tmp1831->methods[0];
                        panda$collections$Iterator* $tmp1834 = $tmp1832(((panda$collections$Iterable*) statements1808));
                        $tmp1830 = $tmp1834;
                        $tmp1829 = $tmp1830;
                        Iter$484$171828 = $tmp1829;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1829));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1830));
                        $l1835:;
                        ITable* $tmp1838 = Iter$484$171828->$class->itable;
                        while ($tmp1838->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1838 = $tmp1838->next;
                        }
                        $fn1840 $tmp1839 = $tmp1838->methods[0];
                        panda$core$Bit $tmp1841 = $tmp1839(Iter$484$171828);
                        panda$core$Bit $tmp1842 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1841);
                        bool $tmp1837 = $tmp1842.value;
                        if (!$tmp1837) goto $l1836;
                        {
                            int $tmp1845;
                            {
                                ITable* $tmp1849 = Iter$484$171828->$class->itable;
                                while ($tmp1849->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1849 = $tmp1849->next;
                                }
                                $fn1851 $tmp1850 = $tmp1849->methods[1];
                                panda$core$Object* $tmp1852 = $tmp1850(Iter$484$171828);
                                $tmp1848 = $tmp1852;
                                $tmp1847 = ((org$pandalanguage$pandac$IRNode*) $tmp1848);
                                s1846 = $tmp1847;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1847));
                                panda$core$Panda$unref$panda$core$Object($tmp1848);
                                panda$core$String* $tmp1855 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1846), &$s1854);
                                $tmp1853 = $tmp1855;
                                panda$core$MutableString$append$panda$core$String(result1815, $tmp1853);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1853));
                            }
                            $tmp1845 = -1;
                            goto $l1843;
                            $l1843:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1846));
                            s1846 = NULL;
                            switch ($tmp1845) {
                                case -1: goto $l1856;
                            }
                            $l1856:;
                        }
                        goto $l1835;
                        $l1836:;
                    }
                    $tmp1827 = -1;
                    goto $l1825;
                    $l1825:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$484$171828));
                    Iter$484$171828 = NULL;
                    switch ($tmp1827) {
                        case -1: goto $l1857;
                    }
                    $l1857:;
                }
                panda$core$String* $tmp1861 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1860, ((panda$core$Object*) test1810));
                $tmp1859 = $tmp1861;
                panda$core$String* $tmp1863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1859, &$s1862);
                $tmp1858 = $tmp1863;
                panda$core$MutableString$append$panda$core$String(result1815, $tmp1858);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1858));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1859));
                panda$core$String* $tmp1867 = panda$core$MutableString$finish$R$panda$core$String(result1815);
                $tmp1866 = $tmp1867;
                $tmp1865 = $tmp1866;
                $finallyReturn1863 = $tmp1865;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1865));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1866));
                $tmp1814 = 0;
                goto $l1812;
                $l1868:;
                $tmp1390 = 19;
                goto $l1388;
                $l1869:;
                return $finallyReturn1863;
            }
            $l1812:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1815));
            result1815 = NULL;
            switch ($tmp1814) {
                case 0: goto $l1868;
            }
            $l1871:;
        }
        }
        else {
        panda$core$Bit $tmp1872 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1872.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1874 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 0));
            expr1873 = *$tmp1874;
            org$pandalanguage$pandac$IRNode** $tmp1876 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 8));
            stmt1875 = *$tmp1876;
            panda$core$String* $tmp1884 = (($fn1883) expr1873->$class->vtable[0])(expr1873);
            $tmp1882 = $tmp1884;
            panda$core$String* $tmp1886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1882, &$s1885);
            $tmp1881 = $tmp1886;
            panda$core$String* $tmp1887 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1881, ((panda$core$Object*) stmt1875));
            $tmp1880 = $tmp1887;
            panda$core$String* $tmp1889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1880, &$s1888);
            $tmp1879 = $tmp1889;
            $tmp1878 = $tmp1879;
            $finallyReturn1876 = $tmp1878;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1878));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1879));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1880));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1881));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1882));
            $tmp1390 = 20;
            goto $l1388;
            $l1890:;
            return $finallyReturn1876;
        }
        }
        else {
        panda$core$Bit $tmp1892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1892.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1894 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 24));
            base1893 = *$tmp1894;
            org$pandalanguage$pandac$FieldDecl** $tmp1896 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$415_91391->$data + 32));
            field1895 = *$tmp1896;
            panda$core$String* $tmp1904 = (($fn1903) base1893->$class->vtable[0])(base1893);
            $tmp1902 = $tmp1904;
            panda$core$String* $tmp1906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1902, &$s1905);
            $tmp1901 = $tmp1906;
            panda$core$String* $tmp1907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1901, ((org$pandalanguage$pandac$Symbol*) field1895)->name);
            $tmp1900 = $tmp1907;
            panda$core$String* $tmp1909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1900, &$s1908);
            $tmp1899 = $tmp1909;
            $tmp1898 = $tmp1899;
            $finallyReturn1896 = $tmp1898;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1898));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1899));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1900));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1901));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1902));
            $tmp1390 = 21;
            goto $l1388;
            $l1910:;
            return $finallyReturn1896;
        }
        }
        else {
        panda$core$Bit $tmp1912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1912.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1914 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 16));
            test1913 = *$tmp1914;
            panda$collections$ImmutableArray** $tmp1916 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91391->$data + 24));
            ifTrue1915 = *$tmp1916;
            org$pandalanguage$pandac$IRNode** $tmp1918 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 32));
            ifFalse1917 = *$tmp1918;
            int $tmp1921;
            {
                panda$core$MutableString* $tmp1925 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1929 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1928, ((panda$core$Object*) test1913));
                $tmp1927 = $tmp1929;
                panda$core$String* $tmp1931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1927, &$s1930);
                $tmp1926 = $tmp1931;
                panda$core$MutableString$init$panda$core$String($tmp1925, $tmp1926);
                $tmp1924 = $tmp1925;
                $tmp1923 = $tmp1924;
                result1922 = $tmp1923;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1923));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1924));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1926));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1927));
                {
                    int $tmp1934;
                    {
                        ITable* $tmp1938 = ((panda$collections$Iterable*) ifTrue1915)->$class->itable;
                        while ($tmp1938->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1938 = $tmp1938->next;
                        }
                        $fn1940 $tmp1939 = $tmp1938->methods[0];
                        panda$collections$Iterator* $tmp1941 = $tmp1939(((panda$collections$Iterable*) ifTrue1915));
                        $tmp1937 = $tmp1941;
                        $tmp1936 = $tmp1937;
                        Iter$495$171935 = $tmp1936;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1936));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1937));
                        $l1942:;
                        ITable* $tmp1945 = Iter$495$171935->$class->itable;
                        while ($tmp1945->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1945 = $tmp1945->next;
                        }
                        $fn1947 $tmp1946 = $tmp1945->methods[0];
                        panda$core$Bit $tmp1948 = $tmp1946(Iter$495$171935);
                        panda$core$Bit $tmp1949 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1948);
                        bool $tmp1944 = $tmp1949.value;
                        if (!$tmp1944) goto $l1943;
                        {
                            int $tmp1952;
                            {
                                ITable* $tmp1956 = Iter$495$171935->$class->itable;
                                while ($tmp1956->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1956 = $tmp1956->next;
                                }
                                $fn1958 $tmp1957 = $tmp1956->methods[1];
                                panda$core$Object* $tmp1959 = $tmp1957(Iter$495$171935);
                                $tmp1955 = $tmp1959;
                                $tmp1954 = ((org$pandalanguage$pandac$IRNode*) $tmp1955);
                                s1953 = $tmp1954;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1954));
                                panda$core$Panda$unref$panda$core$Object($tmp1955);
                                panda$core$String* $tmp1962 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1953), &$s1961);
                                $tmp1960 = $tmp1962;
                                panda$core$MutableString$append$panda$core$String(result1922, $tmp1960);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1960));
                            }
                            $tmp1952 = -1;
                            goto $l1950;
                            $l1950:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1953));
                            s1953 = NULL;
                            switch ($tmp1952) {
                                case -1: goto $l1963;
                            }
                            $l1963:;
                        }
                        goto $l1942;
                        $l1943:;
                    }
                    $tmp1934 = -1;
                    goto $l1932;
                    $l1932:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$495$171935));
                    Iter$495$171935 = NULL;
                    switch ($tmp1934) {
                        case -1: goto $l1964;
                    }
                    $l1964:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1965, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1922, $tmp1965);
                if (((panda$core$Bit) { ifFalse1917 != NULL }).value) {
                {
                    panda$core$String* $tmp1969 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1968, ((panda$core$Object*) ifFalse1917));
                    $tmp1967 = $tmp1969;
                    panda$core$String* $tmp1971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1967, &$s1970);
                    $tmp1966 = $tmp1971;
                    panda$core$MutableString$append$panda$core$String(result1922, $tmp1966);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1966));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1967));
                }
                }
                panda$core$String* $tmp1975 = panda$core$MutableString$finish$R$panda$core$String(result1922);
                $tmp1974 = $tmp1975;
                $tmp1973 = $tmp1974;
                $finallyReturn1971 = $tmp1973;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1973));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1974));
                $tmp1921 = 0;
                goto $l1919;
                $l1976:;
                $tmp1390 = 22;
                goto $l1388;
                $l1977:;
                return $finallyReturn1971;
            }
            $l1919:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1922));
            result1922 = NULL;
            switch ($tmp1921) {
                case 0: goto $l1976;
            }
            $l1979:;
        }
        }
        else {
        panda$core$Bit $tmp1980 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1980.value) {
        {
            panda$core$UInt64* $tmp1982 = ((panda$core$UInt64*) ((char*) $match$415_91391->$data + 24));
            value1981 = *$tmp1982;
            panda$core$String* $tmp1986 = panda$core$UInt64$convert$R$panda$core$String(value1981);
            $tmp1985 = $tmp1986;
            $tmp1984 = $tmp1985;
            $finallyReturn1982 = $tmp1984;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1984));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1985));
            $tmp1390 = 23;
            goto $l1388;
            $l1987:;
            return $finallyReturn1982;
        }
        }
        else {
        panda$core$Bit $tmp1989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1989.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1991 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 16));
            value1990 = *$tmp1991;
            panda$core$String* $tmp1997 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1996, ((panda$core$Object*) value1990));
            $tmp1995 = $tmp1997;
            panda$core$String* $tmp1999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1995, &$s1998);
            $tmp1994 = $tmp1999;
            $tmp1993 = $tmp1994;
            $finallyReturn1991 = $tmp1993;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1993));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1994));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1995));
            $tmp1390 = 24;
            goto $l1388;
            $l2000:;
            return $finallyReturn1991;
        }
        }
        else {
        panda$core$Bit $tmp2002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp2002.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2004 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 16));
            value2003 = *$tmp2004;
            panda$core$String* $tmp2010 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2009, ((panda$core$Object*) value2003));
            $tmp2008 = $tmp2010;
            panda$core$String* $tmp2012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2008, &$s2011);
            $tmp2007 = $tmp2012;
            $tmp2006 = $tmp2007;
            $finallyReturn2004 = $tmp2006;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2006));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2007));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2008));
            $tmp1390 = 25;
            goto $l1388;
            $l2013:;
            return $finallyReturn2004;
        }
        }
        else {
        panda$core$Bit $tmp2015 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp2015.value) {
        {
            panda$core$String** $tmp2017 = ((panda$core$String**) ((char*) $match$415_91391->$data + 16));
            label2016 = *$tmp2017;
            panda$collections$ImmutableArray** $tmp2019 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91391->$data + 24));
            statements2018 = *$tmp2019;
            int $tmp2022;
            {
                panda$core$MutableString* $tmp2026 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2026);
                $tmp2025 = $tmp2026;
                $tmp2024 = $tmp2025;
                result2023 = $tmp2024;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2024));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2025));
                if (((panda$core$Bit) { label2016 != NULL }).value) {
                {
                    panda$core$String* $tmp2029 = panda$core$String$convert$R$panda$core$String(label2016);
                    $tmp2028 = $tmp2029;
                    panda$core$String* $tmp2031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2028, &$s2030);
                    $tmp2027 = $tmp2031;
                    panda$core$MutableString$append$panda$core$String(result2023, $tmp2027);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2027));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2028));
                }
                }
                panda$core$MutableString$append$panda$core$String(result2023, &$s2032);
                {
                    int $tmp2035;
                    {
                        ITable* $tmp2039 = ((panda$collections$Iterable*) statements2018)->$class->itable;
                        while ($tmp2039->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2039 = $tmp2039->next;
                        }
                        $fn2041 $tmp2040 = $tmp2039->methods[0];
                        panda$collections$Iterator* $tmp2042 = $tmp2040(((panda$collections$Iterable*) statements2018));
                        $tmp2038 = $tmp2042;
                        $tmp2037 = $tmp2038;
                        Iter$515$172036 = $tmp2037;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2037));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2038));
                        $l2043:;
                        ITable* $tmp2046 = Iter$515$172036->$class->itable;
                        while ($tmp2046->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2046 = $tmp2046->next;
                        }
                        $fn2048 $tmp2047 = $tmp2046->methods[0];
                        panda$core$Bit $tmp2049 = $tmp2047(Iter$515$172036);
                        panda$core$Bit $tmp2050 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2049);
                        bool $tmp2045 = $tmp2050.value;
                        if (!$tmp2045) goto $l2044;
                        {
                            int $tmp2053;
                            {
                                ITable* $tmp2057 = Iter$515$172036->$class->itable;
                                while ($tmp2057->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2057 = $tmp2057->next;
                                }
                                $fn2059 $tmp2058 = $tmp2057->methods[1];
                                panda$core$Object* $tmp2060 = $tmp2058(Iter$515$172036);
                                $tmp2056 = $tmp2060;
                                $tmp2055 = ((org$pandalanguage$pandac$IRNode*) $tmp2056);
                                s2054 = $tmp2055;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2055));
                                panda$core$Panda$unref$panda$core$Object($tmp2056);
                                panda$core$String* $tmp2063 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2054), &$s2062);
                                $tmp2061 = $tmp2063;
                                panda$core$MutableString$append$panda$core$String(result2023, $tmp2061);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2061));
                            }
                            $tmp2053 = -1;
                            goto $l2051;
                            $l2051:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2054));
                            s2054 = NULL;
                            switch ($tmp2053) {
                                case -1: goto $l2064;
                            }
                            $l2064:;
                        }
                        goto $l2043;
                        $l2044:;
                    }
                    $tmp2035 = -1;
                    goto $l2033;
                    $l2033:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$515$172036));
                    Iter$515$172036 = NULL;
                    switch ($tmp2035) {
                        case -1: goto $l2065;
                    }
                    $l2065:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2066, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2023, $tmp2066);
                panda$core$String* $tmp2070 = panda$core$MutableString$finish$R$panda$core$String(result2023);
                $tmp2069 = $tmp2070;
                $tmp2068 = $tmp2069;
                $finallyReturn2066 = $tmp2068;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2068));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2069));
                $tmp2022 = 0;
                goto $l2020;
                $l2071:;
                $tmp1390 = 26;
                goto $l1388;
                $l2072:;
                return $finallyReturn2066;
            }
            $l2020:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2023));
            result2023 = NULL;
            switch ($tmp2022) {
                case 0: goto $l2071;
            }
            $l2074:;
        }
        }
        else {
        panda$core$Bit $tmp2075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp2075.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2077 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 16));
            value2076 = *$tmp2077;
            panda$collections$ImmutableArray** $tmp2079 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91391->$data + 24));
            whens2078 = *$tmp2079;
            panda$collections$ImmutableArray** $tmp2081 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91391->$data + 32));
            other2080 = *$tmp2081;
            int $tmp2084;
            {
                panda$core$MutableString* $tmp2088 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp2092 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2091, ((panda$core$Object*) value2076));
                $tmp2090 = $tmp2092;
                panda$core$String* $tmp2094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2090, &$s2093);
                $tmp2089 = $tmp2094;
                panda$core$MutableString$init$panda$core$String($tmp2088, $tmp2089);
                $tmp2087 = $tmp2088;
                $tmp2086 = $tmp2087;
                result2085 = $tmp2086;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2086));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2087));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2089));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2090));
                {
                    int $tmp2097;
                    {
                        ITable* $tmp2101 = ((panda$collections$Iterable*) whens2078)->$class->itable;
                        while ($tmp2101->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2101 = $tmp2101->next;
                        }
                        $fn2103 $tmp2102 = $tmp2101->methods[0];
                        panda$collections$Iterator* $tmp2104 = $tmp2102(((panda$collections$Iterable*) whens2078));
                        $tmp2100 = $tmp2104;
                        $tmp2099 = $tmp2100;
                        Iter$522$172098 = $tmp2099;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2099));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2100));
                        $l2105:;
                        ITable* $tmp2108 = Iter$522$172098->$class->itable;
                        while ($tmp2108->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2108 = $tmp2108->next;
                        }
                        $fn2110 $tmp2109 = $tmp2108->methods[0];
                        panda$core$Bit $tmp2111 = $tmp2109(Iter$522$172098);
                        panda$core$Bit $tmp2112 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2111);
                        bool $tmp2107 = $tmp2112.value;
                        if (!$tmp2107) goto $l2106;
                        {
                            int $tmp2115;
                            {
                                ITable* $tmp2119 = Iter$522$172098->$class->itable;
                                while ($tmp2119->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2119 = $tmp2119->next;
                                }
                                $fn2121 $tmp2120 = $tmp2119->methods[1];
                                panda$core$Object* $tmp2122 = $tmp2120(Iter$522$172098);
                                $tmp2118 = $tmp2122;
                                $tmp2117 = ((org$pandalanguage$pandac$IRNode*) $tmp2118);
                                w2116 = $tmp2117;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2117));
                                panda$core$Panda$unref$panda$core$Object($tmp2118);
                                panda$core$String* $tmp2125 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w2116), &$s2124);
                                $tmp2123 = $tmp2125;
                                panda$core$MutableString$append$panda$core$String(result2085, $tmp2123);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2123));
                            }
                            $tmp2115 = -1;
                            goto $l2113;
                            $l2113:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w2116));
                            w2116 = NULL;
                            switch ($tmp2115) {
                                case -1: goto $l2126;
                            }
                            $l2126:;
                        }
                        goto $l2105;
                        $l2106:;
                    }
                    $tmp2097 = -1;
                    goto $l2095;
                    $l2095:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$522$172098));
                    Iter$522$172098 = NULL;
                    switch ($tmp2097) {
                        case -1: goto $l2127;
                    }
                    $l2127:;
                }
                if (((panda$core$Bit) { other2080 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2085, &$s2128);
                    {
                        int $tmp2131;
                        {
                            ITable* $tmp2135 = ((panda$collections$Iterable*) other2080)->$class->itable;
                            while ($tmp2135->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp2135 = $tmp2135->next;
                            }
                            $fn2137 $tmp2136 = $tmp2135->methods[0];
                            panda$collections$Iterator* $tmp2138 = $tmp2136(((panda$collections$Iterable*) other2080));
                            $tmp2134 = $tmp2138;
                            $tmp2133 = $tmp2134;
                            Iter$527$212132 = $tmp2133;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2133));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2134));
                            $l2139:;
                            ITable* $tmp2142 = Iter$527$212132->$class->itable;
                            while ($tmp2142->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2142 = $tmp2142->next;
                            }
                            $fn2144 $tmp2143 = $tmp2142->methods[0];
                            panda$core$Bit $tmp2145 = $tmp2143(Iter$527$212132);
                            panda$core$Bit $tmp2146 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2145);
                            bool $tmp2141 = $tmp2146.value;
                            if (!$tmp2141) goto $l2140;
                            {
                                int $tmp2149;
                                {
                                    ITable* $tmp2153 = Iter$527$212132->$class->itable;
                                    while ($tmp2153->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp2153 = $tmp2153->next;
                                    }
                                    $fn2155 $tmp2154 = $tmp2153->methods[1];
                                    panda$core$Object* $tmp2156 = $tmp2154(Iter$527$212132);
                                    $tmp2152 = $tmp2156;
                                    $tmp2151 = ((org$pandalanguage$pandac$IRNode*) $tmp2152);
                                    s2150 = $tmp2151;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2151));
                                    panda$core$Panda$unref$panda$core$Object($tmp2152);
                                    panda$core$String* $tmp2159 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2150), &$s2158);
                                    $tmp2157 = $tmp2159;
                                    panda$core$MutableString$append$panda$core$String(result2085, $tmp2157);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2157));
                                }
                                $tmp2149 = -1;
                                goto $l2147;
                                $l2147:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2150));
                                s2150 = NULL;
                                switch ($tmp2149) {
                                    case -1: goto $l2160;
                                }
                                $l2160:;
                            }
                            goto $l2139;
                            $l2140:;
                        }
                        $tmp2131 = -1;
                        goto $l2129;
                        $l2129:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$527$212132));
                        Iter$527$212132 = NULL;
                        switch ($tmp2131) {
                            case -1: goto $l2161;
                        }
                        $l2161:;
                    }
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2162, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2085, $tmp2162);
                panda$core$String* $tmp2166 = panda$core$MutableString$finish$R$panda$core$String(result2085);
                $tmp2165 = $tmp2166;
                $tmp2164 = $tmp2165;
                $finallyReturn2162 = $tmp2164;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2164));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2165));
                $tmp2084 = 0;
                goto $l2082;
                $l2167:;
                $tmp1390 = 27;
                goto $l1388;
                $l2168:;
                return $finallyReturn2162;
            }
            $l2082:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2085));
            result2085 = NULL;
            switch ($tmp2084) {
                case 0: goto $l2167;
            }
            $l2170:;
        }
        }
        else {
        panda$core$Bit $tmp2171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp2171.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2173 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 16));
            target2172 = *$tmp2173;
            org$pandalanguage$pandac$MethodRef** $tmp2175 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$415_91391->$data + 24));
            m2174 = *$tmp2175;
            if (((panda$core$Bit) { target2172 != NULL }).value) {
            {
                panda$core$String* $tmp2183 = (($fn2182) target2172->$class->vtable[0])(target2172);
                $tmp2181 = $tmp2183;
                panda$core$String* $tmp2185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2181, &$s2184);
                $tmp2180 = $tmp2185;
                panda$core$String* $tmp2186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2180, ((org$pandalanguage$pandac$Symbol*) m2174->value)->name);
                $tmp2179 = $tmp2186;
                panda$core$String* $tmp2188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2179, &$s2187);
                $tmp2178 = $tmp2188;
                $tmp2177 = $tmp2178;
                $finallyReturn2175 = $tmp2177;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2177));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2178));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2179));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2180));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2181));
                $tmp1390 = 28;
                goto $l1388;
                $l2189:;
                return $finallyReturn2175;
            }
            }
            $tmp2192 = ((org$pandalanguage$pandac$Symbol*) m2174->value)->name;
            $finallyReturn2190 = $tmp2192;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2192));
            $tmp1390 = 29;
            goto $l1388;
            $l2193:;
            return $finallyReturn2190;
        }
        }
        else {
        panda$core$Bit $tmp2195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp2195.value) {
        {
            panda$core$UInt64* $tmp2197 = ((panda$core$UInt64*) ((char*) $match$415_91391->$data + 24));
            value2196 = *$tmp2197;
            panda$core$UInt64$wrapper* $tmp2203;
            $tmp2203 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
            $tmp2203->value = value2196;
            $tmp2202 = ((panda$core$Object*) $tmp2203);
            panda$core$String* $tmp2204 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2201, $tmp2202);
            $tmp2200 = $tmp2204;
            $tmp2199 = $tmp2200;
            $finallyReturn2197 = $tmp2199;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2199));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2200));
            panda$core$Panda$unref$panda$core$Object($tmp2202);
            $tmp1390 = 30;
            goto $l1388;
            $l2205:;
            return $finallyReturn2197;
        }
        }
        else {
        panda$core$Bit $tmp2207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp2207.value) {
        {
            $tmp2209 = &$s2210;
            $finallyReturn2207 = $tmp2209;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2209));
            $tmp1390 = 31;
            goto $l1388;
            $l2211:;
            return $finallyReturn2207;
        }
        }
        else {
        panda$core$Bit $tmp2213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp2213.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2215 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$415_91391->$data + 16));
            op2214 = *$tmp2215;
            org$pandalanguage$pandac$IRNode** $tmp2217 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 24));
            base2216 = *$tmp2217;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2225;
            $tmp2225 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp2225->value = op2214;
            $tmp2224 = ((panda$core$Object*) $tmp2225);
            panda$core$String* $tmp2227 = (($fn2226) $tmp2224->$class->vtable[0])($tmp2224);
            $tmp2223 = $tmp2227;
            panda$core$String* $tmp2229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2223, &$s2228);
            $tmp2222 = $tmp2229;
            panda$core$String* $tmp2230 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2222, ((panda$core$Object*) base2216));
            $tmp2221 = $tmp2230;
            panda$core$String* $tmp2232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2221, &$s2231);
            $tmp2220 = $tmp2232;
            $tmp2219 = $tmp2220;
            $finallyReturn2217 = $tmp2219;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2219));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2220));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2221));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2222));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2223));
            panda$core$Panda$unref$panda$core$Object($tmp2224);
            $tmp1390 = 32;
            goto $l1388;
            $l2233:;
            return $finallyReturn2217;
        }
        }
        else {
        panda$core$Bit $tmp2235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp2235.value) {
        {
            panda$core$String** $tmp2237 = ((panda$core$String**) ((char*) $match$415_91391->$data + 16));
            label2236 = *$tmp2237;
            org$pandalanguage$pandac$IRNode** $tmp2239 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 24));
            target2238 = *$tmp2239;
            org$pandalanguage$pandac$IRNode** $tmp2241 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 32));
            list2240 = *$tmp2241;
            panda$collections$ImmutableArray** $tmp2243 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91391->$data + 40));
            statements2242 = *$tmp2243;
            int $tmp2246;
            {
                panda$core$MutableString* $tmp2250 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2250);
                $tmp2249 = $tmp2250;
                $tmp2248 = $tmp2249;
                result2247 = $tmp2248;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2248));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2249));
                if (((panda$core$Bit) { label2236 != NULL }).value) {
                {
                    panda$core$String* $tmp2253 = panda$core$String$convert$R$panda$core$String(label2236);
                    $tmp2252 = $tmp2253;
                    panda$core$String* $tmp2255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2252, &$s2254);
                    $tmp2251 = $tmp2255;
                    panda$core$MutableString$append$panda$core$String(result2247, $tmp2251);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2251));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2252));
                }
                }
                panda$core$String* $tmp2261 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2260, ((panda$core$Object*) target2238));
                $tmp2259 = $tmp2261;
                panda$core$String* $tmp2263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2259, &$s2262);
                $tmp2258 = $tmp2263;
                panda$core$String* $tmp2264 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2258, ((panda$core$Object*) list2240));
                $tmp2257 = $tmp2264;
                panda$core$String* $tmp2266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2257, &$s2265);
                $tmp2256 = $tmp2266;
                panda$core$MutableString$append$panda$core$String(result2247, $tmp2256);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2256));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2257));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2258));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2259));
                {
                    int $tmp2269;
                    {
                        ITable* $tmp2273 = ((panda$collections$Iterable*) statements2242)->$class->itable;
                        while ($tmp2273->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2273 = $tmp2273->next;
                        }
                        $fn2275 $tmp2274 = $tmp2273->methods[0];
                        panda$collections$Iterator* $tmp2276 = $tmp2274(((panda$collections$Iterable*) statements2242));
                        $tmp2272 = $tmp2276;
                        $tmp2271 = $tmp2272;
                        Iter$550$172270 = $tmp2271;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2271));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2272));
                        $l2277:;
                        ITable* $tmp2280 = Iter$550$172270->$class->itable;
                        while ($tmp2280->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2280 = $tmp2280->next;
                        }
                        $fn2282 $tmp2281 = $tmp2280->methods[0];
                        panda$core$Bit $tmp2283 = $tmp2281(Iter$550$172270);
                        panda$core$Bit $tmp2284 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2283);
                        bool $tmp2279 = $tmp2284.value;
                        if (!$tmp2279) goto $l2278;
                        {
                            int $tmp2287;
                            {
                                ITable* $tmp2291 = Iter$550$172270->$class->itable;
                                while ($tmp2291->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2291 = $tmp2291->next;
                                }
                                $fn2293 $tmp2292 = $tmp2291->methods[1];
                                panda$core$Object* $tmp2294 = $tmp2292(Iter$550$172270);
                                $tmp2290 = $tmp2294;
                                $tmp2289 = ((org$pandalanguage$pandac$IRNode*) $tmp2290);
                                s2288 = $tmp2289;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2289));
                                panda$core$Panda$unref$panda$core$Object($tmp2290);
                                panda$core$String* $tmp2297 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2288), &$s2296);
                                $tmp2295 = $tmp2297;
                                panda$core$MutableString$append$panda$core$String(result2247, $tmp2295);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2295));
                            }
                            $tmp2287 = -1;
                            goto $l2285;
                            $l2285:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2288));
                            s2288 = NULL;
                            switch ($tmp2287) {
                                case -1: goto $l2298;
                            }
                            $l2298:;
                        }
                        goto $l2277;
                        $l2278:;
                    }
                    $tmp2269 = -1;
                    goto $l2267;
                    $l2267:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$550$172270));
                    Iter$550$172270 = NULL;
                    switch ($tmp2269) {
                        case -1: goto $l2299;
                    }
                    $l2299:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2300, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2247, $tmp2300);
                panda$core$String* $tmp2304 = panda$core$MutableString$finish$R$panda$core$String(result2247);
                $tmp2303 = $tmp2304;
                $tmp2302 = $tmp2303;
                $finallyReturn2300 = $tmp2302;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2302));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2303));
                $tmp2246 = 0;
                goto $l2244;
                $l2305:;
                $tmp1390 = 33;
                goto $l1388;
                $l2306:;
                return $finallyReturn2300;
            }
            $l2244:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2247));
            result2247 = NULL;
            switch ($tmp2246) {
                case 0: goto $l2305;
            }
            $l2308:;
        }
        }
        else {
        panda$core$Bit $tmp2309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp2309.value) {
        {
            panda$core$Real64* $tmp2311 = ((panda$core$Real64*) ((char*) $match$415_91391->$data + 24));
            value2310 = *$tmp2311;
            panda$core$String* $tmp2315 = panda$core$Real64$convert$R$panda$core$String(value2310);
            $tmp2314 = $tmp2315;
            $tmp2313 = $tmp2314;
            $finallyReturn2311 = $tmp2313;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2313));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2314));
            $tmp1390 = 34;
            goto $l1388;
            $l2316:;
            return $finallyReturn2311;
        }
        }
        else {
        panda$core$Bit $tmp2318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2318.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2320 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 16));
            value2319 = *$tmp2320;
            if (((panda$core$Bit) { value2319 != NULL }).value) {
            {
                panda$core$String* $tmp2326 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2325, ((panda$core$Object*) value2319));
                $tmp2324 = $tmp2326;
                panda$core$String* $tmp2328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2324, &$s2327);
                $tmp2323 = $tmp2328;
                $tmp2322 = $tmp2323;
                $finallyReturn2320 = $tmp2322;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2322));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2323));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2324));
                $tmp1390 = 35;
                goto $l1388;
                $l2329:;
                return $finallyReturn2320;
            }
            }
            $tmp2332 = &$s2333;
            $finallyReturn2330 = $tmp2332;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2332));
            $tmp1390 = 36;
            goto $l1388;
            $l2334:;
            return $finallyReturn2330;
        }
        }
        else {
        panda$core$Bit $tmp2336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2336.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2338 = ((org$pandalanguage$pandac$Type**) ((char*) $match$415_91391->$data + 16));
            type2337 = *$tmp2338;
            panda$core$Int64* $tmp2340 = ((panda$core$Int64*) ((char*) $match$415_91391->$data + 24));
            id2339 = *$tmp2340;
            panda$core$Int64$wrapper* $tmp2347;
            $tmp2347 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2347->value = id2339;
            $tmp2346 = ((panda$core$Object*) $tmp2347);
            panda$core$String* $tmp2348 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2345, $tmp2346);
            $tmp2344 = $tmp2348;
            panda$core$String* $tmp2350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2344, &$s2349);
            $tmp2343 = $tmp2350;
            $tmp2342 = $tmp2343;
            $finallyReturn2340 = $tmp2342;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2342));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2343));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2344));
            panda$core$Panda$unref$panda$core$Object($tmp2346);
            $tmp1390 = 37;
            goto $l1388;
            $l2351:;
            return $finallyReturn2340;
        }
        }
        else {
        panda$core$Bit $tmp2353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2353.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2355 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 0));
            base2354 = *$tmp2355;
            panda$core$Int64* $tmp2357 = ((panda$core$Int64*) ((char*) $match$415_91391->$data + 8));
            id2356 = *$tmp2357;
            panda$core$Int64$wrapper* $tmp2366;
            $tmp2366 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2366->value = id2356;
            $tmp2365 = ((panda$core$Object*) $tmp2366);
            panda$core$String* $tmp2367 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2364, $tmp2365);
            $tmp2363 = $tmp2367;
            panda$core$String* $tmp2369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2363, &$s2368);
            $tmp2362 = $tmp2369;
            panda$core$String* $tmp2370 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2362, ((panda$core$Object*) base2354));
            $tmp2361 = $tmp2370;
            panda$core$String* $tmp2372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2361, &$s2371);
            $tmp2360 = $tmp2372;
            $tmp2359 = $tmp2360;
            $finallyReturn2357 = $tmp2359;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2359));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2360));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2361));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2362));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2363));
            panda$core$Panda$unref$panda$core$Object($tmp2365);
            $tmp1390 = 38;
            goto $l1388;
            $l2373:;
            return $finallyReturn2357;
        }
        }
        else {
        panda$core$Bit $tmp2375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2375.value) {
        {
            $tmp2377 = &$s2378;
            $finallyReturn2375 = $tmp2377;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2377));
            $tmp1390 = 39;
            goto $l1388;
            $l2379:;
            return $finallyReturn2375;
        }
        }
        else {
        panda$core$Bit $tmp2381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp2381.value) {
        {
            panda$core$String** $tmp2383 = ((panda$core$String**) ((char*) $match$415_91391->$data + 16));
            str2382 = *$tmp2383;
            $tmp2385 = str2382;
            $finallyReturn2383 = $tmp2385;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2385));
            $tmp1390 = 40;
            goto $l1388;
            $l2386:;
            return $finallyReturn2383;
        }
        }
        else {
        panda$core$Bit $tmp2388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp2388.value) {
        {
            $tmp2390 = &$s2391;
            $finallyReturn2388 = $tmp2390;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2390));
            $tmp1390 = 41;
            goto $l1388;
            $l2392:;
            return $finallyReturn2388;
        }
        }
        else {
        panda$core$Bit $tmp2394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2394.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2396 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 16));
            test2395 = *$tmp2396;
            org$pandalanguage$pandac$IRNode** $tmp2398 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 24));
            ifTrue2397 = *$tmp2398;
            org$pandalanguage$pandac$IRNode** $tmp2400 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 32));
            ifFalse2399 = *$tmp2400;
            panda$core$String* $tmp2410 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2409, ((panda$core$Object*) test2395));
            $tmp2408 = $tmp2410;
            panda$core$String* $tmp2412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2408, &$s2411);
            $tmp2407 = $tmp2412;
            panda$core$String* $tmp2413 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2407, ((panda$core$Object*) ifTrue2397));
            $tmp2406 = $tmp2413;
            panda$core$String* $tmp2415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2406, &$s2414);
            $tmp2405 = $tmp2415;
            panda$core$String* $tmp2416 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2405, ((panda$core$Object*) ifFalse2399));
            $tmp2404 = $tmp2416;
            panda$core$String* $tmp2418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2404, &$s2417);
            $tmp2403 = $tmp2418;
            $tmp2402 = $tmp2403;
            $finallyReturn2400 = $tmp2402;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2402));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2403));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2404));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2405));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2406));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2407));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2408));
            $tmp1390 = 42;
            goto $l1388;
            $l2419:;
            return $finallyReturn2400;
        }
        }
        else {
        panda$core$Bit $tmp2421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp2421.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2423 = ((org$pandalanguage$pandac$Type**) ((char*) $match$415_91391->$data + 16));
            type2422 = *$tmp2423;
            panda$core$String* $tmp2427 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type2422);
            $tmp2426 = $tmp2427;
            $tmp2425 = $tmp2426;
            $finallyReturn2423 = $tmp2425;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2425));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2426));
            $tmp1390 = 43;
            goto $l1388;
            $l2428:;
            return $finallyReturn2423;
        }
        }
        else {
        panda$core$Bit $tmp2430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp2430.value) {
        {
            panda$core$String** $tmp2432 = ((panda$core$String**) ((char*) $match$415_91391->$data + 16));
            name2431 = *$tmp2432;
            $tmp2434 = name2431;
            $finallyReturn2432 = $tmp2434;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2434));
            $tmp1390 = 44;
            goto $l1388;
            $l2435:;
            return $finallyReturn2432;
        }
        }
        else {
        panda$core$Bit $tmp2437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp2437.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2439 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 24));
            base2438 = *$tmp2439;
            panda$collections$ImmutableArray** $tmp2441 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91391->$data + 32));
            args2440 = *$tmp2441;
            panda$core$String* $tmp2449 = (($fn2448) base2438->$class->vtable[0])(base2438);
            $tmp2447 = $tmp2449;
            panda$core$String* $tmp2451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2447, &$s2450);
            $tmp2446 = $tmp2451;
            panda$core$String* $tmp2453 = panda$collections$ImmutableArray$join$R$panda$core$String(args2440);
            $tmp2452 = $tmp2453;
            panda$core$String* $tmp2454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2446, $tmp2452);
            $tmp2445 = $tmp2454;
            panda$core$String* $tmp2456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2445, &$s2455);
            $tmp2444 = $tmp2456;
            $tmp2443 = $tmp2444;
            $finallyReturn2441 = $tmp2443;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2443));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2444));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2445));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2452));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2446));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2447));
            $tmp1390 = 45;
            goto $l1388;
            $l2457:;
            return $finallyReturn2441;
        }
        }
        else {
        panda$core$Bit $tmp2459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp2459.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2461 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 24));
            target2460 = *$tmp2461;
            panda$collections$ImmutableArray** $tmp2463 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91391->$data + 32));
            methods2462 = *$tmp2463;
            panda$collections$ImmutableArray** $tmp2465 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91391->$data + 40));
            args2464 = *$tmp2465;
            panda$core$String* $tmp2475 = (($fn2474) target2460->$class->vtable[0])(target2460);
            $tmp2473 = $tmp2475;
            panda$core$String* $tmp2477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2473, &$s2476);
            $tmp2472 = $tmp2477;
            panda$core$Object* $tmp2479 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2462, ((panda$core$Int64) { 0 }));
            $tmp2478 = $tmp2479;
            panda$core$String* $tmp2480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2472, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2478)->value)->name);
            $tmp2471 = $tmp2480;
            panda$core$String* $tmp2482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2471, &$s2481);
            $tmp2470 = $tmp2482;
            panda$core$String* $tmp2484 = panda$collections$ImmutableArray$join$R$panda$core$String(args2464);
            $tmp2483 = $tmp2484;
            panda$core$String* $tmp2485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2470, $tmp2483);
            $tmp2469 = $tmp2485;
            panda$core$String* $tmp2487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2469, &$s2486);
            $tmp2468 = $tmp2487;
            $tmp2467 = $tmp2468;
            $finallyReturn2465 = $tmp2467;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2467));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2468));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2469));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2483));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2470));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2471));
            panda$core$Panda$unref$panda$core$Object($tmp2478);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2472));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2473));
            $tmp1390 = 46;
            goto $l1388;
            $l2488:;
            return $finallyReturn2465;
        }
        }
        else {
        panda$core$Bit $tmp2490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp2490.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2492 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 16));
            target2491 = *$tmp2492;
            panda$collections$ImmutableArray** $tmp2494 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91391->$data + 24));
            methods2493 = *$tmp2494;
            panda$core$String* $tmp2502 = (($fn2501) target2491->$class->vtable[0])(target2491);
            $tmp2500 = $tmp2502;
            panda$core$String* $tmp2504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2500, &$s2503);
            $tmp2499 = $tmp2504;
            panda$core$Object* $tmp2506 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2493, ((panda$core$Int64) { 0 }));
            $tmp2505 = $tmp2506;
            panda$core$String* $tmp2507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2499, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2505)->value)->name);
            $tmp2498 = $tmp2507;
            panda$core$String* $tmp2509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2498, &$s2508);
            $tmp2497 = $tmp2509;
            $tmp2496 = $tmp2497;
            $finallyReturn2494 = $tmp2496;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2496));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2497));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2498));
            panda$core$Panda$unref$panda$core$Object($tmp2505);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2499));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2500));
            $tmp1390 = 47;
            goto $l1388;
            $l2510:;
            return $finallyReturn2494;
        }
        }
        else {
        panda$core$Bit $tmp2512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp2512.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2514 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 16));
            start2513 = *$tmp2514;
            org$pandalanguage$pandac$IRNode** $tmp2516 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 24));
            end2515 = *$tmp2516;
            panda$core$Bit* $tmp2518 = ((panda$core$Bit*) ((char*) $match$415_91391->$data + 32));
            inclusive2517 = *$tmp2518;
            org$pandalanguage$pandac$IRNode** $tmp2520 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 33));
            step2519 = *$tmp2520;
            int $tmp2523;
            {
                panda$core$MutableString* $tmp2527 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2527);
                $tmp2526 = $tmp2527;
                $tmp2525 = $tmp2526;
                result2524 = $tmp2525;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2525));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2526));
                if (((panda$core$Bit) { start2513 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2524, ((panda$core$Object*) start2513));
                }
                }
                if (inclusive2517.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2524, &$s2528);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result2524, &$s2529);
                }
                }
                if (((panda$core$Bit) { end2515 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2524, ((panda$core$Object*) end2515));
                }
                }
                if (((panda$core$Bit) { step2519 != NULL }).value) {
                {
                    panda$core$String* $tmp2533 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2532, ((panda$core$Object*) step2519));
                    $tmp2531 = $tmp2533;
                    panda$core$String* $tmp2535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2531, &$s2534);
                    $tmp2530 = $tmp2535;
                    panda$core$MutableString$append$panda$core$String(result2524, $tmp2530);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2530));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2531));
                }
                }
                panda$core$String* $tmp2539 = panda$core$MutableString$finish$R$panda$core$String(result2524);
                $tmp2538 = $tmp2539;
                $tmp2537 = $tmp2538;
                $finallyReturn2535 = $tmp2537;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2537));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2538));
                $tmp2523 = 0;
                goto $l2521;
                $l2540:;
                $tmp1390 = 48;
                goto $l1388;
                $l2541:;
                return $finallyReturn2535;
            }
            $l2521:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2524));
            result2524 = NULL;
            switch ($tmp2523) {
                case 0: goto $l2540;
            }
            $l2543:;
        }
        }
        else {
        panda$core$Bit $tmp2544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2544.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp2546 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$415_91391->$data + 16));
            kind2545 = *$tmp2546;
            panda$collections$ImmutableArray** $tmp2548 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91391->$data + 24));
            decls2547 = *$tmp2548;
            int $tmp2551;
            {
                panda$core$MutableString* $tmp2555 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2555);
                $tmp2554 = $tmp2555;
                $tmp2553 = $tmp2554;
                result2552 = $tmp2553;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2553));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2554));
                {
                    $match$604_172556 = kind2545;
                    panda$core$Bit $tmp2557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$604_172556.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp2557.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2552, &$s2558);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$604_172556.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp2559.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2552, &$s2560);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$604_172556.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp2561.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2552, &$s2562);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$604_172556.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp2563.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2552, &$s2564);
                    }
                    }
                    }
                    }
                    }
                }
                panda$core$String* $tmp2566 = panda$collections$ImmutableArray$join$R$panda$core$String(decls2547);
                $tmp2565 = $tmp2566;
                panda$core$MutableString$append$panda$core$String(result2552, $tmp2565);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2565));
                panda$core$String* $tmp2570 = panda$core$MutableString$finish$R$panda$core$String(result2552);
                $tmp2569 = $tmp2570;
                $tmp2568 = $tmp2569;
                $finallyReturn2566 = $tmp2568;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2568));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2569));
                $tmp2551 = 0;
                goto $l2549;
                $l2571:;
                $tmp1390 = 49;
                goto $l1388;
                $l2572:;
                return $finallyReturn2566;
            }
            $l2549:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2552));
            result2552 = NULL;
            switch ($tmp2551) {
                case 0: goto $l2571;
            }
            $l2574:;
        }
        }
        else {
        panda$core$Bit $tmp2575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp2575.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2577 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$415_91391->$data + 16));
            variable2576 = *$tmp2577;
            $tmp2579 = ((org$pandalanguage$pandac$Symbol*) variable2576)->name;
            $finallyReturn2577 = $tmp2579;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2579));
            $tmp1390 = 50;
            goto $l1388;
            $l2580:;
            return $finallyReturn2577;
        }
        }
        else {
        panda$core$Bit $tmp2582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp2582.value) {
        {
            panda$collections$ImmutableArray** $tmp2584 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91391->$data + 16));
            tests2583 = *$tmp2584;
            panda$collections$ImmutableArray** $tmp2586 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91391->$data + 24));
            statements2585 = *$tmp2586;
            panda$core$String* $tmp2595 = panda$collections$ImmutableArray$join$R$panda$core$String(tests2583);
            $tmp2594 = $tmp2595;
            panda$core$String* $tmp2596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2593, $tmp2594);
            $tmp2592 = $tmp2596;
            panda$core$String* $tmp2598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2592, &$s2597);
            $tmp2591 = $tmp2598;
            panda$core$String* $tmp2601 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(statements2585, &$s2600);
            $tmp2599 = $tmp2601;
            panda$core$String* $tmp2602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2591, $tmp2599);
            $tmp2590 = $tmp2602;
            panda$core$String* $tmp2604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2590, &$s2603);
            $tmp2589 = $tmp2604;
            $tmp2588 = $tmp2589;
            $finallyReturn2586 = $tmp2588;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2588));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2589));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2590));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2599));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2591));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2592));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2594));
            $tmp1390 = 51;
            goto $l1388;
            $l2605:;
            return $finallyReturn2586;
        }
        }
        else {
        panda$core$Bit $tmp2607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91391->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp2607.value) {
        {
            panda$core$String** $tmp2609 = ((panda$core$String**) ((char*) $match$415_91391->$data + 16));
            label2608 = *$tmp2609;
            org$pandalanguage$pandac$IRNode** $tmp2611 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91391->$data + 24));
            test2610 = *$tmp2611;
            panda$collections$ImmutableArray** $tmp2613 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91391->$data + 32));
            statements2612 = *$tmp2613;
            int $tmp2616;
            {
                panda$core$MutableString* $tmp2620 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2620);
                $tmp2619 = $tmp2620;
                $tmp2618 = $tmp2619;
                result2617 = $tmp2618;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2618));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2619));
                if (((panda$core$Bit) { label2608 != NULL }).value) {
                {
                    panda$core$String* $tmp2623 = panda$core$String$convert$R$panda$core$String(label2608);
                    $tmp2622 = $tmp2623;
                    panda$core$String* $tmp2625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2622, &$s2624);
                    $tmp2621 = $tmp2625;
                    panda$core$MutableString$append$panda$core$String(result2617, $tmp2621);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2621));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2622));
                }
                }
                panda$core$String* $tmp2629 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2628, ((panda$core$Object*) test2610));
                $tmp2627 = $tmp2629;
                panda$core$String* $tmp2631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2627, &$s2630);
                $tmp2626 = $tmp2631;
                panda$core$MutableString$append$panda$core$String(result2617, $tmp2626);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2626));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2627));
                {
                    int $tmp2634;
                    {
                        ITable* $tmp2638 = ((panda$collections$Iterable*) statements2612)->$class->itable;
                        while ($tmp2638->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2638 = $tmp2638->next;
                        }
                        $fn2640 $tmp2639 = $tmp2638->methods[0];
                        panda$collections$Iterator* $tmp2641 = $tmp2639(((panda$collections$Iterable*) statements2612));
                        $tmp2637 = $tmp2641;
                        $tmp2636 = $tmp2637;
                        Iter$622$172635 = $tmp2636;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2636));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2637));
                        $l2642:;
                        ITable* $tmp2645 = Iter$622$172635->$class->itable;
                        while ($tmp2645->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2645 = $tmp2645->next;
                        }
                        $fn2647 $tmp2646 = $tmp2645->methods[0];
                        panda$core$Bit $tmp2648 = $tmp2646(Iter$622$172635);
                        panda$core$Bit $tmp2649 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2648);
                        bool $tmp2644 = $tmp2649.value;
                        if (!$tmp2644) goto $l2643;
                        {
                            int $tmp2652;
                            {
                                ITable* $tmp2656 = Iter$622$172635->$class->itable;
                                while ($tmp2656->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2656 = $tmp2656->next;
                                }
                                $fn2658 $tmp2657 = $tmp2656->methods[1];
                                panda$core$Object* $tmp2659 = $tmp2657(Iter$622$172635);
                                $tmp2655 = $tmp2659;
                                $tmp2654 = ((org$pandalanguage$pandac$IRNode*) $tmp2655);
                                s2653 = $tmp2654;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2654));
                                panda$core$Panda$unref$panda$core$Object($tmp2655);
                                panda$core$String* $tmp2662 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2653), &$s2661);
                                $tmp2660 = $tmp2662;
                                panda$core$MutableString$append$panda$core$String(result2617, $tmp2660);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2660));
                            }
                            $tmp2652 = -1;
                            goto $l2650;
                            $l2650:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2653));
                            s2653 = NULL;
                            switch ($tmp2652) {
                                case -1: goto $l2663;
                            }
                            $l2663:;
                        }
                        goto $l2642;
                        $l2643:;
                    }
                    $tmp2634 = -1;
                    goto $l2632;
                    $l2632:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$622$172635));
                    Iter$622$172635 = NULL;
                    switch ($tmp2634) {
                        case -1: goto $l2664;
                    }
                    $l2664:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2665, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2617, $tmp2665);
                panda$core$String* $tmp2669 = panda$core$MutableString$finish$R$panda$core$String(result2617);
                $tmp2668 = $tmp2669;
                $tmp2667 = $tmp2668;
                $finallyReturn2665 = $tmp2667;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2667));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2668));
                $tmp2616 = 0;
                goto $l2614;
                $l2670:;
                $tmp1390 = 52;
                goto $l1388;
                $l2671:;
                return $finallyReturn2665;
            }
            $l2614:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2617));
            result2617 = NULL;
            switch ($tmp2616) {
                case 0: goto $l2670;
            }
            $l2673:;
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
    $tmp1390 = -1;
    goto $l1388;
    $l1388:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1392));
    switch ($tmp1390) {
        case 4: goto $l1511;
        case 26: goto $l2072;
        case 44: goto $l2435;
        case 39: goto $l2379;
        case 37: goto $l2351;
        case 36: goto $l2334;
        case 40: goto $l2386;
        case 18: goto $l1803;
        case 41: goto $l2392;
        case 46: goto $l2488;
        case 8: goto $l1640;
        case 32: goto $l2233;
        case 35: goto $l2329;
        case 7: goto $l1619;
        case -1: goto $l2674;
        case 0: goto $l1411;
        case 52: goto $l2671;
        case 29: goto $l2193;
        case 43: goto $l2428;
        case 15: goto $l1771;
        case 25: goto $l2013;
        case 1: goto $l1421;
        case 33: goto $l2306;
        case 16: goto $l1776;
        case 20: goto $l1890;
        case 17: goto $l1796;
        case 34: goto $l2316;
        case 11: goto $l1690;
        case 28: goto $l2189;
        case 47: goto $l2510;
        case 30: goto $l2205;
        case 48: goto $l2541;
        case 14: goto $l1758;
        case 6: goto $l1614;
        case 9: goto $l1666;
        case 2: goto $l1450;
        case 38: goto $l2373;
        case 13: goto $l1749;
        case 24: goto $l2000;
        case 51: goto $l2605;
        case 12: goto $l1719;
        case 10: goto $l1681;
        case 45: goto $l2457;
        case 27: goto $l2168;
        case 3: goto $l1459;
        case 19: goto $l1869;
        case 21: goto $l1910;
        case 5: goto $l1600;
        case 31: goto $l2211;
        case 42: goto $l2419;
        case 50: goto $l2580;
        case 22: goto $l1977;
        case 49: goto $l2572;
        case 23: goto $l1987;
    }
    $l2674:;
}
void org$pandalanguage$pandac$IRNode$cleanup(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$5_12681 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2682;
    org$pandalanguage$pandac$Position _f02684;
    org$pandalanguage$pandac$IRNode* _f12686 = NULL;
    org$pandalanguage$pandac$IRNode* _f22688 = NULL;
    org$pandalanguage$pandac$Position _f02691;
    org$pandalanguage$pandac$Type* _f12693 = NULL;
    org$pandalanguage$pandac$IRNode* _f22695 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f32697;
    org$pandalanguage$pandac$IRNode* _f42699 = NULL;
    org$pandalanguage$pandac$Position _f02702;
    org$pandalanguage$pandac$Type* _f12704 = NULL;
    panda$core$Bit _f22706;
    org$pandalanguage$pandac$Position _f02709;
    panda$collections$ImmutableArray* _f12711 = NULL;
    org$pandalanguage$pandac$Position _f02714;
    panda$collections$ImmutableArray* _f12716 = NULL;
    panda$collections$ImmutableArray* _f22718 = NULL;
    org$pandalanguage$pandac$Position _f02721;
    panda$core$String* _f12723 = NULL;
    org$pandalanguage$pandac$Position _f02726;
    org$pandalanguage$pandac$Type* _f12728 = NULL;
    org$pandalanguage$pandac$MethodRef* _f22730 = NULL;
    panda$collections$ImmutableArray* _f32732 = NULL;
    org$pandalanguage$pandac$Position _f02735;
    org$pandalanguage$pandac$IRNode* _f12737 = NULL;
    org$pandalanguage$pandac$Type* _f22739 = NULL;
    panda$core$Bit _f32741;
    org$pandalanguage$pandac$Position _f02744;
    org$pandalanguage$pandac$ChoiceEntry* _f12746 = NULL;
    org$pandalanguage$pandac$Position _f02749;
    org$pandalanguage$pandac$IRNode* _f12751 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f22753 = NULL;
    panda$core$Int64 _f32755;
    org$pandalanguage$pandac$Position _f02758;
    org$pandalanguage$pandac$Type* _f12760 = NULL;
    org$pandalanguage$pandac$IRNode* _f22762 = NULL;
    org$pandalanguage$pandac$Position _f02765;
    org$pandalanguage$pandac$Type* _f12767 = NULL;
    org$pandalanguage$pandac$Position _f02770;
    panda$core$String* _f12772 = NULL;
    org$pandalanguage$pandac$IRNode* _f02775 = NULL;
    org$pandalanguage$pandac$IRNode* _f12777 = NULL;
    org$pandalanguage$pandac$Position _f02780;
    panda$core$String* _f12782 = NULL;
    panda$collections$ImmutableArray* _f22784 = NULL;
    org$pandalanguage$pandac$IRNode* _f32786 = NULL;
    org$pandalanguage$pandac$IRNode* _f02789 = NULL;
    org$pandalanguage$pandac$IRNode* _f12791 = NULL;
    org$pandalanguage$pandac$Position _f02794;
    org$pandalanguage$pandac$Type* _f12796 = NULL;
    org$pandalanguage$pandac$IRNode* _f22798 = NULL;
    org$pandalanguage$pandac$FieldDecl* _f32800 = NULL;
    org$pandalanguage$pandac$Position _f02803;
    org$pandalanguage$pandac$IRNode* _f12805 = NULL;
    panda$collections$ImmutableArray* _f22807 = NULL;
    org$pandalanguage$pandac$IRNode* _f32809 = NULL;
    org$pandalanguage$pandac$Position _f02812;
    org$pandalanguage$pandac$Type* _f12814 = NULL;
    panda$core$UInt64 _f22816;
    org$pandalanguage$pandac$Position _f02819;
    org$pandalanguage$pandac$IRNode* _f12821 = NULL;
    org$pandalanguage$pandac$Position _f02824;
    org$pandalanguage$pandac$IRNode* _f12826 = NULL;
    org$pandalanguage$pandac$Position _f02829;
    panda$core$String* _f12831 = NULL;
    panda$collections$ImmutableArray* _f22833 = NULL;
    org$pandalanguage$pandac$Position _f02836;
    org$pandalanguage$pandac$IRNode* _f12838 = NULL;
    panda$collections$ImmutableArray* _f22840 = NULL;
    panda$collections$ImmutableArray* _f32842 = NULL;
    org$pandalanguage$pandac$Position _f02845;
    org$pandalanguage$pandac$IRNode* _f12847 = NULL;
    org$pandalanguage$pandac$MethodRef* _f22849 = NULL;
    org$pandalanguage$pandac$Position _f02852;
    org$pandalanguage$pandac$Type* _f12854 = NULL;
    panda$core$UInt64 _f22856;
    org$pandalanguage$pandac$Position _f02859;
    org$pandalanguage$pandac$Type* _f12861 = NULL;
    org$pandalanguage$pandac$Position _f02864;
    org$pandalanguage$pandac$parser$Token$Kind _f12866;
    org$pandalanguage$pandac$IRNode* _f22868 = NULL;
    org$pandalanguage$pandac$Position _f02871;
    panda$core$String* _f12873 = NULL;
    org$pandalanguage$pandac$IRNode* _f22875 = NULL;
    org$pandalanguage$pandac$IRNode* _f32877 = NULL;
    panda$collections$ImmutableArray* _f42879 = NULL;
    org$pandalanguage$pandac$Position _f02882;
    org$pandalanguage$pandac$Type* _f12884 = NULL;
    panda$core$Real64 _f22886;
    org$pandalanguage$pandac$Position _f02889;
    org$pandalanguage$pandac$IRNode* _f12891 = NULL;
    org$pandalanguage$pandac$Position _f02894;
    org$pandalanguage$pandac$Type* _f12896 = NULL;
    panda$core$Int64 _f22898;
    org$pandalanguage$pandac$IRNode* _f02901 = NULL;
    panda$core$Int64 _f12903;
    org$pandalanguage$pandac$Position _f02906;
    org$pandalanguage$pandac$Type* _f12908 = NULL;
    org$pandalanguage$pandac$Position _f02911;
    panda$core$String* _f12913 = NULL;
    org$pandalanguage$pandac$Position _f02916;
    org$pandalanguage$pandac$Type* _f12918 = NULL;
    org$pandalanguage$pandac$Position _f02921;
    org$pandalanguage$pandac$IRNode* _f12923 = NULL;
    org$pandalanguage$pandac$IRNode* _f22925 = NULL;
    org$pandalanguage$pandac$IRNode* _f32927 = NULL;
    org$pandalanguage$pandac$Position _f02930;
    org$pandalanguage$pandac$Type* _f12932 = NULL;
    org$pandalanguage$pandac$Position _f02935;
    panda$core$String* _f12937 = NULL;
    org$pandalanguage$pandac$Position _f02940;
    org$pandalanguage$pandac$Type* _f12942 = NULL;
    org$pandalanguage$pandac$IRNode* _f22944 = NULL;
    panda$collections$ImmutableArray* _f32946 = NULL;
    org$pandalanguage$pandac$Position _f02949;
    org$pandalanguage$pandac$Type* _f12951 = NULL;
    org$pandalanguage$pandac$IRNode* _f22953 = NULL;
    panda$collections$ImmutableArray* _f32955 = NULL;
    panda$collections$ImmutableArray* _f42957 = NULL;
    org$pandalanguage$pandac$Position _f02960;
    org$pandalanguage$pandac$IRNode* _f12962 = NULL;
    panda$collections$ImmutableArray* _f22964 = NULL;
    org$pandalanguage$pandac$Position _f02967;
    org$pandalanguage$pandac$IRNode* _f12969 = NULL;
    org$pandalanguage$pandac$IRNode* _f22971 = NULL;
    panda$core$Bit _f32973;
    org$pandalanguage$pandac$IRNode* _f42975 = NULL;
    org$pandalanguage$pandac$Position _f02978;
    org$pandalanguage$pandac$Variable$Kind _f12980;
    panda$collections$ImmutableArray* _f22982 = NULL;
    org$pandalanguage$pandac$Position _f02985;
    org$pandalanguage$pandac$Variable* _f12987 = NULL;
    org$pandalanguage$pandac$Position _f02990;
    panda$collections$ImmutableArray* _f12992 = NULL;
    panda$collections$ImmutableArray* _f22994 = NULL;
    org$pandalanguage$pandac$Position _f02997;
    panda$core$String* _f12999 = NULL;
    org$pandalanguage$pandac$IRNode* _f23001 = NULL;
    panda$collections$ImmutableArray* _f33003 = NULL;
    int $tmp2677;
    {
        int $tmp2680;
        {
            $tmp2682 = self;
            $match$5_12681 = $tmp2682;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2682));
            panda$core$Bit $tmp2683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp2683.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2685 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02684 = *$tmp2685;
                org$pandalanguage$pandac$IRNode** $tmp2687 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 16));
                _f12686 = *$tmp2687;
                org$pandalanguage$pandac$IRNode** $tmp2689 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 24));
                _f22688 = *$tmp2689;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12686));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22688));
            }
            }
            else {
            panda$core$Bit $tmp2690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp2690.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2692 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02691 = *$tmp2692;
                org$pandalanguage$pandac$Type** $tmp2694 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12681->$data + 16));
                _f12693 = *$tmp2694;
                org$pandalanguage$pandac$IRNode** $tmp2696 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 24));
                _f22695 = *$tmp2696;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2698 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12681->$data + 32));
                _f32697 = *$tmp2698;
                org$pandalanguage$pandac$IRNode** $tmp2700 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 40));
                _f42699 = *$tmp2700;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12693));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22695));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42699));
            }
            }
            else {
            panda$core$Bit $tmp2701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp2701.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2703 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02702 = *$tmp2703;
                org$pandalanguage$pandac$Type** $tmp2705 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12681->$data + 16));
                _f12704 = *$tmp2705;
                panda$core$Bit* $tmp2707 = ((panda$core$Bit*) ((char*) $match$5_12681->$data + 24));
                _f22706 = *$tmp2707;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12704));
            }
            }
            else {
            panda$core$Bit $tmp2708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp2708.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2710 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02709 = *$tmp2710;
                panda$collections$ImmutableArray** $tmp2712 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12681->$data + 16));
                _f12711 = *$tmp2712;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12711));
            }
            }
            else {
            panda$core$Bit $tmp2713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp2713.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2715 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02714 = *$tmp2715;
                panda$collections$ImmutableArray** $tmp2717 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12681->$data + 16));
                _f12716 = *$tmp2717;
                panda$collections$ImmutableArray** $tmp2719 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12681->$data + 24));
                _f22718 = *$tmp2719;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12716));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22718));
            }
            }
            else {
            panda$core$Bit $tmp2720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp2720.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2722 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02721 = *$tmp2722;
                panda$core$String** $tmp2724 = ((panda$core$String**) ((char*) $match$5_12681->$data + 16));
                _f12723 = *$tmp2724;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12723));
            }
            }
            else {
            panda$core$Bit $tmp2725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp2725.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2727 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02726 = *$tmp2727;
                org$pandalanguage$pandac$Type** $tmp2729 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12681->$data + 16));
                _f12728 = *$tmp2729;
                org$pandalanguage$pandac$MethodRef** $tmp2731 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12681->$data + 24));
                _f22730 = *$tmp2731;
                panda$collections$ImmutableArray** $tmp2733 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12681->$data + 32));
                _f32732 = *$tmp2733;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12728));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22730));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32732));
            }
            }
            else {
            panda$core$Bit $tmp2734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 7 }));
            if ($tmp2734.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2736 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02735 = *$tmp2736;
                org$pandalanguage$pandac$IRNode** $tmp2738 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 16));
                _f12737 = *$tmp2738;
                org$pandalanguage$pandac$Type** $tmp2740 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12681->$data + 24));
                _f22739 = *$tmp2740;
                panda$core$Bit* $tmp2742 = ((panda$core$Bit*) ((char*) $match$5_12681->$data + 32));
                _f32741 = *$tmp2742;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12737));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22739));
            }
            }
            else {
            panda$core$Bit $tmp2743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp2743.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2745 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02744 = *$tmp2745;
                org$pandalanguage$pandac$ChoiceEntry** $tmp2747 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12681->$data + 16));
                _f12746 = *$tmp2747;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12746));
            }
            }
            else {
            panda$core$Bit $tmp2748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp2748.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2750 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02749 = *$tmp2750;
                org$pandalanguage$pandac$IRNode** $tmp2752 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 16));
                _f12751 = *$tmp2752;
                org$pandalanguage$pandac$ChoiceEntry** $tmp2754 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12681->$data + 24));
                _f22753 = *$tmp2754;
                panda$core$Int64* $tmp2756 = ((panda$core$Int64*) ((char*) $match$5_12681->$data + 32));
                _f32755 = *$tmp2756;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12751));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22753));
            }
            }
            else {
            panda$core$Bit $tmp2757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 10 }));
            if ($tmp2757.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2759 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02758 = *$tmp2759;
                org$pandalanguage$pandac$Type** $tmp2761 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12681->$data + 16));
                _f12760 = *$tmp2761;
                org$pandalanguage$pandac$IRNode** $tmp2763 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 24));
                _f22762 = *$tmp2763;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12760));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22762));
            }
            }
            else {
            panda$core$Bit $tmp2764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp2764.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2766 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02765 = *$tmp2766;
                org$pandalanguage$pandac$Type** $tmp2768 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12681->$data + 16));
                _f12767 = *$tmp2768;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12767));
            }
            }
            else {
            panda$core$Bit $tmp2769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp2769.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2771 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02770 = *$tmp2771;
                panda$core$String** $tmp2773 = ((panda$core$String**) ((char*) $match$5_12681->$data + 16));
                _f12772 = *$tmp2773;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12772));
            }
            }
            else {
            panda$core$Bit $tmp2774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp2774.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2776 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 0));
                _f02775 = *$tmp2776;
                org$pandalanguage$pandac$IRNode** $tmp2778 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 8));
                _f12777 = *$tmp2778;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02775));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12777));
            }
            }
            else {
            panda$core$Bit $tmp2779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp2779.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2781 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02780 = *$tmp2781;
                panda$core$String** $tmp2783 = ((panda$core$String**) ((char*) $match$5_12681->$data + 16));
                _f12782 = *$tmp2783;
                panda$collections$ImmutableArray** $tmp2785 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12681->$data + 24));
                _f22784 = *$tmp2785;
                org$pandalanguage$pandac$IRNode** $tmp2787 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 32));
                _f32786 = *$tmp2787;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12782));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22784));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32786));
            }
            }
            else {
            panda$core$Bit $tmp2788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp2788.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2790 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 0));
                _f02789 = *$tmp2790;
                org$pandalanguage$pandac$IRNode** $tmp2792 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 8));
                _f12791 = *$tmp2792;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02789));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12791));
            }
            }
            else {
            panda$core$Bit $tmp2793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 16 }));
            if ($tmp2793.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2795 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02794 = *$tmp2795;
                org$pandalanguage$pandac$Type** $tmp2797 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12681->$data + 16));
                _f12796 = *$tmp2797;
                org$pandalanguage$pandac$IRNode** $tmp2799 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 24));
                _f22798 = *$tmp2799;
                org$pandalanguage$pandac$FieldDecl** $tmp2801 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$5_12681->$data + 32));
                _f32800 = *$tmp2801;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12796));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22798));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32800));
            }
            }
            else {
            panda$core$Bit $tmp2802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp2802.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2804 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02803 = *$tmp2804;
                org$pandalanguage$pandac$IRNode** $tmp2806 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 16));
                _f12805 = *$tmp2806;
                panda$collections$ImmutableArray** $tmp2808 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12681->$data + 24));
                _f22807 = *$tmp2808;
                org$pandalanguage$pandac$IRNode** $tmp2810 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 32));
                _f32809 = *$tmp2810;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12805));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22807));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32809));
            }
            }
            else {
            panda$core$Bit $tmp2811 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp2811.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2813 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02812 = *$tmp2813;
                org$pandalanguage$pandac$Type** $tmp2815 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12681->$data + 16));
                _f12814 = *$tmp2815;
                panda$core$UInt64* $tmp2817 = ((panda$core$UInt64*) ((char*) $match$5_12681->$data + 24));
                _f22816 = *$tmp2817;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12814));
            }
            }
            else {
            panda$core$Bit $tmp2818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp2818.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2820 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02819 = *$tmp2820;
                org$pandalanguage$pandac$IRNode** $tmp2822 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 16));
                _f12821 = *$tmp2822;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12821));
            }
            }
            else {
            panda$core$Bit $tmp2823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 20 }));
            if ($tmp2823.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2825 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02824 = *$tmp2825;
                org$pandalanguage$pandac$IRNode** $tmp2827 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 16));
                _f12826 = *$tmp2827;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12826));
            }
            }
            else {
            panda$core$Bit $tmp2828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 21 }));
            if ($tmp2828.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2830 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02829 = *$tmp2830;
                panda$core$String** $tmp2832 = ((panda$core$String**) ((char*) $match$5_12681->$data + 16));
                _f12831 = *$tmp2832;
                panda$collections$ImmutableArray** $tmp2834 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12681->$data + 24));
                _f22833 = *$tmp2834;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12831));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22833));
            }
            }
            else {
            panda$core$Bit $tmp2835 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp2835.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2837 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02836 = *$tmp2837;
                org$pandalanguage$pandac$IRNode** $tmp2839 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 16));
                _f12838 = *$tmp2839;
                panda$collections$ImmutableArray** $tmp2841 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12681->$data + 24));
                _f22840 = *$tmp2841;
                panda$collections$ImmutableArray** $tmp2843 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12681->$data + 32));
                _f32842 = *$tmp2843;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12838));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22840));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32842));
            }
            }
            else {
            panda$core$Bit $tmp2844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp2844.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2846 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02845 = *$tmp2846;
                org$pandalanguage$pandac$IRNode** $tmp2848 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 16));
                _f12847 = *$tmp2848;
                org$pandalanguage$pandac$MethodRef** $tmp2850 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12681->$data + 24));
                _f22849 = *$tmp2850;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12847));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22849));
            }
            }
            else {
            panda$core$Bit $tmp2851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp2851.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2853 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02852 = *$tmp2853;
                org$pandalanguage$pandac$Type** $tmp2855 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12681->$data + 16));
                _f12854 = *$tmp2855;
                panda$core$UInt64* $tmp2857 = ((panda$core$UInt64*) ((char*) $match$5_12681->$data + 24));
                _f22856 = *$tmp2857;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12854));
            }
            }
            else {
            panda$core$Bit $tmp2858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp2858.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2860 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02859 = *$tmp2860;
                org$pandalanguage$pandac$Type** $tmp2862 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12681->$data + 16));
                _f12861 = *$tmp2862;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12861));
            }
            }
            else {
            panda$core$Bit $tmp2863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp2863.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2865 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02864 = *$tmp2865;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2867 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12681->$data + 16));
                _f12866 = *$tmp2867;
                org$pandalanguage$pandac$IRNode** $tmp2869 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 24));
                _f22868 = *$tmp2869;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22868));
            }
            }
            else {
            panda$core$Bit $tmp2870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 27 }));
            if ($tmp2870.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2872 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02871 = *$tmp2872;
                panda$core$String** $tmp2874 = ((panda$core$String**) ((char*) $match$5_12681->$data + 16));
                _f12873 = *$tmp2874;
                org$pandalanguage$pandac$IRNode** $tmp2876 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 24));
                _f22875 = *$tmp2876;
                org$pandalanguage$pandac$IRNode** $tmp2878 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 32));
                _f32877 = *$tmp2878;
                panda$collections$ImmutableArray** $tmp2880 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12681->$data + 40));
                _f42879 = *$tmp2880;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12873));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22875));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32877));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42879));
            }
            }
            else {
            panda$core$Bit $tmp2881 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 28 }));
            if ($tmp2881.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2883 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02882 = *$tmp2883;
                org$pandalanguage$pandac$Type** $tmp2885 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12681->$data + 16));
                _f12884 = *$tmp2885;
                panda$core$Real64* $tmp2887 = ((panda$core$Real64*) ((char*) $match$5_12681->$data + 24));
                _f22886 = *$tmp2887;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12884));
            }
            }
            else {
            panda$core$Bit $tmp2888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 29 }));
            if ($tmp2888.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2890 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02889 = *$tmp2890;
                org$pandalanguage$pandac$IRNode** $tmp2892 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 16));
                _f12891 = *$tmp2892;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12891));
            }
            }
            else {
            panda$core$Bit $tmp2893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 30 }));
            if ($tmp2893.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2895 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02894 = *$tmp2895;
                org$pandalanguage$pandac$Type** $tmp2897 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12681->$data + 16));
                _f12896 = *$tmp2897;
                panda$core$Int64* $tmp2899 = ((panda$core$Int64*) ((char*) $match$5_12681->$data + 24));
                _f22898 = *$tmp2899;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12896));
            }
            }
            else {
            panda$core$Bit $tmp2900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 31 }));
            if ($tmp2900.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2902 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 0));
                _f02901 = *$tmp2902;
                panda$core$Int64* $tmp2904 = ((panda$core$Int64*) ((char*) $match$5_12681->$data + 8));
                _f12903 = *$tmp2904;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02901));
            }
            }
            else {
            panda$core$Bit $tmp2905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 32 }));
            if ($tmp2905.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2907 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02906 = *$tmp2907;
                org$pandalanguage$pandac$Type** $tmp2909 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12681->$data + 16));
                _f12908 = *$tmp2909;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12908));
            }
            }
            else {
            panda$core$Bit $tmp2910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp2910.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2912 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02911 = *$tmp2912;
                panda$core$String** $tmp2914 = ((panda$core$String**) ((char*) $match$5_12681->$data + 16));
                _f12913 = *$tmp2914;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12913));
            }
            }
            else {
            panda$core$Bit $tmp2915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp2915.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2917 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02916 = *$tmp2917;
                org$pandalanguage$pandac$Type** $tmp2919 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12681->$data + 16));
                _f12918 = *$tmp2919;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12918));
            }
            }
            else {
            panda$core$Bit $tmp2920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 35 }));
            if ($tmp2920.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2922 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02921 = *$tmp2922;
                org$pandalanguage$pandac$IRNode** $tmp2924 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 16));
                _f12923 = *$tmp2924;
                org$pandalanguage$pandac$IRNode** $tmp2926 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 24));
                _f22925 = *$tmp2926;
                org$pandalanguage$pandac$IRNode** $tmp2928 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 32));
                _f32927 = *$tmp2928;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12923));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22925));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32927));
            }
            }
            else {
            panda$core$Bit $tmp2929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp2929.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2931 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02930 = *$tmp2931;
                org$pandalanguage$pandac$Type** $tmp2933 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12681->$data + 16));
                _f12932 = *$tmp2933;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12932));
            }
            }
            else {
            panda$core$Bit $tmp2934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 37 }));
            if ($tmp2934.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2936 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02935 = *$tmp2936;
                panda$core$String** $tmp2938 = ((panda$core$String**) ((char*) $match$5_12681->$data + 16));
                _f12937 = *$tmp2938;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12937));
            }
            }
            else {
            panda$core$Bit $tmp2939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 38 }));
            if ($tmp2939.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2941 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02940 = *$tmp2941;
                org$pandalanguage$pandac$Type** $tmp2943 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12681->$data + 16));
                _f12942 = *$tmp2943;
                org$pandalanguage$pandac$IRNode** $tmp2945 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 24));
                _f22944 = *$tmp2945;
                panda$collections$ImmutableArray** $tmp2947 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12681->$data + 32));
                _f32946 = *$tmp2947;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12942));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22944));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32946));
            }
            }
            else {
            panda$core$Bit $tmp2948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp2948.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2950 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02949 = *$tmp2950;
                org$pandalanguage$pandac$Type** $tmp2952 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12681->$data + 16));
                _f12951 = *$tmp2952;
                org$pandalanguage$pandac$IRNode** $tmp2954 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 24));
                _f22953 = *$tmp2954;
                panda$collections$ImmutableArray** $tmp2956 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12681->$data + 32));
                _f32955 = *$tmp2956;
                panda$collections$ImmutableArray** $tmp2958 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12681->$data + 40));
                _f42957 = *$tmp2958;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12951));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22953));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32955));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42957));
            }
            }
            else {
            panda$core$Bit $tmp2959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp2959.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2961 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02960 = *$tmp2961;
                org$pandalanguage$pandac$IRNode** $tmp2963 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 16));
                _f12962 = *$tmp2963;
                panda$collections$ImmutableArray** $tmp2965 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12681->$data + 24));
                _f22964 = *$tmp2965;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12962));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22964));
            }
            }
            else {
            panda$core$Bit $tmp2966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 41 }));
            if ($tmp2966.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2968 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02967 = *$tmp2968;
                org$pandalanguage$pandac$IRNode** $tmp2970 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 16));
                _f12969 = *$tmp2970;
                org$pandalanguage$pandac$IRNode** $tmp2972 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 24));
                _f22971 = *$tmp2972;
                panda$core$Bit* $tmp2974 = ((panda$core$Bit*) ((char*) $match$5_12681->$data + 32));
                _f32973 = *$tmp2974;
                org$pandalanguage$pandac$IRNode** $tmp2976 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 33));
                _f42975 = *$tmp2976;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12969));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22971));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42975));
            }
            }
            else {
            panda$core$Bit $tmp2977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 42 }));
            if ($tmp2977.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2979 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02978 = *$tmp2979;
                org$pandalanguage$pandac$Variable$Kind* $tmp2981 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_12681->$data + 16));
                _f12980 = *$tmp2981;
                panda$collections$ImmutableArray** $tmp2983 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12681->$data + 24));
                _f22982 = *$tmp2983;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22982));
            }
            }
            else {
            panda$core$Bit $tmp2984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 43 }));
            if ($tmp2984.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2986 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02985 = *$tmp2986;
                org$pandalanguage$pandac$Variable** $tmp2988 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$5_12681->$data + 16));
                _f12987 = *$tmp2988;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12987));
            }
            }
            else {
            panda$core$Bit $tmp2989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 44 }));
            if ($tmp2989.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2991 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02990 = *$tmp2991;
                panda$collections$ImmutableArray** $tmp2993 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12681->$data + 16));
                _f12992 = *$tmp2993;
                panda$collections$ImmutableArray** $tmp2995 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12681->$data + 24));
                _f22994 = *$tmp2995;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12992));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22994));
            }
            }
            else {
            panda$core$Bit $tmp2996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12681->$rawValue, ((panda$core$Int64) { 45 }));
            if ($tmp2996.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2998 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12681->$data + 0));
                _f02997 = *$tmp2998;
                panda$core$String** $tmp3000 = ((panda$core$String**) ((char*) $match$5_12681->$data + 16));
                _f12999 = *$tmp3000;
                org$pandalanguage$pandac$IRNode** $tmp3002 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12681->$data + 24));
                _f23001 = *$tmp3002;
                panda$collections$ImmutableArray** $tmp3004 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12681->$data + 32));
                _f33003 = *$tmp3004;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12999));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23001));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33003));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp2680 = -1;
        goto $l2678;
        $l2678:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2682));
        switch ($tmp2680) {
            case -1: goto $l3005;
        }
        $l3005:;
    }
    $tmp2677 = -1;
    goto $l2675;
    $l2675:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2677) {
        case -1: goto $l3006;
    }
    $l3006:;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3008;
    org$pandalanguage$pandac$IRNode* $tmp3011;
    org$pandalanguage$pandac$IRNode* $tmp3012;
    org$pandalanguage$pandac$IRNode* $tmp3015;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3007 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3007 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3009 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3008 = *$tmp3009;
        org$pandalanguage$pandac$IRNode** $tmp3010 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3011 = p_f1;
        *$tmp3010 = $tmp3011;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3011));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3008));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3013 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3012 = *$tmp3013;
        org$pandalanguage$pandac$IRNode** $tmp3014 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3015 = p_f2;
        *$tmp3014 = $tmp3015;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3015));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3012));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$parser$Token$Kind p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$Type* $tmp3017;
    org$pandalanguage$pandac$Type* $tmp3020;
    org$pandalanguage$pandac$IRNode* $tmp3021;
    org$pandalanguage$pandac$IRNode* $tmp3024;
    org$pandalanguage$pandac$IRNode* $tmp3026;
    org$pandalanguage$pandac$IRNode* $tmp3029;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3016 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3016 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3018 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3017 = *$tmp3018;
        org$pandalanguage$pandac$Type** $tmp3019 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3020 = p_f1;
        *$tmp3019 = $tmp3020;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3020));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3017));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3022 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3021 = *$tmp3022;
        org$pandalanguage$pandac$IRNode** $tmp3023 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3024 = p_f2;
        *$tmp3023 = $tmp3024;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3024));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3021));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp3025 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 32));
    *$tmp3025 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp3027 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp3026 = *$tmp3027;
        org$pandalanguage$pandac$IRNode** $tmp3028 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp3029 = p_f4;
        *$tmp3028 = $tmp3029;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3029));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3026));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Bit p_f2) {
    org$pandalanguage$pandac$Type* $tmp3031;
    org$pandalanguage$pandac$Type* $tmp3034;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3030 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3030 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3032 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3031 = *$tmp3032;
        org$pandalanguage$pandac$Type** $tmp3033 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3034 = p_f1;
        *$tmp3033 = $tmp3034;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3034));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3031));
    }
    panda$core$Bit* $tmp3035 = ((panda$core$Bit*) ((char*) self->$data + 24));
    *$tmp3035 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp3037;
    panda$collections$ImmutableArray* $tmp3040;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3036 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3036 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp3038 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3037 = *$tmp3038;
        panda$collections$ImmutableArray** $tmp3039 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3040 = p_f1;
        *$tmp3039 = $tmp3040;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3040));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3037));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp3042;
    panda$collections$ImmutableArray* $tmp3045;
    panda$collections$ImmutableArray* $tmp3046;
    panda$collections$ImmutableArray* $tmp3049;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3041 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3041 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp3043 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3042 = *$tmp3043;
        panda$collections$ImmutableArray** $tmp3044 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3045 = p_f1;
        *$tmp3044 = $tmp3045;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3045));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3042));
    }
    {
        panda$collections$ImmutableArray** $tmp3047 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3046 = *$tmp3047;
        panda$collections$ImmutableArray** $tmp3048 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3049 = p_f2;
        *$tmp3048 = $tmp3049;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3049));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3046));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp3051;
    panda$core$String* $tmp3054;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3050 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3050 = p_f0;
    {
        panda$core$String** $tmp3052 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3051 = *$tmp3052;
        panda$core$String** $tmp3053 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3054 = p_f1;
        *$tmp3053 = $tmp3054;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3054));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3051));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$MethodRef* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3056;
    org$pandalanguage$pandac$Type* $tmp3059;
    org$pandalanguage$pandac$MethodRef* $tmp3060;
    org$pandalanguage$pandac$MethodRef* $tmp3063;
    panda$collections$ImmutableArray* $tmp3064;
    panda$collections$ImmutableArray* $tmp3067;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3055 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3055 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3057 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3056 = *$tmp3057;
        org$pandalanguage$pandac$Type** $tmp3058 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3059 = p_f1;
        *$tmp3058 = $tmp3059;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3059));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3056));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp3061 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3060 = *$tmp3061;
        org$pandalanguage$pandac$MethodRef** $tmp3062 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3063 = p_f2;
        *$tmp3062 = $tmp3063;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3063));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3060));
    }
    {
        panda$collections$ImmutableArray** $tmp3065 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3064 = *$tmp3065;
        panda$collections$ImmutableArray** $tmp3066 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3067 = p_f3;
        *$tmp3066 = $tmp3067;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3067));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3064));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$Type* p_f2, panda$core$Bit p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3069;
    org$pandalanguage$pandac$IRNode* $tmp3072;
    org$pandalanguage$pandac$Type* $tmp3073;
    org$pandalanguage$pandac$Type* $tmp3076;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3068 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3068 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3070 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3069 = *$tmp3070;
        org$pandalanguage$pandac$IRNode** $tmp3071 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3072 = p_f1;
        *$tmp3071 = $tmp3072;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3072));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3069));
    }
    {
        org$pandalanguage$pandac$Type** $tmp3074 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp3073 = *$tmp3074;
        org$pandalanguage$pandac$Type** $tmp3075 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp3076 = p_f2;
        *$tmp3075 = $tmp3076;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3076));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3073));
    }
    panda$core$Bit* $tmp3077 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp3077 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceEntry(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ChoiceEntry* p_f1) {
    org$pandalanguage$pandac$ChoiceEntry* $tmp3079;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3082;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3078 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3078 = p_f0;
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp3080 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp3079 = *$tmp3080;
        org$pandalanguage$pandac$ChoiceEntry** $tmp3081 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp3082 = p_f1;
        *$tmp3081 = $tmp3082;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3082));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3079));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3084;
    org$pandalanguage$pandac$IRNode* $tmp3087;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3088;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3091;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3083 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3083 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3085 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3084 = *$tmp3085;
        org$pandalanguage$pandac$IRNode** $tmp3086 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3087 = p_f1;
        *$tmp3086 = $tmp3087;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3087));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3084));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp3089 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp3088 = *$tmp3089;
        org$pandalanguage$pandac$ChoiceEntry** $tmp3090 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp3091 = p_f2;
        *$tmp3090 = $tmp3091;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3091));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3088));
    }
    panda$core$Int64* $tmp3092 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp3092 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$Type* $tmp3094;
    org$pandalanguage$pandac$Type* $tmp3097;
    org$pandalanguage$pandac$IRNode* $tmp3098;
    org$pandalanguage$pandac$IRNode* $tmp3101;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3093 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3093 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3095 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3094 = *$tmp3095;
        org$pandalanguage$pandac$Type** $tmp3096 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3097 = p_f1;
        *$tmp3096 = $tmp3097;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3097));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3094));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3099 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3098 = *$tmp3099;
        org$pandalanguage$pandac$IRNode** $tmp3100 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3101 = p_f2;
        *$tmp3100 = $tmp3101;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3101));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3098));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1) {
    org$pandalanguage$pandac$Type* $tmp3103;
    org$pandalanguage$pandac$Type* $tmp3106;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3102 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3102 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3104 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3103 = *$tmp3104;
        org$pandalanguage$pandac$Type** $tmp3105 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3106 = p_f1;
        *$tmp3105 = $tmp3106;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3106));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3103));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3107;
    org$pandalanguage$pandac$IRNode* $tmp3110;
    org$pandalanguage$pandac$IRNode* $tmp3111;
    org$pandalanguage$pandac$IRNode* $tmp3114;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3108 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3107 = *$tmp3108;
        org$pandalanguage$pandac$IRNode** $tmp3109 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3110 = p_f0;
        *$tmp3109 = $tmp3110;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3110));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3107));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3112 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3111 = *$tmp3112;
        org$pandalanguage$pandac$IRNode** $tmp3113 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3114 = p_f1;
        *$tmp3113 = $tmp3114;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3114));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3111));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    panda$core$String* $tmp3116;
    panda$core$String* $tmp3119;
    panda$collections$ImmutableArray* $tmp3120;
    panda$collections$ImmutableArray* $tmp3123;
    org$pandalanguage$pandac$IRNode* $tmp3124;
    org$pandalanguage$pandac$IRNode* $tmp3127;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3115 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3115 = p_f0;
    {
        panda$core$String** $tmp3117 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3116 = *$tmp3117;
        panda$core$String** $tmp3118 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3119 = p_f1;
        *$tmp3118 = $tmp3119;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3119));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3116));
    }
    {
        panda$collections$ImmutableArray** $tmp3121 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3120 = *$tmp3121;
        panda$collections$ImmutableArray** $tmp3122 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3123 = p_f2;
        *$tmp3122 = $tmp3123;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3123));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3120));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3125 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3124 = *$tmp3125;
        org$pandalanguage$pandac$IRNode** $tmp3126 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3127 = p_f3;
        *$tmp3126 = $tmp3127;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3127));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3124));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3128;
    org$pandalanguage$pandac$IRNode* $tmp3131;
    org$pandalanguage$pandac$IRNode* $tmp3132;
    org$pandalanguage$pandac$IRNode* $tmp3135;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3129 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3128 = *$tmp3129;
        org$pandalanguage$pandac$IRNode** $tmp3130 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3131 = p_f0;
        *$tmp3130 = $tmp3131;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3131));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3128));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3133 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3132 = *$tmp3133;
        org$pandalanguage$pandac$IRNode** $tmp3134 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3135 = p_f1;
        *$tmp3134 = $tmp3135;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3135));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3132));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$FieldDecl* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3137;
    org$pandalanguage$pandac$Type* $tmp3140;
    org$pandalanguage$pandac$IRNode* $tmp3141;
    org$pandalanguage$pandac$IRNode* $tmp3144;
    org$pandalanguage$pandac$FieldDecl* $tmp3145;
    org$pandalanguage$pandac$FieldDecl* $tmp3148;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3136 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3136 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3138 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3137 = *$tmp3138;
        org$pandalanguage$pandac$Type** $tmp3139 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3140 = p_f1;
        *$tmp3139 = $tmp3140;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3140));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3137));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3142 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3141 = *$tmp3142;
        org$pandalanguage$pandac$IRNode** $tmp3143 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3144 = p_f2;
        *$tmp3143 = $tmp3144;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3144));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3141));
    }
    {
        org$pandalanguage$pandac$FieldDecl** $tmp3146 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp3145 = *$tmp3146;
        org$pandalanguage$pandac$FieldDecl** $tmp3147 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp3148 = p_f3;
        *$tmp3147 = $tmp3148;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3148));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3145));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3150;
    org$pandalanguage$pandac$IRNode* $tmp3153;
    panda$collections$ImmutableArray* $tmp3154;
    panda$collections$ImmutableArray* $tmp3157;
    org$pandalanguage$pandac$IRNode* $tmp3158;
    org$pandalanguage$pandac$IRNode* $tmp3161;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3149 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3149 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3151 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3150 = *$tmp3151;
        org$pandalanguage$pandac$IRNode** $tmp3152 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3153 = p_f1;
        *$tmp3152 = $tmp3153;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3153));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3150));
    }
    {
        panda$collections$ImmutableArray** $tmp3155 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3154 = *$tmp3155;
        panda$collections$ImmutableArray** $tmp3156 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3157 = p_f2;
        *$tmp3156 = $tmp3157;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3157));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3154));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3159 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3158 = *$tmp3159;
        org$pandalanguage$pandac$IRNode** $tmp3160 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3161 = p_f3;
        *$tmp3160 = $tmp3161;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3161));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3158));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$UInt64 p_f2) {
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
    panda$core$UInt64* $tmp3167 = ((panda$core$UInt64*) ((char*) self->$data + 24));
    *$tmp3167 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3169;
    org$pandalanguage$pandac$IRNode* $tmp3172;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3168 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3168 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3170 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3169 = *$tmp3170;
        org$pandalanguage$pandac$IRNode** $tmp3171 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3172 = p_f1;
        *$tmp3171 = $tmp3172;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3172));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3169));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp3174;
    panda$core$String* $tmp3177;
    panda$collections$ImmutableArray* $tmp3178;
    panda$collections$ImmutableArray* $tmp3181;
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
    {
        panda$collections$ImmutableArray** $tmp3179 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3178 = *$tmp3179;
        panda$collections$ImmutableArray** $tmp3180 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3181 = p_f2;
        *$tmp3180 = $tmp3181;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3181));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3178));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3183;
    org$pandalanguage$pandac$IRNode* $tmp3186;
    panda$collections$ImmutableArray* $tmp3187;
    panda$collections$ImmutableArray* $tmp3190;
    panda$collections$ImmutableArray* $tmp3191;
    panda$collections$ImmutableArray* $tmp3194;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3182 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3182 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3184 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3183 = *$tmp3184;
        org$pandalanguage$pandac$IRNode** $tmp3185 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3186 = p_f1;
        *$tmp3185 = $tmp3186;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3186));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3183));
    }
    {
        panda$collections$ImmutableArray** $tmp3188 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3187 = *$tmp3188;
        panda$collections$ImmutableArray** $tmp3189 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3190 = p_f2;
        *$tmp3189 = $tmp3190;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3190));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3187));
    }
    {
        panda$collections$ImmutableArray** $tmp3192 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3191 = *$tmp3192;
        panda$collections$ImmutableArray** $tmp3193 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3194 = p_f3;
        *$tmp3193 = $tmp3194;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3194));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3191));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$MethodRef* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3196;
    org$pandalanguage$pandac$IRNode* $tmp3199;
    org$pandalanguage$pandac$MethodRef* $tmp3200;
    org$pandalanguage$pandac$MethodRef* $tmp3203;
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
        org$pandalanguage$pandac$MethodRef** $tmp3201 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3200 = *$tmp3201;
        org$pandalanguage$pandac$MethodRef** $tmp3202 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3203 = p_f2;
        *$tmp3202 = $tmp3203;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3203));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3200));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3206;
    org$pandalanguage$pandac$IRNode* $tmp3209;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3204 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3204 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp3205 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp3205 = p_f1;
    {
        org$pandalanguage$pandac$IRNode** $tmp3207 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3206 = *$tmp3207;
        org$pandalanguage$pandac$IRNode** $tmp3208 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3209 = p_f2;
        *$tmp3208 = $tmp3209;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3209));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3206));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp3211;
    panda$core$String* $tmp3214;
    org$pandalanguage$pandac$IRNode* $tmp3215;
    org$pandalanguage$pandac$IRNode* $tmp3218;
    org$pandalanguage$pandac$IRNode* $tmp3219;
    org$pandalanguage$pandac$IRNode* $tmp3222;
    panda$collections$ImmutableArray* $tmp3223;
    panda$collections$ImmutableArray* $tmp3226;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3210 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3210 = p_f0;
    {
        panda$core$String** $tmp3212 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3211 = *$tmp3212;
        panda$core$String** $tmp3213 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3214 = p_f1;
        *$tmp3213 = $tmp3214;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3214));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3211));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3216 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3215 = *$tmp3216;
        org$pandalanguage$pandac$IRNode** $tmp3217 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3218 = p_f2;
        *$tmp3217 = $tmp3218;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3218));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3215));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3220 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3219 = *$tmp3220;
        org$pandalanguage$pandac$IRNode** $tmp3221 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3222 = p_f3;
        *$tmp3221 = $tmp3222;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3222));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3219));
    }
    {
        panda$collections$ImmutableArray** $tmp3224 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3223 = *$tmp3224;
        panda$collections$ImmutableArray** $tmp3225 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3226 = p_f4;
        *$tmp3225 = $tmp3226;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3226));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3223));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Real64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3228;
    org$pandalanguage$pandac$Type* $tmp3231;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3227 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3227 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3229 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3228 = *$tmp3229;
        org$pandalanguage$pandac$Type** $tmp3230 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3231 = p_f1;
        *$tmp3230 = $tmp3231;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3231));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3228));
    }
    panda$core$Real64* $tmp3232 = ((panda$core$Real64*) ((char*) self->$data + 24));
    *$tmp3232 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3234;
    org$pandalanguage$pandac$IRNode* $tmp3237;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3233 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3233 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3235 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3234 = *$tmp3235;
        org$pandalanguage$pandac$IRNode** $tmp3236 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3237 = p_f1;
        *$tmp3236 = $tmp3237;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3237));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3234));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Int64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3239;
    org$pandalanguage$pandac$Type* $tmp3242;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3238 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3238 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3240 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3239 = *$tmp3240;
        org$pandalanguage$pandac$Type** $tmp3241 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3242 = p_f1;
        *$tmp3241 = $tmp3242;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3242));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3239));
    }
    panda$core$Int64* $tmp3243 = ((panda$core$Int64*) ((char*) self->$data + 24));
    *$tmp3243 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$core$Int64 p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3244;
    org$pandalanguage$pandac$IRNode* $tmp3247;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3245 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3244 = *$tmp3245;
        org$pandalanguage$pandac$IRNode** $tmp3246 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3247 = p_f0;
        *$tmp3246 = $tmp3247;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3247));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3244));
    }
    panda$core$Int64* $tmp3248 = ((panda$core$Int64*) ((char*) self->$data + 8));
    *$tmp3248 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp3250;
    panda$core$String* $tmp3253;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3249 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3249 = p_f0;
    {
        panda$core$String** $tmp3251 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3250 = *$tmp3251;
        panda$core$String** $tmp3252 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3253 = p_f1;
        *$tmp3252 = $tmp3253;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3253));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3250));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3255;
    org$pandalanguage$pandac$IRNode* $tmp3258;
    org$pandalanguage$pandac$IRNode* $tmp3259;
    org$pandalanguage$pandac$IRNode* $tmp3262;
    org$pandalanguage$pandac$IRNode* $tmp3263;
    org$pandalanguage$pandac$IRNode* $tmp3266;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3254 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3254 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3256 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3255 = *$tmp3256;
        org$pandalanguage$pandac$IRNode** $tmp3257 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3258 = p_f1;
        *$tmp3257 = $tmp3258;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3258));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3255));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3260 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3259 = *$tmp3260;
        org$pandalanguage$pandac$IRNode** $tmp3261 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3262 = p_f2;
        *$tmp3261 = $tmp3262;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3262));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3259));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3264 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3263 = *$tmp3264;
        org$pandalanguage$pandac$IRNode** $tmp3265 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3266 = p_f3;
        *$tmp3265 = $tmp3266;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3266));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3263));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3268;
    org$pandalanguage$pandac$Type* $tmp3271;
    org$pandalanguage$pandac$IRNode* $tmp3272;
    org$pandalanguage$pandac$IRNode* $tmp3275;
    panda$collections$ImmutableArray* $tmp3276;
    panda$collections$ImmutableArray* $tmp3279;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3267 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3267 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3269 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3268 = *$tmp3269;
        org$pandalanguage$pandac$Type** $tmp3270 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3271 = p_f1;
        *$tmp3270 = $tmp3271;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3271));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3268));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3273 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3272 = *$tmp3273;
        org$pandalanguage$pandac$IRNode** $tmp3274 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3275 = p_f2;
        *$tmp3274 = $tmp3275;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3275));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3272));
    }
    {
        panda$collections$ImmutableArray** $tmp3277 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3276 = *$tmp3277;
        panda$collections$ImmutableArray** $tmp3278 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3279 = p_f3;
        *$tmp3278 = $tmp3279;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3279));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3276));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3, panda$collections$ImmutableArray* p_f4) {
    org$pandalanguage$pandac$Type* $tmp3281;
    org$pandalanguage$pandac$Type* $tmp3284;
    org$pandalanguage$pandac$IRNode* $tmp3285;
    org$pandalanguage$pandac$IRNode* $tmp3288;
    panda$collections$ImmutableArray* $tmp3289;
    panda$collections$ImmutableArray* $tmp3292;
    panda$collections$ImmutableArray* $tmp3293;
    panda$collections$ImmutableArray* $tmp3296;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3280 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3280 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3282 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3281 = *$tmp3282;
        org$pandalanguage$pandac$Type** $tmp3283 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3284 = p_f1;
        *$tmp3283 = $tmp3284;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3284));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3281));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3286 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3285 = *$tmp3286;
        org$pandalanguage$pandac$IRNode** $tmp3287 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3288 = p_f2;
        *$tmp3287 = $tmp3288;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3288));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3285));
    }
    {
        panda$collections$ImmutableArray** $tmp3290 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3289 = *$tmp3290;
        panda$collections$ImmutableArray** $tmp3291 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3292 = p_f3;
        *$tmp3291 = $tmp3292;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3292));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3289));
    }
    {
        panda$collections$ImmutableArray** $tmp3294 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3293 = *$tmp3294;
        panda$collections$ImmutableArray** $tmp3295 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3296 = p_f4;
        *$tmp3295 = $tmp3296;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3296));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3293));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3298;
    org$pandalanguage$pandac$IRNode* $tmp3301;
    panda$collections$ImmutableArray* $tmp3302;
    panda$collections$ImmutableArray* $tmp3305;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3297 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3297 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3299 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3298 = *$tmp3299;
        org$pandalanguage$pandac$IRNode** $tmp3300 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3301 = p_f1;
        *$tmp3300 = $tmp3301;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3301));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3298));
    }
    {
        panda$collections$ImmutableArray** $tmp3303 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3302 = *$tmp3303;
        panda$collections$ImmutableArray** $tmp3304 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3305 = p_f2;
        *$tmp3304 = $tmp3305;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3305));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3302));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$IRNode* $tmp3307;
    org$pandalanguage$pandac$IRNode* $tmp3310;
    org$pandalanguage$pandac$IRNode* $tmp3311;
    org$pandalanguage$pandac$IRNode* $tmp3314;
    org$pandalanguage$pandac$IRNode* $tmp3316;
    org$pandalanguage$pandac$IRNode* $tmp3319;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3306 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3306 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3308 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3307 = *$tmp3308;
        org$pandalanguage$pandac$IRNode** $tmp3309 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
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
    panda$core$Bit* $tmp3315 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp3315 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp3317 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3316 = *$tmp3317;
        org$pandalanguage$pandac$IRNode** $tmp3318 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3319 = p_f4;
        *$tmp3318 = $tmp3319;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3319));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3316));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp3322;
    panda$collections$ImmutableArray* $tmp3325;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3320 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3320 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp3321 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp3321 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp3323 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3322 = *$tmp3323;
        panda$collections$ImmutableArray** $tmp3324 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3325 = p_f2;
        *$tmp3324 = $tmp3325;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3325));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3322));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable* p_f1) {
    org$pandalanguage$pandac$Variable* $tmp3327;
    org$pandalanguage$pandac$Variable* $tmp3330;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3326 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3326 = p_f0;
    {
        org$pandalanguage$pandac$Variable** $tmp3328 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3327 = *$tmp3328;
        org$pandalanguage$pandac$Variable** $tmp3329 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3330 = p_f1;
        *$tmp3329 = $tmp3330;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3330));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3327));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp3332;
    panda$core$String* $tmp3335;
    org$pandalanguage$pandac$IRNode* $tmp3336;
    org$pandalanguage$pandac$IRNode* $tmp3339;
    panda$collections$ImmutableArray* $tmp3340;
    panda$collections$ImmutableArray* $tmp3343;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3331 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3331 = p_f0;
    {
        panda$core$String** $tmp3333 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3332 = *$tmp3333;
        panda$core$String** $tmp3334 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3335 = p_f1;
        *$tmp3334 = $tmp3335;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3335));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3332));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3337 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3336 = *$tmp3337;
        org$pandalanguage$pandac$IRNode** $tmp3338 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3339 = p_f2;
        *$tmp3338 = $tmp3339;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3339));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3336));
    }
    {
        panda$collections$ImmutableArray** $tmp3341 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3340 = *$tmp3341;
        panda$collections$ImmutableArray** $tmp3342 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3343 = p_f3;
        *$tmp3342 = $tmp3343;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3343));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3340));
    }
}

