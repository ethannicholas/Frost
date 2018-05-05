#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/core/Bit.h"
#include "panda/collections/ImmutableArray.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "panda/core/UInt64.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "org/pandalanguage/pandac/Symbol.h"


static panda$core$String $s1;
org$pandalanguage$pandac$IRNode$class_type org$pandalanguage$pandac$IRNode$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$IRNode$convert$R$panda$core$String, org$pandalanguage$pandac$IRNode$cleanup, org$pandalanguage$pandac$IRNode$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position, org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit} };

typedef org$pandalanguage$pandac$Type* (*$fn392)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn439)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn459)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn482)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn485)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn491)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn581)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn591)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn657)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn723)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn726)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn741)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn745)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn760)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn767)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn775)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn777)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn799)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn806)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn814)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn816)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn846)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn864)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn874)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn882)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn889)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn897)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn899)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn920)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn928)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn935)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn943)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn945)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn951)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn961)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn967)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn979)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn986)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn994)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn996)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1009)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1017)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1024)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1032)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1034)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1044)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1051)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1059)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1061)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1085)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1096)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1104)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1111)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1119)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1121)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1135)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1147)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1167)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1170)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1174)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1220)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1227)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1235)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1237)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1257)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1264)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1272)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1274)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1284)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1291)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1299)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1301)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1314)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1322)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1329)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1337)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1339)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1387)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1419)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1426)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1434)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn1484)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1508)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1537)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1603)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1613)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1637)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1644)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1652)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1679)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1697)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1726)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1733)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1741)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1807)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1814)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1822)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1855)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1862)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1870)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1881)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1888)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1896)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1918)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1954)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1995)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2002)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2010)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2143)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2167)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2192)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn2307)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2314)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2322)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x4e\x6f\x64\x65", 31, -8857975469778350849, NULL };
static panda$core$String $s421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6d\x65\x74\x68\x6f\x64\x3e", 8, 17378158564789264, NULL };
static panda$core$String $s1357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s1359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s1370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s1437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s1471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x4e\x54\x36\x34\x5f\x57\x52\x41\x50\x28", 11, -7093166379287162761, NULL };
static panda$core$String $s1497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1547 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x2a\x2d", 24, 1541443738414735436, NULL };
static panda$core$String $s1585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s1587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s1605 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1629 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s1655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s1661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x2a\x20\x61\x6e\x64\x20\x74\x68\x65\x6e\x3a\x20", 14, -3277098584181619124, NULL };
static panda$core$String $s1684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1702 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1717 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1719 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s1744 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1772 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1774 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s1783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s1799 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1825 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1875 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s1899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1920 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1933 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1940 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1956 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1959 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1983 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s1985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s1988 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2013 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2035 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s2037 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2041 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s2053 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x72\x65\x75\x73\x65\x64\x20\x76\x61\x6c\x75\x65\x3a\x20", 17, -7730994269199854653, NULL };
static panda$core$String $s2057 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s2060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s2073 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x72\x65\x75\x73\x65\x64\x20\x76\x61\x6c\x75\x65\x20\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3a\x20", 28, 2945252663019609900, NULL };
static panda$core$String $s2077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s2080 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s2085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2094 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s2110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s2115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s2118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s2169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s2215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s2218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s2220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s2240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s2242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s2244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s2268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s2272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s2275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s2300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode* $tmp3 = *$tmp4;
        org$pandalanguage$pandac$IRNode** $tmp5 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode* $tmp6 = p_f1;
        *$tmp5 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp8 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode* $tmp7 = *$tmp8;
        org$pandalanguage$pandac$IRNode** $tmp9 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode* $tmp10 = p_f2;
        *$tmp9 = $tmp10;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$parser$Token$Kind p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp11 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp11 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp13 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type* $tmp12 = *$tmp13;
        org$pandalanguage$pandac$Type** $tmp14 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type* $tmp15 = p_f1;
        *$tmp14 = $tmp15;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp17 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode* $tmp16 = *$tmp17;
        org$pandalanguage$pandac$IRNode** $tmp18 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode* $tmp19 = p_f2;
        *$tmp18 = $tmp19;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp19));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp20 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 32));
    *$tmp20 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp22 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        org$pandalanguage$pandac$IRNode* $tmp21 = *$tmp22;
        org$pandalanguage$pandac$IRNode** $tmp23 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        org$pandalanguage$pandac$IRNode* $tmp24 = p_f4;
        *$tmp23 = $tmp24;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp24));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Bit p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp25 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp25 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp27 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type* $tmp26 = *$tmp27;
        org$pandalanguage$pandac$Type** $tmp28 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type* $tmp29 = p_f1;
        *$tmp28 = $tmp29;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp29));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp26));
    }
    panda$core$Bit* $tmp30 = ((panda$core$Bit*) ((char*) self->$data + 24));
    *$tmp30 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp31 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp31 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp33 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        panda$collections$ImmutableArray* $tmp32 = *$tmp33;
        panda$collections$ImmutableArray** $tmp34 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        panda$collections$ImmutableArray* $tmp35 = p_f1;
        *$tmp34 = $tmp35;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp36 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp36 = p_f0;
    {
        panda$core$String** $tmp38 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp37 = *$tmp38;
        panda$core$String** $tmp39 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp40 = p_f1;
        *$tmp39 = $tmp40;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp40));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$MethodRef* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp41 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp41 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp43 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type* $tmp42 = *$tmp43;
        org$pandalanguage$pandac$Type** $tmp44 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type* $tmp45 = p_f1;
        *$tmp44 = $tmp45;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp45));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp42));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp47 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$MethodRef* $tmp46 = *$tmp47;
        org$pandalanguage$pandac$MethodRef** $tmp48 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$MethodRef* $tmp49 = p_f2;
        *$tmp48 = $tmp49;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp49));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp46));
    }
    {
        panda$collections$ImmutableArray** $tmp51 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$collections$ImmutableArray* $tmp50 = *$tmp51;
        panda$collections$ImmutableArray** $tmp52 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$collections$ImmutableArray* $tmp53 = p_f3;
        *$tmp52 = $tmp53;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp53));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp50));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$Type* p_f2, panda$core$Bit p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp54 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp54 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp56 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode* $tmp55 = *$tmp56;
        org$pandalanguage$pandac$IRNode** $tmp57 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode* $tmp58 = p_f1;
        *$tmp57 = $tmp58;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp58));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp55));
    }
    {
        org$pandalanguage$pandac$Type** $tmp60 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$Type* $tmp59 = *$tmp60;
        org$pandalanguage$pandac$Type** $tmp61 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$Type* $tmp62 = p_f2;
        *$tmp61 = $tmp62;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp62));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp59));
    }
    panda$core$Bit* $tmp63 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp63 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceEntry(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ChoiceEntry* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp64 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp64 = p_f0;
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp66 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ChoiceEntry* $tmp65 = *$tmp66;
        org$pandalanguage$pandac$ChoiceEntry** $tmp67 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ChoiceEntry* $tmp68 = p_f1;
        *$tmp67 = $tmp68;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp68));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp69 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp69 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp71 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode* $tmp70 = *$tmp71;
        org$pandalanguage$pandac$IRNode** $tmp72 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode* $tmp73 = p_f1;
        *$tmp72 = $tmp73;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp73));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp70));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp75 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ChoiceEntry* $tmp74 = *$tmp75;
        org$pandalanguage$pandac$ChoiceEntry** $tmp76 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ChoiceEntry* $tmp77 = p_f2;
        *$tmp76 = $tmp77;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp77));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
    }
    panda$core$Int64* $tmp78 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp78 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp79 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp79 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp81 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type* $tmp80 = *$tmp81;
        org$pandalanguage$pandac$Type** $tmp82 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type* $tmp83 = p_f1;
        *$tmp82 = $tmp83;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp83));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp85 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode* $tmp84 = *$tmp85;
        org$pandalanguage$pandac$IRNode** $tmp86 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode* $tmp87 = p_f2;
        *$tmp86 = $tmp87;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp87));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp88 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp88 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp90 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type* $tmp89 = *$tmp90;
        org$pandalanguage$pandac$Type** $tmp91 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type* $tmp92 = p_f1;
        *$tmp91 = $tmp92;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp92));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp89));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp94 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        org$pandalanguage$pandac$IRNode* $tmp93 = *$tmp94;
        org$pandalanguage$pandac$IRNode** $tmp95 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        org$pandalanguage$pandac$IRNode* $tmp96 = p_f0;
        *$tmp95 = $tmp96;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp96));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp93));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp98 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        org$pandalanguage$pandac$IRNode* $tmp97 = *$tmp98;
        org$pandalanguage$pandac$IRNode** $tmp99 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        org$pandalanguage$pandac$IRNode* $tmp100 = p_f1;
        *$tmp99 = $tmp100;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp100));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp97));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp101 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp101 = p_f0;
    {
        panda$core$String** $tmp103 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp102 = *$tmp103;
        panda$core$String** $tmp104 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp105 = p_f1;
        *$tmp104 = $tmp105;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp105));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp102));
    }
    {
        panda$collections$ImmutableArray** $tmp107 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp106 = *$tmp107;
        panda$collections$ImmutableArray** $tmp108 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp109 = p_f2;
        *$tmp108 = $tmp109;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp109));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp111 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$IRNode* $tmp110 = *$tmp111;
        org$pandalanguage$pandac$IRNode** $tmp112 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$IRNode* $tmp113 = p_f3;
        *$tmp112 = $tmp113;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp113));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp110));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp115 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        org$pandalanguage$pandac$IRNode* $tmp114 = *$tmp115;
        org$pandalanguage$pandac$IRNode** $tmp116 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        org$pandalanguage$pandac$IRNode* $tmp117 = p_f0;
        *$tmp116 = $tmp117;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp117));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp119 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        org$pandalanguage$pandac$IRNode* $tmp118 = *$tmp119;
        org$pandalanguage$pandac$IRNode** $tmp120 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        org$pandalanguage$pandac$IRNode* $tmp121 = p_f1;
        *$tmp120 = $tmp121;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp121));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp118));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$FieldDecl* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp122 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp122 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp124 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type* $tmp123 = *$tmp124;
        org$pandalanguage$pandac$Type** $tmp125 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type* $tmp126 = p_f1;
        *$tmp125 = $tmp126;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp123));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp128 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode* $tmp127 = *$tmp128;
        org$pandalanguage$pandac$IRNode** $tmp129 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode* $tmp130 = p_f2;
        *$tmp129 = $tmp130;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp130));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp127));
    }
    {
        org$pandalanguage$pandac$FieldDecl** $tmp132 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$FieldDecl* $tmp131 = *$tmp132;
        org$pandalanguage$pandac$FieldDecl** $tmp133 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$FieldDecl* $tmp134 = p_f3;
        *$tmp133 = $tmp134;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp134));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp135 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp135 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp137 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode* $tmp136 = *$tmp137;
        org$pandalanguage$pandac$IRNode** $tmp138 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode* $tmp139 = p_f1;
        *$tmp138 = $tmp139;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp139));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp136));
    }
    {
        panda$collections$ImmutableArray** $tmp141 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp140 = *$tmp141;
        panda$collections$ImmutableArray** $tmp142 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp143 = p_f2;
        *$tmp142 = $tmp143;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp140));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp145 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$IRNode* $tmp144 = *$tmp145;
        org$pandalanguage$pandac$IRNode** $tmp146 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$IRNode* $tmp147 = p_f3;
        *$tmp146 = $tmp147;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp147));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$UInt64 p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp148 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp148 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp150 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type* $tmp149 = *$tmp150;
        org$pandalanguage$pandac$Type** $tmp151 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type* $tmp152 = p_f1;
        *$tmp151 = $tmp152;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp152));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp149));
    }
    panda$core$UInt64* $tmp153 = ((panda$core$UInt64*) ((char*) self->$data + 24));
    *$tmp153 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp154 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp154 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp156 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode* $tmp155 = *$tmp156;
        org$pandalanguage$pandac$IRNode** $tmp157 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode* $tmp158 = p_f1;
        *$tmp157 = $tmp158;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp158));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp155));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp159 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp159 = p_f0;
    {
        panda$core$String** $tmp161 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp160 = *$tmp161;
        panda$core$String** $tmp162 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp163 = p_f1;
        *$tmp162 = $tmp163;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp163));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp160));
    }
    {
        panda$collections$ImmutableArray** $tmp165 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp164 = *$tmp165;
        panda$collections$ImmutableArray** $tmp166 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp167 = p_f2;
        *$tmp166 = $tmp167;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp167));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp164));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp168 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp168 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp170 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode* $tmp169 = *$tmp170;
        org$pandalanguage$pandac$IRNode** $tmp171 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode* $tmp172 = p_f1;
        *$tmp171 = $tmp172;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp172));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp169));
    }
    {
        panda$collections$ImmutableArray** $tmp174 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp173 = *$tmp174;
        panda$collections$ImmutableArray** $tmp175 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp176 = p_f2;
        *$tmp175 = $tmp176;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp176));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
    }
    {
        panda$collections$ImmutableArray** $tmp178 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$collections$ImmutableArray* $tmp177 = *$tmp178;
        panda$collections$ImmutableArray** $tmp179 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$collections$ImmutableArray* $tmp180 = p_f3;
        *$tmp179 = $tmp180;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp180));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp177));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$MethodRef* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp181 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp181 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp183 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode* $tmp182 = *$tmp183;
        org$pandalanguage$pandac$IRNode** $tmp184 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode* $tmp185 = p_f1;
        *$tmp184 = $tmp185;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp185));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp182));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp187 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$MethodRef* $tmp186 = *$tmp187;
        org$pandalanguage$pandac$MethodRef** $tmp188 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$MethodRef* $tmp189 = p_f2;
        *$tmp188 = $tmp189;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp189));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp186));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp190 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp190 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp191 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp191 = p_f1;
    {
        org$pandalanguage$pandac$IRNode** $tmp193 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode* $tmp192 = *$tmp193;
        org$pandalanguage$pandac$IRNode** $tmp194 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode* $tmp195 = p_f2;
        *$tmp194 = $tmp195;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp195));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp196 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp196 = p_f0;
    {
        panda$core$String** $tmp198 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp197 = *$tmp198;
        panda$core$String** $tmp199 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp200 = p_f1;
        *$tmp199 = $tmp200;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp200));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp197));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp202 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode* $tmp201 = *$tmp202;
        org$pandalanguage$pandac$IRNode** $tmp203 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode* $tmp204 = p_f2;
        *$tmp203 = $tmp204;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp204));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp201));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp206 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$IRNode* $tmp205 = *$tmp206;
        org$pandalanguage$pandac$IRNode** $tmp207 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$IRNode* $tmp208 = p_f3;
        *$tmp207 = $tmp208;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp208));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp205));
    }
    {
        panda$collections$ImmutableArray** $tmp210 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        panda$collections$ImmutableArray* $tmp209 = *$tmp210;
        panda$collections$ImmutableArray** $tmp211 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        panda$collections$ImmutableArray* $tmp212 = p_f4;
        *$tmp211 = $tmp212;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp212));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp209));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Real64 p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp213 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp213 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp215 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type* $tmp214 = *$tmp215;
        org$pandalanguage$pandac$Type** $tmp216 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type* $tmp217 = p_f1;
        *$tmp216 = $tmp217;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp217));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp214));
    }
    panda$core$Real64* $tmp218 = ((panda$core$Real64*) ((char*) self->$data + 24));
    *$tmp218 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp219 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp219 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp221 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode* $tmp220 = *$tmp221;
        org$pandalanguage$pandac$IRNode** $tmp222 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode* $tmp223 = p_f1;
        *$tmp222 = $tmp223;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp223));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp220));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Int64 p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp224 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp224 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp226 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type* $tmp225 = *$tmp226;
        org$pandalanguage$pandac$Type** $tmp227 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type* $tmp228 = p_f1;
        *$tmp227 = $tmp228;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp228));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp225));
    }
    panda$core$Int64* $tmp229 = ((panda$core$Int64*) ((char*) self->$data + 24));
    *$tmp229 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$core$Int64 p_f1) {
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp231 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        org$pandalanguage$pandac$IRNode* $tmp230 = *$tmp231;
        org$pandalanguage$pandac$IRNode** $tmp232 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        org$pandalanguage$pandac$IRNode* $tmp233 = p_f0;
        *$tmp232 = $tmp233;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp233));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp230));
    }
    panda$core$Int64* $tmp234 = ((panda$core$Int64*) ((char*) self->$data + 8));
    *$tmp234 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp235 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp235 = p_f0;
    {
        panda$core$String** $tmp237 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp236 = *$tmp237;
        panda$core$String** $tmp238 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp239 = p_f1;
        *$tmp238 = $tmp239;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp239));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp236));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp240 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp240 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp242 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode* $tmp241 = *$tmp242;
        org$pandalanguage$pandac$IRNode** $tmp243 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode* $tmp244 = p_f1;
        *$tmp243 = $tmp244;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp244));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp241));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp246 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode* $tmp245 = *$tmp246;
        org$pandalanguage$pandac$IRNode** $tmp247 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode* $tmp248 = p_f2;
        *$tmp247 = $tmp248;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp248));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp245));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp250 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$IRNode* $tmp249 = *$tmp250;
        org$pandalanguage$pandac$IRNode** $tmp251 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$IRNode* $tmp252 = p_f3;
        *$tmp251 = $tmp252;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp252));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp249));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp253 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp253 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp255 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type* $tmp254 = *$tmp255;
        org$pandalanguage$pandac$Type** $tmp256 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type* $tmp257 = p_f1;
        *$tmp256 = $tmp257;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp257));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp254));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp259 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode* $tmp258 = *$tmp259;
        org$pandalanguage$pandac$IRNode** $tmp260 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode* $tmp261 = p_f2;
        *$tmp260 = $tmp261;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp261));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp258));
    }
    {
        panda$collections$ImmutableArray** $tmp263 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$collections$ImmutableArray* $tmp262 = *$tmp263;
        panda$collections$ImmutableArray** $tmp264 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$collections$ImmutableArray* $tmp265 = p_f3;
        *$tmp264 = $tmp265;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp265));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp262));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3, panda$collections$ImmutableArray* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp266 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp266 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp268 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type* $tmp267 = *$tmp268;
        org$pandalanguage$pandac$Type** $tmp269 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type* $tmp270 = p_f1;
        *$tmp269 = $tmp270;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp270));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp267));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp272 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode* $tmp271 = *$tmp272;
        org$pandalanguage$pandac$IRNode** $tmp273 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode* $tmp274 = p_f2;
        *$tmp273 = $tmp274;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp274));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp271));
    }
    {
        panda$collections$ImmutableArray** $tmp276 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$collections$ImmutableArray* $tmp275 = *$tmp276;
        panda$collections$ImmutableArray** $tmp277 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$collections$ImmutableArray* $tmp278 = p_f3;
        *$tmp277 = $tmp278;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp278));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp275));
    }
    {
        panda$collections$ImmutableArray** $tmp280 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        panda$collections$ImmutableArray* $tmp279 = *$tmp280;
        panda$collections$ImmutableArray** $tmp281 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        panda$collections$ImmutableArray* $tmp282 = p_f4;
        *$tmp281 = $tmp282;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp282));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp279));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp283 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp283 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp285 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode* $tmp284 = *$tmp285;
        org$pandalanguage$pandac$IRNode** $tmp286 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode* $tmp287 = p_f1;
        *$tmp286 = $tmp287;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp287));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp284));
    }
    {
        panda$collections$ImmutableArray** $tmp289 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp288 = *$tmp289;
        panda$collections$ImmutableArray** $tmp290 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp291 = p_f2;
        *$tmp290 = $tmp291;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp291));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp288));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp292 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp292 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp294 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode* $tmp293 = *$tmp294;
        org$pandalanguage$pandac$IRNode** $tmp295 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode* $tmp296 = p_f1;
        *$tmp295 = $tmp296;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp296));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp293));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp298 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode* $tmp297 = *$tmp298;
        org$pandalanguage$pandac$IRNode** $tmp299 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode* $tmp300 = p_f2;
        *$tmp299 = $tmp300;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp300));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp297));
    }
    panda$core$Bit* $tmp301 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp301 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp303 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        org$pandalanguage$pandac$IRNode* $tmp302 = *$tmp303;
        org$pandalanguage$pandac$IRNode** $tmp304 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        org$pandalanguage$pandac$IRNode* $tmp305 = p_f4;
        *$tmp304 = $tmp305;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp305));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp302));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp306 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp306 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp307 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp307 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp309 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp308 = *$tmp309;
        panda$collections$ImmutableArray** $tmp310 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp311 = p_f2;
        *$tmp310 = $tmp311;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp311));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp308));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp312 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp312 = p_f0;
    {
        org$pandalanguage$pandac$Variable** $tmp314 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Variable* $tmp313 = *$tmp314;
        org$pandalanguage$pandac$Variable** $tmp315 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Variable* $tmp316 = p_f1;
        *$tmp315 = $tmp316;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp316));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp313));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp317 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp317 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp319 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        panda$collections$ImmutableArray* $tmp318 = *$tmp319;
        panda$collections$ImmutableArray** $tmp320 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        panda$collections$ImmutableArray* $tmp321 = p_f1;
        *$tmp320 = $tmp321;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp321));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp318));
    }
    {
        panda$collections$ImmutableArray** $tmp323 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp322 = *$tmp323;
        panda$collections$ImmutableArray** $tmp324 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp325 = p_f2;
        *$tmp324 = $tmp325;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp325));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp322));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp326 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp326 = p_f0;
    {
        panda$core$String** $tmp328 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp327 = *$tmp328;
        panda$core$String** $tmp329 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp330 = p_f1;
        *$tmp329 = $tmp330;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp330));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp327));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp332 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode* $tmp331 = *$tmp332;
        org$pandalanguage$pandac$IRNode** $tmp333 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode* $tmp334 = p_f2;
        *$tmp333 = $tmp334;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp334));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp331));
    }
    {
        panda$collections$ImmutableArray** $tmp336 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$collections$ImmutableArray* $tmp335 = *$tmp336;
        panda$collections$ImmutableArray** $tmp337 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$collections$ImmutableArray* $tmp338 = p_f3;
        *$tmp337 = $tmp338;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp338));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp335));
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$IRNode$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$66_9339;
    org$pandalanguage$pandac$Type* type341;
    org$pandalanguage$pandac$Type* type346;
    org$pandalanguage$pandac$Type* type351;
    org$pandalanguage$pandac$Type* type356;
    org$pandalanguage$pandac$ChoiceEntry* ce361;
    org$pandalanguage$pandac$ChoiceEntry* ce368;
    panda$core$Int64 field370;
    org$pandalanguage$pandac$Type* type377;
    org$pandalanguage$pandac$Type* type382;
    org$pandalanguage$pandac$IRNode* expr387;
    org$pandalanguage$pandac$Type* type395;
    org$pandalanguage$pandac$Type* type400;
    org$pandalanguage$pandac$IRNode* ref415;
    org$pandalanguage$pandac$Position $tmp422;
    org$pandalanguage$pandac$Type* type424;
    org$pandalanguage$pandac$Type* type429;
    org$pandalanguage$pandac$IRNode* base434;
    org$pandalanguage$pandac$Type* type442;
    org$pandalanguage$pandac$Type* type447;
    panda$core$Int64 id449;
    org$pandalanguage$pandac$IRNode* base454;
    org$pandalanguage$pandac$Type* type462;
    org$pandalanguage$pandac$Type* type472;
    org$pandalanguage$pandac$IRNode* ifTrue477;
    org$pandalanguage$pandac$IRNode* ifFalse479;
    org$pandalanguage$pandac$Type* type504;
    org$pandalanguage$pandac$Type* type509;
    org$pandalanguage$pandac$Variable* variable524;
    {
        $match$66_9339 = self;
        panda$core$Bit $tmp340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp340.value) {
        {
            org$pandalanguage$pandac$Type** $tmp342 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9339->$data + 16));
            type341 = *$tmp342;
            org$pandalanguage$pandac$Type* $tmp344 = type341;
            org$pandalanguage$pandac$Type* $tmp343 = $tmp344;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp344));
            return $tmp343;
        }
        }
        else {
        panda$core$Bit $tmp345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp345.value) {
        {
            org$pandalanguage$pandac$Type** $tmp347 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9339->$data + 16));
            type346 = *$tmp347;
            org$pandalanguage$pandac$Type* $tmp349 = type346;
            org$pandalanguage$pandac$Type* $tmp348 = $tmp349;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp349));
            return $tmp348;
        }
        }
        else {
        panda$core$Bit $tmp350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp350.value) {
        {
            org$pandalanguage$pandac$Type** $tmp352 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9339->$data + 16));
            type351 = *$tmp352;
            org$pandalanguage$pandac$Type* $tmp354 = type351;
            org$pandalanguage$pandac$Type* $tmp353 = $tmp354;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp354));
            return $tmp353;
        }
        }
        else {
        panda$core$Bit $tmp355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp355.value) {
        {
            org$pandalanguage$pandac$Type** $tmp357 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9339->$data + 24));
            type356 = *$tmp357;
            org$pandalanguage$pandac$Type* $tmp359 = type356;
            org$pandalanguage$pandac$Type* $tmp358 = $tmp359;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp359));
            return $tmp358;
        }
        }
        else {
        panda$core$Bit $tmp360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp360.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp362 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$66_9339->$data + 16));
            ce361 = *$tmp362;
            org$pandalanguage$pandac$Type* $tmp366 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp365 = $tmp366;
            org$pandalanguage$pandac$Type* $tmp364 = $tmp365;
            org$pandalanguage$pandac$Type* $tmp363 = $tmp364;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp364));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp365));
            return $tmp363;
        }
        }
        else {
        panda$core$Bit $tmp367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp367.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp369 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$66_9339->$data + 24));
            ce368 = *$tmp369;
            panda$core$Int64* $tmp371 = ((panda$core$Int64*) ((char*) $match$66_9339->$data + 32));
            field370 = *$tmp371;
            panda$core$Object* $tmp375 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(ce368->fields, field370);
            panda$core$Object* $tmp374 = $tmp375;
            org$pandalanguage$pandac$Type* $tmp373 = ((org$pandalanguage$pandac$Type*) $tmp374);
            org$pandalanguage$pandac$Type* $tmp372 = $tmp373;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp373));
            panda$core$Panda$unref$panda$core$Object($tmp374);
            return $tmp372;
        }
        }
        else {
        panda$core$Bit $tmp376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp376.value) {
        {
            org$pandalanguage$pandac$Type** $tmp378 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9339->$data + 16));
            type377 = *$tmp378;
            org$pandalanguage$pandac$Type* $tmp380 = type377;
            org$pandalanguage$pandac$Type* $tmp379 = $tmp380;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp380));
            return $tmp379;
        }
        }
        else {
        panda$core$Bit $tmp381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp381.value) {
        {
            org$pandalanguage$pandac$Type** $tmp383 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9339->$data + 16));
            type382 = *$tmp383;
            org$pandalanguage$pandac$Type* $tmp385 = type382;
            org$pandalanguage$pandac$Type* $tmp384 = $tmp385;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp385));
            return $tmp384;
        }
        }
        else {
        panda$core$Bit $tmp386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp386.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp388 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9339->$data + 0));
            expr387 = *$tmp388;
            org$pandalanguage$pandac$Type* $tmp393 = (($fn392) expr387->$class->vtable[2])(expr387);
            org$pandalanguage$pandac$Type* $tmp391 = $tmp393;
            org$pandalanguage$pandac$Type* $tmp390 = $tmp391;
            org$pandalanguage$pandac$Type* $tmp389 = $tmp390;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp390));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp391));
            return $tmp389;
        }
        }
        else {
        panda$core$Bit $tmp394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp394.value) {
        {
            org$pandalanguage$pandac$Type** $tmp396 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9339->$data + 16));
            type395 = *$tmp396;
            org$pandalanguage$pandac$Type* $tmp398 = type395;
            org$pandalanguage$pandac$Type* $tmp397 = $tmp398;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp398));
            return $tmp397;
        }
        }
        else {
        panda$core$Bit $tmp399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp399.value) {
        {
            org$pandalanguage$pandac$Type** $tmp401 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9339->$data + 16));
            type400 = *$tmp401;
            org$pandalanguage$pandac$Type* $tmp403 = type400;
            org$pandalanguage$pandac$Type* $tmp402 = $tmp403;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp403));
            return $tmp402;
        }
        }
        else {
        panda$core$Bit $tmp404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp404.value) {
        {
            org$pandalanguage$pandac$Type* $tmp408 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp407 = $tmp408;
            org$pandalanguage$pandac$Type* $tmp406 = $tmp407;
            org$pandalanguage$pandac$Type* $tmp405 = $tmp406;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp406));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp407));
            return $tmp405;
        }
        }
        else {
        panda$core$Bit $tmp409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp409.value) {
        {
            org$pandalanguage$pandac$Type* $tmp413 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp412 = $tmp413;
            org$pandalanguage$pandac$Type* $tmp411 = $tmp412;
            org$pandalanguage$pandac$Type* $tmp410 = $tmp411;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp411));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp412));
            return $tmp410;
        }
        }
        else {
        panda$core$Bit $tmp414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp414.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp416 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9339->$data + 16));
            ref415 = *$tmp416;
            org$pandalanguage$pandac$Type* $tmp420 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
            org$pandalanguage$pandac$Position$init(&$tmp422);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp420, &$s421, ((panda$core$Int64) { 16 }), $tmp422, ((panda$core$Bit) { true }));
            org$pandalanguage$pandac$Type* $tmp419 = $tmp420;
            org$pandalanguage$pandac$Type* $tmp418 = $tmp419;
            org$pandalanguage$pandac$Type* $tmp417 = $tmp418;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp418));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp419));
            return $tmp417;
        }
        }
        else {
        panda$core$Bit $tmp423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp423.value) {
        {
            org$pandalanguage$pandac$Type** $tmp425 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9339->$data + 16));
            type424 = *$tmp425;
            org$pandalanguage$pandac$Type* $tmp427 = type424;
            org$pandalanguage$pandac$Type* $tmp426 = $tmp427;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp427));
            return $tmp426;
        }
        }
        else {
        panda$core$Bit $tmp428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp428.value) {
        {
            org$pandalanguage$pandac$Type** $tmp430 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9339->$data + 16));
            type429 = *$tmp430;
            org$pandalanguage$pandac$Type* $tmp432 = type429;
            org$pandalanguage$pandac$Type* $tmp431 = $tmp432;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp432));
            return $tmp431;
        }
        }
        else {
        panda$core$Bit $tmp433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp433.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp435 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9339->$data + 24));
            base434 = *$tmp435;
            org$pandalanguage$pandac$Type* $tmp440 = (($fn439) base434->$class->vtable[2])(base434);
            org$pandalanguage$pandac$Type* $tmp438 = $tmp440;
            org$pandalanguage$pandac$Type* $tmp437 = $tmp438;
            org$pandalanguage$pandac$Type* $tmp436 = $tmp437;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp437));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp438));
            return $tmp436;
        }
        }
        else {
        panda$core$Bit $tmp441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp441.value) {
        {
            org$pandalanguage$pandac$Type** $tmp443 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9339->$data + 16));
            type442 = *$tmp443;
            org$pandalanguage$pandac$Type* $tmp445 = type442;
            org$pandalanguage$pandac$Type* $tmp444 = $tmp445;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp445));
            return $tmp444;
        }
        }
        else {
        panda$core$Bit $tmp446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp446.value) {
        {
            org$pandalanguage$pandac$Type** $tmp448 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9339->$data + 16));
            type447 = *$tmp448;
            panda$core$Int64* $tmp450 = ((panda$core$Int64*) ((char*) $match$66_9339->$data + 24));
            id449 = *$tmp450;
            org$pandalanguage$pandac$Type* $tmp452 = type447;
            org$pandalanguage$pandac$Type* $tmp451 = $tmp452;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp452));
            return $tmp451;
        }
        }
        else {
        panda$core$Bit $tmp453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp453.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp455 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9339->$data + 0));
            base454 = *$tmp455;
            org$pandalanguage$pandac$Type* $tmp460 = (($fn459) base454->$class->vtable[2])(base454);
            org$pandalanguage$pandac$Type* $tmp458 = $tmp460;
            org$pandalanguage$pandac$Type* $tmp457 = $tmp458;
            org$pandalanguage$pandac$Type* $tmp456 = $tmp457;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp457));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp458));
            return $tmp456;
        }
        }
        else {
        panda$core$Bit $tmp461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp461.value) {
        {
            org$pandalanguage$pandac$Type** $tmp463 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9339->$data + 16));
            type462 = *$tmp463;
            org$pandalanguage$pandac$Type* $tmp465 = type462;
            org$pandalanguage$pandac$Type* $tmp464 = $tmp465;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp465));
            return $tmp464;
        }
        }
        else {
        panda$core$Bit $tmp466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp466.value) {
        {
            org$pandalanguage$pandac$Type* $tmp470 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp469 = $tmp470;
            org$pandalanguage$pandac$Type* $tmp468 = $tmp469;
            org$pandalanguage$pandac$Type* $tmp467 = $tmp468;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp468));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp469));
            return $tmp467;
        }
        }
        else {
        panda$core$Bit $tmp471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp471.value) {
        {
            org$pandalanguage$pandac$Type** $tmp473 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9339->$data + 16));
            type472 = *$tmp473;
            org$pandalanguage$pandac$Type* $tmp475 = type472;
            org$pandalanguage$pandac$Type* $tmp474 = $tmp475;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp475));
            return $tmp474;
        }
        }
        else {
        panda$core$Bit $tmp476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp476.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp478 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9339->$data + 24));
            ifTrue477 = *$tmp478;
            org$pandalanguage$pandac$IRNode** $tmp480 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9339->$data + 32));
            ifFalse479 = *$tmp480;
            org$pandalanguage$pandac$Type* $tmp483 = (($fn482) ifTrue477->$class->vtable[2])(ifTrue477);
            org$pandalanguage$pandac$Type* $tmp481 = $tmp483;
            org$pandalanguage$pandac$Type* $tmp486 = (($fn485) ifFalse479->$class->vtable[2])(ifFalse479);
            org$pandalanguage$pandac$Type* $tmp484 = $tmp486;
            panda$core$Bit $tmp487 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp481, $tmp484);
            PANDA_ASSERT($tmp487.value);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp484));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp481));
            org$pandalanguage$pandac$Type* $tmp492 = (($fn491) ifTrue477->$class->vtable[2])(ifTrue477);
            org$pandalanguage$pandac$Type* $tmp490 = $tmp492;
            org$pandalanguage$pandac$Type* $tmp489 = $tmp490;
            org$pandalanguage$pandac$Type* $tmp488 = $tmp489;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp489));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp490));
            return $tmp488;
        }
        }
        else {
        panda$core$Bit $tmp493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp493.value) {
        {
            org$pandalanguage$pandac$Type* $tmp497 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp496 = $tmp497;
            org$pandalanguage$pandac$Type* $tmp495 = $tmp496;
            org$pandalanguage$pandac$Type* $tmp494 = $tmp495;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp495));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp496));
            return $tmp494;
        }
        }
        else {
        panda$core$Bit $tmp498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp498.value) {
        {
            org$pandalanguage$pandac$Type* $tmp502 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp501 = $tmp502;
            org$pandalanguage$pandac$Type* $tmp500 = $tmp501;
            org$pandalanguage$pandac$Type* $tmp499 = $tmp500;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp500));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp501));
            return $tmp499;
        }
        }
        else {
        panda$core$Bit $tmp503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp503.value) {
        {
            org$pandalanguage$pandac$Type** $tmp505 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9339->$data + 16));
            type504 = *$tmp505;
            org$pandalanguage$pandac$Type* $tmp507 = type504;
            org$pandalanguage$pandac$Type* $tmp506 = $tmp507;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp507));
            return $tmp506;
        }
        }
        else {
        panda$core$Bit $tmp508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp508.value) {
        {
            org$pandalanguage$pandac$Type** $tmp510 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9339->$data + 16));
            type509 = *$tmp510;
            org$pandalanguage$pandac$Type* $tmp512 = type509;
            org$pandalanguage$pandac$Type* $tmp511 = $tmp512;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp512));
            return $tmp511;
        }
        }
        else {
        panda$core$Bit $tmp513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp513.value) {
        {
            org$pandalanguage$pandac$Type* $tmp517 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp516 = $tmp517;
            org$pandalanguage$pandac$Type* $tmp515 = $tmp516;
            org$pandalanguage$pandac$Type* $tmp514 = $tmp515;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp515));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp516));
            return $tmp514;
        }
        }
        else {
        panda$core$Bit $tmp518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp518.value) {
        {
            org$pandalanguage$pandac$Type* $tmp522 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp521 = $tmp522;
            org$pandalanguage$pandac$Type* $tmp520 = $tmp521;
            org$pandalanguage$pandac$Type* $tmp519 = $tmp520;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp520));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp521));
            return $tmp519;
        }
        }
        else {
        panda$core$Bit $tmp523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9339->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp523.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp525 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$66_9339->$data + 16));
            variable524 = *$tmp525;
            org$pandalanguage$pandac$Type* $tmp527 = variable524->type;
            org$pandalanguage$pandac$Type* $tmp526 = $tmp527;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp527));
            return $tmp526;
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
org$pandalanguage$pandac$Position org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$136_9528;
    org$pandalanguage$pandac$Position position530;
    org$pandalanguage$pandac$Position position534;
    org$pandalanguage$pandac$Position position538;
    org$pandalanguage$pandac$Position position542;
    org$pandalanguage$pandac$Position position546;
    org$pandalanguage$pandac$Position position550;
    org$pandalanguage$pandac$Position position554;
    org$pandalanguage$pandac$Position position558;
    org$pandalanguage$pandac$Position position562;
    org$pandalanguage$pandac$Position position566;
    org$pandalanguage$pandac$Position position570;
    org$pandalanguage$pandac$Position position574;
    org$pandalanguage$pandac$IRNode* target578;
    org$pandalanguage$pandac$Position position584;
    org$pandalanguage$pandac$IRNode* expr588;
    org$pandalanguage$pandac$Position position594;
    org$pandalanguage$pandac$Position position598;
    org$pandalanguage$pandac$Position position602;
    org$pandalanguage$pandac$Position position606;
    org$pandalanguage$pandac$Position position610;
    org$pandalanguage$pandac$Position position614;
    org$pandalanguage$pandac$Position position618;
    org$pandalanguage$pandac$Position position622;
    org$pandalanguage$pandac$Position position626;
    org$pandalanguage$pandac$Position position630;
    org$pandalanguage$pandac$Position position634;
    org$pandalanguage$pandac$Position position638;
    org$pandalanguage$pandac$Position position642;
    org$pandalanguage$pandac$Position position646;
    org$pandalanguage$pandac$Position position650;
    org$pandalanguage$pandac$IRNode* base654;
    org$pandalanguage$pandac$Position position660;
    org$pandalanguage$pandac$Position position664;
    org$pandalanguage$pandac$Position position668;
    org$pandalanguage$pandac$Position position672;
    org$pandalanguage$pandac$Position position676;
    org$pandalanguage$pandac$Position position680;
    org$pandalanguage$pandac$Position position684;
    org$pandalanguage$pandac$Position position688;
    org$pandalanguage$pandac$Position position692;
    org$pandalanguage$pandac$Position position696;
    org$pandalanguage$pandac$Position position700;
    org$pandalanguage$pandac$Position position704;
    org$pandalanguage$pandac$Position position708;
    org$pandalanguage$pandac$Position position712;
    {
        $match$136_9528 = self;
        panda$core$Bit $tmp529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp529.value) {
        {
            org$pandalanguage$pandac$Position* $tmp531 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position530 = *$tmp531;
            org$pandalanguage$pandac$Position $tmp532 = position530;
            return $tmp532;
        }
        }
        else {
        panda$core$Bit $tmp533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp533.value) {
        {
            org$pandalanguage$pandac$Position* $tmp535 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position534 = *$tmp535;
            org$pandalanguage$pandac$Position $tmp536 = position534;
            return $tmp536;
        }
        }
        else {
        panda$core$Bit $tmp537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp537.value) {
        {
            org$pandalanguage$pandac$Position* $tmp539 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position538 = *$tmp539;
            org$pandalanguage$pandac$Position $tmp540 = position538;
            return $tmp540;
        }
        }
        else {
        panda$core$Bit $tmp541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp541.value) {
        {
            org$pandalanguage$pandac$Position* $tmp543 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position542 = *$tmp543;
            org$pandalanguage$pandac$Position $tmp544 = position542;
            return $tmp544;
        }
        }
        else {
        panda$core$Bit $tmp545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp545.value) {
        {
            org$pandalanguage$pandac$Position* $tmp547 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position546 = *$tmp547;
            org$pandalanguage$pandac$Position $tmp548 = position546;
            return $tmp548;
        }
        }
        else {
        panda$core$Bit $tmp549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp549.value) {
        {
            org$pandalanguage$pandac$Position* $tmp551 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position550 = *$tmp551;
            org$pandalanguage$pandac$Position $tmp552 = position550;
            return $tmp552;
        }
        }
        else {
        panda$core$Bit $tmp553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp553.value) {
        {
            org$pandalanguage$pandac$Position* $tmp555 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position554 = *$tmp555;
            org$pandalanguage$pandac$Position $tmp556 = position554;
            return $tmp556;
        }
        }
        else {
        panda$core$Bit $tmp557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp557.value) {
        {
            org$pandalanguage$pandac$Position* $tmp559 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position558 = *$tmp559;
            org$pandalanguage$pandac$Position $tmp560 = position558;
            return $tmp560;
        }
        }
        else {
        panda$core$Bit $tmp561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp561.value) {
        {
            org$pandalanguage$pandac$Position* $tmp563 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position562 = *$tmp563;
            org$pandalanguage$pandac$Position $tmp564 = position562;
            return $tmp564;
        }
        }
        else {
        panda$core$Bit $tmp565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp565.value) {
        {
            org$pandalanguage$pandac$Position* $tmp567 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position566 = *$tmp567;
            org$pandalanguage$pandac$Position $tmp568 = position566;
            return $tmp568;
        }
        }
        else {
        panda$core$Bit $tmp569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp569.value) {
        {
            org$pandalanguage$pandac$Position* $tmp571 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position570 = *$tmp571;
            org$pandalanguage$pandac$Position $tmp572 = position570;
            return $tmp572;
        }
        }
        else {
        panda$core$Bit $tmp573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp573.value) {
        {
            org$pandalanguage$pandac$Position* $tmp575 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position574 = *$tmp575;
            org$pandalanguage$pandac$Position $tmp576 = position574;
            return $tmp576;
        }
        }
        else {
        panda$core$Bit $tmp577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp577.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp579 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$136_9528->$data + 0));
            target578 = *$tmp579;
            org$pandalanguage$pandac$Position $tmp582 = (($fn581) target578->$class->vtable[3])(target578);
            org$pandalanguage$pandac$Position $tmp580 = $tmp582;
            return $tmp580;
        }
        }
        else {
        panda$core$Bit $tmp583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp583.value) {
        {
            org$pandalanguage$pandac$Position* $tmp585 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position584 = *$tmp585;
            org$pandalanguage$pandac$Position $tmp586 = position584;
            return $tmp586;
        }
        }
        else {
        panda$core$Bit $tmp587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp587.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp589 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$136_9528->$data + 0));
            expr588 = *$tmp589;
            org$pandalanguage$pandac$Position $tmp592 = (($fn591) expr588->$class->vtable[3])(expr588);
            org$pandalanguage$pandac$Position $tmp590 = $tmp592;
            return $tmp590;
        }
        }
        else {
        panda$core$Bit $tmp593 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp593.value) {
        {
            org$pandalanguage$pandac$Position* $tmp595 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position594 = *$tmp595;
            org$pandalanguage$pandac$Position $tmp596 = position594;
            return $tmp596;
        }
        }
        else {
        panda$core$Bit $tmp597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp597.value) {
        {
            org$pandalanguage$pandac$Position* $tmp599 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position598 = *$tmp599;
            org$pandalanguage$pandac$Position $tmp600 = position598;
            return $tmp600;
        }
        }
        else {
        panda$core$Bit $tmp601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp601.value) {
        {
            org$pandalanguage$pandac$Position* $tmp603 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position602 = *$tmp603;
            org$pandalanguage$pandac$Position $tmp604 = position602;
            return $tmp604;
        }
        }
        else {
        panda$core$Bit $tmp605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp605.value) {
        {
            org$pandalanguage$pandac$Position* $tmp607 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position606 = *$tmp607;
            org$pandalanguage$pandac$Position $tmp608 = position606;
            return $tmp608;
        }
        }
        else {
        panda$core$Bit $tmp609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp609.value) {
        {
            org$pandalanguage$pandac$Position* $tmp611 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position610 = *$tmp611;
            org$pandalanguage$pandac$Position $tmp612 = position610;
            return $tmp612;
        }
        }
        else {
        panda$core$Bit $tmp613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp613.value) {
        {
            org$pandalanguage$pandac$Position* $tmp615 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position614 = *$tmp615;
            org$pandalanguage$pandac$Position $tmp616 = position614;
            return $tmp616;
        }
        }
        else {
        panda$core$Bit $tmp617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp617.value) {
        {
            org$pandalanguage$pandac$Position* $tmp619 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position618 = *$tmp619;
            org$pandalanguage$pandac$Position $tmp620 = position618;
            return $tmp620;
        }
        }
        else {
        panda$core$Bit $tmp621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp621.value) {
        {
            org$pandalanguage$pandac$Position* $tmp623 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position622 = *$tmp623;
            org$pandalanguage$pandac$Position $tmp624 = position622;
            return $tmp624;
        }
        }
        else {
        panda$core$Bit $tmp625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp625.value) {
        {
            org$pandalanguage$pandac$Position* $tmp627 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position626 = *$tmp627;
            org$pandalanguage$pandac$Position $tmp628 = position626;
            return $tmp628;
        }
        }
        else {
        panda$core$Bit $tmp629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp629.value) {
        {
            org$pandalanguage$pandac$Position* $tmp631 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position630 = *$tmp631;
            org$pandalanguage$pandac$Position $tmp632 = position630;
            return $tmp632;
        }
        }
        else {
        panda$core$Bit $tmp633 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp633.value) {
        {
            org$pandalanguage$pandac$Position* $tmp635 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position634 = *$tmp635;
            org$pandalanguage$pandac$Position $tmp636 = position634;
            return $tmp636;
        }
        }
        else {
        panda$core$Bit $tmp637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp637.value) {
        {
            org$pandalanguage$pandac$Position* $tmp639 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position638 = *$tmp639;
            org$pandalanguage$pandac$Position $tmp640 = position638;
            return $tmp640;
        }
        }
        else {
        panda$core$Bit $tmp641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp641.value) {
        {
            org$pandalanguage$pandac$Position* $tmp643 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position642 = *$tmp643;
            org$pandalanguage$pandac$Position $tmp644 = position642;
            return $tmp644;
        }
        }
        else {
        panda$core$Bit $tmp645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp645.value) {
        {
            org$pandalanguage$pandac$Position* $tmp647 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position646 = *$tmp647;
            org$pandalanguage$pandac$Position $tmp648 = position646;
            return $tmp648;
        }
        }
        else {
        panda$core$Bit $tmp649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp649.value) {
        {
            org$pandalanguage$pandac$Position* $tmp651 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position650 = *$tmp651;
            org$pandalanguage$pandac$Position $tmp652 = position650;
            return $tmp652;
        }
        }
        else {
        panda$core$Bit $tmp653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp653.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp655 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$136_9528->$data + 0));
            base654 = *$tmp655;
            org$pandalanguage$pandac$Position $tmp658 = (($fn657) base654->$class->vtable[3])(base654);
            org$pandalanguage$pandac$Position $tmp656 = $tmp658;
            return $tmp656;
        }
        }
        else {
        panda$core$Bit $tmp659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp659.value) {
        {
            org$pandalanguage$pandac$Position* $tmp661 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position660 = *$tmp661;
            org$pandalanguage$pandac$Position $tmp662 = position660;
            return $tmp662;
        }
        }
        else {
        panda$core$Bit $tmp663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp663.value) {
        {
            org$pandalanguage$pandac$Position* $tmp665 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position664 = *$tmp665;
            org$pandalanguage$pandac$Position $tmp666 = position664;
            return $tmp666;
        }
        }
        else {
        panda$core$Bit $tmp667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp667.value) {
        {
            org$pandalanguage$pandac$Position* $tmp669 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position668 = *$tmp669;
            org$pandalanguage$pandac$Position $tmp670 = position668;
            return $tmp670;
        }
        }
        else {
        panda$core$Bit $tmp671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp671.value) {
        {
            org$pandalanguage$pandac$Position* $tmp673 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position672 = *$tmp673;
            org$pandalanguage$pandac$Position $tmp674 = position672;
            return $tmp674;
        }
        }
        else {
        panda$core$Bit $tmp675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp675.value) {
        {
            org$pandalanguage$pandac$Position* $tmp677 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position676 = *$tmp677;
            org$pandalanguage$pandac$Position $tmp678 = position676;
            return $tmp678;
        }
        }
        else {
        panda$core$Bit $tmp679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp679.value) {
        {
            org$pandalanguage$pandac$Position* $tmp681 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position680 = *$tmp681;
            org$pandalanguage$pandac$Position $tmp682 = position680;
            return $tmp682;
        }
        }
        else {
        panda$core$Bit $tmp683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp683.value) {
        {
            org$pandalanguage$pandac$Position* $tmp685 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position684 = *$tmp685;
            org$pandalanguage$pandac$Position $tmp686 = position684;
            return $tmp686;
        }
        }
        else {
        panda$core$Bit $tmp687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp687.value) {
        {
            org$pandalanguage$pandac$Position* $tmp689 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position688 = *$tmp689;
            org$pandalanguage$pandac$Position $tmp690 = position688;
            return $tmp690;
        }
        }
        else {
        panda$core$Bit $tmp691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp691.value) {
        {
            org$pandalanguage$pandac$Position* $tmp693 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position692 = *$tmp693;
            org$pandalanguage$pandac$Position $tmp694 = position692;
            return $tmp694;
        }
        }
        else {
        panda$core$Bit $tmp695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp695.value) {
        {
            org$pandalanguage$pandac$Position* $tmp697 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position696 = *$tmp697;
            org$pandalanguage$pandac$Position $tmp698 = position696;
            return $tmp698;
        }
        }
        else {
        panda$core$Bit $tmp699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp699.value) {
        {
            org$pandalanguage$pandac$Position* $tmp701 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position700 = *$tmp701;
            org$pandalanguage$pandac$Position $tmp702 = position700;
            return $tmp702;
        }
        }
        else {
        panda$core$Bit $tmp703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp703.value) {
        {
            org$pandalanguage$pandac$Position* $tmp705 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position704 = *$tmp705;
            org$pandalanguage$pandac$Position $tmp706 = position704;
            return $tmp706;
        }
        }
        else {
        panda$core$Bit $tmp707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp707.value) {
        {
            org$pandalanguage$pandac$Position* $tmp709 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position708 = *$tmp709;
            org$pandalanguage$pandac$Position $tmp710 = position708;
            return $tmp710;
        }
        }
        else {
        panda$core$Bit $tmp711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9528->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp711.value) {
        {
            org$pandalanguage$pandac$Position* $tmp713 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9528->$data + 0));
            position712 = *$tmp713;
            org$pandalanguage$pandac$Position $tmp714 = position712;
            return $tmp714;
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
panda$core$Bit org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$233_9715;
    org$pandalanguage$pandac$IRNode* test717;
    org$pandalanguage$pandac$IRNode* msg719;
    org$pandalanguage$pandac$IRNode* left730;
    org$pandalanguage$pandac$parser$Token$Kind op732;
    org$pandalanguage$pandac$IRNode* right734;
    panda$core$Bit bit749;
    panda$collections$ImmutableArray* statements753;
    panda$collections$Iterator* Iter$241$17755;
    org$pandalanguage$pandac$IRNode* s770;
    panda$core$Bit tmp1779;
    panda$core$Bit tmp2780;
    panda$core$String* label784;
    org$pandalanguage$pandac$MethodRef* m788;
    panda$collections$ImmutableArray* args790;
    panda$collections$Iterator* Iter$253$17794;
    org$pandalanguage$pandac$IRNode* arg809;
    panda$core$Bit tmp3818;
    panda$core$Bit tmp4819;
    org$pandalanguage$pandac$IRNode* value823;
    org$pandalanguage$pandac$Type* type825;
    org$pandalanguage$pandac$ChoiceEntry* ce829;
    org$pandalanguage$pandac$IRNode* base833;
    org$pandalanguage$pandac$ChoiceEntry* ce835;
    panda$core$Int64 field837;
    org$pandalanguage$pandac$Type* type841;
    org$pandalanguage$pandac$IRNode* call843;
    org$pandalanguage$pandac$Type* Type849;
    panda$core$String* label853;
    org$pandalanguage$pandac$IRNode* target857;
    org$pandalanguage$pandac$IRNode* value859;
    panda$core$String* label868;
    panda$collections$ImmutableArray* statements870;
    org$pandalanguage$pandac$IRNode* test872;
    panda$collections$Iterator* Iter$277$17877;
    org$pandalanguage$pandac$IRNode* s892;
    panda$core$Bit tmp5901;
    panda$core$Bit tmp6902;
    org$pandalanguage$pandac$IRNode* base908;
    org$pandalanguage$pandac$FieldDecl* field910;
    org$pandalanguage$pandac$IRNode* test914;
    panda$collections$ImmutableArray* ifTrue916;
    org$pandalanguage$pandac$IRNode* ifFalse918;
    panda$collections$Iterator* Iter$291$17923;
    org$pandalanguage$pandac$IRNode* s938;
    panda$core$Bit tmp7947;
    panda$core$Bit tmp8948;
    panda$core$UInt64 value954;
    org$pandalanguage$pandac$IRNode* value958;
    org$pandalanguage$pandac$IRNode* value964;
    panda$core$String* label970;
    panda$collections$ImmutableArray* statements972;
    panda$collections$Iterator* Iter$304$17974;
    org$pandalanguage$pandac$IRNode* s989;
    panda$core$Bit tmp9998;
    panda$core$Bit tmp10999;
    org$pandalanguage$pandac$IRNode* value1003;
    panda$collections$ImmutableArray* whens1005;
    panda$collections$ImmutableArray* other1007;
    panda$collections$Iterator* Iter$314$171012;
    org$pandalanguage$pandac$IRNode* w1027;
    panda$core$Bit tmp111036;
    panda$core$Bit tmp121037;
    panda$collections$Iterator* Iter$319$171039;
    org$pandalanguage$pandac$IRNode* s1054;
    panda$core$Bit tmp131063;
    panda$core$Bit tmp141064;
    org$pandalanguage$pandac$IRNode* target1068;
    org$pandalanguage$pandac$MethodRef* m1070;
    panda$core$UInt64 value1074;
    org$pandalanguage$pandac$parser$Token$Kind op1080;
    org$pandalanguage$pandac$IRNode* base1082;
    panda$core$String* label1088;
    org$pandalanguage$pandac$IRNode* target1090;
    org$pandalanguage$pandac$IRNode* list1092;
    panda$collections$ImmutableArray* statements1094;
    panda$collections$Iterator* Iter$338$171099;
    org$pandalanguage$pandac$IRNode* s1114;
    panda$core$Bit tmp151123;
    panda$core$Bit tmp161124;
    panda$core$Real64 value1128;
    org$pandalanguage$pandac$IRNode* value1132;
    panda$core$Int64 id1138;
    org$pandalanguage$pandac$IRNode* base1142;
    panda$core$Int64 id1144;
    panda$core$String* str1152;
    org$pandalanguage$pandac$IRNode* test1158;
    org$pandalanguage$pandac$IRNode* ifTrue1160;
    org$pandalanguage$pandac$IRNode* ifFalse1162;
    org$pandalanguage$pandac$Type* type1178;
    panda$core$String* name1182;
    org$pandalanguage$pandac$IRNode* base1185;
    panda$collections$ImmutableArray* args1187;
    org$pandalanguage$pandac$IRNode* target1190;
    panda$collections$ImmutableArray* methods1192;
    panda$collections$ImmutableArray* args1194;
    org$pandalanguage$pandac$IRNode* target1197;
    panda$collections$ImmutableArray* methods1199;
    org$pandalanguage$pandac$IRNode* start1202;
    org$pandalanguage$pandac$IRNode* end1204;
    panda$core$Bit inclusive1206;
    org$pandalanguage$pandac$IRNode* step1208;
    org$pandalanguage$pandac$Variable$Kind kind1211;
    panda$collections$ImmutableArray* decls1213;
    panda$collections$Iterator* Iter$373$171215;
    org$pandalanguage$pandac$IRNode* d1230;
    panda$core$Bit tmp171239;
    panda$core$Bit tmp181240;
    org$pandalanguage$pandac$Variable* variable1244;
    panda$collections$ImmutableArray* tests1248;
    panda$collections$ImmutableArray* statements1250;
    panda$collections$Iterator* Iter$382$171252;
    org$pandalanguage$pandac$IRNode* t1267;
    panda$core$Bit tmp191276;
    panda$core$Bit tmp201277;
    panda$collections$Iterator* Iter$387$171279;
    org$pandalanguage$pandac$IRNode* s1294;
    panda$core$Bit tmp211303;
    panda$core$Bit tmp221304;
    panda$core$String* label1308;
    org$pandalanguage$pandac$IRNode* test1310;
    panda$collections$ImmutableArray* statements1312;
    panda$collections$Iterator* Iter$397$171317;
    org$pandalanguage$pandac$IRNode* s1332;
    panda$core$Bit tmp231341;
    panda$core$Bit tmp241342;
    {
        $match$233_9715 = self;
        panda$core$Bit $tmp716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp716.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp718 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 16));
            test717 = *$tmp718;
            org$pandalanguage$pandac$IRNode** $tmp720 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 24));
            msg719 = *$tmp720;
            panda$core$Bit $tmp724 = (($fn723) test717->$class->vtable[4])(test717);
            bool $tmp722 = $tmp724.value;
            if ($tmp722) goto $l725;
            panda$core$Bit $tmp727 = (($fn726) msg719->$class->vtable[4])(msg719);
            $tmp722 = $tmp727.value;
            $l725:;
            panda$core$Bit $tmp728 = { $tmp722 };
            panda$core$Bit $tmp721 = $tmp728;
            return $tmp721;
        }
        }
        else {
        panda$core$Bit $tmp729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp729.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp731 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 24));
            left730 = *$tmp731;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp733 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$233_9715->$data + 32));
            op732 = *$tmp733;
            org$pandalanguage$pandac$IRNode** $tmp735 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 40));
            right734 = *$tmp735;
            panda$core$Bit $tmp739 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(op732);
            bool $tmp738 = $tmp739.value;
            if ($tmp738) goto $l740;
            panda$core$Bit $tmp742 = (($fn741) left730->$class->vtable[4])(left730);
            $tmp738 = $tmp742.value;
            $l740:;
            panda$core$Bit $tmp743 = { $tmp738 };
            bool $tmp737 = $tmp743.value;
            if ($tmp737) goto $l744;
            panda$core$Bit $tmp746 = (($fn745) right734->$class->vtable[4])(right734);
            $tmp737 = $tmp746.value;
            $l744:;
            panda$core$Bit $tmp747 = { $tmp737 };
            panda$core$Bit $tmp736 = $tmp747;
            return $tmp736;
        }
        }
        else {
        panda$core$Bit $tmp748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp748.value) {
        {
            panda$core$Bit* $tmp750 = ((panda$core$Bit*) ((char*) $match$233_9715->$data + 24));
            bit749 = *$tmp750;
            panda$core$Bit $tmp751 = ((panda$core$Bit) { false });
            return $tmp751;
        }
        }
        else {
        panda$core$Bit $tmp752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp752.value) {
        {
            panda$collections$ImmutableArray** $tmp754 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9715->$data + 16));
            statements753 = *$tmp754;
            {
                ITable* $tmp758 = ((panda$collections$Iterable*) statements753)->$class->itable;
                while ($tmp758->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp758 = $tmp758->next;
                }
                $fn760 $tmp759 = $tmp758->methods[0];
                panda$collections$Iterator* $tmp761 = $tmp759(((panda$collections$Iterable*) statements753));
                panda$collections$Iterator* $tmp757 = $tmp761;
                panda$collections$Iterator* $tmp756 = $tmp757;
                Iter$241$17755 = $tmp756;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp756));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp757));
                $l762:;
                ITable* $tmp765 = Iter$241$17755->$class->itable;
                while ($tmp765->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp765 = $tmp765->next;
                }
                $fn767 $tmp766 = $tmp765->methods[0];
                panda$core$Bit $tmp768 = $tmp766(Iter$241$17755);
                panda$core$Bit $tmp769 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp768);
                bool $tmp764 = $tmp769.value;
                if (!$tmp764) goto $l763;
                {
                    ITable* $tmp773 = Iter$241$17755->$class->itable;
                    while ($tmp773->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp773 = $tmp773->next;
                    }
                    $fn775 $tmp774 = $tmp773->methods[1];
                    panda$core$Object* $tmp776 = $tmp774(Iter$241$17755);
                    panda$core$Object* $tmp772 = $tmp776;
                    org$pandalanguage$pandac$IRNode* $tmp771 = ((org$pandalanguage$pandac$IRNode*) $tmp772);
                    s770 = $tmp771;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp771));
                    panda$core$Panda$unref$panda$core$Object($tmp772);
                    panda$core$Bit $tmp778 = (($fn777) s770->$class->vtable[4])(s770);
                    if ($tmp778.value) {
                    {
                        {
                            tmp1779 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s770));
                            {
                                tmp2780 = tmp1779;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$241$17755));
                                panda$core$Bit $tmp781 = tmp2780;
                                return $tmp781;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s770));
                }
                goto $l762;
                $l763:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$241$17755));
            }
            panda$core$Bit $tmp782 = ((panda$core$Bit) { false });
            return $tmp782;
        }
        }
        else {
        panda$core$Bit $tmp783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp783.value) {
        {
            panda$core$String** $tmp785 = ((panda$core$String**) ((char*) $match$233_9715->$data + 16));
            label784 = *$tmp785;
            panda$core$Bit $tmp786 = ((panda$core$Bit) { false });
            return $tmp786;
        }
        }
        else {
        panda$core$Bit $tmp787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp787.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp789 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$233_9715->$data + 24));
            m788 = *$tmp789;
            panda$collections$ImmutableArray** $tmp791 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9715->$data + 32));
            args790 = *$tmp791;
            panda$core$Bit $tmp792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m788->value->methodKind.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp792.value) {
            {
                panda$core$Bit $tmp793 = ((panda$core$Bit) { true });
                return $tmp793;
            }
            }
            {
                ITable* $tmp797 = ((panda$collections$Iterable*) args790)->$class->itable;
                while ($tmp797->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp797 = $tmp797->next;
                }
                $fn799 $tmp798 = $tmp797->methods[0];
                panda$collections$Iterator* $tmp800 = $tmp798(((panda$collections$Iterable*) args790));
                panda$collections$Iterator* $tmp796 = $tmp800;
                panda$collections$Iterator* $tmp795 = $tmp796;
                Iter$253$17794 = $tmp795;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp795));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp796));
                $l801:;
                ITable* $tmp804 = Iter$253$17794->$class->itable;
                while ($tmp804->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp804 = $tmp804->next;
                }
                $fn806 $tmp805 = $tmp804->methods[0];
                panda$core$Bit $tmp807 = $tmp805(Iter$253$17794);
                panda$core$Bit $tmp808 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp807);
                bool $tmp803 = $tmp808.value;
                if (!$tmp803) goto $l802;
                {
                    ITable* $tmp812 = Iter$253$17794->$class->itable;
                    while ($tmp812->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp812 = $tmp812->next;
                    }
                    $fn814 $tmp813 = $tmp812->methods[1];
                    panda$core$Object* $tmp815 = $tmp813(Iter$253$17794);
                    panda$core$Object* $tmp811 = $tmp815;
                    org$pandalanguage$pandac$IRNode* $tmp810 = ((org$pandalanguage$pandac$IRNode*) $tmp811);
                    arg809 = $tmp810;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp810));
                    panda$core$Panda$unref$panda$core$Object($tmp811);
                    panda$core$Bit $tmp817 = (($fn816) arg809->$class->vtable[4])(arg809);
                    if ($tmp817.value) {
                    {
                        {
                            tmp3818 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg809));
                            {
                                tmp4819 = tmp3818;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$253$17794));
                                panda$core$Bit $tmp820 = tmp4819;
                                return $tmp820;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg809));
                }
                goto $l801;
                $l802:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$253$17794));
            }
            panda$core$Bit $tmp821 = ((panda$core$Bit) { false });
            return $tmp821;
        }
        }
        else {
        panda$core$Bit $tmp822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp822.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp824 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 16));
            value823 = *$tmp824;
            org$pandalanguage$pandac$Type** $tmp826 = ((org$pandalanguage$pandac$Type**) ((char*) $match$233_9715->$data + 24));
            type825 = *$tmp826;
            panda$core$Bit $tmp827 = ((panda$core$Bit) { false });
            return $tmp827;
        }
        }
        else {
        panda$core$Bit $tmp828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp828.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp830 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$233_9715->$data + 16));
            ce829 = *$tmp830;
            panda$core$Bit $tmp831 = ((panda$core$Bit) { false });
            return $tmp831;
        }
        }
        else {
        panda$core$Bit $tmp832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp832.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp834 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 16));
            base833 = *$tmp834;
            org$pandalanguage$pandac$ChoiceEntry** $tmp836 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$233_9715->$data + 24));
            ce835 = *$tmp836;
            panda$core$Int64* $tmp838 = ((panda$core$Int64*) ((char*) $match$233_9715->$data + 32));
            field837 = *$tmp838;
            panda$core$Bit $tmp839 = ((panda$core$Bit) { false });
            return $tmp839;
        }
        }
        else {
        panda$core$Bit $tmp840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp840.value) {
        {
            org$pandalanguage$pandac$Type** $tmp842 = ((org$pandalanguage$pandac$Type**) ((char*) $match$233_9715->$data + 16));
            type841 = *$tmp842;
            org$pandalanguage$pandac$IRNode** $tmp844 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 24));
            call843 = *$tmp844;
            panda$core$Bit $tmp847 = (($fn846) call843->$class->vtable[4])(call843);
            panda$core$Bit $tmp845 = $tmp847;
            return $tmp845;
        }
        }
        else {
        panda$core$Bit $tmp848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp848.value) {
        {
            org$pandalanguage$pandac$Type** $tmp850 = ((org$pandalanguage$pandac$Type**) ((char*) $match$233_9715->$data + 16));
            Type849 = *$tmp850;
            panda$core$Bit $tmp851 = ((panda$core$Bit) { false });
            return $tmp851;
        }
        }
        else {
        panda$core$Bit $tmp852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp852.value) {
        {
            panda$core$String** $tmp854 = ((panda$core$String**) ((char*) $match$233_9715->$data + 16));
            label853 = *$tmp854;
            panda$core$Bit $tmp855 = ((panda$core$Bit) { false });
            return $tmp855;
        }
        }
        else {
        panda$core$Bit $tmp856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp856.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp858 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 0));
            target857 = *$tmp858;
            org$pandalanguage$pandac$IRNode** $tmp860 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 8));
            value859 = *$tmp860;
            bool $tmp862 = ((panda$core$Bit) { value859 != NULL }).value;
            if (!$tmp862) goto $l863;
            panda$core$Bit $tmp865 = (($fn864) value859->$class->vtable[4])(value859);
            $tmp862 = $tmp865.value;
            $l863:;
            panda$core$Bit $tmp866 = { $tmp862 };
            panda$core$Bit $tmp861 = $tmp866;
            return $tmp861;
        }
        }
        else {
        panda$core$Bit $tmp867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp867.value) {
        {
            panda$core$String** $tmp869 = ((panda$core$String**) ((char*) $match$233_9715->$data + 16));
            label868 = *$tmp869;
            panda$collections$ImmutableArray** $tmp871 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9715->$data + 24));
            statements870 = *$tmp871;
            org$pandalanguage$pandac$IRNode** $tmp873 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 32));
            test872 = *$tmp873;
            panda$core$Bit $tmp875 = (($fn874) test872->$class->vtable[4])(test872);
            if ($tmp875.value) {
            {
                panda$core$Bit $tmp876 = ((panda$core$Bit) { true });
                return $tmp876;
            }
            }
            {
                ITable* $tmp880 = ((panda$collections$Iterable*) statements870)->$class->itable;
                while ($tmp880->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp880 = $tmp880->next;
                }
                $fn882 $tmp881 = $tmp880->methods[0];
                panda$collections$Iterator* $tmp883 = $tmp881(((panda$collections$Iterable*) statements870));
                panda$collections$Iterator* $tmp879 = $tmp883;
                panda$collections$Iterator* $tmp878 = $tmp879;
                Iter$277$17877 = $tmp878;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp878));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp879));
                $l884:;
                ITable* $tmp887 = Iter$277$17877->$class->itable;
                while ($tmp887->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp887 = $tmp887->next;
                }
                $fn889 $tmp888 = $tmp887->methods[0];
                panda$core$Bit $tmp890 = $tmp888(Iter$277$17877);
                panda$core$Bit $tmp891 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp890);
                bool $tmp886 = $tmp891.value;
                if (!$tmp886) goto $l885;
                {
                    ITable* $tmp895 = Iter$277$17877->$class->itable;
                    while ($tmp895->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp895 = $tmp895->next;
                    }
                    $fn897 $tmp896 = $tmp895->methods[1];
                    panda$core$Object* $tmp898 = $tmp896(Iter$277$17877);
                    panda$core$Object* $tmp894 = $tmp898;
                    org$pandalanguage$pandac$IRNode* $tmp893 = ((org$pandalanguage$pandac$IRNode*) $tmp894);
                    s892 = $tmp893;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp893));
                    panda$core$Panda$unref$panda$core$Object($tmp894);
                    panda$core$Bit $tmp900 = (($fn899) s892->$class->vtable[4])(s892);
                    if ($tmp900.value) {
                    {
                        {
                            tmp5901 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s892));
                            {
                                tmp6902 = tmp5901;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$277$17877));
                                panda$core$Bit $tmp903 = tmp6902;
                                return $tmp903;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s892));
                }
                goto $l884;
                $l885:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$277$17877));
            }
            panda$core$Bit $tmp904 = ((panda$core$Bit) { false });
            return $tmp904;
        }
        }
        else {
        panda$core$Bit $tmp905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp905.value) {
        {
            panda$core$Bit $tmp906 = ((panda$core$Bit) { true });
            return $tmp906;
        }
        }
        else {
        panda$core$Bit $tmp907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp907.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp909 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 24));
            base908 = *$tmp909;
            org$pandalanguage$pandac$FieldDecl** $tmp911 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$233_9715->$data + 32));
            field910 = *$tmp911;
            panda$core$Bit $tmp912 = ((panda$core$Bit) { false });
            return $tmp912;
        }
        }
        else {
        panda$core$Bit $tmp913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp913.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp915 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 16));
            test914 = *$tmp915;
            panda$collections$ImmutableArray** $tmp917 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9715->$data + 24));
            ifTrue916 = *$tmp917;
            org$pandalanguage$pandac$IRNode** $tmp919 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 32));
            ifFalse918 = *$tmp919;
            panda$core$Bit $tmp921 = (($fn920) test914->$class->vtable[4])(test914);
            if ($tmp921.value) {
            {
                panda$core$Bit $tmp922 = ((panda$core$Bit) { true });
                return $tmp922;
            }
            }
            {
                ITable* $tmp926 = ((panda$collections$Iterable*) ifTrue916)->$class->itable;
                while ($tmp926->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp926 = $tmp926->next;
                }
                $fn928 $tmp927 = $tmp926->methods[0];
                panda$collections$Iterator* $tmp929 = $tmp927(((panda$collections$Iterable*) ifTrue916));
                panda$collections$Iterator* $tmp925 = $tmp929;
                panda$collections$Iterator* $tmp924 = $tmp925;
                Iter$291$17923 = $tmp924;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp924));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp925));
                $l930:;
                ITable* $tmp933 = Iter$291$17923->$class->itable;
                while ($tmp933->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp933 = $tmp933->next;
                }
                $fn935 $tmp934 = $tmp933->methods[0];
                panda$core$Bit $tmp936 = $tmp934(Iter$291$17923);
                panda$core$Bit $tmp937 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp936);
                bool $tmp932 = $tmp937.value;
                if (!$tmp932) goto $l931;
                {
                    ITable* $tmp941 = Iter$291$17923->$class->itable;
                    while ($tmp941->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp941 = $tmp941->next;
                    }
                    $fn943 $tmp942 = $tmp941->methods[1];
                    panda$core$Object* $tmp944 = $tmp942(Iter$291$17923);
                    panda$core$Object* $tmp940 = $tmp944;
                    org$pandalanguage$pandac$IRNode* $tmp939 = ((org$pandalanguage$pandac$IRNode*) $tmp940);
                    s938 = $tmp939;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp939));
                    panda$core$Panda$unref$panda$core$Object($tmp940);
                    panda$core$Bit $tmp946 = (($fn945) s938->$class->vtable[4])(s938);
                    if ($tmp946.value) {
                    {
                        {
                            tmp7947 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s938));
                            {
                                tmp8948 = tmp7947;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$291$17923));
                                panda$core$Bit $tmp949 = tmp8948;
                                return $tmp949;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s938));
                }
                goto $l930;
                $l931:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$291$17923));
            }
            panda$core$Bit $tmp952 = (($fn951) ifFalse918->$class->vtable[4])(ifFalse918);
            panda$core$Bit $tmp950 = $tmp952;
            return $tmp950;
        }
        }
        else {
        panda$core$Bit $tmp953 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp953.value) {
        {
            panda$core$UInt64* $tmp955 = ((panda$core$UInt64*) ((char*) $match$233_9715->$data + 24));
            value954 = *$tmp955;
            panda$core$Bit $tmp956 = ((panda$core$Bit) { false });
            return $tmp956;
        }
        }
        else {
        panda$core$Bit $tmp957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp957.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp959 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 16));
            value958 = *$tmp959;
            panda$core$Bit $tmp962 = (($fn961) value958->$class->vtable[4])(value958);
            panda$core$Bit $tmp960 = $tmp962;
            return $tmp960;
        }
        }
        else {
        panda$core$Bit $tmp963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp963.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp965 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 16));
            value964 = *$tmp965;
            panda$core$Bit $tmp968 = (($fn967) value964->$class->vtable[4])(value964);
            panda$core$Bit $tmp966 = $tmp968;
            return $tmp966;
        }
        }
        else {
        panda$core$Bit $tmp969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp969.value) {
        {
            panda$core$String** $tmp971 = ((panda$core$String**) ((char*) $match$233_9715->$data + 16));
            label970 = *$tmp971;
            panda$collections$ImmutableArray** $tmp973 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9715->$data + 24));
            statements972 = *$tmp973;
            {
                ITable* $tmp977 = ((panda$collections$Iterable*) statements972)->$class->itable;
                while ($tmp977->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp977 = $tmp977->next;
                }
                $fn979 $tmp978 = $tmp977->methods[0];
                panda$collections$Iterator* $tmp980 = $tmp978(((panda$collections$Iterable*) statements972));
                panda$collections$Iterator* $tmp976 = $tmp980;
                panda$collections$Iterator* $tmp975 = $tmp976;
                Iter$304$17974 = $tmp975;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp975));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp976));
                $l981:;
                ITable* $tmp984 = Iter$304$17974->$class->itable;
                while ($tmp984->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp984 = $tmp984->next;
                }
                $fn986 $tmp985 = $tmp984->methods[0];
                panda$core$Bit $tmp987 = $tmp985(Iter$304$17974);
                panda$core$Bit $tmp988 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp987);
                bool $tmp983 = $tmp988.value;
                if (!$tmp983) goto $l982;
                {
                    ITable* $tmp992 = Iter$304$17974->$class->itable;
                    while ($tmp992->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp992 = $tmp992->next;
                    }
                    $fn994 $tmp993 = $tmp992->methods[1];
                    panda$core$Object* $tmp995 = $tmp993(Iter$304$17974);
                    panda$core$Object* $tmp991 = $tmp995;
                    org$pandalanguage$pandac$IRNode* $tmp990 = ((org$pandalanguage$pandac$IRNode*) $tmp991);
                    s989 = $tmp990;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp990));
                    panda$core$Panda$unref$panda$core$Object($tmp991);
                    panda$core$Bit $tmp997 = (($fn996) s989->$class->vtable[4])(s989);
                    if ($tmp997.value) {
                    {
                        {
                            tmp9998 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s989));
                            {
                                tmp10999 = tmp9998;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$304$17974));
                                panda$core$Bit $tmp1000 = tmp10999;
                                return $tmp1000;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s989));
                }
                goto $l981;
                $l982:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$304$17974));
            }
            panda$core$Bit $tmp1001 = ((panda$core$Bit) { false });
            return $tmp1001;
        }
        }
        else {
        panda$core$Bit $tmp1002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1002.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1004 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 16));
            value1003 = *$tmp1004;
            panda$collections$ImmutableArray** $tmp1006 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9715->$data + 24));
            whens1005 = *$tmp1006;
            panda$collections$ImmutableArray** $tmp1008 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9715->$data + 32));
            other1007 = *$tmp1008;
            panda$core$Bit $tmp1010 = (($fn1009) value1003->$class->vtable[4])(value1003);
            if ($tmp1010.value) {
            {
                panda$core$Bit $tmp1011 = ((panda$core$Bit) { true });
                return $tmp1011;
            }
            }
            {
                ITable* $tmp1015 = ((panda$collections$Iterable*) whens1005)->$class->itable;
                while ($tmp1015->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1015 = $tmp1015->next;
                }
                $fn1017 $tmp1016 = $tmp1015->methods[0];
                panda$collections$Iterator* $tmp1018 = $tmp1016(((panda$collections$Iterable*) whens1005));
                panda$collections$Iterator* $tmp1014 = $tmp1018;
                panda$collections$Iterator* $tmp1013 = $tmp1014;
                Iter$314$171012 = $tmp1013;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1013));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1014));
                $l1019:;
                ITable* $tmp1022 = Iter$314$171012->$class->itable;
                while ($tmp1022->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1022 = $tmp1022->next;
                }
                $fn1024 $tmp1023 = $tmp1022->methods[0];
                panda$core$Bit $tmp1025 = $tmp1023(Iter$314$171012);
                panda$core$Bit $tmp1026 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1025);
                bool $tmp1021 = $tmp1026.value;
                if (!$tmp1021) goto $l1020;
                {
                    ITable* $tmp1030 = Iter$314$171012->$class->itable;
                    while ($tmp1030->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1030 = $tmp1030->next;
                    }
                    $fn1032 $tmp1031 = $tmp1030->methods[1];
                    panda$core$Object* $tmp1033 = $tmp1031(Iter$314$171012);
                    panda$core$Object* $tmp1029 = $tmp1033;
                    org$pandalanguage$pandac$IRNode* $tmp1028 = ((org$pandalanguage$pandac$IRNode*) $tmp1029);
                    w1027 = $tmp1028;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1028));
                    panda$core$Panda$unref$panda$core$Object($tmp1029);
                    panda$core$Bit $tmp1035 = (($fn1034) w1027->$class->vtable[4])(w1027);
                    if ($tmp1035.value) {
                    {
                        {
                            tmp111036 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1027));
                            {
                                tmp121037 = tmp111036;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$314$171012));
                                panda$core$Bit $tmp1038 = tmp121037;
                                return $tmp1038;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1027));
                }
                goto $l1019;
                $l1020:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$314$171012));
            }
            {
                ITable* $tmp1042 = ((panda$collections$Iterable*) other1007)->$class->itable;
                while ($tmp1042->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1042 = $tmp1042->next;
                }
                $fn1044 $tmp1043 = $tmp1042->methods[0];
                panda$collections$Iterator* $tmp1045 = $tmp1043(((panda$collections$Iterable*) other1007));
                panda$collections$Iterator* $tmp1041 = $tmp1045;
                panda$collections$Iterator* $tmp1040 = $tmp1041;
                Iter$319$171039 = $tmp1040;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1040));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1041));
                $l1046:;
                ITable* $tmp1049 = Iter$319$171039->$class->itable;
                while ($tmp1049->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1049 = $tmp1049->next;
                }
                $fn1051 $tmp1050 = $tmp1049->methods[0];
                panda$core$Bit $tmp1052 = $tmp1050(Iter$319$171039);
                panda$core$Bit $tmp1053 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1052);
                bool $tmp1048 = $tmp1053.value;
                if (!$tmp1048) goto $l1047;
                {
                    ITable* $tmp1057 = Iter$319$171039->$class->itable;
                    while ($tmp1057->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1057 = $tmp1057->next;
                    }
                    $fn1059 $tmp1058 = $tmp1057->methods[1];
                    panda$core$Object* $tmp1060 = $tmp1058(Iter$319$171039);
                    panda$core$Object* $tmp1056 = $tmp1060;
                    org$pandalanguage$pandac$IRNode* $tmp1055 = ((org$pandalanguage$pandac$IRNode*) $tmp1056);
                    s1054 = $tmp1055;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1055));
                    panda$core$Panda$unref$panda$core$Object($tmp1056);
                    panda$core$Bit $tmp1062 = (($fn1061) s1054->$class->vtable[4])(s1054);
                    if ($tmp1062.value) {
                    {
                        {
                            tmp131063 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1054));
                            {
                                tmp141064 = tmp131063;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$319$171039));
                                panda$core$Bit $tmp1065 = tmp141064;
                                return $tmp1065;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1054));
                }
                goto $l1046;
                $l1047:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$319$171039));
            }
            panda$core$Bit $tmp1066 = ((panda$core$Bit) { false });
            return $tmp1066;
        }
        }
        else {
        panda$core$Bit $tmp1067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1067.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1069 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 16));
            target1068 = *$tmp1069;
            org$pandalanguage$pandac$MethodRef** $tmp1071 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$233_9715->$data + 24));
            m1070 = *$tmp1071;
            panda$core$Bit $tmp1072 = ((panda$core$Bit) { false });
            return $tmp1072;
        }
        }
        else {
        panda$core$Bit $tmp1073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1073.value) {
        {
            panda$core$UInt64* $tmp1075 = ((panda$core$UInt64*) ((char*) $match$233_9715->$data + 24));
            value1074 = *$tmp1075;
            panda$core$Bit $tmp1076 = ((panda$core$Bit) { false });
            return $tmp1076;
        }
        }
        else {
        panda$core$Bit $tmp1077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1077.value) {
        {
            panda$core$Bit $tmp1078 = ((panda$core$Bit) { false });
            return $tmp1078;
        }
        }
        else {
        panda$core$Bit $tmp1079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1079.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1081 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$233_9715->$data + 16));
            op1080 = *$tmp1081;
            org$pandalanguage$pandac$IRNode** $tmp1083 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 24));
            base1082 = *$tmp1083;
            panda$core$Bit $tmp1086 = (($fn1085) base1082->$class->vtable[4])(base1082);
            panda$core$Bit $tmp1084 = $tmp1086;
            return $tmp1084;
        }
        }
        else {
        panda$core$Bit $tmp1087 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1087.value) {
        {
            panda$core$String** $tmp1089 = ((panda$core$String**) ((char*) $match$233_9715->$data + 16));
            label1088 = *$tmp1089;
            org$pandalanguage$pandac$IRNode** $tmp1091 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 24));
            target1090 = *$tmp1091;
            org$pandalanguage$pandac$IRNode** $tmp1093 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 32));
            list1092 = *$tmp1093;
            panda$collections$ImmutableArray** $tmp1095 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9715->$data + 40));
            statements1094 = *$tmp1095;
            panda$core$Bit $tmp1097 = (($fn1096) list1092->$class->vtable[4])(list1092);
            if ($tmp1097.value) {
            {
                panda$core$Bit $tmp1098 = ((panda$core$Bit) { true });
                return $tmp1098;
            }
            }
            {
                ITable* $tmp1102 = ((panda$collections$Iterable*) statements1094)->$class->itable;
                while ($tmp1102->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1102 = $tmp1102->next;
                }
                $fn1104 $tmp1103 = $tmp1102->methods[0];
                panda$collections$Iterator* $tmp1105 = $tmp1103(((panda$collections$Iterable*) statements1094));
                panda$collections$Iterator* $tmp1101 = $tmp1105;
                panda$collections$Iterator* $tmp1100 = $tmp1101;
                Iter$338$171099 = $tmp1100;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1100));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1101));
                $l1106:;
                ITable* $tmp1109 = Iter$338$171099->$class->itable;
                while ($tmp1109->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1109 = $tmp1109->next;
                }
                $fn1111 $tmp1110 = $tmp1109->methods[0];
                panda$core$Bit $tmp1112 = $tmp1110(Iter$338$171099);
                panda$core$Bit $tmp1113 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1112);
                bool $tmp1108 = $tmp1113.value;
                if (!$tmp1108) goto $l1107;
                {
                    ITable* $tmp1117 = Iter$338$171099->$class->itable;
                    while ($tmp1117->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1117 = $tmp1117->next;
                    }
                    $fn1119 $tmp1118 = $tmp1117->methods[1];
                    panda$core$Object* $tmp1120 = $tmp1118(Iter$338$171099);
                    panda$core$Object* $tmp1116 = $tmp1120;
                    org$pandalanguage$pandac$IRNode* $tmp1115 = ((org$pandalanguage$pandac$IRNode*) $tmp1116);
                    s1114 = $tmp1115;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1115));
                    panda$core$Panda$unref$panda$core$Object($tmp1116);
                    panda$core$Bit $tmp1122 = (($fn1121) s1114->$class->vtable[4])(s1114);
                    if ($tmp1122.value) {
                    {
                        {
                            tmp151123 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1114));
                            {
                                tmp161124 = tmp151123;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$338$171099));
                                panda$core$Bit $tmp1125 = tmp161124;
                                return $tmp1125;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1114));
                }
                goto $l1106;
                $l1107:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$338$171099));
            }
            panda$core$Bit $tmp1126 = ((panda$core$Bit) { false });
            return $tmp1126;
        }
        }
        else {
        panda$core$Bit $tmp1127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1127.value) {
        {
            panda$core$Real64* $tmp1129 = ((panda$core$Real64*) ((char*) $match$233_9715->$data + 24));
            value1128 = *$tmp1129;
            panda$core$Bit $tmp1130 = ((panda$core$Bit) { false });
            return $tmp1130;
        }
        }
        else {
        panda$core$Bit $tmp1131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1131.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1133 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 16));
            value1132 = *$tmp1133;
            panda$core$Bit $tmp1136 = (($fn1135) value1132->$class->vtable[4])(value1132);
            panda$core$Bit $tmp1134 = $tmp1136;
            return $tmp1134;
        }
        }
        else {
        panda$core$Bit $tmp1137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1137.value) {
        {
            panda$core$Int64* $tmp1139 = ((panda$core$Int64*) ((char*) $match$233_9715->$data + 24));
            id1138 = *$tmp1139;
            panda$core$Bit $tmp1140 = ((panda$core$Bit) { false });
            return $tmp1140;
        }
        }
        else {
        panda$core$Bit $tmp1141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1141.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1143 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 0));
            base1142 = *$tmp1143;
            panda$core$Int64* $tmp1145 = ((panda$core$Int64*) ((char*) $match$233_9715->$data + 8));
            id1144 = *$tmp1145;
            panda$core$Bit $tmp1148 = (($fn1147) base1142->$class->vtable[4])(base1142);
            panda$core$Bit $tmp1146 = $tmp1148;
            return $tmp1146;
        }
        }
        else {
        panda$core$Bit $tmp1149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1149.value) {
        {
            panda$core$Bit $tmp1150 = ((panda$core$Bit) { false });
            return $tmp1150;
        }
        }
        else {
        panda$core$Bit $tmp1151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1151.value) {
        {
            panda$core$String** $tmp1153 = ((panda$core$String**) ((char*) $match$233_9715->$data + 16));
            str1152 = *$tmp1153;
            panda$core$Bit $tmp1154 = ((panda$core$Bit) { false });
            return $tmp1154;
        }
        }
        else {
        panda$core$Bit $tmp1155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1155.value) {
        {
            panda$core$Bit $tmp1156 = ((panda$core$Bit) { false });
            return $tmp1156;
        }
        }
        else {
        panda$core$Bit $tmp1157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1157.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1159 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 16));
            test1158 = *$tmp1159;
            org$pandalanguage$pandac$IRNode** $tmp1161 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 24));
            ifTrue1160 = *$tmp1161;
            org$pandalanguage$pandac$IRNode** $tmp1163 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 32));
            ifFalse1162 = *$tmp1163;
            panda$core$Bit $tmp1168 = (($fn1167) test1158->$class->vtable[4])(test1158);
            bool $tmp1166 = $tmp1168.value;
            if ($tmp1166) goto $l1169;
            panda$core$Bit $tmp1171 = (($fn1170) ifTrue1160->$class->vtable[4])(ifTrue1160);
            $tmp1166 = $tmp1171.value;
            $l1169:;
            panda$core$Bit $tmp1172 = { $tmp1166 };
            bool $tmp1165 = $tmp1172.value;
            if ($tmp1165) goto $l1173;
            panda$core$Bit $tmp1175 = (($fn1174) ifFalse1162->$class->vtable[4])(ifFalse1162);
            $tmp1165 = $tmp1175.value;
            $l1173:;
            panda$core$Bit $tmp1176 = { $tmp1165 };
            panda$core$Bit $tmp1164 = $tmp1176;
            return $tmp1164;
        }
        }
        else {
        panda$core$Bit $tmp1177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1177.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1179 = ((org$pandalanguage$pandac$Type**) ((char*) $match$233_9715->$data + 16));
            type1178 = *$tmp1179;
            panda$core$Bit $tmp1180 = ((panda$core$Bit) { false });
            return $tmp1180;
        }
        }
        else {
        panda$core$Bit $tmp1181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1181.value) {
        {
            panda$core$String** $tmp1183 = ((panda$core$String**) ((char*) $match$233_9715->$data + 16));
            name1182 = *$tmp1183;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1184.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1186 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 24));
            base1185 = *$tmp1186;
            panda$collections$ImmutableArray** $tmp1188 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9715->$data + 32));
            args1187 = *$tmp1188;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1189.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1191 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 24));
            target1190 = *$tmp1191;
            panda$collections$ImmutableArray** $tmp1193 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9715->$data + 32));
            methods1192 = *$tmp1193;
            panda$collections$ImmutableArray** $tmp1195 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9715->$data + 40));
            args1194 = *$tmp1195;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1196.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1198 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 16));
            target1197 = *$tmp1198;
            panda$collections$ImmutableArray** $tmp1200 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9715->$data + 24));
            methods1199 = *$tmp1200;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1201.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1203 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 16));
            start1202 = *$tmp1203;
            org$pandalanguage$pandac$IRNode** $tmp1205 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 24));
            end1204 = *$tmp1205;
            panda$core$Bit* $tmp1207 = ((panda$core$Bit*) ((char*) $match$233_9715->$data + 32));
            inclusive1206 = *$tmp1207;
            org$pandalanguage$pandac$IRNode** $tmp1209 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 33));
            step1208 = *$tmp1209;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1210.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1212 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$233_9715->$data + 16));
            kind1211 = *$tmp1212;
            panda$collections$ImmutableArray** $tmp1214 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9715->$data + 24));
            decls1213 = *$tmp1214;
            {
                ITable* $tmp1218 = ((panda$collections$Iterable*) decls1213)->$class->itable;
                while ($tmp1218->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1218 = $tmp1218->next;
                }
                $fn1220 $tmp1219 = $tmp1218->methods[0];
                panda$collections$Iterator* $tmp1221 = $tmp1219(((panda$collections$Iterable*) decls1213));
                panda$collections$Iterator* $tmp1217 = $tmp1221;
                panda$collections$Iterator* $tmp1216 = $tmp1217;
                Iter$373$171215 = $tmp1216;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1216));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1217));
                $l1222:;
                ITable* $tmp1225 = Iter$373$171215->$class->itable;
                while ($tmp1225->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1225 = $tmp1225->next;
                }
                $fn1227 $tmp1226 = $tmp1225->methods[0];
                panda$core$Bit $tmp1228 = $tmp1226(Iter$373$171215);
                panda$core$Bit $tmp1229 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1228);
                bool $tmp1224 = $tmp1229.value;
                if (!$tmp1224) goto $l1223;
                {
                    ITable* $tmp1233 = Iter$373$171215->$class->itable;
                    while ($tmp1233->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1233 = $tmp1233->next;
                    }
                    $fn1235 $tmp1234 = $tmp1233->methods[1];
                    panda$core$Object* $tmp1236 = $tmp1234(Iter$373$171215);
                    panda$core$Object* $tmp1232 = $tmp1236;
                    org$pandalanguage$pandac$IRNode* $tmp1231 = ((org$pandalanguage$pandac$IRNode*) $tmp1232);
                    d1230 = $tmp1231;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1231));
                    panda$core$Panda$unref$panda$core$Object($tmp1232);
                    panda$core$Bit $tmp1238 = (($fn1237) d1230->$class->vtable[4])(d1230);
                    if ($tmp1238.value) {
                    {
                        {
                            tmp171239 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) d1230));
                            {
                                tmp181240 = tmp171239;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$373$171215));
                                panda$core$Bit $tmp1241 = tmp181240;
                                return $tmp1241;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) d1230));
                }
                goto $l1222;
                $l1223:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$373$171215));
            }
            panda$core$Bit $tmp1242 = ((panda$core$Bit) { false });
            return $tmp1242;
        }
        }
        else {
        panda$core$Bit $tmp1243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1243.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp1245 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$233_9715->$data + 16));
            variable1244 = *$tmp1245;
            panda$core$Bit $tmp1246 = ((panda$core$Bit) { false });
            return $tmp1246;
        }
        }
        else {
        panda$core$Bit $tmp1247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1247.value) {
        {
            panda$collections$ImmutableArray** $tmp1249 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9715->$data + 16));
            tests1248 = *$tmp1249;
            panda$collections$ImmutableArray** $tmp1251 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9715->$data + 24));
            statements1250 = *$tmp1251;
            {
                ITable* $tmp1255 = ((panda$collections$Iterable*) tests1248)->$class->itable;
                while ($tmp1255->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1255 = $tmp1255->next;
                }
                $fn1257 $tmp1256 = $tmp1255->methods[0];
                panda$collections$Iterator* $tmp1258 = $tmp1256(((panda$collections$Iterable*) tests1248));
                panda$collections$Iterator* $tmp1254 = $tmp1258;
                panda$collections$Iterator* $tmp1253 = $tmp1254;
                Iter$382$171252 = $tmp1253;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1253));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1254));
                $l1259:;
                ITable* $tmp1262 = Iter$382$171252->$class->itable;
                while ($tmp1262->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1262 = $tmp1262->next;
                }
                $fn1264 $tmp1263 = $tmp1262->methods[0];
                panda$core$Bit $tmp1265 = $tmp1263(Iter$382$171252);
                panda$core$Bit $tmp1266 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1265);
                bool $tmp1261 = $tmp1266.value;
                if (!$tmp1261) goto $l1260;
                {
                    ITable* $tmp1270 = Iter$382$171252->$class->itable;
                    while ($tmp1270->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1270 = $tmp1270->next;
                    }
                    $fn1272 $tmp1271 = $tmp1270->methods[1];
                    panda$core$Object* $tmp1273 = $tmp1271(Iter$382$171252);
                    panda$core$Object* $tmp1269 = $tmp1273;
                    org$pandalanguage$pandac$IRNode* $tmp1268 = ((org$pandalanguage$pandac$IRNode*) $tmp1269);
                    t1267 = $tmp1268;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1268));
                    panda$core$Panda$unref$panda$core$Object($tmp1269);
                    panda$core$Bit $tmp1275 = (($fn1274) t1267->$class->vtable[4])(t1267);
                    if ($tmp1275.value) {
                    {
                        {
                            tmp191276 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1267));
                            {
                                tmp201277 = tmp191276;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$382$171252));
                                panda$core$Bit $tmp1278 = tmp201277;
                                return $tmp1278;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1267));
                }
                goto $l1259;
                $l1260:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$382$171252));
            }
            {
                ITable* $tmp1282 = ((panda$collections$Iterable*) statements1250)->$class->itable;
                while ($tmp1282->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1282 = $tmp1282->next;
                }
                $fn1284 $tmp1283 = $tmp1282->methods[0];
                panda$collections$Iterator* $tmp1285 = $tmp1283(((panda$collections$Iterable*) statements1250));
                panda$collections$Iterator* $tmp1281 = $tmp1285;
                panda$collections$Iterator* $tmp1280 = $tmp1281;
                Iter$387$171279 = $tmp1280;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1280));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1281));
                $l1286:;
                ITable* $tmp1289 = Iter$387$171279->$class->itable;
                while ($tmp1289->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1289 = $tmp1289->next;
                }
                $fn1291 $tmp1290 = $tmp1289->methods[0];
                panda$core$Bit $tmp1292 = $tmp1290(Iter$387$171279);
                panda$core$Bit $tmp1293 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1292);
                bool $tmp1288 = $tmp1293.value;
                if (!$tmp1288) goto $l1287;
                {
                    ITable* $tmp1297 = Iter$387$171279->$class->itable;
                    while ($tmp1297->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1297 = $tmp1297->next;
                    }
                    $fn1299 $tmp1298 = $tmp1297->methods[1];
                    panda$core$Object* $tmp1300 = $tmp1298(Iter$387$171279);
                    panda$core$Object* $tmp1296 = $tmp1300;
                    org$pandalanguage$pandac$IRNode* $tmp1295 = ((org$pandalanguage$pandac$IRNode*) $tmp1296);
                    s1294 = $tmp1295;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1295));
                    panda$core$Panda$unref$panda$core$Object($tmp1296);
                    panda$core$Bit $tmp1302 = (($fn1301) s1294->$class->vtable[4])(s1294);
                    if ($tmp1302.value) {
                    {
                        {
                            tmp211303 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1294));
                            {
                                tmp221304 = tmp211303;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$387$171279));
                                panda$core$Bit $tmp1305 = tmp221304;
                                return $tmp1305;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1294));
                }
                goto $l1286;
                $l1287:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$387$171279));
            }
            panda$core$Bit $tmp1306 = ((panda$core$Bit) { false });
            return $tmp1306;
        }
        }
        else {
        panda$core$Bit $tmp1307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9715->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1307.value) {
        {
            panda$core$String** $tmp1309 = ((panda$core$String**) ((char*) $match$233_9715->$data + 16));
            label1308 = *$tmp1309;
            org$pandalanguage$pandac$IRNode** $tmp1311 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9715->$data + 24));
            test1310 = *$tmp1311;
            panda$collections$ImmutableArray** $tmp1313 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9715->$data + 32));
            statements1312 = *$tmp1313;
            panda$core$Bit $tmp1315 = (($fn1314) test1310->$class->vtable[4])(test1310);
            if ($tmp1315.value) {
            {
                panda$core$Bit $tmp1316 = ((panda$core$Bit) { true });
                return $tmp1316;
            }
            }
            {
                ITable* $tmp1320 = ((panda$collections$Iterable*) statements1312)->$class->itable;
                while ($tmp1320->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1320 = $tmp1320->next;
                }
                $fn1322 $tmp1321 = $tmp1320->methods[0];
                panda$collections$Iterator* $tmp1323 = $tmp1321(((panda$collections$Iterable*) statements1312));
                panda$collections$Iterator* $tmp1319 = $tmp1323;
                panda$collections$Iterator* $tmp1318 = $tmp1319;
                Iter$397$171317 = $tmp1318;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1318));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1319));
                $l1324:;
                ITable* $tmp1327 = Iter$397$171317->$class->itable;
                while ($tmp1327->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1327 = $tmp1327->next;
                }
                $fn1329 $tmp1328 = $tmp1327->methods[0];
                panda$core$Bit $tmp1330 = $tmp1328(Iter$397$171317);
                panda$core$Bit $tmp1331 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1330);
                bool $tmp1326 = $tmp1331.value;
                if (!$tmp1326) goto $l1325;
                {
                    ITable* $tmp1335 = Iter$397$171317->$class->itable;
                    while ($tmp1335->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1335 = $tmp1335->next;
                    }
                    $fn1337 $tmp1336 = $tmp1335->methods[1];
                    panda$core$Object* $tmp1338 = $tmp1336(Iter$397$171317);
                    panda$core$Object* $tmp1334 = $tmp1338;
                    org$pandalanguage$pandac$IRNode* $tmp1333 = ((org$pandalanguage$pandac$IRNode*) $tmp1334);
                    s1332 = $tmp1333;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1333));
                    panda$core$Panda$unref$panda$core$Object($tmp1334);
                    panda$core$Bit $tmp1340 = (($fn1339) s1332->$class->vtable[4])(s1332);
                    if ($tmp1340.value) {
                    {
                        {
                            tmp231341 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1332));
                            {
                                tmp241342 = tmp231341;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$397$171317));
                                panda$core$Bit $tmp1343 = tmp241342;
                                return $tmp1343;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1332));
                }
                goto $l1324;
                $l1325:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$397$171317));
            }
            panda$core$Bit $tmp1344 = ((panda$core$Bit) { false });
            return $tmp1344;
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
panda$core$String* org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$410_91345;
    org$pandalanguage$pandac$IRNode* test1347;
    org$pandalanguage$pandac$IRNode* msg1349;
    org$pandalanguage$pandac$IRNode* left1373;
    org$pandalanguage$pandac$parser$Token$Kind op1375;
    org$pandalanguage$pandac$IRNode* right1377;
    panda$core$Bit bit1400;
    panda$collections$ImmutableArray* statements1407;
    panda$core$MutableString* result1409;
    panda$collections$Iterator* Iter$422$171414;
    org$pandalanguage$pandac$IRNode* s1429;
    panda$core$Char8 $tmp1439;
    panda$core$String* tmp251440;
    panda$core$String* label1446;
    org$pandalanguage$pandac$MethodRef* m1460;
    panda$collections$ImmutableArray* args1462;
    org$pandalanguage$pandac$IRNode* value1479;
    org$pandalanguage$pandac$Type* type1481;
    org$pandalanguage$pandac$ChoiceEntry* ce1516;
    org$pandalanguage$pandac$IRNode* base1523;
    org$pandalanguage$pandac$ChoiceEntry* ce1525;
    panda$core$Int64 field1527;
    org$pandalanguage$pandac$Type* type1550;
    org$pandalanguage$pandac$IRNode* call1552;
    org$pandalanguage$pandac$IRNode* $match$444_171554;
    panda$collections$ImmutableArray* args1556;
    org$pandalanguage$pandac$Type* Type1573;
    panda$core$String* label1579;
    org$pandalanguage$pandac$IRNode* target1593;
    org$pandalanguage$pandac$IRNode* value1595;
    panda$core$String* label1616;
    panda$collections$ImmutableArray* statements1618;
    org$pandalanguage$pandac$IRNode* test1620;
    panda$core$MutableString* result1622;
    panda$collections$Iterator* Iter$468$171632;
    org$pandalanguage$pandac$IRNode* s1647;
    panda$core$String* tmp261663;
    org$pandalanguage$pandac$IRNode* expr1669;
    org$pandalanguage$pandac$IRNode* stmt1671;
    org$pandalanguage$pandac$IRNode* base1687;
    org$pandalanguage$pandac$FieldDecl* field1689;
    org$pandalanguage$pandac$IRNode* test1705;
    panda$collections$ImmutableArray* ifTrue1707;
    org$pandalanguage$pandac$IRNode* ifFalse1709;
    panda$core$MutableString* result1711;
    panda$collections$Iterator* Iter$479$171721;
    org$pandalanguage$pandac$IRNode* s1736;
    panda$core$Char8 $tmp1746;
    panda$core$String* tmp271753;
    panda$core$UInt64 value1759;
    org$pandalanguage$pandac$IRNode* value1766;
    org$pandalanguage$pandac$IRNode* value1777;
    panda$core$String* label1788;
    panda$collections$ImmutableArray* statements1790;
    panda$core$MutableString* result1792;
    panda$collections$Iterator* Iter$499$171802;
    org$pandalanguage$pandac$IRNode* s1817;
    panda$core$Char8 $tmp1827;
    panda$core$String* tmp281828;
    org$pandalanguage$pandac$IRNode* value1834;
    panda$collections$ImmutableArray* whens1836;
    panda$collections$ImmutableArray* other1838;
    panda$core$MutableString* result1840;
    panda$collections$Iterator* Iter$506$171850;
    org$pandalanguage$pandac$IRNode* w1865;
    panda$collections$Iterator* Iter$511$211876;
    org$pandalanguage$pandac$IRNode* s1891;
    panda$core$Char8 $tmp1901;
    panda$core$String* tmp291902;
    org$pandalanguage$pandac$IRNode* target1908;
    org$pandalanguage$pandac$MethodRef* m1910;
    panda$core$UInt64 value1928;
    org$pandalanguage$pandac$parser$Token$Kind op1942;
    org$pandalanguage$pandac$IRNode* base1944;
    panda$core$String* label1962;
    org$pandalanguage$pandac$IRNode* target1964;
    org$pandalanguage$pandac$IRNode* list1966;
    panda$collections$ImmutableArray* statements1968;
    panda$core$MutableString* result1970;
    panda$collections$Iterator* Iter$534$171990;
    org$pandalanguage$pandac$IRNode* s2005;
    panda$core$Char8 $tmp2015;
    panda$core$String* tmp302016;
    panda$core$Real64 value2022;
    org$pandalanguage$pandac$IRNode* value2029;
    org$pandalanguage$pandac$Type* type2043;
    panda$core$Int64 id2045;
    org$pandalanguage$pandac$IRNode* base2063;
    panda$core$Int64 id2065;
    panda$core$String* str2087;
    org$pandalanguage$pandac$IRNode* test2096;
    org$pandalanguage$pandac$IRNode* ifTrue2098;
    org$pandalanguage$pandac$IRNode* ifFalse2100;
    org$pandalanguage$pandac$Type* type2121;
    panda$core$String* name2128;
    org$pandalanguage$pandac$IRNode* base2133;
    panda$collections$ImmutableArray* args2135;
    org$pandalanguage$pandac$IRNode* target2153;
    panda$collections$ImmutableArray* methods2155;
    panda$collections$ImmutableArray* args2157;
    org$pandalanguage$pandac$IRNode* target2182;
    panda$collections$ImmutableArray* methods2184;
    org$pandalanguage$pandac$IRNode* start2202;
    org$pandalanguage$pandac$IRNode* end2204;
    panda$core$Bit inclusive2206;
    org$pandalanguage$pandac$IRNode* step2208;
    panda$core$MutableString* result2210;
    panda$core$String* tmp312222;
    org$pandalanguage$pandac$Variable$Kind kind2228;
    panda$collections$ImmutableArray* decls2230;
    panda$core$MutableString* result2232;
    org$pandalanguage$pandac$Variable$Kind $match$588_172236;
    panda$core$String* tmp322247;
    org$pandalanguage$pandac$Variable* variable2253;
    panda$collections$ImmutableArray* tests2258;
    panda$collections$ImmutableArray* statements2260;
    panda$core$String* label2281;
    org$pandalanguage$pandac$IRNode* test2283;
    panda$collections$ImmutableArray* statements2285;
    panda$core$MutableString* result2287;
    panda$collections$Iterator* Iter$606$172302;
    org$pandalanguage$pandac$IRNode* s2317;
    panda$core$Char8 $tmp2327;
    panda$core$String* tmp332328;
    {
        $match$410_91345 = self;
        panda$core$Bit $tmp1346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp1346.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1348 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 16));
            test1347 = *$tmp1348;
            org$pandalanguage$pandac$IRNode** $tmp1350 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 24));
            msg1349 = *$tmp1350;
            if (((panda$core$Bit) { msg1349 != NULL }).value) {
            {
                panda$core$String* $tmp1358 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1357, ((panda$core$Object*) test1347));
                panda$core$String* $tmp1356 = $tmp1358;
                panda$core$String* $tmp1360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1356, &$s1359);
                panda$core$String* $tmp1355 = $tmp1360;
                panda$core$String* $tmp1361 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1355, ((panda$core$Object*) msg1349));
                panda$core$String* $tmp1354 = $tmp1361;
                panda$core$String* $tmp1363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1354, &$s1362);
                panda$core$String* $tmp1353 = $tmp1363;
                panda$core$String* $tmp1352 = $tmp1353;
                panda$core$String* $tmp1351 = $tmp1352;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1352));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1353));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1354));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1355));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1356));
                return $tmp1351;
            }
            }
            panda$core$String* $tmp1369 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1368, ((panda$core$Object*) test1347));
            panda$core$String* $tmp1367 = $tmp1369;
            panda$core$String* $tmp1371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1367, &$s1370);
            panda$core$String* $tmp1366 = $tmp1371;
            panda$core$String* $tmp1365 = $tmp1366;
            panda$core$String* $tmp1364 = $tmp1365;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1365));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1366));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1367));
            return $tmp1364;
        }
        }
        else {
        panda$core$Bit $tmp1372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1372.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1374 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 24));
            left1373 = *$tmp1374;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1376 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$410_91345->$data + 32));
            op1375 = *$tmp1376;
            org$pandalanguage$pandac$IRNode** $tmp1378 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 40));
            right1377 = *$tmp1378;
            panda$core$String* $tmp1388 = (($fn1387) left1373->$class->vtable[0])(left1373);
            panda$core$String* $tmp1386 = $tmp1388;
            panda$core$String* $tmp1390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1386, &$s1389);
            panda$core$String* $tmp1385 = $tmp1390;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1392;
            $tmp1392 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1392->value = op1375;
            panda$core$Object* $tmp1391 = ((panda$core$Object*) $tmp1392);
            panda$core$String* $tmp1393 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1385, $tmp1391);
            panda$core$String* $tmp1384 = $tmp1393;
            panda$core$String* $tmp1395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1384, &$s1394);
            panda$core$String* $tmp1383 = $tmp1395;
            panda$core$String* $tmp1396 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1383, ((panda$core$Object*) right1377));
            panda$core$String* $tmp1382 = $tmp1396;
            panda$core$String* $tmp1398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1382, &$s1397);
            panda$core$String* $tmp1381 = $tmp1398;
            panda$core$String* $tmp1380 = $tmp1381;
            panda$core$String* $tmp1379 = $tmp1380;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1380));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1381));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1382));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1383));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1384));
            panda$core$Panda$unref$panda$core$Object($tmp1391);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1385));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1386));
            return $tmp1379;
        }
        }
        else {
        panda$core$Bit $tmp1399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1399.value) {
        {
            panda$core$Bit* $tmp1401 = ((panda$core$Bit*) ((char*) $match$410_91345->$data + 24));
            bit1400 = *$tmp1401;
            panda$core$String* $tmp1405 = panda$core$Bit$convert$R$panda$core$String(bit1400);
            panda$core$String* $tmp1404 = $tmp1405;
            panda$core$String* $tmp1403 = $tmp1404;
            panda$core$String* $tmp1402 = $tmp1403;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1403));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1404));
            return $tmp1402;
        }
        }
        else {
        panda$core$Bit $tmp1406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp1406.value) {
        {
            panda$collections$ImmutableArray** $tmp1408 = ((panda$collections$ImmutableArray**) ((char*) $match$410_91345->$data + 16));
            statements1407 = *$tmp1408;
            panda$core$MutableString* $tmp1412 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init$panda$core$String($tmp1412, &$s1413);
            panda$core$MutableString* $tmp1411 = $tmp1412;
            panda$core$MutableString* $tmp1410 = $tmp1411;
            result1409 = $tmp1410;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1410));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1411));
            {
                ITable* $tmp1417 = ((panda$collections$Iterable*) statements1407)->$class->itable;
                while ($tmp1417->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1417 = $tmp1417->next;
                }
                $fn1419 $tmp1418 = $tmp1417->methods[0];
                panda$collections$Iterator* $tmp1420 = $tmp1418(((panda$collections$Iterable*) statements1407));
                panda$collections$Iterator* $tmp1416 = $tmp1420;
                panda$collections$Iterator* $tmp1415 = $tmp1416;
                Iter$422$171414 = $tmp1415;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1415));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1416));
                $l1421:;
                ITable* $tmp1424 = Iter$422$171414->$class->itable;
                while ($tmp1424->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1424 = $tmp1424->next;
                }
                $fn1426 $tmp1425 = $tmp1424->methods[0];
                panda$core$Bit $tmp1427 = $tmp1425(Iter$422$171414);
                panda$core$Bit $tmp1428 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1427);
                bool $tmp1423 = $tmp1428.value;
                if (!$tmp1423) goto $l1422;
                {
                    ITable* $tmp1432 = Iter$422$171414->$class->itable;
                    while ($tmp1432->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1432 = $tmp1432->next;
                    }
                    $fn1434 $tmp1433 = $tmp1432->methods[1];
                    panda$core$Object* $tmp1435 = $tmp1433(Iter$422$171414);
                    panda$core$Object* $tmp1431 = $tmp1435;
                    org$pandalanguage$pandac$IRNode* $tmp1430 = ((org$pandalanguage$pandac$IRNode*) $tmp1431);
                    s1429 = $tmp1430;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1430));
                    panda$core$Panda$unref$panda$core$Object($tmp1431);
                    panda$core$String* $tmp1438 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1429), &$s1437);
                    panda$core$String* $tmp1436 = $tmp1438;
                    panda$core$MutableString$append$panda$core$String(result1409, $tmp1436);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1436));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1429));
                }
                goto $l1421;
                $l1422:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$422$171414));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1439, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1409, $tmp1439);
            {
                panda$core$String* $tmp1443 = panda$core$MutableString$finish$R$panda$core$String(result1409);
                panda$core$String* $tmp1442 = $tmp1443;
                panda$core$String* $tmp1441 = $tmp1442;
                tmp251440 = $tmp1441;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1441));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1442));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1409));
                panda$core$String* $tmp1444 = tmp251440;
                return $tmp1444;
            }
        }
        }
        else {
        panda$core$Bit $tmp1445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp1445.value) {
        {
            panda$core$String** $tmp1447 = ((panda$core$String**) ((char*) $match$410_91345->$data + 16));
            label1446 = *$tmp1447;
            if (((panda$core$Bit) { label1446 != NULL }).value) {
            {
                panda$core$String* $tmp1453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1452, label1446);
                panda$core$String* $tmp1451 = $tmp1453;
                panda$core$String* $tmp1455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1451, &$s1454);
                panda$core$String* $tmp1450 = $tmp1455;
                panda$core$String* $tmp1449 = $tmp1450;
                panda$core$String* $tmp1448 = $tmp1449;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1449));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1450));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1451));
                return $tmp1448;
            }
            }
            panda$core$String* $tmp1457 = &$s1458;
            panda$core$String* $tmp1456 = $tmp1457;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1457));
            return $tmp1456;
        }
        }
        else {
        panda$core$Bit $tmp1459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp1459.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp1461 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$410_91345->$data + 24));
            m1460 = *$tmp1461;
            panda$collections$ImmutableArray** $tmp1463 = ((panda$collections$ImmutableArray**) ((char*) $match$410_91345->$data + 32));
            args1462 = *$tmp1463;
            panda$core$String* $tmp1470 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) m1460->value)->name);
            panda$core$String* $tmp1469 = $tmp1470;
            panda$core$String* $tmp1472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1469, &$s1471);
            panda$core$String* $tmp1468 = $tmp1472;
            panda$core$String* $tmp1474 = panda$collections$ImmutableArray$join$R$panda$core$String(args1462);
            panda$core$String* $tmp1473 = $tmp1474;
            panda$core$String* $tmp1475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1468, $tmp1473);
            panda$core$String* $tmp1467 = $tmp1475;
            panda$core$String* $tmp1477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1467, &$s1476);
            panda$core$String* $tmp1466 = $tmp1477;
            panda$core$String* $tmp1465 = $tmp1466;
            panda$core$String* $tmp1464 = $tmp1465;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1465));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1466));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1467));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1473));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1468));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1469));
            return $tmp1464;
        }
        }
        else {
        panda$core$Bit $tmp1478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp1478.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1480 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 16));
            value1479 = *$tmp1480;
            org$pandalanguage$pandac$Type** $tmp1482 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_91345->$data + 24));
            type1481 = *$tmp1482;
            org$pandalanguage$pandac$Type* $tmp1485 = (($fn1484) value1479->$class->vtable[2])(value1479);
            org$pandalanguage$pandac$Type* $tmp1483 = $tmp1485;
            org$pandalanguage$pandac$Type* $tmp1487 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1486 = $tmp1487;
            panda$core$Bit $tmp1488 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1483, $tmp1486);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1486));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1483));
            if ($tmp1488.value) {
            {
                panda$core$String* $tmp1496 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1495, ((panda$core$Object*) value1479));
                panda$core$String* $tmp1494 = $tmp1496;
                panda$core$String* $tmp1498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1494, &$s1497);
                panda$core$String* $tmp1493 = $tmp1498;
                panda$core$String* $tmp1499 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1493, ((panda$core$Object*) type1481));
                panda$core$String* $tmp1492 = $tmp1499;
                panda$core$String* $tmp1501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1492, &$s1500);
                panda$core$String* $tmp1491 = $tmp1501;
                panda$core$String* $tmp1490 = $tmp1491;
                panda$core$String* $tmp1489 = $tmp1490;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1490));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1491));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1492));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1493));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1494));
                return $tmp1489;
            }
            }
            panda$core$String* $tmp1509 = (($fn1508) value1479->$class->vtable[0])(value1479);
            panda$core$String* $tmp1507 = $tmp1509;
            panda$core$String* $tmp1511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1507, &$s1510);
            panda$core$String* $tmp1506 = $tmp1511;
            panda$core$String* $tmp1512 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1506, ((panda$core$Object*) type1481));
            panda$core$String* $tmp1505 = $tmp1512;
            panda$core$String* $tmp1514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1505, &$s1513);
            panda$core$String* $tmp1504 = $tmp1514;
            panda$core$String* $tmp1503 = $tmp1504;
            panda$core$String* $tmp1502 = $tmp1503;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1503));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1504));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1505));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1506));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1507));
            return $tmp1502;
        }
        }
        else {
        panda$core$Bit $tmp1515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp1515.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp1517 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$410_91345->$data + 16));
            ce1516 = *$tmp1517;
            panda$core$String* $tmp1521 = org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(ce1516);
            panda$core$String* $tmp1520 = $tmp1521;
            panda$core$String* $tmp1519 = $tmp1520;
            panda$core$String* $tmp1518 = $tmp1519;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1519));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1520));
            return $tmp1518;
        }
        }
        else {
        panda$core$Bit $tmp1522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp1522.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1524 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 16));
            base1523 = *$tmp1524;
            org$pandalanguage$pandac$ChoiceEntry** $tmp1526 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$410_91345->$data + 24));
            ce1525 = *$tmp1526;
            panda$core$Int64* $tmp1528 = ((panda$core$Int64*) ((char*) $match$410_91345->$data + 32));
            field1527 = *$tmp1528;
            panda$core$String* $tmp1538 = (($fn1537) base1523->$class->vtable[0])(base1523);
            panda$core$String* $tmp1536 = $tmp1538;
            panda$core$String* $tmp1540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1536, &$s1539);
            panda$core$String* $tmp1535 = $tmp1540;
            panda$core$String* $tmp1541 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1535, ((panda$core$Object*) ce1525));
            panda$core$String* $tmp1534 = $tmp1541;
            panda$core$String* $tmp1543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1534, &$s1542);
            panda$core$String* $tmp1533 = $tmp1543;
            panda$core$Int64$wrapper* $tmp1545;
            $tmp1545 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1545->value = field1527;
            panda$core$Object* $tmp1544 = ((panda$core$Object*) $tmp1545);
            panda$core$String* $tmp1546 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1533, $tmp1544);
            panda$core$String* $tmp1532 = $tmp1546;
            panda$core$String* $tmp1548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1532, &$s1547);
            panda$core$String* $tmp1531 = $tmp1548;
            panda$core$String* $tmp1530 = $tmp1531;
            panda$core$String* $tmp1529 = $tmp1530;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1530));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1531));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1532));
            panda$core$Panda$unref$panda$core$Object($tmp1544);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1533));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1534));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1535));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1536));
            return $tmp1529;
        }
        }
        else {
        panda$core$Bit $tmp1549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1549.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1551 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_91345->$data + 16));
            type1550 = *$tmp1551;
            org$pandalanguage$pandac$IRNode** $tmp1553 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 24));
            call1552 = *$tmp1553;
            {
                $match$444_171554 = call1552;
                panda$core$Bit $tmp1555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_171554->$rawValue, ((panda$core$Int64) { 5 }));
                if ($tmp1555.value) {
                {
                    panda$collections$ImmutableArray** $tmp1557 = ((panda$collections$ImmutableArray**) ((char*) $match$444_171554->$data + 32));
                    args1556 = *$tmp1557;
                    panda$core$String* $tmp1564 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type1550);
                    panda$core$String* $tmp1563 = $tmp1564;
                    panda$core$String* $tmp1566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1563, &$s1565);
                    panda$core$String* $tmp1562 = $tmp1566;
                    panda$core$String* $tmp1568 = panda$collections$ImmutableArray$join$R$panda$core$String(args1556);
                    panda$core$String* $tmp1567 = $tmp1568;
                    panda$core$String* $tmp1569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1562, $tmp1567);
                    panda$core$String* $tmp1561 = $tmp1569;
                    panda$core$String* $tmp1571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1561, &$s1570);
                    panda$core$String* $tmp1560 = $tmp1571;
                    panda$core$String* $tmp1559 = $tmp1560;
                    panda$core$String* $tmp1558 = $tmp1559;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1559));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1560));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1561));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1567));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1562));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1563));
                    return $tmp1558;
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
        else {
        panda$core$Bit $tmp1572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp1572.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1574 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_91345->$data + 16));
            Type1573 = *$tmp1574;
            panda$core$String* $tmp1576 = &$s1577;
            panda$core$String* $tmp1575 = $tmp1576;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1576));
            return $tmp1575;
        }
        }
        else {
        panda$core$Bit $tmp1578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1578.value) {
        {
            panda$core$String** $tmp1580 = ((panda$core$String**) ((char*) $match$410_91345->$data + 16));
            label1579 = *$tmp1580;
            if (((panda$core$Bit) { label1579 != NULL }).value) {
            {
                panda$core$String* $tmp1586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1585, label1579);
                panda$core$String* $tmp1584 = $tmp1586;
                panda$core$String* $tmp1588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1584, &$s1587);
                panda$core$String* $tmp1583 = $tmp1588;
                panda$core$String* $tmp1582 = $tmp1583;
                panda$core$String* $tmp1581 = $tmp1582;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1582));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1583));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1584));
                return $tmp1581;
            }
            }
            panda$core$String* $tmp1590 = &$s1591;
            panda$core$String* $tmp1589 = $tmp1590;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1590));
            return $tmp1589;
        }
        }
        else {
        panda$core$Bit $tmp1592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1592.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1594 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 0));
            target1593 = *$tmp1594;
            org$pandalanguage$pandac$IRNode** $tmp1596 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 8));
            value1595 = *$tmp1596;
            if (((panda$core$Bit) { value1595 != NULL }).value) {
            {
                panda$core$String* $tmp1604 = (($fn1603) target1593->$class->vtable[0])(target1593);
                panda$core$String* $tmp1602 = $tmp1604;
                panda$core$String* $tmp1606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1602, &$s1605);
                panda$core$String* $tmp1601 = $tmp1606;
                panda$core$String* $tmp1607 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1601, ((panda$core$Object*) value1595));
                panda$core$String* $tmp1600 = $tmp1607;
                panda$core$String* $tmp1609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1600, &$s1608);
                panda$core$String* $tmp1599 = $tmp1609;
                panda$core$String* $tmp1598 = $tmp1599;
                panda$core$String* $tmp1597 = $tmp1598;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1598));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1599));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1600));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1601));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1602));
                return $tmp1597;
            }
            }
            panda$core$String* $tmp1614 = (($fn1613) target1593->$class->vtable[0])(target1593);
            panda$core$String* $tmp1612 = $tmp1614;
            panda$core$String* $tmp1611 = $tmp1612;
            panda$core$String* $tmp1610 = $tmp1611;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1611));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1612));
            return $tmp1610;
        }
        }
        else {
        panda$core$Bit $tmp1615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1615.value) {
        {
            panda$core$String** $tmp1617 = ((panda$core$String**) ((char*) $match$410_91345->$data + 16));
            label1616 = *$tmp1617;
            panda$collections$ImmutableArray** $tmp1619 = ((panda$collections$ImmutableArray**) ((char*) $match$410_91345->$data + 24));
            statements1618 = *$tmp1619;
            org$pandalanguage$pandac$IRNode** $tmp1621 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 32));
            test1620 = *$tmp1621;
            panda$core$MutableString* $tmp1625 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1625);
            panda$core$MutableString* $tmp1624 = $tmp1625;
            panda$core$MutableString* $tmp1623 = $tmp1624;
            result1622 = $tmp1623;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1623));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1624));
            if (((panda$core$Bit) { label1616 != NULL }).value) {
            {
                panda$core$String* $tmp1628 = panda$core$String$convert$R$panda$core$String(label1616);
                panda$core$String* $tmp1627 = $tmp1628;
                panda$core$String* $tmp1630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1627, &$s1629);
                panda$core$String* $tmp1626 = $tmp1630;
                panda$core$MutableString$append$panda$core$String(result1622, $tmp1626);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1626));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1627));
            }
            }
            panda$core$MutableString$append$panda$core$String(result1622, &$s1631);
            {
                ITable* $tmp1635 = ((panda$collections$Iterable*) statements1618)->$class->itable;
                while ($tmp1635->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1635 = $tmp1635->next;
                }
                $fn1637 $tmp1636 = $tmp1635->methods[0];
                panda$collections$Iterator* $tmp1638 = $tmp1636(((panda$collections$Iterable*) statements1618));
                panda$collections$Iterator* $tmp1634 = $tmp1638;
                panda$collections$Iterator* $tmp1633 = $tmp1634;
                Iter$468$171632 = $tmp1633;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1633));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1634));
                $l1639:;
                ITable* $tmp1642 = Iter$468$171632->$class->itable;
                while ($tmp1642->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1642 = $tmp1642->next;
                }
                $fn1644 $tmp1643 = $tmp1642->methods[0];
                panda$core$Bit $tmp1645 = $tmp1643(Iter$468$171632);
                panda$core$Bit $tmp1646 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1645);
                bool $tmp1641 = $tmp1646.value;
                if (!$tmp1641) goto $l1640;
                {
                    ITable* $tmp1650 = Iter$468$171632->$class->itable;
                    while ($tmp1650->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1650 = $tmp1650->next;
                    }
                    $fn1652 $tmp1651 = $tmp1650->methods[1];
                    panda$core$Object* $tmp1653 = $tmp1651(Iter$468$171632);
                    panda$core$Object* $tmp1649 = $tmp1653;
                    org$pandalanguage$pandac$IRNode* $tmp1648 = ((org$pandalanguage$pandac$IRNode*) $tmp1649);
                    s1647 = $tmp1648;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1648));
                    panda$core$Panda$unref$panda$core$Object($tmp1649);
                    panda$core$String* $tmp1656 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1647), &$s1655);
                    panda$core$String* $tmp1654 = $tmp1656;
                    panda$core$MutableString$append$panda$core$String(result1622, $tmp1654);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1654));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1647));
                }
                goto $l1639;
                $l1640:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$468$171632));
            }
            panda$core$String* $tmp1660 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1659, ((panda$core$Object*) test1620));
            panda$core$String* $tmp1658 = $tmp1660;
            panda$core$String* $tmp1662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1658, &$s1661);
            panda$core$String* $tmp1657 = $tmp1662;
            panda$core$MutableString$append$panda$core$String(result1622, $tmp1657);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1657));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1658));
            {
                panda$core$String* $tmp1666 = panda$core$MutableString$finish$R$panda$core$String(result1622);
                panda$core$String* $tmp1665 = $tmp1666;
                panda$core$String* $tmp1664 = $tmp1665;
                tmp261663 = $tmp1664;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1664));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1665));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1622));
                panda$core$String* $tmp1667 = tmp261663;
                return $tmp1667;
            }
        }
        }
        else {
        panda$core$Bit $tmp1668 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1668.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1670 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 0));
            expr1669 = *$tmp1670;
            org$pandalanguage$pandac$IRNode** $tmp1672 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 8));
            stmt1671 = *$tmp1672;
            panda$core$String* $tmp1680 = (($fn1679) expr1669->$class->vtable[0])(expr1669);
            panda$core$String* $tmp1678 = $tmp1680;
            panda$core$String* $tmp1682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1678, &$s1681);
            panda$core$String* $tmp1677 = $tmp1682;
            panda$core$String* $tmp1683 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1677, ((panda$core$Object*) stmt1671));
            panda$core$String* $tmp1676 = $tmp1683;
            panda$core$String* $tmp1685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1676, &$s1684);
            panda$core$String* $tmp1675 = $tmp1685;
            panda$core$String* $tmp1674 = $tmp1675;
            panda$core$String* $tmp1673 = $tmp1674;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1674));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1675));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1676));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1677));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1678));
            return $tmp1673;
        }
        }
        else {
        panda$core$Bit $tmp1686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1686.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1688 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 24));
            base1687 = *$tmp1688;
            org$pandalanguage$pandac$FieldDecl** $tmp1690 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$410_91345->$data + 32));
            field1689 = *$tmp1690;
            panda$core$String* $tmp1698 = (($fn1697) base1687->$class->vtable[0])(base1687);
            panda$core$String* $tmp1696 = $tmp1698;
            panda$core$String* $tmp1700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1696, &$s1699);
            panda$core$String* $tmp1695 = $tmp1700;
            panda$core$String* $tmp1701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1695, ((org$pandalanguage$pandac$Symbol*) field1689)->name);
            panda$core$String* $tmp1694 = $tmp1701;
            panda$core$String* $tmp1703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1694, &$s1702);
            panda$core$String* $tmp1693 = $tmp1703;
            panda$core$String* $tmp1692 = $tmp1693;
            panda$core$String* $tmp1691 = $tmp1692;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1692));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1693));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1694));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1695));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1696));
            return $tmp1691;
        }
        }
        else {
        panda$core$Bit $tmp1704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1704.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1706 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 16));
            test1705 = *$tmp1706;
            panda$collections$ImmutableArray** $tmp1708 = ((panda$collections$ImmutableArray**) ((char*) $match$410_91345->$data + 24));
            ifTrue1707 = *$tmp1708;
            org$pandalanguage$pandac$IRNode** $tmp1710 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 32));
            ifFalse1709 = *$tmp1710;
            panda$core$MutableString* $tmp1714 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$String* $tmp1718 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1717, ((panda$core$Object*) test1705));
            panda$core$String* $tmp1716 = $tmp1718;
            panda$core$String* $tmp1720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1716, &$s1719);
            panda$core$String* $tmp1715 = $tmp1720;
            panda$core$MutableString$init$panda$core$String($tmp1714, $tmp1715);
            panda$core$MutableString* $tmp1713 = $tmp1714;
            panda$core$MutableString* $tmp1712 = $tmp1713;
            result1711 = $tmp1712;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1712));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1713));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1715));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1716));
            {
                ITable* $tmp1724 = ((panda$collections$Iterable*) ifTrue1707)->$class->itable;
                while ($tmp1724->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1724 = $tmp1724->next;
                }
                $fn1726 $tmp1725 = $tmp1724->methods[0];
                panda$collections$Iterator* $tmp1727 = $tmp1725(((panda$collections$Iterable*) ifTrue1707));
                panda$collections$Iterator* $tmp1723 = $tmp1727;
                panda$collections$Iterator* $tmp1722 = $tmp1723;
                Iter$479$171721 = $tmp1722;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1722));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1723));
                $l1728:;
                ITable* $tmp1731 = Iter$479$171721->$class->itable;
                while ($tmp1731->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1731 = $tmp1731->next;
                }
                $fn1733 $tmp1732 = $tmp1731->methods[0];
                panda$core$Bit $tmp1734 = $tmp1732(Iter$479$171721);
                panda$core$Bit $tmp1735 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1734);
                bool $tmp1730 = $tmp1735.value;
                if (!$tmp1730) goto $l1729;
                {
                    ITable* $tmp1739 = Iter$479$171721->$class->itable;
                    while ($tmp1739->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1739 = $tmp1739->next;
                    }
                    $fn1741 $tmp1740 = $tmp1739->methods[1];
                    panda$core$Object* $tmp1742 = $tmp1740(Iter$479$171721);
                    panda$core$Object* $tmp1738 = $tmp1742;
                    org$pandalanguage$pandac$IRNode* $tmp1737 = ((org$pandalanguage$pandac$IRNode*) $tmp1738);
                    s1736 = $tmp1737;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1737));
                    panda$core$Panda$unref$panda$core$Object($tmp1738);
                    panda$core$String* $tmp1745 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1736), &$s1744);
                    panda$core$String* $tmp1743 = $tmp1745;
                    panda$core$MutableString$append$panda$core$String(result1711, $tmp1743);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1743));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1736));
                }
                goto $l1728;
                $l1729:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$479$171721));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1746, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1711, $tmp1746);
            if (((panda$core$Bit) { ifFalse1709 != NULL }).value) {
            {
                panda$core$String* $tmp1750 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1749, ((panda$core$Object*) ifFalse1709));
                panda$core$String* $tmp1748 = $tmp1750;
                panda$core$String* $tmp1752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1748, &$s1751);
                panda$core$String* $tmp1747 = $tmp1752;
                panda$core$MutableString$append$panda$core$String(result1711, $tmp1747);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1747));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1748));
            }
            }
            {
                panda$core$String* $tmp1756 = panda$core$MutableString$finish$R$panda$core$String(result1711);
                panda$core$String* $tmp1755 = $tmp1756;
                panda$core$String* $tmp1754 = $tmp1755;
                tmp271753 = $tmp1754;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1754));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1755));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1711));
                panda$core$String* $tmp1757 = tmp271753;
                return $tmp1757;
            }
        }
        }
        else {
        panda$core$Bit $tmp1758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1758.value) {
        {
            panda$core$UInt64* $tmp1760 = ((panda$core$UInt64*) ((char*) $match$410_91345->$data + 24));
            value1759 = *$tmp1760;
            panda$core$String* $tmp1764 = panda$core$UInt64$convert$R$panda$core$String(value1759);
            panda$core$String* $tmp1763 = $tmp1764;
            panda$core$String* $tmp1762 = $tmp1763;
            panda$core$String* $tmp1761 = $tmp1762;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1762));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1763));
            return $tmp1761;
        }
        }
        else {
        panda$core$Bit $tmp1765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1765.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1767 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 16));
            value1766 = *$tmp1767;
            panda$core$String* $tmp1773 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1772, ((panda$core$Object*) value1766));
            panda$core$String* $tmp1771 = $tmp1773;
            panda$core$String* $tmp1775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1771, &$s1774);
            panda$core$String* $tmp1770 = $tmp1775;
            panda$core$String* $tmp1769 = $tmp1770;
            panda$core$String* $tmp1768 = $tmp1769;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1769));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1770));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1771));
            return $tmp1768;
        }
        }
        else {
        panda$core$Bit $tmp1776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1776.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1778 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 16));
            value1777 = *$tmp1778;
            panda$core$String* $tmp1784 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1783, ((panda$core$Object*) value1777));
            panda$core$String* $tmp1782 = $tmp1784;
            panda$core$String* $tmp1786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1782, &$s1785);
            panda$core$String* $tmp1781 = $tmp1786;
            panda$core$String* $tmp1780 = $tmp1781;
            panda$core$String* $tmp1779 = $tmp1780;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1780));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1781));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1782));
            return $tmp1779;
        }
        }
        else {
        panda$core$Bit $tmp1787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1787.value) {
        {
            panda$core$String** $tmp1789 = ((panda$core$String**) ((char*) $match$410_91345->$data + 16));
            label1788 = *$tmp1789;
            panda$collections$ImmutableArray** $tmp1791 = ((panda$collections$ImmutableArray**) ((char*) $match$410_91345->$data + 24));
            statements1790 = *$tmp1791;
            panda$core$MutableString* $tmp1795 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1795);
            panda$core$MutableString* $tmp1794 = $tmp1795;
            panda$core$MutableString* $tmp1793 = $tmp1794;
            result1792 = $tmp1793;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1793));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1794));
            if (((panda$core$Bit) { label1788 != NULL }).value) {
            {
                panda$core$String* $tmp1798 = panda$core$String$convert$R$panda$core$String(label1788);
                panda$core$String* $tmp1797 = $tmp1798;
                panda$core$String* $tmp1800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1797, &$s1799);
                panda$core$String* $tmp1796 = $tmp1800;
                panda$core$MutableString$append$panda$core$String(result1792, $tmp1796);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1796));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1797));
            }
            }
            panda$core$MutableString$append$panda$core$String(result1792, &$s1801);
            {
                ITable* $tmp1805 = ((panda$collections$Iterable*) statements1790)->$class->itable;
                while ($tmp1805->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1805 = $tmp1805->next;
                }
                $fn1807 $tmp1806 = $tmp1805->methods[0];
                panda$collections$Iterator* $tmp1808 = $tmp1806(((panda$collections$Iterable*) statements1790));
                panda$collections$Iterator* $tmp1804 = $tmp1808;
                panda$collections$Iterator* $tmp1803 = $tmp1804;
                Iter$499$171802 = $tmp1803;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1803));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1804));
                $l1809:;
                ITable* $tmp1812 = Iter$499$171802->$class->itable;
                while ($tmp1812->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1812 = $tmp1812->next;
                }
                $fn1814 $tmp1813 = $tmp1812->methods[0];
                panda$core$Bit $tmp1815 = $tmp1813(Iter$499$171802);
                panda$core$Bit $tmp1816 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1815);
                bool $tmp1811 = $tmp1816.value;
                if (!$tmp1811) goto $l1810;
                {
                    ITable* $tmp1820 = Iter$499$171802->$class->itable;
                    while ($tmp1820->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1820 = $tmp1820->next;
                    }
                    $fn1822 $tmp1821 = $tmp1820->methods[1];
                    panda$core$Object* $tmp1823 = $tmp1821(Iter$499$171802);
                    panda$core$Object* $tmp1819 = $tmp1823;
                    org$pandalanguage$pandac$IRNode* $tmp1818 = ((org$pandalanguage$pandac$IRNode*) $tmp1819);
                    s1817 = $tmp1818;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1818));
                    panda$core$Panda$unref$panda$core$Object($tmp1819);
                    panda$core$String* $tmp1826 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1817), &$s1825);
                    panda$core$String* $tmp1824 = $tmp1826;
                    panda$core$MutableString$append$panda$core$String(result1792, $tmp1824);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1824));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1817));
                }
                goto $l1809;
                $l1810:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$499$171802));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1827, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1792, $tmp1827);
            {
                panda$core$String* $tmp1831 = panda$core$MutableString$finish$R$panda$core$String(result1792);
                panda$core$String* $tmp1830 = $tmp1831;
                panda$core$String* $tmp1829 = $tmp1830;
                tmp281828 = $tmp1829;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1829));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1830));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1792));
                panda$core$String* $tmp1832 = tmp281828;
                return $tmp1832;
            }
        }
        }
        else {
        panda$core$Bit $tmp1833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1833.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1835 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 16));
            value1834 = *$tmp1835;
            panda$collections$ImmutableArray** $tmp1837 = ((panda$collections$ImmutableArray**) ((char*) $match$410_91345->$data + 24));
            whens1836 = *$tmp1837;
            panda$collections$ImmutableArray** $tmp1839 = ((panda$collections$ImmutableArray**) ((char*) $match$410_91345->$data + 32));
            other1838 = *$tmp1839;
            panda$core$MutableString* $tmp1843 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$String* $tmp1847 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1846, ((panda$core$Object*) value1834));
            panda$core$String* $tmp1845 = $tmp1847;
            panda$core$String* $tmp1849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1845, &$s1848);
            panda$core$String* $tmp1844 = $tmp1849;
            panda$core$MutableString$init$panda$core$String($tmp1843, $tmp1844);
            panda$core$MutableString* $tmp1842 = $tmp1843;
            panda$core$MutableString* $tmp1841 = $tmp1842;
            result1840 = $tmp1841;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1841));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1842));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1844));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1845));
            {
                ITable* $tmp1853 = ((panda$collections$Iterable*) whens1836)->$class->itable;
                while ($tmp1853->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1853 = $tmp1853->next;
                }
                $fn1855 $tmp1854 = $tmp1853->methods[0];
                panda$collections$Iterator* $tmp1856 = $tmp1854(((panda$collections$Iterable*) whens1836));
                panda$collections$Iterator* $tmp1852 = $tmp1856;
                panda$collections$Iterator* $tmp1851 = $tmp1852;
                Iter$506$171850 = $tmp1851;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1851));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1852));
                $l1857:;
                ITable* $tmp1860 = Iter$506$171850->$class->itable;
                while ($tmp1860->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1860 = $tmp1860->next;
                }
                $fn1862 $tmp1861 = $tmp1860->methods[0];
                panda$core$Bit $tmp1863 = $tmp1861(Iter$506$171850);
                panda$core$Bit $tmp1864 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1863);
                bool $tmp1859 = $tmp1864.value;
                if (!$tmp1859) goto $l1858;
                {
                    ITable* $tmp1868 = Iter$506$171850->$class->itable;
                    while ($tmp1868->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1868 = $tmp1868->next;
                    }
                    $fn1870 $tmp1869 = $tmp1868->methods[1];
                    panda$core$Object* $tmp1871 = $tmp1869(Iter$506$171850);
                    panda$core$Object* $tmp1867 = $tmp1871;
                    org$pandalanguage$pandac$IRNode* $tmp1866 = ((org$pandalanguage$pandac$IRNode*) $tmp1867);
                    w1865 = $tmp1866;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1866));
                    panda$core$Panda$unref$panda$core$Object($tmp1867);
                    panda$core$String* $tmp1874 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w1865), &$s1873);
                    panda$core$String* $tmp1872 = $tmp1874;
                    panda$core$MutableString$append$panda$core$String(result1840, $tmp1872);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1872));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1865));
                }
                goto $l1857;
                $l1858:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$506$171850));
            }
            if (((panda$core$Bit) { other1838 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$String(result1840, &$s1875);
                {
                    ITable* $tmp1879 = ((panda$collections$Iterable*) other1838)->$class->itable;
                    while ($tmp1879->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1879 = $tmp1879->next;
                    }
                    $fn1881 $tmp1880 = $tmp1879->methods[0];
                    panda$collections$Iterator* $tmp1882 = $tmp1880(((panda$collections$Iterable*) other1838));
                    panda$collections$Iterator* $tmp1878 = $tmp1882;
                    panda$collections$Iterator* $tmp1877 = $tmp1878;
                    Iter$511$211876 = $tmp1877;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1877));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1878));
                    $l1883:;
                    ITable* $tmp1886 = Iter$511$211876->$class->itable;
                    while ($tmp1886->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1886 = $tmp1886->next;
                    }
                    $fn1888 $tmp1887 = $tmp1886->methods[0];
                    panda$core$Bit $tmp1889 = $tmp1887(Iter$511$211876);
                    panda$core$Bit $tmp1890 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1889);
                    bool $tmp1885 = $tmp1890.value;
                    if (!$tmp1885) goto $l1884;
                    {
                        ITable* $tmp1894 = Iter$511$211876->$class->itable;
                        while ($tmp1894->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1894 = $tmp1894->next;
                        }
                        $fn1896 $tmp1895 = $tmp1894->methods[1];
                        panda$core$Object* $tmp1897 = $tmp1895(Iter$511$211876);
                        panda$core$Object* $tmp1893 = $tmp1897;
                        org$pandalanguage$pandac$IRNode* $tmp1892 = ((org$pandalanguage$pandac$IRNode*) $tmp1893);
                        s1891 = $tmp1892;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1892));
                        panda$core$Panda$unref$panda$core$Object($tmp1893);
                        panda$core$String* $tmp1900 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1891), &$s1899);
                        panda$core$String* $tmp1898 = $tmp1900;
                        panda$core$MutableString$append$panda$core$String(result1840, $tmp1898);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1898));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1891));
                    }
                    goto $l1883;
                    $l1884:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$511$211876));
                }
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1901, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1840, $tmp1901);
            {
                panda$core$String* $tmp1905 = panda$core$MutableString$finish$R$panda$core$String(result1840);
                panda$core$String* $tmp1904 = $tmp1905;
                panda$core$String* $tmp1903 = $tmp1904;
                tmp291902 = $tmp1903;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1903));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1904));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1840));
                panda$core$String* $tmp1906 = tmp291902;
                return $tmp1906;
            }
        }
        }
        else {
        panda$core$Bit $tmp1907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1907.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1909 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 16));
            target1908 = *$tmp1909;
            org$pandalanguage$pandac$MethodRef** $tmp1911 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$410_91345->$data + 24));
            m1910 = *$tmp1911;
            if (((panda$core$Bit) { target1908 != NULL }).value) {
            {
                panda$core$String* $tmp1919 = (($fn1918) target1908->$class->vtable[0])(target1908);
                panda$core$String* $tmp1917 = $tmp1919;
                panda$core$String* $tmp1921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1917, &$s1920);
                panda$core$String* $tmp1916 = $tmp1921;
                panda$core$String* $tmp1922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1916, ((org$pandalanguage$pandac$Symbol*) m1910->value)->name);
                panda$core$String* $tmp1915 = $tmp1922;
                panda$core$String* $tmp1924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1915, &$s1923);
                panda$core$String* $tmp1914 = $tmp1924;
                panda$core$String* $tmp1913 = $tmp1914;
                panda$core$String* $tmp1912 = $tmp1913;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1913));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1914));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1915));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1916));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1917));
                return $tmp1912;
            }
            }
            panda$core$String* $tmp1926 = ((org$pandalanguage$pandac$Symbol*) m1910->value)->name;
            panda$core$String* $tmp1925 = $tmp1926;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1926));
            return $tmp1925;
        }
        }
        else {
        panda$core$Bit $tmp1927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1927.value) {
        {
            panda$core$UInt64* $tmp1929 = ((panda$core$UInt64*) ((char*) $match$410_91345->$data + 24));
            value1928 = *$tmp1929;
            panda$core$UInt64$wrapper* $tmp1935;
            $tmp1935 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
            $tmp1935->value = value1928;
            panda$core$Object* $tmp1934 = ((panda$core$Object*) $tmp1935);
            panda$core$String* $tmp1936 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1933, $tmp1934);
            panda$core$String* $tmp1932 = $tmp1936;
            panda$core$String* $tmp1931 = $tmp1932;
            panda$core$String* $tmp1930 = $tmp1931;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1931));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1932));
            panda$core$Panda$unref$panda$core$Object($tmp1934);
            return $tmp1930;
        }
        }
        else {
        panda$core$Bit $tmp1937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1937.value) {
        {
            panda$core$String* $tmp1939 = &$s1940;
            panda$core$String* $tmp1938 = $tmp1939;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1939));
            return $tmp1938;
        }
        }
        else {
        panda$core$Bit $tmp1941 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1941.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1943 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$410_91345->$data + 16));
            op1942 = *$tmp1943;
            org$pandalanguage$pandac$IRNode** $tmp1945 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 24));
            base1944 = *$tmp1945;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1953;
            $tmp1953 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1953->value = op1942;
            panda$core$Object* $tmp1952 = ((panda$core$Object*) $tmp1953);
            panda$core$String* $tmp1955 = (($fn1954) $tmp1952->$class->vtable[0])($tmp1952);
            panda$core$String* $tmp1951 = $tmp1955;
            panda$core$String* $tmp1957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1951, &$s1956);
            panda$core$String* $tmp1950 = $tmp1957;
            panda$core$String* $tmp1958 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1950, ((panda$core$Object*) base1944));
            panda$core$String* $tmp1949 = $tmp1958;
            panda$core$String* $tmp1960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1949, &$s1959);
            panda$core$String* $tmp1948 = $tmp1960;
            panda$core$String* $tmp1947 = $tmp1948;
            panda$core$String* $tmp1946 = $tmp1947;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1947));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1948));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1949));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1950));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1951));
            panda$core$Panda$unref$panda$core$Object($tmp1952);
            return $tmp1946;
        }
        }
        else {
        panda$core$Bit $tmp1961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1961.value) {
        {
            panda$core$String** $tmp1963 = ((panda$core$String**) ((char*) $match$410_91345->$data + 16));
            label1962 = *$tmp1963;
            org$pandalanguage$pandac$IRNode** $tmp1965 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 24));
            target1964 = *$tmp1965;
            org$pandalanguage$pandac$IRNode** $tmp1967 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 32));
            list1966 = *$tmp1967;
            panda$collections$ImmutableArray** $tmp1969 = ((panda$collections$ImmutableArray**) ((char*) $match$410_91345->$data + 40));
            statements1968 = *$tmp1969;
            panda$core$MutableString* $tmp1973 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1973);
            panda$core$MutableString* $tmp1972 = $tmp1973;
            panda$core$MutableString* $tmp1971 = $tmp1972;
            result1970 = $tmp1971;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1971));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1972));
            if (((panda$core$Bit) { label1962 != NULL }).value) {
            {
                panda$core$String* $tmp1976 = panda$core$String$convert$R$panda$core$String(label1962);
                panda$core$String* $tmp1975 = $tmp1976;
                panda$core$String* $tmp1978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1975, &$s1977);
                panda$core$String* $tmp1974 = $tmp1978;
                panda$core$MutableString$append$panda$core$String(result1970, $tmp1974);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1974));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1975));
            }
            }
            panda$core$String* $tmp1984 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1983, ((panda$core$Object*) target1964));
            panda$core$String* $tmp1982 = $tmp1984;
            panda$core$String* $tmp1986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1982, &$s1985);
            panda$core$String* $tmp1981 = $tmp1986;
            panda$core$String* $tmp1987 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1981, ((panda$core$Object*) list1966));
            panda$core$String* $tmp1980 = $tmp1987;
            panda$core$String* $tmp1989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1980, &$s1988);
            panda$core$String* $tmp1979 = $tmp1989;
            panda$core$MutableString$append$panda$core$String(result1970, $tmp1979);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1979));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1980));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1981));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1982));
            {
                ITable* $tmp1993 = ((panda$collections$Iterable*) statements1968)->$class->itable;
                while ($tmp1993->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1993 = $tmp1993->next;
                }
                $fn1995 $tmp1994 = $tmp1993->methods[0];
                panda$collections$Iterator* $tmp1996 = $tmp1994(((panda$collections$Iterable*) statements1968));
                panda$collections$Iterator* $tmp1992 = $tmp1996;
                panda$collections$Iterator* $tmp1991 = $tmp1992;
                Iter$534$171990 = $tmp1991;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1991));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1992));
                $l1997:;
                ITable* $tmp2000 = Iter$534$171990->$class->itable;
                while ($tmp2000->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2000 = $tmp2000->next;
                }
                $fn2002 $tmp2001 = $tmp2000->methods[0];
                panda$core$Bit $tmp2003 = $tmp2001(Iter$534$171990);
                panda$core$Bit $tmp2004 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2003);
                bool $tmp1999 = $tmp2004.value;
                if (!$tmp1999) goto $l1998;
                {
                    ITable* $tmp2008 = Iter$534$171990->$class->itable;
                    while ($tmp2008->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2008 = $tmp2008->next;
                    }
                    $fn2010 $tmp2009 = $tmp2008->methods[1];
                    panda$core$Object* $tmp2011 = $tmp2009(Iter$534$171990);
                    panda$core$Object* $tmp2007 = $tmp2011;
                    org$pandalanguage$pandac$IRNode* $tmp2006 = ((org$pandalanguage$pandac$IRNode*) $tmp2007);
                    s2005 = $tmp2006;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2006));
                    panda$core$Panda$unref$panda$core$Object($tmp2007);
                    panda$core$String* $tmp2014 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2005), &$s2013);
                    panda$core$String* $tmp2012 = $tmp2014;
                    panda$core$MutableString$append$panda$core$String(result1970, $tmp2012);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2012));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2005));
                }
                goto $l1997;
                $l1998:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$534$171990));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp2015, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1970, $tmp2015);
            {
                panda$core$String* $tmp2019 = panda$core$MutableString$finish$R$panda$core$String(result1970);
                panda$core$String* $tmp2018 = $tmp2019;
                panda$core$String* $tmp2017 = $tmp2018;
                tmp302016 = $tmp2017;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2017));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2018));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1970));
                panda$core$String* $tmp2020 = tmp302016;
                return $tmp2020;
            }
        }
        }
        else {
        panda$core$Bit $tmp2021 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp2021.value) {
        {
            panda$core$Real64* $tmp2023 = ((panda$core$Real64*) ((char*) $match$410_91345->$data + 24));
            value2022 = *$tmp2023;
            panda$core$String* $tmp2027 = panda$core$Real64$convert$R$panda$core$String(value2022);
            panda$core$String* $tmp2026 = $tmp2027;
            panda$core$String* $tmp2025 = $tmp2026;
            panda$core$String* $tmp2024 = $tmp2025;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2025));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2026));
            return $tmp2024;
        }
        }
        else {
        panda$core$Bit $tmp2028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp2028.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2030 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 16));
            value2029 = *$tmp2030;
            if (((panda$core$Bit) { value2029 != NULL }).value) {
            {
                panda$core$String* $tmp2036 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2035, ((panda$core$Object*) value2029));
                panda$core$String* $tmp2034 = $tmp2036;
                panda$core$String* $tmp2038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2034, &$s2037);
                panda$core$String* $tmp2033 = $tmp2038;
                panda$core$String* $tmp2032 = $tmp2033;
                panda$core$String* $tmp2031 = $tmp2032;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2032));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2033));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2034));
                return $tmp2031;
            }
            }
            panda$core$String* $tmp2040 = &$s2041;
            panda$core$String* $tmp2039 = $tmp2040;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2040));
            return $tmp2039;
        }
        }
        else {
        panda$core$Bit $tmp2042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2042.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2044 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_91345->$data + 16));
            type2043 = *$tmp2044;
            panda$core$Int64* $tmp2046 = ((panda$core$Int64*) ((char*) $match$410_91345->$data + 24));
            id2045 = *$tmp2046;
            panda$core$Int64$wrapper* $tmp2055;
            $tmp2055 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2055->value = id2045;
            panda$core$Object* $tmp2054 = ((panda$core$Object*) $tmp2055);
            panda$core$String* $tmp2056 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2053, $tmp2054);
            panda$core$String* $tmp2052 = $tmp2056;
            panda$core$String* $tmp2058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2052, &$s2057);
            panda$core$String* $tmp2051 = $tmp2058;
            panda$core$String* $tmp2059 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2051, ((panda$core$Object*) type2043));
            panda$core$String* $tmp2050 = $tmp2059;
            panda$core$String* $tmp2061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2050, &$s2060);
            panda$core$String* $tmp2049 = $tmp2061;
            panda$core$String* $tmp2048 = $tmp2049;
            panda$core$String* $tmp2047 = $tmp2048;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2048));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2049));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2050));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2051));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2052));
            panda$core$Panda$unref$panda$core$Object($tmp2054);
            return $tmp2047;
        }
        }
        else {
        panda$core$Bit $tmp2062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2062.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2064 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 0));
            base2063 = *$tmp2064;
            panda$core$Int64* $tmp2066 = ((panda$core$Int64*) ((char*) $match$410_91345->$data + 8));
            id2065 = *$tmp2066;
            panda$core$Int64$wrapper* $tmp2075;
            $tmp2075 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2075->value = id2065;
            panda$core$Object* $tmp2074 = ((panda$core$Object*) $tmp2075);
            panda$core$String* $tmp2076 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2073, $tmp2074);
            panda$core$String* $tmp2072 = $tmp2076;
            panda$core$String* $tmp2078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2072, &$s2077);
            panda$core$String* $tmp2071 = $tmp2078;
            panda$core$String* $tmp2079 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2071, ((panda$core$Object*) base2063));
            panda$core$String* $tmp2070 = $tmp2079;
            panda$core$String* $tmp2081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2070, &$s2080);
            panda$core$String* $tmp2069 = $tmp2081;
            panda$core$String* $tmp2068 = $tmp2069;
            panda$core$String* $tmp2067 = $tmp2068;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2068));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2069));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2070));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2071));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2072));
            panda$core$Panda$unref$panda$core$Object($tmp2074);
            return $tmp2067;
        }
        }
        else {
        panda$core$Bit $tmp2082 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2082.value) {
        {
            panda$core$String* $tmp2084 = &$s2085;
            panda$core$String* $tmp2083 = $tmp2084;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2084));
            return $tmp2083;
        }
        }
        else {
        panda$core$Bit $tmp2086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2086.value) {
        {
            panda$core$String** $tmp2088 = ((panda$core$String**) ((char*) $match$410_91345->$data + 16));
            str2087 = *$tmp2088;
            panda$core$String* $tmp2090 = str2087;
            panda$core$String* $tmp2089 = $tmp2090;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2090));
            return $tmp2089;
        }
        }
        else {
        panda$core$Bit $tmp2091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp2091.value) {
        {
            panda$core$String* $tmp2093 = &$s2094;
            panda$core$String* $tmp2092 = $tmp2093;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2093));
            return $tmp2092;
        }
        }
        else {
        panda$core$Bit $tmp2095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp2095.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2097 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 16));
            test2096 = *$tmp2097;
            org$pandalanguage$pandac$IRNode** $tmp2099 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 24));
            ifTrue2098 = *$tmp2099;
            org$pandalanguage$pandac$IRNode** $tmp2101 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 32));
            ifFalse2100 = *$tmp2101;
            panda$core$String* $tmp2111 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2110, ((panda$core$Object*) test2096));
            panda$core$String* $tmp2109 = $tmp2111;
            panda$core$String* $tmp2113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2109, &$s2112);
            panda$core$String* $tmp2108 = $tmp2113;
            panda$core$String* $tmp2114 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2108, ((panda$core$Object*) ifTrue2098));
            panda$core$String* $tmp2107 = $tmp2114;
            panda$core$String* $tmp2116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2107, &$s2115);
            panda$core$String* $tmp2106 = $tmp2116;
            panda$core$String* $tmp2117 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2106, ((panda$core$Object*) ifFalse2100));
            panda$core$String* $tmp2105 = $tmp2117;
            panda$core$String* $tmp2119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2105, &$s2118);
            panda$core$String* $tmp2104 = $tmp2119;
            panda$core$String* $tmp2103 = $tmp2104;
            panda$core$String* $tmp2102 = $tmp2103;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2103));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2104));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2105));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2106));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2107));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2108));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2109));
            return $tmp2102;
        }
        }
        else {
        panda$core$Bit $tmp2120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2120.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2122 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_91345->$data + 16));
            type2121 = *$tmp2122;
            panda$core$String* $tmp2126 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type2121);
            panda$core$String* $tmp2125 = $tmp2126;
            panda$core$String* $tmp2124 = $tmp2125;
            panda$core$String* $tmp2123 = $tmp2124;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2124));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2125));
            return $tmp2123;
        }
        }
        else {
        panda$core$Bit $tmp2127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp2127.value) {
        {
            panda$core$String** $tmp2129 = ((panda$core$String**) ((char*) $match$410_91345->$data + 16));
            name2128 = *$tmp2129;
            panda$core$String* $tmp2131 = name2128;
            panda$core$String* $tmp2130 = $tmp2131;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2131));
            return $tmp2130;
        }
        }
        else {
        panda$core$Bit $tmp2132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp2132.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2134 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 24));
            base2133 = *$tmp2134;
            panda$collections$ImmutableArray** $tmp2136 = ((panda$collections$ImmutableArray**) ((char*) $match$410_91345->$data + 32));
            args2135 = *$tmp2136;
            panda$core$String* $tmp2144 = (($fn2143) base2133->$class->vtable[0])(base2133);
            panda$core$String* $tmp2142 = $tmp2144;
            panda$core$String* $tmp2146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2142, &$s2145);
            panda$core$String* $tmp2141 = $tmp2146;
            panda$core$String* $tmp2148 = panda$collections$ImmutableArray$join$R$panda$core$String(args2135);
            panda$core$String* $tmp2147 = $tmp2148;
            panda$core$String* $tmp2149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2141, $tmp2147);
            panda$core$String* $tmp2140 = $tmp2149;
            panda$core$String* $tmp2151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2140, &$s2150);
            panda$core$String* $tmp2139 = $tmp2151;
            panda$core$String* $tmp2138 = $tmp2139;
            panda$core$String* $tmp2137 = $tmp2138;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2138));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2139));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2140));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2147));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2141));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2142));
            return $tmp2137;
        }
        }
        else {
        panda$core$Bit $tmp2152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp2152.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2154 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 24));
            target2153 = *$tmp2154;
            panda$collections$ImmutableArray** $tmp2156 = ((panda$collections$ImmutableArray**) ((char*) $match$410_91345->$data + 32));
            methods2155 = *$tmp2156;
            panda$collections$ImmutableArray** $tmp2158 = ((panda$collections$ImmutableArray**) ((char*) $match$410_91345->$data + 40));
            args2157 = *$tmp2158;
            panda$core$String* $tmp2168 = (($fn2167) target2153->$class->vtable[0])(target2153);
            panda$core$String* $tmp2166 = $tmp2168;
            panda$core$String* $tmp2170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2166, &$s2169);
            panda$core$String* $tmp2165 = $tmp2170;
            panda$core$Object* $tmp2172 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2155, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2171 = $tmp2172;
            panda$core$String* $tmp2173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2165, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2171)->value)->name);
            panda$core$String* $tmp2164 = $tmp2173;
            panda$core$String* $tmp2175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2164, &$s2174);
            panda$core$String* $tmp2163 = $tmp2175;
            panda$core$String* $tmp2177 = panda$collections$ImmutableArray$join$R$panda$core$String(args2157);
            panda$core$String* $tmp2176 = $tmp2177;
            panda$core$String* $tmp2178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2163, $tmp2176);
            panda$core$String* $tmp2162 = $tmp2178;
            panda$core$String* $tmp2180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2162, &$s2179);
            panda$core$String* $tmp2161 = $tmp2180;
            panda$core$String* $tmp2160 = $tmp2161;
            panda$core$String* $tmp2159 = $tmp2160;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2160));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2161));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2162));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2176));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2163));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2164));
            panda$core$Panda$unref$panda$core$Object($tmp2171);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2165));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2166));
            return $tmp2159;
        }
        }
        else {
        panda$core$Bit $tmp2181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp2181.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2183 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 16));
            target2182 = *$tmp2183;
            panda$collections$ImmutableArray** $tmp2185 = ((panda$collections$ImmutableArray**) ((char*) $match$410_91345->$data + 24));
            methods2184 = *$tmp2185;
            panda$core$String* $tmp2193 = (($fn2192) target2182->$class->vtable[0])(target2182);
            panda$core$String* $tmp2191 = $tmp2193;
            panda$core$String* $tmp2195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2191, &$s2194);
            panda$core$String* $tmp2190 = $tmp2195;
            panda$core$Object* $tmp2197 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2184, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2196 = $tmp2197;
            panda$core$String* $tmp2198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2190, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2196)->value)->name);
            panda$core$String* $tmp2189 = $tmp2198;
            panda$core$String* $tmp2200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2189, &$s2199);
            panda$core$String* $tmp2188 = $tmp2200;
            panda$core$String* $tmp2187 = $tmp2188;
            panda$core$String* $tmp2186 = $tmp2187;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2187));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2188));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2189));
            panda$core$Panda$unref$panda$core$Object($tmp2196);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2190));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2191));
            return $tmp2186;
        }
        }
        else {
        panda$core$Bit $tmp2201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp2201.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2203 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 16));
            start2202 = *$tmp2203;
            org$pandalanguage$pandac$IRNode** $tmp2205 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 24));
            end2204 = *$tmp2205;
            panda$core$Bit* $tmp2207 = ((panda$core$Bit*) ((char*) $match$410_91345->$data + 32));
            inclusive2206 = *$tmp2207;
            org$pandalanguage$pandac$IRNode** $tmp2209 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 33));
            step2208 = *$tmp2209;
            panda$core$MutableString* $tmp2213 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp2213);
            panda$core$MutableString* $tmp2212 = $tmp2213;
            panda$core$MutableString* $tmp2211 = $tmp2212;
            result2210 = $tmp2211;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2211));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2212));
            if (((panda$core$Bit) { start2202 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result2210, ((panda$core$Object*) start2202));
            }
            }
            if (inclusive2206.value) {
            {
                panda$core$MutableString$append$panda$core$String(result2210, &$s2214);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result2210, &$s2215);
            }
            }
            if (((panda$core$Bit) { end2204 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result2210, ((panda$core$Object*) end2204));
            }
            }
            if (((panda$core$Bit) { step2208 != NULL }).value) {
            {
                panda$core$String* $tmp2219 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2218, ((panda$core$Object*) step2208));
                panda$core$String* $tmp2217 = $tmp2219;
                panda$core$String* $tmp2221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2217, &$s2220);
                panda$core$String* $tmp2216 = $tmp2221;
                panda$core$MutableString$append$panda$core$String(result2210, $tmp2216);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2216));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2217));
            }
            }
            {
                panda$core$String* $tmp2225 = panda$core$MutableString$finish$R$panda$core$String(result2210);
                panda$core$String* $tmp2224 = $tmp2225;
                panda$core$String* $tmp2223 = $tmp2224;
                tmp312222 = $tmp2223;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2223));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2224));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2210));
                panda$core$String* $tmp2226 = tmp312222;
                return $tmp2226;
            }
        }
        }
        else {
        panda$core$Bit $tmp2227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp2227.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp2229 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$410_91345->$data + 16));
            kind2228 = *$tmp2229;
            panda$collections$ImmutableArray** $tmp2231 = ((panda$collections$ImmutableArray**) ((char*) $match$410_91345->$data + 24));
            decls2230 = *$tmp2231;
            panda$core$MutableString* $tmp2235 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp2235);
            panda$core$MutableString* $tmp2234 = $tmp2235;
            panda$core$MutableString* $tmp2233 = $tmp2234;
            result2232 = $tmp2233;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2233));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2234));
            {
                $match$588_172236 = kind2228;
                panda$core$Bit $tmp2237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$588_172236.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp2237.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2232, &$s2238);
                }
                }
                else {
                panda$core$Bit $tmp2239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$588_172236.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp2239.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2232, &$s2240);
                }
                }
                else {
                panda$core$Bit $tmp2241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$588_172236.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp2241.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2232, &$s2242);
                }
                }
                else {
                panda$core$Bit $tmp2243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$588_172236.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp2243.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2232, &$s2244);
                }
                }
                }
                }
                }
            }
            panda$core$String* $tmp2246 = panda$collections$ImmutableArray$join$R$panda$core$String(decls2230);
            panda$core$String* $tmp2245 = $tmp2246;
            panda$core$MutableString$append$panda$core$String(result2232, $tmp2245);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2245));
            {
                panda$core$String* $tmp2250 = panda$core$MutableString$finish$R$panda$core$String(result2232);
                panda$core$String* $tmp2249 = $tmp2250;
                panda$core$String* $tmp2248 = $tmp2249;
                tmp322247 = $tmp2248;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2248));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2249));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2232));
                panda$core$String* $tmp2251 = tmp322247;
                return $tmp2251;
            }
        }
        }
        else {
        panda$core$Bit $tmp2252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2252.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2254 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$410_91345->$data + 16));
            variable2253 = *$tmp2254;
            panda$core$String* $tmp2256 = ((org$pandalanguage$pandac$Symbol*) variable2253)->name;
            panda$core$String* $tmp2255 = $tmp2256;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2256));
            return $tmp2255;
        }
        }
        else {
        panda$core$Bit $tmp2257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp2257.value) {
        {
            panda$collections$ImmutableArray** $tmp2259 = ((panda$collections$ImmutableArray**) ((char*) $match$410_91345->$data + 16));
            tests2258 = *$tmp2259;
            panda$collections$ImmutableArray** $tmp2261 = ((panda$collections$ImmutableArray**) ((char*) $match$410_91345->$data + 24));
            statements2260 = *$tmp2261;
            panda$core$String* $tmp2270 = panda$collections$ImmutableArray$join$R$panda$core$String(tests2258);
            panda$core$String* $tmp2269 = $tmp2270;
            panda$core$String* $tmp2271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2268, $tmp2269);
            panda$core$String* $tmp2267 = $tmp2271;
            panda$core$String* $tmp2273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2267, &$s2272);
            panda$core$String* $tmp2266 = $tmp2273;
            panda$core$String* $tmp2276 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(statements2260, &$s2275);
            panda$core$String* $tmp2274 = $tmp2276;
            panda$core$String* $tmp2277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2266, $tmp2274);
            panda$core$String* $tmp2265 = $tmp2277;
            panda$core$String* $tmp2279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2265, &$s2278);
            panda$core$String* $tmp2264 = $tmp2279;
            panda$core$String* $tmp2263 = $tmp2264;
            panda$core$String* $tmp2262 = $tmp2263;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2263));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2264));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2265));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2274));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2266));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2267));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2269));
            return $tmp2262;
        }
        }
        else {
        panda$core$Bit $tmp2280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_91345->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp2280.value) {
        {
            panda$core$String** $tmp2282 = ((panda$core$String**) ((char*) $match$410_91345->$data + 16));
            label2281 = *$tmp2282;
            org$pandalanguage$pandac$IRNode** $tmp2284 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_91345->$data + 24));
            test2283 = *$tmp2284;
            panda$collections$ImmutableArray** $tmp2286 = ((panda$collections$ImmutableArray**) ((char*) $match$410_91345->$data + 32));
            statements2285 = *$tmp2286;
            panda$core$MutableString* $tmp2290 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp2290);
            panda$core$MutableString* $tmp2289 = $tmp2290;
            panda$core$MutableString* $tmp2288 = $tmp2289;
            result2287 = $tmp2288;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2288));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2289));
            if (((panda$core$Bit) { label2281 != NULL }).value) {
            {
                panda$core$String* $tmp2293 = panda$core$String$convert$R$panda$core$String(label2281);
                panda$core$String* $tmp2292 = $tmp2293;
                panda$core$String* $tmp2295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2292, &$s2294);
                panda$core$String* $tmp2291 = $tmp2295;
                panda$core$MutableString$append$panda$core$String(result2287, $tmp2291);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2291));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2292));
            }
            }
            panda$core$String* $tmp2299 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2298, ((panda$core$Object*) test2283));
            panda$core$String* $tmp2297 = $tmp2299;
            panda$core$String* $tmp2301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2297, &$s2300);
            panda$core$String* $tmp2296 = $tmp2301;
            panda$core$MutableString$append$panda$core$String(result2287, $tmp2296);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2296));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2297));
            {
                ITable* $tmp2305 = ((panda$collections$Iterable*) statements2285)->$class->itable;
                while ($tmp2305->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2305 = $tmp2305->next;
                }
                $fn2307 $tmp2306 = $tmp2305->methods[0];
                panda$collections$Iterator* $tmp2308 = $tmp2306(((panda$collections$Iterable*) statements2285));
                panda$collections$Iterator* $tmp2304 = $tmp2308;
                panda$collections$Iterator* $tmp2303 = $tmp2304;
                Iter$606$172302 = $tmp2303;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2303));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2304));
                $l2309:;
                ITable* $tmp2312 = Iter$606$172302->$class->itable;
                while ($tmp2312->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2312 = $tmp2312->next;
                }
                $fn2314 $tmp2313 = $tmp2312->methods[0];
                panda$core$Bit $tmp2315 = $tmp2313(Iter$606$172302);
                panda$core$Bit $tmp2316 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2315);
                bool $tmp2311 = $tmp2316.value;
                if (!$tmp2311) goto $l2310;
                {
                    ITable* $tmp2320 = Iter$606$172302->$class->itable;
                    while ($tmp2320->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2320 = $tmp2320->next;
                    }
                    $fn2322 $tmp2321 = $tmp2320->methods[1];
                    panda$core$Object* $tmp2323 = $tmp2321(Iter$606$172302);
                    panda$core$Object* $tmp2319 = $tmp2323;
                    org$pandalanguage$pandac$IRNode* $tmp2318 = ((org$pandalanguage$pandac$IRNode*) $tmp2319);
                    s2317 = $tmp2318;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2318));
                    panda$core$Panda$unref$panda$core$Object($tmp2319);
                    panda$core$String* $tmp2326 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2317), &$s2325);
                    panda$core$String* $tmp2324 = $tmp2326;
                    panda$core$MutableString$append$panda$core$String(result2287, $tmp2324);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2324));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2317));
                }
                goto $l2309;
                $l2310:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$606$172302));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp2327, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result2287, $tmp2327);
            {
                panda$core$String* $tmp2331 = panda$core$MutableString$finish$R$panda$core$String(result2287);
                panda$core$String* $tmp2330 = $tmp2331;
                panda$core$String* $tmp2329 = $tmp2330;
                tmp332328 = $tmp2329;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2329));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2330));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2287));
                panda$core$String* $tmp2332 = tmp332328;
                return $tmp2332;
            }
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
void org$pandalanguage$pandac$IRNode$cleanup(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$5_12333;
    org$pandalanguage$pandac$Position _f02335;
    org$pandalanguage$pandac$IRNode* _f12337;
    org$pandalanguage$pandac$IRNode* _f22339;
    org$pandalanguage$pandac$Position _f02342;
    org$pandalanguage$pandac$Type* _f12344;
    org$pandalanguage$pandac$IRNode* _f22346;
    org$pandalanguage$pandac$parser$Token$Kind _f32348;
    org$pandalanguage$pandac$IRNode* _f42350;
    org$pandalanguage$pandac$Position _f02353;
    org$pandalanguage$pandac$Type* _f12355;
    panda$core$Bit _f22357;
    org$pandalanguage$pandac$Position _f02360;
    panda$collections$ImmutableArray* _f12362;
    org$pandalanguage$pandac$Position _f02365;
    panda$core$String* _f12367;
    org$pandalanguage$pandac$Position _f02370;
    org$pandalanguage$pandac$Type* _f12372;
    org$pandalanguage$pandac$MethodRef* _f22374;
    panda$collections$ImmutableArray* _f32376;
    org$pandalanguage$pandac$Position _f02379;
    org$pandalanguage$pandac$IRNode* _f12381;
    org$pandalanguage$pandac$Type* _f22383;
    panda$core$Bit _f32385;
    org$pandalanguage$pandac$Position _f02388;
    org$pandalanguage$pandac$ChoiceEntry* _f12390;
    org$pandalanguage$pandac$Position _f02393;
    org$pandalanguage$pandac$IRNode* _f12395;
    org$pandalanguage$pandac$ChoiceEntry* _f22397;
    panda$core$Int64 _f32399;
    org$pandalanguage$pandac$Position _f02402;
    org$pandalanguage$pandac$Type* _f12404;
    org$pandalanguage$pandac$IRNode* _f22406;
    org$pandalanguage$pandac$Position _f02409;
    org$pandalanguage$pandac$Type* _f12411;
    org$pandalanguage$pandac$Position _f02414;
    panda$core$String* _f12416;
    org$pandalanguage$pandac$IRNode* _f02419;
    org$pandalanguage$pandac$IRNode* _f12421;
    org$pandalanguage$pandac$Position _f02424;
    panda$core$String* _f12426;
    panda$collections$ImmutableArray* _f22428;
    org$pandalanguage$pandac$IRNode* _f32430;
    org$pandalanguage$pandac$IRNode* _f02433;
    org$pandalanguage$pandac$IRNode* _f12435;
    org$pandalanguage$pandac$Position _f02438;
    org$pandalanguage$pandac$Type* _f12440;
    org$pandalanguage$pandac$IRNode* _f22442;
    org$pandalanguage$pandac$FieldDecl* _f32444;
    org$pandalanguage$pandac$Position _f02447;
    org$pandalanguage$pandac$IRNode* _f12449;
    panda$collections$ImmutableArray* _f22451;
    org$pandalanguage$pandac$IRNode* _f32453;
    org$pandalanguage$pandac$Position _f02456;
    org$pandalanguage$pandac$Type* _f12458;
    panda$core$UInt64 _f22460;
    org$pandalanguage$pandac$Position _f02463;
    org$pandalanguage$pandac$IRNode* _f12465;
    org$pandalanguage$pandac$Position _f02468;
    org$pandalanguage$pandac$IRNode* _f12470;
    org$pandalanguage$pandac$Position _f02473;
    panda$core$String* _f12475;
    panda$collections$ImmutableArray* _f22477;
    org$pandalanguage$pandac$Position _f02480;
    org$pandalanguage$pandac$IRNode* _f12482;
    panda$collections$ImmutableArray* _f22484;
    panda$collections$ImmutableArray* _f32486;
    org$pandalanguage$pandac$Position _f02489;
    org$pandalanguage$pandac$IRNode* _f12491;
    org$pandalanguage$pandac$MethodRef* _f22493;
    org$pandalanguage$pandac$Position _f02496;
    org$pandalanguage$pandac$Type* _f12498;
    panda$core$UInt64 _f22500;
    org$pandalanguage$pandac$Position _f02503;
    org$pandalanguage$pandac$Type* _f12505;
    org$pandalanguage$pandac$Position _f02508;
    org$pandalanguage$pandac$parser$Token$Kind _f12510;
    org$pandalanguage$pandac$IRNode* _f22512;
    org$pandalanguage$pandac$Position _f02515;
    panda$core$String* _f12517;
    org$pandalanguage$pandac$IRNode* _f22519;
    org$pandalanguage$pandac$IRNode* _f32521;
    panda$collections$ImmutableArray* _f42523;
    org$pandalanguage$pandac$Position _f02526;
    org$pandalanguage$pandac$Type* _f12528;
    panda$core$Real64 _f22530;
    org$pandalanguage$pandac$Position _f02533;
    org$pandalanguage$pandac$IRNode* _f12535;
    org$pandalanguage$pandac$Position _f02538;
    org$pandalanguage$pandac$Type* _f12540;
    panda$core$Int64 _f22542;
    org$pandalanguage$pandac$IRNode* _f02545;
    panda$core$Int64 _f12547;
    org$pandalanguage$pandac$Position _f02550;
    org$pandalanguage$pandac$Type* _f12552;
    org$pandalanguage$pandac$Position _f02555;
    panda$core$String* _f12557;
    org$pandalanguage$pandac$Position _f02560;
    org$pandalanguage$pandac$Type* _f12562;
    org$pandalanguage$pandac$Position _f02565;
    org$pandalanguage$pandac$IRNode* _f12567;
    org$pandalanguage$pandac$IRNode* _f22569;
    org$pandalanguage$pandac$IRNode* _f32571;
    org$pandalanguage$pandac$Position _f02574;
    org$pandalanguage$pandac$Type* _f12576;
    org$pandalanguage$pandac$Position _f02579;
    panda$core$String* _f12581;
    org$pandalanguage$pandac$Position _f02584;
    org$pandalanguage$pandac$Type* _f12586;
    org$pandalanguage$pandac$IRNode* _f22588;
    panda$collections$ImmutableArray* _f32590;
    org$pandalanguage$pandac$Position _f02593;
    org$pandalanguage$pandac$Type* _f12595;
    org$pandalanguage$pandac$IRNode* _f22597;
    panda$collections$ImmutableArray* _f32599;
    panda$collections$ImmutableArray* _f42601;
    org$pandalanguage$pandac$Position _f02604;
    org$pandalanguage$pandac$IRNode* _f12606;
    panda$collections$ImmutableArray* _f22608;
    org$pandalanguage$pandac$Position _f02611;
    org$pandalanguage$pandac$IRNode* _f12613;
    org$pandalanguage$pandac$IRNode* _f22615;
    panda$core$Bit _f32617;
    org$pandalanguage$pandac$IRNode* _f42619;
    org$pandalanguage$pandac$Position _f02622;
    org$pandalanguage$pandac$Variable$Kind _f12624;
    panda$collections$ImmutableArray* _f22626;
    org$pandalanguage$pandac$Position _f02629;
    org$pandalanguage$pandac$Variable* _f12631;
    org$pandalanguage$pandac$Position _f02634;
    panda$collections$ImmutableArray* _f12636;
    panda$collections$ImmutableArray* _f22638;
    org$pandalanguage$pandac$Position _f02641;
    panda$core$String* _f12643;
    org$pandalanguage$pandac$IRNode* _f22645;
    panda$collections$ImmutableArray* _f32647;
    {
        $match$5_12333 = self;
        panda$core$Bit $tmp2334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp2334.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2336 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02335 = *$tmp2336;
            org$pandalanguage$pandac$IRNode** $tmp2338 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 16));
            _f12337 = *$tmp2338;
            org$pandalanguage$pandac$IRNode** $tmp2340 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 24));
            _f22339 = *$tmp2340;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12337));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22339));
        }
        }
        else {
        panda$core$Bit $tmp2341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp2341.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2343 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02342 = *$tmp2343;
            org$pandalanguage$pandac$Type** $tmp2345 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12333->$data + 16));
            _f12344 = *$tmp2345;
            org$pandalanguage$pandac$IRNode** $tmp2347 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 24));
            _f22346 = *$tmp2347;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2349 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12333->$data + 32));
            _f32348 = *$tmp2349;
            org$pandalanguage$pandac$IRNode** $tmp2351 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 40));
            _f42350 = *$tmp2351;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12344));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22346));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42350));
        }
        }
        else {
        panda$core$Bit $tmp2352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp2352.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2354 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02353 = *$tmp2354;
            org$pandalanguage$pandac$Type** $tmp2356 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12333->$data + 16));
            _f12355 = *$tmp2356;
            panda$core$Bit* $tmp2358 = ((panda$core$Bit*) ((char*) $match$5_12333->$data + 24));
            _f22357 = *$tmp2358;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12355));
        }
        }
        else {
        panda$core$Bit $tmp2359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp2359.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2361 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02360 = *$tmp2361;
            panda$collections$ImmutableArray** $tmp2363 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12333->$data + 16));
            _f12362 = *$tmp2363;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12362));
        }
        }
        else {
        panda$core$Bit $tmp2364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp2364.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2366 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02365 = *$tmp2366;
            panda$core$String** $tmp2368 = ((panda$core$String**) ((char*) $match$5_12333->$data + 16));
            _f12367 = *$tmp2368;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12367));
        }
        }
        else {
        panda$core$Bit $tmp2369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp2369.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2371 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02370 = *$tmp2371;
            org$pandalanguage$pandac$Type** $tmp2373 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12333->$data + 16));
            _f12372 = *$tmp2373;
            org$pandalanguage$pandac$MethodRef** $tmp2375 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12333->$data + 24));
            _f22374 = *$tmp2375;
            panda$collections$ImmutableArray** $tmp2377 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12333->$data + 32));
            _f32376 = *$tmp2377;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12372));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22374));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32376));
        }
        }
        else {
        panda$core$Bit $tmp2378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp2378.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2380 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02379 = *$tmp2380;
            org$pandalanguage$pandac$IRNode** $tmp2382 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 16));
            _f12381 = *$tmp2382;
            org$pandalanguage$pandac$Type** $tmp2384 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12333->$data + 24));
            _f22383 = *$tmp2384;
            panda$core$Bit* $tmp2386 = ((panda$core$Bit*) ((char*) $match$5_12333->$data + 32));
            _f32385 = *$tmp2386;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12381));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22383));
        }
        }
        else {
        panda$core$Bit $tmp2387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp2387.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2389 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02388 = *$tmp2389;
            org$pandalanguage$pandac$ChoiceEntry** $tmp2391 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12333->$data + 16));
            _f12390 = *$tmp2391;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12390));
        }
        }
        else {
        panda$core$Bit $tmp2392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp2392.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2394 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02393 = *$tmp2394;
            org$pandalanguage$pandac$IRNode** $tmp2396 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 16));
            _f12395 = *$tmp2396;
            org$pandalanguage$pandac$ChoiceEntry** $tmp2398 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12333->$data + 24));
            _f22397 = *$tmp2398;
            panda$core$Int64* $tmp2400 = ((panda$core$Int64*) ((char*) $match$5_12333->$data + 32));
            _f32399 = *$tmp2400;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12395));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22397));
        }
        }
        else {
        panda$core$Bit $tmp2401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp2401.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2403 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02402 = *$tmp2403;
            org$pandalanguage$pandac$Type** $tmp2405 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12333->$data + 16));
            _f12404 = *$tmp2405;
            org$pandalanguage$pandac$IRNode** $tmp2407 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 24));
            _f22406 = *$tmp2407;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12404));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22406));
        }
        }
        else {
        panda$core$Bit $tmp2408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp2408.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2410 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02409 = *$tmp2410;
            org$pandalanguage$pandac$Type** $tmp2412 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12333->$data + 16));
            _f12411 = *$tmp2412;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12411));
        }
        }
        else {
        panda$core$Bit $tmp2413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp2413.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2415 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02414 = *$tmp2415;
            panda$core$String** $tmp2417 = ((panda$core$String**) ((char*) $match$5_12333->$data + 16));
            _f12416 = *$tmp2417;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12416));
        }
        }
        else {
        panda$core$Bit $tmp2418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp2418.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2420 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 0));
            _f02419 = *$tmp2420;
            org$pandalanguage$pandac$IRNode** $tmp2422 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 8));
            _f12421 = *$tmp2422;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02419));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12421));
        }
        }
        else {
        panda$core$Bit $tmp2423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp2423.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2425 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02424 = *$tmp2425;
            panda$core$String** $tmp2427 = ((panda$core$String**) ((char*) $match$5_12333->$data + 16));
            _f12426 = *$tmp2427;
            panda$collections$ImmutableArray** $tmp2429 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12333->$data + 24));
            _f22428 = *$tmp2429;
            org$pandalanguage$pandac$IRNode** $tmp2431 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 32));
            _f32430 = *$tmp2431;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12426));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22428));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32430));
        }
        }
        else {
        panda$core$Bit $tmp2432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp2432.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2434 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 0));
            _f02433 = *$tmp2434;
            org$pandalanguage$pandac$IRNode** $tmp2436 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 8));
            _f12435 = *$tmp2436;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02433));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12435));
        }
        }
        else {
        panda$core$Bit $tmp2437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp2437.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2439 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02438 = *$tmp2439;
            org$pandalanguage$pandac$Type** $tmp2441 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12333->$data + 16));
            _f12440 = *$tmp2441;
            org$pandalanguage$pandac$IRNode** $tmp2443 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 24));
            _f22442 = *$tmp2443;
            org$pandalanguage$pandac$FieldDecl** $tmp2445 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$5_12333->$data + 32));
            _f32444 = *$tmp2445;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12440));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22442));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32444));
        }
        }
        else {
        panda$core$Bit $tmp2446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp2446.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2448 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02447 = *$tmp2448;
            org$pandalanguage$pandac$IRNode** $tmp2450 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 16));
            _f12449 = *$tmp2450;
            panda$collections$ImmutableArray** $tmp2452 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12333->$data + 24));
            _f22451 = *$tmp2452;
            org$pandalanguage$pandac$IRNode** $tmp2454 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 32));
            _f32453 = *$tmp2454;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12449));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22451));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32453));
        }
        }
        else {
        panda$core$Bit $tmp2455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp2455.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2457 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02456 = *$tmp2457;
            org$pandalanguage$pandac$Type** $tmp2459 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12333->$data + 16));
            _f12458 = *$tmp2459;
            panda$core$UInt64* $tmp2461 = ((panda$core$UInt64*) ((char*) $match$5_12333->$data + 24));
            _f22460 = *$tmp2461;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12458));
        }
        }
        else {
        panda$core$Bit $tmp2462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp2462.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2464 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02463 = *$tmp2464;
            org$pandalanguage$pandac$IRNode** $tmp2466 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 16));
            _f12465 = *$tmp2466;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12465));
        }
        }
        else {
        panda$core$Bit $tmp2467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp2467.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2469 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02468 = *$tmp2469;
            org$pandalanguage$pandac$IRNode** $tmp2471 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 16));
            _f12470 = *$tmp2471;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12470));
        }
        }
        else {
        panda$core$Bit $tmp2472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp2472.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2474 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02473 = *$tmp2474;
            panda$core$String** $tmp2476 = ((panda$core$String**) ((char*) $match$5_12333->$data + 16));
            _f12475 = *$tmp2476;
            panda$collections$ImmutableArray** $tmp2478 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12333->$data + 24));
            _f22477 = *$tmp2478;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12475));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22477));
        }
        }
        else {
        panda$core$Bit $tmp2479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp2479.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2481 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02480 = *$tmp2481;
            org$pandalanguage$pandac$IRNode** $tmp2483 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 16));
            _f12482 = *$tmp2483;
            panda$collections$ImmutableArray** $tmp2485 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12333->$data + 24));
            _f22484 = *$tmp2485;
            panda$collections$ImmutableArray** $tmp2487 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12333->$data + 32));
            _f32486 = *$tmp2487;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12482));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22484));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32486));
        }
        }
        else {
        panda$core$Bit $tmp2488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp2488.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2490 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02489 = *$tmp2490;
            org$pandalanguage$pandac$IRNode** $tmp2492 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 16));
            _f12491 = *$tmp2492;
            org$pandalanguage$pandac$MethodRef** $tmp2494 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12333->$data + 24));
            _f22493 = *$tmp2494;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12491));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22493));
        }
        }
        else {
        panda$core$Bit $tmp2495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp2495.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2497 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02496 = *$tmp2497;
            org$pandalanguage$pandac$Type** $tmp2499 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12333->$data + 16));
            _f12498 = *$tmp2499;
            panda$core$UInt64* $tmp2501 = ((panda$core$UInt64*) ((char*) $match$5_12333->$data + 24));
            _f22500 = *$tmp2501;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12498));
        }
        }
        else {
        panda$core$Bit $tmp2502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp2502.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2504 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02503 = *$tmp2504;
            org$pandalanguage$pandac$Type** $tmp2506 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12333->$data + 16));
            _f12505 = *$tmp2506;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12505));
        }
        }
        else {
        panda$core$Bit $tmp2507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp2507.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2509 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02508 = *$tmp2509;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2511 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12333->$data + 16));
            _f12510 = *$tmp2511;
            org$pandalanguage$pandac$IRNode** $tmp2513 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 24));
            _f22512 = *$tmp2513;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22512));
        }
        }
        else {
        panda$core$Bit $tmp2514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp2514.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2516 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02515 = *$tmp2516;
            panda$core$String** $tmp2518 = ((panda$core$String**) ((char*) $match$5_12333->$data + 16));
            _f12517 = *$tmp2518;
            org$pandalanguage$pandac$IRNode** $tmp2520 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 24));
            _f22519 = *$tmp2520;
            org$pandalanguage$pandac$IRNode** $tmp2522 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 32));
            _f32521 = *$tmp2522;
            panda$collections$ImmutableArray** $tmp2524 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12333->$data + 40));
            _f42523 = *$tmp2524;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12517));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22519));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32521));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42523));
        }
        }
        else {
        panda$core$Bit $tmp2525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp2525.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2527 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02526 = *$tmp2527;
            org$pandalanguage$pandac$Type** $tmp2529 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12333->$data + 16));
            _f12528 = *$tmp2529;
            panda$core$Real64* $tmp2531 = ((panda$core$Real64*) ((char*) $match$5_12333->$data + 24));
            _f22530 = *$tmp2531;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12528));
        }
        }
        else {
        panda$core$Bit $tmp2532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp2532.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2534 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02533 = *$tmp2534;
            org$pandalanguage$pandac$IRNode** $tmp2536 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 16));
            _f12535 = *$tmp2536;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12535));
        }
        }
        else {
        panda$core$Bit $tmp2537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2537.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2539 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02538 = *$tmp2539;
            org$pandalanguage$pandac$Type** $tmp2541 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12333->$data + 16));
            _f12540 = *$tmp2541;
            panda$core$Int64* $tmp2543 = ((panda$core$Int64*) ((char*) $match$5_12333->$data + 24));
            _f22542 = *$tmp2543;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12540));
        }
        }
        else {
        panda$core$Bit $tmp2544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2544.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2546 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 0));
            _f02545 = *$tmp2546;
            panda$core$Int64* $tmp2548 = ((panda$core$Int64*) ((char*) $match$5_12333->$data + 8));
            _f12547 = *$tmp2548;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02545));
        }
        }
        else {
        panda$core$Bit $tmp2549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2549.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2551 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02550 = *$tmp2551;
            org$pandalanguage$pandac$Type** $tmp2553 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12333->$data + 16));
            _f12552 = *$tmp2553;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12552));
        }
        }
        else {
        panda$core$Bit $tmp2554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2554.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2556 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02555 = *$tmp2556;
            panda$core$String** $tmp2558 = ((panda$core$String**) ((char*) $match$5_12333->$data + 16));
            _f12557 = *$tmp2558;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12557));
        }
        }
        else {
        panda$core$Bit $tmp2559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp2559.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2561 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02560 = *$tmp2561;
            org$pandalanguage$pandac$Type** $tmp2563 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12333->$data + 16));
            _f12562 = *$tmp2563;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12562));
        }
        }
        else {
        panda$core$Bit $tmp2564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp2564.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2566 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02565 = *$tmp2566;
            org$pandalanguage$pandac$IRNode** $tmp2568 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 16));
            _f12567 = *$tmp2568;
            org$pandalanguage$pandac$IRNode** $tmp2570 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 24));
            _f22569 = *$tmp2570;
            org$pandalanguage$pandac$IRNode** $tmp2572 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 32));
            _f32571 = *$tmp2572;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12567));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22569));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32571));
        }
        }
        else {
        panda$core$Bit $tmp2573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2573.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2575 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02574 = *$tmp2575;
            org$pandalanguage$pandac$Type** $tmp2577 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12333->$data + 16));
            _f12576 = *$tmp2577;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12576));
        }
        }
        else {
        panda$core$Bit $tmp2578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp2578.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2580 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02579 = *$tmp2580;
            panda$core$String** $tmp2582 = ((panda$core$String**) ((char*) $match$5_12333->$data + 16));
            _f12581 = *$tmp2582;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12581));
        }
        }
        else {
        panda$core$Bit $tmp2583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp2583.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2585 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02584 = *$tmp2585;
            org$pandalanguage$pandac$Type** $tmp2587 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12333->$data + 16));
            _f12586 = *$tmp2587;
            org$pandalanguage$pandac$IRNode** $tmp2589 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 24));
            _f22588 = *$tmp2589;
            panda$collections$ImmutableArray** $tmp2591 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12333->$data + 32));
            _f32590 = *$tmp2591;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12586));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22588));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32590));
        }
        }
        else {
        panda$core$Bit $tmp2592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp2592.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2594 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02593 = *$tmp2594;
            org$pandalanguage$pandac$Type** $tmp2596 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12333->$data + 16));
            _f12595 = *$tmp2596;
            org$pandalanguage$pandac$IRNode** $tmp2598 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 24));
            _f22597 = *$tmp2598;
            panda$collections$ImmutableArray** $tmp2600 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12333->$data + 32));
            _f32599 = *$tmp2600;
            panda$collections$ImmutableArray** $tmp2602 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12333->$data + 40));
            _f42601 = *$tmp2602;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12595));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22597));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32599));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42601));
        }
        }
        else {
        panda$core$Bit $tmp2603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp2603.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2605 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02604 = *$tmp2605;
            org$pandalanguage$pandac$IRNode** $tmp2607 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 16));
            _f12606 = *$tmp2607;
            panda$collections$ImmutableArray** $tmp2609 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12333->$data + 24));
            _f22608 = *$tmp2609;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12606));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22608));
        }
        }
        else {
        panda$core$Bit $tmp2610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp2610.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2612 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02611 = *$tmp2612;
            org$pandalanguage$pandac$IRNode** $tmp2614 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 16));
            _f12613 = *$tmp2614;
            org$pandalanguage$pandac$IRNode** $tmp2616 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 24));
            _f22615 = *$tmp2616;
            panda$core$Bit* $tmp2618 = ((panda$core$Bit*) ((char*) $match$5_12333->$data + 32));
            _f32617 = *$tmp2618;
            org$pandalanguage$pandac$IRNode** $tmp2620 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 33));
            _f42619 = *$tmp2620;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12613));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22615));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42619));
        }
        }
        else {
        panda$core$Bit $tmp2621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp2621.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2623 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02622 = *$tmp2623;
            org$pandalanguage$pandac$Variable$Kind* $tmp2625 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_12333->$data + 16));
            _f12624 = *$tmp2625;
            panda$collections$ImmutableArray** $tmp2627 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12333->$data + 24));
            _f22626 = *$tmp2627;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22626));
        }
        }
        else {
        panda$core$Bit $tmp2628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2628.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2630 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02629 = *$tmp2630;
            org$pandalanguage$pandac$Variable** $tmp2632 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$5_12333->$data + 16));
            _f12631 = *$tmp2632;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12631));
        }
        }
        else {
        panda$core$Bit $tmp2633 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp2633.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2635 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02634 = *$tmp2635;
            panda$collections$ImmutableArray** $tmp2637 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12333->$data + 16));
            _f12636 = *$tmp2637;
            panda$collections$ImmutableArray** $tmp2639 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12333->$data + 24));
            _f22638 = *$tmp2639;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12636));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22638));
        }
        }
        else {
        panda$core$Bit $tmp2640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12333->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp2640.value) {
        {
            org$pandalanguage$pandac$Position* $tmp2642 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12333->$data + 0));
            _f02641 = *$tmp2642;
            panda$core$String** $tmp2644 = ((panda$core$String**) ((char*) $match$5_12333->$data + 16));
            _f12643 = *$tmp2644;
            org$pandalanguage$pandac$IRNode** $tmp2646 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12333->$data + 24));
            _f22645 = *$tmp2646;
            panda$collections$ImmutableArray** $tmp2648 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12333->$data + 32));
            _f32647 = *$tmp2648;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12643));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22645));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32647));
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    panda$core$Object$cleanup(((panda$core$Object*) self));
}

