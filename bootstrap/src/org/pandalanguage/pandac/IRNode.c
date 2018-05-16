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
typedef org$pandalanguage$pandac$Type* (*$fn138)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn164)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn195)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn198)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn204)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn339)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn353)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn451)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn552)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn555)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn572)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn576)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn598)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn605)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn616)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn618)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn653)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn660)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn671)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn673)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn715)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn739)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn751)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn764)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn771)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn782)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn784)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn815)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn828)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn835)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn846)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn848)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn858)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn872)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn880)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn897)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn904)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn915)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn917)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn936)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn949)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn956)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn967)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn969)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn986)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn993)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1004)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1006)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1042)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1055)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1068)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1075)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1086)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1088)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1110)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1126)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1154)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1157)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1161)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1214)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1221)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1232)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1234)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1265)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1272)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1283)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1285)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1302)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1309)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1320)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1322)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1341)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1354)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1361)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1372)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1374)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1437)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1479)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1486)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1497)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1534)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1541)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1552)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1568)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1575)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1586)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn1647)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1673)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1706)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1788)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1800)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1832)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1839)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1850)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1882)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1902)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1939)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1946)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1957)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2040)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2047)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2058)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2102)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2109)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2120)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2136)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2143)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2154)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2181)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2225)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2274)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2281)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2292)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2447)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2473)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2500)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn2639)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2646)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2657)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x4e\x6f\x64\x65", 31, -8857975469778350849, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6d\x65\x74\x68\x6f\x64\x3e", 8, 17378158564789264, NULL };
static panda$core$String $s1403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s1405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s1418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s1500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x79\x20\x7b\x0a", 6, 2292679699717, NULL };
static panda$core$String $s1555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x66\x69\x6e\x61\x6c\x6c\x79\x20\x7b\x0a", 12, -1355183944487068280, NULL };
static panda$core$String $s1589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s1611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s1632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x4e\x54\x36\x34\x5f\x57\x52\x41\x50\x28", 11, -7093166379287162761, NULL };
static panda$core$String $s1660 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1745 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x2a\x2d", 24, 1541443738414735436, NULL };
static panda$core$String $s1766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s1768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1774 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s1790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1823 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s1853 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s1861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x2a\x20\x61\x6e\x64\x20\x74\x68\x65\x6e\x3a\x20", 14, -3277098584181619124, NULL };
static panda$core$String $s1887 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1907 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1927 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s1960 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1995 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1997 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s2008 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2010 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s2029 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2031 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s2061 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s2092 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s2157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s2227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s2261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s2264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s2326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s2344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s2370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s2408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s2413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s2416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s2475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2502 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2507 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s2528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s2531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s2533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s2559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s2561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s2563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s2592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s2596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s2599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2602 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s2629 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2660 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
    org$pandalanguage$pandac$Position $tmp115;
    org$pandalanguage$pandac$Type* type119 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn120;
    org$pandalanguage$pandac$Type* $tmp122;
    org$pandalanguage$pandac$Type* type126 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn127;
    org$pandalanguage$pandac$Type* $tmp129;
    org$pandalanguage$pandac$IRNode* base133 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn134;
    org$pandalanguage$pandac$Type* $tmp136;
    org$pandalanguage$pandac$Type* $tmp137;
    org$pandalanguage$pandac$Type* type143 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn144;
    org$pandalanguage$pandac$Type* $tmp146;
    org$pandalanguage$pandac$Type* type150 = NULL;
    panda$core$Int64 id152;
    org$pandalanguage$pandac$Type* $finallyReturn153;
    org$pandalanguage$pandac$Type* $tmp155;
    org$pandalanguage$pandac$IRNode* base159 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn160;
    org$pandalanguage$pandac$Type* $tmp162;
    org$pandalanguage$pandac$Type* $tmp163;
    org$pandalanguage$pandac$Type* type169 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn170;
    org$pandalanguage$pandac$Type* $tmp172;
    org$pandalanguage$pandac$Type* $finallyReturn175;
    org$pandalanguage$pandac$Type* $tmp177;
    org$pandalanguage$pandac$Type* $tmp178;
    org$pandalanguage$pandac$Type* type183 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn184;
    org$pandalanguage$pandac$Type* $tmp186;
    org$pandalanguage$pandac$IRNode* ifTrue190 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse192 = NULL;
    org$pandalanguage$pandac$Type* $tmp194;
    org$pandalanguage$pandac$Type* $tmp197;
    org$pandalanguage$pandac$Type* $finallyReturn200;
    org$pandalanguage$pandac$Type* $tmp202;
    org$pandalanguage$pandac$Type* $tmp203;
    org$pandalanguage$pandac$Type* $finallyReturn208;
    org$pandalanguage$pandac$Type* $tmp210;
    org$pandalanguage$pandac$Type* $tmp211;
    org$pandalanguage$pandac$Type* $finallyReturn215;
    org$pandalanguage$pandac$Type* $tmp217;
    org$pandalanguage$pandac$Type* $tmp218;
    org$pandalanguage$pandac$Type* type223 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn224;
    org$pandalanguage$pandac$Type* $tmp226;
    org$pandalanguage$pandac$Type* type230 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn231;
    org$pandalanguage$pandac$Type* $tmp233;
    org$pandalanguage$pandac$Type* $finallyReturn236;
    org$pandalanguage$pandac$Type* $tmp238;
    org$pandalanguage$pandac$Type* $tmp239;
    org$pandalanguage$pandac$Type* $finallyReturn243;
    org$pandalanguage$pandac$Type* $tmp245;
    org$pandalanguage$pandac$Type* $tmp246;
    org$pandalanguage$pandac$Variable* variable251 = NULL;
    org$pandalanguage$pandac$Type* $finallyReturn252;
    org$pandalanguage$pandac$Type* $tmp254;
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
            org$pandalanguage$pandac$Position$init(&$tmp115);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp113, &$s114, ((panda$core$Int64) { 16 }), $tmp115, ((panda$core$Bit) { true }));
            $tmp112 = $tmp113;
            $tmp111 = $tmp112;
            $finallyReturn109 = $tmp111;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp111));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp112));
            $tmp4 = 13;
            goto $l2;
            $l116:;
            return $finallyReturn109;
        }
        }
        else {
        panda$core$Bit $tmp118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp118.value) {
        {
            org$pandalanguage$pandac$Type** $tmp120 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_95->$data + 16));
            type119 = *$tmp120;
            $tmp122 = type119;
            $finallyReturn120 = $tmp122;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp122));
            $tmp4 = 14;
            goto $l2;
            $l123:;
            return $finallyReturn120;
        }
        }
        else {
        panda$core$Bit $tmp125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp125.value) {
        {
            org$pandalanguage$pandac$Type** $tmp127 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_95->$data + 16));
            type126 = *$tmp127;
            $tmp129 = type126;
            $finallyReturn127 = $tmp129;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp129));
            $tmp4 = 15;
            goto $l2;
            $l130:;
            return $finallyReturn127;
        }
        }
        else {
        panda$core$Bit $tmp132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp132.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp134 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$71_95->$data + 24));
            base133 = *$tmp134;
            org$pandalanguage$pandac$Type* $tmp139 = (($fn138) base133->$class->vtable[2])(base133);
            $tmp137 = $tmp139;
            $tmp136 = $tmp137;
            $finallyReturn134 = $tmp136;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp136));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp137));
            $tmp4 = 16;
            goto $l2;
            $l140:;
            return $finallyReturn134;
        }
        }
        else {
        panda$core$Bit $tmp142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp142.value) {
        {
            org$pandalanguage$pandac$Type** $tmp144 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_95->$data + 16));
            type143 = *$tmp144;
            $tmp146 = type143;
            $finallyReturn144 = $tmp146;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp146));
            $tmp4 = 17;
            goto $l2;
            $l147:;
            return $finallyReturn144;
        }
        }
        else {
        panda$core$Bit $tmp149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp149.value) {
        {
            org$pandalanguage$pandac$Type** $tmp151 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_95->$data + 16));
            type150 = *$tmp151;
            panda$core$Int64* $tmp153 = ((panda$core$Int64*) ((char*) $match$71_95->$data + 24));
            id152 = *$tmp153;
            $tmp155 = type150;
            $finallyReturn153 = $tmp155;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp155));
            $tmp4 = 18;
            goto $l2;
            $l156:;
            return $finallyReturn153;
        }
        }
        else {
        panda$core$Bit $tmp158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp158.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp160 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$71_95->$data + 0));
            base159 = *$tmp160;
            org$pandalanguage$pandac$Type* $tmp165 = (($fn164) base159->$class->vtable[2])(base159);
            $tmp163 = $tmp165;
            $tmp162 = $tmp163;
            $finallyReturn160 = $tmp162;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp162));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp163));
            $tmp4 = 19;
            goto $l2;
            $l166:;
            return $finallyReturn160;
        }
        }
        else {
        panda$core$Bit $tmp168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp168.value) {
        {
            org$pandalanguage$pandac$Type** $tmp170 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_95->$data + 16));
            type169 = *$tmp170;
            $tmp172 = type169;
            $finallyReturn170 = $tmp172;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp172));
            $tmp4 = 20;
            goto $l2;
            $l173:;
            return $finallyReturn170;
        }
        }
        else {
        panda$core$Bit $tmp175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp175.value) {
        {
            org$pandalanguage$pandac$Type* $tmp179 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
            $tmp178 = $tmp179;
            $tmp177 = $tmp178;
            $finallyReturn175 = $tmp177;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp177));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp178));
            $tmp4 = 21;
            goto $l2;
            $l180:;
            return $finallyReturn175;
        }
        }
        else {
        panda$core$Bit $tmp182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp182.value) {
        {
            org$pandalanguage$pandac$Type** $tmp184 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_95->$data + 16));
            type183 = *$tmp184;
            $tmp186 = type183;
            $finallyReturn184 = $tmp186;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp186));
            $tmp4 = 22;
            goto $l2;
            $l187:;
            return $finallyReturn184;
        }
        }
        else {
        panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp189.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp191 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$71_95->$data + 24));
            ifTrue190 = *$tmp191;
            org$pandalanguage$pandac$IRNode** $tmp193 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$71_95->$data + 32));
            ifFalse192 = *$tmp193;
            org$pandalanguage$pandac$Type* $tmp196 = (($fn195) ifTrue190->$class->vtable[2])(ifTrue190);
            $tmp194 = $tmp196;
            org$pandalanguage$pandac$Type* $tmp199 = (($fn198) ifFalse192->$class->vtable[2])(ifFalse192);
            $tmp197 = $tmp199;
            panda$core$Bit $tmp200 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp194, $tmp197);
            PANDA_ASSERT($tmp200.value);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp197));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp194));
            org$pandalanguage$pandac$Type* $tmp205 = (($fn204) ifTrue190->$class->vtable[2])(ifTrue190);
            $tmp203 = $tmp205;
            $tmp202 = $tmp203;
            $finallyReturn200 = $tmp202;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp202));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp203));
            $tmp4 = 23;
            goto $l2;
            $l206:;
            return $finallyReturn200;
        }
        }
        else {
        panda$core$Bit $tmp208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp208.value) {
        {
            org$pandalanguage$pandac$Type* $tmp212 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            $tmp211 = $tmp212;
            $tmp210 = $tmp211;
            $finallyReturn208 = $tmp210;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp210));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp211));
            $tmp4 = 24;
            goto $l2;
            $l213:;
            return $finallyReturn208;
        }
        }
        else {
        panda$core$Bit $tmp215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp215.value) {
        {
            org$pandalanguage$pandac$Type* $tmp219 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp218 = $tmp219;
            $tmp217 = $tmp218;
            $finallyReturn215 = $tmp217;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp217));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
            $tmp4 = 25;
            goto $l2;
            $l220:;
            return $finallyReturn215;
        }
        }
        else {
        panda$core$Bit $tmp222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp222.value) {
        {
            org$pandalanguage$pandac$Type** $tmp224 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_95->$data + 16));
            type223 = *$tmp224;
            $tmp226 = type223;
            $finallyReturn224 = $tmp226;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp226));
            $tmp4 = 26;
            goto $l2;
            $l227:;
            return $finallyReturn224;
        }
        }
        else {
        panda$core$Bit $tmp229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp229.value) {
        {
            org$pandalanguage$pandac$Type** $tmp231 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_95->$data + 16));
            type230 = *$tmp231;
            $tmp233 = type230;
            $finallyReturn231 = $tmp233;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp233));
            $tmp4 = 27;
            goto $l2;
            $l234:;
            return $finallyReturn231;
        }
        }
        else {
        panda$core$Bit $tmp236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp236.value) {
        {
            org$pandalanguage$pandac$Type* $tmp240 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp239 = $tmp240;
            $tmp238 = $tmp239;
            $finallyReturn236 = $tmp238;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp238));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
            $tmp4 = 28;
            goto $l2;
            $l241:;
            return $finallyReturn236;
        }
        }
        else {
        panda$core$Bit $tmp243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp243.value) {
        {
            org$pandalanguage$pandac$Type* $tmp247 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp246 = $tmp247;
            $tmp245 = $tmp246;
            $finallyReturn243 = $tmp245;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp245));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp246));
            $tmp4 = 29;
            goto $l2;
            $l248:;
            return $finallyReturn243;
        }
        }
        else {
        panda$core$Bit $tmp250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_95->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp250.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp252 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$71_95->$data + 16));
            variable251 = *$tmp252;
            $tmp254 = variable251->type;
            $finallyReturn252 = $tmp254;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp254));
            $tmp4 = 30;
            goto $l2;
            $l255:;
            return $finallyReturn252;
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
        case 16: goto $l140;
        case 24: goto $l213;
        case 26: goto $l227;
        case 30: goto $l255;
        case 8: goto $l77;
        case 3: goto $l33;
        case 27: goto $l234;
        case 13: goto $l116;
        case 10: goto $l91;
        case 5: goto $l53;
        case 7: goto $l67;
        case 14: goto $l123;
        case 25: goto $l220;
        case 11: goto $l98;
        case 21: goto $l180;
        case 29: goto $l248;
        case 1: goto $l19;
        case 19: goto $l166;
        case 2: goto $l26;
        case 0: goto $l12;
        case -1: goto $l257;
        case 9: goto $l84;
        case 23: goto $l206;
        case 28: goto $l241;
        case 6: goto $l60;
        case 12: goto $l105;
        case 4: goto $l42;
        case 22: goto $l187;
        case 18: goto $l156;
        case 17: goto $l147;
        case 20: goto $l173;
        case 15: goto $l130;
    }
    $l257:;
}
org$pandalanguage$pandac$Position org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$141_9261 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp262;
    org$pandalanguage$pandac$Position position264;
    org$pandalanguage$pandac$Position $finallyReturn265;
    org$pandalanguage$pandac$Position position270;
    org$pandalanguage$pandac$Position $finallyReturn271;
    org$pandalanguage$pandac$Position position276;
    org$pandalanguage$pandac$Position $finallyReturn277;
    org$pandalanguage$pandac$Position position282;
    org$pandalanguage$pandac$Position $finallyReturn283;
    org$pandalanguage$pandac$Position position288;
    org$pandalanguage$pandac$Position $finallyReturn289;
    org$pandalanguage$pandac$Position position294;
    org$pandalanguage$pandac$Position $finallyReturn295;
    org$pandalanguage$pandac$Position position300;
    org$pandalanguage$pandac$Position $finallyReturn301;
    org$pandalanguage$pandac$Position position306;
    org$pandalanguage$pandac$Position $finallyReturn307;
    org$pandalanguage$pandac$Position position312;
    org$pandalanguage$pandac$Position $finallyReturn313;
    org$pandalanguage$pandac$Position position318;
    org$pandalanguage$pandac$Position $finallyReturn319;
    org$pandalanguage$pandac$Position position324;
    org$pandalanguage$pandac$Position $finallyReturn325;
    org$pandalanguage$pandac$Position position330;
    org$pandalanguage$pandac$Position $finallyReturn331;
    org$pandalanguage$pandac$IRNode* target336 = NULL;
    org$pandalanguage$pandac$Position $finallyReturn337;
    org$pandalanguage$pandac$Position position344;
    org$pandalanguage$pandac$Position $finallyReturn345;
    org$pandalanguage$pandac$IRNode* expr350 = NULL;
    org$pandalanguage$pandac$Position $finallyReturn351;
    org$pandalanguage$pandac$Position position358;
    org$pandalanguage$pandac$Position $finallyReturn359;
    org$pandalanguage$pandac$Position position364;
    org$pandalanguage$pandac$Position $finallyReturn365;
    org$pandalanguage$pandac$Position position370;
    org$pandalanguage$pandac$Position $finallyReturn371;
    org$pandalanguage$pandac$Position position376;
    org$pandalanguage$pandac$Position $finallyReturn377;
    org$pandalanguage$pandac$Position position382;
    org$pandalanguage$pandac$Position $finallyReturn383;
    org$pandalanguage$pandac$Position position388;
    org$pandalanguage$pandac$Position $finallyReturn389;
    org$pandalanguage$pandac$Position position394;
    org$pandalanguage$pandac$Position $finallyReturn395;
    org$pandalanguage$pandac$Position position400;
    org$pandalanguage$pandac$Position $finallyReturn401;
    org$pandalanguage$pandac$Position position406;
    org$pandalanguage$pandac$Position $finallyReturn407;
    org$pandalanguage$pandac$Position position412;
    org$pandalanguage$pandac$Position $finallyReturn413;
    org$pandalanguage$pandac$Position position418;
    org$pandalanguage$pandac$Position $finallyReturn419;
    org$pandalanguage$pandac$Position position424;
    org$pandalanguage$pandac$Position $finallyReturn425;
    org$pandalanguage$pandac$Position position430;
    org$pandalanguage$pandac$Position $finallyReturn431;
    org$pandalanguage$pandac$Position position436;
    org$pandalanguage$pandac$Position $finallyReturn437;
    org$pandalanguage$pandac$Position position442;
    org$pandalanguage$pandac$Position $finallyReturn443;
    org$pandalanguage$pandac$IRNode* base448 = NULL;
    org$pandalanguage$pandac$Position $finallyReturn449;
    org$pandalanguage$pandac$Position position456;
    org$pandalanguage$pandac$Position $finallyReturn457;
    org$pandalanguage$pandac$Position position462;
    org$pandalanguage$pandac$Position $finallyReturn463;
    org$pandalanguage$pandac$Position position468;
    org$pandalanguage$pandac$Position $finallyReturn469;
    org$pandalanguage$pandac$Position position474;
    org$pandalanguage$pandac$Position $finallyReturn475;
    org$pandalanguage$pandac$Position position480;
    org$pandalanguage$pandac$Position $finallyReturn481;
    org$pandalanguage$pandac$Position position486;
    org$pandalanguage$pandac$Position $finallyReturn487;
    org$pandalanguage$pandac$Position position492;
    org$pandalanguage$pandac$Position $finallyReturn493;
    org$pandalanguage$pandac$Position position498;
    org$pandalanguage$pandac$Position $finallyReturn499;
    org$pandalanguage$pandac$Position position504;
    org$pandalanguage$pandac$Position $finallyReturn505;
    org$pandalanguage$pandac$Position position510;
    org$pandalanguage$pandac$Position $finallyReturn511;
    org$pandalanguage$pandac$Position position516;
    org$pandalanguage$pandac$Position $finallyReturn517;
    org$pandalanguage$pandac$Position position522;
    org$pandalanguage$pandac$Position $finallyReturn523;
    org$pandalanguage$pandac$Position position528;
    org$pandalanguage$pandac$Position $finallyReturn529;
    org$pandalanguage$pandac$Position position534;
    org$pandalanguage$pandac$Position $finallyReturn535;
    int $tmp260;
    {
        $tmp262 = self;
        $match$141_9261 = $tmp262;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp262));
        panda$core$Bit $tmp263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp263.value) {
        {
            org$pandalanguage$pandac$Position* $tmp265 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position264 = *$tmp265;
            $finallyReturn265 = position264;
            $tmp260 = 0;
            goto $l258;
            $l267:;
            return $finallyReturn265;
        }
        }
        else {
        panda$core$Bit $tmp269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp269.value) {
        {
            org$pandalanguage$pandac$Position* $tmp271 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position270 = *$tmp271;
            $finallyReturn271 = position270;
            $tmp260 = 1;
            goto $l258;
            $l273:;
            return $finallyReturn271;
        }
        }
        else {
        panda$core$Bit $tmp275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp275.value) {
        {
            org$pandalanguage$pandac$Position* $tmp277 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position276 = *$tmp277;
            $finallyReturn277 = position276;
            $tmp260 = 2;
            goto $l258;
            $l279:;
            return $finallyReturn277;
        }
        }
        else {
        panda$core$Bit $tmp281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp281.value) {
        {
            org$pandalanguage$pandac$Position* $tmp283 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position282 = *$tmp283;
            $finallyReturn283 = position282;
            $tmp260 = 3;
            goto $l258;
            $l285:;
            return $finallyReturn283;
        }
        }
        else {
        panda$core$Bit $tmp287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp287.value) {
        {
            org$pandalanguage$pandac$Position* $tmp289 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position288 = *$tmp289;
            $finallyReturn289 = position288;
            $tmp260 = 4;
            goto $l258;
            $l291:;
            return $finallyReturn289;
        }
        }
        else {
        panda$core$Bit $tmp293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp293.value) {
        {
            org$pandalanguage$pandac$Position* $tmp295 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position294 = *$tmp295;
            $finallyReturn295 = position294;
            $tmp260 = 5;
            goto $l258;
            $l297:;
            return $finallyReturn295;
        }
        }
        else {
        panda$core$Bit $tmp299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp299.value) {
        {
            org$pandalanguage$pandac$Position* $tmp301 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position300 = *$tmp301;
            $finallyReturn301 = position300;
            $tmp260 = 6;
            goto $l258;
            $l303:;
            return $finallyReturn301;
        }
        }
        else {
        panda$core$Bit $tmp305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp305.value) {
        {
            org$pandalanguage$pandac$Position* $tmp307 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position306 = *$tmp307;
            $finallyReturn307 = position306;
            $tmp260 = 7;
            goto $l258;
            $l309:;
            return $finallyReturn307;
        }
        }
        else {
        panda$core$Bit $tmp311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp311.value) {
        {
            org$pandalanguage$pandac$Position* $tmp313 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position312 = *$tmp313;
            $finallyReturn313 = position312;
            $tmp260 = 8;
            goto $l258;
            $l315:;
            return $finallyReturn313;
        }
        }
        else {
        panda$core$Bit $tmp317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp317.value) {
        {
            org$pandalanguage$pandac$Position* $tmp319 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position318 = *$tmp319;
            $finallyReturn319 = position318;
            $tmp260 = 9;
            goto $l258;
            $l321:;
            return $finallyReturn319;
        }
        }
        else {
        panda$core$Bit $tmp323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp323.value) {
        {
            org$pandalanguage$pandac$Position* $tmp325 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position324 = *$tmp325;
            $finallyReturn325 = position324;
            $tmp260 = 10;
            goto $l258;
            $l327:;
            return $finallyReturn325;
        }
        }
        else {
        panda$core$Bit $tmp329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp329.value) {
        {
            org$pandalanguage$pandac$Position* $tmp331 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position330 = *$tmp331;
            $finallyReturn331 = position330;
            $tmp260 = 11;
            goto $l258;
            $l333:;
            return $finallyReturn331;
        }
        }
        else {
        panda$core$Bit $tmp335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp335.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp337 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$141_9261->$data + 0));
            target336 = *$tmp337;
            org$pandalanguage$pandac$Position $tmp340 = (($fn339) target336->$class->vtable[3])(target336);
            $finallyReturn337 = $tmp340;
            $tmp260 = 12;
            goto $l258;
            $l341:;
            return $finallyReturn337;
        }
        }
        else {
        panda$core$Bit $tmp343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp343.value) {
        {
            org$pandalanguage$pandac$Position* $tmp345 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position344 = *$tmp345;
            $finallyReturn345 = position344;
            $tmp260 = 13;
            goto $l258;
            $l347:;
            return $finallyReturn345;
        }
        }
        else {
        panda$core$Bit $tmp349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp349.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp351 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$141_9261->$data + 0));
            expr350 = *$tmp351;
            org$pandalanguage$pandac$Position $tmp354 = (($fn353) expr350->$class->vtable[3])(expr350);
            $finallyReturn351 = $tmp354;
            $tmp260 = 14;
            goto $l258;
            $l355:;
            return $finallyReturn351;
        }
        }
        else {
        panda$core$Bit $tmp357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp357.value) {
        {
            org$pandalanguage$pandac$Position* $tmp359 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position358 = *$tmp359;
            $finallyReturn359 = position358;
            $tmp260 = 15;
            goto $l258;
            $l361:;
            return $finallyReturn359;
        }
        }
        else {
        panda$core$Bit $tmp363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp363.value) {
        {
            org$pandalanguage$pandac$Position* $tmp365 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position364 = *$tmp365;
            $finallyReturn365 = position364;
            $tmp260 = 16;
            goto $l258;
            $l367:;
            return $finallyReturn365;
        }
        }
        else {
        panda$core$Bit $tmp369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp369.value) {
        {
            org$pandalanguage$pandac$Position* $tmp371 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position370 = *$tmp371;
            $finallyReturn371 = position370;
            $tmp260 = 17;
            goto $l258;
            $l373:;
            return $finallyReturn371;
        }
        }
        else {
        panda$core$Bit $tmp375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp375.value) {
        {
            org$pandalanguage$pandac$Position* $tmp377 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position376 = *$tmp377;
            $finallyReturn377 = position376;
            $tmp260 = 18;
            goto $l258;
            $l379:;
            return $finallyReturn377;
        }
        }
        else {
        panda$core$Bit $tmp381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp381.value) {
        {
            org$pandalanguage$pandac$Position* $tmp383 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position382 = *$tmp383;
            $finallyReturn383 = position382;
            $tmp260 = 19;
            goto $l258;
            $l385:;
            return $finallyReturn383;
        }
        }
        else {
        panda$core$Bit $tmp387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp387.value) {
        {
            org$pandalanguage$pandac$Position* $tmp389 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position388 = *$tmp389;
            $finallyReturn389 = position388;
            $tmp260 = 20;
            goto $l258;
            $l391:;
            return $finallyReturn389;
        }
        }
        else {
        panda$core$Bit $tmp393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp393.value) {
        {
            org$pandalanguage$pandac$Position* $tmp395 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position394 = *$tmp395;
            $finallyReturn395 = position394;
            $tmp260 = 21;
            goto $l258;
            $l397:;
            return $finallyReturn395;
        }
        }
        else {
        panda$core$Bit $tmp399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp399.value) {
        {
            org$pandalanguage$pandac$Position* $tmp401 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position400 = *$tmp401;
            $finallyReturn401 = position400;
            $tmp260 = 22;
            goto $l258;
            $l403:;
            return $finallyReturn401;
        }
        }
        else {
        panda$core$Bit $tmp405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp405.value) {
        {
            org$pandalanguage$pandac$Position* $tmp407 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position406 = *$tmp407;
            $finallyReturn407 = position406;
            $tmp260 = 23;
            goto $l258;
            $l409:;
            return $finallyReturn407;
        }
        }
        else {
        panda$core$Bit $tmp411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp411.value) {
        {
            org$pandalanguage$pandac$Position* $tmp413 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position412 = *$tmp413;
            $finallyReturn413 = position412;
            $tmp260 = 24;
            goto $l258;
            $l415:;
            return $finallyReturn413;
        }
        }
        else {
        panda$core$Bit $tmp417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp417.value) {
        {
            org$pandalanguage$pandac$Position* $tmp419 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position418 = *$tmp419;
            $finallyReturn419 = position418;
            $tmp260 = 25;
            goto $l258;
            $l421:;
            return $finallyReturn419;
        }
        }
        else {
        panda$core$Bit $tmp423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp423.value) {
        {
            org$pandalanguage$pandac$Position* $tmp425 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position424 = *$tmp425;
            $finallyReturn425 = position424;
            $tmp260 = 26;
            goto $l258;
            $l427:;
            return $finallyReturn425;
        }
        }
        else {
        panda$core$Bit $tmp429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp429.value) {
        {
            org$pandalanguage$pandac$Position* $tmp431 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position430 = *$tmp431;
            $finallyReturn431 = position430;
            $tmp260 = 27;
            goto $l258;
            $l433:;
            return $finallyReturn431;
        }
        }
        else {
        panda$core$Bit $tmp435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp435.value) {
        {
            org$pandalanguage$pandac$Position* $tmp437 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position436 = *$tmp437;
            $finallyReturn437 = position436;
            $tmp260 = 28;
            goto $l258;
            $l439:;
            return $finallyReturn437;
        }
        }
        else {
        panda$core$Bit $tmp441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp441.value) {
        {
            org$pandalanguage$pandac$Position* $tmp443 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position442 = *$tmp443;
            $finallyReturn443 = position442;
            $tmp260 = 29;
            goto $l258;
            $l445:;
            return $finallyReturn443;
        }
        }
        else {
        panda$core$Bit $tmp447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp447.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp449 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$141_9261->$data + 0));
            base448 = *$tmp449;
            org$pandalanguage$pandac$Position $tmp452 = (($fn451) base448->$class->vtable[3])(base448);
            $finallyReturn449 = $tmp452;
            $tmp260 = 30;
            goto $l258;
            $l453:;
            return $finallyReturn449;
        }
        }
        else {
        panda$core$Bit $tmp455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp455.value) {
        {
            org$pandalanguage$pandac$Position* $tmp457 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position456 = *$tmp457;
            $finallyReturn457 = position456;
            $tmp260 = 31;
            goto $l258;
            $l459:;
            return $finallyReturn457;
        }
        }
        else {
        panda$core$Bit $tmp461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp461.value) {
        {
            org$pandalanguage$pandac$Position* $tmp463 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position462 = *$tmp463;
            $finallyReturn463 = position462;
            $tmp260 = 32;
            goto $l258;
            $l465:;
            return $finallyReturn463;
        }
        }
        else {
        panda$core$Bit $tmp467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp467.value) {
        {
            org$pandalanguage$pandac$Position* $tmp469 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position468 = *$tmp469;
            $finallyReturn469 = position468;
            $tmp260 = 33;
            goto $l258;
            $l471:;
            return $finallyReturn469;
        }
        }
        else {
        panda$core$Bit $tmp473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp473.value) {
        {
            org$pandalanguage$pandac$Position* $tmp475 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position474 = *$tmp475;
            $finallyReturn475 = position474;
            $tmp260 = 34;
            goto $l258;
            $l477:;
            return $finallyReturn475;
        }
        }
        else {
        panda$core$Bit $tmp479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp479.value) {
        {
            org$pandalanguage$pandac$Position* $tmp481 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position480 = *$tmp481;
            $finallyReturn481 = position480;
            $tmp260 = 35;
            goto $l258;
            $l483:;
            return $finallyReturn481;
        }
        }
        else {
        panda$core$Bit $tmp485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp485.value) {
        {
            org$pandalanguage$pandac$Position* $tmp487 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position486 = *$tmp487;
            $finallyReturn487 = position486;
            $tmp260 = 36;
            goto $l258;
            $l489:;
            return $finallyReturn487;
        }
        }
        else {
        panda$core$Bit $tmp491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp491.value) {
        {
            org$pandalanguage$pandac$Position* $tmp493 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position492 = *$tmp493;
            $finallyReturn493 = position492;
            $tmp260 = 37;
            goto $l258;
            $l495:;
            return $finallyReturn493;
        }
        }
        else {
        panda$core$Bit $tmp497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp497.value) {
        {
            org$pandalanguage$pandac$Position* $tmp499 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position498 = *$tmp499;
            $finallyReturn499 = position498;
            $tmp260 = 38;
            goto $l258;
            $l501:;
            return $finallyReturn499;
        }
        }
        else {
        panda$core$Bit $tmp503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp503.value) {
        {
            org$pandalanguage$pandac$Position* $tmp505 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position504 = *$tmp505;
            $finallyReturn505 = position504;
            $tmp260 = 39;
            goto $l258;
            $l507:;
            return $finallyReturn505;
        }
        }
        else {
        panda$core$Bit $tmp509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp509.value) {
        {
            org$pandalanguage$pandac$Position* $tmp511 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position510 = *$tmp511;
            $finallyReturn511 = position510;
            $tmp260 = 40;
            goto $l258;
            $l513:;
            return $finallyReturn511;
        }
        }
        else {
        panda$core$Bit $tmp515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp515.value) {
        {
            org$pandalanguage$pandac$Position* $tmp517 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position516 = *$tmp517;
            $finallyReturn517 = position516;
            $tmp260 = 41;
            goto $l258;
            $l519:;
            return $finallyReturn517;
        }
        }
        else {
        panda$core$Bit $tmp521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp521.value) {
        {
            org$pandalanguage$pandac$Position* $tmp523 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position522 = *$tmp523;
            $finallyReturn523 = position522;
            $tmp260 = 42;
            goto $l258;
            $l525:;
            return $finallyReturn523;
        }
        }
        else {
        panda$core$Bit $tmp527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp527.value) {
        {
            org$pandalanguage$pandac$Position* $tmp529 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position528 = *$tmp529;
            $finallyReturn529 = position528;
            $tmp260 = 43;
            goto $l258;
            $l531:;
            return $finallyReturn529;
        }
        }
        else {
        panda$core$Bit $tmp533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9261->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp533.value) {
        {
            org$pandalanguage$pandac$Position* $tmp535 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9261->$data + 0));
            position534 = *$tmp535;
            $finallyReturn535 = position534;
            $tmp260 = 44;
            goto $l258;
            $l537:;
            return $finallyReturn535;
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
    $tmp260 = -1;
    goto $l258;
    $l258:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp262));
    switch ($tmp260) {
        case 4: goto $l291;
        case 14: goto $l355;
        case 43: goto $l531;
        case 19: goto $l385;
        case 25: goto $l421;
        case 41: goto $l519;
        case 16: goto $l367;
        case 29: goto $l445;
        case 13: goto $l347;
        case 18: goto $l379;
        case 37: goto $l495;
        case 42: goto $l525;
        case 26: goto $l427;
        case 17: goto $l373;
        case 21: goto $l397;
        case 2: goto $l279;
        case 31: goto $l459;
        case 8: goto $l315;
        case 32: goto $l465;
        case 7: goto $l309;
        case 0: goto $l267;
        case 36: goto $l489;
        case 27: goto $l433;
        case 11: goto $l333;
        case 44: goto $l537;
        case 3: goto $l285;
        case 40: goto $l513;
        case 10: goto $l327;
        case 22: goto $l403;
        case -1: goto $l539;
        case 20: goto $l391;
        case 39: goto $l507;
        case 34: goto $l477;
        case 24: goto $l415;
        case 15: goto $l361;
        case 35: goto $l483;
        case 9: goto $l321;
        case 23: goto $l409;
        case 6: goto $l303;
        case 1: goto $l273;
        case 33: goto $l471;
        case 28: goto $l439;
        case 30: goto $l453;
        case 38: goto $l501;
        case 12: goto $l341;
        case 5: goto $l297;
    }
    $l539:;
}
panda$core$Bit org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$238_9543 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp544;
    org$pandalanguage$pandac$IRNode* test546 = NULL;
    org$pandalanguage$pandac$IRNode* msg548 = NULL;
    panda$core$Bit $finallyReturn549;
    org$pandalanguage$pandac$IRNode* left561 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op563;
    org$pandalanguage$pandac$IRNode* right565 = NULL;
    panda$core$Bit $finallyReturn566;
    panda$core$Bit bit582;
    panda$core$Bit $finallyReturn583;
    panda$collections$ImmutableArray* statements588 = NULL;
    panda$collections$Iterator* Iter$246$17593 = NULL;
    panda$collections$Iterator* $tmp594;
    panda$collections$Iterator* $tmp595;
    org$pandalanguage$pandac$IRNode* s611 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp612;
    panda$core$Object* $tmp613;
    panda$core$Bit $finallyReturn619;
    panda$core$Bit $finallyReturn626;
    panda$core$String* label631 = NULL;
    panda$core$Bit $finallyReturn632;
    org$pandalanguage$pandac$MethodRef* m637 = NULL;
    panda$collections$ImmutableArray* args639 = NULL;
    panda$core$Bit $finallyReturn641;
    panda$collections$Iterator* Iter$258$17648 = NULL;
    panda$collections$Iterator* $tmp649;
    panda$collections$Iterator* $tmp650;
    org$pandalanguage$pandac$IRNode* arg666 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp667;
    panda$core$Object* $tmp668;
    panda$core$Bit $finallyReturn674;
    panda$core$Bit $finallyReturn681;
    org$pandalanguage$pandac$IRNode* value686 = NULL;
    org$pandalanguage$pandac$Type* type688 = NULL;
    panda$core$Bit $finallyReturn689;
    org$pandalanguage$pandac$ChoiceEntry* ce694 = NULL;
    panda$core$Bit $finallyReturn695;
    org$pandalanguage$pandac$IRNode* base700 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce702 = NULL;
    panda$core$Int64 field704;
    panda$core$Bit $finallyReturn705;
    org$pandalanguage$pandac$Type* type710 = NULL;
    org$pandalanguage$pandac$IRNode* call712 = NULL;
    panda$core$Bit $finallyReturn713;
    org$pandalanguage$pandac$Type* Type720 = NULL;
    panda$core$Bit $finallyReturn721;
    panda$core$String* label726 = NULL;
    panda$core$Bit $finallyReturn727;
    org$pandalanguage$pandac$IRNode* target732 = NULL;
    org$pandalanguage$pandac$IRNode* value734 = NULL;
    panda$core$Bit $finallyReturn735;
    panda$core$String* label745 = NULL;
    panda$collections$ImmutableArray* statements747 = NULL;
    org$pandalanguage$pandac$IRNode* test749 = NULL;
    panda$core$Bit $finallyReturn752;
    panda$collections$Iterator* Iter$282$17759 = NULL;
    panda$collections$Iterator* $tmp760;
    panda$collections$Iterator* $tmp761;
    org$pandalanguage$pandac$IRNode* s777 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp778;
    panda$core$Object* $tmp779;
    panda$core$Bit $finallyReturn785;
    panda$core$Bit $finallyReturn792;
    panda$core$Bit $finallyReturn796;
    org$pandalanguage$pandac$IRNode* base801 = NULL;
    org$pandalanguage$pandac$FieldDecl* field803 = NULL;
    panda$core$Bit $finallyReturn804;
    org$pandalanguage$pandac$IRNode* test809 = NULL;
    panda$collections$ImmutableArray* ifTrue811 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse813 = NULL;
    panda$core$Bit $finallyReturn816;
    panda$collections$Iterator* Iter$296$17823 = NULL;
    panda$collections$Iterator* $tmp824;
    panda$collections$Iterator* $tmp825;
    org$pandalanguage$pandac$IRNode* s841 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp842;
    panda$core$Object* $tmp843;
    panda$core$Bit $finallyReturn849;
    panda$core$Bit $finallyReturn856;
    panda$core$UInt64 value863;
    panda$core$Bit $finallyReturn864;
    org$pandalanguage$pandac$IRNode* value869 = NULL;
    panda$core$Bit $finallyReturn870;
    org$pandalanguage$pandac$IRNode* value877 = NULL;
    panda$core$Bit $finallyReturn878;
    panda$core$String* label885 = NULL;
    panda$collections$ImmutableArray* statements887 = NULL;
    panda$collections$Iterator* Iter$309$17892 = NULL;
    panda$collections$Iterator* $tmp893;
    panda$collections$Iterator* $tmp894;
    org$pandalanguage$pandac$IRNode* s910 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp911;
    panda$core$Object* $tmp912;
    panda$core$Bit $finallyReturn918;
    panda$core$Bit $finallyReturn925;
    org$pandalanguage$pandac$IRNode* value930 = NULL;
    panda$collections$ImmutableArray* whens932 = NULL;
    panda$collections$ImmutableArray* other934 = NULL;
    panda$core$Bit $finallyReturn937;
    panda$collections$Iterator* Iter$319$17944 = NULL;
    panda$collections$Iterator* $tmp945;
    panda$collections$Iterator* $tmp946;
    org$pandalanguage$pandac$IRNode* w962 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp963;
    panda$core$Object* $tmp964;
    panda$core$Bit $finallyReturn970;
    panda$collections$Iterator* Iter$324$17981 = NULL;
    panda$collections$Iterator* $tmp982;
    panda$collections$Iterator* $tmp983;
    org$pandalanguage$pandac$IRNode* s999 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1000;
    panda$core$Object* $tmp1001;
    panda$core$Bit $finallyReturn1007;
    panda$core$Bit $finallyReturn1014;
    org$pandalanguage$pandac$IRNode* target1019 = NULL;
    org$pandalanguage$pandac$MethodRef* m1021 = NULL;
    panda$core$Bit $finallyReturn1022;
    panda$core$UInt64 value1027;
    panda$core$Bit $finallyReturn1028;
    panda$core$Bit $finallyReturn1032;
    org$pandalanguage$pandac$parser$Token$Kind op1037;
    org$pandalanguage$pandac$IRNode* base1039 = NULL;
    panda$core$Bit $finallyReturn1040;
    panda$core$String* label1047 = NULL;
    org$pandalanguage$pandac$IRNode* target1049 = NULL;
    org$pandalanguage$pandac$IRNode* list1051 = NULL;
    panda$collections$ImmutableArray* statements1053 = NULL;
    panda$core$Bit $finallyReturn1056;
    panda$collections$Iterator* Iter$343$171063 = NULL;
    panda$collections$Iterator* $tmp1064;
    panda$collections$Iterator* $tmp1065;
    org$pandalanguage$pandac$IRNode* s1081 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1082;
    panda$core$Object* $tmp1083;
    panda$core$Bit $finallyReturn1089;
    panda$core$Bit $finallyReturn1096;
    panda$core$Real64 value1101;
    panda$core$Bit $finallyReturn1102;
    org$pandalanguage$pandac$IRNode* value1107 = NULL;
    panda$core$Bit $finallyReturn1108;
    panda$core$Int64 id1115;
    panda$core$Bit $finallyReturn1116;
    org$pandalanguage$pandac$IRNode* base1121 = NULL;
    panda$core$Int64 id1123;
    panda$core$Bit $finallyReturn1124;
    panda$core$Bit $finallyReturn1130;
    panda$core$String* str1135 = NULL;
    panda$core$Bit $finallyReturn1136;
    panda$core$Bit $finallyReturn1140;
    org$pandalanguage$pandac$IRNode* test1145 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue1147 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse1149 = NULL;
    panda$core$Bit $finallyReturn1150;
    org$pandalanguage$pandac$Type* type1167 = NULL;
    panda$core$Bit $finallyReturn1168;
    panda$core$String* name1173 = NULL;
    org$pandalanguage$pandac$IRNode* base1176 = NULL;
    panda$collections$ImmutableArray* args1178 = NULL;
    org$pandalanguage$pandac$IRNode* target1181 = NULL;
    panda$collections$ImmutableArray* methods1183 = NULL;
    panda$collections$ImmutableArray* args1185 = NULL;
    org$pandalanguage$pandac$IRNode* target1188 = NULL;
    panda$collections$ImmutableArray* methods1190 = NULL;
    org$pandalanguage$pandac$IRNode* start1193 = NULL;
    org$pandalanguage$pandac$IRNode* end1195 = NULL;
    panda$core$Bit inclusive1197;
    org$pandalanguage$pandac$IRNode* step1199 = NULL;
    org$pandalanguage$pandac$Variable$Kind kind1202;
    panda$collections$ImmutableArray* decls1204 = NULL;
    panda$collections$Iterator* Iter$378$171209 = NULL;
    panda$collections$Iterator* $tmp1210;
    panda$collections$Iterator* $tmp1211;
    org$pandalanguage$pandac$IRNode* d1227 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1228;
    panda$core$Object* $tmp1229;
    panda$core$Bit $finallyReturn1235;
    panda$core$Bit $finallyReturn1242;
    org$pandalanguage$pandac$Variable* variable1247 = NULL;
    panda$core$Bit $finallyReturn1248;
    panda$collections$ImmutableArray* tests1253 = NULL;
    panda$collections$ImmutableArray* statements1255 = NULL;
    panda$collections$Iterator* Iter$387$171260 = NULL;
    panda$collections$Iterator* $tmp1261;
    panda$collections$Iterator* $tmp1262;
    org$pandalanguage$pandac$IRNode* t1278 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1279;
    panda$core$Object* $tmp1280;
    panda$core$Bit $finallyReturn1286;
    panda$collections$Iterator* Iter$392$171297 = NULL;
    panda$collections$Iterator* $tmp1298;
    panda$collections$Iterator* $tmp1299;
    org$pandalanguage$pandac$IRNode* s1315 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1316;
    panda$core$Object* $tmp1317;
    panda$core$Bit $finallyReturn1323;
    panda$core$Bit $finallyReturn1330;
    panda$core$String* label1335 = NULL;
    org$pandalanguage$pandac$IRNode* test1337 = NULL;
    panda$collections$ImmutableArray* statements1339 = NULL;
    panda$core$Bit $finallyReturn1342;
    panda$collections$Iterator* Iter$402$171349 = NULL;
    panda$collections$Iterator* $tmp1350;
    panda$collections$Iterator* $tmp1351;
    org$pandalanguage$pandac$IRNode* s1367 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1368;
    panda$core$Object* $tmp1369;
    panda$core$Bit $finallyReturn1375;
    panda$core$Bit $finallyReturn1382;
    int $tmp542;
    {
        $tmp544 = self;
        $match$238_9543 = $tmp544;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp544));
        panda$core$Bit $tmp545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp545.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp547 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 16));
            test546 = *$tmp547;
            org$pandalanguage$pandac$IRNode** $tmp549 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 24));
            msg548 = *$tmp549;
            panda$core$Bit $tmp553 = (($fn552) test546->$class->vtable[4])(test546);
            bool $tmp551 = $tmp553.value;
            if ($tmp551) goto $l554;
            panda$core$Bit $tmp556 = (($fn555) msg548->$class->vtable[4])(msg548);
            $tmp551 = $tmp556.value;
            $l554:;
            panda$core$Bit $tmp557 = { $tmp551 };
            $finallyReturn549 = $tmp557;
            $tmp542 = 0;
            goto $l540;
            $l558:;
            return $finallyReturn549;
        }
        }
        else {
        panda$core$Bit $tmp560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp560.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp562 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 24));
            left561 = *$tmp562;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp564 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$238_9543->$data + 32));
            op563 = *$tmp564;
            org$pandalanguage$pandac$IRNode** $tmp566 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 40));
            right565 = *$tmp566;
            panda$core$Bit $tmp570 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(op563);
            bool $tmp569 = $tmp570.value;
            if ($tmp569) goto $l571;
            panda$core$Bit $tmp573 = (($fn572) left561->$class->vtable[4])(left561);
            $tmp569 = $tmp573.value;
            $l571:;
            panda$core$Bit $tmp574 = { $tmp569 };
            bool $tmp568 = $tmp574.value;
            if ($tmp568) goto $l575;
            panda$core$Bit $tmp577 = (($fn576) right565->$class->vtable[4])(right565);
            $tmp568 = $tmp577.value;
            $l575:;
            panda$core$Bit $tmp578 = { $tmp568 };
            $finallyReturn566 = $tmp578;
            $tmp542 = 1;
            goto $l540;
            $l579:;
            return $finallyReturn566;
        }
        }
        else {
        panda$core$Bit $tmp581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp581.value) {
        {
            panda$core$Bit* $tmp583 = ((panda$core$Bit*) ((char*) $match$238_9543->$data + 24));
            bit582 = *$tmp583;
            $finallyReturn583 = ((panda$core$Bit) { false });
            $tmp542 = 2;
            goto $l540;
            $l585:;
            return $finallyReturn583;
        }
        }
        else {
        panda$core$Bit $tmp587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp587.value) {
        {
            panda$collections$ImmutableArray** $tmp589 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9543->$data + 16));
            statements588 = *$tmp589;
            {
                int $tmp592;
                {
                    ITable* $tmp596 = ((panda$collections$Iterable*) statements588)->$class->itable;
                    while ($tmp596->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp596 = $tmp596->next;
                    }
                    $fn598 $tmp597 = $tmp596->methods[0];
                    panda$collections$Iterator* $tmp599 = $tmp597(((panda$collections$Iterable*) statements588));
                    $tmp595 = $tmp599;
                    $tmp594 = $tmp595;
                    Iter$246$17593 = $tmp594;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp594));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp595));
                    $l600:;
                    ITable* $tmp603 = Iter$246$17593->$class->itable;
                    while ($tmp603->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp603 = $tmp603->next;
                    }
                    $fn605 $tmp604 = $tmp603->methods[0];
                    panda$core$Bit $tmp606 = $tmp604(Iter$246$17593);
                    panda$core$Bit $tmp607 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp606);
                    bool $tmp602 = $tmp607.value;
                    if (!$tmp602) goto $l601;
                    {
                        int $tmp610;
                        {
                            ITable* $tmp614 = Iter$246$17593->$class->itable;
                            while ($tmp614->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp614 = $tmp614->next;
                            }
                            $fn616 $tmp615 = $tmp614->methods[1];
                            panda$core$Object* $tmp617 = $tmp615(Iter$246$17593);
                            $tmp613 = $tmp617;
                            $tmp612 = ((org$pandalanguage$pandac$IRNode*) $tmp613);
                            s611 = $tmp612;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp612));
                            panda$core$Panda$unref$panda$core$Object($tmp613);
                            panda$core$Bit $tmp619 = (($fn618) s611->$class->vtable[4])(s611);
                            if ($tmp619.value) {
                            {
                                $finallyReturn619 = ((panda$core$Bit) { true });
                                $tmp610 = 0;
                                goto $l608;
                                $l621:;
                                $tmp592 = 0;
                                goto $l590;
                                $l622:;
                                $tmp542 = 3;
                                goto $l540;
                                $l623:;
                                return $finallyReturn619;
                            }
                            }
                        }
                        $tmp610 = -1;
                        goto $l608;
                        $l608:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s611));
                        s611 = NULL;
                        switch ($tmp610) {
                            case 0: goto $l621;
                            case -1: goto $l625;
                        }
                        $l625:;
                    }
                    goto $l600;
                    $l601:;
                }
                $tmp592 = -1;
                goto $l590;
                $l590:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$246$17593));
                Iter$246$17593 = NULL;
                switch ($tmp592) {
                    case -1: goto $l626;
                    case 0: goto $l622;
                }
                $l626:;
            }
            $finallyReturn626 = ((panda$core$Bit) { false });
            $tmp542 = 4;
            goto $l540;
            $l628:;
            return $finallyReturn626;
        }
        }
        else {
        panda$core$Bit $tmp630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp630.value) {
        {
            panda$core$String** $tmp632 = ((panda$core$String**) ((char*) $match$238_9543->$data + 16));
            label631 = *$tmp632;
            $finallyReturn632 = ((panda$core$Bit) { false });
            $tmp542 = 5;
            goto $l540;
            $l634:;
            return $finallyReturn632;
        }
        }
        else {
        panda$core$Bit $tmp636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp636.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp638 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$238_9543->$data + 24));
            m637 = *$tmp638;
            panda$collections$ImmutableArray** $tmp640 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9543->$data + 32));
            args639 = *$tmp640;
            panda$core$Bit $tmp641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m637->value->methodKind.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp641.value) {
            {
                $finallyReturn641 = ((panda$core$Bit) { true });
                $tmp542 = 6;
                goto $l540;
                $l643:;
                return $finallyReturn641;
            }
            }
            {
                int $tmp647;
                {
                    ITable* $tmp651 = ((panda$collections$Iterable*) args639)->$class->itable;
                    while ($tmp651->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp651 = $tmp651->next;
                    }
                    $fn653 $tmp652 = $tmp651->methods[0];
                    panda$collections$Iterator* $tmp654 = $tmp652(((panda$collections$Iterable*) args639));
                    $tmp650 = $tmp654;
                    $tmp649 = $tmp650;
                    Iter$258$17648 = $tmp649;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp649));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp650));
                    $l655:;
                    ITable* $tmp658 = Iter$258$17648->$class->itable;
                    while ($tmp658->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp658 = $tmp658->next;
                    }
                    $fn660 $tmp659 = $tmp658->methods[0];
                    panda$core$Bit $tmp661 = $tmp659(Iter$258$17648);
                    panda$core$Bit $tmp662 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp661);
                    bool $tmp657 = $tmp662.value;
                    if (!$tmp657) goto $l656;
                    {
                        int $tmp665;
                        {
                            ITable* $tmp669 = Iter$258$17648->$class->itable;
                            while ($tmp669->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp669 = $tmp669->next;
                            }
                            $fn671 $tmp670 = $tmp669->methods[1];
                            panda$core$Object* $tmp672 = $tmp670(Iter$258$17648);
                            $tmp668 = $tmp672;
                            $tmp667 = ((org$pandalanguage$pandac$IRNode*) $tmp668);
                            arg666 = $tmp667;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp667));
                            panda$core$Panda$unref$panda$core$Object($tmp668);
                            panda$core$Bit $tmp674 = (($fn673) arg666->$class->vtable[4])(arg666);
                            if ($tmp674.value) {
                            {
                                $finallyReturn674 = ((panda$core$Bit) { true });
                                $tmp665 = 0;
                                goto $l663;
                                $l676:;
                                $tmp647 = 0;
                                goto $l645;
                                $l677:;
                                $tmp542 = 7;
                                goto $l540;
                                $l678:;
                                return $finallyReturn674;
                            }
                            }
                        }
                        $tmp665 = -1;
                        goto $l663;
                        $l663:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg666));
                        arg666 = NULL;
                        switch ($tmp665) {
                            case -1: goto $l680;
                            case 0: goto $l676;
                        }
                        $l680:;
                    }
                    goto $l655;
                    $l656:;
                }
                $tmp647 = -1;
                goto $l645;
                $l645:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$258$17648));
                Iter$258$17648 = NULL;
                switch ($tmp647) {
                    case -1: goto $l681;
                    case 0: goto $l677;
                }
                $l681:;
            }
            $finallyReturn681 = ((panda$core$Bit) { false });
            $tmp542 = 8;
            goto $l540;
            $l683:;
            return $finallyReturn681;
        }
        }
        else {
        panda$core$Bit $tmp685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp685.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp687 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 16));
            value686 = *$tmp687;
            org$pandalanguage$pandac$Type** $tmp689 = ((org$pandalanguage$pandac$Type**) ((char*) $match$238_9543->$data + 24));
            type688 = *$tmp689;
            $finallyReturn689 = ((panda$core$Bit) { false });
            $tmp542 = 9;
            goto $l540;
            $l691:;
            return $finallyReturn689;
        }
        }
        else {
        panda$core$Bit $tmp693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp693.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp695 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$238_9543->$data + 16));
            ce694 = *$tmp695;
            $finallyReturn695 = ((panda$core$Bit) { false });
            $tmp542 = 10;
            goto $l540;
            $l697:;
            return $finallyReturn695;
        }
        }
        else {
        panda$core$Bit $tmp699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp699.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp701 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 16));
            base700 = *$tmp701;
            org$pandalanguage$pandac$ChoiceEntry** $tmp703 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$238_9543->$data + 24));
            ce702 = *$tmp703;
            panda$core$Int64* $tmp705 = ((panda$core$Int64*) ((char*) $match$238_9543->$data + 32));
            field704 = *$tmp705;
            $finallyReturn705 = ((panda$core$Bit) { false });
            $tmp542 = 11;
            goto $l540;
            $l707:;
            return $finallyReturn705;
        }
        }
        else {
        panda$core$Bit $tmp709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp709.value) {
        {
            org$pandalanguage$pandac$Type** $tmp711 = ((org$pandalanguage$pandac$Type**) ((char*) $match$238_9543->$data + 16));
            type710 = *$tmp711;
            org$pandalanguage$pandac$IRNode** $tmp713 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 24));
            call712 = *$tmp713;
            panda$core$Bit $tmp716 = (($fn715) call712->$class->vtable[4])(call712);
            $finallyReturn713 = $tmp716;
            $tmp542 = 12;
            goto $l540;
            $l717:;
            return $finallyReturn713;
        }
        }
        else {
        panda$core$Bit $tmp719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp719.value) {
        {
            org$pandalanguage$pandac$Type** $tmp721 = ((org$pandalanguage$pandac$Type**) ((char*) $match$238_9543->$data + 16));
            Type720 = *$tmp721;
            $finallyReturn721 = ((panda$core$Bit) { false });
            $tmp542 = 13;
            goto $l540;
            $l723:;
            return $finallyReturn721;
        }
        }
        else {
        panda$core$Bit $tmp725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp725.value) {
        {
            panda$core$String** $tmp727 = ((panda$core$String**) ((char*) $match$238_9543->$data + 16));
            label726 = *$tmp727;
            $finallyReturn727 = ((panda$core$Bit) { false });
            $tmp542 = 14;
            goto $l540;
            $l729:;
            return $finallyReturn727;
        }
        }
        else {
        panda$core$Bit $tmp731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp731.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp733 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 0));
            target732 = *$tmp733;
            org$pandalanguage$pandac$IRNode** $tmp735 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 8));
            value734 = *$tmp735;
            bool $tmp737 = ((panda$core$Bit) { value734 != NULL }).value;
            if (!$tmp737) goto $l738;
            panda$core$Bit $tmp740 = (($fn739) value734->$class->vtable[4])(value734);
            $tmp737 = $tmp740.value;
            $l738:;
            panda$core$Bit $tmp741 = { $tmp737 };
            $finallyReturn735 = $tmp741;
            $tmp542 = 15;
            goto $l540;
            $l742:;
            return $finallyReturn735;
        }
        }
        else {
        panda$core$Bit $tmp744 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp744.value) {
        {
            panda$core$String** $tmp746 = ((panda$core$String**) ((char*) $match$238_9543->$data + 16));
            label745 = *$tmp746;
            panda$collections$ImmutableArray** $tmp748 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9543->$data + 24));
            statements747 = *$tmp748;
            org$pandalanguage$pandac$IRNode** $tmp750 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 32));
            test749 = *$tmp750;
            panda$core$Bit $tmp752 = (($fn751) test749->$class->vtable[4])(test749);
            if ($tmp752.value) {
            {
                $finallyReturn752 = ((panda$core$Bit) { true });
                $tmp542 = 16;
                goto $l540;
                $l754:;
                return $finallyReturn752;
            }
            }
            {
                int $tmp758;
                {
                    ITable* $tmp762 = ((panda$collections$Iterable*) statements747)->$class->itable;
                    while ($tmp762->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp762 = $tmp762->next;
                    }
                    $fn764 $tmp763 = $tmp762->methods[0];
                    panda$collections$Iterator* $tmp765 = $tmp763(((panda$collections$Iterable*) statements747));
                    $tmp761 = $tmp765;
                    $tmp760 = $tmp761;
                    Iter$282$17759 = $tmp760;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp760));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp761));
                    $l766:;
                    ITable* $tmp769 = Iter$282$17759->$class->itable;
                    while ($tmp769->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp769 = $tmp769->next;
                    }
                    $fn771 $tmp770 = $tmp769->methods[0];
                    panda$core$Bit $tmp772 = $tmp770(Iter$282$17759);
                    panda$core$Bit $tmp773 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp772);
                    bool $tmp768 = $tmp773.value;
                    if (!$tmp768) goto $l767;
                    {
                        int $tmp776;
                        {
                            ITable* $tmp780 = Iter$282$17759->$class->itable;
                            while ($tmp780->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp780 = $tmp780->next;
                            }
                            $fn782 $tmp781 = $tmp780->methods[1];
                            panda$core$Object* $tmp783 = $tmp781(Iter$282$17759);
                            $tmp779 = $tmp783;
                            $tmp778 = ((org$pandalanguage$pandac$IRNode*) $tmp779);
                            s777 = $tmp778;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp778));
                            panda$core$Panda$unref$panda$core$Object($tmp779);
                            panda$core$Bit $tmp785 = (($fn784) s777->$class->vtable[4])(s777);
                            if ($tmp785.value) {
                            {
                                $finallyReturn785 = ((panda$core$Bit) { true });
                                $tmp776 = 0;
                                goto $l774;
                                $l787:;
                                $tmp758 = 0;
                                goto $l756;
                                $l788:;
                                $tmp542 = 17;
                                goto $l540;
                                $l789:;
                                return $finallyReturn785;
                            }
                            }
                        }
                        $tmp776 = -1;
                        goto $l774;
                        $l774:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s777));
                        s777 = NULL;
                        switch ($tmp776) {
                            case 0: goto $l787;
                            case -1: goto $l791;
                        }
                        $l791:;
                    }
                    goto $l766;
                    $l767:;
                }
                $tmp758 = -1;
                goto $l756;
                $l756:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$282$17759));
                Iter$282$17759 = NULL;
                switch ($tmp758) {
                    case -1: goto $l792;
                    case 0: goto $l788;
                }
                $l792:;
            }
            $finallyReturn792 = ((panda$core$Bit) { false });
            $tmp542 = 18;
            goto $l540;
            $l794:;
            return $finallyReturn792;
        }
        }
        else {
        panda$core$Bit $tmp796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp796.value) {
        {
            $finallyReturn796 = ((panda$core$Bit) { true });
            $tmp542 = 19;
            goto $l540;
            $l798:;
            return $finallyReturn796;
        }
        }
        else {
        panda$core$Bit $tmp800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp800.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp802 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 24));
            base801 = *$tmp802;
            org$pandalanguage$pandac$FieldDecl** $tmp804 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$238_9543->$data + 32));
            field803 = *$tmp804;
            $finallyReturn804 = ((panda$core$Bit) { false });
            $tmp542 = 20;
            goto $l540;
            $l806:;
            return $finallyReturn804;
        }
        }
        else {
        panda$core$Bit $tmp808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp808.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp810 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 16));
            test809 = *$tmp810;
            panda$collections$ImmutableArray** $tmp812 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9543->$data + 24));
            ifTrue811 = *$tmp812;
            org$pandalanguage$pandac$IRNode** $tmp814 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 32));
            ifFalse813 = *$tmp814;
            panda$core$Bit $tmp816 = (($fn815) test809->$class->vtable[4])(test809);
            if ($tmp816.value) {
            {
                $finallyReturn816 = ((panda$core$Bit) { true });
                $tmp542 = 21;
                goto $l540;
                $l818:;
                return $finallyReturn816;
            }
            }
            {
                int $tmp822;
                {
                    ITable* $tmp826 = ((panda$collections$Iterable*) ifTrue811)->$class->itable;
                    while ($tmp826->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp826 = $tmp826->next;
                    }
                    $fn828 $tmp827 = $tmp826->methods[0];
                    panda$collections$Iterator* $tmp829 = $tmp827(((panda$collections$Iterable*) ifTrue811));
                    $tmp825 = $tmp829;
                    $tmp824 = $tmp825;
                    Iter$296$17823 = $tmp824;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp824));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp825));
                    $l830:;
                    ITable* $tmp833 = Iter$296$17823->$class->itable;
                    while ($tmp833->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp833 = $tmp833->next;
                    }
                    $fn835 $tmp834 = $tmp833->methods[0];
                    panda$core$Bit $tmp836 = $tmp834(Iter$296$17823);
                    panda$core$Bit $tmp837 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp836);
                    bool $tmp832 = $tmp837.value;
                    if (!$tmp832) goto $l831;
                    {
                        int $tmp840;
                        {
                            ITable* $tmp844 = Iter$296$17823->$class->itable;
                            while ($tmp844->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp844 = $tmp844->next;
                            }
                            $fn846 $tmp845 = $tmp844->methods[1];
                            panda$core$Object* $tmp847 = $tmp845(Iter$296$17823);
                            $tmp843 = $tmp847;
                            $tmp842 = ((org$pandalanguage$pandac$IRNode*) $tmp843);
                            s841 = $tmp842;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp842));
                            panda$core$Panda$unref$panda$core$Object($tmp843);
                            panda$core$Bit $tmp849 = (($fn848) s841->$class->vtable[4])(s841);
                            if ($tmp849.value) {
                            {
                                $finallyReturn849 = ((panda$core$Bit) { true });
                                $tmp840 = 0;
                                goto $l838;
                                $l851:;
                                $tmp822 = 0;
                                goto $l820;
                                $l852:;
                                $tmp542 = 22;
                                goto $l540;
                                $l853:;
                                return $finallyReturn849;
                            }
                            }
                        }
                        $tmp840 = -1;
                        goto $l838;
                        $l838:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s841));
                        s841 = NULL;
                        switch ($tmp840) {
                            case 0: goto $l851;
                            case -1: goto $l855;
                        }
                        $l855:;
                    }
                    goto $l830;
                    $l831:;
                }
                $tmp822 = -1;
                goto $l820;
                $l820:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$296$17823));
                Iter$296$17823 = NULL;
                switch ($tmp822) {
                    case -1: goto $l856;
                    case 0: goto $l852;
                }
                $l856:;
            }
            panda$core$Bit $tmp859 = (($fn858) ifFalse813->$class->vtable[4])(ifFalse813);
            $finallyReturn856 = $tmp859;
            $tmp542 = 23;
            goto $l540;
            $l860:;
            return $finallyReturn856;
        }
        }
        else {
        panda$core$Bit $tmp862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp862.value) {
        {
            panda$core$UInt64* $tmp864 = ((panda$core$UInt64*) ((char*) $match$238_9543->$data + 24));
            value863 = *$tmp864;
            $finallyReturn864 = ((panda$core$Bit) { false });
            $tmp542 = 24;
            goto $l540;
            $l866:;
            return $finallyReturn864;
        }
        }
        else {
        panda$core$Bit $tmp868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp868.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp870 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 16));
            value869 = *$tmp870;
            panda$core$Bit $tmp873 = (($fn872) value869->$class->vtable[4])(value869);
            $finallyReturn870 = $tmp873;
            $tmp542 = 25;
            goto $l540;
            $l874:;
            return $finallyReturn870;
        }
        }
        else {
        panda$core$Bit $tmp876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp876.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp878 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 16));
            value877 = *$tmp878;
            panda$core$Bit $tmp881 = (($fn880) value877->$class->vtable[4])(value877);
            $finallyReturn878 = $tmp881;
            $tmp542 = 26;
            goto $l540;
            $l882:;
            return $finallyReturn878;
        }
        }
        else {
        panda$core$Bit $tmp884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp884.value) {
        {
            panda$core$String** $tmp886 = ((panda$core$String**) ((char*) $match$238_9543->$data + 16));
            label885 = *$tmp886;
            panda$collections$ImmutableArray** $tmp888 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9543->$data + 24));
            statements887 = *$tmp888;
            {
                int $tmp891;
                {
                    ITable* $tmp895 = ((panda$collections$Iterable*) statements887)->$class->itable;
                    while ($tmp895->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp895 = $tmp895->next;
                    }
                    $fn897 $tmp896 = $tmp895->methods[0];
                    panda$collections$Iterator* $tmp898 = $tmp896(((panda$collections$Iterable*) statements887));
                    $tmp894 = $tmp898;
                    $tmp893 = $tmp894;
                    Iter$309$17892 = $tmp893;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp893));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp894));
                    $l899:;
                    ITable* $tmp902 = Iter$309$17892->$class->itable;
                    while ($tmp902->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp902 = $tmp902->next;
                    }
                    $fn904 $tmp903 = $tmp902->methods[0];
                    panda$core$Bit $tmp905 = $tmp903(Iter$309$17892);
                    panda$core$Bit $tmp906 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp905);
                    bool $tmp901 = $tmp906.value;
                    if (!$tmp901) goto $l900;
                    {
                        int $tmp909;
                        {
                            ITable* $tmp913 = Iter$309$17892->$class->itable;
                            while ($tmp913->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp913 = $tmp913->next;
                            }
                            $fn915 $tmp914 = $tmp913->methods[1];
                            panda$core$Object* $tmp916 = $tmp914(Iter$309$17892);
                            $tmp912 = $tmp916;
                            $tmp911 = ((org$pandalanguage$pandac$IRNode*) $tmp912);
                            s910 = $tmp911;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp911));
                            panda$core$Panda$unref$panda$core$Object($tmp912);
                            panda$core$Bit $tmp918 = (($fn917) s910->$class->vtable[4])(s910);
                            if ($tmp918.value) {
                            {
                                $finallyReturn918 = ((panda$core$Bit) { true });
                                $tmp909 = 0;
                                goto $l907;
                                $l920:;
                                $tmp891 = 0;
                                goto $l889;
                                $l921:;
                                $tmp542 = 27;
                                goto $l540;
                                $l922:;
                                return $finallyReturn918;
                            }
                            }
                        }
                        $tmp909 = -1;
                        goto $l907;
                        $l907:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s910));
                        s910 = NULL;
                        switch ($tmp909) {
                            case -1: goto $l924;
                            case 0: goto $l920;
                        }
                        $l924:;
                    }
                    goto $l899;
                    $l900:;
                }
                $tmp891 = -1;
                goto $l889;
                $l889:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$309$17892));
                Iter$309$17892 = NULL;
                switch ($tmp891) {
                    case 0: goto $l921;
                    case -1: goto $l925;
                }
                $l925:;
            }
            $finallyReturn925 = ((panda$core$Bit) { false });
            $tmp542 = 28;
            goto $l540;
            $l927:;
            return $finallyReturn925;
        }
        }
        else {
        panda$core$Bit $tmp929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp929.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp931 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 16));
            value930 = *$tmp931;
            panda$collections$ImmutableArray** $tmp933 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9543->$data + 24));
            whens932 = *$tmp933;
            panda$collections$ImmutableArray** $tmp935 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9543->$data + 32));
            other934 = *$tmp935;
            panda$core$Bit $tmp937 = (($fn936) value930->$class->vtable[4])(value930);
            if ($tmp937.value) {
            {
                $finallyReturn937 = ((panda$core$Bit) { true });
                $tmp542 = 29;
                goto $l540;
                $l939:;
                return $finallyReturn937;
            }
            }
            {
                int $tmp943;
                {
                    ITable* $tmp947 = ((panda$collections$Iterable*) whens932)->$class->itable;
                    while ($tmp947->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp947 = $tmp947->next;
                    }
                    $fn949 $tmp948 = $tmp947->methods[0];
                    panda$collections$Iterator* $tmp950 = $tmp948(((panda$collections$Iterable*) whens932));
                    $tmp946 = $tmp950;
                    $tmp945 = $tmp946;
                    Iter$319$17944 = $tmp945;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp945));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp946));
                    $l951:;
                    ITable* $tmp954 = Iter$319$17944->$class->itable;
                    while ($tmp954->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp954 = $tmp954->next;
                    }
                    $fn956 $tmp955 = $tmp954->methods[0];
                    panda$core$Bit $tmp957 = $tmp955(Iter$319$17944);
                    panda$core$Bit $tmp958 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp957);
                    bool $tmp953 = $tmp958.value;
                    if (!$tmp953) goto $l952;
                    {
                        int $tmp961;
                        {
                            ITable* $tmp965 = Iter$319$17944->$class->itable;
                            while ($tmp965->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp965 = $tmp965->next;
                            }
                            $fn967 $tmp966 = $tmp965->methods[1];
                            panda$core$Object* $tmp968 = $tmp966(Iter$319$17944);
                            $tmp964 = $tmp968;
                            $tmp963 = ((org$pandalanguage$pandac$IRNode*) $tmp964);
                            w962 = $tmp963;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp963));
                            panda$core$Panda$unref$panda$core$Object($tmp964);
                            panda$core$Bit $tmp970 = (($fn969) w962->$class->vtable[4])(w962);
                            if ($tmp970.value) {
                            {
                                $finallyReturn970 = ((panda$core$Bit) { true });
                                $tmp961 = 0;
                                goto $l959;
                                $l972:;
                                $tmp943 = 0;
                                goto $l941;
                                $l973:;
                                $tmp542 = 30;
                                goto $l540;
                                $l974:;
                                return $finallyReturn970;
                            }
                            }
                        }
                        $tmp961 = -1;
                        goto $l959;
                        $l959:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w962));
                        w962 = NULL;
                        switch ($tmp961) {
                            case 0: goto $l972;
                            case -1: goto $l976;
                        }
                        $l976:;
                    }
                    goto $l951;
                    $l952:;
                }
                $tmp943 = -1;
                goto $l941;
                $l941:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$319$17944));
                Iter$319$17944 = NULL;
                switch ($tmp943) {
                    case -1: goto $l977;
                    case 0: goto $l973;
                }
                $l977:;
            }
            {
                int $tmp980;
                {
                    ITable* $tmp984 = ((panda$collections$Iterable*) other934)->$class->itable;
                    while ($tmp984->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp984 = $tmp984->next;
                    }
                    $fn986 $tmp985 = $tmp984->methods[0];
                    panda$collections$Iterator* $tmp987 = $tmp985(((panda$collections$Iterable*) other934));
                    $tmp983 = $tmp987;
                    $tmp982 = $tmp983;
                    Iter$324$17981 = $tmp982;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp982));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp983));
                    $l988:;
                    ITable* $tmp991 = Iter$324$17981->$class->itable;
                    while ($tmp991->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp991 = $tmp991->next;
                    }
                    $fn993 $tmp992 = $tmp991->methods[0];
                    panda$core$Bit $tmp994 = $tmp992(Iter$324$17981);
                    panda$core$Bit $tmp995 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp994);
                    bool $tmp990 = $tmp995.value;
                    if (!$tmp990) goto $l989;
                    {
                        int $tmp998;
                        {
                            ITable* $tmp1002 = Iter$324$17981->$class->itable;
                            while ($tmp1002->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1002 = $tmp1002->next;
                            }
                            $fn1004 $tmp1003 = $tmp1002->methods[1];
                            panda$core$Object* $tmp1005 = $tmp1003(Iter$324$17981);
                            $tmp1001 = $tmp1005;
                            $tmp1000 = ((org$pandalanguage$pandac$IRNode*) $tmp1001);
                            s999 = $tmp1000;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1000));
                            panda$core$Panda$unref$panda$core$Object($tmp1001);
                            panda$core$Bit $tmp1007 = (($fn1006) s999->$class->vtable[4])(s999);
                            if ($tmp1007.value) {
                            {
                                $finallyReturn1007 = ((panda$core$Bit) { true });
                                $tmp998 = 0;
                                goto $l996;
                                $l1009:;
                                $tmp980 = 0;
                                goto $l978;
                                $l1010:;
                                $tmp542 = 31;
                                goto $l540;
                                $l1011:;
                                return $finallyReturn1007;
                            }
                            }
                        }
                        $tmp998 = -1;
                        goto $l996;
                        $l996:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s999));
                        s999 = NULL;
                        switch ($tmp998) {
                            case 0: goto $l1009;
                            case -1: goto $l1013;
                        }
                        $l1013:;
                    }
                    goto $l988;
                    $l989:;
                }
                $tmp980 = -1;
                goto $l978;
                $l978:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$324$17981));
                Iter$324$17981 = NULL;
                switch ($tmp980) {
                    case -1: goto $l1014;
                    case 0: goto $l1010;
                }
                $l1014:;
            }
            $finallyReturn1014 = ((panda$core$Bit) { false });
            $tmp542 = 32;
            goto $l540;
            $l1016:;
            return $finallyReturn1014;
        }
        }
        else {
        panda$core$Bit $tmp1018 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1018.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1020 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 16));
            target1019 = *$tmp1020;
            org$pandalanguage$pandac$MethodRef** $tmp1022 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$238_9543->$data + 24));
            m1021 = *$tmp1022;
            $finallyReturn1022 = ((panda$core$Bit) { false });
            $tmp542 = 33;
            goto $l540;
            $l1024:;
            return $finallyReturn1022;
        }
        }
        else {
        panda$core$Bit $tmp1026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1026.value) {
        {
            panda$core$UInt64* $tmp1028 = ((panda$core$UInt64*) ((char*) $match$238_9543->$data + 24));
            value1027 = *$tmp1028;
            $finallyReturn1028 = ((panda$core$Bit) { false });
            $tmp542 = 34;
            goto $l540;
            $l1030:;
            return $finallyReturn1028;
        }
        }
        else {
        panda$core$Bit $tmp1032 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1032.value) {
        {
            $finallyReturn1032 = ((panda$core$Bit) { false });
            $tmp542 = 35;
            goto $l540;
            $l1034:;
            return $finallyReturn1032;
        }
        }
        else {
        panda$core$Bit $tmp1036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1036.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1038 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$238_9543->$data + 16));
            op1037 = *$tmp1038;
            org$pandalanguage$pandac$IRNode** $tmp1040 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 24));
            base1039 = *$tmp1040;
            panda$core$Bit $tmp1043 = (($fn1042) base1039->$class->vtable[4])(base1039);
            $finallyReturn1040 = $tmp1043;
            $tmp542 = 36;
            goto $l540;
            $l1044:;
            return $finallyReturn1040;
        }
        }
        else {
        panda$core$Bit $tmp1046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1046.value) {
        {
            panda$core$String** $tmp1048 = ((panda$core$String**) ((char*) $match$238_9543->$data + 16));
            label1047 = *$tmp1048;
            org$pandalanguage$pandac$IRNode** $tmp1050 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 24));
            target1049 = *$tmp1050;
            org$pandalanguage$pandac$IRNode** $tmp1052 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 32));
            list1051 = *$tmp1052;
            panda$collections$ImmutableArray** $tmp1054 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9543->$data + 40));
            statements1053 = *$tmp1054;
            panda$core$Bit $tmp1056 = (($fn1055) list1051->$class->vtable[4])(list1051);
            if ($tmp1056.value) {
            {
                $finallyReturn1056 = ((panda$core$Bit) { true });
                $tmp542 = 37;
                goto $l540;
                $l1058:;
                return $finallyReturn1056;
            }
            }
            {
                int $tmp1062;
                {
                    ITable* $tmp1066 = ((panda$collections$Iterable*) statements1053)->$class->itable;
                    while ($tmp1066->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1066 = $tmp1066->next;
                    }
                    $fn1068 $tmp1067 = $tmp1066->methods[0];
                    panda$collections$Iterator* $tmp1069 = $tmp1067(((panda$collections$Iterable*) statements1053));
                    $tmp1065 = $tmp1069;
                    $tmp1064 = $tmp1065;
                    Iter$343$171063 = $tmp1064;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1064));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1065));
                    $l1070:;
                    ITable* $tmp1073 = Iter$343$171063->$class->itable;
                    while ($tmp1073->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1073 = $tmp1073->next;
                    }
                    $fn1075 $tmp1074 = $tmp1073->methods[0];
                    panda$core$Bit $tmp1076 = $tmp1074(Iter$343$171063);
                    panda$core$Bit $tmp1077 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1076);
                    bool $tmp1072 = $tmp1077.value;
                    if (!$tmp1072) goto $l1071;
                    {
                        int $tmp1080;
                        {
                            ITable* $tmp1084 = Iter$343$171063->$class->itable;
                            while ($tmp1084->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1084 = $tmp1084->next;
                            }
                            $fn1086 $tmp1085 = $tmp1084->methods[1];
                            panda$core$Object* $tmp1087 = $tmp1085(Iter$343$171063);
                            $tmp1083 = $tmp1087;
                            $tmp1082 = ((org$pandalanguage$pandac$IRNode*) $tmp1083);
                            s1081 = $tmp1082;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1082));
                            panda$core$Panda$unref$panda$core$Object($tmp1083);
                            panda$core$Bit $tmp1089 = (($fn1088) s1081->$class->vtable[4])(s1081);
                            if ($tmp1089.value) {
                            {
                                $finallyReturn1089 = ((panda$core$Bit) { true });
                                $tmp1080 = 0;
                                goto $l1078;
                                $l1091:;
                                $tmp1062 = 0;
                                goto $l1060;
                                $l1092:;
                                $tmp542 = 38;
                                goto $l540;
                                $l1093:;
                                return $finallyReturn1089;
                            }
                            }
                        }
                        $tmp1080 = -1;
                        goto $l1078;
                        $l1078:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1081));
                        s1081 = NULL;
                        switch ($tmp1080) {
                            case -1: goto $l1095;
                            case 0: goto $l1091;
                        }
                        $l1095:;
                    }
                    goto $l1070;
                    $l1071:;
                }
                $tmp1062 = -1;
                goto $l1060;
                $l1060:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$343$171063));
                Iter$343$171063 = NULL;
                switch ($tmp1062) {
                    case 0: goto $l1092;
                    case -1: goto $l1096;
                }
                $l1096:;
            }
            $finallyReturn1096 = ((panda$core$Bit) { false });
            $tmp542 = 39;
            goto $l540;
            $l1098:;
            return $finallyReturn1096;
        }
        }
        else {
        panda$core$Bit $tmp1100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1100.value) {
        {
            panda$core$Real64* $tmp1102 = ((panda$core$Real64*) ((char*) $match$238_9543->$data + 24));
            value1101 = *$tmp1102;
            $finallyReturn1102 = ((panda$core$Bit) { false });
            $tmp542 = 40;
            goto $l540;
            $l1104:;
            return $finallyReturn1102;
        }
        }
        else {
        panda$core$Bit $tmp1106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1106.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1108 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 16));
            value1107 = *$tmp1108;
            panda$core$Bit $tmp1111 = (($fn1110) value1107->$class->vtable[4])(value1107);
            $finallyReturn1108 = $tmp1111;
            $tmp542 = 41;
            goto $l540;
            $l1112:;
            return $finallyReturn1108;
        }
        }
        else {
        panda$core$Bit $tmp1114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1114.value) {
        {
            panda$core$Int64* $tmp1116 = ((panda$core$Int64*) ((char*) $match$238_9543->$data + 24));
            id1115 = *$tmp1116;
            $finallyReturn1116 = ((panda$core$Bit) { false });
            $tmp542 = 42;
            goto $l540;
            $l1118:;
            return $finallyReturn1116;
        }
        }
        else {
        panda$core$Bit $tmp1120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1120.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1122 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 0));
            base1121 = *$tmp1122;
            panda$core$Int64* $tmp1124 = ((panda$core$Int64*) ((char*) $match$238_9543->$data + 8));
            id1123 = *$tmp1124;
            panda$core$Bit $tmp1127 = (($fn1126) base1121->$class->vtable[4])(base1121);
            $finallyReturn1124 = $tmp1127;
            $tmp542 = 43;
            goto $l540;
            $l1128:;
            return $finallyReturn1124;
        }
        }
        else {
        panda$core$Bit $tmp1130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1130.value) {
        {
            $finallyReturn1130 = ((panda$core$Bit) { false });
            $tmp542 = 44;
            goto $l540;
            $l1132:;
            return $finallyReturn1130;
        }
        }
        else {
        panda$core$Bit $tmp1134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1134.value) {
        {
            panda$core$String** $tmp1136 = ((panda$core$String**) ((char*) $match$238_9543->$data + 16));
            str1135 = *$tmp1136;
            $finallyReturn1136 = ((panda$core$Bit) { false });
            $tmp542 = 45;
            goto $l540;
            $l1138:;
            return $finallyReturn1136;
        }
        }
        else {
        panda$core$Bit $tmp1140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1140.value) {
        {
            $finallyReturn1140 = ((panda$core$Bit) { false });
            $tmp542 = 46;
            goto $l540;
            $l1142:;
            return $finallyReturn1140;
        }
        }
        else {
        panda$core$Bit $tmp1144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1144.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1146 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 16));
            test1145 = *$tmp1146;
            org$pandalanguage$pandac$IRNode** $tmp1148 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 24));
            ifTrue1147 = *$tmp1148;
            org$pandalanguage$pandac$IRNode** $tmp1150 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 32));
            ifFalse1149 = *$tmp1150;
            panda$core$Bit $tmp1155 = (($fn1154) test1145->$class->vtable[4])(test1145);
            bool $tmp1153 = $tmp1155.value;
            if ($tmp1153) goto $l1156;
            panda$core$Bit $tmp1158 = (($fn1157) ifTrue1147->$class->vtable[4])(ifTrue1147);
            $tmp1153 = $tmp1158.value;
            $l1156:;
            panda$core$Bit $tmp1159 = { $tmp1153 };
            bool $tmp1152 = $tmp1159.value;
            if ($tmp1152) goto $l1160;
            panda$core$Bit $tmp1162 = (($fn1161) ifFalse1149->$class->vtable[4])(ifFalse1149);
            $tmp1152 = $tmp1162.value;
            $l1160:;
            panda$core$Bit $tmp1163 = { $tmp1152 };
            $finallyReturn1150 = $tmp1163;
            $tmp542 = 47;
            goto $l540;
            $l1164:;
            return $finallyReturn1150;
        }
        }
        else {
        panda$core$Bit $tmp1166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1166.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1168 = ((org$pandalanguage$pandac$Type**) ((char*) $match$238_9543->$data + 16));
            type1167 = *$tmp1168;
            $finallyReturn1168 = ((panda$core$Bit) { false });
            $tmp542 = 48;
            goto $l540;
            $l1170:;
            return $finallyReturn1168;
        }
        }
        else {
        panda$core$Bit $tmp1172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1172.value) {
        {
            panda$core$String** $tmp1174 = ((panda$core$String**) ((char*) $match$238_9543->$data + 16));
            name1173 = *$tmp1174;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1175.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1177 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 24));
            base1176 = *$tmp1177;
            panda$collections$ImmutableArray** $tmp1179 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9543->$data + 32));
            args1178 = *$tmp1179;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1180.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1182 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 24));
            target1181 = *$tmp1182;
            panda$collections$ImmutableArray** $tmp1184 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9543->$data + 32));
            methods1183 = *$tmp1184;
            panda$collections$ImmutableArray** $tmp1186 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9543->$data + 40));
            args1185 = *$tmp1186;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1187.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1189 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 16));
            target1188 = *$tmp1189;
            panda$collections$ImmutableArray** $tmp1191 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9543->$data + 24));
            methods1190 = *$tmp1191;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1192.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1194 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 16));
            start1193 = *$tmp1194;
            org$pandalanguage$pandac$IRNode** $tmp1196 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 24));
            end1195 = *$tmp1196;
            panda$core$Bit* $tmp1198 = ((panda$core$Bit*) ((char*) $match$238_9543->$data + 32));
            inclusive1197 = *$tmp1198;
            org$pandalanguage$pandac$IRNode** $tmp1200 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 33));
            step1199 = *$tmp1200;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1201.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1203 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$238_9543->$data + 16));
            kind1202 = *$tmp1203;
            panda$collections$ImmutableArray** $tmp1205 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9543->$data + 24));
            decls1204 = *$tmp1205;
            {
                int $tmp1208;
                {
                    ITable* $tmp1212 = ((panda$collections$Iterable*) decls1204)->$class->itable;
                    while ($tmp1212->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1212 = $tmp1212->next;
                    }
                    $fn1214 $tmp1213 = $tmp1212->methods[0];
                    panda$collections$Iterator* $tmp1215 = $tmp1213(((panda$collections$Iterable*) decls1204));
                    $tmp1211 = $tmp1215;
                    $tmp1210 = $tmp1211;
                    Iter$378$171209 = $tmp1210;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1210));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1211));
                    $l1216:;
                    ITable* $tmp1219 = Iter$378$171209->$class->itable;
                    while ($tmp1219->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1219 = $tmp1219->next;
                    }
                    $fn1221 $tmp1220 = $tmp1219->methods[0];
                    panda$core$Bit $tmp1222 = $tmp1220(Iter$378$171209);
                    panda$core$Bit $tmp1223 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1222);
                    bool $tmp1218 = $tmp1223.value;
                    if (!$tmp1218) goto $l1217;
                    {
                        int $tmp1226;
                        {
                            ITable* $tmp1230 = Iter$378$171209->$class->itable;
                            while ($tmp1230->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1230 = $tmp1230->next;
                            }
                            $fn1232 $tmp1231 = $tmp1230->methods[1];
                            panda$core$Object* $tmp1233 = $tmp1231(Iter$378$171209);
                            $tmp1229 = $tmp1233;
                            $tmp1228 = ((org$pandalanguage$pandac$IRNode*) $tmp1229);
                            d1227 = $tmp1228;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1228));
                            panda$core$Panda$unref$panda$core$Object($tmp1229);
                            panda$core$Bit $tmp1235 = (($fn1234) d1227->$class->vtable[4])(d1227);
                            if ($tmp1235.value) {
                            {
                                $finallyReturn1235 = ((panda$core$Bit) { true });
                                $tmp1226 = 0;
                                goto $l1224;
                                $l1237:;
                                $tmp1208 = 0;
                                goto $l1206;
                                $l1238:;
                                $tmp542 = 49;
                                goto $l540;
                                $l1239:;
                                return $finallyReturn1235;
                            }
                            }
                        }
                        $tmp1226 = -1;
                        goto $l1224;
                        $l1224:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) d1227));
                        d1227 = NULL;
                        switch ($tmp1226) {
                            case 0: goto $l1237;
                            case -1: goto $l1241;
                        }
                        $l1241:;
                    }
                    goto $l1216;
                    $l1217:;
                }
                $tmp1208 = -1;
                goto $l1206;
                $l1206:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$378$171209));
                Iter$378$171209 = NULL;
                switch ($tmp1208) {
                    case 0: goto $l1238;
                    case -1: goto $l1242;
                }
                $l1242:;
            }
            $finallyReturn1242 = ((panda$core$Bit) { false });
            $tmp542 = 50;
            goto $l540;
            $l1244:;
            return $finallyReturn1242;
        }
        }
        else {
        panda$core$Bit $tmp1246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1246.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp1248 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$238_9543->$data + 16));
            variable1247 = *$tmp1248;
            $finallyReturn1248 = ((panda$core$Bit) { false });
            $tmp542 = 51;
            goto $l540;
            $l1250:;
            return $finallyReturn1248;
        }
        }
        else {
        panda$core$Bit $tmp1252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1252.value) {
        {
            panda$collections$ImmutableArray** $tmp1254 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9543->$data + 16));
            tests1253 = *$tmp1254;
            panda$collections$ImmutableArray** $tmp1256 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9543->$data + 24));
            statements1255 = *$tmp1256;
            {
                int $tmp1259;
                {
                    ITable* $tmp1263 = ((panda$collections$Iterable*) tests1253)->$class->itable;
                    while ($tmp1263->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1263 = $tmp1263->next;
                    }
                    $fn1265 $tmp1264 = $tmp1263->methods[0];
                    panda$collections$Iterator* $tmp1266 = $tmp1264(((panda$collections$Iterable*) tests1253));
                    $tmp1262 = $tmp1266;
                    $tmp1261 = $tmp1262;
                    Iter$387$171260 = $tmp1261;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1261));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1262));
                    $l1267:;
                    ITable* $tmp1270 = Iter$387$171260->$class->itable;
                    while ($tmp1270->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1270 = $tmp1270->next;
                    }
                    $fn1272 $tmp1271 = $tmp1270->methods[0];
                    panda$core$Bit $tmp1273 = $tmp1271(Iter$387$171260);
                    panda$core$Bit $tmp1274 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1273);
                    bool $tmp1269 = $tmp1274.value;
                    if (!$tmp1269) goto $l1268;
                    {
                        int $tmp1277;
                        {
                            ITable* $tmp1281 = Iter$387$171260->$class->itable;
                            while ($tmp1281->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1281 = $tmp1281->next;
                            }
                            $fn1283 $tmp1282 = $tmp1281->methods[1];
                            panda$core$Object* $tmp1284 = $tmp1282(Iter$387$171260);
                            $tmp1280 = $tmp1284;
                            $tmp1279 = ((org$pandalanguage$pandac$IRNode*) $tmp1280);
                            t1278 = $tmp1279;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1279));
                            panda$core$Panda$unref$panda$core$Object($tmp1280);
                            panda$core$Bit $tmp1286 = (($fn1285) t1278->$class->vtable[4])(t1278);
                            if ($tmp1286.value) {
                            {
                                $finallyReturn1286 = ((panda$core$Bit) { true });
                                $tmp1277 = 0;
                                goto $l1275;
                                $l1288:;
                                $tmp1259 = 0;
                                goto $l1257;
                                $l1289:;
                                $tmp542 = 52;
                                goto $l540;
                                $l1290:;
                                return $finallyReturn1286;
                            }
                            }
                        }
                        $tmp1277 = -1;
                        goto $l1275;
                        $l1275:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1278));
                        t1278 = NULL;
                        switch ($tmp1277) {
                            case -1: goto $l1292;
                            case 0: goto $l1288;
                        }
                        $l1292:;
                    }
                    goto $l1267;
                    $l1268:;
                }
                $tmp1259 = -1;
                goto $l1257;
                $l1257:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$387$171260));
                Iter$387$171260 = NULL;
                switch ($tmp1259) {
                    case 0: goto $l1289;
                    case -1: goto $l1293;
                }
                $l1293:;
            }
            {
                int $tmp1296;
                {
                    ITable* $tmp1300 = ((panda$collections$Iterable*) statements1255)->$class->itable;
                    while ($tmp1300->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1300 = $tmp1300->next;
                    }
                    $fn1302 $tmp1301 = $tmp1300->methods[0];
                    panda$collections$Iterator* $tmp1303 = $tmp1301(((panda$collections$Iterable*) statements1255));
                    $tmp1299 = $tmp1303;
                    $tmp1298 = $tmp1299;
                    Iter$392$171297 = $tmp1298;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1298));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1299));
                    $l1304:;
                    ITable* $tmp1307 = Iter$392$171297->$class->itable;
                    while ($tmp1307->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1307 = $tmp1307->next;
                    }
                    $fn1309 $tmp1308 = $tmp1307->methods[0];
                    panda$core$Bit $tmp1310 = $tmp1308(Iter$392$171297);
                    panda$core$Bit $tmp1311 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1310);
                    bool $tmp1306 = $tmp1311.value;
                    if (!$tmp1306) goto $l1305;
                    {
                        int $tmp1314;
                        {
                            ITable* $tmp1318 = Iter$392$171297->$class->itable;
                            while ($tmp1318->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1318 = $tmp1318->next;
                            }
                            $fn1320 $tmp1319 = $tmp1318->methods[1];
                            panda$core$Object* $tmp1321 = $tmp1319(Iter$392$171297);
                            $tmp1317 = $tmp1321;
                            $tmp1316 = ((org$pandalanguage$pandac$IRNode*) $tmp1317);
                            s1315 = $tmp1316;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1316));
                            panda$core$Panda$unref$panda$core$Object($tmp1317);
                            panda$core$Bit $tmp1323 = (($fn1322) s1315->$class->vtable[4])(s1315);
                            if ($tmp1323.value) {
                            {
                                $finallyReturn1323 = ((panda$core$Bit) { true });
                                $tmp1314 = 0;
                                goto $l1312;
                                $l1325:;
                                $tmp1296 = 0;
                                goto $l1294;
                                $l1326:;
                                $tmp542 = 53;
                                goto $l540;
                                $l1327:;
                                return $finallyReturn1323;
                            }
                            }
                        }
                        $tmp1314 = -1;
                        goto $l1312;
                        $l1312:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1315));
                        s1315 = NULL;
                        switch ($tmp1314) {
                            case -1: goto $l1329;
                            case 0: goto $l1325;
                        }
                        $l1329:;
                    }
                    goto $l1304;
                    $l1305:;
                }
                $tmp1296 = -1;
                goto $l1294;
                $l1294:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$392$171297));
                Iter$392$171297 = NULL;
                switch ($tmp1296) {
                    case -1: goto $l1330;
                    case 0: goto $l1326;
                }
                $l1330:;
            }
            $finallyReturn1330 = ((panda$core$Bit) { false });
            $tmp542 = 54;
            goto $l540;
            $l1332:;
            return $finallyReturn1330;
        }
        }
        else {
        panda$core$Bit $tmp1334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9543->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp1334.value) {
        {
            panda$core$String** $tmp1336 = ((panda$core$String**) ((char*) $match$238_9543->$data + 16));
            label1335 = *$tmp1336;
            org$pandalanguage$pandac$IRNode** $tmp1338 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9543->$data + 24));
            test1337 = *$tmp1338;
            panda$collections$ImmutableArray** $tmp1340 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9543->$data + 32));
            statements1339 = *$tmp1340;
            panda$core$Bit $tmp1342 = (($fn1341) test1337->$class->vtable[4])(test1337);
            if ($tmp1342.value) {
            {
                $finallyReturn1342 = ((panda$core$Bit) { true });
                $tmp542 = 55;
                goto $l540;
                $l1344:;
                return $finallyReturn1342;
            }
            }
            {
                int $tmp1348;
                {
                    ITable* $tmp1352 = ((panda$collections$Iterable*) statements1339)->$class->itable;
                    while ($tmp1352->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1352 = $tmp1352->next;
                    }
                    $fn1354 $tmp1353 = $tmp1352->methods[0];
                    panda$collections$Iterator* $tmp1355 = $tmp1353(((panda$collections$Iterable*) statements1339));
                    $tmp1351 = $tmp1355;
                    $tmp1350 = $tmp1351;
                    Iter$402$171349 = $tmp1350;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1350));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1351));
                    $l1356:;
                    ITable* $tmp1359 = Iter$402$171349->$class->itable;
                    while ($tmp1359->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1359 = $tmp1359->next;
                    }
                    $fn1361 $tmp1360 = $tmp1359->methods[0];
                    panda$core$Bit $tmp1362 = $tmp1360(Iter$402$171349);
                    panda$core$Bit $tmp1363 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1362);
                    bool $tmp1358 = $tmp1363.value;
                    if (!$tmp1358) goto $l1357;
                    {
                        int $tmp1366;
                        {
                            ITable* $tmp1370 = Iter$402$171349->$class->itable;
                            while ($tmp1370->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1370 = $tmp1370->next;
                            }
                            $fn1372 $tmp1371 = $tmp1370->methods[1];
                            panda$core$Object* $tmp1373 = $tmp1371(Iter$402$171349);
                            $tmp1369 = $tmp1373;
                            $tmp1368 = ((org$pandalanguage$pandac$IRNode*) $tmp1369);
                            s1367 = $tmp1368;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1368));
                            panda$core$Panda$unref$panda$core$Object($tmp1369);
                            panda$core$Bit $tmp1375 = (($fn1374) s1367->$class->vtable[4])(s1367);
                            if ($tmp1375.value) {
                            {
                                $finallyReturn1375 = ((panda$core$Bit) { true });
                                $tmp1366 = 0;
                                goto $l1364;
                                $l1377:;
                                $tmp1348 = 0;
                                goto $l1346;
                                $l1378:;
                                $tmp542 = 56;
                                goto $l540;
                                $l1379:;
                                return $finallyReturn1375;
                            }
                            }
                        }
                        $tmp1366 = -1;
                        goto $l1364;
                        $l1364:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1367));
                        s1367 = NULL;
                        switch ($tmp1366) {
                            case -1: goto $l1381;
                            case 0: goto $l1377;
                        }
                        $l1381:;
                    }
                    goto $l1356;
                    $l1357:;
                }
                $tmp1348 = -1;
                goto $l1346;
                $l1346:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$402$171349));
                Iter$402$171349 = NULL;
                switch ($tmp1348) {
                    case 0: goto $l1378;
                    case -1: goto $l1382;
                }
                $l1382:;
            }
            $finallyReturn1382 = ((panda$core$Bit) { false });
            $tmp542 = 57;
            goto $l540;
            $l1384:;
            return $finallyReturn1382;
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
    $tmp542 = -1;
    goto $l540;
    $l540:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp544));
    switch ($tmp542) {
        case 35: goto $l1034;
        case 11: goto $l707;
        case 10: goto $l697;
        case 36: goto $l1044;
        case 56: goto $l1379;
        case 41: goto $l1112;
        case 26: goto $l882;
        case 30: goto $l974;
        case 3: goto $l623;
        case 4: goto $l628;
        case 5: goto $l634;
        case 49: goto $l1239;
        case 24: goto $l866;
        case 43: goto $l1128;
        case 48: goto $l1170;
        case 42: goto $l1118;
        case 21: goto $l818;
        case 25: goto $l874;
        case 6: goto $l643;
        case 47: goto $l1164;
        case 33: goto $l1024;
        case 17: goto $l789;
        case 37: goto $l1058;
        case 16: goto $l754;
        case 31: goto $l1011;
        case 32: goto $l1016;
        case 13: goto $l723;
        case 12: goto $l717;
        case 52: goto $l1290;
        case 54: goto $l1332;
        case 22: goto $l853;
        case 55: goto $l1344;
        case 23: goto $l860;
        case 44: goto $l1132;
        case 18: goto $l794;
        case 27: goto $l922;
        case 38: goto $l1093;
        case 9: goto $l691;
        case 29: goto $l939;
        case 34: goto $l1030;
        case 50: goto $l1244;
        case 19: goto $l798;
        case 15: goto $l742;
        case 8: goto $l683;
        case 28: goto $l927;
        case 20: goto $l806;
        case 40: goto $l1104;
        case 39: goto $l1098;
        case 57: goto $l1384;
        case 46: goto $l1142;
        case 53: goto $l1327;
        case -1: goto $l1386;
        case 45: goto $l1138;
        case 51: goto $l1250;
        case 0: goto $l558;
        case 1: goto $l579;
        case 7: goto $l678;
        case 14: goto $l729;
        case 2: goto $l585;
    }
    $l1386:;
}
panda$core$String* org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$415_91390 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1391;
    org$pandalanguage$pandac$IRNode* test1393 = NULL;
    org$pandalanguage$pandac$IRNode* msg1395 = NULL;
    panda$core$String* $finallyReturn1396;
    panda$core$String* $tmp1398;
    panda$core$String* $tmp1399;
    panda$core$String* $tmp1400;
    panda$core$String* $tmp1401;
    panda$core$String* $tmp1402;
    panda$core$String* $finallyReturn1411;
    panda$core$String* $tmp1413;
    panda$core$String* $tmp1414;
    panda$core$String* $tmp1415;
    org$pandalanguage$pandac$IRNode* left1423 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op1425;
    org$pandalanguage$pandac$IRNode* right1427 = NULL;
    panda$core$String* $finallyReturn1428;
    panda$core$String* $tmp1430;
    panda$core$String* $tmp1431;
    panda$core$String* $tmp1432;
    panda$core$String* $tmp1433;
    panda$core$String* $tmp1434;
    panda$core$String* $tmp1435;
    panda$core$String* $tmp1436;
    panda$core$Object* $tmp1441;
    panda$core$Bit bit1452;
    panda$core$String* $finallyReturn1453;
    panda$core$String* $tmp1455;
    panda$core$String* $tmp1456;
    panda$collections$ImmutableArray* statements1461 = NULL;
    panda$core$MutableString* result1466 = NULL;
    panda$core$MutableString* $tmp1467;
    panda$core$MutableString* $tmp1468;
    panda$collections$Iterator* Iter$427$171474 = NULL;
    panda$collections$Iterator* $tmp1475;
    panda$collections$Iterator* $tmp1476;
    org$pandalanguage$pandac$IRNode* s1492 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1493;
    panda$core$Object* $tmp1494;
    panda$core$String* $tmp1499;
    panda$core$Char8 $tmp1504;
    panda$core$String* $finallyReturn1504;
    panda$core$String* $tmp1506;
    panda$core$String* $tmp1507;
    panda$collections$ImmutableArray* statements1514 = NULL;
    panda$collections$ImmutableArray* finally1516 = NULL;
    panda$core$MutableString* result1521 = NULL;
    panda$core$MutableString* $tmp1522;
    panda$core$MutableString* $tmp1523;
    panda$collections$Iterator* Iter$434$171529 = NULL;
    panda$collections$Iterator* $tmp1530;
    panda$collections$Iterator* $tmp1531;
    org$pandalanguage$pandac$IRNode* s1547 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1548;
    panda$core$Object* $tmp1549;
    panda$core$String* $tmp1554;
    panda$collections$Iterator* Iter$438$171563 = NULL;
    panda$collections$Iterator* $tmp1564;
    panda$collections$Iterator* $tmp1565;
    org$pandalanguage$pandac$IRNode* s1581 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1582;
    panda$core$Object* $tmp1583;
    panda$core$String* $tmp1588;
    panda$core$Char8 $tmp1593;
    panda$core$String* $finallyReturn1593;
    panda$core$String* $tmp1595;
    panda$core$String* $tmp1596;
    panda$core$String* label1603 = NULL;
    panda$core$String* $finallyReturn1604;
    panda$core$String* $tmp1606;
    panda$core$String* $tmp1607;
    panda$core$String* $tmp1608;
    panda$core$String* $finallyReturn1614;
    panda$core$String* $tmp1616;
    org$pandalanguage$pandac$MethodRef* m1621 = NULL;
    panda$collections$ImmutableArray* args1623 = NULL;
    panda$core$String* $finallyReturn1624;
    panda$core$String* $tmp1626;
    panda$core$String* $tmp1627;
    panda$core$String* $tmp1628;
    panda$core$String* $tmp1629;
    panda$core$String* $tmp1630;
    panda$core$String* $tmp1634;
    org$pandalanguage$pandac$IRNode* value1642 = NULL;
    org$pandalanguage$pandac$Type* type1644 = NULL;
    org$pandalanguage$pandac$Type* $tmp1646;
    org$pandalanguage$pandac$Type* $tmp1649;
    panda$core$String* $finallyReturn1651;
    panda$core$String* $tmp1653;
    panda$core$String* $tmp1654;
    panda$core$String* $tmp1655;
    panda$core$String* $tmp1656;
    panda$core$String* $tmp1657;
    panda$core$String* $finallyReturn1666;
    panda$core$String* $tmp1668;
    panda$core$String* $tmp1669;
    panda$core$String* $tmp1670;
    panda$core$String* $tmp1671;
    panda$core$String* $tmp1672;
    org$pandalanguage$pandac$ChoiceEntry* ce1683 = NULL;
    panda$core$String* $finallyReturn1684;
    panda$core$String* $tmp1686;
    panda$core$String* $tmp1687;
    org$pandalanguage$pandac$IRNode* base1692 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce1694 = NULL;
    panda$core$Int64 field1696;
    panda$core$String* $finallyReturn1697;
    panda$core$String* $tmp1699;
    panda$core$String* $tmp1700;
    panda$core$String* $tmp1701;
    panda$core$String* $tmp1702;
    panda$core$String* $tmp1703;
    panda$core$String* $tmp1704;
    panda$core$String* $tmp1705;
    panda$core$Object* $tmp1713;
    org$pandalanguage$pandac$Type* type1721 = NULL;
    org$pandalanguage$pandac$IRNode* call1723 = NULL;
    org$pandalanguage$pandac$IRNode* $match$460_171728 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1729;
    panda$collections$ImmutableArray* args1731 = NULL;
    panda$core$String* $finallyReturn1732;
    panda$core$String* $tmp1734;
    panda$core$String* $tmp1735;
    panda$core$String* $tmp1736;
    panda$core$String* $tmp1737;
    panda$core$String* $tmp1738;
    panda$core$String* $tmp1742;
    org$pandalanguage$pandac$Type* Type1752 = NULL;
    panda$core$String* $finallyReturn1753;
    panda$core$String* $tmp1755;
    panda$core$String* label1760 = NULL;
    panda$core$String* $finallyReturn1761;
    panda$core$String* $tmp1763;
    panda$core$String* $tmp1764;
    panda$core$String* $tmp1765;
    panda$core$String* $finallyReturn1771;
    panda$core$String* $tmp1773;
    org$pandalanguage$pandac$IRNode* target1778 = NULL;
    org$pandalanguage$pandac$IRNode* value1780 = NULL;
    panda$core$String* $finallyReturn1781;
    panda$core$String* $tmp1783;
    panda$core$String* $tmp1784;
    panda$core$String* $tmp1785;
    panda$core$String* $tmp1786;
    panda$core$String* $tmp1787;
    panda$core$String* $finallyReturn1796;
    panda$core$String* $tmp1798;
    panda$core$String* $tmp1799;
    panda$core$String* label1805 = NULL;
    panda$collections$ImmutableArray* statements1807 = NULL;
    org$pandalanguage$pandac$IRNode* test1809 = NULL;
    panda$core$MutableString* result1814 = NULL;
    panda$core$MutableString* $tmp1815;
    panda$core$MutableString* $tmp1816;
    panda$core$String* $tmp1818;
    panda$core$String* $tmp1819;
    panda$collections$Iterator* Iter$484$171827 = NULL;
    panda$collections$Iterator* $tmp1828;
    panda$collections$Iterator* $tmp1829;
    org$pandalanguage$pandac$IRNode* s1845 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1846;
    panda$core$Object* $tmp1847;
    panda$core$String* $tmp1852;
    panda$core$String* $tmp1857;
    panda$core$String* $tmp1858;
    panda$core$String* $finallyReturn1862;
    panda$core$String* $tmp1864;
    panda$core$String* $tmp1865;
    org$pandalanguage$pandac$IRNode* expr1872 = NULL;
    org$pandalanguage$pandac$IRNode* stmt1874 = NULL;
    panda$core$String* $finallyReturn1875;
    panda$core$String* $tmp1877;
    panda$core$String* $tmp1878;
    panda$core$String* $tmp1879;
    panda$core$String* $tmp1880;
    panda$core$String* $tmp1881;
    org$pandalanguage$pandac$IRNode* base1892 = NULL;
    org$pandalanguage$pandac$FieldDecl* field1894 = NULL;
    panda$core$String* $finallyReturn1895;
    panda$core$String* $tmp1897;
    panda$core$String* $tmp1898;
    panda$core$String* $tmp1899;
    panda$core$String* $tmp1900;
    panda$core$String* $tmp1901;
    org$pandalanguage$pandac$IRNode* test1912 = NULL;
    panda$collections$ImmutableArray* ifTrue1914 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse1916 = NULL;
    panda$core$MutableString* result1921 = NULL;
    panda$core$MutableString* $tmp1922;
    panda$core$MutableString* $tmp1923;
    panda$core$String* $tmp1925;
    panda$core$String* $tmp1926;
    panda$collections$Iterator* Iter$495$171934 = NULL;
    panda$collections$Iterator* $tmp1935;
    panda$collections$Iterator* $tmp1936;
    org$pandalanguage$pandac$IRNode* s1952 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1953;
    panda$core$Object* $tmp1954;
    panda$core$String* $tmp1959;
    panda$core$Char8 $tmp1964;
    panda$core$String* $tmp1965;
    panda$core$String* $tmp1966;
    panda$core$String* $finallyReturn1970;
    panda$core$String* $tmp1972;
    panda$core$String* $tmp1973;
    panda$core$UInt64 value1980;
    panda$core$String* $finallyReturn1981;
    panda$core$String* $tmp1983;
    panda$core$String* $tmp1984;
    org$pandalanguage$pandac$IRNode* value1989 = NULL;
    panda$core$String* $finallyReturn1990;
    panda$core$String* $tmp1992;
    panda$core$String* $tmp1993;
    panda$core$String* $tmp1994;
    org$pandalanguage$pandac$IRNode* value2002 = NULL;
    panda$core$String* $finallyReturn2003;
    panda$core$String* $tmp2005;
    panda$core$String* $tmp2006;
    panda$core$String* $tmp2007;
    panda$core$String* label2015 = NULL;
    panda$collections$ImmutableArray* statements2017 = NULL;
    panda$core$MutableString* result2022 = NULL;
    panda$core$MutableString* $tmp2023;
    panda$core$MutableString* $tmp2024;
    panda$core$String* $tmp2026;
    panda$core$String* $tmp2027;
    panda$collections$Iterator* Iter$515$172035 = NULL;
    panda$collections$Iterator* $tmp2036;
    panda$collections$Iterator* $tmp2037;
    org$pandalanguage$pandac$IRNode* s2053 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2054;
    panda$core$Object* $tmp2055;
    panda$core$String* $tmp2060;
    panda$core$Char8 $tmp2065;
    panda$core$String* $finallyReturn2065;
    panda$core$String* $tmp2067;
    panda$core$String* $tmp2068;
    org$pandalanguage$pandac$IRNode* value2075 = NULL;
    panda$collections$ImmutableArray* whens2077 = NULL;
    panda$collections$ImmutableArray* other2079 = NULL;
    panda$core$MutableString* result2084 = NULL;
    panda$core$MutableString* $tmp2085;
    panda$core$MutableString* $tmp2086;
    panda$core$String* $tmp2088;
    panda$core$String* $tmp2089;
    panda$collections$Iterator* Iter$522$172097 = NULL;
    panda$collections$Iterator* $tmp2098;
    panda$collections$Iterator* $tmp2099;
    org$pandalanguage$pandac$IRNode* w2115 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2116;
    panda$core$Object* $tmp2117;
    panda$core$String* $tmp2122;
    panda$collections$Iterator* Iter$527$212131 = NULL;
    panda$collections$Iterator* $tmp2132;
    panda$collections$Iterator* $tmp2133;
    org$pandalanguage$pandac$IRNode* s2149 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2150;
    panda$core$Object* $tmp2151;
    panda$core$String* $tmp2156;
    panda$core$Char8 $tmp2161;
    panda$core$String* $finallyReturn2161;
    panda$core$String* $tmp2163;
    panda$core$String* $tmp2164;
    org$pandalanguage$pandac$IRNode* target2171 = NULL;
    org$pandalanguage$pandac$MethodRef* m2173 = NULL;
    panda$core$String* $finallyReturn2174;
    panda$core$String* $tmp2176;
    panda$core$String* $tmp2177;
    panda$core$String* $tmp2178;
    panda$core$String* $tmp2179;
    panda$core$String* $tmp2180;
    panda$core$String* $finallyReturn2189;
    panda$core$String* $tmp2191;
    panda$core$UInt64 value2195;
    panda$core$String* $finallyReturn2196;
    panda$core$String* $tmp2198;
    panda$core$String* $tmp2199;
    panda$core$Object* $tmp2201;
    panda$core$String* $finallyReturn2206;
    panda$core$String* $tmp2208;
    org$pandalanguage$pandac$parser$Token$Kind op2213;
    org$pandalanguage$pandac$IRNode* base2215 = NULL;
    panda$core$String* $finallyReturn2216;
    panda$core$String* $tmp2218;
    panda$core$String* $tmp2219;
    panda$core$String* $tmp2220;
    panda$core$String* $tmp2221;
    panda$core$String* $tmp2222;
    panda$core$Object* $tmp2223;
    panda$core$String* label2235 = NULL;
    org$pandalanguage$pandac$IRNode* target2237 = NULL;
    org$pandalanguage$pandac$IRNode* list2239 = NULL;
    panda$collections$ImmutableArray* statements2241 = NULL;
    panda$core$MutableString* result2246 = NULL;
    panda$core$MutableString* $tmp2247;
    panda$core$MutableString* $tmp2248;
    panda$core$String* $tmp2250;
    panda$core$String* $tmp2251;
    panda$core$String* $tmp2255;
    panda$core$String* $tmp2256;
    panda$core$String* $tmp2257;
    panda$core$String* $tmp2258;
    panda$collections$Iterator* Iter$550$172269 = NULL;
    panda$collections$Iterator* $tmp2270;
    panda$collections$Iterator* $tmp2271;
    org$pandalanguage$pandac$IRNode* s2287 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2288;
    panda$core$Object* $tmp2289;
    panda$core$String* $tmp2294;
    panda$core$Char8 $tmp2299;
    panda$core$String* $finallyReturn2299;
    panda$core$String* $tmp2301;
    panda$core$String* $tmp2302;
    panda$core$Real64 value2309;
    panda$core$String* $finallyReturn2310;
    panda$core$String* $tmp2312;
    panda$core$String* $tmp2313;
    org$pandalanguage$pandac$IRNode* value2318 = NULL;
    panda$core$String* $finallyReturn2319;
    panda$core$String* $tmp2321;
    panda$core$String* $tmp2322;
    panda$core$String* $tmp2323;
    panda$core$String* $finallyReturn2329;
    panda$core$String* $tmp2331;
    org$pandalanguage$pandac$Type* type2336 = NULL;
    panda$core$Int64 id2338;
    panda$core$String* $finallyReturn2339;
    panda$core$String* $tmp2341;
    panda$core$String* $tmp2342;
    panda$core$String* $tmp2343;
    panda$core$Object* $tmp2345;
    org$pandalanguage$pandac$IRNode* base2353 = NULL;
    panda$core$Int64 id2355;
    panda$core$String* $finallyReturn2356;
    panda$core$String* $tmp2358;
    panda$core$String* $tmp2359;
    panda$core$String* $tmp2360;
    panda$core$String* $tmp2361;
    panda$core$String* $tmp2362;
    panda$core$Object* $tmp2364;
    panda$core$String* $finallyReturn2374;
    panda$core$String* $tmp2376;
    panda$core$String* str2381 = NULL;
    panda$core$String* $finallyReturn2382;
    panda$core$String* $tmp2384;
    panda$core$String* $finallyReturn2387;
    panda$core$String* $tmp2389;
    org$pandalanguage$pandac$IRNode* test2394 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue2396 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse2398 = NULL;
    panda$core$String* $finallyReturn2399;
    panda$core$String* $tmp2401;
    panda$core$String* $tmp2402;
    panda$core$String* $tmp2403;
    panda$core$String* $tmp2404;
    panda$core$String* $tmp2405;
    panda$core$String* $tmp2406;
    panda$core$String* $tmp2407;
    org$pandalanguage$pandac$Type* type2421 = NULL;
    panda$core$String* $finallyReturn2422;
    panda$core$String* $tmp2424;
    panda$core$String* $tmp2425;
    panda$core$String* name2430 = NULL;
    panda$core$String* $finallyReturn2431;
    panda$core$String* $tmp2433;
    org$pandalanguage$pandac$IRNode* base2437 = NULL;
    panda$collections$ImmutableArray* args2439 = NULL;
    panda$core$String* $finallyReturn2440;
    panda$core$String* $tmp2442;
    panda$core$String* $tmp2443;
    panda$core$String* $tmp2444;
    panda$core$String* $tmp2445;
    panda$core$String* $tmp2446;
    panda$core$String* $tmp2451;
    org$pandalanguage$pandac$IRNode* target2459 = NULL;
    panda$collections$ImmutableArray* methods2461 = NULL;
    panda$collections$ImmutableArray* args2463 = NULL;
    panda$core$String* $finallyReturn2464;
    panda$core$String* $tmp2466;
    panda$core$String* $tmp2467;
    panda$core$String* $tmp2468;
    panda$core$String* $tmp2469;
    panda$core$String* $tmp2470;
    panda$core$String* $tmp2471;
    panda$core$String* $tmp2472;
    panda$core$Object* $tmp2477;
    panda$core$String* $tmp2482;
    org$pandalanguage$pandac$IRNode* target2490 = NULL;
    panda$collections$ImmutableArray* methods2492 = NULL;
    panda$core$String* $finallyReturn2493;
    panda$core$String* $tmp2495;
    panda$core$String* $tmp2496;
    panda$core$String* $tmp2497;
    panda$core$String* $tmp2498;
    panda$core$String* $tmp2499;
    panda$core$Object* $tmp2504;
    org$pandalanguage$pandac$IRNode* start2512 = NULL;
    org$pandalanguage$pandac$IRNode* end2514 = NULL;
    panda$core$Bit inclusive2516;
    org$pandalanguage$pandac$IRNode* step2518 = NULL;
    panda$core$MutableString* result2523 = NULL;
    panda$core$MutableString* $tmp2524;
    panda$core$MutableString* $tmp2525;
    panda$core$String* $tmp2529;
    panda$core$String* $tmp2530;
    panda$core$String* $finallyReturn2534;
    panda$core$String* $tmp2536;
    panda$core$String* $tmp2537;
    org$pandalanguage$pandac$Variable$Kind kind2544;
    panda$collections$ImmutableArray* decls2546 = NULL;
    panda$core$MutableString* result2551 = NULL;
    panda$core$MutableString* $tmp2552;
    panda$core$MutableString* $tmp2553;
    org$pandalanguage$pandac$Variable$Kind $match$604_172555;
    panda$core$String* $tmp2564;
    panda$core$String* $finallyReturn2565;
    panda$core$String* $tmp2567;
    panda$core$String* $tmp2568;
    org$pandalanguage$pandac$Variable* variable2575 = NULL;
    panda$core$String* $finallyReturn2576;
    panda$core$String* $tmp2578;
    panda$collections$ImmutableArray* tests2582 = NULL;
    panda$collections$ImmutableArray* statements2584 = NULL;
    panda$core$String* $finallyReturn2585;
    panda$core$String* $tmp2587;
    panda$core$String* $tmp2588;
    panda$core$String* $tmp2589;
    panda$core$String* $tmp2590;
    panda$core$String* $tmp2591;
    panda$core$String* $tmp2593;
    panda$core$String* $tmp2598;
    panda$core$String* label2607 = NULL;
    org$pandalanguage$pandac$IRNode* test2609 = NULL;
    panda$collections$ImmutableArray* statements2611 = NULL;
    panda$core$MutableString* result2616 = NULL;
    panda$core$MutableString* $tmp2617;
    panda$core$MutableString* $tmp2618;
    panda$core$String* $tmp2620;
    panda$core$String* $tmp2621;
    panda$core$String* $tmp2625;
    panda$core$String* $tmp2626;
    panda$collections$Iterator* Iter$622$172634 = NULL;
    panda$collections$Iterator* $tmp2635;
    panda$collections$Iterator* $tmp2636;
    org$pandalanguage$pandac$IRNode* s2652 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2653;
    panda$core$Object* $tmp2654;
    panda$core$String* $tmp2659;
    panda$core$Char8 $tmp2664;
    panda$core$String* $finallyReturn2664;
    panda$core$String* $tmp2666;
    panda$core$String* $tmp2667;
    int $tmp1389;
    {
        $tmp1391 = self;
        $match$415_91390 = $tmp1391;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1391));
        panda$core$Bit $tmp1392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp1392.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1394 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 16));
            test1393 = *$tmp1394;
            org$pandalanguage$pandac$IRNode** $tmp1396 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 24));
            msg1395 = *$tmp1396;
            if (((panda$core$Bit) { msg1395 != NULL }).value) {
            {
                panda$core$String* $tmp1404 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1403, ((panda$core$Object*) test1393));
                $tmp1402 = $tmp1404;
                panda$core$String* $tmp1406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1402, &$s1405);
                $tmp1401 = $tmp1406;
                panda$core$String* $tmp1407 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1401, ((panda$core$Object*) msg1395));
                $tmp1400 = $tmp1407;
                panda$core$String* $tmp1409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1400, &$s1408);
                $tmp1399 = $tmp1409;
                $tmp1398 = $tmp1399;
                $finallyReturn1396 = $tmp1398;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1398));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1399));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1400));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1401));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1402));
                $tmp1389 = 0;
                goto $l1387;
                $l1410:;
                return $finallyReturn1396;
            }
            }
            panda$core$String* $tmp1417 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1416, ((panda$core$Object*) test1393));
            $tmp1415 = $tmp1417;
            panda$core$String* $tmp1419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1415, &$s1418);
            $tmp1414 = $tmp1419;
            $tmp1413 = $tmp1414;
            $finallyReturn1411 = $tmp1413;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1413));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1414));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1415));
            $tmp1389 = 1;
            goto $l1387;
            $l1420:;
            return $finallyReturn1411;
        }
        }
        else {
        panda$core$Bit $tmp1422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1422.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1424 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 24));
            left1423 = *$tmp1424;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1426 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$415_91390->$data + 32));
            op1425 = *$tmp1426;
            org$pandalanguage$pandac$IRNode** $tmp1428 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 40));
            right1427 = *$tmp1428;
            panda$core$String* $tmp1438 = (($fn1437) left1423->$class->vtable[0])(left1423);
            $tmp1436 = $tmp1438;
            panda$core$String* $tmp1440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1436, &$s1439);
            $tmp1435 = $tmp1440;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1442;
            $tmp1442 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1442->value = op1425;
            $tmp1441 = ((panda$core$Object*) $tmp1442);
            panda$core$String* $tmp1443 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1435, $tmp1441);
            $tmp1434 = $tmp1443;
            panda$core$String* $tmp1445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1434, &$s1444);
            $tmp1433 = $tmp1445;
            panda$core$String* $tmp1446 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1433, ((panda$core$Object*) right1427));
            $tmp1432 = $tmp1446;
            panda$core$String* $tmp1448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1432, &$s1447);
            $tmp1431 = $tmp1448;
            $tmp1430 = $tmp1431;
            $finallyReturn1428 = $tmp1430;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1430));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1431));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1432));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1433));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1434));
            panda$core$Panda$unref$panda$core$Object($tmp1441);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1435));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1436));
            $tmp1389 = 2;
            goto $l1387;
            $l1449:;
            return $finallyReturn1428;
        }
        }
        else {
        panda$core$Bit $tmp1451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1451.value) {
        {
            panda$core$Bit* $tmp1453 = ((panda$core$Bit*) ((char*) $match$415_91390->$data + 24));
            bit1452 = *$tmp1453;
            panda$core$String* $tmp1457 = panda$core$Bit$convert$R$panda$core$String(bit1452);
            $tmp1456 = $tmp1457;
            $tmp1455 = $tmp1456;
            $finallyReturn1453 = $tmp1455;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1455));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1456));
            $tmp1389 = 3;
            goto $l1387;
            $l1458:;
            return $finallyReturn1453;
        }
        }
        else {
        panda$core$Bit $tmp1460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp1460.value) {
        {
            panda$collections$ImmutableArray** $tmp1462 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91390->$data + 16));
            statements1461 = *$tmp1462;
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
                        ITable* $tmp1477 = ((panda$collections$Iterable*) statements1461)->$class->itable;
                        while ($tmp1477->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1477 = $tmp1477->next;
                        }
                        $fn1479 $tmp1478 = $tmp1477->methods[0];
                        panda$collections$Iterator* $tmp1480 = $tmp1478(((panda$collections$Iterable*) statements1461));
                        $tmp1476 = $tmp1480;
                        $tmp1475 = $tmp1476;
                        Iter$427$171474 = $tmp1475;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1475));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1476));
                        $l1481:;
                        ITable* $tmp1484 = Iter$427$171474->$class->itable;
                        while ($tmp1484->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1484 = $tmp1484->next;
                        }
                        $fn1486 $tmp1485 = $tmp1484->methods[0];
                        panda$core$Bit $tmp1487 = $tmp1485(Iter$427$171474);
                        panda$core$Bit $tmp1488 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1487);
                        bool $tmp1483 = $tmp1488.value;
                        if (!$tmp1483) goto $l1482;
                        {
                            int $tmp1491;
                            {
                                ITable* $tmp1495 = Iter$427$171474->$class->itable;
                                while ($tmp1495->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1495 = $tmp1495->next;
                                }
                                $fn1497 $tmp1496 = $tmp1495->methods[1];
                                panda$core$Object* $tmp1498 = $tmp1496(Iter$427$171474);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$427$171474));
                    Iter$427$171474 = NULL;
                    switch ($tmp1473) {
                        case -1: goto $l1503;
                    }
                    $l1503:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1504, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1466, $tmp1504);
                panda$core$String* $tmp1508 = panda$core$MutableString$finish$R$panda$core$String(result1466);
                $tmp1507 = $tmp1508;
                $tmp1506 = $tmp1507;
                $finallyReturn1504 = $tmp1506;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1506));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1507));
                $tmp1465 = 0;
                goto $l1463;
                $l1509:;
                $tmp1389 = 4;
                goto $l1387;
                $l1510:;
                return $finallyReturn1504;
            }
            $l1463:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1466));
            result1466 = NULL;
            switch ($tmp1465) {
                case 0: goto $l1509;
            }
            $l1512:;
        }
        }
        else {
        panda$core$Bit $tmp1513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp1513.value) {
        {
            panda$collections$ImmutableArray** $tmp1515 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91390->$data + 16));
            statements1514 = *$tmp1515;
            panda$collections$ImmutableArray** $tmp1517 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91390->$data + 24));
            finally1516 = *$tmp1517;
            int $tmp1520;
            {
                panda$core$MutableString* $tmp1524 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1524, &$s1525);
                $tmp1523 = $tmp1524;
                $tmp1522 = $tmp1523;
                result1521 = $tmp1522;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1522));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1523));
                {
                    int $tmp1528;
                    {
                        ITable* $tmp1532 = ((panda$collections$Iterable*) statements1514)->$class->itable;
                        while ($tmp1532->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1532 = $tmp1532->next;
                        }
                        $fn1534 $tmp1533 = $tmp1532->methods[0];
                        panda$collections$Iterator* $tmp1535 = $tmp1533(((panda$collections$Iterable*) statements1514));
                        $tmp1531 = $tmp1535;
                        $tmp1530 = $tmp1531;
                        Iter$434$171529 = $tmp1530;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1530));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1531));
                        $l1536:;
                        ITable* $tmp1539 = Iter$434$171529->$class->itable;
                        while ($tmp1539->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1539 = $tmp1539->next;
                        }
                        $fn1541 $tmp1540 = $tmp1539->methods[0];
                        panda$core$Bit $tmp1542 = $tmp1540(Iter$434$171529);
                        panda$core$Bit $tmp1543 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1542);
                        bool $tmp1538 = $tmp1543.value;
                        if (!$tmp1538) goto $l1537;
                        {
                            int $tmp1546;
                            {
                                ITable* $tmp1550 = Iter$434$171529->$class->itable;
                                while ($tmp1550->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1550 = $tmp1550->next;
                                }
                                $fn1552 $tmp1551 = $tmp1550->methods[1];
                                panda$core$Object* $tmp1553 = $tmp1551(Iter$434$171529);
                                $tmp1549 = $tmp1553;
                                $tmp1548 = ((org$pandalanguage$pandac$IRNode*) $tmp1549);
                                s1547 = $tmp1548;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1548));
                                panda$core$Panda$unref$panda$core$Object($tmp1549);
                                panda$core$String* $tmp1556 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1547), &$s1555);
                                $tmp1554 = $tmp1556;
                                panda$core$MutableString$append$panda$core$String(result1521, $tmp1554);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1554));
                            }
                            $tmp1546 = -1;
                            goto $l1544;
                            $l1544:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1547));
                            s1547 = NULL;
                            switch ($tmp1546) {
                                case -1: goto $l1557;
                            }
                            $l1557:;
                        }
                        goto $l1536;
                        $l1537:;
                    }
                    $tmp1528 = -1;
                    goto $l1526;
                    $l1526:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$434$171529));
                    Iter$434$171529 = NULL;
                    switch ($tmp1528) {
                        case -1: goto $l1558;
                    }
                    $l1558:;
                }
                panda$core$MutableString$append$panda$core$String(result1521, &$s1559);
                {
                    int $tmp1562;
                    {
                        ITable* $tmp1566 = ((panda$collections$Iterable*) finally1516)->$class->itable;
                        while ($tmp1566->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1566 = $tmp1566->next;
                        }
                        $fn1568 $tmp1567 = $tmp1566->methods[0];
                        panda$collections$Iterator* $tmp1569 = $tmp1567(((panda$collections$Iterable*) finally1516));
                        $tmp1565 = $tmp1569;
                        $tmp1564 = $tmp1565;
                        Iter$438$171563 = $tmp1564;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1564));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1565));
                        $l1570:;
                        ITable* $tmp1573 = Iter$438$171563->$class->itable;
                        while ($tmp1573->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1573 = $tmp1573->next;
                        }
                        $fn1575 $tmp1574 = $tmp1573->methods[0];
                        panda$core$Bit $tmp1576 = $tmp1574(Iter$438$171563);
                        panda$core$Bit $tmp1577 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1576);
                        bool $tmp1572 = $tmp1577.value;
                        if (!$tmp1572) goto $l1571;
                        {
                            int $tmp1580;
                            {
                                ITable* $tmp1584 = Iter$438$171563->$class->itable;
                                while ($tmp1584->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1584 = $tmp1584->next;
                                }
                                $fn1586 $tmp1585 = $tmp1584->methods[1];
                                panda$core$Object* $tmp1587 = $tmp1585(Iter$438$171563);
                                $tmp1583 = $tmp1587;
                                $tmp1582 = ((org$pandalanguage$pandac$IRNode*) $tmp1583);
                                s1581 = $tmp1582;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1582));
                                panda$core$Panda$unref$panda$core$Object($tmp1583);
                                panda$core$String* $tmp1590 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1581), &$s1589);
                                $tmp1588 = $tmp1590;
                                panda$core$MutableString$append$panda$core$String(result1521, $tmp1588);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1588));
                            }
                            $tmp1580 = -1;
                            goto $l1578;
                            $l1578:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1581));
                            s1581 = NULL;
                            switch ($tmp1580) {
                                case -1: goto $l1591;
                            }
                            $l1591:;
                        }
                        goto $l1570;
                        $l1571:;
                    }
                    $tmp1562 = -1;
                    goto $l1560;
                    $l1560:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$438$171563));
                    Iter$438$171563 = NULL;
                    switch ($tmp1562) {
                        case -1: goto $l1592;
                    }
                    $l1592:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1593, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1521, $tmp1593);
                panda$core$String* $tmp1597 = panda$core$MutableString$finish$R$panda$core$String(result1521);
                $tmp1596 = $tmp1597;
                $tmp1595 = $tmp1596;
                $finallyReturn1593 = $tmp1595;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1595));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1596));
                $tmp1520 = 0;
                goto $l1518;
                $l1598:;
                $tmp1389 = 5;
                goto $l1387;
                $l1599:;
                return $finallyReturn1593;
            }
            $l1518:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1521));
            result1521 = NULL;
            switch ($tmp1520) {
                case 0: goto $l1598;
            }
            $l1601:;
        }
        }
        else {
        panda$core$Bit $tmp1602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp1602.value) {
        {
            panda$core$String** $tmp1604 = ((panda$core$String**) ((char*) $match$415_91390->$data + 16));
            label1603 = *$tmp1604;
            if (((panda$core$Bit) { label1603 != NULL }).value) {
            {
                panda$core$String* $tmp1610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1609, label1603);
                $tmp1608 = $tmp1610;
                panda$core$String* $tmp1612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1608, &$s1611);
                $tmp1607 = $tmp1612;
                $tmp1606 = $tmp1607;
                $finallyReturn1604 = $tmp1606;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1606));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1607));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1608));
                $tmp1389 = 6;
                goto $l1387;
                $l1613:;
                return $finallyReturn1604;
            }
            }
            $tmp1616 = &$s1617;
            $finallyReturn1614 = $tmp1616;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1616));
            $tmp1389 = 7;
            goto $l1387;
            $l1618:;
            return $finallyReturn1614;
        }
        }
        else {
        panda$core$Bit $tmp1620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp1620.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp1622 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$415_91390->$data + 24));
            m1621 = *$tmp1622;
            panda$collections$ImmutableArray** $tmp1624 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91390->$data + 32));
            args1623 = *$tmp1624;
            panda$core$String* $tmp1631 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) m1621->value)->name);
            $tmp1630 = $tmp1631;
            panda$core$String* $tmp1633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1630, &$s1632);
            $tmp1629 = $tmp1633;
            panda$core$String* $tmp1635 = panda$collections$ImmutableArray$join$R$panda$core$String(args1623);
            $tmp1634 = $tmp1635;
            panda$core$String* $tmp1636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1629, $tmp1634);
            $tmp1628 = $tmp1636;
            panda$core$String* $tmp1638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1628, &$s1637);
            $tmp1627 = $tmp1638;
            $tmp1626 = $tmp1627;
            $finallyReturn1624 = $tmp1626;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1626));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1627));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1628));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1634));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1629));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1630));
            $tmp1389 = 8;
            goto $l1387;
            $l1639:;
            return $finallyReturn1624;
        }
        }
        else {
        panda$core$Bit $tmp1641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp1641.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1643 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 16));
            value1642 = *$tmp1643;
            org$pandalanguage$pandac$Type** $tmp1645 = ((org$pandalanguage$pandac$Type**) ((char*) $match$415_91390->$data + 24));
            type1644 = *$tmp1645;
            org$pandalanguage$pandac$Type* $tmp1648 = (($fn1647) value1642->$class->vtable[2])(value1642);
            $tmp1646 = $tmp1648;
            org$pandalanguage$pandac$Type* $tmp1650 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            $tmp1649 = $tmp1650;
            panda$core$Bit $tmp1651 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1646, $tmp1649);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1649));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1646));
            if ($tmp1651.value) {
            {
                panda$core$String* $tmp1659 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1658, ((panda$core$Object*) value1642));
                $tmp1657 = $tmp1659;
                panda$core$String* $tmp1661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1657, &$s1660);
                $tmp1656 = $tmp1661;
                panda$core$String* $tmp1662 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1656, ((panda$core$Object*) type1644));
                $tmp1655 = $tmp1662;
                panda$core$String* $tmp1664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1655, &$s1663);
                $tmp1654 = $tmp1664;
                $tmp1653 = $tmp1654;
                $finallyReturn1651 = $tmp1653;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1653));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1654));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1655));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1656));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1657));
                $tmp1389 = 9;
                goto $l1387;
                $l1665:;
                return $finallyReturn1651;
            }
            }
            panda$core$String* $tmp1674 = (($fn1673) value1642->$class->vtable[0])(value1642);
            $tmp1672 = $tmp1674;
            panda$core$String* $tmp1676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1672, &$s1675);
            $tmp1671 = $tmp1676;
            panda$core$String* $tmp1677 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1671, ((panda$core$Object*) type1644));
            $tmp1670 = $tmp1677;
            panda$core$String* $tmp1679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1670, &$s1678);
            $tmp1669 = $tmp1679;
            $tmp1668 = $tmp1669;
            $finallyReturn1666 = $tmp1668;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1668));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1669));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1670));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1671));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1672));
            $tmp1389 = 10;
            goto $l1387;
            $l1680:;
            return $finallyReturn1666;
        }
        }
        else {
        panda$core$Bit $tmp1682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp1682.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp1684 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$415_91390->$data + 16));
            ce1683 = *$tmp1684;
            panda$core$String* $tmp1688 = org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(ce1683);
            $tmp1687 = $tmp1688;
            $tmp1686 = $tmp1687;
            $finallyReturn1684 = $tmp1686;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1686));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1687));
            $tmp1389 = 11;
            goto $l1387;
            $l1689:;
            return $finallyReturn1684;
        }
        }
        else {
        panda$core$Bit $tmp1691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1691.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1693 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 16));
            base1692 = *$tmp1693;
            org$pandalanguage$pandac$ChoiceEntry** $tmp1695 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$415_91390->$data + 24));
            ce1694 = *$tmp1695;
            panda$core$Int64* $tmp1697 = ((panda$core$Int64*) ((char*) $match$415_91390->$data + 32));
            field1696 = *$tmp1697;
            panda$core$String* $tmp1707 = (($fn1706) base1692->$class->vtable[0])(base1692);
            $tmp1705 = $tmp1707;
            panda$core$String* $tmp1709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1705, &$s1708);
            $tmp1704 = $tmp1709;
            panda$core$String* $tmp1710 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1704, ((panda$core$Object*) ce1694));
            $tmp1703 = $tmp1710;
            panda$core$String* $tmp1712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1703, &$s1711);
            $tmp1702 = $tmp1712;
            panda$core$Int64$wrapper* $tmp1714;
            $tmp1714 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1714->value = field1696;
            $tmp1713 = ((panda$core$Object*) $tmp1714);
            panda$core$String* $tmp1715 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1702, $tmp1713);
            $tmp1701 = $tmp1715;
            panda$core$String* $tmp1717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1701, &$s1716);
            $tmp1700 = $tmp1717;
            $tmp1699 = $tmp1700;
            $finallyReturn1697 = $tmp1699;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1699));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1700));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1701));
            panda$core$Panda$unref$panda$core$Object($tmp1713);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1702));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1703));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1704));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1705));
            $tmp1389 = 12;
            goto $l1387;
            $l1718:;
            return $finallyReturn1697;
        }
        }
        else {
        panda$core$Bit $tmp1720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp1720.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1722 = ((org$pandalanguage$pandac$Type**) ((char*) $match$415_91390->$data + 16));
            type1721 = *$tmp1722;
            org$pandalanguage$pandac$IRNode** $tmp1724 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 24));
            call1723 = *$tmp1724;
            int $tmp1727;
            {
                $tmp1729 = call1723;
                $match$460_171728 = $tmp1729;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1729));
                panda$core$Bit $tmp1730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$460_171728->$rawValue, ((panda$core$Int64) { 6 }));
                if ($tmp1730.value) {
                {
                    panda$collections$ImmutableArray** $tmp1732 = ((panda$collections$ImmutableArray**) ((char*) $match$460_171728->$data + 32));
                    args1731 = *$tmp1732;
                    panda$core$String* $tmp1739 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type1721);
                    $tmp1738 = $tmp1739;
                    panda$core$String* $tmp1741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1738, &$s1740);
                    $tmp1737 = $tmp1741;
                    panda$core$String* $tmp1743 = panda$collections$ImmutableArray$join$R$panda$core$String(args1731);
                    $tmp1742 = $tmp1743;
                    panda$core$String* $tmp1744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1737, $tmp1742);
                    $tmp1736 = $tmp1744;
                    panda$core$String* $tmp1746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1736, &$s1745);
                    $tmp1735 = $tmp1746;
                    $tmp1734 = $tmp1735;
                    $finallyReturn1732 = $tmp1734;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1734));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1735));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1736));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1742));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1737));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1738));
                    $tmp1727 = 0;
                    goto $l1725;
                    $l1747:;
                    $tmp1389 = 13;
                    goto $l1387;
                    $l1748:;
                    return $finallyReturn1732;
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1727 = -1;
            goto $l1725;
            $l1725:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1729));
            switch ($tmp1727) {
                case 0: goto $l1747;
                case -1: goto $l1750;
            }
            $l1750:;
        }
        }
        else {
        panda$core$Bit $tmp1751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1751.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1753 = ((org$pandalanguage$pandac$Type**) ((char*) $match$415_91390->$data + 16));
            Type1752 = *$tmp1753;
            $tmp1755 = &$s1756;
            $finallyReturn1753 = $tmp1755;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1755));
            $tmp1389 = 14;
            goto $l1387;
            $l1757:;
            return $finallyReturn1753;
        }
        }
        else {
        panda$core$Bit $tmp1759 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1759.value) {
        {
            panda$core$String** $tmp1761 = ((panda$core$String**) ((char*) $match$415_91390->$data + 16));
            label1760 = *$tmp1761;
            if (((panda$core$Bit) { label1760 != NULL }).value) {
            {
                panda$core$String* $tmp1767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1766, label1760);
                $tmp1765 = $tmp1767;
                panda$core$String* $tmp1769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1765, &$s1768);
                $tmp1764 = $tmp1769;
                $tmp1763 = $tmp1764;
                $finallyReturn1761 = $tmp1763;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1763));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1764));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1765));
                $tmp1389 = 15;
                goto $l1387;
                $l1770:;
                return $finallyReturn1761;
            }
            }
            $tmp1773 = &$s1774;
            $finallyReturn1771 = $tmp1773;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1773));
            $tmp1389 = 16;
            goto $l1387;
            $l1775:;
            return $finallyReturn1771;
        }
        }
        else {
        panda$core$Bit $tmp1777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1777.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1779 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 0));
            target1778 = *$tmp1779;
            org$pandalanguage$pandac$IRNode** $tmp1781 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 8));
            value1780 = *$tmp1781;
            if (((panda$core$Bit) { value1780 != NULL }).value) {
            {
                panda$core$String* $tmp1789 = (($fn1788) target1778->$class->vtable[0])(target1778);
                $tmp1787 = $tmp1789;
                panda$core$String* $tmp1791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1787, &$s1790);
                $tmp1786 = $tmp1791;
                panda$core$String* $tmp1792 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1786, ((panda$core$Object*) value1780));
                $tmp1785 = $tmp1792;
                panda$core$String* $tmp1794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1785, &$s1793);
                $tmp1784 = $tmp1794;
                $tmp1783 = $tmp1784;
                $finallyReturn1781 = $tmp1783;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1783));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1784));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1785));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1786));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1787));
                $tmp1389 = 17;
                goto $l1387;
                $l1795:;
                return $finallyReturn1781;
            }
            }
            panda$core$String* $tmp1801 = (($fn1800) target1778->$class->vtable[0])(target1778);
            $tmp1799 = $tmp1801;
            $tmp1798 = $tmp1799;
            $finallyReturn1796 = $tmp1798;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1798));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1799));
            $tmp1389 = 18;
            goto $l1387;
            $l1802:;
            return $finallyReturn1796;
        }
        }
        else {
        panda$core$Bit $tmp1804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1804.value) {
        {
            panda$core$String** $tmp1806 = ((panda$core$String**) ((char*) $match$415_91390->$data + 16));
            label1805 = *$tmp1806;
            panda$collections$ImmutableArray** $tmp1808 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91390->$data + 24));
            statements1807 = *$tmp1808;
            org$pandalanguage$pandac$IRNode** $tmp1810 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 32));
            test1809 = *$tmp1810;
            int $tmp1813;
            {
                panda$core$MutableString* $tmp1817 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1817);
                $tmp1816 = $tmp1817;
                $tmp1815 = $tmp1816;
                result1814 = $tmp1815;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1815));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1816));
                if (((panda$core$Bit) { label1805 != NULL }).value) {
                {
                    panda$core$String* $tmp1820 = panda$core$String$convert$R$panda$core$String(label1805);
                    $tmp1819 = $tmp1820;
                    panda$core$String* $tmp1822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1819, &$s1821);
                    $tmp1818 = $tmp1822;
                    panda$core$MutableString$append$panda$core$String(result1814, $tmp1818);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1818));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1819));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1814, &$s1823);
                {
                    int $tmp1826;
                    {
                        ITable* $tmp1830 = ((panda$collections$Iterable*) statements1807)->$class->itable;
                        while ($tmp1830->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1830 = $tmp1830->next;
                        }
                        $fn1832 $tmp1831 = $tmp1830->methods[0];
                        panda$collections$Iterator* $tmp1833 = $tmp1831(((panda$collections$Iterable*) statements1807));
                        $tmp1829 = $tmp1833;
                        $tmp1828 = $tmp1829;
                        Iter$484$171827 = $tmp1828;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1828));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1829));
                        $l1834:;
                        ITable* $tmp1837 = Iter$484$171827->$class->itable;
                        while ($tmp1837->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1837 = $tmp1837->next;
                        }
                        $fn1839 $tmp1838 = $tmp1837->methods[0];
                        panda$core$Bit $tmp1840 = $tmp1838(Iter$484$171827);
                        panda$core$Bit $tmp1841 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1840);
                        bool $tmp1836 = $tmp1841.value;
                        if (!$tmp1836) goto $l1835;
                        {
                            int $tmp1844;
                            {
                                ITable* $tmp1848 = Iter$484$171827->$class->itable;
                                while ($tmp1848->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1848 = $tmp1848->next;
                                }
                                $fn1850 $tmp1849 = $tmp1848->methods[1];
                                panda$core$Object* $tmp1851 = $tmp1849(Iter$484$171827);
                                $tmp1847 = $tmp1851;
                                $tmp1846 = ((org$pandalanguage$pandac$IRNode*) $tmp1847);
                                s1845 = $tmp1846;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1846));
                                panda$core$Panda$unref$panda$core$Object($tmp1847);
                                panda$core$String* $tmp1854 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1845), &$s1853);
                                $tmp1852 = $tmp1854;
                                panda$core$MutableString$append$panda$core$String(result1814, $tmp1852);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1852));
                            }
                            $tmp1844 = -1;
                            goto $l1842;
                            $l1842:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1845));
                            s1845 = NULL;
                            switch ($tmp1844) {
                                case -1: goto $l1855;
                            }
                            $l1855:;
                        }
                        goto $l1834;
                        $l1835:;
                    }
                    $tmp1826 = -1;
                    goto $l1824;
                    $l1824:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$484$171827));
                    Iter$484$171827 = NULL;
                    switch ($tmp1826) {
                        case -1: goto $l1856;
                    }
                    $l1856:;
                }
                panda$core$String* $tmp1860 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1859, ((panda$core$Object*) test1809));
                $tmp1858 = $tmp1860;
                panda$core$String* $tmp1862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1858, &$s1861);
                $tmp1857 = $tmp1862;
                panda$core$MutableString$append$panda$core$String(result1814, $tmp1857);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1857));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1858));
                panda$core$String* $tmp1866 = panda$core$MutableString$finish$R$panda$core$String(result1814);
                $tmp1865 = $tmp1866;
                $tmp1864 = $tmp1865;
                $finallyReturn1862 = $tmp1864;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1864));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1865));
                $tmp1813 = 0;
                goto $l1811;
                $l1867:;
                $tmp1389 = 19;
                goto $l1387;
                $l1868:;
                return $finallyReturn1862;
            }
            $l1811:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1814));
            result1814 = NULL;
            switch ($tmp1813) {
                case 0: goto $l1867;
            }
            $l1870:;
        }
        }
        else {
        panda$core$Bit $tmp1871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1871.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1873 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 0));
            expr1872 = *$tmp1873;
            org$pandalanguage$pandac$IRNode** $tmp1875 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 8));
            stmt1874 = *$tmp1875;
            panda$core$String* $tmp1883 = (($fn1882) expr1872->$class->vtable[0])(expr1872);
            $tmp1881 = $tmp1883;
            panda$core$String* $tmp1885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1881, &$s1884);
            $tmp1880 = $tmp1885;
            panda$core$String* $tmp1886 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1880, ((panda$core$Object*) stmt1874));
            $tmp1879 = $tmp1886;
            panda$core$String* $tmp1888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1879, &$s1887);
            $tmp1878 = $tmp1888;
            $tmp1877 = $tmp1878;
            $finallyReturn1875 = $tmp1877;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1877));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1878));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1879));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1880));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1881));
            $tmp1389 = 20;
            goto $l1387;
            $l1889:;
            return $finallyReturn1875;
        }
        }
        else {
        panda$core$Bit $tmp1891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1891.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1893 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 24));
            base1892 = *$tmp1893;
            org$pandalanguage$pandac$FieldDecl** $tmp1895 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$415_91390->$data + 32));
            field1894 = *$tmp1895;
            panda$core$String* $tmp1903 = (($fn1902) base1892->$class->vtable[0])(base1892);
            $tmp1901 = $tmp1903;
            panda$core$String* $tmp1905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1901, &$s1904);
            $tmp1900 = $tmp1905;
            panda$core$String* $tmp1906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1900, ((org$pandalanguage$pandac$Symbol*) field1894)->name);
            $tmp1899 = $tmp1906;
            panda$core$String* $tmp1908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1899, &$s1907);
            $tmp1898 = $tmp1908;
            $tmp1897 = $tmp1898;
            $finallyReturn1895 = $tmp1897;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1897));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1898));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1899));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1900));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1901));
            $tmp1389 = 21;
            goto $l1387;
            $l1909:;
            return $finallyReturn1895;
        }
        }
        else {
        panda$core$Bit $tmp1911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1911.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1913 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 16));
            test1912 = *$tmp1913;
            panda$collections$ImmutableArray** $tmp1915 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91390->$data + 24));
            ifTrue1914 = *$tmp1915;
            org$pandalanguage$pandac$IRNode** $tmp1917 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 32));
            ifFalse1916 = *$tmp1917;
            int $tmp1920;
            {
                panda$core$MutableString* $tmp1924 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1928 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1927, ((panda$core$Object*) test1912));
                $tmp1926 = $tmp1928;
                panda$core$String* $tmp1930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1926, &$s1929);
                $tmp1925 = $tmp1930;
                panda$core$MutableString$init$panda$core$String($tmp1924, $tmp1925);
                $tmp1923 = $tmp1924;
                $tmp1922 = $tmp1923;
                result1921 = $tmp1922;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1922));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1923));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1925));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1926));
                {
                    int $tmp1933;
                    {
                        ITable* $tmp1937 = ((panda$collections$Iterable*) ifTrue1914)->$class->itable;
                        while ($tmp1937->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1937 = $tmp1937->next;
                        }
                        $fn1939 $tmp1938 = $tmp1937->methods[0];
                        panda$collections$Iterator* $tmp1940 = $tmp1938(((panda$collections$Iterable*) ifTrue1914));
                        $tmp1936 = $tmp1940;
                        $tmp1935 = $tmp1936;
                        Iter$495$171934 = $tmp1935;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1935));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1936));
                        $l1941:;
                        ITable* $tmp1944 = Iter$495$171934->$class->itable;
                        while ($tmp1944->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1944 = $tmp1944->next;
                        }
                        $fn1946 $tmp1945 = $tmp1944->methods[0];
                        panda$core$Bit $tmp1947 = $tmp1945(Iter$495$171934);
                        panda$core$Bit $tmp1948 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1947);
                        bool $tmp1943 = $tmp1948.value;
                        if (!$tmp1943) goto $l1942;
                        {
                            int $tmp1951;
                            {
                                ITable* $tmp1955 = Iter$495$171934->$class->itable;
                                while ($tmp1955->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1955 = $tmp1955->next;
                                }
                                $fn1957 $tmp1956 = $tmp1955->methods[1];
                                panda$core$Object* $tmp1958 = $tmp1956(Iter$495$171934);
                                $tmp1954 = $tmp1958;
                                $tmp1953 = ((org$pandalanguage$pandac$IRNode*) $tmp1954);
                                s1952 = $tmp1953;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1953));
                                panda$core$Panda$unref$panda$core$Object($tmp1954);
                                panda$core$String* $tmp1961 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1952), &$s1960);
                                $tmp1959 = $tmp1961;
                                panda$core$MutableString$append$panda$core$String(result1921, $tmp1959);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1959));
                            }
                            $tmp1951 = -1;
                            goto $l1949;
                            $l1949:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1952));
                            s1952 = NULL;
                            switch ($tmp1951) {
                                case -1: goto $l1962;
                            }
                            $l1962:;
                        }
                        goto $l1941;
                        $l1942:;
                    }
                    $tmp1933 = -1;
                    goto $l1931;
                    $l1931:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$495$171934));
                    Iter$495$171934 = NULL;
                    switch ($tmp1933) {
                        case -1: goto $l1963;
                    }
                    $l1963:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1964, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1921, $tmp1964);
                if (((panda$core$Bit) { ifFalse1916 != NULL }).value) {
                {
                    panda$core$String* $tmp1968 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1967, ((panda$core$Object*) ifFalse1916));
                    $tmp1966 = $tmp1968;
                    panda$core$String* $tmp1970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1966, &$s1969);
                    $tmp1965 = $tmp1970;
                    panda$core$MutableString$append$panda$core$String(result1921, $tmp1965);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1965));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1966));
                }
                }
                panda$core$String* $tmp1974 = panda$core$MutableString$finish$R$panda$core$String(result1921);
                $tmp1973 = $tmp1974;
                $tmp1972 = $tmp1973;
                $finallyReturn1970 = $tmp1972;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1972));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1973));
                $tmp1920 = 0;
                goto $l1918;
                $l1975:;
                $tmp1389 = 22;
                goto $l1387;
                $l1976:;
                return $finallyReturn1970;
            }
            $l1918:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1921));
            result1921 = NULL;
            switch ($tmp1920) {
                case 0: goto $l1975;
            }
            $l1978:;
        }
        }
        else {
        panda$core$Bit $tmp1979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1979.value) {
        {
            panda$core$UInt64* $tmp1981 = ((panda$core$UInt64*) ((char*) $match$415_91390->$data + 24));
            value1980 = *$tmp1981;
            panda$core$String* $tmp1985 = panda$core$UInt64$convert$R$panda$core$String(value1980);
            $tmp1984 = $tmp1985;
            $tmp1983 = $tmp1984;
            $finallyReturn1981 = $tmp1983;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1983));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1984));
            $tmp1389 = 23;
            goto $l1387;
            $l1986:;
            return $finallyReturn1981;
        }
        }
        else {
        panda$core$Bit $tmp1988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1988.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1990 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 16));
            value1989 = *$tmp1990;
            panda$core$String* $tmp1996 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1995, ((panda$core$Object*) value1989));
            $tmp1994 = $tmp1996;
            panda$core$String* $tmp1998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1994, &$s1997);
            $tmp1993 = $tmp1998;
            $tmp1992 = $tmp1993;
            $finallyReturn1990 = $tmp1992;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1992));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1993));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1994));
            $tmp1389 = 24;
            goto $l1387;
            $l1999:;
            return $finallyReturn1990;
        }
        }
        else {
        panda$core$Bit $tmp2001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp2001.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2003 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 16));
            value2002 = *$tmp2003;
            panda$core$String* $tmp2009 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2008, ((panda$core$Object*) value2002));
            $tmp2007 = $tmp2009;
            panda$core$String* $tmp2011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2007, &$s2010);
            $tmp2006 = $tmp2011;
            $tmp2005 = $tmp2006;
            $finallyReturn2003 = $tmp2005;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2005));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2006));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2007));
            $tmp1389 = 25;
            goto $l1387;
            $l2012:;
            return $finallyReturn2003;
        }
        }
        else {
        panda$core$Bit $tmp2014 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp2014.value) {
        {
            panda$core$String** $tmp2016 = ((panda$core$String**) ((char*) $match$415_91390->$data + 16));
            label2015 = *$tmp2016;
            panda$collections$ImmutableArray** $tmp2018 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91390->$data + 24));
            statements2017 = *$tmp2018;
            int $tmp2021;
            {
                panda$core$MutableString* $tmp2025 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2025);
                $tmp2024 = $tmp2025;
                $tmp2023 = $tmp2024;
                result2022 = $tmp2023;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2023));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2024));
                if (((panda$core$Bit) { label2015 != NULL }).value) {
                {
                    panda$core$String* $tmp2028 = panda$core$String$convert$R$panda$core$String(label2015);
                    $tmp2027 = $tmp2028;
                    panda$core$String* $tmp2030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2027, &$s2029);
                    $tmp2026 = $tmp2030;
                    panda$core$MutableString$append$panda$core$String(result2022, $tmp2026);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2026));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2027));
                }
                }
                panda$core$MutableString$append$panda$core$String(result2022, &$s2031);
                {
                    int $tmp2034;
                    {
                        ITable* $tmp2038 = ((panda$collections$Iterable*) statements2017)->$class->itable;
                        while ($tmp2038->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2038 = $tmp2038->next;
                        }
                        $fn2040 $tmp2039 = $tmp2038->methods[0];
                        panda$collections$Iterator* $tmp2041 = $tmp2039(((panda$collections$Iterable*) statements2017));
                        $tmp2037 = $tmp2041;
                        $tmp2036 = $tmp2037;
                        Iter$515$172035 = $tmp2036;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2036));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2037));
                        $l2042:;
                        ITable* $tmp2045 = Iter$515$172035->$class->itable;
                        while ($tmp2045->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2045 = $tmp2045->next;
                        }
                        $fn2047 $tmp2046 = $tmp2045->methods[0];
                        panda$core$Bit $tmp2048 = $tmp2046(Iter$515$172035);
                        panda$core$Bit $tmp2049 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2048);
                        bool $tmp2044 = $tmp2049.value;
                        if (!$tmp2044) goto $l2043;
                        {
                            int $tmp2052;
                            {
                                ITable* $tmp2056 = Iter$515$172035->$class->itable;
                                while ($tmp2056->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2056 = $tmp2056->next;
                                }
                                $fn2058 $tmp2057 = $tmp2056->methods[1];
                                panda$core$Object* $tmp2059 = $tmp2057(Iter$515$172035);
                                $tmp2055 = $tmp2059;
                                $tmp2054 = ((org$pandalanguage$pandac$IRNode*) $tmp2055);
                                s2053 = $tmp2054;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2054));
                                panda$core$Panda$unref$panda$core$Object($tmp2055);
                                panda$core$String* $tmp2062 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2053), &$s2061);
                                $tmp2060 = $tmp2062;
                                panda$core$MutableString$append$panda$core$String(result2022, $tmp2060);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2060));
                            }
                            $tmp2052 = -1;
                            goto $l2050;
                            $l2050:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2053));
                            s2053 = NULL;
                            switch ($tmp2052) {
                                case -1: goto $l2063;
                            }
                            $l2063:;
                        }
                        goto $l2042;
                        $l2043:;
                    }
                    $tmp2034 = -1;
                    goto $l2032;
                    $l2032:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$515$172035));
                    Iter$515$172035 = NULL;
                    switch ($tmp2034) {
                        case -1: goto $l2064;
                    }
                    $l2064:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2065, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2022, $tmp2065);
                panda$core$String* $tmp2069 = panda$core$MutableString$finish$R$panda$core$String(result2022);
                $tmp2068 = $tmp2069;
                $tmp2067 = $tmp2068;
                $finallyReturn2065 = $tmp2067;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2067));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2068));
                $tmp2021 = 0;
                goto $l2019;
                $l2070:;
                $tmp1389 = 26;
                goto $l1387;
                $l2071:;
                return $finallyReturn2065;
            }
            $l2019:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2022));
            result2022 = NULL;
            switch ($tmp2021) {
                case 0: goto $l2070;
            }
            $l2073:;
        }
        }
        else {
        panda$core$Bit $tmp2074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp2074.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2076 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 16));
            value2075 = *$tmp2076;
            panda$collections$ImmutableArray** $tmp2078 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91390->$data + 24));
            whens2077 = *$tmp2078;
            panda$collections$ImmutableArray** $tmp2080 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91390->$data + 32));
            other2079 = *$tmp2080;
            int $tmp2083;
            {
                panda$core$MutableString* $tmp2087 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp2091 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2090, ((panda$core$Object*) value2075));
                $tmp2089 = $tmp2091;
                panda$core$String* $tmp2093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2089, &$s2092);
                $tmp2088 = $tmp2093;
                panda$core$MutableString$init$panda$core$String($tmp2087, $tmp2088);
                $tmp2086 = $tmp2087;
                $tmp2085 = $tmp2086;
                result2084 = $tmp2085;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2085));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2086));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2088));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2089));
                {
                    int $tmp2096;
                    {
                        ITable* $tmp2100 = ((panda$collections$Iterable*) whens2077)->$class->itable;
                        while ($tmp2100->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2100 = $tmp2100->next;
                        }
                        $fn2102 $tmp2101 = $tmp2100->methods[0];
                        panda$collections$Iterator* $tmp2103 = $tmp2101(((panda$collections$Iterable*) whens2077));
                        $tmp2099 = $tmp2103;
                        $tmp2098 = $tmp2099;
                        Iter$522$172097 = $tmp2098;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2098));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2099));
                        $l2104:;
                        ITable* $tmp2107 = Iter$522$172097->$class->itable;
                        while ($tmp2107->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2107 = $tmp2107->next;
                        }
                        $fn2109 $tmp2108 = $tmp2107->methods[0];
                        panda$core$Bit $tmp2110 = $tmp2108(Iter$522$172097);
                        panda$core$Bit $tmp2111 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2110);
                        bool $tmp2106 = $tmp2111.value;
                        if (!$tmp2106) goto $l2105;
                        {
                            int $tmp2114;
                            {
                                ITable* $tmp2118 = Iter$522$172097->$class->itable;
                                while ($tmp2118->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2118 = $tmp2118->next;
                                }
                                $fn2120 $tmp2119 = $tmp2118->methods[1];
                                panda$core$Object* $tmp2121 = $tmp2119(Iter$522$172097);
                                $tmp2117 = $tmp2121;
                                $tmp2116 = ((org$pandalanguage$pandac$IRNode*) $tmp2117);
                                w2115 = $tmp2116;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2116));
                                panda$core$Panda$unref$panda$core$Object($tmp2117);
                                panda$core$String* $tmp2124 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w2115), &$s2123);
                                $tmp2122 = $tmp2124;
                                panda$core$MutableString$append$panda$core$String(result2084, $tmp2122);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2122));
                            }
                            $tmp2114 = -1;
                            goto $l2112;
                            $l2112:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w2115));
                            w2115 = NULL;
                            switch ($tmp2114) {
                                case -1: goto $l2125;
                            }
                            $l2125:;
                        }
                        goto $l2104;
                        $l2105:;
                    }
                    $tmp2096 = -1;
                    goto $l2094;
                    $l2094:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$522$172097));
                    Iter$522$172097 = NULL;
                    switch ($tmp2096) {
                        case -1: goto $l2126;
                    }
                    $l2126:;
                }
                if (((panda$core$Bit) { other2079 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2084, &$s2127);
                    {
                        int $tmp2130;
                        {
                            ITable* $tmp2134 = ((panda$collections$Iterable*) other2079)->$class->itable;
                            while ($tmp2134->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp2134 = $tmp2134->next;
                            }
                            $fn2136 $tmp2135 = $tmp2134->methods[0];
                            panda$collections$Iterator* $tmp2137 = $tmp2135(((panda$collections$Iterable*) other2079));
                            $tmp2133 = $tmp2137;
                            $tmp2132 = $tmp2133;
                            Iter$527$212131 = $tmp2132;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2132));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2133));
                            $l2138:;
                            ITable* $tmp2141 = Iter$527$212131->$class->itable;
                            while ($tmp2141->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2141 = $tmp2141->next;
                            }
                            $fn2143 $tmp2142 = $tmp2141->methods[0];
                            panda$core$Bit $tmp2144 = $tmp2142(Iter$527$212131);
                            panda$core$Bit $tmp2145 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2144);
                            bool $tmp2140 = $tmp2145.value;
                            if (!$tmp2140) goto $l2139;
                            {
                                int $tmp2148;
                                {
                                    ITable* $tmp2152 = Iter$527$212131->$class->itable;
                                    while ($tmp2152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp2152 = $tmp2152->next;
                                    }
                                    $fn2154 $tmp2153 = $tmp2152->methods[1];
                                    panda$core$Object* $tmp2155 = $tmp2153(Iter$527$212131);
                                    $tmp2151 = $tmp2155;
                                    $tmp2150 = ((org$pandalanguage$pandac$IRNode*) $tmp2151);
                                    s2149 = $tmp2150;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2150));
                                    panda$core$Panda$unref$panda$core$Object($tmp2151);
                                    panda$core$String* $tmp2158 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2149), &$s2157);
                                    $tmp2156 = $tmp2158;
                                    panda$core$MutableString$append$panda$core$String(result2084, $tmp2156);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2156));
                                }
                                $tmp2148 = -1;
                                goto $l2146;
                                $l2146:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2149));
                                s2149 = NULL;
                                switch ($tmp2148) {
                                    case -1: goto $l2159;
                                }
                                $l2159:;
                            }
                            goto $l2138;
                            $l2139:;
                        }
                        $tmp2130 = -1;
                        goto $l2128;
                        $l2128:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$527$212131));
                        Iter$527$212131 = NULL;
                        switch ($tmp2130) {
                            case -1: goto $l2160;
                        }
                        $l2160:;
                    }
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2161, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2084, $tmp2161);
                panda$core$String* $tmp2165 = panda$core$MutableString$finish$R$panda$core$String(result2084);
                $tmp2164 = $tmp2165;
                $tmp2163 = $tmp2164;
                $finallyReturn2161 = $tmp2163;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2163));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2164));
                $tmp2083 = 0;
                goto $l2081;
                $l2166:;
                $tmp1389 = 27;
                goto $l1387;
                $l2167:;
                return $finallyReturn2161;
            }
            $l2081:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2084));
            result2084 = NULL;
            switch ($tmp2083) {
                case 0: goto $l2166;
            }
            $l2169:;
        }
        }
        else {
        panda$core$Bit $tmp2170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp2170.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2172 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 16));
            target2171 = *$tmp2172;
            org$pandalanguage$pandac$MethodRef** $tmp2174 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$415_91390->$data + 24));
            m2173 = *$tmp2174;
            if (((panda$core$Bit) { target2171 != NULL }).value) {
            {
                panda$core$String* $tmp2182 = (($fn2181) target2171->$class->vtable[0])(target2171);
                $tmp2180 = $tmp2182;
                panda$core$String* $tmp2184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2180, &$s2183);
                $tmp2179 = $tmp2184;
                panda$core$String* $tmp2185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2179, ((org$pandalanguage$pandac$Symbol*) m2173->value)->name);
                $tmp2178 = $tmp2185;
                panda$core$String* $tmp2187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2178, &$s2186);
                $tmp2177 = $tmp2187;
                $tmp2176 = $tmp2177;
                $finallyReturn2174 = $tmp2176;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2176));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2177));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2178));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2179));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2180));
                $tmp1389 = 28;
                goto $l1387;
                $l2188:;
                return $finallyReturn2174;
            }
            }
            $tmp2191 = ((org$pandalanguage$pandac$Symbol*) m2173->value)->name;
            $finallyReturn2189 = $tmp2191;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2191));
            $tmp1389 = 29;
            goto $l1387;
            $l2192:;
            return $finallyReturn2189;
        }
        }
        else {
        panda$core$Bit $tmp2194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp2194.value) {
        {
            panda$core$UInt64* $tmp2196 = ((panda$core$UInt64*) ((char*) $match$415_91390->$data + 24));
            value2195 = *$tmp2196;
            panda$core$UInt64$wrapper* $tmp2202;
            $tmp2202 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
            $tmp2202->value = value2195;
            $tmp2201 = ((panda$core$Object*) $tmp2202);
            panda$core$String* $tmp2203 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2200, $tmp2201);
            $tmp2199 = $tmp2203;
            $tmp2198 = $tmp2199;
            $finallyReturn2196 = $tmp2198;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2198));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2199));
            panda$core$Panda$unref$panda$core$Object($tmp2201);
            $tmp1389 = 30;
            goto $l1387;
            $l2204:;
            return $finallyReturn2196;
        }
        }
        else {
        panda$core$Bit $tmp2206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp2206.value) {
        {
            $tmp2208 = &$s2209;
            $finallyReturn2206 = $tmp2208;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2208));
            $tmp1389 = 31;
            goto $l1387;
            $l2210:;
            return $finallyReturn2206;
        }
        }
        else {
        panda$core$Bit $tmp2212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp2212.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2214 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$415_91390->$data + 16));
            op2213 = *$tmp2214;
            org$pandalanguage$pandac$IRNode** $tmp2216 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 24));
            base2215 = *$tmp2216;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2224;
            $tmp2224 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp2224->value = op2213;
            $tmp2223 = ((panda$core$Object*) $tmp2224);
            panda$core$String* $tmp2226 = (($fn2225) $tmp2223->$class->vtable[0])($tmp2223);
            $tmp2222 = $tmp2226;
            panda$core$String* $tmp2228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2222, &$s2227);
            $tmp2221 = $tmp2228;
            panda$core$String* $tmp2229 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2221, ((panda$core$Object*) base2215));
            $tmp2220 = $tmp2229;
            panda$core$String* $tmp2231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2220, &$s2230);
            $tmp2219 = $tmp2231;
            $tmp2218 = $tmp2219;
            $finallyReturn2216 = $tmp2218;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2218));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2219));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2220));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2221));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2222));
            panda$core$Panda$unref$panda$core$Object($tmp2223);
            $tmp1389 = 32;
            goto $l1387;
            $l2232:;
            return $finallyReturn2216;
        }
        }
        else {
        panda$core$Bit $tmp2234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp2234.value) {
        {
            panda$core$String** $tmp2236 = ((panda$core$String**) ((char*) $match$415_91390->$data + 16));
            label2235 = *$tmp2236;
            org$pandalanguage$pandac$IRNode** $tmp2238 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 24));
            target2237 = *$tmp2238;
            org$pandalanguage$pandac$IRNode** $tmp2240 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 32));
            list2239 = *$tmp2240;
            panda$collections$ImmutableArray** $tmp2242 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91390->$data + 40));
            statements2241 = *$tmp2242;
            int $tmp2245;
            {
                panda$core$MutableString* $tmp2249 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2249);
                $tmp2248 = $tmp2249;
                $tmp2247 = $tmp2248;
                result2246 = $tmp2247;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2247));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2248));
                if (((panda$core$Bit) { label2235 != NULL }).value) {
                {
                    panda$core$String* $tmp2252 = panda$core$String$convert$R$panda$core$String(label2235);
                    $tmp2251 = $tmp2252;
                    panda$core$String* $tmp2254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2251, &$s2253);
                    $tmp2250 = $tmp2254;
                    panda$core$MutableString$append$panda$core$String(result2246, $tmp2250);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2250));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2251));
                }
                }
                panda$core$String* $tmp2260 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2259, ((panda$core$Object*) target2237));
                $tmp2258 = $tmp2260;
                panda$core$String* $tmp2262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2258, &$s2261);
                $tmp2257 = $tmp2262;
                panda$core$String* $tmp2263 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2257, ((panda$core$Object*) list2239));
                $tmp2256 = $tmp2263;
                panda$core$String* $tmp2265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2256, &$s2264);
                $tmp2255 = $tmp2265;
                panda$core$MutableString$append$panda$core$String(result2246, $tmp2255);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2255));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2256));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2257));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2258));
                {
                    int $tmp2268;
                    {
                        ITable* $tmp2272 = ((panda$collections$Iterable*) statements2241)->$class->itable;
                        while ($tmp2272->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2272 = $tmp2272->next;
                        }
                        $fn2274 $tmp2273 = $tmp2272->methods[0];
                        panda$collections$Iterator* $tmp2275 = $tmp2273(((panda$collections$Iterable*) statements2241));
                        $tmp2271 = $tmp2275;
                        $tmp2270 = $tmp2271;
                        Iter$550$172269 = $tmp2270;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2270));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2271));
                        $l2276:;
                        ITable* $tmp2279 = Iter$550$172269->$class->itable;
                        while ($tmp2279->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2279 = $tmp2279->next;
                        }
                        $fn2281 $tmp2280 = $tmp2279->methods[0];
                        panda$core$Bit $tmp2282 = $tmp2280(Iter$550$172269);
                        panda$core$Bit $tmp2283 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2282);
                        bool $tmp2278 = $tmp2283.value;
                        if (!$tmp2278) goto $l2277;
                        {
                            int $tmp2286;
                            {
                                ITable* $tmp2290 = Iter$550$172269->$class->itable;
                                while ($tmp2290->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2290 = $tmp2290->next;
                                }
                                $fn2292 $tmp2291 = $tmp2290->methods[1];
                                panda$core$Object* $tmp2293 = $tmp2291(Iter$550$172269);
                                $tmp2289 = $tmp2293;
                                $tmp2288 = ((org$pandalanguage$pandac$IRNode*) $tmp2289);
                                s2287 = $tmp2288;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2288));
                                panda$core$Panda$unref$panda$core$Object($tmp2289);
                                panda$core$String* $tmp2296 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2287), &$s2295);
                                $tmp2294 = $tmp2296;
                                panda$core$MutableString$append$panda$core$String(result2246, $tmp2294);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2294));
                            }
                            $tmp2286 = -1;
                            goto $l2284;
                            $l2284:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2287));
                            s2287 = NULL;
                            switch ($tmp2286) {
                                case -1: goto $l2297;
                            }
                            $l2297:;
                        }
                        goto $l2276;
                        $l2277:;
                    }
                    $tmp2268 = -1;
                    goto $l2266;
                    $l2266:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$550$172269));
                    Iter$550$172269 = NULL;
                    switch ($tmp2268) {
                        case -1: goto $l2298;
                    }
                    $l2298:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2299, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2246, $tmp2299);
                panda$core$String* $tmp2303 = panda$core$MutableString$finish$R$panda$core$String(result2246);
                $tmp2302 = $tmp2303;
                $tmp2301 = $tmp2302;
                $finallyReturn2299 = $tmp2301;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2301));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2302));
                $tmp2245 = 0;
                goto $l2243;
                $l2304:;
                $tmp1389 = 33;
                goto $l1387;
                $l2305:;
                return $finallyReturn2299;
            }
            $l2243:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2246));
            result2246 = NULL;
            switch ($tmp2245) {
                case 0: goto $l2304;
            }
            $l2307:;
        }
        }
        else {
        panda$core$Bit $tmp2308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp2308.value) {
        {
            panda$core$Real64* $tmp2310 = ((panda$core$Real64*) ((char*) $match$415_91390->$data + 24));
            value2309 = *$tmp2310;
            panda$core$String* $tmp2314 = panda$core$Real64$convert$R$panda$core$String(value2309);
            $tmp2313 = $tmp2314;
            $tmp2312 = $tmp2313;
            $finallyReturn2310 = $tmp2312;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2312));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2313));
            $tmp1389 = 34;
            goto $l1387;
            $l2315:;
            return $finallyReturn2310;
        }
        }
        else {
        panda$core$Bit $tmp2317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2317.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2319 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 16));
            value2318 = *$tmp2319;
            if (((panda$core$Bit) { value2318 != NULL }).value) {
            {
                panda$core$String* $tmp2325 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2324, ((panda$core$Object*) value2318));
                $tmp2323 = $tmp2325;
                panda$core$String* $tmp2327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2323, &$s2326);
                $tmp2322 = $tmp2327;
                $tmp2321 = $tmp2322;
                $finallyReturn2319 = $tmp2321;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2321));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2322));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2323));
                $tmp1389 = 35;
                goto $l1387;
                $l2328:;
                return $finallyReturn2319;
            }
            }
            $tmp2331 = &$s2332;
            $finallyReturn2329 = $tmp2331;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2331));
            $tmp1389 = 36;
            goto $l1387;
            $l2333:;
            return $finallyReturn2329;
        }
        }
        else {
        panda$core$Bit $tmp2335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2335.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2337 = ((org$pandalanguage$pandac$Type**) ((char*) $match$415_91390->$data + 16));
            type2336 = *$tmp2337;
            panda$core$Int64* $tmp2339 = ((panda$core$Int64*) ((char*) $match$415_91390->$data + 24));
            id2338 = *$tmp2339;
            panda$core$Int64$wrapper* $tmp2346;
            $tmp2346 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2346->value = id2338;
            $tmp2345 = ((panda$core$Object*) $tmp2346);
            panda$core$String* $tmp2347 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2344, $tmp2345);
            $tmp2343 = $tmp2347;
            panda$core$String* $tmp2349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2343, &$s2348);
            $tmp2342 = $tmp2349;
            $tmp2341 = $tmp2342;
            $finallyReturn2339 = $tmp2341;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2341));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2342));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2343));
            panda$core$Panda$unref$panda$core$Object($tmp2345);
            $tmp1389 = 37;
            goto $l1387;
            $l2350:;
            return $finallyReturn2339;
        }
        }
        else {
        panda$core$Bit $tmp2352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2352.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2354 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 0));
            base2353 = *$tmp2354;
            panda$core$Int64* $tmp2356 = ((panda$core$Int64*) ((char*) $match$415_91390->$data + 8));
            id2355 = *$tmp2356;
            panda$core$Int64$wrapper* $tmp2365;
            $tmp2365 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2365->value = id2355;
            $tmp2364 = ((panda$core$Object*) $tmp2365);
            panda$core$String* $tmp2366 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2363, $tmp2364);
            $tmp2362 = $tmp2366;
            panda$core$String* $tmp2368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2362, &$s2367);
            $tmp2361 = $tmp2368;
            panda$core$String* $tmp2369 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2361, ((panda$core$Object*) base2353));
            $tmp2360 = $tmp2369;
            panda$core$String* $tmp2371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2360, &$s2370);
            $tmp2359 = $tmp2371;
            $tmp2358 = $tmp2359;
            $finallyReturn2356 = $tmp2358;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2358));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2359));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2360));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2361));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2362));
            panda$core$Panda$unref$panda$core$Object($tmp2364);
            $tmp1389 = 38;
            goto $l1387;
            $l2372:;
            return $finallyReturn2356;
        }
        }
        else {
        panda$core$Bit $tmp2374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2374.value) {
        {
            $tmp2376 = &$s2377;
            $finallyReturn2374 = $tmp2376;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2376));
            $tmp1389 = 39;
            goto $l1387;
            $l2378:;
            return $finallyReturn2374;
        }
        }
        else {
        panda$core$Bit $tmp2380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp2380.value) {
        {
            panda$core$String** $tmp2382 = ((panda$core$String**) ((char*) $match$415_91390->$data + 16));
            str2381 = *$tmp2382;
            $tmp2384 = str2381;
            $finallyReturn2382 = $tmp2384;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2384));
            $tmp1389 = 40;
            goto $l1387;
            $l2385:;
            return $finallyReturn2382;
        }
        }
        else {
        panda$core$Bit $tmp2387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp2387.value) {
        {
            $tmp2389 = &$s2390;
            $finallyReturn2387 = $tmp2389;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2389));
            $tmp1389 = 41;
            goto $l1387;
            $l2391:;
            return $finallyReturn2387;
        }
        }
        else {
        panda$core$Bit $tmp2393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2393.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2395 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 16));
            test2394 = *$tmp2395;
            org$pandalanguage$pandac$IRNode** $tmp2397 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 24));
            ifTrue2396 = *$tmp2397;
            org$pandalanguage$pandac$IRNode** $tmp2399 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 32));
            ifFalse2398 = *$tmp2399;
            panda$core$String* $tmp2409 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2408, ((panda$core$Object*) test2394));
            $tmp2407 = $tmp2409;
            panda$core$String* $tmp2411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2407, &$s2410);
            $tmp2406 = $tmp2411;
            panda$core$String* $tmp2412 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2406, ((panda$core$Object*) ifTrue2396));
            $tmp2405 = $tmp2412;
            panda$core$String* $tmp2414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2405, &$s2413);
            $tmp2404 = $tmp2414;
            panda$core$String* $tmp2415 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2404, ((panda$core$Object*) ifFalse2398));
            $tmp2403 = $tmp2415;
            panda$core$String* $tmp2417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2403, &$s2416);
            $tmp2402 = $tmp2417;
            $tmp2401 = $tmp2402;
            $finallyReturn2399 = $tmp2401;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2401));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2402));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2403));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2404));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2405));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2406));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2407));
            $tmp1389 = 42;
            goto $l1387;
            $l2418:;
            return $finallyReturn2399;
        }
        }
        else {
        panda$core$Bit $tmp2420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp2420.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2422 = ((org$pandalanguage$pandac$Type**) ((char*) $match$415_91390->$data + 16));
            type2421 = *$tmp2422;
            panda$core$String* $tmp2426 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type2421);
            $tmp2425 = $tmp2426;
            $tmp2424 = $tmp2425;
            $finallyReturn2422 = $tmp2424;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2424));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2425));
            $tmp1389 = 43;
            goto $l1387;
            $l2427:;
            return $finallyReturn2422;
        }
        }
        else {
        panda$core$Bit $tmp2429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp2429.value) {
        {
            panda$core$String** $tmp2431 = ((panda$core$String**) ((char*) $match$415_91390->$data + 16));
            name2430 = *$tmp2431;
            $tmp2433 = name2430;
            $finallyReturn2431 = $tmp2433;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2433));
            $tmp1389 = 44;
            goto $l1387;
            $l2434:;
            return $finallyReturn2431;
        }
        }
        else {
        panda$core$Bit $tmp2436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp2436.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2438 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 24));
            base2437 = *$tmp2438;
            panda$collections$ImmutableArray** $tmp2440 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91390->$data + 32));
            args2439 = *$tmp2440;
            panda$core$String* $tmp2448 = (($fn2447) base2437->$class->vtable[0])(base2437);
            $tmp2446 = $tmp2448;
            panda$core$String* $tmp2450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2446, &$s2449);
            $tmp2445 = $tmp2450;
            panda$core$String* $tmp2452 = panda$collections$ImmutableArray$join$R$panda$core$String(args2439);
            $tmp2451 = $tmp2452;
            panda$core$String* $tmp2453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2445, $tmp2451);
            $tmp2444 = $tmp2453;
            panda$core$String* $tmp2455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2444, &$s2454);
            $tmp2443 = $tmp2455;
            $tmp2442 = $tmp2443;
            $finallyReturn2440 = $tmp2442;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2442));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2443));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2444));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2451));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2445));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2446));
            $tmp1389 = 45;
            goto $l1387;
            $l2456:;
            return $finallyReturn2440;
        }
        }
        else {
        panda$core$Bit $tmp2458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp2458.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2460 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 24));
            target2459 = *$tmp2460;
            panda$collections$ImmutableArray** $tmp2462 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91390->$data + 32));
            methods2461 = *$tmp2462;
            panda$collections$ImmutableArray** $tmp2464 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91390->$data + 40));
            args2463 = *$tmp2464;
            panda$core$String* $tmp2474 = (($fn2473) target2459->$class->vtable[0])(target2459);
            $tmp2472 = $tmp2474;
            panda$core$String* $tmp2476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2472, &$s2475);
            $tmp2471 = $tmp2476;
            panda$core$Object* $tmp2478 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2461, ((panda$core$Int64) { 0 }));
            $tmp2477 = $tmp2478;
            panda$core$String* $tmp2479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2471, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2477)->value)->name);
            $tmp2470 = $tmp2479;
            panda$core$String* $tmp2481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2470, &$s2480);
            $tmp2469 = $tmp2481;
            panda$core$String* $tmp2483 = panda$collections$ImmutableArray$join$R$panda$core$String(args2463);
            $tmp2482 = $tmp2483;
            panda$core$String* $tmp2484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2469, $tmp2482);
            $tmp2468 = $tmp2484;
            panda$core$String* $tmp2486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2468, &$s2485);
            $tmp2467 = $tmp2486;
            $tmp2466 = $tmp2467;
            $finallyReturn2464 = $tmp2466;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2466));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2467));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2468));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2482));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2469));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2470));
            panda$core$Panda$unref$panda$core$Object($tmp2477);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2471));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2472));
            $tmp1389 = 46;
            goto $l1387;
            $l2487:;
            return $finallyReturn2464;
        }
        }
        else {
        panda$core$Bit $tmp2489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp2489.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2491 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 16));
            target2490 = *$tmp2491;
            panda$collections$ImmutableArray** $tmp2493 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91390->$data + 24));
            methods2492 = *$tmp2493;
            panda$core$String* $tmp2501 = (($fn2500) target2490->$class->vtable[0])(target2490);
            $tmp2499 = $tmp2501;
            panda$core$String* $tmp2503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2499, &$s2502);
            $tmp2498 = $tmp2503;
            panda$core$Object* $tmp2505 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2492, ((panda$core$Int64) { 0 }));
            $tmp2504 = $tmp2505;
            panda$core$String* $tmp2506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2498, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2504)->value)->name);
            $tmp2497 = $tmp2506;
            panda$core$String* $tmp2508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2497, &$s2507);
            $tmp2496 = $tmp2508;
            $tmp2495 = $tmp2496;
            $finallyReturn2493 = $tmp2495;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2495));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2496));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2497));
            panda$core$Panda$unref$panda$core$Object($tmp2504);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2498));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2499));
            $tmp1389 = 47;
            goto $l1387;
            $l2509:;
            return $finallyReturn2493;
        }
        }
        else {
        panda$core$Bit $tmp2511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp2511.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2513 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 16));
            start2512 = *$tmp2513;
            org$pandalanguage$pandac$IRNode** $tmp2515 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 24));
            end2514 = *$tmp2515;
            panda$core$Bit* $tmp2517 = ((panda$core$Bit*) ((char*) $match$415_91390->$data + 32));
            inclusive2516 = *$tmp2517;
            org$pandalanguage$pandac$IRNode** $tmp2519 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 33));
            step2518 = *$tmp2519;
            int $tmp2522;
            {
                panda$core$MutableString* $tmp2526 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2526);
                $tmp2525 = $tmp2526;
                $tmp2524 = $tmp2525;
                result2523 = $tmp2524;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2524));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2525));
                if (((panda$core$Bit) { start2512 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2523, ((panda$core$Object*) start2512));
                }
                }
                if (inclusive2516.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2523, &$s2527);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result2523, &$s2528);
                }
                }
                if (((panda$core$Bit) { end2514 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2523, ((panda$core$Object*) end2514));
                }
                }
                if (((panda$core$Bit) { step2518 != NULL }).value) {
                {
                    panda$core$String* $tmp2532 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2531, ((panda$core$Object*) step2518));
                    $tmp2530 = $tmp2532;
                    panda$core$String* $tmp2534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2530, &$s2533);
                    $tmp2529 = $tmp2534;
                    panda$core$MutableString$append$panda$core$String(result2523, $tmp2529);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2529));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2530));
                }
                }
                panda$core$String* $tmp2538 = panda$core$MutableString$finish$R$panda$core$String(result2523);
                $tmp2537 = $tmp2538;
                $tmp2536 = $tmp2537;
                $finallyReturn2534 = $tmp2536;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2536));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2537));
                $tmp2522 = 0;
                goto $l2520;
                $l2539:;
                $tmp1389 = 48;
                goto $l1387;
                $l2540:;
                return $finallyReturn2534;
            }
            $l2520:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2523));
            result2523 = NULL;
            switch ($tmp2522) {
                case 0: goto $l2539;
            }
            $l2542:;
        }
        }
        else {
        panda$core$Bit $tmp2543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2543.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp2545 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$415_91390->$data + 16));
            kind2544 = *$tmp2545;
            panda$collections$ImmutableArray** $tmp2547 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91390->$data + 24));
            decls2546 = *$tmp2547;
            int $tmp2550;
            {
                panda$core$MutableString* $tmp2554 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2554);
                $tmp2553 = $tmp2554;
                $tmp2552 = $tmp2553;
                result2551 = $tmp2552;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2552));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2553));
                {
                    $match$604_172555 = kind2544;
                    panda$core$Bit $tmp2556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$604_172555.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp2556.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2551, &$s2557);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$604_172555.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp2558.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2551, &$s2559);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$604_172555.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp2560.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2551, &$s2561);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$604_172555.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp2562.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2551, &$s2563);
                    }
                    }
                    }
                    }
                    }
                }
                panda$core$String* $tmp2565 = panda$collections$ImmutableArray$join$R$panda$core$String(decls2546);
                $tmp2564 = $tmp2565;
                panda$core$MutableString$append$panda$core$String(result2551, $tmp2564);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2564));
                panda$core$String* $tmp2569 = panda$core$MutableString$finish$R$panda$core$String(result2551);
                $tmp2568 = $tmp2569;
                $tmp2567 = $tmp2568;
                $finallyReturn2565 = $tmp2567;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2567));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2568));
                $tmp2550 = 0;
                goto $l2548;
                $l2570:;
                $tmp1389 = 49;
                goto $l1387;
                $l2571:;
                return $finallyReturn2565;
            }
            $l2548:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2551));
            result2551 = NULL;
            switch ($tmp2550) {
                case 0: goto $l2570;
            }
            $l2573:;
        }
        }
        else {
        panda$core$Bit $tmp2574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp2574.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2576 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$415_91390->$data + 16));
            variable2575 = *$tmp2576;
            $tmp2578 = ((org$pandalanguage$pandac$Symbol*) variable2575)->name;
            $finallyReturn2576 = $tmp2578;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2578));
            $tmp1389 = 50;
            goto $l1387;
            $l2579:;
            return $finallyReturn2576;
        }
        }
        else {
        panda$core$Bit $tmp2581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp2581.value) {
        {
            panda$collections$ImmutableArray** $tmp2583 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91390->$data + 16));
            tests2582 = *$tmp2583;
            panda$collections$ImmutableArray** $tmp2585 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91390->$data + 24));
            statements2584 = *$tmp2585;
            panda$core$String* $tmp2594 = panda$collections$ImmutableArray$join$R$panda$core$String(tests2582);
            $tmp2593 = $tmp2594;
            panda$core$String* $tmp2595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2592, $tmp2593);
            $tmp2591 = $tmp2595;
            panda$core$String* $tmp2597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2591, &$s2596);
            $tmp2590 = $tmp2597;
            panda$core$String* $tmp2600 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(statements2584, &$s2599);
            $tmp2598 = $tmp2600;
            panda$core$String* $tmp2601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2590, $tmp2598);
            $tmp2589 = $tmp2601;
            panda$core$String* $tmp2603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2589, &$s2602);
            $tmp2588 = $tmp2603;
            $tmp2587 = $tmp2588;
            $finallyReturn2585 = $tmp2587;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2587));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2588));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2589));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2598));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2590));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2591));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2593));
            $tmp1389 = 51;
            goto $l1387;
            $l2604:;
            return $finallyReturn2585;
        }
        }
        else {
        panda$core$Bit $tmp2606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91390->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp2606.value) {
        {
            panda$core$String** $tmp2608 = ((panda$core$String**) ((char*) $match$415_91390->$data + 16));
            label2607 = *$tmp2608;
            org$pandalanguage$pandac$IRNode** $tmp2610 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91390->$data + 24));
            test2609 = *$tmp2610;
            panda$collections$ImmutableArray** $tmp2612 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91390->$data + 32));
            statements2611 = *$tmp2612;
            int $tmp2615;
            {
                panda$core$MutableString* $tmp2619 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2619);
                $tmp2618 = $tmp2619;
                $tmp2617 = $tmp2618;
                result2616 = $tmp2617;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2617));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2618));
                if (((panda$core$Bit) { label2607 != NULL }).value) {
                {
                    panda$core$String* $tmp2622 = panda$core$String$convert$R$panda$core$String(label2607);
                    $tmp2621 = $tmp2622;
                    panda$core$String* $tmp2624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2621, &$s2623);
                    $tmp2620 = $tmp2624;
                    panda$core$MutableString$append$panda$core$String(result2616, $tmp2620);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2620));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2621));
                }
                }
                panda$core$String* $tmp2628 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2627, ((panda$core$Object*) test2609));
                $tmp2626 = $tmp2628;
                panda$core$String* $tmp2630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2626, &$s2629);
                $tmp2625 = $tmp2630;
                panda$core$MutableString$append$panda$core$String(result2616, $tmp2625);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2625));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2626));
                {
                    int $tmp2633;
                    {
                        ITable* $tmp2637 = ((panda$collections$Iterable*) statements2611)->$class->itable;
                        while ($tmp2637->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2637 = $tmp2637->next;
                        }
                        $fn2639 $tmp2638 = $tmp2637->methods[0];
                        panda$collections$Iterator* $tmp2640 = $tmp2638(((panda$collections$Iterable*) statements2611));
                        $tmp2636 = $tmp2640;
                        $tmp2635 = $tmp2636;
                        Iter$622$172634 = $tmp2635;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2635));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2636));
                        $l2641:;
                        ITable* $tmp2644 = Iter$622$172634->$class->itable;
                        while ($tmp2644->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2644 = $tmp2644->next;
                        }
                        $fn2646 $tmp2645 = $tmp2644->methods[0];
                        panda$core$Bit $tmp2647 = $tmp2645(Iter$622$172634);
                        panda$core$Bit $tmp2648 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2647);
                        bool $tmp2643 = $tmp2648.value;
                        if (!$tmp2643) goto $l2642;
                        {
                            int $tmp2651;
                            {
                                ITable* $tmp2655 = Iter$622$172634->$class->itable;
                                while ($tmp2655->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2655 = $tmp2655->next;
                                }
                                $fn2657 $tmp2656 = $tmp2655->methods[1];
                                panda$core$Object* $tmp2658 = $tmp2656(Iter$622$172634);
                                $tmp2654 = $tmp2658;
                                $tmp2653 = ((org$pandalanguage$pandac$IRNode*) $tmp2654);
                                s2652 = $tmp2653;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2653));
                                panda$core$Panda$unref$panda$core$Object($tmp2654);
                                panda$core$String* $tmp2661 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2652), &$s2660);
                                $tmp2659 = $tmp2661;
                                panda$core$MutableString$append$panda$core$String(result2616, $tmp2659);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2659));
                            }
                            $tmp2651 = -1;
                            goto $l2649;
                            $l2649:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2652));
                            s2652 = NULL;
                            switch ($tmp2651) {
                                case -1: goto $l2662;
                            }
                            $l2662:;
                        }
                        goto $l2641;
                        $l2642:;
                    }
                    $tmp2633 = -1;
                    goto $l2631;
                    $l2631:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$622$172634));
                    Iter$622$172634 = NULL;
                    switch ($tmp2633) {
                        case -1: goto $l2663;
                    }
                    $l2663:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2664, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2616, $tmp2664);
                panda$core$String* $tmp2668 = panda$core$MutableString$finish$R$panda$core$String(result2616);
                $tmp2667 = $tmp2668;
                $tmp2666 = $tmp2667;
                $finallyReturn2664 = $tmp2666;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2666));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2667));
                $tmp2615 = 0;
                goto $l2613;
                $l2669:;
                $tmp1389 = 52;
                goto $l1387;
                $l2670:;
                return $finallyReturn2664;
            }
            $l2613:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2616));
            result2616 = NULL;
            switch ($tmp2615) {
                case 0: goto $l2669;
            }
            $l2672:;
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
    $tmp1389 = -1;
    goto $l1387;
    $l1387:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1391));
    switch ($tmp1389) {
        case 39: goto $l2378;
        case 26: goto $l2071;
        case 18: goto $l1802;
        case 44: goto $l2434;
        case 36: goto $l2333;
        case 37: goto $l2350;
        case 40: goto $l2385;
        case 46: goto $l2487;
        case 32: goto $l2232;
        case 41: goto $l2391;
        case 8: goto $l1639;
        case 35: goto $l2328;
        case 7: goto $l1618;
        case 10: goto $l1680;
        case -1: goto $l2673;
        case 0: goto $l1410;
        case 29: goto $l2192;
        case 43: goto $l2427;
        case 15: goto $l1770;
        case 16: goto $l1775;
        case 33: goto $l2305;
        case 34: goto $l2315;
        case 20: goto $l1889;
        case 17: goto $l1795;
        case 11: goto $l1689;
        case 30: goto $l2204;
        case 47: goto $l2509;
        case 48: goto $l2540;
        case 1: goto $l1420;
        case 12: goto $l1718;
        case 6: goto $l1613;
        case 25: goto $l2012;
        case 14: goto $l1757;
        case 38: goto $l2372;
        case 2: goto $l1449;
        case 21: goto $l1909;
        case 13: goto $l1748;
        case 24: goto $l1999;
        case 52: goto $l2670;
        case 9: goto $l1665;
        case 22: goto $l1976;
        case 4: goto $l1510;
        case 45: goto $l2456;
        case 19: goto $l1868;
        case 3: goto $l1458;
        case 27: goto $l2167;
        case 28: goto $l2188;
        case 31: goto $l2210;
        case 5: goto $l1599;
        case 42: goto $l2418;
        case 51: goto $l2604;
        case 49: goto $l2571;
        case 50: goto $l2579;
        case 23: goto $l1986;
    }
    $l2673:;
}
void org$pandalanguage$pandac$IRNode$cleanup(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$5_12680 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2681;
    org$pandalanguage$pandac$Position _f02683;
    org$pandalanguage$pandac$IRNode* _f12685 = NULL;
    org$pandalanguage$pandac$IRNode* _f22687 = NULL;
    org$pandalanguage$pandac$Position _f02690;
    org$pandalanguage$pandac$Type* _f12692 = NULL;
    org$pandalanguage$pandac$IRNode* _f22694 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f32696;
    org$pandalanguage$pandac$IRNode* _f42698 = NULL;
    org$pandalanguage$pandac$Position _f02701;
    org$pandalanguage$pandac$Type* _f12703 = NULL;
    panda$core$Bit _f22705;
    org$pandalanguage$pandac$Position _f02708;
    panda$collections$ImmutableArray* _f12710 = NULL;
    org$pandalanguage$pandac$Position _f02713;
    panda$collections$ImmutableArray* _f12715 = NULL;
    panda$collections$ImmutableArray* _f22717 = NULL;
    org$pandalanguage$pandac$Position _f02720;
    panda$core$String* _f12722 = NULL;
    org$pandalanguage$pandac$Position _f02725;
    org$pandalanguage$pandac$Type* _f12727 = NULL;
    org$pandalanguage$pandac$MethodRef* _f22729 = NULL;
    panda$collections$ImmutableArray* _f32731 = NULL;
    org$pandalanguage$pandac$Position _f02734;
    org$pandalanguage$pandac$IRNode* _f12736 = NULL;
    org$pandalanguage$pandac$Type* _f22738 = NULL;
    panda$core$Bit _f32740;
    org$pandalanguage$pandac$Position _f02743;
    org$pandalanguage$pandac$ChoiceEntry* _f12745 = NULL;
    org$pandalanguage$pandac$Position _f02748;
    org$pandalanguage$pandac$IRNode* _f12750 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f22752 = NULL;
    panda$core$Int64 _f32754;
    org$pandalanguage$pandac$Position _f02757;
    org$pandalanguage$pandac$Type* _f12759 = NULL;
    org$pandalanguage$pandac$IRNode* _f22761 = NULL;
    org$pandalanguage$pandac$Position _f02764;
    org$pandalanguage$pandac$Type* _f12766 = NULL;
    org$pandalanguage$pandac$Position _f02769;
    panda$core$String* _f12771 = NULL;
    org$pandalanguage$pandac$IRNode* _f02774 = NULL;
    org$pandalanguage$pandac$IRNode* _f12776 = NULL;
    org$pandalanguage$pandac$Position _f02779;
    panda$core$String* _f12781 = NULL;
    panda$collections$ImmutableArray* _f22783 = NULL;
    org$pandalanguage$pandac$IRNode* _f32785 = NULL;
    org$pandalanguage$pandac$IRNode* _f02788 = NULL;
    org$pandalanguage$pandac$IRNode* _f12790 = NULL;
    org$pandalanguage$pandac$Position _f02793;
    org$pandalanguage$pandac$Type* _f12795 = NULL;
    org$pandalanguage$pandac$IRNode* _f22797 = NULL;
    org$pandalanguage$pandac$FieldDecl* _f32799 = NULL;
    org$pandalanguage$pandac$Position _f02802;
    org$pandalanguage$pandac$IRNode* _f12804 = NULL;
    panda$collections$ImmutableArray* _f22806 = NULL;
    org$pandalanguage$pandac$IRNode* _f32808 = NULL;
    org$pandalanguage$pandac$Position _f02811;
    org$pandalanguage$pandac$Type* _f12813 = NULL;
    panda$core$UInt64 _f22815;
    org$pandalanguage$pandac$Position _f02818;
    org$pandalanguage$pandac$IRNode* _f12820 = NULL;
    org$pandalanguage$pandac$Position _f02823;
    org$pandalanguage$pandac$IRNode* _f12825 = NULL;
    org$pandalanguage$pandac$Position _f02828;
    panda$core$String* _f12830 = NULL;
    panda$collections$ImmutableArray* _f22832 = NULL;
    org$pandalanguage$pandac$Position _f02835;
    org$pandalanguage$pandac$IRNode* _f12837 = NULL;
    panda$collections$ImmutableArray* _f22839 = NULL;
    panda$collections$ImmutableArray* _f32841 = NULL;
    org$pandalanguage$pandac$Position _f02844;
    org$pandalanguage$pandac$IRNode* _f12846 = NULL;
    org$pandalanguage$pandac$MethodRef* _f22848 = NULL;
    org$pandalanguage$pandac$Position _f02851;
    org$pandalanguage$pandac$Type* _f12853 = NULL;
    panda$core$UInt64 _f22855;
    org$pandalanguage$pandac$Position _f02858;
    org$pandalanguage$pandac$Type* _f12860 = NULL;
    org$pandalanguage$pandac$Position _f02863;
    org$pandalanguage$pandac$parser$Token$Kind _f12865;
    org$pandalanguage$pandac$IRNode* _f22867 = NULL;
    org$pandalanguage$pandac$Position _f02870;
    panda$core$String* _f12872 = NULL;
    org$pandalanguage$pandac$IRNode* _f22874 = NULL;
    org$pandalanguage$pandac$IRNode* _f32876 = NULL;
    panda$collections$ImmutableArray* _f42878 = NULL;
    org$pandalanguage$pandac$Position _f02881;
    org$pandalanguage$pandac$Type* _f12883 = NULL;
    panda$core$Real64 _f22885;
    org$pandalanguage$pandac$Position _f02888;
    org$pandalanguage$pandac$IRNode* _f12890 = NULL;
    org$pandalanguage$pandac$Position _f02893;
    org$pandalanguage$pandac$Type* _f12895 = NULL;
    panda$core$Int64 _f22897;
    org$pandalanguage$pandac$IRNode* _f02900 = NULL;
    panda$core$Int64 _f12902;
    org$pandalanguage$pandac$Position _f02905;
    org$pandalanguage$pandac$Type* _f12907 = NULL;
    org$pandalanguage$pandac$Position _f02910;
    panda$core$String* _f12912 = NULL;
    org$pandalanguage$pandac$Position _f02915;
    org$pandalanguage$pandac$Type* _f12917 = NULL;
    org$pandalanguage$pandac$Position _f02920;
    org$pandalanguage$pandac$IRNode* _f12922 = NULL;
    org$pandalanguage$pandac$IRNode* _f22924 = NULL;
    org$pandalanguage$pandac$IRNode* _f32926 = NULL;
    org$pandalanguage$pandac$Position _f02929;
    org$pandalanguage$pandac$Type* _f12931 = NULL;
    org$pandalanguage$pandac$Position _f02934;
    panda$core$String* _f12936 = NULL;
    org$pandalanguage$pandac$Position _f02939;
    org$pandalanguage$pandac$Type* _f12941 = NULL;
    org$pandalanguage$pandac$IRNode* _f22943 = NULL;
    panda$collections$ImmutableArray* _f32945 = NULL;
    org$pandalanguage$pandac$Position _f02948;
    org$pandalanguage$pandac$Type* _f12950 = NULL;
    org$pandalanguage$pandac$IRNode* _f22952 = NULL;
    panda$collections$ImmutableArray* _f32954 = NULL;
    panda$collections$ImmutableArray* _f42956 = NULL;
    org$pandalanguage$pandac$Position _f02959;
    org$pandalanguage$pandac$IRNode* _f12961 = NULL;
    panda$collections$ImmutableArray* _f22963 = NULL;
    org$pandalanguage$pandac$Position _f02966;
    org$pandalanguage$pandac$IRNode* _f12968 = NULL;
    org$pandalanguage$pandac$IRNode* _f22970 = NULL;
    panda$core$Bit _f32972;
    org$pandalanguage$pandac$IRNode* _f42974 = NULL;
    org$pandalanguage$pandac$Position _f02977;
    org$pandalanguage$pandac$Variable$Kind _f12979;
    panda$collections$ImmutableArray* _f22981 = NULL;
    org$pandalanguage$pandac$Position _f02984;
    org$pandalanguage$pandac$Variable* _f12986 = NULL;
    org$pandalanguage$pandac$Position _f02989;
    panda$collections$ImmutableArray* _f12991 = NULL;
    panda$collections$ImmutableArray* _f22993 = NULL;
    org$pandalanguage$pandac$Position _f02996;
    panda$core$String* _f12998 = NULL;
    org$pandalanguage$pandac$IRNode* _f23000 = NULL;
    panda$collections$ImmutableArray* _f33002 = NULL;
    int $tmp2676;
    {
        int $tmp2679;
        {
            $tmp2681 = self;
            $match$5_12680 = $tmp2681;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2681));
            panda$core$Bit $tmp2682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp2682.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2684 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02683 = *$tmp2684;
                org$pandalanguage$pandac$IRNode** $tmp2686 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 16));
                _f12685 = *$tmp2686;
                org$pandalanguage$pandac$IRNode** $tmp2688 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 24));
                _f22687 = *$tmp2688;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12685));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22687));
            }
            }
            else {
            panda$core$Bit $tmp2689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp2689.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2691 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02690 = *$tmp2691;
                org$pandalanguage$pandac$Type** $tmp2693 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12680->$data + 16));
                _f12692 = *$tmp2693;
                org$pandalanguage$pandac$IRNode** $tmp2695 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 24));
                _f22694 = *$tmp2695;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2697 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12680->$data + 32));
                _f32696 = *$tmp2697;
                org$pandalanguage$pandac$IRNode** $tmp2699 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 40));
                _f42698 = *$tmp2699;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12692));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22694));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42698));
            }
            }
            else {
            panda$core$Bit $tmp2700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp2700.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2702 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02701 = *$tmp2702;
                org$pandalanguage$pandac$Type** $tmp2704 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12680->$data + 16));
                _f12703 = *$tmp2704;
                panda$core$Bit* $tmp2706 = ((panda$core$Bit*) ((char*) $match$5_12680->$data + 24));
                _f22705 = *$tmp2706;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12703));
            }
            }
            else {
            panda$core$Bit $tmp2707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp2707.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2709 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02708 = *$tmp2709;
                panda$collections$ImmutableArray** $tmp2711 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12680->$data + 16));
                _f12710 = *$tmp2711;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12710));
            }
            }
            else {
            panda$core$Bit $tmp2712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp2712.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2714 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02713 = *$tmp2714;
                panda$collections$ImmutableArray** $tmp2716 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12680->$data + 16));
                _f12715 = *$tmp2716;
                panda$collections$ImmutableArray** $tmp2718 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12680->$data + 24));
                _f22717 = *$tmp2718;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12715));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22717));
            }
            }
            else {
            panda$core$Bit $tmp2719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp2719.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2721 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02720 = *$tmp2721;
                panda$core$String** $tmp2723 = ((panda$core$String**) ((char*) $match$5_12680->$data + 16));
                _f12722 = *$tmp2723;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12722));
            }
            }
            else {
            panda$core$Bit $tmp2724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp2724.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2726 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02725 = *$tmp2726;
                org$pandalanguage$pandac$Type** $tmp2728 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12680->$data + 16));
                _f12727 = *$tmp2728;
                org$pandalanguage$pandac$MethodRef** $tmp2730 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12680->$data + 24));
                _f22729 = *$tmp2730;
                panda$collections$ImmutableArray** $tmp2732 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12680->$data + 32));
                _f32731 = *$tmp2732;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12727));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22729));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32731));
            }
            }
            else {
            panda$core$Bit $tmp2733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 7 }));
            if ($tmp2733.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2735 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02734 = *$tmp2735;
                org$pandalanguage$pandac$IRNode** $tmp2737 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 16));
                _f12736 = *$tmp2737;
                org$pandalanguage$pandac$Type** $tmp2739 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12680->$data + 24));
                _f22738 = *$tmp2739;
                panda$core$Bit* $tmp2741 = ((panda$core$Bit*) ((char*) $match$5_12680->$data + 32));
                _f32740 = *$tmp2741;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12736));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22738));
            }
            }
            else {
            panda$core$Bit $tmp2742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp2742.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2744 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02743 = *$tmp2744;
                org$pandalanguage$pandac$ChoiceEntry** $tmp2746 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12680->$data + 16));
                _f12745 = *$tmp2746;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12745));
            }
            }
            else {
            panda$core$Bit $tmp2747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp2747.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2749 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02748 = *$tmp2749;
                org$pandalanguage$pandac$IRNode** $tmp2751 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 16));
                _f12750 = *$tmp2751;
                org$pandalanguage$pandac$ChoiceEntry** $tmp2753 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12680->$data + 24));
                _f22752 = *$tmp2753;
                panda$core$Int64* $tmp2755 = ((panda$core$Int64*) ((char*) $match$5_12680->$data + 32));
                _f32754 = *$tmp2755;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12750));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22752));
            }
            }
            else {
            panda$core$Bit $tmp2756 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 10 }));
            if ($tmp2756.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2758 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02757 = *$tmp2758;
                org$pandalanguage$pandac$Type** $tmp2760 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12680->$data + 16));
                _f12759 = *$tmp2760;
                org$pandalanguage$pandac$IRNode** $tmp2762 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 24));
                _f22761 = *$tmp2762;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12759));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22761));
            }
            }
            else {
            panda$core$Bit $tmp2763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp2763.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2765 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02764 = *$tmp2765;
                org$pandalanguage$pandac$Type** $tmp2767 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12680->$data + 16));
                _f12766 = *$tmp2767;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12766));
            }
            }
            else {
            panda$core$Bit $tmp2768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp2768.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2770 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02769 = *$tmp2770;
                panda$core$String** $tmp2772 = ((panda$core$String**) ((char*) $match$5_12680->$data + 16));
                _f12771 = *$tmp2772;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12771));
            }
            }
            else {
            panda$core$Bit $tmp2773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp2773.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2775 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 0));
                _f02774 = *$tmp2775;
                org$pandalanguage$pandac$IRNode** $tmp2777 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 8));
                _f12776 = *$tmp2777;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02774));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12776));
            }
            }
            else {
            panda$core$Bit $tmp2778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp2778.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2780 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02779 = *$tmp2780;
                panda$core$String** $tmp2782 = ((panda$core$String**) ((char*) $match$5_12680->$data + 16));
                _f12781 = *$tmp2782;
                panda$collections$ImmutableArray** $tmp2784 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12680->$data + 24));
                _f22783 = *$tmp2784;
                org$pandalanguage$pandac$IRNode** $tmp2786 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 32));
                _f32785 = *$tmp2786;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12781));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22783));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32785));
            }
            }
            else {
            panda$core$Bit $tmp2787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp2787.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2789 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 0));
                _f02788 = *$tmp2789;
                org$pandalanguage$pandac$IRNode** $tmp2791 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 8));
                _f12790 = *$tmp2791;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02788));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12790));
            }
            }
            else {
            panda$core$Bit $tmp2792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 16 }));
            if ($tmp2792.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2794 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02793 = *$tmp2794;
                org$pandalanguage$pandac$Type** $tmp2796 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12680->$data + 16));
                _f12795 = *$tmp2796;
                org$pandalanguage$pandac$IRNode** $tmp2798 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 24));
                _f22797 = *$tmp2798;
                org$pandalanguage$pandac$FieldDecl** $tmp2800 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$5_12680->$data + 32));
                _f32799 = *$tmp2800;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12795));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22797));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32799));
            }
            }
            else {
            panda$core$Bit $tmp2801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp2801.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2803 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02802 = *$tmp2803;
                org$pandalanguage$pandac$IRNode** $tmp2805 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 16));
                _f12804 = *$tmp2805;
                panda$collections$ImmutableArray** $tmp2807 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12680->$data + 24));
                _f22806 = *$tmp2807;
                org$pandalanguage$pandac$IRNode** $tmp2809 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 32));
                _f32808 = *$tmp2809;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12804));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22806));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32808));
            }
            }
            else {
            panda$core$Bit $tmp2810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp2810.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2812 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02811 = *$tmp2812;
                org$pandalanguage$pandac$Type** $tmp2814 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12680->$data + 16));
                _f12813 = *$tmp2814;
                panda$core$UInt64* $tmp2816 = ((panda$core$UInt64*) ((char*) $match$5_12680->$data + 24));
                _f22815 = *$tmp2816;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12813));
            }
            }
            else {
            panda$core$Bit $tmp2817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp2817.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2819 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02818 = *$tmp2819;
                org$pandalanguage$pandac$IRNode** $tmp2821 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 16));
                _f12820 = *$tmp2821;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12820));
            }
            }
            else {
            panda$core$Bit $tmp2822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 20 }));
            if ($tmp2822.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2824 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02823 = *$tmp2824;
                org$pandalanguage$pandac$IRNode** $tmp2826 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 16));
                _f12825 = *$tmp2826;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12825));
            }
            }
            else {
            panda$core$Bit $tmp2827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 21 }));
            if ($tmp2827.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2829 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02828 = *$tmp2829;
                panda$core$String** $tmp2831 = ((panda$core$String**) ((char*) $match$5_12680->$data + 16));
                _f12830 = *$tmp2831;
                panda$collections$ImmutableArray** $tmp2833 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12680->$data + 24));
                _f22832 = *$tmp2833;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12830));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22832));
            }
            }
            else {
            panda$core$Bit $tmp2834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp2834.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2836 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02835 = *$tmp2836;
                org$pandalanguage$pandac$IRNode** $tmp2838 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 16));
                _f12837 = *$tmp2838;
                panda$collections$ImmutableArray** $tmp2840 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12680->$data + 24));
                _f22839 = *$tmp2840;
                panda$collections$ImmutableArray** $tmp2842 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12680->$data + 32));
                _f32841 = *$tmp2842;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12837));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22839));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32841));
            }
            }
            else {
            panda$core$Bit $tmp2843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp2843.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2845 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02844 = *$tmp2845;
                org$pandalanguage$pandac$IRNode** $tmp2847 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 16));
                _f12846 = *$tmp2847;
                org$pandalanguage$pandac$MethodRef** $tmp2849 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12680->$data + 24));
                _f22848 = *$tmp2849;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12846));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22848));
            }
            }
            else {
            panda$core$Bit $tmp2850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp2850.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2852 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02851 = *$tmp2852;
                org$pandalanguage$pandac$Type** $tmp2854 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12680->$data + 16));
                _f12853 = *$tmp2854;
                panda$core$UInt64* $tmp2856 = ((panda$core$UInt64*) ((char*) $match$5_12680->$data + 24));
                _f22855 = *$tmp2856;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12853));
            }
            }
            else {
            panda$core$Bit $tmp2857 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp2857.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2859 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02858 = *$tmp2859;
                org$pandalanguage$pandac$Type** $tmp2861 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12680->$data + 16));
                _f12860 = *$tmp2861;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12860));
            }
            }
            else {
            panda$core$Bit $tmp2862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp2862.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2864 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02863 = *$tmp2864;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2866 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12680->$data + 16));
                _f12865 = *$tmp2866;
                org$pandalanguage$pandac$IRNode** $tmp2868 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 24));
                _f22867 = *$tmp2868;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22867));
            }
            }
            else {
            panda$core$Bit $tmp2869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 27 }));
            if ($tmp2869.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2871 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02870 = *$tmp2871;
                panda$core$String** $tmp2873 = ((panda$core$String**) ((char*) $match$5_12680->$data + 16));
                _f12872 = *$tmp2873;
                org$pandalanguage$pandac$IRNode** $tmp2875 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 24));
                _f22874 = *$tmp2875;
                org$pandalanguage$pandac$IRNode** $tmp2877 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 32));
                _f32876 = *$tmp2877;
                panda$collections$ImmutableArray** $tmp2879 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12680->$data + 40));
                _f42878 = *$tmp2879;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12872));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22874));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32876));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42878));
            }
            }
            else {
            panda$core$Bit $tmp2880 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 28 }));
            if ($tmp2880.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2882 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02881 = *$tmp2882;
                org$pandalanguage$pandac$Type** $tmp2884 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12680->$data + 16));
                _f12883 = *$tmp2884;
                panda$core$Real64* $tmp2886 = ((panda$core$Real64*) ((char*) $match$5_12680->$data + 24));
                _f22885 = *$tmp2886;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12883));
            }
            }
            else {
            panda$core$Bit $tmp2887 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 29 }));
            if ($tmp2887.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2889 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02888 = *$tmp2889;
                org$pandalanguage$pandac$IRNode** $tmp2891 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 16));
                _f12890 = *$tmp2891;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12890));
            }
            }
            else {
            panda$core$Bit $tmp2892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 30 }));
            if ($tmp2892.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2894 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02893 = *$tmp2894;
                org$pandalanguage$pandac$Type** $tmp2896 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12680->$data + 16));
                _f12895 = *$tmp2896;
                panda$core$Int64* $tmp2898 = ((panda$core$Int64*) ((char*) $match$5_12680->$data + 24));
                _f22897 = *$tmp2898;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12895));
            }
            }
            else {
            panda$core$Bit $tmp2899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 31 }));
            if ($tmp2899.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2901 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 0));
                _f02900 = *$tmp2901;
                panda$core$Int64* $tmp2903 = ((panda$core$Int64*) ((char*) $match$5_12680->$data + 8));
                _f12902 = *$tmp2903;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02900));
            }
            }
            else {
            panda$core$Bit $tmp2904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 32 }));
            if ($tmp2904.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2906 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02905 = *$tmp2906;
                org$pandalanguage$pandac$Type** $tmp2908 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12680->$data + 16));
                _f12907 = *$tmp2908;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12907));
            }
            }
            else {
            panda$core$Bit $tmp2909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp2909.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2911 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02910 = *$tmp2911;
                panda$core$String** $tmp2913 = ((panda$core$String**) ((char*) $match$5_12680->$data + 16));
                _f12912 = *$tmp2913;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12912));
            }
            }
            else {
            panda$core$Bit $tmp2914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp2914.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2916 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02915 = *$tmp2916;
                org$pandalanguage$pandac$Type** $tmp2918 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12680->$data + 16));
                _f12917 = *$tmp2918;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12917));
            }
            }
            else {
            panda$core$Bit $tmp2919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 35 }));
            if ($tmp2919.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2921 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02920 = *$tmp2921;
                org$pandalanguage$pandac$IRNode** $tmp2923 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 16));
                _f12922 = *$tmp2923;
                org$pandalanguage$pandac$IRNode** $tmp2925 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 24));
                _f22924 = *$tmp2925;
                org$pandalanguage$pandac$IRNode** $tmp2927 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 32));
                _f32926 = *$tmp2927;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12922));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22924));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32926));
            }
            }
            else {
            panda$core$Bit $tmp2928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp2928.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2930 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02929 = *$tmp2930;
                org$pandalanguage$pandac$Type** $tmp2932 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12680->$data + 16));
                _f12931 = *$tmp2932;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12931));
            }
            }
            else {
            panda$core$Bit $tmp2933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 37 }));
            if ($tmp2933.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2935 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02934 = *$tmp2935;
                panda$core$String** $tmp2937 = ((panda$core$String**) ((char*) $match$5_12680->$data + 16));
                _f12936 = *$tmp2937;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12936));
            }
            }
            else {
            panda$core$Bit $tmp2938 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 38 }));
            if ($tmp2938.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2940 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02939 = *$tmp2940;
                org$pandalanguage$pandac$Type** $tmp2942 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12680->$data + 16));
                _f12941 = *$tmp2942;
                org$pandalanguage$pandac$IRNode** $tmp2944 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 24));
                _f22943 = *$tmp2944;
                panda$collections$ImmutableArray** $tmp2946 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12680->$data + 32));
                _f32945 = *$tmp2946;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12941));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22943));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32945));
            }
            }
            else {
            panda$core$Bit $tmp2947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp2947.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2949 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02948 = *$tmp2949;
                org$pandalanguage$pandac$Type** $tmp2951 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12680->$data + 16));
                _f12950 = *$tmp2951;
                org$pandalanguage$pandac$IRNode** $tmp2953 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 24));
                _f22952 = *$tmp2953;
                panda$collections$ImmutableArray** $tmp2955 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12680->$data + 32));
                _f32954 = *$tmp2955;
                panda$collections$ImmutableArray** $tmp2957 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12680->$data + 40));
                _f42956 = *$tmp2957;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12950));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22952));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32954));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42956));
            }
            }
            else {
            panda$core$Bit $tmp2958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp2958.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2960 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02959 = *$tmp2960;
                org$pandalanguage$pandac$IRNode** $tmp2962 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 16));
                _f12961 = *$tmp2962;
                panda$collections$ImmutableArray** $tmp2964 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12680->$data + 24));
                _f22963 = *$tmp2964;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12961));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22963));
            }
            }
            else {
            panda$core$Bit $tmp2965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 41 }));
            if ($tmp2965.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2967 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02966 = *$tmp2967;
                org$pandalanguage$pandac$IRNode** $tmp2969 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 16));
                _f12968 = *$tmp2969;
                org$pandalanguage$pandac$IRNode** $tmp2971 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 24));
                _f22970 = *$tmp2971;
                panda$core$Bit* $tmp2973 = ((panda$core$Bit*) ((char*) $match$5_12680->$data + 32));
                _f32972 = *$tmp2973;
                org$pandalanguage$pandac$IRNode** $tmp2975 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 33));
                _f42974 = *$tmp2975;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12968));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22970));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42974));
            }
            }
            else {
            panda$core$Bit $tmp2976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 42 }));
            if ($tmp2976.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2978 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02977 = *$tmp2978;
                org$pandalanguage$pandac$Variable$Kind* $tmp2980 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_12680->$data + 16));
                _f12979 = *$tmp2980;
                panda$collections$ImmutableArray** $tmp2982 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12680->$data + 24));
                _f22981 = *$tmp2982;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22981));
            }
            }
            else {
            panda$core$Bit $tmp2983 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 43 }));
            if ($tmp2983.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2985 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02984 = *$tmp2985;
                org$pandalanguage$pandac$Variable** $tmp2987 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$5_12680->$data + 16));
                _f12986 = *$tmp2987;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12986));
            }
            }
            else {
            panda$core$Bit $tmp2988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 44 }));
            if ($tmp2988.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2990 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02989 = *$tmp2990;
                panda$collections$ImmutableArray** $tmp2992 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12680->$data + 16));
                _f12991 = *$tmp2992;
                panda$collections$ImmutableArray** $tmp2994 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12680->$data + 24));
                _f22993 = *$tmp2994;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12991));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22993));
            }
            }
            else {
            panda$core$Bit $tmp2995 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12680->$rawValue, ((panda$core$Int64) { 45 }));
            if ($tmp2995.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2997 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12680->$data + 0));
                _f02996 = *$tmp2997;
                panda$core$String** $tmp2999 = ((panda$core$String**) ((char*) $match$5_12680->$data + 16));
                _f12998 = *$tmp2999;
                org$pandalanguage$pandac$IRNode** $tmp3001 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12680->$data + 24));
                _f23000 = *$tmp3001;
                panda$collections$ImmutableArray** $tmp3003 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12680->$data + 32));
                _f33002 = *$tmp3003;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12998));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23000));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33002));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp2679 = -1;
        goto $l2677;
        $l2677:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2681));
        switch ($tmp2679) {
            case -1: goto $l3004;
        }
        $l3004:;
    }
    $tmp2676 = -1;
    goto $l2674;
    $l2674:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2676) {
        case -1: goto $l3005;
    }
    $l3005:;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3007;
    org$pandalanguage$pandac$IRNode* $tmp3010;
    org$pandalanguage$pandac$IRNode* $tmp3011;
    org$pandalanguage$pandac$IRNode* $tmp3014;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3006 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3006 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3008 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3007 = *$tmp3008;
        org$pandalanguage$pandac$IRNode** $tmp3009 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3010 = p_f1;
        *$tmp3009 = $tmp3010;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3010));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3007));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3012 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3011 = *$tmp3012;
        org$pandalanguage$pandac$IRNode** $tmp3013 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3014 = p_f2;
        *$tmp3013 = $tmp3014;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3014));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3011));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$parser$Token$Kind p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$Type* $tmp3016;
    org$pandalanguage$pandac$Type* $tmp3019;
    org$pandalanguage$pandac$IRNode* $tmp3020;
    org$pandalanguage$pandac$IRNode* $tmp3023;
    org$pandalanguage$pandac$IRNode* $tmp3025;
    org$pandalanguage$pandac$IRNode* $tmp3028;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3015 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3015 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3017 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3016 = *$tmp3017;
        org$pandalanguage$pandac$Type** $tmp3018 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3019 = p_f1;
        *$tmp3018 = $tmp3019;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3019));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3016));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3021 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3020 = *$tmp3021;
        org$pandalanguage$pandac$IRNode** $tmp3022 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3023 = p_f2;
        *$tmp3022 = $tmp3023;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3023));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3020));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp3024 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 32));
    *$tmp3024 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp3026 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp3025 = *$tmp3026;
        org$pandalanguage$pandac$IRNode** $tmp3027 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp3028 = p_f4;
        *$tmp3027 = $tmp3028;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3028));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3025));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Bit p_f2) {
    org$pandalanguage$pandac$Type* $tmp3030;
    org$pandalanguage$pandac$Type* $tmp3033;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3029 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3029 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3031 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3030 = *$tmp3031;
        org$pandalanguage$pandac$Type** $tmp3032 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3033 = p_f1;
        *$tmp3032 = $tmp3033;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3033));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3030));
    }
    panda$core$Bit* $tmp3034 = ((panda$core$Bit*) ((char*) self->$data + 24));
    *$tmp3034 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp3036;
    panda$collections$ImmutableArray* $tmp3039;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3035 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3035 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp3037 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3036 = *$tmp3037;
        panda$collections$ImmutableArray** $tmp3038 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3039 = p_f1;
        *$tmp3038 = $tmp3039;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3039));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3036));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp3041;
    panda$collections$ImmutableArray* $tmp3044;
    panda$collections$ImmutableArray* $tmp3045;
    panda$collections$ImmutableArray* $tmp3048;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3040 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3040 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp3042 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3041 = *$tmp3042;
        panda$collections$ImmutableArray** $tmp3043 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3044 = p_f1;
        *$tmp3043 = $tmp3044;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3044));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3041));
    }
    {
        panda$collections$ImmutableArray** $tmp3046 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3045 = *$tmp3046;
        panda$collections$ImmutableArray** $tmp3047 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3048 = p_f2;
        *$tmp3047 = $tmp3048;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3048));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3045));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp3050;
    panda$core$String* $tmp3053;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3049 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3049 = p_f0;
    {
        panda$core$String** $tmp3051 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3050 = *$tmp3051;
        panda$core$String** $tmp3052 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3053 = p_f1;
        *$tmp3052 = $tmp3053;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3053));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3050));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$MethodRef* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3055;
    org$pandalanguage$pandac$Type* $tmp3058;
    org$pandalanguage$pandac$MethodRef* $tmp3059;
    org$pandalanguage$pandac$MethodRef* $tmp3062;
    panda$collections$ImmutableArray* $tmp3063;
    panda$collections$ImmutableArray* $tmp3066;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3054 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3054 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3056 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3055 = *$tmp3056;
        org$pandalanguage$pandac$Type** $tmp3057 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3058 = p_f1;
        *$tmp3057 = $tmp3058;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3058));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3055));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp3060 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3059 = *$tmp3060;
        org$pandalanguage$pandac$MethodRef** $tmp3061 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3062 = p_f2;
        *$tmp3061 = $tmp3062;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3062));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3059));
    }
    {
        panda$collections$ImmutableArray** $tmp3064 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3063 = *$tmp3064;
        panda$collections$ImmutableArray** $tmp3065 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3066 = p_f3;
        *$tmp3065 = $tmp3066;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3066));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3063));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$Type* p_f2, panda$core$Bit p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3068;
    org$pandalanguage$pandac$IRNode* $tmp3071;
    org$pandalanguage$pandac$Type* $tmp3072;
    org$pandalanguage$pandac$Type* $tmp3075;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3067 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3067 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3069 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3068 = *$tmp3069;
        org$pandalanguage$pandac$IRNode** $tmp3070 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3071 = p_f1;
        *$tmp3070 = $tmp3071;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3071));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3068));
    }
    {
        org$pandalanguage$pandac$Type** $tmp3073 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp3072 = *$tmp3073;
        org$pandalanguage$pandac$Type** $tmp3074 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp3075 = p_f2;
        *$tmp3074 = $tmp3075;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3075));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3072));
    }
    panda$core$Bit* $tmp3076 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp3076 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceEntry(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ChoiceEntry* p_f1) {
    org$pandalanguage$pandac$ChoiceEntry* $tmp3078;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3081;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3077 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3077 = p_f0;
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp3079 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp3078 = *$tmp3079;
        org$pandalanguage$pandac$ChoiceEntry** $tmp3080 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp3081 = p_f1;
        *$tmp3080 = $tmp3081;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3081));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3078));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3083;
    org$pandalanguage$pandac$IRNode* $tmp3086;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3087;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3090;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3082 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3082 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3084 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3083 = *$tmp3084;
        org$pandalanguage$pandac$IRNode** $tmp3085 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3086 = p_f1;
        *$tmp3085 = $tmp3086;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3086));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3083));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp3088 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp3087 = *$tmp3088;
        org$pandalanguage$pandac$ChoiceEntry** $tmp3089 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp3090 = p_f2;
        *$tmp3089 = $tmp3090;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3090));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3087));
    }
    panda$core$Int64* $tmp3091 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp3091 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$Type* $tmp3093;
    org$pandalanguage$pandac$Type* $tmp3096;
    org$pandalanguage$pandac$IRNode* $tmp3097;
    org$pandalanguage$pandac$IRNode* $tmp3100;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3092 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3092 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3094 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3093 = *$tmp3094;
        org$pandalanguage$pandac$Type** $tmp3095 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3096 = p_f1;
        *$tmp3095 = $tmp3096;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3096));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3093));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3098 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3097 = *$tmp3098;
        org$pandalanguage$pandac$IRNode** $tmp3099 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3100 = p_f2;
        *$tmp3099 = $tmp3100;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3100));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3097));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1) {
    org$pandalanguage$pandac$Type* $tmp3102;
    org$pandalanguage$pandac$Type* $tmp3105;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3101 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3101 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3103 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3102 = *$tmp3103;
        org$pandalanguage$pandac$Type** $tmp3104 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3105 = p_f1;
        *$tmp3104 = $tmp3105;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3105));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3102));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3106;
    org$pandalanguage$pandac$IRNode* $tmp3109;
    org$pandalanguage$pandac$IRNode* $tmp3110;
    org$pandalanguage$pandac$IRNode* $tmp3113;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3107 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3106 = *$tmp3107;
        org$pandalanguage$pandac$IRNode** $tmp3108 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3109 = p_f0;
        *$tmp3108 = $tmp3109;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3109));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3106));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3111 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3110 = *$tmp3111;
        org$pandalanguage$pandac$IRNode** $tmp3112 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3113 = p_f1;
        *$tmp3112 = $tmp3113;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3113));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3110));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    panda$core$String* $tmp3115;
    panda$core$String* $tmp3118;
    panda$collections$ImmutableArray* $tmp3119;
    panda$collections$ImmutableArray* $tmp3122;
    org$pandalanguage$pandac$IRNode* $tmp3123;
    org$pandalanguage$pandac$IRNode* $tmp3126;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3114 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3114 = p_f0;
    {
        panda$core$String** $tmp3116 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3115 = *$tmp3116;
        panda$core$String** $tmp3117 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3118 = p_f1;
        *$tmp3117 = $tmp3118;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3118));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3115));
    }
    {
        panda$collections$ImmutableArray** $tmp3120 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3119 = *$tmp3120;
        panda$collections$ImmutableArray** $tmp3121 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3122 = p_f2;
        *$tmp3121 = $tmp3122;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3122));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3119));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3124 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3123 = *$tmp3124;
        org$pandalanguage$pandac$IRNode** $tmp3125 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3126 = p_f3;
        *$tmp3125 = $tmp3126;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3126));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3123));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3127;
    org$pandalanguage$pandac$IRNode* $tmp3130;
    org$pandalanguage$pandac$IRNode* $tmp3131;
    org$pandalanguage$pandac$IRNode* $tmp3134;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3128 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3127 = *$tmp3128;
        org$pandalanguage$pandac$IRNode** $tmp3129 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3130 = p_f0;
        *$tmp3129 = $tmp3130;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3130));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3127));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3132 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3131 = *$tmp3132;
        org$pandalanguage$pandac$IRNode** $tmp3133 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3134 = p_f1;
        *$tmp3133 = $tmp3134;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3134));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3131));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$FieldDecl* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3136;
    org$pandalanguage$pandac$Type* $tmp3139;
    org$pandalanguage$pandac$IRNode* $tmp3140;
    org$pandalanguage$pandac$IRNode* $tmp3143;
    org$pandalanguage$pandac$FieldDecl* $tmp3144;
    org$pandalanguage$pandac$FieldDecl* $tmp3147;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3135 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3135 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3137 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3136 = *$tmp3137;
        org$pandalanguage$pandac$Type** $tmp3138 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3139 = p_f1;
        *$tmp3138 = $tmp3139;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3139));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3136));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3141 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3140 = *$tmp3141;
        org$pandalanguage$pandac$IRNode** $tmp3142 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3143 = p_f2;
        *$tmp3142 = $tmp3143;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3143));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3140));
    }
    {
        org$pandalanguage$pandac$FieldDecl** $tmp3145 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp3144 = *$tmp3145;
        org$pandalanguage$pandac$FieldDecl** $tmp3146 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp3147 = p_f3;
        *$tmp3146 = $tmp3147;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3147));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3144));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3149;
    org$pandalanguage$pandac$IRNode* $tmp3152;
    panda$collections$ImmutableArray* $tmp3153;
    panda$collections$ImmutableArray* $tmp3156;
    org$pandalanguage$pandac$IRNode* $tmp3157;
    org$pandalanguage$pandac$IRNode* $tmp3160;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3148 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3148 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3150 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3149 = *$tmp3150;
        org$pandalanguage$pandac$IRNode** $tmp3151 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3152 = p_f1;
        *$tmp3151 = $tmp3152;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3152));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3149));
    }
    {
        panda$collections$ImmutableArray** $tmp3154 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3153 = *$tmp3154;
        panda$collections$ImmutableArray** $tmp3155 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3156 = p_f2;
        *$tmp3155 = $tmp3156;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3156));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3153));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3158 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3157 = *$tmp3158;
        org$pandalanguage$pandac$IRNode** $tmp3159 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3160 = p_f3;
        *$tmp3159 = $tmp3160;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3160));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3157));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$UInt64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3162;
    org$pandalanguage$pandac$Type* $tmp3165;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3161 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3161 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3163 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3162 = *$tmp3163;
        org$pandalanguage$pandac$Type** $tmp3164 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3165 = p_f1;
        *$tmp3164 = $tmp3165;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3165));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3162));
    }
    panda$core$UInt64* $tmp3166 = ((panda$core$UInt64*) ((char*) self->$data + 24));
    *$tmp3166 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3168;
    org$pandalanguage$pandac$IRNode* $tmp3171;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3167 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3167 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3169 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3168 = *$tmp3169;
        org$pandalanguage$pandac$IRNode** $tmp3170 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3171 = p_f1;
        *$tmp3170 = $tmp3171;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3171));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3168));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp3173;
    panda$core$String* $tmp3176;
    panda$collections$ImmutableArray* $tmp3177;
    panda$collections$ImmutableArray* $tmp3180;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3172 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3172 = p_f0;
    {
        panda$core$String** $tmp3174 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3173 = *$tmp3174;
        panda$core$String** $tmp3175 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3176 = p_f1;
        *$tmp3175 = $tmp3176;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3176));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3173));
    }
    {
        panda$collections$ImmutableArray** $tmp3178 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3177 = *$tmp3178;
        panda$collections$ImmutableArray** $tmp3179 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3180 = p_f2;
        *$tmp3179 = $tmp3180;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3180));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3177));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3182;
    org$pandalanguage$pandac$IRNode* $tmp3185;
    panda$collections$ImmutableArray* $tmp3186;
    panda$collections$ImmutableArray* $tmp3189;
    panda$collections$ImmutableArray* $tmp3190;
    panda$collections$ImmutableArray* $tmp3193;
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
    {
        panda$collections$ImmutableArray** $tmp3187 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3186 = *$tmp3187;
        panda$collections$ImmutableArray** $tmp3188 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3189 = p_f2;
        *$tmp3188 = $tmp3189;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3189));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3186));
    }
    {
        panda$collections$ImmutableArray** $tmp3191 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3190 = *$tmp3191;
        panda$collections$ImmutableArray** $tmp3192 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3193 = p_f3;
        *$tmp3192 = $tmp3193;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3193));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3190));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$MethodRef* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3195;
    org$pandalanguage$pandac$IRNode* $tmp3198;
    org$pandalanguage$pandac$MethodRef* $tmp3199;
    org$pandalanguage$pandac$MethodRef* $tmp3202;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3194 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3194 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3196 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3195 = *$tmp3196;
        org$pandalanguage$pandac$IRNode** $tmp3197 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3198 = p_f1;
        *$tmp3197 = $tmp3198;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3198));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3195));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp3200 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3199 = *$tmp3200;
        org$pandalanguage$pandac$MethodRef** $tmp3201 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3202 = p_f2;
        *$tmp3201 = $tmp3202;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3202));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3199));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3205;
    org$pandalanguage$pandac$IRNode* $tmp3208;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3203 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3203 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp3204 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp3204 = p_f1;
    {
        org$pandalanguage$pandac$IRNode** $tmp3206 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3205 = *$tmp3206;
        org$pandalanguage$pandac$IRNode** $tmp3207 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3208 = p_f2;
        *$tmp3207 = $tmp3208;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3208));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3205));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp3210;
    panda$core$String* $tmp3213;
    org$pandalanguage$pandac$IRNode* $tmp3214;
    org$pandalanguage$pandac$IRNode* $tmp3217;
    org$pandalanguage$pandac$IRNode* $tmp3218;
    org$pandalanguage$pandac$IRNode* $tmp3221;
    panda$collections$ImmutableArray* $tmp3222;
    panda$collections$ImmutableArray* $tmp3225;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3209 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3209 = p_f0;
    {
        panda$core$String** $tmp3211 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3210 = *$tmp3211;
        panda$core$String** $tmp3212 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3213 = p_f1;
        *$tmp3212 = $tmp3213;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3213));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3210));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3215 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3214 = *$tmp3215;
        org$pandalanguage$pandac$IRNode** $tmp3216 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3217 = p_f2;
        *$tmp3216 = $tmp3217;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3217));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3214));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3219 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3218 = *$tmp3219;
        org$pandalanguage$pandac$IRNode** $tmp3220 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3221 = p_f3;
        *$tmp3220 = $tmp3221;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3221));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3218));
    }
    {
        panda$collections$ImmutableArray** $tmp3223 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3222 = *$tmp3223;
        panda$collections$ImmutableArray** $tmp3224 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3225 = p_f4;
        *$tmp3224 = $tmp3225;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3225));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3222));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Real64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3227;
    org$pandalanguage$pandac$Type* $tmp3230;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3226 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3226 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3228 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3227 = *$tmp3228;
        org$pandalanguage$pandac$Type** $tmp3229 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3230 = p_f1;
        *$tmp3229 = $tmp3230;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3230));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3227));
    }
    panda$core$Real64* $tmp3231 = ((panda$core$Real64*) ((char*) self->$data + 24));
    *$tmp3231 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3233;
    org$pandalanguage$pandac$IRNode* $tmp3236;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3232 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3232 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3234 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3233 = *$tmp3234;
        org$pandalanguage$pandac$IRNode** $tmp3235 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3236 = p_f1;
        *$tmp3235 = $tmp3236;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3236));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3233));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Int64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3238;
    org$pandalanguage$pandac$Type* $tmp3241;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3237 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3237 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3239 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3238 = *$tmp3239;
        org$pandalanguage$pandac$Type** $tmp3240 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3241 = p_f1;
        *$tmp3240 = $tmp3241;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3241));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3238));
    }
    panda$core$Int64* $tmp3242 = ((panda$core$Int64*) ((char*) self->$data + 24));
    *$tmp3242 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$core$Int64 p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3243;
    org$pandalanguage$pandac$IRNode* $tmp3246;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3244 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3243 = *$tmp3244;
        org$pandalanguage$pandac$IRNode** $tmp3245 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3246 = p_f0;
        *$tmp3245 = $tmp3246;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3246));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3243));
    }
    panda$core$Int64* $tmp3247 = ((panda$core$Int64*) ((char*) self->$data + 8));
    *$tmp3247 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp3249;
    panda$core$String* $tmp3252;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3248 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3248 = p_f0;
    {
        panda$core$String** $tmp3250 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3249 = *$tmp3250;
        panda$core$String** $tmp3251 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3252 = p_f1;
        *$tmp3251 = $tmp3252;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3252));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3249));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3254;
    org$pandalanguage$pandac$IRNode* $tmp3257;
    org$pandalanguage$pandac$IRNode* $tmp3258;
    org$pandalanguage$pandac$IRNode* $tmp3261;
    org$pandalanguage$pandac$IRNode* $tmp3262;
    org$pandalanguage$pandac$IRNode* $tmp3265;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3253 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3253 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3255 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3254 = *$tmp3255;
        org$pandalanguage$pandac$IRNode** $tmp3256 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3257 = p_f1;
        *$tmp3256 = $tmp3257;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3257));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3254));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3259 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3258 = *$tmp3259;
        org$pandalanguage$pandac$IRNode** $tmp3260 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3261 = p_f2;
        *$tmp3260 = $tmp3261;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3261));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3258));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3263 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3262 = *$tmp3263;
        org$pandalanguage$pandac$IRNode** $tmp3264 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3265 = p_f3;
        *$tmp3264 = $tmp3265;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3265));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3262));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3267;
    org$pandalanguage$pandac$Type* $tmp3270;
    org$pandalanguage$pandac$IRNode* $tmp3271;
    org$pandalanguage$pandac$IRNode* $tmp3274;
    panda$collections$ImmutableArray* $tmp3275;
    panda$collections$ImmutableArray* $tmp3278;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3266 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3266 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3268 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3267 = *$tmp3268;
        org$pandalanguage$pandac$Type** $tmp3269 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3270 = p_f1;
        *$tmp3269 = $tmp3270;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3270));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3267));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3272 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3271 = *$tmp3272;
        org$pandalanguage$pandac$IRNode** $tmp3273 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3274 = p_f2;
        *$tmp3273 = $tmp3274;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3274));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3271));
    }
    {
        panda$collections$ImmutableArray** $tmp3276 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3275 = *$tmp3276;
        panda$collections$ImmutableArray** $tmp3277 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3278 = p_f3;
        *$tmp3277 = $tmp3278;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3278));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3275));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3, panda$collections$ImmutableArray* p_f4) {
    org$pandalanguage$pandac$Type* $tmp3280;
    org$pandalanguage$pandac$Type* $tmp3283;
    org$pandalanguage$pandac$IRNode* $tmp3284;
    org$pandalanguage$pandac$IRNode* $tmp3287;
    panda$collections$ImmutableArray* $tmp3288;
    panda$collections$ImmutableArray* $tmp3291;
    panda$collections$ImmutableArray* $tmp3292;
    panda$collections$ImmutableArray* $tmp3295;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3279 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3279 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3281 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3280 = *$tmp3281;
        org$pandalanguage$pandac$Type** $tmp3282 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3283 = p_f1;
        *$tmp3282 = $tmp3283;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3283));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3280));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3285 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3284 = *$tmp3285;
        org$pandalanguage$pandac$IRNode** $tmp3286 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3287 = p_f2;
        *$tmp3286 = $tmp3287;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3287));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3284));
    }
    {
        panda$collections$ImmutableArray** $tmp3289 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3288 = *$tmp3289;
        panda$collections$ImmutableArray** $tmp3290 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3291 = p_f3;
        *$tmp3290 = $tmp3291;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3291));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3288));
    }
    {
        panda$collections$ImmutableArray** $tmp3293 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3292 = *$tmp3293;
        panda$collections$ImmutableArray** $tmp3294 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3295 = p_f4;
        *$tmp3294 = $tmp3295;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3295));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3292));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3297;
    org$pandalanguage$pandac$IRNode* $tmp3300;
    panda$collections$ImmutableArray* $tmp3301;
    panda$collections$ImmutableArray* $tmp3304;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3296 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3296 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3298 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3297 = *$tmp3298;
        org$pandalanguage$pandac$IRNode** $tmp3299 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3300 = p_f1;
        *$tmp3299 = $tmp3300;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3300));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3297));
    }
    {
        panda$collections$ImmutableArray** $tmp3302 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3301 = *$tmp3302;
        panda$collections$ImmutableArray** $tmp3303 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3304 = p_f2;
        *$tmp3303 = $tmp3304;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3304));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3301));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$IRNode* $tmp3306;
    org$pandalanguage$pandac$IRNode* $tmp3309;
    org$pandalanguage$pandac$IRNode* $tmp3310;
    org$pandalanguage$pandac$IRNode* $tmp3313;
    org$pandalanguage$pandac$IRNode* $tmp3315;
    org$pandalanguage$pandac$IRNode* $tmp3318;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3305 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3305 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3307 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3306 = *$tmp3307;
        org$pandalanguage$pandac$IRNode** $tmp3308 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3309 = p_f1;
        *$tmp3308 = $tmp3309;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3309));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3306));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3311 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3310 = *$tmp3311;
        org$pandalanguage$pandac$IRNode** $tmp3312 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3313 = p_f2;
        *$tmp3312 = $tmp3313;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3313));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3310));
    }
    panda$core$Bit* $tmp3314 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp3314 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp3316 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3315 = *$tmp3316;
        org$pandalanguage$pandac$IRNode** $tmp3317 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3318 = p_f4;
        *$tmp3317 = $tmp3318;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3318));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3315));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp3321;
    panda$collections$ImmutableArray* $tmp3324;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3319 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3319 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp3320 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp3320 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp3322 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3321 = *$tmp3322;
        panda$collections$ImmutableArray** $tmp3323 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3324 = p_f2;
        *$tmp3323 = $tmp3324;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3324));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3321));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable* p_f1) {
    org$pandalanguage$pandac$Variable* $tmp3326;
    org$pandalanguage$pandac$Variable* $tmp3329;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3325 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3325 = p_f0;
    {
        org$pandalanguage$pandac$Variable** $tmp3327 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3326 = *$tmp3327;
        org$pandalanguage$pandac$Variable** $tmp3328 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3329 = p_f1;
        *$tmp3328 = $tmp3329;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3329));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3326));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp3331;
    panda$core$String* $tmp3334;
    org$pandalanguage$pandac$IRNode* $tmp3335;
    org$pandalanguage$pandac$IRNode* $tmp3338;
    panda$collections$ImmutableArray* $tmp3339;
    panda$collections$ImmutableArray* $tmp3342;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3330 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3330 = p_f0;
    {
        panda$core$String** $tmp3332 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3331 = *$tmp3332;
        panda$core$String** $tmp3333 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3334 = p_f1;
        *$tmp3333 = $tmp3334;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3334));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3331));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3336 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3335 = *$tmp3336;
        org$pandalanguage$pandac$IRNode** $tmp3337 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3338 = p_f2;
        *$tmp3337 = $tmp3338;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3338));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3335));
    }
    {
        panda$collections$ImmutableArray** $tmp3340 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3339 = *$tmp3340;
        panda$collections$ImmutableArray** $tmp3341 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3342 = p_f3;
        *$tmp3341 = $tmp3342;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3342));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3339));
    }
}

