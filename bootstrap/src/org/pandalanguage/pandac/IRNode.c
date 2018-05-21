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
typedef org$pandalanguage$pandac$Type* (*$fn142)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn165)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn193)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn196)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn201)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn322)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn334)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn341)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn423)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn510)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn513)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn532)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn536)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn557)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn564)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn575)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn577)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn608)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn615)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn626)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn628)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn664)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn685)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn697)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn709)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn716)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn727)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn729)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn756)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn768)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn775)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn786)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn788)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn796)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn808)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn815)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn832)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn839)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn850)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn852)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn869)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn881)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn888)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn899)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn901)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn917)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn924)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn935)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn937)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn967)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn980)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn992)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn999)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1010)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1012)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1030)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1044)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1068)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1071)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1075)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1127)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1134)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1145)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1147)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1175)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1182)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1193)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1195)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1211)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1218)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1229)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1231)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1248)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1260)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1267)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1278)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1280)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1344)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1385)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1392)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1403)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1439)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1446)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1457)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1473)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1480)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1491)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1538)(panda$collections$ListView*);
typedef org$pandalanguage$pandac$Type* (*$fn1551)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1575)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1606)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1644)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1686)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1697)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1729)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1736)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1747)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1777)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1785)(panda$collections$ListView*, panda$core$String*);
typedef panda$core$String* (*$fn1802)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1821)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1858)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1865)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1876)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1955)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1962)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1973)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2016)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2023)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2034)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2050)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2057)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2068)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2093)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2133)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2182)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2189)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2200)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2342)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2349)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2370)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2382)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2399)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2465)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2494)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2503)(panda$collections$ListView*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2543)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2550)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2561)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x4e\x6f\x64\x65", 31, -8857975469778350849, NULL };
static panda$core$String $s1307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s1309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s1321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s1346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s1406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x79\x20\x7b\x0a", 6, 2292679699717, NULL };
static panda$core$String $s1460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x66\x69\x6e\x61\x6c\x6c\x79\x20\x7b\x0a", 12, -1355183944487068280, NULL };
static panda$core$String $s1494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s1514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s1533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x4e\x54\x36\x34\x5f\x57\x52\x41\x50\x28", 11, -7093166379287162761, NULL };
static panda$core$String $s1563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x2a\x2d", 24, 1541443738414735436, NULL };
static panda$core$String $s1666 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s1668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s1688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s1750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s1758 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1782 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1804 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x2a\x20\x61\x6e\x64\x20\x74\x68\x65\x6e\x3a\x20", 14, -3277098584181619124, NULL };
static panda$core$String $s1807 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1823 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1826 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s1879 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1911 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s1923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1925 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s1944 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s2006 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2037 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2041 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s2071 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2098 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s2135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s2169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s2172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s2231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s2247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s2272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s2306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s2311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s2314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s2372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s2427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s2430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s2432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s2457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s2459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s2461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s2490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s2497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s2500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s2533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
    org$pandalanguage$pandac$MethodRef* m118 = NULL;
    org$pandalanguage$pandac$Type* $tmp120;
    org$pandalanguage$pandac$Type* $tmp121;
    org$pandalanguage$pandac$Type* type126 = NULL;
    org$pandalanguage$pandac$Type* $tmp128;
    org$pandalanguage$pandac$Type* type132 = NULL;
    org$pandalanguage$pandac$Type* $tmp134;
    org$pandalanguage$pandac$IRNode* base138 = NULL;
    org$pandalanguage$pandac$Type* $tmp140;
    org$pandalanguage$pandac$Type* $tmp141;
    org$pandalanguage$pandac$Type* type147 = NULL;
    org$pandalanguage$pandac$Type* $tmp149;
    org$pandalanguage$pandac$Type* type153 = NULL;
    panda$core$Int64 id155;
    org$pandalanguage$pandac$Type* $tmp157;
    org$pandalanguage$pandac$IRNode* base161 = NULL;
    org$pandalanguage$pandac$Type* $tmp163;
    org$pandalanguage$pandac$Type* $tmp164;
    org$pandalanguage$pandac$Type* type170 = NULL;
    org$pandalanguage$pandac$Type* $tmp172;
    org$pandalanguage$pandac$Type* $tmp176;
    org$pandalanguage$pandac$Type* $tmp177;
    org$pandalanguage$pandac$Type* type182 = NULL;
    org$pandalanguage$pandac$Type* $tmp184;
    org$pandalanguage$pandac$IRNode* ifTrue188 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse190 = NULL;
    org$pandalanguage$pandac$Type* $tmp192;
    org$pandalanguage$pandac$Type* $tmp195;
    org$pandalanguage$pandac$Type* $tmp199;
    org$pandalanguage$pandac$Type* $tmp200;
    org$pandalanguage$pandac$Type* $tmp206;
    org$pandalanguage$pandac$Type* $tmp207;
    org$pandalanguage$pandac$Type* $tmp212;
    org$pandalanguage$pandac$Type* $tmp213;
    org$pandalanguage$pandac$Type* type218 = NULL;
    org$pandalanguage$pandac$Type* $tmp220;
    org$pandalanguage$pandac$Type* type224 = NULL;
    org$pandalanguage$pandac$Type* $tmp226;
    org$pandalanguage$pandac$Type* $tmp230;
    org$pandalanguage$pandac$Type* $tmp231;
    org$pandalanguage$pandac$Type* $tmp236;
    org$pandalanguage$pandac$Type* $tmp237;
    org$pandalanguage$pandac$Variable* variable242 = NULL;
    org$pandalanguage$pandac$Type* $tmp244;
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
            org$pandalanguage$pandac$MethodRef** $tmp119 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$73_95->$data + 24));
            m118 = *$tmp119;
            org$pandalanguage$pandac$Type* $tmp122 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m118);
            $tmp121 = $tmp122;
            $tmp120 = $tmp121;
            $returnValue10 = $tmp120;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp120));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp121));
            $tmp4 = 15;
            goto $l2;
            $l123:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp125.value) {
        {
            org$pandalanguage$pandac$Type** $tmp127 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type126 = *$tmp127;
            $tmp128 = type126;
            $returnValue10 = $tmp128;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp128));
            $tmp4 = 16;
            goto $l2;
            $l129:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp131.value) {
        {
            org$pandalanguage$pandac$Type** $tmp133 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type132 = *$tmp133;
            $tmp134 = type132;
            $returnValue10 = $tmp134;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp134));
            $tmp4 = 17;
            goto $l2;
            $l135:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp137.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp139 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$73_95->$data + 24));
            base138 = *$tmp139;
            org$pandalanguage$pandac$Type* $tmp143 = (($fn142) base138->$class->vtable[2])(base138);
            $tmp141 = $tmp143;
            $tmp140 = $tmp141;
            $returnValue10 = $tmp140;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp140));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp141));
            $tmp4 = 18;
            goto $l2;
            $l144:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp146.value) {
        {
            org$pandalanguage$pandac$Type** $tmp148 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type147 = *$tmp148;
            $tmp149 = type147;
            $returnValue10 = $tmp149;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp149));
            $tmp4 = 19;
            goto $l2;
            $l150:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp152.value) {
        {
            org$pandalanguage$pandac$Type** $tmp154 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type153 = *$tmp154;
            panda$core$Int64* $tmp156 = ((panda$core$Int64*) ((char*) $match$73_95->$data + 24));
            id155 = *$tmp156;
            $tmp157 = type153;
            $returnValue10 = $tmp157;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp157));
            $tmp4 = 20;
            goto $l2;
            $l158:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp160.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp162 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$73_95->$data + 0));
            base161 = *$tmp162;
            org$pandalanguage$pandac$Type* $tmp166 = (($fn165) base161->$class->vtable[2])(base161);
            $tmp164 = $tmp166;
            $tmp163 = $tmp164;
            $returnValue10 = $tmp163;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp163));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp164));
            $tmp4 = 21;
            goto $l2;
            $l167:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp169.value) {
        {
            org$pandalanguage$pandac$Type** $tmp171 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type170 = *$tmp171;
            $tmp172 = type170;
            $returnValue10 = $tmp172;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp172));
            $tmp4 = 22;
            goto $l2;
            $l173:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp175.value) {
        {
            org$pandalanguage$pandac$Type* $tmp178 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
            $tmp177 = $tmp178;
            $tmp176 = $tmp177;
            $returnValue10 = $tmp176;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp176));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp177));
            $tmp4 = 23;
            goto $l2;
            $l179:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp181.value) {
        {
            org$pandalanguage$pandac$Type** $tmp183 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type182 = *$tmp183;
            $tmp184 = type182;
            $returnValue10 = $tmp184;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp184));
            $tmp4 = 24;
            goto $l2;
            $l185:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp187.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp189 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$73_95->$data + 24));
            ifTrue188 = *$tmp189;
            org$pandalanguage$pandac$IRNode** $tmp191 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$73_95->$data + 32));
            ifFalse190 = *$tmp191;
            org$pandalanguage$pandac$Type* $tmp194 = (($fn193) ifTrue188->$class->vtable[2])(ifTrue188);
            $tmp192 = $tmp194;
            org$pandalanguage$pandac$Type* $tmp197 = (($fn196) ifFalse190->$class->vtable[2])(ifFalse190);
            $tmp195 = $tmp197;
            panda$core$Bit $tmp198 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp192, $tmp195);
            PANDA_ASSERT($tmp198.value);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp195));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
            org$pandalanguage$pandac$Type* $tmp202 = (($fn201) ifTrue188->$class->vtable[2])(ifTrue188);
            $tmp200 = $tmp202;
            $tmp199 = $tmp200;
            $returnValue10 = $tmp199;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp199));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp200));
            $tmp4 = 25;
            goto $l2;
            $l203:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp205.value) {
        {
            org$pandalanguage$pandac$Type* $tmp208 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            $tmp207 = $tmp208;
            $tmp206 = $tmp207;
            $returnValue10 = $tmp206;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp206));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp207));
            $tmp4 = 26;
            goto $l2;
            $l209:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp211.value) {
        {
            org$pandalanguage$pandac$Type* $tmp214 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp213 = $tmp214;
            $tmp212 = $tmp213;
            $returnValue10 = $tmp212;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp212));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp213));
            $tmp4 = 27;
            goto $l2;
            $l215:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp217.value) {
        {
            org$pandalanguage$pandac$Type** $tmp219 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type218 = *$tmp219;
            $tmp220 = type218;
            $returnValue10 = $tmp220;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp220));
            $tmp4 = 28;
            goto $l2;
            $l221:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp223.value) {
        {
            org$pandalanguage$pandac$Type** $tmp225 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type224 = *$tmp225;
            $tmp226 = type224;
            $returnValue10 = $tmp226;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp226));
            $tmp4 = 29;
            goto $l2;
            $l227:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp229.value) {
        {
            org$pandalanguage$pandac$Type* $tmp232 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp231 = $tmp232;
            $tmp230 = $tmp231;
            $returnValue10 = $tmp230;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp230));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp231));
            $tmp4 = 30;
            goto $l2;
            $l233:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp235.value) {
        {
            org$pandalanguage$pandac$Type* $tmp238 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp237 = $tmp238;
            $tmp236 = $tmp237;
            $returnValue10 = $tmp236;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp236));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp237));
            $tmp4 = 31;
            goto $l2;
            $l239:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp241.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp243 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$73_95->$data + 16));
            variable242 = *$tmp243;
            $tmp244 = variable242->type;
            $returnValue10 = $tmp244;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp244));
            $tmp4 = 32;
            goto $l2;
            $l245:;
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
        case 6: goto $l54;
        case 26: goto $l209;
        case 29: goto $l227;
        case 10: goto $l91;
        case 14: goto $l115;
        case -1: goto $l247;
        case 9: goto $l82;
        case 30: goto $l233;
        case 13: goto $l109;
        case 8: goto $l66;
        case 15: goto $l123;
        case 11: goto $l97;
        case 23: goto $l179;
        case 20: goto $l158;
        case 24: goto $l185;
        case 1: goto $l18;
        case 2: goto $l24;
        case 0: goto $l12;
        case 18: goto $l144;
        case 21: goto $l167;
        case 25: goto $l203;
        case 17: goto $l135;
        case 7: goto $l60;
        case 12: goto $l103;
        case 5: goto $l44;
        case 31: goto $l239;
        case 4: goto $l36;
        case 32: goto $l245;
        case 28: goto $l221;
        case 3: goto $l30;
        case 19: goto $l150;
        case 22: goto $l173;
        case 27: goto $l215;
        case 16: goto $l129;
    }
    $l247:;
}
org$pandalanguage$pandac$Position org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$147_9251 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp252;
    org$pandalanguage$pandac$Position position254;
    org$pandalanguage$pandac$Position $returnValue256;
    org$pandalanguage$pandac$Position position260;
    org$pandalanguage$pandac$Position position265;
    org$pandalanguage$pandac$Position position270;
    org$pandalanguage$pandac$Position position275;
    org$pandalanguage$pandac$Position position280;
    org$pandalanguage$pandac$Position position285;
    org$pandalanguage$pandac$Position position290;
    org$pandalanguage$pandac$Position position295;
    org$pandalanguage$pandac$Position position300;
    org$pandalanguage$pandac$Position position305;
    org$pandalanguage$pandac$Position position310;
    org$pandalanguage$pandac$Position position315;
    org$pandalanguage$pandac$IRNode* target320 = NULL;
    org$pandalanguage$pandac$Position position327;
    org$pandalanguage$pandac$IRNode* m332 = NULL;
    org$pandalanguage$pandac$IRNode* expr339 = NULL;
    org$pandalanguage$pandac$Position position346;
    org$pandalanguage$pandac$Position position351;
    org$pandalanguage$pandac$Position position356;
    org$pandalanguage$pandac$Position position361;
    org$pandalanguage$pandac$Position position366;
    org$pandalanguage$pandac$Position position371;
    org$pandalanguage$pandac$Position position376;
    org$pandalanguage$pandac$Position position381;
    org$pandalanguage$pandac$Position position386;
    org$pandalanguage$pandac$Position position391;
    org$pandalanguage$pandac$Position position396;
    org$pandalanguage$pandac$Position position401;
    org$pandalanguage$pandac$Position position406;
    org$pandalanguage$pandac$Position position411;
    org$pandalanguage$pandac$Position position416;
    org$pandalanguage$pandac$IRNode* base421 = NULL;
    org$pandalanguage$pandac$Position position428;
    org$pandalanguage$pandac$Position position433;
    org$pandalanguage$pandac$Position position438;
    org$pandalanguage$pandac$Position position443;
    org$pandalanguage$pandac$Position position448;
    org$pandalanguage$pandac$Position position453;
    org$pandalanguage$pandac$Position position458;
    org$pandalanguage$pandac$Position position463;
    org$pandalanguage$pandac$Position position468;
    org$pandalanguage$pandac$Position position473;
    org$pandalanguage$pandac$Position position478;
    org$pandalanguage$pandac$Position position483;
    org$pandalanguage$pandac$Position position488;
    org$pandalanguage$pandac$Position position493;
    int $tmp250;
    {
        $tmp252 = self;
        $match$147_9251 = $tmp252;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp252));
        panda$core$Bit $tmp253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp253.value) {
        {
            org$pandalanguage$pandac$Position* $tmp255 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position254 = *$tmp255;
            $returnValue256 = position254;
            $tmp250 = 0;
            goto $l248;
            $l257:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp259.value) {
        {
            org$pandalanguage$pandac$Position* $tmp261 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position260 = *$tmp261;
            $returnValue256 = position260;
            $tmp250 = 1;
            goto $l248;
            $l262:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp264.value) {
        {
            org$pandalanguage$pandac$Position* $tmp266 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position265 = *$tmp266;
            $returnValue256 = position265;
            $tmp250 = 2;
            goto $l248;
            $l267:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp269.value) {
        {
            org$pandalanguage$pandac$Position* $tmp271 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position270 = *$tmp271;
            $returnValue256 = position270;
            $tmp250 = 3;
            goto $l248;
            $l272:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp274.value) {
        {
            org$pandalanguage$pandac$Position* $tmp276 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position275 = *$tmp276;
            $returnValue256 = position275;
            $tmp250 = 4;
            goto $l248;
            $l277:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp279.value) {
        {
            org$pandalanguage$pandac$Position* $tmp281 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position280 = *$tmp281;
            $returnValue256 = position280;
            $tmp250 = 5;
            goto $l248;
            $l282:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp284.value) {
        {
            org$pandalanguage$pandac$Position* $tmp286 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position285 = *$tmp286;
            $returnValue256 = position285;
            $tmp250 = 6;
            goto $l248;
            $l287:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp289.value) {
        {
            org$pandalanguage$pandac$Position* $tmp291 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position290 = *$tmp291;
            $returnValue256 = position290;
            $tmp250 = 7;
            goto $l248;
            $l292:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp294.value) {
        {
            org$pandalanguage$pandac$Position* $tmp296 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position295 = *$tmp296;
            $returnValue256 = position295;
            $tmp250 = 8;
            goto $l248;
            $l297:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp299.value) {
        {
            org$pandalanguage$pandac$Position* $tmp301 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position300 = *$tmp301;
            $returnValue256 = position300;
            $tmp250 = 9;
            goto $l248;
            $l302:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp304.value) {
        {
            org$pandalanguage$pandac$Position* $tmp306 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position305 = *$tmp306;
            $returnValue256 = position305;
            $tmp250 = 10;
            goto $l248;
            $l307:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp309.value) {
        {
            org$pandalanguage$pandac$Position* $tmp311 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position310 = *$tmp311;
            $returnValue256 = position310;
            $tmp250 = 11;
            goto $l248;
            $l312:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp314.value) {
        {
            org$pandalanguage$pandac$Position* $tmp316 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position315 = *$tmp316;
            $returnValue256 = position315;
            $tmp250 = 12;
            goto $l248;
            $l317:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp319.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp321 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$147_9251->$data + 0));
            target320 = *$tmp321;
            org$pandalanguage$pandac$Position $tmp323 = (($fn322) target320->$class->vtable[3])(target320);
            $returnValue256 = $tmp323;
            $tmp250 = 13;
            goto $l248;
            $l324:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp326.value) {
        {
            org$pandalanguage$pandac$Position* $tmp328 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position327 = *$tmp328;
            $returnValue256 = position327;
            $tmp250 = 14;
            goto $l248;
            $l329:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp331.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp333 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$147_9251->$data + 0));
            m332 = *$tmp333;
            org$pandalanguage$pandac$Position $tmp335 = (($fn334) m332->$class->vtable[3])(m332);
            $returnValue256 = $tmp335;
            $tmp250 = 15;
            goto $l248;
            $l336:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp338.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp340 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$147_9251->$data + 0));
            expr339 = *$tmp340;
            org$pandalanguage$pandac$Position $tmp342 = (($fn341) expr339->$class->vtable[3])(expr339);
            $returnValue256 = $tmp342;
            $tmp250 = 16;
            goto $l248;
            $l343:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp345.value) {
        {
            org$pandalanguage$pandac$Position* $tmp347 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position346 = *$tmp347;
            $returnValue256 = position346;
            $tmp250 = 17;
            goto $l248;
            $l348:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp350.value) {
        {
            org$pandalanguage$pandac$Position* $tmp352 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position351 = *$tmp352;
            $returnValue256 = position351;
            $tmp250 = 18;
            goto $l248;
            $l353:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp355.value) {
        {
            org$pandalanguage$pandac$Position* $tmp357 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position356 = *$tmp357;
            $returnValue256 = position356;
            $tmp250 = 19;
            goto $l248;
            $l358:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp360.value) {
        {
            org$pandalanguage$pandac$Position* $tmp362 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position361 = *$tmp362;
            $returnValue256 = position361;
            $tmp250 = 20;
            goto $l248;
            $l363:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp365.value) {
        {
            org$pandalanguage$pandac$Position* $tmp367 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position366 = *$tmp367;
            $returnValue256 = position366;
            $tmp250 = 21;
            goto $l248;
            $l368:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp370.value) {
        {
            org$pandalanguage$pandac$Position* $tmp372 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position371 = *$tmp372;
            $returnValue256 = position371;
            $tmp250 = 22;
            goto $l248;
            $l373:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp375.value) {
        {
            org$pandalanguage$pandac$Position* $tmp377 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position376 = *$tmp377;
            $returnValue256 = position376;
            $tmp250 = 23;
            goto $l248;
            $l378:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp380.value) {
        {
            org$pandalanguage$pandac$Position* $tmp382 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position381 = *$tmp382;
            $returnValue256 = position381;
            $tmp250 = 24;
            goto $l248;
            $l383:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp385.value) {
        {
            org$pandalanguage$pandac$Position* $tmp387 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position386 = *$tmp387;
            $returnValue256 = position386;
            $tmp250 = 25;
            goto $l248;
            $l388:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp390.value) {
        {
            org$pandalanguage$pandac$Position* $tmp392 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position391 = *$tmp392;
            $returnValue256 = position391;
            $tmp250 = 26;
            goto $l248;
            $l393:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp395.value) {
        {
            org$pandalanguage$pandac$Position* $tmp397 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position396 = *$tmp397;
            $returnValue256 = position396;
            $tmp250 = 27;
            goto $l248;
            $l398:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp400.value) {
        {
            org$pandalanguage$pandac$Position* $tmp402 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position401 = *$tmp402;
            $returnValue256 = position401;
            $tmp250 = 28;
            goto $l248;
            $l403:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp405.value) {
        {
            org$pandalanguage$pandac$Position* $tmp407 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position406 = *$tmp407;
            $returnValue256 = position406;
            $tmp250 = 29;
            goto $l248;
            $l408:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp410.value) {
        {
            org$pandalanguage$pandac$Position* $tmp412 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position411 = *$tmp412;
            $returnValue256 = position411;
            $tmp250 = 30;
            goto $l248;
            $l413:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp415.value) {
        {
            org$pandalanguage$pandac$Position* $tmp417 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position416 = *$tmp417;
            $returnValue256 = position416;
            $tmp250 = 31;
            goto $l248;
            $l418:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp420.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp422 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$147_9251->$data + 0));
            base421 = *$tmp422;
            org$pandalanguage$pandac$Position $tmp424 = (($fn423) base421->$class->vtable[3])(base421);
            $returnValue256 = $tmp424;
            $tmp250 = 32;
            goto $l248;
            $l425:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp427.value) {
        {
            org$pandalanguage$pandac$Position* $tmp429 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position428 = *$tmp429;
            $returnValue256 = position428;
            $tmp250 = 33;
            goto $l248;
            $l430:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp432.value) {
        {
            org$pandalanguage$pandac$Position* $tmp434 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position433 = *$tmp434;
            $returnValue256 = position433;
            $tmp250 = 34;
            goto $l248;
            $l435:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp437.value) {
        {
            org$pandalanguage$pandac$Position* $tmp439 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position438 = *$tmp439;
            $returnValue256 = position438;
            $tmp250 = 35;
            goto $l248;
            $l440:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp442.value) {
        {
            org$pandalanguage$pandac$Position* $tmp444 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position443 = *$tmp444;
            $returnValue256 = position443;
            $tmp250 = 36;
            goto $l248;
            $l445:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp447.value) {
        {
            org$pandalanguage$pandac$Position* $tmp449 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position448 = *$tmp449;
            $returnValue256 = position448;
            $tmp250 = 37;
            goto $l248;
            $l450:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp452.value) {
        {
            org$pandalanguage$pandac$Position* $tmp454 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position453 = *$tmp454;
            $returnValue256 = position453;
            $tmp250 = 38;
            goto $l248;
            $l455:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp457.value) {
        {
            org$pandalanguage$pandac$Position* $tmp459 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position458 = *$tmp459;
            $returnValue256 = position458;
            $tmp250 = 39;
            goto $l248;
            $l460:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp462.value) {
        {
            org$pandalanguage$pandac$Position* $tmp464 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position463 = *$tmp464;
            $returnValue256 = position463;
            $tmp250 = 40;
            goto $l248;
            $l465:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp467.value) {
        {
            org$pandalanguage$pandac$Position* $tmp469 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position468 = *$tmp469;
            $returnValue256 = position468;
            $tmp250 = 41;
            goto $l248;
            $l470:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp472.value) {
        {
            org$pandalanguage$pandac$Position* $tmp474 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position473 = *$tmp474;
            $returnValue256 = position473;
            $tmp250 = 42;
            goto $l248;
            $l475:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp477.value) {
        {
            org$pandalanguage$pandac$Position* $tmp479 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position478 = *$tmp479;
            $returnValue256 = position478;
            $tmp250 = 43;
            goto $l248;
            $l480:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp482.value) {
        {
            org$pandalanguage$pandac$Position* $tmp484 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position483 = *$tmp484;
            $returnValue256 = position483;
            $tmp250 = 44;
            goto $l248;
            $l485:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp487.value) {
        {
            org$pandalanguage$pandac$Position* $tmp489 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position488 = *$tmp489;
            $returnValue256 = position488;
            $tmp250 = 45;
            goto $l248;
            $l490:;
            return $returnValue256;
        }
        }
        else {
        panda$core$Bit $tmp492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9251->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp492.value) {
        {
            org$pandalanguage$pandac$Position* $tmp494 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9251->$data + 0));
            position493 = *$tmp494;
            $returnValue256 = position493;
            $tmp250 = 46;
            goto $l248;
            $l495:;
            return $returnValue256;
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
    $tmp250 = -1;
    goto $l248;
    $l248:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp252));
    switch ($tmp250) {
        case 7: goto $l292;
        case 24: goto $l383;
        case 32: goto $l425;
        case 31: goto $l418;
        case 6: goto $l287;
        case 23: goto $l378;
        case 26: goto $l393;
        case 22: goto $l373;
        case 4: goto $l277;
        case 21: goto $l368;
        case 11: goto $l312;
        case 44: goto $l485;
        case 10: goto $l307;
        case 45: goto $l490;
        case 15: goto $l336;
        case 0: goto $l257;
        case 33: goto $l430;
        case 14: goto $l329;
        case 42: goto $l475;
        case 30: goto $l413;
        case 16: goto $l343;
        case 43: goto $l480;
        case 29: goto $l408;
        case 35: goto $l440;
        case 9: goto $l302;
        case 34: goto $l435;
        case 37: goto $l450;
        case 8: goto $l297;
        case 18: goto $l353;
        case 17: goto $l348;
        case 38: goto $l455;
        case 36: goto $l445;
        case 39: goto $l460;
        case 5: goto $l282;
        case 1: goto $l262;
        case 28: goto $l403;
        case 27: goto $l398;
        case 25: goto $l388;
        case 19: goto $l358;
        case 20: goto $l363;
        case 13: goto $l324;
        case 3: goto $l272;
        case 41: goto $l470;
        case -1: goto $l497;
        case 46: goto $l495;
        case 40: goto $l465;
        case 12: goto $l317;
        case 2: goto $l267;
    }
    $l497:;
}
panda$core$Bit org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$248_9501 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp502;
    org$pandalanguage$pandac$IRNode* test504 = NULL;
    org$pandalanguage$pandac$IRNode* msg506 = NULL;
    panda$core$Bit $returnValue508;
    org$pandalanguage$pandac$IRNode* left522 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op524;
    org$pandalanguage$pandac$IRNode* right526 = NULL;
    panda$core$Bit bit542;
    panda$collections$ImmutableArray* statements547 = NULL;
    panda$collections$Iterator* Iter$258$17552 = NULL;
    panda$collections$Iterator* $tmp553;
    panda$collections$Iterator* $tmp554;
    org$pandalanguage$pandac$IRNode* s570 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp571;
    panda$core$Object* $tmp572;
    panda$core$String* label588 = NULL;
    org$pandalanguage$pandac$MethodRef* m593 = NULL;
    panda$collections$ImmutableArray* args595 = NULL;
    panda$collections$Iterator* Iter$270$17603 = NULL;
    panda$collections$Iterator* $tmp604;
    panda$collections$Iterator* $tmp605;
    org$pandalanguage$pandac$IRNode* arg621 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp622;
    panda$core$Object* $tmp623;
    org$pandalanguage$pandac$IRNode* value639 = NULL;
    org$pandalanguage$pandac$Type* type641 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce646 = NULL;
    org$pandalanguage$pandac$IRNode* base651 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce653 = NULL;
    panda$core$Int64 field655;
    org$pandalanguage$pandac$Type* type660 = NULL;
    org$pandalanguage$pandac$IRNode* call662 = NULL;
    org$pandalanguage$pandac$Type* Type669 = NULL;
    panda$core$String* label674 = NULL;
    org$pandalanguage$pandac$IRNode* target679 = NULL;
    org$pandalanguage$pandac$IRNode* value681 = NULL;
    panda$core$String* label691 = NULL;
    panda$collections$ImmutableArray* statements693 = NULL;
    org$pandalanguage$pandac$IRNode* test695 = NULL;
    panda$collections$Iterator* Iter$294$17704 = NULL;
    panda$collections$Iterator* $tmp705;
    panda$collections$Iterator* $tmp706;
    org$pandalanguage$pandac$IRNode* s722 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp723;
    panda$core$Object* $tmp724;
    org$pandalanguage$pandac$IRNode* base743 = NULL;
    org$pandalanguage$pandac$FieldDecl* field745 = NULL;
    org$pandalanguage$pandac$IRNode* test750 = NULL;
    panda$collections$ImmutableArray* ifTrue752 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse754 = NULL;
    panda$collections$Iterator* Iter$308$17763 = NULL;
    panda$collections$Iterator* $tmp764;
    panda$collections$Iterator* $tmp765;
    org$pandalanguage$pandac$IRNode* s781 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp782;
    panda$core$Object* $tmp783;
    panda$core$UInt64 value801;
    org$pandalanguage$pandac$IRNode* value806 = NULL;
    org$pandalanguage$pandac$IRNode* value813 = NULL;
    panda$core$String* label820 = NULL;
    panda$collections$ImmutableArray* statements822 = NULL;
    panda$collections$Iterator* Iter$321$17827 = NULL;
    panda$collections$Iterator* $tmp828;
    panda$collections$Iterator* $tmp829;
    org$pandalanguage$pandac$IRNode* s845 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp846;
    panda$core$Object* $tmp847;
    org$pandalanguage$pandac$IRNode* value863 = NULL;
    panda$collections$ImmutableArray* whens865 = NULL;
    panda$collections$ImmutableArray* other867 = NULL;
    panda$collections$Iterator* Iter$331$17876 = NULL;
    panda$collections$Iterator* $tmp877;
    panda$collections$Iterator* $tmp878;
    org$pandalanguage$pandac$IRNode* w894 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp895;
    panda$core$Object* $tmp896;
    panda$collections$Iterator* Iter$336$17912 = NULL;
    panda$collections$Iterator* $tmp913;
    panda$collections$Iterator* $tmp914;
    org$pandalanguage$pandac$IRNode* s930 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp931;
    panda$core$Object* $tmp932;
    org$pandalanguage$pandac$IRNode* target948 = NULL;
    org$pandalanguage$pandac$MethodRef* m950 = NULL;
    panda$core$UInt64 value955;
    org$pandalanguage$pandac$parser$Token$Kind op963;
    org$pandalanguage$pandac$IRNode* base965 = NULL;
    panda$core$String* label972 = NULL;
    org$pandalanguage$pandac$IRNode* target974 = NULL;
    org$pandalanguage$pandac$IRNode* list976 = NULL;
    panda$collections$ImmutableArray* statements978 = NULL;
    panda$collections$Iterator* Iter$355$17987 = NULL;
    panda$collections$Iterator* $tmp988;
    panda$collections$Iterator* $tmp989;
    org$pandalanguage$pandac$IRNode* s1005 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1006;
    panda$core$Object* $tmp1007;
    panda$core$Real64 value1023;
    org$pandalanguage$pandac$IRNode* value1028 = NULL;
    panda$core$Int64 id1035;
    org$pandalanguage$pandac$IRNode* base1040 = NULL;
    panda$core$Int64 id1042;
    panda$core$String* str1052 = NULL;
    org$pandalanguage$pandac$IRNode* test1060 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue1062 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse1064 = NULL;
    org$pandalanguage$pandac$Type* type1081 = NULL;
    panda$core$String* name1086 = NULL;
    org$pandalanguage$pandac$IRNode* base1089 = NULL;
    panda$collections$ImmutableArray* args1091 = NULL;
    org$pandalanguage$pandac$IRNode* target1094 = NULL;
    panda$collections$ImmutableArray* methods1096 = NULL;
    panda$collections$ImmutableArray* args1098 = NULL;
    org$pandalanguage$pandac$IRNode* target1101 = NULL;
    panda$collections$ImmutableArray* methods1103 = NULL;
    org$pandalanguage$pandac$IRNode* start1106 = NULL;
    org$pandalanguage$pandac$IRNode* end1108 = NULL;
    panda$core$Bit inclusive1110;
    org$pandalanguage$pandac$IRNode* step1112 = NULL;
    org$pandalanguage$pandac$Variable$Kind kind1115;
    panda$collections$ImmutableArray* decls1117 = NULL;
    panda$collections$Iterator* Iter$390$171122 = NULL;
    panda$collections$Iterator* $tmp1123;
    panda$collections$Iterator* $tmp1124;
    org$pandalanguage$pandac$IRNode* d1140 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1141;
    panda$core$Object* $tmp1142;
    org$pandalanguage$pandac$Variable* variable1158 = NULL;
    panda$collections$ImmutableArray* tests1163 = NULL;
    panda$collections$ImmutableArray* statements1165 = NULL;
    panda$collections$Iterator* Iter$399$171170 = NULL;
    panda$collections$Iterator* $tmp1171;
    panda$collections$Iterator* $tmp1172;
    org$pandalanguage$pandac$IRNode* t1188 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1189;
    panda$core$Object* $tmp1190;
    panda$collections$Iterator* Iter$404$171206 = NULL;
    panda$collections$Iterator* $tmp1207;
    panda$collections$Iterator* $tmp1208;
    org$pandalanguage$pandac$IRNode* s1224 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1225;
    panda$core$Object* $tmp1226;
    panda$core$String* label1242 = NULL;
    org$pandalanguage$pandac$IRNode* test1244 = NULL;
    panda$collections$ImmutableArray* statements1246 = NULL;
    panda$collections$Iterator* Iter$414$171255 = NULL;
    panda$collections$Iterator* $tmp1256;
    panda$collections$Iterator* $tmp1257;
    org$pandalanguage$pandac$IRNode* s1273 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1274;
    panda$core$Object* $tmp1275;
    int $tmp500;
    {
        $tmp502 = self;
        $match$248_9501 = $tmp502;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp502));
        panda$core$Bit $tmp503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp503.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp505 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 16));
            test504 = *$tmp505;
            org$pandalanguage$pandac$IRNode** $tmp507 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 24));
            msg506 = *$tmp507;
            panda$core$Bit $tmp511 = (($fn510) test504->$class->vtable[4])(test504);
            bool $tmp509 = $tmp511.value;
            if ($tmp509) goto $l512;
            panda$core$Bit $tmp514 = (($fn513) msg506->$class->vtable[4])(msg506);
            $tmp509 = $tmp514.value;
            $l512:;
            panda$core$Bit $tmp515 = { $tmp509 };
            $returnValue508 = $tmp515;
            $tmp500 = 0;
            goto $l498;
            $l516:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp518.value) {
        {
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 1;
            goto $l498;
            $l519:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp521.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp523 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 24));
            left522 = *$tmp523;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp525 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$248_9501->$data + 32));
            op524 = *$tmp525;
            org$pandalanguage$pandac$IRNode** $tmp527 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 40));
            right526 = *$tmp527;
            panda$core$Bit $tmp530 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(op524);
            bool $tmp529 = $tmp530.value;
            if ($tmp529) goto $l531;
            panda$core$Bit $tmp533 = (($fn532) left522->$class->vtable[4])(left522);
            $tmp529 = $tmp533.value;
            $l531:;
            panda$core$Bit $tmp534 = { $tmp529 };
            bool $tmp528 = $tmp534.value;
            if ($tmp528) goto $l535;
            panda$core$Bit $tmp537 = (($fn536) right526->$class->vtable[4])(right526);
            $tmp528 = $tmp537.value;
            $l535:;
            panda$core$Bit $tmp538 = { $tmp528 };
            $returnValue508 = $tmp538;
            $tmp500 = 2;
            goto $l498;
            $l539:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp541.value) {
        {
            panda$core$Bit* $tmp543 = ((panda$core$Bit*) ((char*) $match$248_9501->$data + 24));
            bit542 = *$tmp543;
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 3;
            goto $l498;
            $l544:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp546.value) {
        {
            panda$collections$ImmutableArray** $tmp548 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9501->$data + 16));
            statements547 = *$tmp548;
            {
                int $tmp551;
                {
                    ITable* $tmp555 = ((panda$collections$Iterable*) statements547)->$class->itable;
                    while ($tmp555->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp555 = $tmp555->next;
                    }
                    $fn557 $tmp556 = $tmp555->methods[0];
                    panda$collections$Iterator* $tmp558 = $tmp556(((panda$collections$Iterable*) statements547));
                    $tmp554 = $tmp558;
                    $tmp553 = $tmp554;
                    Iter$258$17552 = $tmp553;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp553));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp554));
                    $l559:;
                    ITable* $tmp562 = Iter$258$17552->$class->itable;
                    while ($tmp562->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp562 = $tmp562->next;
                    }
                    $fn564 $tmp563 = $tmp562->methods[0];
                    panda$core$Bit $tmp565 = $tmp563(Iter$258$17552);
                    panda$core$Bit $tmp566 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp565);
                    bool $tmp561 = $tmp566.value;
                    if (!$tmp561) goto $l560;
                    {
                        int $tmp569;
                        {
                            ITable* $tmp573 = Iter$258$17552->$class->itable;
                            while ($tmp573->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp573 = $tmp573->next;
                            }
                            $fn575 $tmp574 = $tmp573->methods[1];
                            panda$core$Object* $tmp576 = $tmp574(Iter$258$17552);
                            $tmp572 = $tmp576;
                            $tmp571 = ((org$pandalanguage$pandac$IRNode*) $tmp572);
                            s570 = $tmp571;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp571));
                            panda$core$Panda$unref$panda$core$Object($tmp572);
                            panda$core$Bit $tmp578 = (($fn577) s570->$class->vtable[4])(s570);
                            if ($tmp578.value) {
                            {
                                $returnValue508 = ((panda$core$Bit) { true });
                                $tmp569 = 0;
                                goto $l567;
                                $l579:;
                                $tmp551 = 0;
                                goto $l549;
                                $l580:;
                                $tmp500 = 4;
                                goto $l498;
                                $l581:;
                                return $returnValue508;
                            }
                            }
                        }
                        $tmp569 = -1;
                        goto $l567;
                        $l567:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s570));
                        s570 = NULL;
                        switch ($tmp569) {
                            case 0: goto $l579;
                            case -1: goto $l583;
                        }
                        $l583:;
                    }
                    goto $l559;
                    $l560:;
                }
                $tmp551 = -1;
                goto $l549;
                $l549:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$258$17552));
                Iter$258$17552 = NULL;
                switch ($tmp551) {
                    case -1: goto $l584;
                    case 0: goto $l580;
                }
                $l584:;
            }
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 5;
            goto $l498;
            $l585:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp587.value) {
        {
            panda$core$String** $tmp589 = ((panda$core$String**) ((char*) $match$248_9501->$data + 16));
            label588 = *$tmp589;
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 6;
            goto $l498;
            $l590:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp592.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp594 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$248_9501->$data + 24));
            m593 = *$tmp594;
            panda$collections$ImmutableArray** $tmp596 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9501->$data + 32));
            args595 = *$tmp596;
            panda$core$Bit $tmp597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m593->value->methodKind.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp597.value) {
            {
                $returnValue508 = ((panda$core$Bit) { true });
                $tmp500 = 7;
                goto $l498;
                $l598:;
                return $returnValue508;
            }
            }
            {
                int $tmp602;
                {
                    ITable* $tmp606 = ((panda$collections$Iterable*) args595)->$class->itable;
                    while ($tmp606->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp606 = $tmp606->next;
                    }
                    $fn608 $tmp607 = $tmp606->methods[0];
                    panda$collections$Iterator* $tmp609 = $tmp607(((panda$collections$Iterable*) args595));
                    $tmp605 = $tmp609;
                    $tmp604 = $tmp605;
                    Iter$270$17603 = $tmp604;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp604));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp605));
                    $l610:;
                    ITable* $tmp613 = Iter$270$17603->$class->itable;
                    while ($tmp613->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp613 = $tmp613->next;
                    }
                    $fn615 $tmp614 = $tmp613->methods[0];
                    panda$core$Bit $tmp616 = $tmp614(Iter$270$17603);
                    panda$core$Bit $tmp617 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp616);
                    bool $tmp612 = $tmp617.value;
                    if (!$tmp612) goto $l611;
                    {
                        int $tmp620;
                        {
                            ITable* $tmp624 = Iter$270$17603->$class->itable;
                            while ($tmp624->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp624 = $tmp624->next;
                            }
                            $fn626 $tmp625 = $tmp624->methods[1];
                            panda$core$Object* $tmp627 = $tmp625(Iter$270$17603);
                            $tmp623 = $tmp627;
                            $tmp622 = ((org$pandalanguage$pandac$IRNode*) $tmp623);
                            arg621 = $tmp622;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp622));
                            panda$core$Panda$unref$panda$core$Object($tmp623);
                            panda$core$Bit $tmp629 = (($fn628) arg621->$class->vtable[4])(arg621);
                            if ($tmp629.value) {
                            {
                                $returnValue508 = ((panda$core$Bit) { true });
                                $tmp620 = 0;
                                goto $l618;
                                $l630:;
                                $tmp602 = 0;
                                goto $l600;
                                $l631:;
                                $tmp500 = 8;
                                goto $l498;
                                $l632:;
                                return $returnValue508;
                            }
                            }
                        }
                        $tmp620 = -1;
                        goto $l618;
                        $l618:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg621));
                        arg621 = NULL;
                        switch ($tmp620) {
                            case 0: goto $l630;
                            case -1: goto $l634;
                        }
                        $l634:;
                    }
                    goto $l610;
                    $l611:;
                }
                $tmp602 = -1;
                goto $l600;
                $l600:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$270$17603));
                Iter$270$17603 = NULL;
                switch ($tmp602) {
                    case -1: goto $l635;
                    case 0: goto $l631;
                }
                $l635:;
            }
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 9;
            goto $l498;
            $l636:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp638.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp640 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 16));
            value639 = *$tmp640;
            org$pandalanguage$pandac$Type** $tmp642 = ((org$pandalanguage$pandac$Type**) ((char*) $match$248_9501->$data + 24));
            type641 = *$tmp642;
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 10;
            goto $l498;
            $l643:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp645.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp647 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$248_9501->$data + 16));
            ce646 = *$tmp647;
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 11;
            goto $l498;
            $l648:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp650.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp652 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 16));
            base651 = *$tmp652;
            org$pandalanguage$pandac$ChoiceEntry** $tmp654 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$248_9501->$data + 24));
            ce653 = *$tmp654;
            panda$core$Int64* $tmp656 = ((panda$core$Int64*) ((char*) $match$248_9501->$data + 32));
            field655 = *$tmp656;
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 12;
            goto $l498;
            $l657:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp659.value) {
        {
            org$pandalanguage$pandac$Type** $tmp661 = ((org$pandalanguage$pandac$Type**) ((char*) $match$248_9501->$data + 16));
            type660 = *$tmp661;
            org$pandalanguage$pandac$IRNode** $tmp663 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 24));
            call662 = *$tmp663;
            panda$core$Bit $tmp665 = (($fn664) call662->$class->vtable[4])(call662);
            $returnValue508 = $tmp665;
            $tmp500 = 13;
            goto $l498;
            $l666:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp668 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp668.value) {
        {
            org$pandalanguage$pandac$Type** $tmp670 = ((org$pandalanguage$pandac$Type**) ((char*) $match$248_9501->$data + 16));
            Type669 = *$tmp670;
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 14;
            goto $l498;
            $l671:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp673.value) {
        {
            panda$core$String** $tmp675 = ((panda$core$String**) ((char*) $match$248_9501->$data + 16));
            label674 = *$tmp675;
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 15;
            goto $l498;
            $l676:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp678.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp680 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 0));
            target679 = *$tmp680;
            org$pandalanguage$pandac$IRNode** $tmp682 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 8));
            value681 = *$tmp682;
            bool $tmp683 = ((panda$core$Bit) { value681 != NULL }).value;
            if (!$tmp683) goto $l684;
            panda$core$Bit $tmp686 = (($fn685) value681->$class->vtable[4])(value681);
            $tmp683 = $tmp686.value;
            $l684:;
            panda$core$Bit $tmp687 = { $tmp683 };
            $returnValue508 = $tmp687;
            $tmp500 = 16;
            goto $l498;
            $l688:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp690.value) {
        {
            panda$core$String** $tmp692 = ((panda$core$String**) ((char*) $match$248_9501->$data + 16));
            label691 = *$tmp692;
            panda$collections$ImmutableArray** $tmp694 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9501->$data + 24));
            statements693 = *$tmp694;
            org$pandalanguage$pandac$IRNode** $tmp696 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 32));
            test695 = *$tmp696;
            panda$core$Bit $tmp698 = (($fn697) test695->$class->vtable[4])(test695);
            if ($tmp698.value) {
            {
                $returnValue508 = ((panda$core$Bit) { true });
                $tmp500 = 17;
                goto $l498;
                $l699:;
                return $returnValue508;
            }
            }
            {
                int $tmp703;
                {
                    ITable* $tmp707 = ((panda$collections$Iterable*) statements693)->$class->itable;
                    while ($tmp707->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp707 = $tmp707->next;
                    }
                    $fn709 $tmp708 = $tmp707->methods[0];
                    panda$collections$Iterator* $tmp710 = $tmp708(((panda$collections$Iterable*) statements693));
                    $tmp706 = $tmp710;
                    $tmp705 = $tmp706;
                    Iter$294$17704 = $tmp705;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp705));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp706));
                    $l711:;
                    ITable* $tmp714 = Iter$294$17704->$class->itable;
                    while ($tmp714->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp714 = $tmp714->next;
                    }
                    $fn716 $tmp715 = $tmp714->methods[0];
                    panda$core$Bit $tmp717 = $tmp715(Iter$294$17704);
                    panda$core$Bit $tmp718 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp717);
                    bool $tmp713 = $tmp718.value;
                    if (!$tmp713) goto $l712;
                    {
                        int $tmp721;
                        {
                            ITable* $tmp725 = Iter$294$17704->$class->itable;
                            while ($tmp725->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp725 = $tmp725->next;
                            }
                            $fn727 $tmp726 = $tmp725->methods[1];
                            panda$core$Object* $tmp728 = $tmp726(Iter$294$17704);
                            $tmp724 = $tmp728;
                            $tmp723 = ((org$pandalanguage$pandac$IRNode*) $tmp724);
                            s722 = $tmp723;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp723));
                            panda$core$Panda$unref$panda$core$Object($tmp724);
                            panda$core$Bit $tmp730 = (($fn729) s722->$class->vtable[4])(s722);
                            if ($tmp730.value) {
                            {
                                $returnValue508 = ((panda$core$Bit) { true });
                                $tmp721 = 0;
                                goto $l719;
                                $l731:;
                                $tmp703 = 0;
                                goto $l701;
                                $l732:;
                                $tmp500 = 18;
                                goto $l498;
                                $l733:;
                                return $returnValue508;
                            }
                            }
                        }
                        $tmp721 = -1;
                        goto $l719;
                        $l719:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s722));
                        s722 = NULL;
                        switch ($tmp721) {
                            case -1: goto $l735;
                            case 0: goto $l731;
                        }
                        $l735:;
                    }
                    goto $l711;
                    $l712:;
                }
                $tmp703 = -1;
                goto $l701;
                $l701:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$294$17704));
                Iter$294$17704 = NULL;
                switch ($tmp703) {
                    case 0: goto $l732;
                    case -1: goto $l736;
                }
                $l736:;
            }
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 19;
            goto $l498;
            $l737:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp739.value) {
        {
            $returnValue508 = ((panda$core$Bit) { true });
            $tmp500 = 20;
            goto $l498;
            $l740:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp742.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp744 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 24));
            base743 = *$tmp744;
            org$pandalanguage$pandac$FieldDecl** $tmp746 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$248_9501->$data + 32));
            field745 = *$tmp746;
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 21;
            goto $l498;
            $l747:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp749.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp751 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 16));
            test750 = *$tmp751;
            panda$collections$ImmutableArray** $tmp753 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9501->$data + 24));
            ifTrue752 = *$tmp753;
            org$pandalanguage$pandac$IRNode** $tmp755 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 32));
            ifFalse754 = *$tmp755;
            panda$core$Bit $tmp757 = (($fn756) test750->$class->vtable[4])(test750);
            if ($tmp757.value) {
            {
                $returnValue508 = ((panda$core$Bit) { true });
                $tmp500 = 22;
                goto $l498;
                $l758:;
                return $returnValue508;
            }
            }
            {
                int $tmp762;
                {
                    ITable* $tmp766 = ((panda$collections$Iterable*) ifTrue752)->$class->itable;
                    while ($tmp766->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp766 = $tmp766->next;
                    }
                    $fn768 $tmp767 = $tmp766->methods[0];
                    panda$collections$Iterator* $tmp769 = $tmp767(((panda$collections$Iterable*) ifTrue752));
                    $tmp765 = $tmp769;
                    $tmp764 = $tmp765;
                    Iter$308$17763 = $tmp764;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp764));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp765));
                    $l770:;
                    ITable* $tmp773 = Iter$308$17763->$class->itable;
                    while ($tmp773->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp773 = $tmp773->next;
                    }
                    $fn775 $tmp774 = $tmp773->methods[0];
                    panda$core$Bit $tmp776 = $tmp774(Iter$308$17763);
                    panda$core$Bit $tmp777 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp776);
                    bool $tmp772 = $tmp777.value;
                    if (!$tmp772) goto $l771;
                    {
                        int $tmp780;
                        {
                            ITable* $tmp784 = Iter$308$17763->$class->itable;
                            while ($tmp784->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp784 = $tmp784->next;
                            }
                            $fn786 $tmp785 = $tmp784->methods[1];
                            panda$core$Object* $tmp787 = $tmp785(Iter$308$17763);
                            $tmp783 = $tmp787;
                            $tmp782 = ((org$pandalanguage$pandac$IRNode*) $tmp783);
                            s781 = $tmp782;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp782));
                            panda$core$Panda$unref$panda$core$Object($tmp783);
                            panda$core$Bit $tmp789 = (($fn788) s781->$class->vtable[4])(s781);
                            if ($tmp789.value) {
                            {
                                $returnValue508 = ((panda$core$Bit) { true });
                                $tmp780 = 0;
                                goto $l778;
                                $l790:;
                                $tmp762 = 0;
                                goto $l760;
                                $l791:;
                                $tmp500 = 23;
                                goto $l498;
                                $l792:;
                                return $returnValue508;
                            }
                            }
                        }
                        $tmp780 = -1;
                        goto $l778;
                        $l778:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s781));
                        s781 = NULL;
                        switch ($tmp780) {
                            case -1: goto $l794;
                            case 0: goto $l790;
                        }
                        $l794:;
                    }
                    goto $l770;
                    $l771:;
                }
                $tmp762 = -1;
                goto $l760;
                $l760:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$308$17763));
                Iter$308$17763 = NULL;
                switch ($tmp762) {
                    case 0: goto $l791;
                    case -1: goto $l795;
                }
                $l795:;
            }
            panda$core$Bit $tmp797 = (($fn796) ifFalse754->$class->vtable[4])(ifFalse754);
            $returnValue508 = $tmp797;
            $tmp500 = 24;
            goto $l498;
            $l798:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp800.value) {
        {
            panda$core$UInt64* $tmp802 = ((panda$core$UInt64*) ((char*) $match$248_9501->$data + 24));
            value801 = *$tmp802;
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 25;
            goto $l498;
            $l803:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp805.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp807 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 16));
            value806 = *$tmp807;
            panda$core$Bit $tmp809 = (($fn808) value806->$class->vtable[4])(value806);
            $returnValue508 = $tmp809;
            $tmp500 = 26;
            goto $l498;
            $l810:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp812.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp814 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 16));
            value813 = *$tmp814;
            panda$core$Bit $tmp816 = (($fn815) value813->$class->vtable[4])(value813);
            $returnValue508 = $tmp816;
            $tmp500 = 27;
            goto $l498;
            $l817:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp819.value) {
        {
            panda$core$String** $tmp821 = ((panda$core$String**) ((char*) $match$248_9501->$data + 16));
            label820 = *$tmp821;
            panda$collections$ImmutableArray** $tmp823 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9501->$data + 24));
            statements822 = *$tmp823;
            {
                int $tmp826;
                {
                    ITable* $tmp830 = ((panda$collections$Iterable*) statements822)->$class->itable;
                    while ($tmp830->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp830 = $tmp830->next;
                    }
                    $fn832 $tmp831 = $tmp830->methods[0];
                    panda$collections$Iterator* $tmp833 = $tmp831(((panda$collections$Iterable*) statements822));
                    $tmp829 = $tmp833;
                    $tmp828 = $tmp829;
                    Iter$321$17827 = $tmp828;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp828));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp829));
                    $l834:;
                    ITable* $tmp837 = Iter$321$17827->$class->itable;
                    while ($tmp837->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp837 = $tmp837->next;
                    }
                    $fn839 $tmp838 = $tmp837->methods[0];
                    panda$core$Bit $tmp840 = $tmp838(Iter$321$17827);
                    panda$core$Bit $tmp841 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp840);
                    bool $tmp836 = $tmp841.value;
                    if (!$tmp836) goto $l835;
                    {
                        int $tmp844;
                        {
                            ITable* $tmp848 = Iter$321$17827->$class->itable;
                            while ($tmp848->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp848 = $tmp848->next;
                            }
                            $fn850 $tmp849 = $tmp848->methods[1];
                            panda$core$Object* $tmp851 = $tmp849(Iter$321$17827);
                            $tmp847 = $tmp851;
                            $tmp846 = ((org$pandalanguage$pandac$IRNode*) $tmp847);
                            s845 = $tmp846;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp846));
                            panda$core$Panda$unref$panda$core$Object($tmp847);
                            panda$core$Bit $tmp853 = (($fn852) s845->$class->vtable[4])(s845);
                            if ($tmp853.value) {
                            {
                                $returnValue508 = ((panda$core$Bit) { true });
                                $tmp844 = 0;
                                goto $l842;
                                $l854:;
                                $tmp826 = 0;
                                goto $l824;
                                $l855:;
                                $tmp500 = 28;
                                goto $l498;
                                $l856:;
                                return $returnValue508;
                            }
                            }
                        }
                        $tmp844 = -1;
                        goto $l842;
                        $l842:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s845));
                        s845 = NULL;
                        switch ($tmp844) {
                            case 0: goto $l854;
                            case -1: goto $l858;
                        }
                        $l858:;
                    }
                    goto $l834;
                    $l835:;
                }
                $tmp826 = -1;
                goto $l824;
                $l824:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$321$17827));
                Iter$321$17827 = NULL;
                switch ($tmp826) {
                    case 0: goto $l855;
                    case -1: goto $l859;
                }
                $l859:;
            }
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 29;
            goto $l498;
            $l860:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp862.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp864 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 16));
            value863 = *$tmp864;
            panda$collections$ImmutableArray** $tmp866 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9501->$data + 24));
            whens865 = *$tmp866;
            panda$collections$ImmutableArray** $tmp868 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9501->$data + 32));
            other867 = *$tmp868;
            panda$core$Bit $tmp870 = (($fn869) value863->$class->vtable[4])(value863);
            if ($tmp870.value) {
            {
                $returnValue508 = ((panda$core$Bit) { true });
                $tmp500 = 30;
                goto $l498;
                $l871:;
                return $returnValue508;
            }
            }
            {
                int $tmp875;
                {
                    ITable* $tmp879 = ((panda$collections$Iterable*) whens865)->$class->itable;
                    while ($tmp879->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp879 = $tmp879->next;
                    }
                    $fn881 $tmp880 = $tmp879->methods[0];
                    panda$collections$Iterator* $tmp882 = $tmp880(((panda$collections$Iterable*) whens865));
                    $tmp878 = $tmp882;
                    $tmp877 = $tmp878;
                    Iter$331$17876 = $tmp877;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp877));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp878));
                    $l883:;
                    ITable* $tmp886 = Iter$331$17876->$class->itable;
                    while ($tmp886->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp886 = $tmp886->next;
                    }
                    $fn888 $tmp887 = $tmp886->methods[0];
                    panda$core$Bit $tmp889 = $tmp887(Iter$331$17876);
                    panda$core$Bit $tmp890 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp889);
                    bool $tmp885 = $tmp890.value;
                    if (!$tmp885) goto $l884;
                    {
                        int $tmp893;
                        {
                            ITable* $tmp897 = Iter$331$17876->$class->itable;
                            while ($tmp897->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp897 = $tmp897->next;
                            }
                            $fn899 $tmp898 = $tmp897->methods[1];
                            panda$core$Object* $tmp900 = $tmp898(Iter$331$17876);
                            $tmp896 = $tmp900;
                            $tmp895 = ((org$pandalanguage$pandac$IRNode*) $tmp896);
                            w894 = $tmp895;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp895));
                            panda$core$Panda$unref$panda$core$Object($tmp896);
                            panda$core$Bit $tmp902 = (($fn901) w894->$class->vtable[4])(w894);
                            if ($tmp902.value) {
                            {
                                $returnValue508 = ((panda$core$Bit) { true });
                                $tmp893 = 0;
                                goto $l891;
                                $l903:;
                                $tmp875 = 0;
                                goto $l873;
                                $l904:;
                                $tmp500 = 31;
                                goto $l498;
                                $l905:;
                                return $returnValue508;
                            }
                            }
                        }
                        $tmp893 = -1;
                        goto $l891;
                        $l891:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w894));
                        w894 = NULL;
                        switch ($tmp893) {
                            case -1: goto $l907;
                            case 0: goto $l903;
                        }
                        $l907:;
                    }
                    goto $l883;
                    $l884:;
                }
                $tmp875 = -1;
                goto $l873;
                $l873:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$331$17876));
                Iter$331$17876 = NULL;
                switch ($tmp875) {
                    case 0: goto $l904;
                    case -1: goto $l908;
                }
                $l908:;
            }
            {
                int $tmp911;
                {
                    ITable* $tmp915 = ((panda$collections$Iterable*) other867)->$class->itable;
                    while ($tmp915->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp915 = $tmp915->next;
                    }
                    $fn917 $tmp916 = $tmp915->methods[0];
                    panda$collections$Iterator* $tmp918 = $tmp916(((panda$collections$Iterable*) other867));
                    $tmp914 = $tmp918;
                    $tmp913 = $tmp914;
                    Iter$336$17912 = $tmp913;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp913));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp914));
                    $l919:;
                    ITable* $tmp922 = Iter$336$17912->$class->itable;
                    while ($tmp922->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp922 = $tmp922->next;
                    }
                    $fn924 $tmp923 = $tmp922->methods[0];
                    panda$core$Bit $tmp925 = $tmp923(Iter$336$17912);
                    panda$core$Bit $tmp926 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp925);
                    bool $tmp921 = $tmp926.value;
                    if (!$tmp921) goto $l920;
                    {
                        int $tmp929;
                        {
                            ITable* $tmp933 = Iter$336$17912->$class->itable;
                            while ($tmp933->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp933 = $tmp933->next;
                            }
                            $fn935 $tmp934 = $tmp933->methods[1];
                            panda$core$Object* $tmp936 = $tmp934(Iter$336$17912);
                            $tmp932 = $tmp936;
                            $tmp931 = ((org$pandalanguage$pandac$IRNode*) $tmp932);
                            s930 = $tmp931;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp931));
                            panda$core$Panda$unref$panda$core$Object($tmp932);
                            panda$core$Bit $tmp938 = (($fn937) s930->$class->vtable[4])(s930);
                            if ($tmp938.value) {
                            {
                                $returnValue508 = ((panda$core$Bit) { true });
                                $tmp929 = 0;
                                goto $l927;
                                $l939:;
                                $tmp911 = 0;
                                goto $l909;
                                $l940:;
                                $tmp500 = 32;
                                goto $l498;
                                $l941:;
                                return $returnValue508;
                            }
                            }
                        }
                        $tmp929 = -1;
                        goto $l927;
                        $l927:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s930));
                        s930 = NULL;
                        switch ($tmp929) {
                            case 0: goto $l939;
                            case -1: goto $l943;
                        }
                        $l943:;
                    }
                    goto $l919;
                    $l920:;
                }
                $tmp911 = -1;
                goto $l909;
                $l909:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$336$17912));
                Iter$336$17912 = NULL;
                switch ($tmp911) {
                    case -1: goto $l944;
                    case 0: goto $l940;
                }
                $l944:;
            }
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 33;
            goto $l498;
            $l945:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp947.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp949 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 16));
            target948 = *$tmp949;
            org$pandalanguage$pandac$MethodRef** $tmp951 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$248_9501->$data + 24));
            m950 = *$tmp951;
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 34;
            goto $l498;
            $l952:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp954.value) {
        {
            panda$core$UInt64* $tmp956 = ((panda$core$UInt64*) ((char*) $match$248_9501->$data + 24));
            value955 = *$tmp956;
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 35;
            goto $l498;
            $l957:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp959.value) {
        {
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 36;
            goto $l498;
            $l960:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp962.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp964 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$248_9501->$data + 16));
            op963 = *$tmp964;
            org$pandalanguage$pandac$IRNode** $tmp966 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 24));
            base965 = *$tmp966;
            panda$core$Bit $tmp968 = (($fn967) base965->$class->vtable[4])(base965);
            $returnValue508 = $tmp968;
            $tmp500 = 37;
            goto $l498;
            $l969:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp971.value) {
        {
            panda$core$String** $tmp973 = ((panda$core$String**) ((char*) $match$248_9501->$data + 16));
            label972 = *$tmp973;
            org$pandalanguage$pandac$IRNode** $tmp975 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 24));
            target974 = *$tmp975;
            org$pandalanguage$pandac$IRNode** $tmp977 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 32));
            list976 = *$tmp977;
            panda$collections$ImmutableArray** $tmp979 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9501->$data + 40));
            statements978 = *$tmp979;
            panda$core$Bit $tmp981 = (($fn980) list976->$class->vtable[4])(list976);
            if ($tmp981.value) {
            {
                $returnValue508 = ((panda$core$Bit) { true });
                $tmp500 = 38;
                goto $l498;
                $l982:;
                return $returnValue508;
            }
            }
            {
                int $tmp986;
                {
                    ITable* $tmp990 = ((panda$collections$Iterable*) statements978)->$class->itable;
                    while ($tmp990->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp990 = $tmp990->next;
                    }
                    $fn992 $tmp991 = $tmp990->methods[0];
                    panda$collections$Iterator* $tmp993 = $tmp991(((panda$collections$Iterable*) statements978));
                    $tmp989 = $tmp993;
                    $tmp988 = $tmp989;
                    Iter$355$17987 = $tmp988;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp988));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp989));
                    $l994:;
                    ITable* $tmp997 = Iter$355$17987->$class->itable;
                    while ($tmp997->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp997 = $tmp997->next;
                    }
                    $fn999 $tmp998 = $tmp997->methods[0];
                    panda$core$Bit $tmp1000 = $tmp998(Iter$355$17987);
                    panda$core$Bit $tmp1001 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1000);
                    bool $tmp996 = $tmp1001.value;
                    if (!$tmp996) goto $l995;
                    {
                        int $tmp1004;
                        {
                            ITable* $tmp1008 = Iter$355$17987->$class->itable;
                            while ($tmp1008->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1008 = $tmp1008->next;
                            }
                            $fn1010 $tmp1009 = $tmp1008->methods[1];
                            panda$core$Object* $tmp1011 = $tmp1009(Iter$355$17987);
                            $tmp1007 = $tmp1011;
                            $tmp1006 = ((org$pandalanguage$pandac$IRNode*) $tmp1007);
                            s1005 = $tmp1006;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1006));
                            panda$core$Panda$unref$panda$core$Object($tmp1007);
                            panda$core$Bit $tmp1013 = (($fn1012) s1005->$class->vtable[4])(s1005);
                            if ($tmp1013.value) {
                            {
                                $returnValue508 = ((panda$core$Bit) { true });
                                $tmp1004 = 0;
                                goto $l1002;
                                $l1014:;
                                $tmp986 = 0;
                                goto $l984;
                                $l1015:;
                                $tmp500 = 39;
                                goto $l498;
                                $l1016:;
                                return $returnValue508;
                            }
                            }
                        }
                        $tmp1004 = -1;
                        goto $l1002;
                        $l1002:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1005));
                        s1005 = NULL;
                        switch ($tmp1004) {
                            case -1: goto $l1018;
                            case 0: goto $l1014;
                        }
                        $l1018:;
                    }
                    goto $l994;
                    $l995:;
                }
                $tmp986 = -1;
                goto $l984;
                $l984:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$355$17987));
                Iter$355$17987 = NULL;
                switch ($tmp986) {
                    case -1: goto $l1019;
                    case 0: goto $l1015;
                }
                $l1019:;
            }
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 40;
            goto $l498;
            $l1020:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp1022 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1022.value) {
        {
            panda$core$Real64* $tmp1024 = ((panda$core$Real64*) ((char*) $match$248_9501->$data + 24));
            value1023 = *$tmp1024;
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 41;
            goto $l498;
            $l1025:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp1027 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1027.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1029 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 16));
            value1028 = *$tmp1029;
            panda$core$Bit $tmp1031 = (($fn1030) value1028->$class->vtable[4])(value1028);
            $returnValue508 = $tmp1031;
            $tmp500 = 42;
            goto $l498;
            $l1032:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp1034 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1034.value) {
        {
            panda$core$Int64* $tmp1036 = ((panda$core$Int64*) ((char*) $match$248_9501->$data + 24));
            id1035 = *$tmp1036;
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 43;
            goto $l498;
            $l1037:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp1039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1039.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1041 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 0));
            base1040 = *$tmp1041;
            panda$core$Int64* $tmp1043 = ((panda$core$Int64*) ((char*) $match$248_9501->$data + 8));
            id1042 = *$tmp1043;
            panda$core$Bit $tmp1045 = (($fn1044) base1040->$class->vtable[4])(base1040);
            $returnValue508 = $tmp1045;
            $tmp500 = 44;
            goto $l498;
            $l1046:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp1048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1048.value) {
        {
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 45;
            goto $l498;
            $l1049:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp1051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1051.value) {
        {
            panda$core$String** $tmp1053 = ((panda$core$String**) ((char*) $match$248_9501->$data + 16));
            str1052 = *$tmp1053;
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 46;
            goto $l498;
            $l1054:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp1056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1056.value) {
        {
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 47;
            goto $l498;
            $l1057:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp1059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1059.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1061 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 16));
            test1060 = *$tmp1061;
            org$pandalanguage$pandac$IRNode** $tmp1063 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 24));
            ifTrue1062 = *$tmp1063;
            org$pandalanguage$pandac$IRNode** $tmp1065 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 32));
            ifFalse1064 = *$tmp1065;
            panda$core$Bit $tmp1069 = (($fn1068) test1060->$class->vtable[4])(test1060);
            bool $tmp1067 = $tmp1069.value;
            if ($tmp1067) goto $l1070;
            panda$core$Bit $tmp1072 = (($fn1071) ifTrue1062->$class->vtable[4])(ifTrue1062);
            $tmp1067 = $tmp1072.value;
            $l1070:;
            panda$core$Bit $tmp1073 = { $tmp1067 };
            bool $tmp1066 = $tmp1073.value;
            if ($tmp1066) goto $l1074;
            panda$core$Bit $tmp1076 = (($fn1075) ifFalse1064->$class->vtable[4])(ifFalse1064);
            $tmp1066 = $tmp1076.value;
            $l1074:;
            panda$core$Bit $tmp1077 = { $tmp1066 };
            $returnValue508 = $tmp1077;
            $tmp500 = 48;
            goto $l498;
            $l1078:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp1080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1080.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1082 = ((org$pandalanguage$pandac$Type**) ((char*) $match$248_9501->$data + 16));
            type1081 = *$tmp1082;
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 49;
            goto $l498;
            $l1083:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp1085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1085.value) {
        {
            panda$core$String** $tmp1087 = ((panda$core$String**) ((char*) $match$248_9501->$data + 16));
            name1086 = *$tmp1087;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1088.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1090 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 24));
            base1089 = *$tmp1090;
            panda$collections$ImmutableArray** $tmp1092 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9501->$data + 32));
            args1091 = *$tmp1092;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1093.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1095 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 24));
            target1094 = *$tmp1095;
            panda$collections$ImmutableArray** $tmp1097 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9501->$data + 32));
            methods1096 = *$tmp1097;
            panda$collections$ImmutableArray** $tmp1099 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9501->$data + 40));
            args1098 = *$tmp1099;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1100.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1102 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 16));
            target1101 = *$tmp1102;
            panda$collections$ImmutableArray** $tmp1104 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9501->$data + 24));
            methods1103 = *$tmp1104;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1105.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1107 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 16));
            start1106 = *$tmp1107;
            org$pandalanguage$pandac$IRNode** $tmp1109 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 24));
            end1108 = *$tmp1109;
            panda$core$Bit* $tmp1111 = ((panda$core$Bit*) ((char*) $match$248_9501->$data + 32));
            inclusive1110 = *$tmp1111;
            org$pandalanguage$pandac$IRNode** $tmp1113 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 33));
            step1112 = *$tmp1113;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1114.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1116 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$248_9501->$data + 16));
            kind1115 = *$tmp1116;
            panda$collections$ImmutableArray** $tmp1118 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9501->$data + 24));
            decls1117 = *$tmp1118;
            {
                int $tmp1121;
                {
                    ITable* $tmp1125 = ((panda$collections$Iterable*) decls1117)->$class->itable;
                    while ($tmp1125->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1125 = $tmp1125->next;
                    }
                    $fn1127 $tmp1126 = $tmp1125->methods[0];
                    panda$collections$Iterator* $tmp1128 = $tmp1126(((panda$collections$Iterable*) decls1117));
                    $tmp1124 = $tmp1128;
                    $tmp1123 = $tmp1124;
                    Iter$390$171122 = $tmp1123;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1123));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1124));
                    $l1129:;
                    ITable* $tmp1132 = Iter$390$171122->$class->itable;
                    while ($tmp1132->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1132 = $tmp1132->next;
                    }
                    $fn1134 $tmp1133 = $tmp1132->methods[0];
                    panda$core$Bit $tmp1135 = $tmp1133(Iter$390$171122);
                    panda$core$Bit $tmp1136 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1135);
                    bool $tmp1131 = $tmp1136.value;
                    if (!$tmp1131) goto $l1130;
                    {
                        int $tmp1139;
                        {
                            ITable* $tmp1143 = Iter$390$171122->$class->itable;
                            while ($tmp1143->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1143 = $tmp1143->next;
                            }
                            $fn1145 $tmp1144 = $tmp1143->methods[1];
                            panda$core$Object* $tmp1146 = $tmp1144(Iter$390$171122);
                            $tmp1142 = $tmp1146;
                            $tmp1141 = ((org$pandalanguage$pandac$IRNode*) $tmp1142);
                            d1140 = $tmp1141;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1141));
                            panda$core$Panda$unref$panda$core$Object($tmp1142);
                            panda$core$Bit $tmp1148 = (($fn1147) d1140->$class->vtable[4])(d1140);
                            if ($tmp1148.value) {
                            {
                                $returnValue508 = ((panda$core$Bit) { true });
                                $tmp1139 = 0;
                                goto $l1137;
                                $l1149:;
                                $tmp1121 = 0;
                                goto $l1119;
                                $l1150:;
                                $tmp500 = 50;
                                goto $l498;
                                $l1151:;
                                return $returnValue508;
                            }
                            }
                        }
                        $tmp1139 = -1;
                        goto $l1137;
                        $l1137:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) d1140));
                        d1140 = NULL;
                        switch ($tmp1139) {
                            case -1: goto $l1153;
                            case 0: goto $l1149;
                        }
                        $l1153:;
                    }
                    goto $l1129;
                    $l1130:;
                }
                $tmp1121 = -1;
                goto $l1119;
                $l1119:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$390$171122));
                Iter$390$171122 = NULL;
                switch ($tmp1121) {
                    case 0: goto $l1150;
                    case -1: goto $l1154;
                }
                $l1154:;
            }
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 51;
            goto $l498;
            $l1155:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp1157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp1157.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp1159 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$248_9501->$data + 16));
            variable1158 = *$tmp1159;
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 52;
            goto $l498;
            $l1160:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp1162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp1162.value) {
        {
            panda$collections$ImmutableArray** $tmp1164 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9501->$data + 16));
            tests1163 = *$tmp1164;
            panda$collections$ImmutableArray** $tmp1166 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9501->$data + 24));
            statements1165 = *$tmp1166;
            {
                int $tmp1169;
                {
                    ITable* $tmp1173 = ((panda$collections$Iterable*) tests1163)->$class->itable;
                    while ($tmp1173->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1173 = $tmp1173->next;
                    }
                    $fn1175 $tmp1174 = $tmp1173->methods[0];
                    panda$collections$Iterator* $tmp1176 = $tmp1174(((panda$collections$Iterable*) tests1163));
                    $tmp1172 = $tmp1176;
                    $tmp1171 = $tmp1172;
                    Iter$399$171170 = $tmp1171;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1171));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1172));
                    $l1177:;
                    ITable* $tmp1180 = Iter$399$171170->$class->itable;
                    while ($tmp1180->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1180 = $tmp1180->next;
                    }
                    $fn1182 $tmp1181 = $tmp1180->methods[0];
                    panda$core$Bit $tmp1183 = $tmp1181(Iter$399$171170);
                    panda$core$Bit $tmp1184 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1183);
                    bool $tmp1179 = $tmp1184.value;
                    if (!$tmp1179) goto $l1178;
                    {
                        int $tmp1187;
                        {
                            ITable* $tmp1191 = Iter$399$171170->$class->itable;
                            while ($tmp1191->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1191 = $tmp1191->next;
                            }
                            $fn1193 $tmp1192 = $tmp1191->methods[1];
                            panda$core$Object* $tmp1194 = $tmp1192(Iter$399$171170);
                            $tmp1190 = $tmp1194;
                            $tmp1189 = ((org$pandalanguage$pandac$IRNode*) $tmp1190);
                            t1188 = $tmp1189;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1189));
                            panda$core$Panda$unref$panda$core$Object($tmp1190);
                            panda$core$Bit $tmp1196 = (($fn1195) t1188->$class->vtable[4])(t1188);
                            if ($tmp1196.value) {
                            {
                                $returnValue508 = ((panda$core$Bit) { true });
                                $tmp1187 = 0;
                                goto $l1185;
                                $l1197:;
                                $tmp1169 = 0;
                                goto $l1167;
                                $l1198:;
                                $tmp500 = 53;
                                goto $l498;
                                $l1199:;
                                return $returnValue508;
                            }
                            }
                        }
                        $tmp1187 = -1;
                        goto $l1185;
                        $l1185:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1188));
                        t1188 = NULL;
                        switch ($tmp1187) {
                            case 0: goto $l1197;
                            case -1: goto $l1201;
                        }
                        $l1201:;
                    }
                    goto $l1177;
                    $l1178:;
                }
                $tmp1169 = -1;
                goto $l1167;
                $l1167:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$399$171170));
                Iter$399$171170 = NULL;
                switch ($tmp1169) {
                    case -1: goto $l1202;
                    case 0: goto $l1198;
                }
                $l1202:;
            }
            {
                int $tmp1205;
                {
                    ITable* $tmp1209 = ((panda$collections$Iterable*) statements1165)->$class->itable;
                    while ($tmp1209->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1209 = $tmp1209->next;
                    }
                    $fn1211 $tmp1210 = $tmp1209->methods[0];
                    panda$collections$Iterator* $tmp1212 = $tmp1210(((panda$collections$Iterable*) statements1165));
                    $tmp1208 = $tmp1212;
                    $tmp1207 = $tmp1208;
                    Iter$404$171206 = $tmp1207;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1207));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1208));
                    $l1213:;
                    ITable* $tmp1216 = Iter$404$171206->$class->itable;
                    while ($tmp1216->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1216 = $tmp1216->next;
                    }
                    $fn1218 $tmp1217 = $tmp1216->methods[0];
                    panda$core$Bit $tmp1219 = $tmp1217(Iter$404$171206);
                    panda$core$Bit $tmp1220 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1219);
                    bool $tmp1215 = $tmp1220.value;
                    if (!$tmp1215) goto $l1214;
                    {
                        int $tmp1223;
                        {
                            ITable* $tmp1227 = Iter$404$171206->$class->itable;
                            while ($tmp1227->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1227 = $tmp1227->next;
                            }
                            $fn1229 $tmp1228 = $tmp1227->methods[1];
                            panda$core$Object* $tmp1230 = $tmp1228(Iter$404$171206);
                            $tmp1226 = $tmp1230;
                            $tmp1225 = ((org$pandalanguage$pandac$IRNode*) $tmp1226);
                            s1224 = $tmp1225;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1225));
                            panda$core$Panda$unref$panda$core$Object($tmp1226);
                            panda$core$Bit $tmp1232 = (($fn1231) s1224->$class->vtable[4])(s1224);
                            if ($tmp1232.value) {
                            {
                                $returnValue508 = ((panda$core$Bit) { true });
                                $tmp1223 = 0;
                                goto $l1221;
                                $l1233:;
                                $tmp1205 = 0;
                                goto $l1203;
                                $l1234:;
                                $tmp500 = 54;
                                goto $l498;
                                $l1235:;
                                return $returnValue508;
                            }
                            }
                        }
                        $tmp1223 = -1;
                        goto $l1221;
                        $l1221:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1224));
                        s1224 = NULL;
                        switch ($tmp1223) {
                            case -1: goto $l1237;
                            case 0: goto $l1233;
                        }
                        $l1237:;
                    }
                    goto $l1213;
                    $l1214:;
                }
                $tmp1205 = -1;
                goto $l1203;
                $l1203:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$404$171206));
                Iter$404$171206 = NULL;
                switch ($tmp1205) {
                    case 0: goto $l1234;
                    case -1: goto $l1238;
                }
                $l1238:;
            }
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 55;
            goto $l498;
            $l1239:;
            return $returnValue508;
        }
        }
        else {
        panda$core$Bit $tmp1241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9501->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp1241.value) {
        {
            panda$core$String** $tmp1243 = ((panda$core$String**) ((char*) $match$248_9501->$data + 16));
            label1242 = *$tmp1243;
            org$pandalanguage$pandac$IRNode** $tmp1245 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9501->$data + 24));
            test1244 = *$tmp1245;
            panda$collections$ImmutableArray** $tmp1247 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9501->$data + 32));
            statements1246 = *$tmp1247;
            panda$core$Bit $tmp1249 = (($fn1248) test1244->$class->vtable[4])(test1244);
            if ($tmp1249.value) {
            {
                $returnValue508 = ((panda$core$Bit) { true });
                $tmp500 = 56;
                goto $l498;
                $l1250:;
                return $returnValue508;
            }
            }
            {
                int $tmp1254;
                {
                    ITable* $tmp1258 = ((panda$collections$Iterable*) statements1246)->$class->itable;
                    while ($tmp1258->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1258 = $tmp1258->next;
                    }
                    $fn1260 $tmp1259 = $tmp1258->methods[0];
                    panda$collections$Iterator* $tmp1261 = $tmp1259(((panda$collections$Iterable*) statements1246));
                    $tmp1257 = $tmp1261;
                    $tmp1256 = $tmp1257;
                    Iter$414$171255 = $tmp1256;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1256));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1257));
                    $l1262:;
                    ITable* $tmp1265 = Iter$414$171255->$class->itable;
                    while ($tmp1265->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1265 = $tmp1265->next;
                    }
                    $fn1267 $tmp1266 = $tmp1265->methods[0];
                    panda$core$Bit $tmp1268 = $tmp1266(Iter$414$171255);
                    panda$core$Bit $tmp1269 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1268);
                    bool $tmp1264 = $tmp1269.value;
                    if (!$tmp1264) goto $l1263;
                    {
                        int $tmp1272;
                        {
                            ITable* $tmp1276 = Iter$414$171255->$class->itable;
                            while ($tmp1276->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1276 = $tmp1276->next;
                            }
                            $fn1278 $tmp1277 = $tmp1276->methods[1];
                            panda$core$Object* $tmp1279 = $tmp1277(Iter$414$171255);
                            $tmp1275 = $tmp1279;
                            $tmp1274 = ((org$pandalanguage$pandac$IRNode*) $tmp1275);
                            s1273 = $tmp1274;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1274));
                            panda$core$Panda$unref$panda$core$Object($tmp1275);
                            panda$core$Bit $tmp1281 = (($fn1280) s1273->$class->vtable[4])(s1273);
                            if ($tmp1281.value) {
                            {
                                $returnValue508 = ((panda$core$Bit) { true });
                                $tmp1272 = 0;
                                goto $l1270;
                                $l1282:;
                                $tmp1254 = 0;
                                goto $l1252;
                                $l1283:;
                                $tmp500 = 57;
                                goto $l498;
                                $l1284:;
                                return $returnValue508;
                            }
                            }
                        }
                        $tmp1272 = -1;
                        goto $l1270;
                        $l1270:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1273));
                        s1273 = NULL;
                        switch ($tmp1272) {
                            case -1: goto $l1286;
                            case 0: goto $l1282;
                        }
                        $l1286:;
                    }
                    goto $l1262;
                    $l1263:;
                }
                $tmp1254 = -1;
                goto $l1252;
                $l1252:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$414$171255));
                Iter$414$171255 = NULL;
                switch ($tmp1254) {
                    case 0: goto $l1283;
                    case -1: goto $l1287;
                }
                $l1287:;
            }
            $returnValue508 = ((panda$core$Bit) { false });
            $tmp500 = 58;
            goto $l498;
            $l1288:;
            return $returnValue508;
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
    $tmp500 = -1;
    goto $l498;
    $l498:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp502));
    switch ($tmp500) {
        case 43: goto $l1037;
        case 48: goto $l1078;
        case 0: goto $l516;
        case 13: goto $l666;
        case 44: goto $l1046;
        case 1: goto $l519;
        case 6: goto $l590;
        case 5: goto $l585;
        case 49: goto $l1083;
        case 4: goto $l581;
        case 55: goto $l1239;
        case 2: goto $l539;
        case 54: goto $l1235;
        case 31: goto $l905;
        case 30: goto $l871;
        case 3: goto $l544;
        case 53: goto $l1199;
        case 50: goto $l1151;
        case 26: goto $l810;
        case 51: goto $l1155;
        case 52: goto $l1160;
        case 7: goto $l598;
        case 11: goto $l648;
        case 56: goto $l1250;
        case 12: goto $l657;
        case 35: goto $l957;
        case 15: goto $l676;
        case 36: goto $l960;
        case 22: goto $l758;
        case 9: goto $l636;
        case 39: goto $l1016;
        case 8: goto $l632;
        case 40: goto $l1020;
        case 21: goto $l747;
        case 57: goto $l1284;
        case 32: goto $l941;
        case 27: goto $l817;
        case 58: goto $l1288;
        case 10: goto $l643;
        case 33: goto $l945;
        case 34: goto $l952;
        case -1: goto $l1290;
        case 47: goto $l1057;
        case 28: goto $l856;
        case 29: goto $l860;
        case 23: goto $l792;
        case 41: goto $l1025;
        case 16: goto $l688;
        case 42: goto $l1032;
        case 19: goto $l737;
        case 24: goto $l798;
        case 20: goto $l740;
        case 17: goto $l699;
        case 18: goto $l733;
        case 14: goto $l671;
        case 25: goto $l803;
        case 45: goto $l1049;
        case 46: goto $l1054;
        case 38: goto $l982;
        case 37: goto $l969;
    }
    $l1290:;
}
panda$core$String* org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$427_91294 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1295;
    org$pandalanguage$pandac$IRNode* test1297 = NULL;
    org$pandalanguage$pandac$IRNode* msg1299 = NULL;
    panda$core$String* $returnValue1301;
    panda$core$String* $tmp1302;
    panda$core$String* $tmp1303;
    panda$core$String* $tmp1304;
    panda$core$String* $tmp1305;
    panda$core$String* $tmp1306;
    panda$core$String* $tmp1316;
    panda$core$String* $tmp1317;
    panda$core$String* $tmp1318;
    panda$core$String* $tmp1326;
    org$pandalanguage$pandac$IRNode* left1331 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op1333;
    org$pandalanguage$pandac$IRNode* right1335 = NULL;
    panda$core$String* $tmp1337;
    panda$core$String* $tmp1338;
    panda$core$String* $tmp1339;
    panda$core$String* $tmp1340;
    panda$core$String* $tmp1341;
    panda$core$String* $tmp1342;
    panda$core$String* $tmp1343;
    panda$core$Object* $tmp1348;
    panda$core$Bit bit1359;
    panda$core$String* $tmp1361;
    panda$core$String* $tmp1362;
    panda$collections$ImmutableArray* statements1367 = NULL;
    panda$core$MutableString* result1372 = NULL;
    panda$core$MutableString* $tmp1373;
    panda$core$MutableString* $tmp1374;
    panda$collections$Iterator* Iter$441$171380 = NULL;
    panda$collections$Iterator* $tmp1381;
    panda$collections$Iterator* $tmp1382;
    org$pandalanguage$pandac$IRNode* s1398 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1399;
    panda$core$Object* $tmp1400;
    panda$core$String* $tmp1405;
    panda$core$Char8 $tmp1410;
    panda$core$String* $tmp1411;
    panda$core$String* $tmp1412;
    panda$collections$ImmutableArray* statements1419 = NULL;
    panda$collections$ImmutableArray* finally1421 = NULL;
    panda$core$MutableString* result1426 = NULL;
    panda$core$MutableString* $tmp1427;
    panda$core$MutableString* $tmp1428;
    panda$collections$Iterator* Iter$448$171434 = NULL;
    panda$collections$Iterator* $tmp1435;
    panda$collections$Iterator* $tmp1436;
    org$pandalanguage$pandac$IRNode* s1452 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1453;
    panda$core$Object* $tmp1454;
    panda$core$String* $tmp1459;
    panda$collections$Iterator* Iter$452$171468 = NULL;
    panda$collections$Iterator* $tmp1469;
    panda$collections$Iterator* $tmp1470;
    org$pandalanguage$pandac$IRNode* s1486 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1487;
    panda$core$Object* $tmp1488;
    panda$core$String* $tmp1493;
    panda$core$Char8 $tmp1498;
    panda$core$String* $tmp1499;
    panda$core$String* $tmp1500;
    panda$core$String* label1507 = NULL;
    panda$core$String* $tmp1509;
    panda$core$String* $tmp1510;
    panda$core$String* $tmp1511;
    panda$core$String* $tmp1518;
    org$pandalanguage$pandac$MethodRef* m1523 = NULL;
    panda$collections$ImmutableArray* args1525 = NULL;
    panda$core$String* $tmp1527;
    panda$core$String* $tmp1528;
    panda$core$String* $tmp1529;
    panda$core$String* $tmp1530;
    panda$core$String* $tmp1531;
    panda$core$String* $tmp1535;
    org$pandalanguage$pandac$IRNode* value1546 = NULL;
    org$pandalanguage$pandac$Type* type1548 = NULL;
    org$pandalanguage$pandac$Type* $tmp1550;
    org$pandalanguage$pandac$Type* $tmp1553;
    panda$core$String* $tmp1556;
    panda$core$String* $tmp1557;
    panda$core$String* $tmp1558;
    panda$core$String* $tmp1559;
    panda$core$String* $tmp1560;
    panda$core$String* $tmp1570;
    panda$core$String* $tmp1571;
    panda$core$String* $tmp1572;
    panda$core$String* $tmp1573;
    panda$core$String* $tmp1574;
    org$pandalanguage$pandac$ChoiceEntry* ce1585 = NULL;
    panda$core$String* $tmp1587;
    panda$core$String* $tmp1588;
    org$pandalanguage$pandac$IRNode* base1593 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce1595 = NULL;
    panda$core$Int64 field1597;
    panda$core$String* $tmp1599;
    panda$core$String* $tmp1600;
    panda$core$String* $tmp1601;
    panda$core$String* $tmp1602;
    panda$core$String* $tmp1603;
    panda$core$String* $tmp1604;
    panda$core$String* $tmp1605;
    panda$core$Object* $tmp1613;
    org$pandalanguage$pandac$Type* type1621 = NULL;
    org$pandalanguage$pandac$IRNode* call1623 = NULL;
    org$pandalanguage$pandac$IRNode* $match$474_171628 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1629;
    panda$collections$ImmutableArray* args1631 = NULL;
    panda$core$String* $tmp1633;
    panda$core$String* $tmp1634;
    panda$core$String* $tmp1635;
    panda$core$String* $tmp1636;
    panda$core$String* $tmp1637;
    panda$core$String* $tmp1641;
    org$pandalanguage$pandac$Type* Type1654 = NULL;
    panda$core$String* $tmp1656;
    panda$core$String* label1661 = NULL;
    panda$core$String* $tmp1663;
    panda$core$String* $tmp1664;
    panda$core$String* $tmp1665;
    panda$core$String* $tmp1672;
    org$pandalanguage$pandac$IRNode* target1677 = NULL;
    org$pandalanguage$pandac$IRNode* value1679 = NULL;
    panda$core$String* $tmp1681;
    panda$core$String* $tmp1682;
    panda$core$String* $tmp1683;
    panda$core$String* $tmp1684;
    panda$core$String* $tmp1685;
    panda$core$String* $tmp1695;
    panda$core$String* $tmp1696;
    panda$core$String* label1702 = NULL;
    panda$collections$ImmutableArray* statements1704 = NULL;
    org$pandalanguage$pandac$IRNode* test1706 = NULL;
    panda$core$MutableString* result1711 = NULL;
    panda$core$MutableString* $tmp1712;
    panda$core$MutableString* $tmp1713;
    panda$core$String* $tmp1715;
    panda$core$String* $tmp1716;
    panda$collections$Iterator* Iter$498$171724 = NULL;
    panda$collections$Iterator* $tmp1725;
    panda$collections$Iterator* $tmp1726;
    org$pandalanguage$pandac$IRNode* s1742 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1743;
    panda$core$Object* $tmp1744;
    panda$core$String* $tmp1749;
    panda$core$String* $tmp1754;
    panda$core$String* $tmp1755;
    panda$core$String* $tmp1760;
    panda$core$String* $tmp1761;
    org$pandalanguage$pandac$IRNode* m1768 = NULL;
    panda$collections$ImmutableArray* args1770 = NULL;
    panda$core$String* $tmp1772;
    panda$core$String* $tmp1773;
    panda$core$String* $tmp1774;
    panda$core$String* $tmp1775;
    panda$core$String* $tmp1776;
    panda$core$String* $tmp1781;
    org$pandalanguage$pandac$IRNode* expr1793 = NULL;
    org$pandalanguage$pandac$IRNode* stmt1795 = NULL;
    panda$core$String* $tmp1797;
    panda$core$String* $tmp1798;
    panda$core$String* $tmp1799;
    panda$core$String* $tmp1800;
    panda$core$String* $tmp1801;
    org$pandalanguage$pandac$IRNode* base1812 = NULL;
    org$pandalanguage$pandac$FieldDecl* field1814 = NULL;
    panda$core$String* $tmp1816;
    panda$core$String* $tmp1817;
    panda$core$String* $tmp1818;
    panda$core$String* $tmp1819;
    panda$core$String* $tmp1820;
    org$pandalanguage$pandac$IRNode* test1831 = NULL;
    panda$collections$ImmutableArray* ifTrue1833 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse1835 = NULL;
    panda$core$MutableString* result1840 = NULL;
    panda$core$MutableString* $tmp1841;
    panda$core$MutableString* $tmp1842;
    panda$core$String* $tmp1844;
    panda$core$String* $tmp1845;
    panda$collections$Iterator* Iter$511$171853 = NULL;
    panda$collections$Iterator* $tmp1854;
    panda$collections$Iterator* $tmp1855;
    org$pandalanguage$pandac$IRNode* s1871 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1872;
    panda$core$Object* $tmp1873;
    panda$core$String* $tmp1878;
    panda$core$Char8 $tmp1883;
    panda$core$String* $tmp1884;
    panda$core$String* $tmp1885;
    panda$core$String* $tmp1890;
    panda$core$String* $tmp1891;
    panda$core$UInt64 value1898;
    panda$core$String* $tmp1900;
    panda$core$String* $tmp1901;
    org$pandalanguage$pandac$IRNode* value1906 = NULL;
    panda$core$String* $tmp1908;
    panda$core$String* $tmp1909;
    panda$core$String* $tmp1910;
    org$pandalanguage$pandac$IRNode* value1918 = NULL;
    panda$core$String* $tmp1920;
    panda$core$String* $tmp1921;
    panda$core$String* $tmp1922;
    panda$core$String* label1930 = NULL;
    panda$collections$ImmutableArray* statements1932 = NULL;
    panda$core$MutableString* result1937 = NULL;
    panda$core$MutableString* $tmp1938;
    panda$core$MutableString* $tmp1939;
    panda$core$String* $tmp1941;
    panda$core$String* $tmp1942;
    panda$collections$Iterator* Iter$531$171950 = NULL;
    panda$collections$Iterator* $tmp1951;
    panda$collections$Iterator* $tmp1952;
    org$pandalanguage$pandac$IRNode* s1968 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1969;
    panda$core$Object* $tmp1970;
    panda$core$String* $tmp1975;
    panda$core$Char8 $tmp1980;
    panda$core$String* $tmp1981;
    panda$core$String* $tmp1982;
    org$pandalanguage$pandac$IRNode* value1989 = NULL;
    panda$collections$ImmutableArray* whens1991 = NULL;
    panda$collections$ImmutableArray* other1993 = NULL;
    panda$core$MutableString* result1998 = NULL;
    panda$core$MutableString* $tmp1999;
    panda$core$MutableString* $tmp2000;
    panda$core$String* $tmp2002;
    panda$core$String* $tmp2003;
    panda$collections$Iterator* Iter$538$172011 = NULL;
    panda$collections$Iterator* $tmp2012;
    panda$collections$Iterator* $tmp2013;
    org$pandalanguage$pandac$IRNode* w2029 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2030;
    panda$core$Object* $tmp2031;
    panda$core$String* $tmp2036;
    panda$collections$Iterator* Iter$543$212045 = NULL;
    panda$collections$Iterator* $tmp2046;
    panda$collections$Iterator* $tmp2047;
    org$pandalanguage$pandac$IRNode* s2063 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2064;
    panda$core$Object* $tmp2065;
    panda$core$String* $tmp2070;
    panda$core$Char8 $tmp2075;
    panda$core$String* $tmp2076;
    panda$core$String* $tmp2077;
    org$pandalanguage$pandac$IRNode* target2084 = NULL;
    org$pandalanguage$pandac$MethodRef* m2086 = NULL;
    panda$core$String* $tmp2088;
    panda$core$String* $tmp2089;
    panda$core$String* $tmp2090;
    panda$core$String* $tmp2091;
    panda$core$String* $tmp2092;
    panda$core$String* $tmp2102;
    panda$core$UInt64 value2106;
    panda$core$String* $tmp2108;
    panda$core$String* $tmp2109;
    panda$core$Object* $tmp2111;
    panda$core$String* $tmp2117;
    org$pandalanguage$pandac$parser$Token$Kind op2122;
    org$pandalanguage$pandac$IRNode* base2124 = NULL;
    panda$core$String* $tmp2126;
    panda$core$String* $tmp2127;
    panda$core$String* $tmp2128;
    panda$core$String* $tmp2129;
    panda$core$String* $tmp2130;
    panda$core$Object* $tmp2131;
    panda$core$String* label2143 = NULL;
    org$pandalanguage$pandac$IRNode* target2145 = NULL;
    org$pandalanguage$pandac$IRNode* list2147 = NULL;
    panda$collections$ImmutableArray* statements2149 = NULL;
    panda$core$MutableString* result2154 = NULL;
    panda$core$MutableString* $tmp2155;
    panda$core$MutableString* $tmp2156;
    panda$core$String* $tmp2158;
    panda$core$String* $tmp2159;
    panda$core$String* $tmp2163;
    panda$core$String* $tmp2164;
    panda$core$String* $tmp2165;
    panda$core$String* $tmp2166;
    panda$collections$Iterator* Iter$566$172177 = NULL;
    panda$collections$Iterator* $tmp2178;
    panda$collections$Iterator* $tmp2179;
    org$pandalanguage$pandac$IRNode* s2195 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2196;
    panda$core$Object* $tmp2197;
    panda$core$String* $tmp2202;
    panda$core$Char8 $tmp2207;
    panda$core$String* $tmp2208;
    panda$core$String* $tmp2209;
    panda$core$Real64 value2216;
    panda$core$String* $tmp2218;
    panda$core$String* $tmp2219;
    org$pandalanguage$pandac$IRNode* value2224 = NULL;
    panda$core$String* $tmp2226;
    panda$core$String* $tmp2227;
    panda$core$String* $tmp2228;
    panda$core$String* $tmp2235;
    org$pandalanguage$pandac$Type* type2240 = NULL;
    panda$core$Int64 id2242;
    panda$core$String* $tmp2244;
    panda$core$String* $tmp2245;
    panda$core$String* $tmp2246;
    panda$core$Object* $tmp2248;
    org$pandalanguage$pandac$IRNode* base2256 = NULL;
    panda$core$Int64 id2258;
    panda$core$String* $tmp2260;
    panda$core$String* $tmp2261;
    panda$core$String* $tmp2262;
    panda$core$String* $tmp2263;
    panda$core$String* $tmp2264;
    panda$core$Object* $tmp2266;
    panda$core$String* $tmp2277;
    panda$core$String* str2282 = NULL;
    panda$core$String* $tmp2284;
    panda$core$String* $tmp2288;
    org$pandalanguage$pandac$IRNode* test2293 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue2295 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse2297 = NULL;
    panda$core$String* $tmp2299;
    panda$core$String* $tmp2300;
    panda$core$String* $tmp2301;
    panda$core$String* $tmp2302;
    panda$core$String* $tmp2303;
    panda$core$String* $tmp2304;
    panda$core$String* $tmp2305;
    org$pandalanguage$pandac$Type* type2319 = NULL;
    panda$core$String* $tmp2321;
    panda$core$String* $tmp2322;
    panda$core$String* name2327 = NULL;
    panda$core$String* $tmp2329;
    org$pandalanguage$pandac$IRNode* base2333 = NULL;
    panda$collections$ImmutableArray* args2335 = NULL;
    panda$core$String* $tmp2337;
    panda$core$String* $tmp2338;
    panda$core$String* $tmp2339;
    panda$core$String* $tmp2340;
    panda$core$String* $tmp2341;
    panda$core$String* $tmp2346;
    org$pandalanguage$pandac$IRNode* target2357 = NULL;
    panda$collections$ImmutableArray* methods2359 = NULL;
    panda$collections$ImmutableArray* args2361 = NULL;
    panda$core$String* $tmp2363;
    panda$core$String* $tmp2364;
    panda$core$String* $tmp2365;
    panda$core$String* $tmp2366;
    panda$core$String* $tmp2367;
    panda$core$String* $tmp2368;
    panda$core$String* $tmp2369;
    panda$core$Object* $tmp2374;
    panda$core$String* $tmp2379;
    org$pandalanguage$pandac$IRNode* target2390 = NULL;
    panda$collections$ImmutableArray* methods2392 = NULL;
    panda$core$String* $tmp2394;
    panda$core$String* $tmp2395;
    panda$core$String* $tmp2396;
    panda$core$String* $tmp2397;
    panda$core$String* $tmp2398;
    panda$core$Object* $tmp2403;
    org$pandalanguage$pandac$IRNode* start2411 = NULL;
    org$pandalanguage$pandac$IRNode* end2413 = NULL;
    panda$core$Bit inclusive2415;
    org$pandalanguage$pandac$IRNode* step2417 = NULL;
    panda$core$MutableString* result2422 = NULL;
    panda$core$MutableString* $tmp2423;
    panda$core$MutableString* $tmp2424;
    panda$core$String* $tmp2428;
    panda$core$String* $tmp2429;
    panda$core$String* $tmp2434;
    panda$core$String* $tmp2435;
    org$pandalanguage$pandac$Variable$Kind kind2442;
    panda$collections$ImmutableArray* decls2444 = NULL;
    panda$core$MutableString* result2449 = NULL;
    panda$core$MutableString* $tmp2450;
    panda$core$MutableString* $tmp2451;
    org$pandalanguage$pandac$Variable$Kind $match$620_172453;
    panda$core$String* $tmp2462;
    panda$core$String* $tmp2467;
    panda$core$String* $tmp2468;
    org$pandalanguage$pandac$Variable* variable2475 = NULL;
    panda$core$String* $tmp2477;
    panda$collections$ImmutableArray* tests2481 = NULL;
    panda$collections$ImmutableArray* statements2483 = NULL;
    panda$core$String* $tmp2485;
    panda$core$String* $tmp2486;
    panda$core$String* $tmp2487;
    panda$core$String* $tmp2488;
    panda$core$String* $tmp2489;
    panda$core$String* $tmp2491;
    panda$core$String* $tmp2499;
    panda$core$String* label2511 = NULL;
    org$pandalanguage$pandac$IRNode* test2513 = NULL;
    panda$collections$ImmutableArray* statements2515 = NULL;
    panda$core$MutableString* result2520 = NULL;
    panda$core$MutableString* $tmp2521;
    panda$core$MutableString* $tmp2522;
    panda$core$String* $tmp2524;
    panda$core$String* $tmp2525;
    panda$core$String* $tmp2529;
    panda$core$String* $tmp2530;
    panda$collections$Iterator* Iter$638$172538 = NULL;
    panda$collections$Iterator* $tmp2539;
    panda$collections$Iterator* $tmp2540;
    org$pandalanguage$pandac$IRNode* s2556 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2557;
    panda$core$Object* $tmp2558;
    panda$core$String* $tmp2563;
    panda$core$Char8 $tmp2568;
    panda$core$String* $tmp2569;
    panda$core$String* $tmp2570;
    int $tmp1293;
    {
        $tmp1295 = self;
        $match$427_91294 = $tmp1295;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1295));
        panda$core$Bit $tmp1296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp1296.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1298 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 16));
            test1297 = *$tmp1298;
            org$pandalanguage$pandac$IRNode** $tmp1300 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 24));
            msg1299 = *$tmp1300;
            if (((panda$core$Bit) { msg1299 != NULL }).value) {
            {
                panda$core$String* $tmp1308 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1307, ((panda$core$Object*) test1297));
                $tmp1306 = $tmp1308;
                panda$core$String* $tmp1310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1306, &$s1309);
                $tmp1305 = $tmp1310;
                panda$core$String* $tmp1311 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1305, ((panda$core$Object*) msg1299));
                $tmp1304 = $tmp1311;
                panda$core$String* $tmp1313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1304, &$s1312);
                $tmp1303 = $tmp1313;
                $tmp1302 = $tmp1303;
                $returnValue1301 = $tmp1302;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1302));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1303));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1304));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1305));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1306));
                $tmp1293 = 0;
                goto $l1291;
                $l1314:;
                return $returnValue1301;
            }
            }
            panda$core$String* $tmp1320 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1319, ((panda$core$Object*) test1297));
            $tmp1318 = $tmp1320;
            panda$core$String* $tmp1322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1318, &$s1321);
            $tmp1317 = $tmp1322;
            $tmp1316 = $tmp1317;
            $returnValue1301 = $tmp1316;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1316));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1317));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1318));
            $tmp1293 = 1;
            goto $l1291;
            $l1323:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1325.value) {
        {
            $tmp1326 = &$s1327;
            $returnValue1301 = $tmp1326;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1326));
            $tmp1293 = 2;
            goto $l1291;
            $l1328:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1330.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1332 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 24));
            left1331 = *$tmp1332;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1334 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$427_91294->$data + 32));
            op1333 = *$tmp1334;
            org$pandalanguage$pandac$IRNode** $tmp1336 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 40));
            right1335 = *$tmp1336;
            panda$core$String* $tmp1345 = (($fn1344) left1331->$class->vtable[0])(left1331);
            $tmp1343 = $tmp1345;
            panda$core$String* $tmp1347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1343, &$s1346);
            $tmp1342 = $tmp1347;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1349;
            $tmp1349 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1349->value = op1333;
            $tmp1348 = ((panda$core$Object*) $tmp1349);
            panda$core$String* $tmp1350 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1342, $tmp1348);
            $tmp1341 = $tmp1350;
            panda$core$String* $tmp1352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1341, &$s1351);
            $tmp1340 = $tmp1352;
            panda$core$String* $tmp1353 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1340, ((panda$core$Object*) right1335));
            $tmp1339 = $tmp1353;
            panda$core$String* $tmp1355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1339, &$s1354);
            $tmp1338 = $tmp1355;
            $tmp1337 = $tmp1338;
            $returnValue1301 = $tmp1337;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1337));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1338));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1339));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1340));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1341));
            panda$core$Panda$unref$panda$core$Object($tmp1348);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1342));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1343));
            $tmp1293 = 3;
            goto $l1291;
            $l1356:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp1358.value) {
        {
            panda$core$Bit* $tmp1360 = ((panda$core$Bit*) ((char*) $match$427_91294->$data + 24));
            bit1359 = *$tmp1360;
            panda$core$String* $tmp1363 = panda$core$Bit$convert$R$panda$core$String(bit1359);
            $tmp1362 = $tmp1363;
            $tmp1361 = $tmp1362;
            $returnValue1301 = $tmp1361;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1361));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1362));
            $tmp1293 = 4;
            goto $l1291;
            $l1364:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp1366.value) {
        {
            panda$collections$ImmutableArray** $tmp1368 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 16));
            statements1367 = *$tmp1368;
            int $tmp1371;
            {
                panda$core$MutableString* $tmp1375 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1375, &$s1376);
                $tmp1374 = $tmp1375;
                $tmp1373 = $tmp1374;
                result1372 = $tmp1373;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1373));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1374));
                {
                    int $tmp1379;
                    {
                        ITable* $tmp1383 = ((panda$collections$Iterable*) statements1367)->$class->itable;
                        while ($tmp1383->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1383 = $tmp1383->next;
                        }
                        $fn1385 $tmp1384 = $tmp1383->methods[0];
                        panda$collections$Iterator* $tmp1386 = $tmp1384(((panda$collections$Iterable*) statements1367));
                        $tmp1382 = $tmp1386;
                        $tmp1381 = $tmp1382;
                        Iter$441$171380 = $tmp1381;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1381));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1382));
                        $l1387:;
                        ITable* $tmp1390 = Iter$441$171380->$class->itable;
                        while ($tmp1390->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1390 = $tmp1390->next;
                        }
                        $fn1392 $tmp1391 = $tmp1390->methods[0];
                        panda$core$Bit $tmp1393 = $tmp1391(Iter$441$171380);
                        panda$core$Bit $tmp1394 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1393);
                        bool $tmp1389 = $tmp1394.value;
                        if (!$tmp1389) goto $l1388;
                        {
                            int $tmp1397;
                            {
                                ITable* $tmp1401 = Iter$441$171380->$class->itable;
                                while ($tmp1401->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1401 = $tmp1401->next;
                                }
                                $fn1403 $tmp1402 = $tmp1401->methods[1];
                                panda$core$Object* $tmp1404 = $tmp1402(Iter$441$171380);
                                $tmp1400 = $tmp1404;
                                $tmp1399 = ((org$pandalanguage$pandac$IRNode*) $tmp1400);
                                s1398 = $tmp1399;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1399));
                                panda$core$Panda$unref$panda$core$Object($tmp1400);
                                panda$core$String* $tmp1407 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1398), &$s1406);
                                $tmp1405 = $tmp1407;
                                panda$core$MutableString$append$panda$core$String(result1372, $tmp1405);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1405));
                            }
                            $tmp1397 = -1;
                            goto $l1395;
                            $l1395:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1398));
                            s1398 = NULL;
                            switch ($tmp1397) {
                                case -1: goto $l1408;
                            }
                            $l1408:;
                        }
                        goto $l1387;
                        $l1388:;
                    }
                    $tmp1379 = -1;
                    goto $l1377;
                    $l1377:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$441$171380));
                    Iter$441$171380 = NULL;
                    switch ($tmp1379) {
                        case -1: goto $l1409;
                    }
                    $l1409:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1410, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1372, $tmp1410);
                panda$core$String* $tmp1413 = panda$core$MutableString$finish$R$panda$core$String(result1372);
                $tmp1412 = $tmp1413;
                $tmp1411 = $tmp1412;
                $returnValue1301 = $tmp1411;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1411));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1412));
                $tmp1371 = 0;
                goto $l1369;
                $l1414:;
                $tmp1293 = 5;
                goto $l1291;
                $l1415:;
                return $returnValue1301;
            }
            $l1369:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1372));
            result1372 = NULL;
            switch ($tmp1371) {
                case 0: goto $l1414;
            }
            $l1417:;
        }
        }
        else {
        panda$core$Bit $tmp1418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp1418.value) {
        {
            panda$collections$ImmutableArray** $tmp1420 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 16));
            statements1419 = *$tmp1420;
            panda$collections$ImmutableArray** $tmp1422 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 24));
            finally1421 = *$tmp1422;
            int $tmp1425;
            {
                panda$core$MutableString* $tmp1429 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1429, &$s1430);
                $tmp1428 = $tmp1429;
                $tmp1427 = $tmp1428;
                result1426 = $tmp1427;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1427));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1428));
                {
                    int $tmp1433;
                    {
                        ITable* $tmp1437 = ((panda$collections$Iterable*) statements1419)->$class->itable;
                        while ($tmp1437->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1437 = $tmp1437->next;
                        }
                        $fn1439 $tmp1438 = $tmp1437->methods[0];
                        panda$collections$Iterator* $tmp1440 = $tmp1438(((panda$collections$Iterable*) statements1419));
                        $tmp1436 = $tmp1440;
                        $tmp1435 = $tmp1436;
                        Iter$448$171434 = $tmp1435;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1435));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1436));
                        $l1441:;
                        ITable* $tmp1444 = Iter$448$171434->$class->itable;
                        while ($tmp1444->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1444 = $tmp1444->next;
                        }
                        $fn1446 $tmp1445 = $tmp1444->methods[0];
                        panda$core$Bit $tmp1447 = $tmp1445(Iter$448$171434);
                        panda$core$Bit $tmp1448 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1447);
                        bool $tmp1443 = $tmp1448.value;
                        if (!$tmp1443) goto $l1442;
                        {
                            int $tmp1451;
                            {
                                ITable* $tmp1455 = Iter$448$171434->$class->itable;
                                while ($tmp1455->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1455 = $tmp1455->next;
                                }
                                $fn1457 $tmp1456 = $tmp1455->methods[1];
                                panda$core$Object* $tmp1458 = $tmp1456(Iter$448$171434);
                                $tmp1454 = $tmp1458;
                                $tmp1453 = ((org$pandalanguage$pandac$IRNode*) $tmp1454);
                                s1452 = $tmp1453;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1453));
                                panda$core$Panda$unref$panda$core$Object($tmp1454);
                                panda$core$String* $tmp1461 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1452), &$s1460);
                                $tmp1459 = $tmp1461;
                                panda$core$MutableString$append$panda$core$String(result1426, $tmp1459);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1459));
                            }
                            $tmp1451 = -1;
                            goto $l1449;
                            $l1449:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1452));
                            s1452 = NULL;
                            switch ($tmp1451) {
                                case -1: goto $l1462;
                            }
                            $l1462:;
                        }
                        goto $l1441;
                        $l1442:;
                    }
                    $tmp1433 = -1;
                    goto $l1431;
                    $l1431:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$448$171434));
                    Iter$448$171434 = NULL;
                    switch ($tmp1433) {
                        case -1: goto $l1463;
                    }
                    $l1463:;
                }
                panda$core$MutableString$append$panda$core$String(result1426, &$s1464);
                {
                    int $tmp1467;
                    {
                        ITable* $tmp1471 = ((panda$collections$Iterable*) finally1421)->$class->itable;
                        while ($tmp1471->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1471 = $tmp1471->next;
                        }
                        $fn1473 $tmp1472 = $tmp1471->methods[0];
                        panda$collections$Iterator* $tmp1474 = $tmp1472(((panda$collections$Iterable*) finally1421));
                        $tmp1470 = $tmp1474;
                        $tmp1469 = $tmp1470;
                        Iter$452$171468 = $tmp1469;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1469));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1470));
                        $l1475:;
                        ITable* $tmp1478 = Iter$452$171468->$class->itable;
                        while ($tmp1478->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1478 = $tmp1478->next;
                        }
                        $fn1480 $tmp1479 = $tmp1478->methods[0];
                        panda$core$Bit $tmp1481 = $tmp1479(Iter$452$171468);
                        panda$core$Bit $tmp1482 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1481);
                        bool $tmp1477 = $tmp1482.value;
                        if (!$tmp1477) goto $l1476;
                        {
                            int $tmp1485;
                            {
                                ITable* $tmp1489 = Iter$452$171468->$class->itable;
                                while ($tmp1489->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1489 = $tmp1489->next;
                                }
                                $fn1491 $tmp1490 = $tmp1489->methods[1];
                                panda$core$Object* $tmp1492 = $tmp1490(Iter$452$171468);
                                $tmp1488 = $tmp1492;
                                $tmp1487 = ((org$pandalanguage$pandac$IRNode*) $tmp1488);
                                s1486 = $tmp1487;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1487));
                                panda$core$Panda$unref$panda$core$Object($tmp1488);
                                panda$core$String* $tmp1495 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1486), &$s1494);
                                $tmp1493 = $tmp1495;
                                panda$core$MutableString$append$panda$core$String(result1426, $tmp1493);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1493));
                            }
                            $tmp1485 = -1;
                            goto $l1483;
                            $l1483:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1486));
                            s1486 = NULL;
                            switch ($tmp1485) {
                                case -1: goto $l1496;
                            }
                            $l1496:;
                        }
                        goto $l1475;
                        $l1476:;
                    }
                    $tmp1467 = -1;
                    goto $l1465;
                    $l1465:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$452$171468));
                    Iter$452$171468 = NULL;
                    switch ($tmp1467) {
                        case -1: goto $l1497;
                    }
                    $l1497:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1498, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1426, $tmp1498);
                panda$core$String* $tmp1501 = panda$core$MutableString$finish$R$panda$core$String(result1426);
                $tmp1500 = $tmp1501;
                $tmp1499 = $tmp1500;
                $returnValue1301 = $tmp1499;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1499));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1500));
                $tmp1425 = 0;
                goto $l1423;
                $l1502:;
                $tmp1293 = 6;
                goto $l1291;
                $l1503:;
                return $returnValue1301;
            }
            $l1423:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1426));
            result1426 = NULL;
            switch ($tmp1425) {
                case 0: goto $l1502;
            }
            $l1505:;
        }
        }
        else {
        panda$core$Bit $tmp1506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp1506.value) {
        {
            panda$core$String** $tmp1508 = ((panda$core$String**) ((char*) $match$427_91294->$data + 16));
            label1507 = *$tmp1508;
            if (((panda$core$Bit) { label1507 != NULL }).value) {
            {
                panda$core$String* $tmp1513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1512, label1507);
                $tmp1511 = $tmp1513;
                panda$core$String* $tmp1515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1511, &$s1514);
                $tmp1510 = $tmp1515;
                $tmp1509 = $tmp1510;
                $returnValue1301 = $tmp1509;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1509));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1510));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1511));
                $tmp1293 = 7;
                goto $l1291;
                $l1516:;
                return $returnValue1301;
            }
            }
            $tmp1518 = &$s1519;
            $returnValue1301 = $tmp1518;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1518));
            $tmp1293 = 8;
            goto $l1291;
            $l1520:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp1522.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp1524 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$427_91294->$data + 24));
            m1523 = *$tmp1524;
            panda$collections$ImmutableArray** $tmp1526 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 32));
            args1525 = *$tmp1526;
            panda$core$String* $tmp1532 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) m1523->value)->name);
            $tmp1531 = $tmp1532;
            panda$core$String* $tmp1534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1531, &$s1533);
            $tmp1530 = $tmp1534;
            ITable* $tmp1536 = ((panda$collections$ListView*) args1525)->$class->itable;
            while ($tmp1536->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1536 = $tmp1536->next;
            }
            $fn1538 $tmp1537 = $tmp1536->methods[1];
            panda$core$String* $tmp1539 = $tmp1537(((panda$collections$ListView*) args1525));
            $tmp1535 = $tmp1539;
            panda$core$String* $tmp1540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1530, $tmp1535);
            $tmp1529 = $tmp1540;
            panda$core$String* $tmp1542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1529, &$s1541);
            $tmp1528 = $tmp1542;
            $tmp1527 = $tmp1528;
            $returnValue1301 = $tmp1527;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1527));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1528));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1529));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1535));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1530));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1531));
            $tmp1293 = 9;
            goto $l1291;
            $l1543:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp1545.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1547 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 16));
            value1546 = *$tmp1547;
            org$pandalanguage$pandac$Type** $tmp1549 = ((org$pandalanguage$pandac$Type**) ((char*) $match$427_91294->$data + 24));
            type1548 = *$tmp1549;
            org$pandalanguage$pandac$Type* $tmp1552 = (($fn1551) value1546->$class->vtable[2])(value1546);
            $tmp1550 = $tmp1552;
            org$pandalanguage$pandac$Type* $tmp1554 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            $tmp1553 = $tmp1554;
            panda$core$Bit $tmp1555 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1550, $tmp1553);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1553));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1550));
            if ($tmp1555.value) {
            {
                panda$core$String* $tmp1562 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1561, ((panda$core$Object*) value1546));
                $tmp1560 = $tmp1562;
                panda$core$String* $tmp1564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1560, &$s1563);
                $tmp1559 = $tmp1564;
                panda$core$String* $tmp1565 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1559, ((panda$core$Object*) type1548));
                $tmp1558 = $tmp1565;
                panda$core$String* $tmp1567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1558, &$s1566);
                $tmp1557 = $tmp1567;
                $tmp1556 = $tmp1557;
                $returnValue1301 = $tmp1556;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1556));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1557));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1558));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1559));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1560));
                $tmp1293 = 10;
                goto $l1291;
                $l1568:;
                return $returnValue1301;
            }
            }
            panda$core$String* $tmp1576 = (($fn1575) value1546->$class->vtable[0])(value1546);
            $tmp1574 = $tmp1576;
            panda$core$String* $tmp1578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1574, &$s1577);
            $tmp1573 = $tmp1578;
            panda$core$String* $tmp1579 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1573, ((panda$core$Object*) type1548));
            $tmp1572 = $tmp1579;
            panda$core$String* $tmp1581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1572, &$s1580);
            $tmp1571 = $tmp1581;
            $tmp1570 = $tmp1571;
            $returnValue1301 = $tmp1570;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1570));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1571));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1572));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1573));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1574));
            $tmp1293 = 11;
            goto $l1291;
            $l1582:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1584.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp1586 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$427_91294->$data + 16));
            ce1585 = *$tmp1586;
            panda$core$String* $tmp1589 = org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(ce1585);
            $tmp1588 = $tmp1589;
            $tmp1587 = $tmp1588;
            $returnValue1301 = $tmp1587;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1587));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1588));
            $tmp1293 = 12;
            goto $l1291;
            $l1590:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp1592.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1594 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 16));
            base1593 = *$tmp1594;
            org$pandalanguage$pandac$ChoiceEntry** $tmp1596 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$427_91294->$data + 24));
            ce1595 = *$tmp1596;
            panda$core$Int64* $tmp1598 = ((panda$core$Int64*) ((char*) $match$427_91294->$data + 32));
            field1597 = *$tmp1598;
            panda$core$String* $tmp1607 = (($fn1606) base1593->$class->vtable[0])(base1593);
            $tmp1605 = $tmp1607;
            panda$core$String* $tmp1609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1605, &$s1608);
            $tmp1604 = $tmp1609;
            panda$core$String* $tmp1610 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1604, ((panda$core$Object*) ce1595));
            $tmp1603 = $tmp1610;
            panda$core$String* $tmp1612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1603, &$s1611);
            $tmp1602 = $tmp1612;
            panda$core$Int64$wrapper* $tmp1614;
            $tmp1614 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1614->value = field1597;
            $tmp1613 = ((panda$core$Object*) $tmp1614);
            panda$core$String* $tmp1615 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1602, $tmp1613);
            $tmp1601 = $tmp1615;
            panda$core$String* $tmp1617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1601, &$s1616);
            $tmp1600 = $tmp1617;
            $tmp1599 = $tmp1600;
            $returnValue1301 = $tmp1599;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1599));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1600));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1601));
            panda$core$Panda$unref$panda$core$Object($tmp1613);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1602));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1603));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1604));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1605));
            $tmp1293 = 13;
            goto $l1291;
            $l1618:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1620.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1622 = ((org$pandalanguage$pandac$Type**) ((char*) $match$427_91294->$data + 16));
            type1621 = *$tmp1622;
            org$pandalanguage$pandac$IRNode** $tmp1624 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 24));
            call1623 = *$tmp1624;
            int $tmp1627;
            {
                $tmp1629 = call1623;
                $match$474_171628 = $tmp1629;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1629));
                panda$core$Bit $tmp1630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$474_171628->$rawValue, ((panda$core$Int64) { 7 }));
                if ($tmp1630.value) {
                {
                    panda$collections$ImmutableArray** $tmp1632 = ((panda$collections$ImmutableArray**) ((char*) $match$474_171628->$data + 32));
                    args1631 = *$tmp1632;
                    panda$core$String* $tmp1638 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type1621);
                    $tmp1637 = $tmp1638;
                    panda$core$String* $tmp1640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1637, &$s1639);
                    $tmp1636 = $tmp1640;
                    ITable* $tmp1642 = ((panda$collections$ListView*) args1631)->$class->itable;
                    while ($tmp1642->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp1642 = $tmp1642->next;
                    }
                    $fn1644 $tmp1643 = $tmp1642->methods[1];
                    panda$core$String* $tmp1645 = $tmp1643(((panda$collections$ListView*) args1631));
                    $tmp1641 = $tmp1645;
                    panda$core$String* $tmp1646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1636, $tmp1641);
                    $tmp1635 = $tmp1646;
                    panda$core$String* $tmp1648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1635, &$s1647);
                    $tmp1634 = $tmp1648;
                    $tmp1633 = $tmp1634;
                    $returnValue1301 = $tmp1633;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1633));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1634));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1635));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1641));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1636));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1637));
                    $tmp1627 = 0;
                    goto $l1625;
                    $l1649:;
                    $tmp1293 = 14;
                    goto $l1291;
                    $l1650:;
                    return $returnValue1301;
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1627 = -1;
            goto $l1625;
            $l1625:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1629));
            switch ($tmp1627) {
                case -1: goto $l1652;
                case 0: goto $l1649;
            }
            $l1652:;
        }
        }
        else {
        panda$core$Bit $tmp1653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1653.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1655 = ((org$pandalanguage$pandac$Type**) ((char*) $match$427_91294->$data + 16));
            Type1654 = *$tmp1655;
            $tmp1656 = &$s1657;
            $returnValue1301 = $tmp1656;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1656));
            $tmp1293 = 15;
            goto $l1291;
            $l1658:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1660.value) {
        {
            panda$core$String** $tmp1662 = ((panda$core$String**) ((char*) $match$427_91294->$data + 16));
            label1661 = *$tmp1662;
            if (((panda$core$Bit) { label1661 != NULL }).value) {
            {
                panda$core$String* $tmp1667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1666, label1661);
                $tmp1665 = $tmp1667;
                panda$core$String* $tmp1669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1665, &$s1668);
                $tmp1664 = $tmp1669;
                $tmp1663 = $tmp1664;
                $returnValue1301 = $tmp1663;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1663));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1664));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1665));
                $tmp1293 = 16;
                goto $l1291;
                $l1670:;
                return $returnValue1301;
            }
            }
            $tmp1672 = &$s1673;
            $returnValue1301 = $tmp1672;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1672));
            $tmp1293 = 17;
            goto $l1291;
            $l1674:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1676.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1678 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 0));
            target1677 = *$tmp1678;
            org$pandalanguage$pandac$IRNode** $tmp1680 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 8));
            value1679 = *$tmp1680;
            if (((panda$core$Bit) { value1679 != NULL }).value) {
            {
                panda$core$String* $tmp1687 = (($fn1686) target1677->$class->vtable[0])(target1677);
                $tmp1685 = $tmp1687;
                panda$core$String* $tmp1689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1685, &$s1688);
                $tmp1684 = $tmp1689;
                panda$core$String* $tmp1690 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1684, ((panda$core$Object*) value1679));
                $tmp1683 = $tmp1690;
                panda$core$String* $tmp1692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1683, &$s1691);
                $tmp1682 = $tmp1692;
                $tmp1681 = $tmp1682;
                $returnValue1301 = $tmp1681;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1681));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1682));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1683));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1684));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1685));
                $tmp1293 = 18;
                goto $l1291;
                $l1693:;
                return $returnValue1301;
            }
            }
            panda$core$String* $tmp1698 = (($fn1697) target1677->$class->vtable[0])(target1677);
            $tmp1696 = $tmp1698;
            $tmp1695 = $tmp1696;
            $returnValue1301 = $tmp1695;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1695));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1696));
            $tmp1293 = 19;
            goto $l1291;
            $l1699:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1701.value) {
        {
            panda$core$String** $tmp1703 = ((panda$core$String**) ((char*) $match$427_91294->$data + 16));
            label1702 = *$tmp1703;
            panda$collections$ImmutableArray** $tmp1705 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 24));
            statements1704 = *$tmp1705;
            org$pandalanguage$pandac$IRNode** $tmp1707 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 32));
            test1706 = *$tmp1707;
            int $tmp1710;
            {
                panda$core$MutableString* $tmp1714 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1714);
                $tmp1713 = $tmp1714;
                $tmp1712 = $tmp1713;
                result1711 = $tmp1712;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1712));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1713));
                if (((panda$core$Bit) { label1702 != NULL }).value) {
                {
                    panda$core$String* $tmp1717 = panda$core$String$convert$R$panda$core$String(label1702);
                    $tmp1716 = $tmp1717;
                    panda$core$String* $tmp1719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1716, &$s1718);
                    $tmp1715 = $tmp1719;
                    panda$core$MutableString$append$panda$core$String(result1711, $tmp1715);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1715));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1716));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1711, &$s1720);
                {
                    int $tmp1723;
                    {
                        ITable* $tmp1727 = ((panda$collections$Iterable*) statements1704)->$class->itable;
                        while ($tmp1727->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1727 = $tmp1727->next;
                        }
                        $fn1729 $tmp1728 = $tmp1727->methods[0];
                        panda$collections$Iterator* $tmp1730 = $tmp1728(((panda$collections$Iterable*) statements1704));
                        $tmp1726 = $tmp1730;
                        $tmp1725 = $tmp1726;
                        Iter$498$171724 = $tmp1725;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1725));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1726));
                        $l1731:;
                        ITable* $tmp1734 = Iter$498$171724->$class->itable;
                        while ($tmp1734->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1734 = $tmp1734->next;
                        }
                        $fn1736 $tmp1735 = $tmp1734->methods[0];
                        panda$core$Bit $tmp1737 = $tmp1735(Iter$498$171724);
                        panda$core$Bit $tmp1738 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1737);
                        bool $tmp1733 = $tmp1738.value;
                        if (!$tmp1733) goto $l1732;
                        {
                            int $tmp1741;
                            {
                                ITable* $tmp1745 = Iter$498$171724->$class->itable;
                                while ($tmp1745->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1745 = $tmp1745->next;
                                }
                                $fn1747 $tmp1746 = $tmp1745->methods[1];
                                panda$core$Object* $tmp1748 = $tmp1746(Iter$498$171724);
                                $tmp1744 = $tmp1748;
                                $tmp1743 = ((org$pandalanguage$pandac$IRNode*) $tmp1744);
                                s1742 = $tmp1743;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1743));
                                panda$core$Panda$unref$panda$core$Object($tmp1744);
                                panda$core$String* $tmp1751 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1742), &$s1750);
                                $tmp1749 = $tmp1751;
                                panda$core$MutableString$append$panda$core$String(result1711, $tmp1749);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1749));
                            }
                            $tmp1741 = -1;
                            goto $l1739;
                            $l1739:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1742));
                            s1742 = NULL;
                            switch ($tmp1741) {
                                case -1: goto $l1752;
                            }
                            $l1752:;
                        }
                        goto $l1731;
                        $l1732:;
                    }
                    $tmp1723 = -1;
                    goto $l1721;
                    $l1721:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$498$171724));
                    Iter$498$171724 = NULL;
                    switch ($tmp1723) {
                        case -1: goto $l1753;
                    }
                    $l1753:;
                }
                panda$core$String* $tmp1757 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1756, ((panda$core$Object*) test1706));
                $tmp1755 = $tmp1757;
                panda$core$String* $tmp1759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1755, &$s1758);
                $tmp1754 = $tmp1759;
                panda$core$MutableString$append$panda$core$String(result1711, $tmp1754);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1754));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1755));
                panda$core$String* $tmp1762 = panda$core$MutableString$finish$R$panda$core$String(result1711);
                $tmp1761 = $tmp1762;
                $tmp1760 = $tmp1761;
                $returnValue1301 = $tmp1760;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1760));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1761));
                $tmp1710 = 0;
                goto $l1708;
                $l1763:;
                $tmp1293 = 20;
                goto $l1291;
                $l1764:;
                return $returnValue1301;
            }
            $l1708:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1711));
            result1711 = NULL;
            switch ($tmp1710) {
                case 0: goto $l1763;
            }
            $l1766:;
        }
        }
        else {
        panda$core$Bit $tmp1767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1767.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1769 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 0));
            m1768 = *$tmp1769;
            panda$collections$ImmutableArray** $tmp1771 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 8));
            args1770 = *$tmp1771;
            panda$core$String* $tmp1778 = (($fn1777) m1768->$class->vtable[0])(m1768);
            $tmp1776 = $tmp1778;
            panda$core$String* $tmp1780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1776, &$s1779);
            $tmp1775 = $tmp1780;
            ITable* $tmp1783 = ((panda$collections$ListView*) args1770)->$class->itable;
            while ($tmp1783->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1783 = $tmp1783->next;
            }
            $fn1785 $tmp1784 = $tmp1783->methods[2];
            panda$core$String* $tmp1786 = $tmp1784(((panda$collections$ListView*) args1770), &$s1782);
            $tmp1781 = $tmp1786;
            panda$core$String* $tmp1787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1775, $tmp1781);
            $tmp1774 = $tmp1787;
            panda$core$String* $tmp1789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1774, &$s1788);
            $tmp1773 = $tmp1789;
            $tmp1772 = $tmp1773;
            $returnValue1301 = $tmp1772;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1772));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1773));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1774));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1781));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1775));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1776));
            $tmp1293 = 21;
            goto $l1291;
            $l1790:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1792.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1794 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 0));
            expr1793 = *$tmp1794;
            org$pandalanguage$pandac$IRNode** $tmp1796 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 8));
            stmt1795 = *$tmp1796;
            panda$core$String* $tmp1803 = (($fn1802) expr1793->$class->vtable[0])(expr1793);
            $tmp1801 = $tmp1803;
            panda$core$String* $tmp1805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1801, &$s1804);
            $tmp1800 = $tmp1805;
            panda$core$String* $tmp1806 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1800, ((panda$core$Object*) stmt1795));
            $tmp1799 = $tmp1806;
            panda$core$String* $tmp1808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1799, &$s1807);
            $tmp1798 = $tmp1808;
            $tmp1797 = $tmp1798;
            $returnValue1301 = $tmp1797;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1797));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1798));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1799));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1800));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1801));
            $tmp1293 = 22;
            goto $l1291;
            $l1809:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1811 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1811.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1813 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 24));
            base1812 = *$tmp1813;
            org$pandalanguage$pandac$FieldDecl** $tmp1815 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$427_91294->$data + 32));
            field1814 = *$tmp1815;
            panda$core$String* $tmp1822 = (($fn1821) base1812->$class->vtable[0])(base1812);
            $tmp1820 = $tmp1822;
            panda$core$String* $tmp1824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1820, &$s1823);
            $tmp1819 = $tmp1824;
            panda$core$String* $tmp1825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1819, ((org$pandalanguage$pandac$Symbol*) field1814)->name);
            $tmp1818 = $tmp1825;
            panda$core$String* $tmp1827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1818, &$s1826);
            $tmp1817 = $tmp1827;
            $tmp1816 = $tmp1817;
            $returnValue1301 = $tmp1816;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1816));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1817));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1818));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1819));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1820));
            $tmp1293 = 23;
            goto $l1291;
            $l1828:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1830.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1832 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 16));
            test1831 = *$tmp1832;
            panda$collections$ImmutableArray** $tmp1834 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 24));
            ifTrue1833 = *$tmp1834;
            org$pandalanguage$pandac$IRNode** $tmp1836 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 32));
            ifFalse1835 = *$tmp1836;
            int $tmp1839;
            {
                panda$core$MutableString* $tmp1843 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1847 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1846, ((panda$core$Object*) test1831));
                $tmp1845 = $tmp1847;
                panda$core$String* $tmp1849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1845, &$s1848);
                $tmp1844 = $tmp1849;
                panda$core$MutableString$init$panda$core$String($tmp1843, $tmp1844);
                $tmp1842 = $tmp1843;
                $tmp1841 = $tmp1842;
                result1840 = $tmp1841;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1841));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1842));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1844));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1845));
                {
                    int $tmp1852;
                    {
                        ITable* $tmp1856 = ((panda$collections$Iterable*) ifTrue1833)->$class->itable;
                        while ($tmp1856->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1856 = $tmp1856->next;
                        }
                        $fn1858 $tmp1857 = $tmp1856->methods[0];
                        panda$collections$Iterator* $tmp1859 = $tmp1857(((panda$collections$Iterable*) ifTrue1833));
                        $tmp1855 = $tmp1859;
                        $tmp1854 = $tmp1855;
                        Iter$511$171853 = $tmp1854;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1854));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1855));
                        $l1860:;
                        ITable* $tmp1863 = Iter$511$171853->$class->itable;
                        while ($tmp1863->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1863 = $tmp1863->next;
                        }
                        $fn1865 $tmp1864 = $tmp1863->methods[0];
                        panda$core$Bit $tmp1866 = $tmp1864(Iter$511$171853);
                        panda$core$Bit $tmp1867 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1866);
                        bool $tmp1862 = $tmp1867.value;
                        if (!$tmp1862) goto $l1861;
                        {
                            int $tmp1870;
                            {
                                ITable* $tmp1874 = Iter$511$171853->$class->itable;
                                while ($tmp1874->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1874 = $tmp1874->next;
                                }
                                $fn1876 $tmp1875 = $tmp1874->methods[1];
                                panda$core$Object* $tmp1877 = $tmp1875(Iter$511$171853);
                                $tmp1873 = $tmp1877;
                                $tmp1872 = ((org$pandalanguage$pandac$IRNode*) $tmp1873);
                                s1871 = $tmp1872;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1872));
                                panda$core$Panda$unref$panda$core$Object($tmp1873);
                                panda$core$String* $tmp1880 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1871), &$s1879);
                                $tmp1878 = $tmp1880;
                                panda$core$MutableString$append$panda$core$String(result1840, $tmp1878);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1878));
                            }
                            $tmp1870 = -1;
                            goto $l1868;
                            $l1868:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1871));
                            s1871 = NULL;
                            switch ($tmp1870) {
                                case -1: goto $l1881;
                            }
                            $l1881:;
                        }
                        goto $l1860;
                        $l1861:;
                    }
                    $tmp1852 = -1;
                    goto $l1850;
                    $l1850:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$511$171853));
                    Iter$511$171853 = NULL;
                    switch ($tmp1852) {
                        case -1: goto $l1882;
                    }
                    $l1882:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1883, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1840, $tmp1883);
                if (((panda$core$Bit) { ifFalse1835 != NULL }).value) {
                {
                    panda$core$String* $tmp1887 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1886, ((panda$core$Object*) ifFalse1835));
                    $tmp1885 = $tmp1887;
                    panda$core$String* $tmp1889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1885, &$s1888);
                    $tmp1884 = $tmp1889;
                    panda$core$MutableString$append$panda$core$String(result1840, $tmp1884);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1884));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1885));
                }
                }
                panda$core$String* $tmp1892 = panda$core$MutableString$finish$R$panda$core$String(result1840);
                $tmp1891 = $tmp1892;
                $tmp1890 = $tmp1891;
                $returnValue1301 = $tmp1890;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1890));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1891));
                $tmp1839 = 0;
                goto $l1837;
                $l1893:;
                $tmp1293 = 24;
                goto $l1291;
                $l1894:;
                return $returnValue1301;
            }
            $l1837:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1840));
            result1840 = NULL;
            switch ($tmp1839) {
                case 0: goto $l1893;
            }
            $l1896:;
        }
        }
        else {
        panda$core$Bit $tmp1897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1897.value) {
        {
            panda$core$UInt64* $tmp1899 = ((panda$core$UInt64*) ((char*) $match$427_91294->$data + 24));
            value1898 = *$tmp1899;
            panda$core$String* $tmp1902 = panda$core$UInt64$convert$R$panda$core$String(value1898);
            $tmp1901 = $tmp1902;
            $tmp1900 = $tmp1901;
            $returnValue1301 = $tmp1900;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1900));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1901));
            $tmp1293 = 25;
            goto $l1291;
            $l1903:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1905.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1907 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 16));
            value1906 = *$tmp1907;
            panda$core$String* $tmp1912 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1911, ((panda$core$Object*) value1906));
            $tmp1910 = $tmp1912;
            panda$core$String* $tmp1914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1910, &$s1913);
            $tmp1909 = $tmp1914;
            $tmp1908 = $tmp1909;
            $returnValue1301 = $tmp1908;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1908));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1909));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1910));
            $tmp1293 = 26;
            goto $l1291;
            $l1915:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1917.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1919 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 16));
            value1918 = *$tmp1919;
            panda$core$String* $tmp1924 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1923, ((panda$core$Object*) value1918));
            $tmp1922 = $tmp1924;
            panda$core$String* $tmp1926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1922, &$s1925);
            $tmp1921 = $tmp1926;
            $tmp1920 = $tmp1921;
            $returnValue1301 = $tmp1920;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1920));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1921));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1922));
            $tmp1293 = 27;
            goto $l1291;
            $l1927:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1929.value) {
        {
            panda$core$String** $tmp1931 = ((panda$core$String**) ((char*) $match$427_91294->$data + 16));
            label1930 = *$tmp1931;
            panda$collections$ImmutableArray** $tmp1933 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 24));
            statements1932 = *$tmp1933;
            int $tmp1936;
            {
                panda$core$MutableString* $tmp1940 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1940);
                $tmp1939 = $tmp1940;
                $tmp1938 = $tmp1939;
                result1937 = $tmp1938;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1938));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1939));
                if (((panda$core$Bit) { label1930 != NULL }).value) {
                {
                    panda$core$String* $tmp1943 = panda$core$String$convert$R$panda$core$String(label1930);
                    $tmp1942 = $tmp1943;
                    panda$core$String* $tmp1945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1942, &$s1944);
                    $tmp1941 = $tmp1945;
                    panda$core$MutableString$append$panda$core$String(result1937, $tmp1941);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1941));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1942));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1937, &$s1946);
                {
                    int $tmp1949;
                    {
                        ITable* $tmp1953 = ((panda$collections$Iterable*) statements1932)->$class->itable;
                        while ($tmp1953->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1953 = $tmp1953->next;
                        }
                        $fn1955 $tmp1954 = $tmp1953->methods[0];
                        panda$collections$Iterator* $tmp1956 = $tmp1954(((panda$collections$Iterable*) statements1932));
                        $tmp1952 = $tmp1956;
                        $tmp1951 = $tmp1952;
                        Iter$531$171950 = $tmp1951;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1951));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1952));
                        $l1957:;
                        ITable* $tmp1960 = Iter$531$171950->$class->itable;
                        while ($tmp1960->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1960 = $tmp1960->next;
                        }
                        $fn1962 $tmp1961 = $tmp1960->methods[0];
                        panda$core$Bit $tmp1963 = $tmp1961(Iter$531$171950);
                        panda$core$Bit $tmp1964 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1963);
                        bool $tmp1959 = $tmp1964.value;
                        if (!$tmp1959) goto $l1958;
                        {
                            int $tmp1967;
                            {
                                ITable* $tmp1971 = Iter$531$171950->$class->itable;
                                while ($tmp1971->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1971 = $tmp1971->next;
                                }
                                $fn1973 $tmp1972 = $tmp1971->methods[1];
                                panda$core$Object* $tmp1974 = $tmp1972(Iter$531$171950);
                                $tmp1970 = $tmp1974;
                                $tmp1969 = ((org$pandalanguage$pandac$IRNode*) $tmp1970);
                                s1968 = $tmp1969;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1969));
                                panda$core$Panda$unref$panda$core$Object($tmp1970);
                                panda$core$String* $tmp1977 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1968), &$s1976);
                                $tmp1975 = $tmp1977;
                                panda$core$MutableString$append$panda$core$String(result1937, $tmp1975);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1975));
                            }
                            $tmp1967 = -1;
                            goto $l1965;
                            $l1965:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1968));
                            s1968 = NULL;
                            switch ($tmp1967) {
                                case -1: goto $l1978;
                            }
                            $l1978:;
                        }
                        goto $l1957;
                        $l1958:;
                    }
                    $tmp1949 = -1;
                    goto $l1947;
                    $l1947:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$531$171950));
                    Iter$531$171950 = NULL;
                    switch ($tmp1949) {
                        case -1: goto $l1979;
                    }
                    $l1979:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1980, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1937, $tmp1980);
                panda$core$String* $tmp1983 = panda$core$MutableString$finish$R$panda$core$String(result1937);
                $tmp1982 = $tmp1983;
                $tmp1981 = $tmp1982;
                $returnValue1301 = $tmp1981;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1981));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1982));
                $tmp1936 = 0;
                goto $l1934;
                $l1984:;
                $tmp1293 = 28;
                goto $l1291;
                $l1985:;
                return $returnValue1301;
            }
            $l1934:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1937));
            result1937 = NULL;
            switch ($tmp1936) {
                case 0: goto $l1984;
            }
            $l1987:;
        }
        }
        else {
        panda$core$Bit $tmp1988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1988.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1990 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 16));
            value1989 = *$tmp1990;
            panda$collections$ImmutableArray** $tmp1992 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 24));
            whens1991 = *$tmp1992;
            panda$collections$ImmutableArray** $tmp1994 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 32));
            other1993 = *$tmp1994;
            int $tmp1997;
            {
                panda$core$MutableString* $tmp2001 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp2005 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2004, ((panda$core$Object*) value1989));
                $tmp2003 = $tmp2005;
                panda$core$String* $tmp2007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2003, &$s2006);
                $tmp2002 = $tmp2007;
                panda$core$MutableString$init$panda$core$String($tmp2001, $tmp2002);
                $tmp2000 = $tmp2001;
                $tmp1999 = $tmp2000;
                result1998 = $tmp1999;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1999));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2000));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2002));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2003));
                {
                    int $tmp2010;
                    {
                        ITable* $tmp2014 = ((panda$collections$Iterable*) whens1991)->$class->itable;
                        while ($tmp2014->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2014 = $tmp2014->next;
                        }
                        $fn2016 $tmp2015 = $tmp2014->methods[0];
                        panda$collections$Iterator* $tmp2017 = $tmp2015(((panda$collections$Iterable*) whens1991));
                        $tmp2013 = $tmp2017;
                        $tmp2012 = $tmp2013;
                        Iter$538$172011 = $tmp2012;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2012));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2013));
                        $l2018:;
                        ITable* $tmp2021 = Iter$538$172011->$class->itable;
                        while ($tmp2021->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2021 = $tmp2021->next;
                        }
                        $fn2023 $tmp2022 = $tmp2021->methods[0];
                        panda$core$Bit $tmp2024 = $tmp2022(Iter$538$172011);
                        panda$core$Bit $tmp2025 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2024);
                        bool $tmp2020 = $tmp2025.value;
                        if (!$tmp2020) goto $l2019;
                        {
                            int $tmp2028;
                            {
                                ITable* $tmp2032 = Iter$538$172011->$class->itable;
                                while ($tmp2032->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2032 = $tmp2032->next;
                                }
                                $fn2034 $tmp2033 = $tmp2032->methods[1];
                                panda$core$Object* $tmp2035 = $tmp2033(Iter$538$172011);
                                $tmp2031 = $tmp2035;
                                $tmp2030 = ((org$pandalanguage$pandac$IRNode*) $tmp2031);
                                w2029 = $tmp2030;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2030));
                                panda$core$Panda$unref$panda$core$Object($tmp2031);
                                panda$core$String* $tmp2038 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w2029), &$s2037);
                                $tmp2036 = $tmp2038;
                                panda$core$MutableString$append$panda$core$String(result1998, $tmp2036);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2036));
                            }
                            $tmp2028 = -1;
                            goto $l2026;
                            $l2026:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w2029));
                            w2029 = NULL;
                            switch ($tmp2028) {
                                case -1: goto $l2039;
                            }
                            $l2039:;
                        }
                        goto $l2018;
                        $l2019:;
                    }
                    $tmp2010 = -1;
                    goto $l2008;
                    $l2008:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$538$172011));
                    Iter$538$172011 = NULL;
                    switch ($tmp2010) {
                        case -1: goto $l2040;
                    }
                    $l2040:;
                }
                if (((panda$core$Bit) { other1993 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1998, &$s2041);
                    {
                        int $tmp2044;
                        {
                            ITable* $tmp2048 = ((panda$collections$Iterable*) other1993)->$class->itable;
                            while ($tmp2048->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp2048 = $tmp2048->next;
                            }
                            $fn2050 $tmp2049 = $tmp2048->methods[0];
                            panda$collections$Iterator* $tmp2051 = $tmp2049(((panda$collections$Iterable*) other1993));
                            $tmp2047 = $tmp2051;
                            $tmp2046 = $tmp2047;
                            Iter$543$212045 = $tmp2046;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2046));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2047));
                            $l2052:;
                            ITable* $tmp2055 = Iter$543$212045->$class->itable;
                            while ($tmp2055->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2055 = $tmp2055->next;
                            }
                            $fn2057 $tmp2056 = $tmp2055->methods[0];
                            panda$core$Bit $tmp2058 = $tmp2056(Iter$543$212045);
                            panda$core$Bit $tmp2059 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2058);
                            bool $tmp2054 = $tmp2059.value;
                            if (!$tmp2054) goto $l2053;
                            {
                                int $tmp2062;
                                {
                                    ITable* $tmp2066 = Iter$543$212045->$class->itable;
                                    while ($tmp2066->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp2066 = $tmp2066->next;
                                    }
                                    $fn2068 $tmp2067 = $tmp2066->methods[1];
                                    panda$core$Object* $tmp2069 = $tmp2067(Iter$543$212045);
                                    $tmp2065 = $tmp2069;
                                    $tmp2064 = ((org$pandalanguage$pandac$IRNode*) $tmp2065);
                                    s2063 = $tmp2064;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2064));
                                    panda$core$Panda$unref$panda$core$Object($tmp2065);
                                    panda$core$String* $tmp2072 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2063), &$s2071);
                                    $tmp2070 = $tmp2072;
                                    panda$core$MutableString$append$panda$core$String(result1998, $tmp2070);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2070));
                                }
                                $tmp2062 = -1;
                                goto $l2060;
                                $l2060:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2063));
                                s2063 = NULL;
                                switch ($tmp2062) {
                                    case -1: goto $l2073;
                                }
                                $l2073:;
                            }
                            goto $l2052;
                            $l2053:;
                        }
                        $tmp2044 = -1;
                        goto $l2042;
                        $l2042:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$543$212045));
                        Iter$543$212045 = NULL;
                        switch ($tmp2044) {
                            case -1: goto $l2074;
                        }
                        $l2074:;
                    }
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2075, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1998, $tmp2075);
                panda$core$String* $tmp2078 = panda$core$MutableString$finish$R$panda$core$String(result1998);
                $tmp2077 = $tmp2078;
                $tmp2076 = $tmp2077;
                $returnValue1301 = $tmp2076;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2076));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2077));
                $tmp1997 = 0;
                goto $l1995;
                $l2079:;
                $tmp1293 = 29;
                goto $l1291;
                $l2080:;
                return $returnValue1301;
            }
            $l1995:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1998));
            result1998 = NULL;
            switch ($tmp1997) {
                case 0: goto $l2079;
            }
            $l2082:;
        }
        }
        else {
        panda$core$Bit $tmp2083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp2083.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2085 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 16));
            target2084 = *$tmp2085;
            org$pandalanguage$pandac$MethodRef** $tmp2087 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$427_91294->$data + 24));
            m2086 = *$tmp2087;
            if (((panda$core$Bit) { target2084 != NULL }).value) {
            {
                panda$core$String* $tmp2094 = (($fn2093) target2084->$class->vtable[0])(target2084);
                $tmp2092 = $tmp2094;
                panda$core$String* $tmp2096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2092, &$s2095);
                $tmp2091 = $tmp2096;
                panda$core$String* $tmp2097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2091, ((org$pandalanguage$pandac$Symbol*) m2086->value)->name);
                $tmp2090 = $tmp2097;
                panda$core$String* $tmp2099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2090, &$s2098);
                $tmp2089 = $tmp2099;
                $tmp2088 = $tmp2089;
                $returnValue1301 = $tmp2088;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2088));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2089));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2090));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2091));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2092));
                $tmp1293 = 30;
                goto $l1291;
                $l2100:;
                return $returnValue1301;
            }
            }
            $tmp2102 = ((org$pandalanguage$pandac$Symbol*) m2086->value)->name;
            $returnValue1301 = $tmp2102;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2102));
            $tmp1293 = 31;
            goto $l1291;
            $l2103:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp2105.value) {
        {
            panda$core$UInt64* $tmp2107 = ((panda$core$UInt64*) ((char*) $match$427_91294->$data + 24));
            value2106 = *$tmp2107;
            panda$core$UInt64$wrapper* $tmp2112;
            $tmp2112 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
            $tmp2112->value = value2106;
            $tmp2111 = ((panda$core$Object*) $tmp2112);
            panda$core$String* $tmp2113 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2110, $tmp2111);
            $tmp2109 = $tmp2113;
            $tmp2108 = $tmp2109;
            $returnValue1301 = $tmp2108;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2108));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2109));
            panda$core$Panda$unref$panda$core$Object($tmp2111);
            $tmp1293 = 32;
            goto $l1291;
            $l2114:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp2116.value) {
        {
            $tmp2117 = &$s2118;
            $returnValue1301 = $tmp2117;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2117));
            $tmp1293 = 33;
            goto $l1291;
            $l2119:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp2121.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2123 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$427_91294->$data + 16));
            op2122 = *$tmp2123;
            org$pandalanguage$pandac$IRNode** $tmp2125 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 24));
            base2124 = *$tmp2125;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2132;
            $tmp2132 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp2132->value = op2122;
            $tmp2131 = ((panda$core$Object*) $tmp2132);
            panda$core$String* $tmp2134 = (($fn2133) $tmp2131->$class->vtable[0])($tmp2131);
            $tmp2130 = $tmp2134;
            panda$core$String* $tmp2136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2130, &$s2135);
            $tmp2129 = $tmp2136;
            panda$core$String* $tmp2137 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2129, ((panda$core$Object*) base2124));
            $tmp2128 = $tmp2137;
            panda$core$String* $tmp2139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2128, &$s2138);
            $tmp2127 = $tmp2139;
            $tmp2126 = $tmp2127;
            $returnValue1301 = $tmp2126;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2126));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2127));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2128));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2129));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2130));
            panda$core$Panda$unref$panda$core$Object($tmp2131);
            $tmp1293 = 34;
            goto $l1291;
            $l2140:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2142.value) {
        {
            panda$core$String** $tmp2144 = ((panda$core$String**) ((char*) $match$427_91294->$data + 16));
            label2143 = *$tmp2144;
            org$pandalanguage$pandac$IRNode** $tmp2146 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 24));
            target2145 = *$tmp2146;
            org$pandalanguage$pandac$IRNode** $tmp2148 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 32));
            list2147 = *$tmp2148;
            panda$collections$ImmutableArray** $tmp2150 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 40));
            statements2149 = *$tmp2150;
            int $tmp2153;
            {
                panda$core$MutableString* $tmp2157 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2157);
                $tmp2156 = $tmp2157;
                $tmp2155 = $tmp2156;
                result2154 = $tmp2155;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2155));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2156));
                if (((panda$core$Bit) { label2143 != NULL }).value) {
                {
                    panda$core$String* $tmp2160 = panda$core$String$convert$R$panda$core$String(label2143);
                    $tmp2159 = $tmp2160;
                    panda$core$String* $tmp2162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2159, &$s2161);
                    $tmp2158 = $tmp2162;
                    panda$core$MutableString$append$panda$core$String(result2154, $tmp2158);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2158));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2159));
                }
                }
                panda$core$String* $tmp2168 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2167, ((panda$core$Object*) target2145));
                $tmp2166 = $tmp2168;
                panda$core$String* $tmp2170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2166, &$s2169);
                $tmp2165 = $tmp2170;
                panda$core$String* $tmp2171 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2165, ((panda$core$Object*) list2147));
                $tmp2164 = $tmp2171;
                panda$core$String* $tmp2173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2164, &$s2172);
                $tmp2163 = $tmp2173;
                panda$core$MutableString$append$panda$core$String(result2154, $tmp2163);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2163));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2164));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2165));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2166));
                {
                    int $tmp2176;
                    {
                        ITable* $tmp2180 = ((panda$collections$Iterable*) statements2149)->$class->itable;
                        while ($tmp2180->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2180 = $tmp2180->next;
                        }
                        $fn2182 $tmp2181 = $tmp2180->methods[0];
                        panda$collections$Iterator* $tmp2183 = $tmp2181(((panda$collections$Iterable*) statements2149));
                        $tmp2179 = $tmp2183;
                        $tmp2178 = $tmp2179;
                        Iter$566$172177 = $tmp2178;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2178));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2179));
                        $l2184:;
                        ITable* $tmp2187 = Iter$566$172177->$class->itable;
                        while ($tmp2187->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2187 = $tmp2187->next;
                        }
                        $fn2189 $tmp2188 = $tmp2187->methods[0];
                        panda$core$Bit $tmp2190 = $tmp2188(Iter$566$172177);
                        panda$core$Bit $tmp2191 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2190);
                        bool $tmp2186 = $tmp2191.value;
                        if (!$tmp2186) goto $l2185;
                        {
                            int $tmp2194;
                            {
                                ITable* $tmp2198 = Iter$566$172177->$class->itable;
                                while ($tmp2198->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2198 = $tmp2198->next;
                                }
                                $fn2200 $tmp2199 = $tmp2198->methods[1];
                                panda$core$Object* $tmp2201 = $tmp2199(Iter$566$172177);
                                $tmp2197 = $tmp2201;
                                $tmp2196 = ((org$pandalanguage$pandac$IRNode*) $tmp2197);
                                s2195 = $tmp2196;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2196));
                                panda$core$Panda$unref$panda$core$Object($tmp2197);
                                panda$core$String* $tmp2204 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2195), &$s2203);
                                $tmp2202 = $tmp2204;
                                panda$core$MutableString$append$panda$core$String(result2154, $tmp2202);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2202));
                            }
                            $tmp2194 = -1;
                            goto $l2192;
                            $l2192:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2195));
                            s2195 = NULL;
                            switch ($tmp2194) {
                                case -1: goto $l2205;
                            }
                            $l2205:;
                        }
                        goto $l2184;
                        $l2185:;
                    }
                    $tmp2176 = -1;
                    goto $l2174;
                    $l2174:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$566$172177));
                    Iter$566$172177 = NULL;
                    switch ($tmp2176) {
                        case -1: goto $l2206;
                    }
                    $l2206:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2207, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2154, $tmp2207);
                panda$core$String* $tmp2210 = panda$core$MutableString$finish$R$panda$core$String(result2154);
                $tmp2209 = $tmp2210;
                $tmp2208 = $tmp2209;
                $returnValue1301 = $tmp2208;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2208));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2209));
                $tmp2153 = 0;
                goto $l2151;
                $l2211:;
                $tmp1293 = 35;
                goto $l1291;
                $l2212:;
                return $returnValue1301;
            }
            $l2151:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2154));
            result2154 = NULL;
            switch ($tmp2153) {
                case 0: goto $l2211;
            }
            $l2214:;
        }
        }
        else {
        panda$core$Bit $tmp2215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2215.value) {
        {
            panda$core$Real64* $tmp2217 = ((panda$core$Real64*) ((char*) $match$427_91294->$data + 24));
            value2216 = *$tmp2217;
            panda$core$String* $tmp2220 = panda$core$Real64$convert$R$panda$core$String(value2216);
            $tmp2219 = $tmp2220;
            $tmp2218 = $tmp2219;
            $returnValue1301 = $tmp2218;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2218));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2219));
            $tmp1293 = 36;
            goto $l1291;
            $l2221:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2223.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2225 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 16));
            value2224 = *$tmp2225;
            if (((panda$core$Bit) { value2224 != NULL }).value) {
            {
                panda$core$String* $tmp2230 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2229, ((panda$core$Object*) value2224));
                $tmp2228 = $tmp2230;
                panda$core$String* $tmp2232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2228, &$s2231);
                $tmp2227 = $tmp2232;
                $tmp2226 = $tmp2227;
                $returnValue1301 = $tmp2226;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2226));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2227));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2228));
                $tmp1293 = 37;
                goto $l1291;
                $l2233:;
                return $returnValue1301;
            }
            }
            $tmp2235 = &$s2236;
            $returnValue1301 = $tmp2235;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2235));
            $tmp1293 = 38;
            goto $l1291;
            $l2237:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2239.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2241 = ((org$pandalanguage$pandac$Type**) ((char*) $match$427_91294->$data + 16));
            type2240 = *$tmp2241;
            panda$core$Int64* $tmp2243 = ((panda$core$Int64*) ((char*) $match$427_91294->$data + 24));
            id2242 = *$tmp2243;
            panda$core$Int64$wrapper* $tmp2249;
            $tmp2249 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2249->value = id2242;
            $tmp2248 = ((panda$core$Object*) $tmp2249);
            panda$core$String* $tmp2250 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2247, $tmp2248);
            $tmp2246 = $tmp2250;
            panda$core$String* $tmp2252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2246, &$s2251);
            $tmp2245 = $tmp2252;
            $tmp2244 = $tmp2245;
            $returnValue1301 = $tmp2244;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2244));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2245));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2246));
            panda$core$Panda$unref$panda$core$Object($tmp2248);
            $tmp1293 = 39;
            goto $l1291;
            $l2253:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp2255.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2257 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 0));
            base2256 = *$tmp2257;
            panda$core$Int64* $tmp2259 = ((panda$core$Int64*) ((char*) $match$427_91294->$data + 8));
            id2258 = *$tmp2259;
            panda$core$Int64$wrapper* $tmp2267;
            $tmp2267 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2267->value = id2258;
            $tmp2266 = ((panda$core$Object*) $tmp2267);
            panda$core$String* $tmp2268 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2265, $tmp2266);
            $tmp2264 = $tmp2268;
            panda$core$String* $tmp2270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2264, &$s2269);
            $tmp2263 = $tmp2270;
            panda$core$String* $tmp2271 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2263, ((panda$core$Object*) base2256));
            $tmp2262 = $tmp2271;
            panda$core$String* $tmp2273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2262, &$s2272);
            $tmp2261 = $tmp2273;
            $tmp2260 = $tmp2261;
            $returnValue1301 = $tmp2260;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2260));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2261));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2262));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2263));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2264));
            panda$core$Panda$unref$panda$core$Object($tmp2266);
            $tmp1293 = 40;
            goto $l1291;
            $l2274:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp2276.value) {
        {
            $tmp2277 = &$s2278;
            $returnValue1301 = $tmp2277;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2277));
            $tmp1293 = 41;
            goto $l1291;
            $l2279:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2281.value) {
        {
            panda$core$String** $tmp2283 = ((panda$core$String**) ((char*) $match$427_91294->$data + 16));
            str2282 = *$tmp2283;
            $tmp2284 = str2282;
            $returnValue1301 = $tmp2284;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2284));
            $tmp1293 = 42;
            goto $l1291;
            $l2285:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp2287.value) {
        {
            $tmp2288 = &$s2289;
            $returnValue1301 = $tmp2288;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2288));
            $tmp1293 = 43;
            goto $l1291;
            $l2290:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp2292.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2294 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 16));
            test2293 = *$tmp2294;
            org$pandalanguage$pandac$IRNode** $tmp2296 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 24));
            ifTrue2295 = *$tmp2296;
            org$pandalanguage$pandac$IRNode** $tmp2298 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 32));
            ifFalse2297 = *$tmp2298;
            panda$core$String* $tmp2307 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2306, ((panda$core$Object*) test2293));
            $tmp2305 = $tmp2307;
            panda$core$String* $tmp2309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2305, &$s2308);
            $tmp2304 = $tmp2309;
            panda$core$String* $tmp2310 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2304, ((panda$core$Object*) ifTrue2295));
            $tmp2303 = $tmp2310;
            panda$core$String* $tmp2312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2303, &$s2311);
            $tmp2302 = $tmp2312;
            panda$core$String* $tmp2313 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2302, ((panda$core$Object*) ifFalse2297));
            $tmp2301 = $tmp2313;
            panda$core$String* $tmp2315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2301, &$s2314);
            $tmp2300 = $tmp2315;
            $tmp2299 = $tmp2300;
            $returnValue1301 = $tmp2299;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2299));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2300));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2301));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2302));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2303));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2304));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2305));
            $tmp1293 = 44;
            goto $l1291;
            $l2316:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp2318.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2320 = ((org$pandalanguage$pandac$Type**) ((char*) $match$427_91294->$data + 16));
            type2319 = *$tmp2320;
            panda$core$String* $tmp2323 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type2319);
            $tmp2322 = $tmp2323;
            $tmp2321 = $tmp2322;
            $returnValue1301 = $tmp2321;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2321));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2322));
            $tmp1293 = 45;
            goto $l1291;
            $l2324:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp2326.value) {
        {
            panda$core$String** $tmp2328 = ((panda$core$String**) ((char*) $match$427_91294->$data + 16));
            name2327 = *$tmp2328;
            $tmp2329 = name2327;
            $returnValue1301 = $tmp2329;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2329));
            $tmp1293 = 46;
            goto $l1291;
            $l2330:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp2332.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2334 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 24));
            base2333 = *$tmp2334;
            panda$collections$ImmutableArray** $tmp2336 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 32));
            args2335 = *$tmp2336;
            panda$core$String* $tmp2343 = (($fn2342) base2333->$class->vtable[0])(base2333);
            $tmp2341 = $tmp2343;
            panda$core$String* $tmp2345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2341, &$s2344);
            $tmp2340 = $tmp2345;
            ITable* $tmp2347 = ((panda$collections$ListView*) args2335)->$class->itable;
            while ($tmp2347->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2347 = $tmp2347->next;
            }
            $fn2349 $tmp2348 = $tmp2347->methods[1];
            panda$core$String* $tmp2350 = $tmp2348(((panda$collections$ListView*) args2335));
            $tmp2346 = $tmp2350;
            panda$core$String* $tmp2351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2340, $tmp2346);
            $tmp2339 = $tmp2351;
            panda$core$String* $tmp2353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2339, &$s2352);
            $tmp2338 = $tmp2353;
            $tmp2337 = $tmp2338;
            $returnValue1301 = $tmp2337;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2337));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2338));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2339));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2346));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2340));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2341));
            $tmp1293 = 47;
            goto $l1291;
            $l2354:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp2356.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2358 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 24));
            target2357 = *$tmp2358;
            panda$collections$ImmutableArray** $tmp2360 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 32));
            methods2359 = *$tmp2360;
            panda$collections$ImmutableArray** $tmp2362 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 40));
            args2361 = *$tmp2362;
            panda$core$String* $tmp2371 = (($fn2370) target2357->$class->vtable[0])(target2357);
            $tmp2369 = $tmp2371;
            panda$core$String* $tmp2373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2369, &$s2372);
            $tmp2368 = $tmp2373;
            panda$core$Object* $tmp2375 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2359, ((panda$core$Int64) { 0 }));
            $tmp2374 = $tmp2375;
            panda$core$String* $tmp2376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2368, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2374)->value)->name);
            $tmp2367 = $tmp2376;
            panda$core$String* $tmp2378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2367, &$s2377);
            $tmp2366 = $tmp2378;
            ITable* $tmp2380 = ((panda$collections$ListView*) args2361)->$class->itable;
            while ($tmp2380->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2380 = $tmp2380->next;
            }
            $fn2382 $tmp2381 = $tmp2380->methods[1];
            panda$core$String* $tmp2383 = $tmp2381(((panda$collections$ListView*) args2361));
            $tmp2379 = $tmp2383;
            panda$core$String* $tmp2384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2366, $tmp2379);
            $tmp2365 = $tmp2384;
            panda$core$String* $tmp2386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2365, &$s2385);
            $tmp2364 = $tmp2386;
            $tmp2363 = $tmp2364;
            $returnValue1301 = $tmp2363;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2363));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2364));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2365));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2379));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2366));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2367));
            panda$core$Panda$unref$panda$core$Object($tmp2374);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2368));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2369));
            $tmp1293 = 48;
            goto $l1291;
            $l2387:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2389.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2391 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 16));
            target2390 = *$tmp2391;
            panda$collections$ImmutableArray** $tmp2393 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 24));
            methods2392 = *$tmp2393;
            panda$core$String* $tmp2400 = (($fn2399) target2390->$class->vtable[0])(target2390);
            $tmp2398 = $tmp2400;
            panda$core$String* $tmp2402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2398, &$s2401);
            $tmp2397 = $tmp2402;
            panda$core$Object* $tmp2404 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2392, ((panda$core$Int64) { 0 }));
            $tmp2403 = $tmp2404;
            panda$core$String* $tmp2405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2397, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2403)->value)->name);
            $tmp2396 = $tmp2405;
            panda$core$String* $tmp2407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2396, &$s2406);
            $tmp2395 = $tmp2407;
            $tmp2394 = $tmp2395;
            $returnValue1301 = $tmp2394;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2394));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2395));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2396));
            panda$core$Panda$unref$panda$core$Object($tmp2403);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2397));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2398));
            $tmp1293 = 49;
            goto $l1291;
            $l2408:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp2410.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2412 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 16));
            start2411 = *$tmp2412;
            org$pandalanguage$pandac$IRNode** $tmp2414 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 24));
            end2413 = *$tmp2414;
            panda$core$Bit* $tmp2416 = ((panda$core$Bit*) ((char*) $match$427_91294->$data + 32));
            inclusive2415 = *$tmp2416;
            org$pandalanguage$pandac$IRNode** $tmp2418 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 33));
            step2417 = *$tmp2418;
            int $tmp2421;
            {
                panda$core$MutableString* $tmp2425 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2425);
                $tmp2424 = $tmp2425;
                $tmp2423 = $tmp2424;
                result2422 = $tmp2423;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2423));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2424));
                if (((panda$core$Bit) { start2411 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2422, ((panda$core$Object*) start2411));
                }
                }
                if (inclusive2415.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2422, &$s2426);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result2422, &$s2427);
                }
                }
                if (((panda$core$Bit) { end2413 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2422, ((panda$core$Object*) end2413));
                }
                }
                if (((panda$core$Bit) { step2417 != NULL }).value) {
                {
                    panda$core$String* $tmp2431 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2430, ((panda$core$Object*) step2417));
                    $tmp2429 = $tmp2431;
                    panda$core$String* $tmp2433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2429, &$s2432);
                    $tmp2428 = $tmp2433;
                    panda$core$MutableString$append$panda$core$String(result2422, $tmp2428);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2428));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2429));
                }
                }
                panda$core$String* $tmp2436 = panda$core$MutableString$finish$R$panda$core$String(result2422);
                $tmp2435 = $tmp2436;
                $tmp2434 = $tmp2435;
                $returnValue1301 = $tmp2434;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2434));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2435));
                $tmp2421 = 0;
                goto $l2419;
                $l2437:;
                $tmp1293 = 50;
                goto $l1291;
                $l2438:;
                return $returnValue1301;
            }
            $l2419:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2422));
            result2422 = NULL;
            switch ($tmp2421) {
                case 0: goto $l2437;
            }
            $l2440:;
        }
        }
        else {
        panda$core$Bit $tmp2441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp2441.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp2443 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$427_91294->$data + 16));
            kind2442 = *$tmp2443;
            panda$collections$ImmutableArray** $tmp2445 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 24));
            decls2444 = *$tmp2445;
            int $tmp2448;
            {
                panda$core$MutableString* $tmp2452 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2452);
                $tmp2451 = $tmp2452;
                $tmp2450 = $tmp2451;
                result2449 = $tmp2450;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2450));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2451));
                {
                    $match$620_172453 = kind2442;
                    panda$core$Bit $tmp2454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$620_172453.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp2454.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2449, &$s2455);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$620_172453.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp2456.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2449, &$s2457);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$620_172453.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp2458.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2449, &$s2459);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$620_172453.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp2460.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2449, &$s2461);
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp2463 = ((panda$collections$ListView*) decls2444)->$class->itable;
                while ($tmp2463->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2463 = $tmp2463->next;
                }
                $fn2465 $tmp2464 = $tmp2463->methods[1];
                panda$core$String* $tmp2466 = $tmp2464(((panda$collections$ListView*) decls2444));
                $tmp2462 = $tmp2466;
                panda$core$MutableString$append$panda$core$String(result2449, $tmp2462);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2462));
                panda$core$String* $tmp2469 = panda$core$MutableString$finish$R$panda$core$String(result2449);
                $tmp2468 = $tmp2469;
                $tmp2467 = $tmp2468;
                $returnValue1301 = $tmp2467;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2467));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2468));
                $tmp2448 = 0;
                goto $l2446;
                $l2470:;
                $tmp1293 = 51;
                goto $l1291;
                $l2471:;
                return $returnValue1301;
            }
            $l2446:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2449));
            result2449 = NULL;
            switch ($tmp2448) {
                case 0: goto $l2470;
            }
            $l2473:;
        }
        }
        else {
        panda$core$Bit $tmp2474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp2474.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2476 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$427_91294->$data + 16));
            variable2475 = *$tmp2476;
            $tmp2477 = ((org$pandalanguage$pandac$Symbol*) variable2475)->name;
            $returnValue1301 = $tmp2477;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2477));
            $tmp1293 = 52;
            goto $l1291;
            $l2478:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp2480.value) {
        {
            panda$collections$ImmutableArray** $tmp2482 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 16));
            tests2481 = *$tmp2482;
            panda$collections$ImmutableArray** $tmp2484 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 24));
            statements2483 = *$tmp2484;
            ITable* $tmp2492 = ((panda$collections$ListView*) tests2481)->$class->itable;
            while ($tmp2492->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2492 = $tmp2492->next;
            }
            $fn2494 $tmp2493 = $tmp2492->methods[1];
            panda$core$String* $tmp2495 = $tmp2493(((panda$collections$ListView*) tests2481));
            $tmp2491 = $tmp2495;
            panda$core$String* $tmp2496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2490, $tmp2491);
            $tmp2489 = $tmp2496;
            panda$core$String* $tmp2498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2489, &$s2497);
            $tmp2488 = $tmp2498;
            ITable* $tmp2501 = ((panda$collections$ListView*) statements2483)->$class->itable;
            while ($tmp2501->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2501 = $tmp2501->next;
            }
            $fn2503 $tmp2502 = $tmp2501->methods[2];
            panda$core$String* $tmp2504 = $tmp2502(((panda$collections$ListView*) statements2483), &$s2500);
            $tmp2499 = $tmp2504;
            panda$core$String* $tmp2505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2488, $tmp2499);
            $tmp2487 = $tmp2505;
            panda$core$String* $tmp2507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2487, &$s2506);
            $tmp2486 = $tmp2507;
            $tmp2485 = $tmp2486;
            $returnValue1301 = $tmp2485;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2485));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2486));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2487));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2499));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2488));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2489));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2491));
            $tmp1293 = 53;
            goto $l1291;
            $l2508:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp2510.value) {
        {
            panda$core$String** $tmp2512 = ((panda$core$String**) ((char*) $match$427_91294->$data + 16));
            label2511 = *$tmp2512;
            org$pandalanguage$pandac$IRNode** $tmp2514 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 24));
            test2513 = *$tmp2514;
            panda$collections$ImmutableArray** $tmp2516 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 32));
            statements2515 = *$tmp2516;
            int $tmp2519;
            {
                panda$core$MutableString* $tmp2523 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2523);
                $tmp2522 = $tmp2523;
                $tmp2521 = $tmp2522;
                result2520 = $tmp2521;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2521));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2522));
                if (((panda$core$Bit) { label2511 != NULL }).value) {
                {
                    panda$core$String* $tmp2526 = panda$core$String$convert$R$panda$core$String(label2511);
                    $tmp2525 = $tmp2526;
                    panda$core$String* $tmp2528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2525, &$s2527);
                    $tmp2524 = $tmp2528;
                    panda$core$MutableString$append$panda$core$String(result2520, $tmp2524);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2524));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2525));
                }
                }
                panda$core$String* $tmp2532 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2531, ((panda$core$Object*) test2513));
                $tmp2530 = $tmp2532;
                panda$core$String* $tmp2534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2530, &$s2533);
                $tmp2529 = $tmp2534;
                panda$core$MutableString$append$panda$core$String(result2520, $tmp2529);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2529));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2530));
                {
                    int $tmp2537;
                    {
                        ITable* $tmp2541 = ((panda$collections$Iterable*) statements2515)->$class->itable;
                        while ($tmp2541->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2541 = $tmp2541->next;
                        }
                        $fn2543 $tmp2542 = $tmp2541->methods[0];
                        panda$collections$Iterator* $tmp2544 = $tmp2542(((panda$collections$Iterable*) statements2515));
                        $tmp2540 = $tmp2544;
                        $tmp2539 = $tmp2540;
                        Iter$638$172538 = $tmp2539;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2539));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2540));
                        $l2545:;
                        ITable* $tmp2548 = Iter$638$172538->$class->itable;
                        while ($tmp2548->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2548 = $tmp2548->next;
                        }
                        $fn2550 $tmp2549 = $tmp2548->methods[0];
                        panda$core$Bit $tmp2551 = $tmp2549(Iter$638$172538);
                        panda$core$Bit $tmp2552 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2551);
                        bool $tmp2547 = $tmp2552.value;
                        if (!$tmp2547) goto $l2546;
                        {
                            int $tmp2555;
                            {
                                ITable* $tmp2559 = Iter$638$172538->$class->itable;
                                while ($tmp2559->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2559 = $tmp2559->next;
                                }
                                $fn2561 $tmp2560 = $tmp2559->methods[1];
                                panda$core$Object* $tmp2562 = $tmp2560(Iter$638$172538);
                                $tmp2558 = $tmp2562;
                                $tmp2557 = ((org$pandalanguage$pandac$IRNode*) $tmp2558);
                                s2556 = $tmp2557;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2557));
                                panda$core$Panda$unref$panda$core$Object($tmp2558);
                                panda$core$String* $tmp2565 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2556), &$s2564);
                                $tmp2563 = $tmp2565;
                                panda$core$MutableString$append$panda$core$String(result2520, $tmp2563);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2563));
                            }
                            $tmp2555 = -1;
                            goto $l2553;
                            $l2553:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2556));
                            s2556 = NULL;
                            switch ($tmp2555) {
                                case -1: goto $l2566;
                            }
                            $l2566:;
                        }
                        goto $l2545;
                        $l2546:;
                    }
                    $tmp2537 = -1;
                    goto $l2535;
                    $l2535:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$638$172538));
                    Iter$638$172538 = NULL;
                    switch ($tmp2537) {
                        case -1: goto $l2567;
                    }
                    $l2567:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2568, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2520, $tmp2568);
                panda$core$String* $tmp2571 = panda$core$MutableString$finish$R$panda$core$String(result2520);
                $tmp2570 = $tmp2571;
                $tmp2569 = $tmp2570;
                $returnValue1301 = $tmp2569;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2569));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2570));
                $tmp2519 = 0;
                goto $l2517;
                $l2572:;
                $tmp1293 = 54;
                goto $l1291;
                $l2573:;
                return $returnValue1301;
            }
            $l2517:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2520));
            result2520 = NULL;
            switch ($tmp2519) {
                case 0: goto $l2572;
            }
            $l2575:;
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
    $tmp1293 = -1;
    goto $l1291;
    $l1291:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1295));
    switch ($tmp1293) {
        case 22: goto $l1809;
        case 31: goto $l2103;
        case 32: goto $l2114;
        case 8: goto $l1520;
        case 37: goto $l2233;
        case 43: goto $l2290;
        case 29: goto $l2080;
        case 18: goto $l1693;
        case 26: goto $l1915;
        case 33: goto $l2119;
        case 36: goto $l2221;
        case 49: goto $l2408;
        case 15: goto $l1658;
        case 35: goto $l2212;
        case 16: goto $l1670;
        case 42: goto $l2285;
        case 45: goto $l2324;
        case 0: goto $l1314;
        case 11: goto $l1582;
        case 34: goto $l2140;
        case 30: goto $l2100;
        case 38: goto $l2237;
        case 41: goto $l2279;
        case 5: goto $l1415;
        case 39: goto $l2253;
        case 23: goto $l1828;
        case 9: goto $l1543;
        case 17: goto $l1674;
        case 14: goto $l1650;
        case 47: goto $l2354;
        case 27: goto $l1927;
        case 20: goto $l1764;
        case 51: goto $l2471;
        case 4: goto $l1364;
        case 25: goto $l1903;
        case 21: goto $l1790;
        case 12: goto $l1590;
        case 52: goto $l2478;
        case 48: goto $l2387;
        case 2: goto $l1328;
        case 53: goto $l2508;
        case 28: goto $l1985;
        case 19: goto $l1699;
        case 50: goto $l2438;
        case 7: goto $l1516;
        case 40: goto $l2274;
        case 44: goto $l2316;
        case 6: goto $l1503;
        case 10: goto $l1568;
        case 3: goto $l1356;
        case -1: goto $l2576;
        case 1: goto $l1323;
        case 46: goto $l2330;
        case 24: goto $l1894;
        case 13: goto $l1618;
        case 54: goto $l2573;
    }
    $l2576:;
}
void org$pandalanguage$pandac$IRNode$cleanup(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$5_12583 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2584;
    org$pandalanguage$pandac$Position _f02586;
    org$pandalanguage$pandac$IRNode* _f12588 = NULL;
    org$pandalanguage$pandac$IRNode* _f22590 = NULL;
    org$pandalanguage$pandac$Position _f02593;
    org$pandalanguage$pandac$Type* _f12595 = NULL;
    org$pandalanguage$pandac$Position _f02598;
    org$pandalanguage$pandac$Type* _f12600 = NULL;
    org$pandalanguage$pandac$IRNode* _f22602 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f32604;
    org$pandalanguage$pandac$IRNode* _f42606 = NULL;
    org$pandalanguage$pandac$Position _f02609;
    org$pandalanguage$pandac$Type* _f12611 = NULL;
    panda$core$Bit _f22613;
    org$pandalanguage$pandac$Position _f02616;
    panda$collections$ImmutableArray* _f12618 = NULL;
    org$pandalanguage$pandac$Position _f02621;
    panda$collections$ImmutableArray* _f12623 = NULL;
    panda$collections$ImmutableArray* _f22625 = NULL;
    org$pandalanguage$pandac$Position _f02628;
    panda$core$String* _f12630 = NULL;
    org$pandalanguage$pandac$Position _f02633;
    org$pandalanguage$pandac$Type* _f12635 = NULL;
    org$pandalanguage$pandac$MethodRef* _f22637 = NULL;
    panda$collections$ImmutableArray* _f32639 = NULL;
    org$pandalanguage$pandac$Position _f02642;
    org$pandalanguage$pandac$IRNode* _f12644 = NULL;
    org$pandalanguage$pandac$Type* _f22646 = NULL;
    panda$core$Bit _f32648;
    org$pandalanguage$pandac$Position _f02651;
    org$pandalanguage$pandac$ChoiceEntry* _f12653 = NULL;
    org$pandalanguage$pandac$Position _f02656;
    org$pandalanguage$pandac$IRNode* _f12658 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f22660 = NULL;
    panda$core$Int64 _f32662;
    org$pandalanguage$pandac$Position _f02665;
    org$pandalanguage$pandac$Type* _f12667 = NULL;
    org$pandalanguage$pandac$IRNode* _f22669 = NULL;
    org$pandalanguage$pandac$Position _f02672;
    org$pandalanguage$pandac$Type* _f12674 = NULL;
    org$pandalanguage$pandac$Position _f02677;
    panda$core$String* _f12679 = NULL;
    org$pandalanguage$pandac$IRNode* _f02682 = NULL;
    org$pandalanguage$pandac$IRNode* _f12684 = NULL;
    org$pandalanguage$pandac$Position _f02687;
    panda$core$String* _f12689 = NULL;
    panda$collections$ImmutableArray* _f22691 = NULL;
    org$pandalanguage$pandac$IRNode* _f32693 = NULL;
    org$pandalanguage$pandac$IRNode* _f02696 = NULL;
    panda$collections$ImmutableArray* _f12698 = NULL;
    org$pandalanguage$pandac$IRNode* _f02701 = NULL;
    org$pandalanguage$pandac$IRNode* _f12703 = NULL;
    org$pandalanguage$pandac$Position _f02706;
    org$pandalanguage$pandac$Type* _f12708 = NULL;
    org$pandalanguage$pandac$IRNode* _f22710 = NULL;
    org$pandalanguage$pandac$FieldDecl* _f32712 = NULL;
    org$pandalanguage$pandac$Position _f02715;
    org$pandalanguage$pandac$IRNode* _f12717 = NULL;
    panda$collections$ImmutableArray* _f22719 = NULL;
    org$pandalanguage$pandac$IRNode* _f32721 = NULL;
    org$pandalanguage$pandac$Position _f02724;
    org$pandalanguage$pandac$Type* _f12726 = NULL;
    panda$core$UInt64 _f22728;
    org$pandalanguage$pandac$Position _f02731;
    org$pandalanguage$pandac$IRNode* _f12733 = NULL;
    org$pandalanguage$pandac$Position _f02736;
    org$pandalanguage$pandac$IRNode* _f12738 = NULL;
    org$pandalanguage$pandac$Position _f02741;
    panda$core$String* _f12743 = NULL;
    panda$collections$ImmutableArray* _f22745 = NULL;
    org$pandalanguage$pandac$Position _f02748;
    org$pandalanguage$pandac$IRNode* _f12750 = NULL;
    panda$collections$ImmutableArray* _f22752 = NULL;
    panda$collections$ImmutableArray* _f32754 = NULL;
    org$pandalanguage$pandac$Position _f02757;
    org$pandalanguage$pandac$IRNode* _f12759 = NULL;
    org$pandalanguage$pandac$MethodRef* _f22761 = NULL;
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
    int $tmp2579;
    {
        int $tmp2582;
        {
            $tmp2584 = self;
            $match$5_12583 = $tmp2584;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2584));
            panda$core$Bit $tmp2585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp2585.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2587 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02586 = *$tmp2587;
                org$pandalanguage$pandac$IRNode** $tmp2589 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 16));
                _f12588 = *$tmp2589;
                org$pandalanguage$pandac$IRNode** $tmp2591 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 24));
                _f22590 = *$tmp2591;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12588));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22590));
            }
            }
            else {
            panda$core$Bit $tmp2592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp2592.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2594 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02593 = *$tmp2594;
                org$pandalanguage$pandac$Type** $tmp2596 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12583->$data + 16));
                _f12595 = *$tmp2596;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12595));
            }
            }
            else {
            panda$core$Bit $tmp2597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp2597.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2599 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02598 = *$tmp2599;
                org$pandalanguage$pandac$Type** $tmp2601 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12583->$data + 16));
                _f12600 = *$tmp2601;
                org$pandalanguage$pandac$IRNode** $tmp2603 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 24));
                _f22602 = *$tmp2603;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2605 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12583->$data + 32));
                _f32604 = *$tmp2605;
                org$pandalanguage$pandac$IRNode** $tmp2607 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 40));
                _f42606 = *$tmp2607;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12600));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22602));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42606));
            }
            }
            else {
            panda$core$Bit $tmp2608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp2608.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2610 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02609 = *$tmp2610;
                org$pandalanguage$pandac$Type** $tmp2612 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12583->$data + 16));
                _f12611 = *$tmp2612;
                panda$core$Bit* $tmp2614 = ((panda$core$Bit*) ((char*) $match$5_12583->$data + 24));
                _f22613 = *$tmp2614;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12611));
            }
            }
            else {
            panda$core$Bit $tmp2615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp2615.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2617 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02616 = *$tmp2617;
                panda$collections$ImmutableArray** $tmp2619 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12583->$data + 16));
                _f12618 = *$tmp2619;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12618));
            }
            }
            else {
            panda$core$Bit $tmp2620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp2620.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2622 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02621 = *$tmp2622;
                panda$collections$ImmutableArray** $tmp2624 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12583->$data + 16));
                _f12623 = *$tmp2624;
                panda$collections$ImmutableArray** $tmp2626 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12583->$data + 24));
                _f22625 = *$tmp2626;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12623));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22625));
            }
            }
            else {
            panda$core$Bit $tmp2627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp2627.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2629 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02628 = *$tmp2629;
                panda$core$String** $tmp2631 = ((panda$core$String**) ((char*) $match$5_12583->$data + 16));
                _f12630 = *$tmp2631;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12630));
            }
            }
            else {
            panda$core$Bit $tmp2632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 7 }));
            if ($tmp2632.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2634 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02633 = *$tmp2634;
                org$pandalanguage$pandac$Type** $tmp2636 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12583->$data + 16));
                _f12635 = *$tmp2636;
                org$pandalanguage$pandac$MethodRef** $tmp2638 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12583->$data + 24));
                _f22637 = *$tmp2638;
                panda$collections$ImmutableArray** $tmp2640 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12583->$data + 32));
                _f32639 = *$tmp2640;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12635));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22637));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32639));
            }
            }
            else {
            panda$core$Bit $tmp2641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp2641.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2643 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02642 = *$tmp2643;
                org$pandalanguage$pandac$IRNode** $tmp2645 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 16));
                _f12644 = *$tmp2645;
                org$pandalanguage$pandac$Type** $tmp2647 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12583->$data + 24));
                _f22646 = *$tmp2647;
                panda$core$Bit* $tmp2649 = ((panda$core$Bit*) ((char*) $match$5_12583->$data + 32));
                _f32648 = *$tmp2649;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12644));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22646));
            }
            }
            else {
            panda$core$Bit $tmp2650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp2650.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2652 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02651 = *$tmp2652;
                org$pandalanguage$pandac$ChoiceEntry** $tmp2654 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12583->$data + 16));
                _f12653 = *$tmp2654;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12653));
            }
            }
            else {
            panda$core$Bit $tmp2655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 10 }));
            if ($tmp2655.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2657 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02656 = *$tmp2657;
                org$pandalanguage$pandac$IRNode** $tmp2659 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 16));
                _f12658 = *$tmp2659;
                org$pandalanguage$pandac$ChoiceEntry** $tmp2661 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12583->$data + 24));
                _f22660 = *$tmp2661;
                panda$core$Int64* $tmp2663 = ((panda$core$Int64*) ((char*) $match$5_12583->$data + 32));
                _f32662 = *$tmp2663;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12658));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22660));
            }
            }
            else {
            panda$core$Bit $tmp2664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp2664.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2666 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02665 = *$tmp2666;
                org$pandalanguage$pandac$Type** $tmp2668 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12583->$data + 16));
                _f12667 = *$tmp2668;
                org$pandalanguage$pandac$IRNode** $tmp2670 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 24));
                _f22669 = *$tmp2670;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12667));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22669));
            }
            }
            else {
            panda$core$Bit $tmp2671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp2671.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2673 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02672 = *$tmp2673;
                org$pandalanguage$pandac$Type** $tmp2675 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12583->$data + 16));
                _f12674 = *$tmp2675;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12674));
            }
            }
            else {
            panda$core$Bit $tmp2676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp2676.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2678 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02677 = *$tmp2678;
                panda$core$String** $tmp2680 = ((panda$core$String**) ((char*) $match$5_12583->$data + 16));
                _f12679 = *$tmp2680;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12679));
            }
            }
            else {
            panda$core$Bit $tmp2681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp2681.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2683 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 0));
                _f02682 = *$tmp2683;
                org$pandalanguage$pandac$IRNode** $tmp2685 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 8));
                _f12684 = *$tmp2685;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02682));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12684));
            }
            }
            else {
            panda$core$Bit $tmp2686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp2686.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2688 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02687 = *$tmp2688;
                panda$core$String** $tmp2690 = ((panda$core$String**) ((char*) $match$5_12583->$data + 16));
                _f12689 = *$tmp2690;
                panda$collections$ImmutableArray** $tmp2692 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12583->$data + 24));
                _f22691 = *$tmp2692;
                org$pandalanguage$pandac$IRNode** $tmp2694 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 32));
                _f32693 = *$tmp2694;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12689));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22691));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32693));
            }
            }
            else {
            panda$core$Bit $tmp2695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 16 }));
            if ($tmp2695.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2697 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 0));
                _f02696 = *$tmp2697;
                panda$collections$ImmutableArray** $tmp2699 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12583->$data + 8));
                _f12698 = *$tmp2699;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02696));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12698));
            }
            }
            else {
            panda$core$Bit $tmp2700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp2700.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2702 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 0));
                _f02701 = *$tmp2702;
                org$pandalanguage$pandac$IRNode** $tmp2704 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 8));
                _f12703 = *$tmp2704;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02701));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12703));
            }
            }
            else {
            panda$core$Bit $tmp2705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp2705.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2707 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02706 = *$tmp2707;
                org$pandalanguage$pandac$Type** $tmp2709 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12583->$data + 16));
                _f12708 = *$tmp2709;
                org$pandalanguage$pandac$IRNode** $tmp2711 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 24));
                _f22710 = *$tmp2711;
                org$pandalanguage$pandac$FieldDecl** $tmp2713 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$5_12583->$data + 32));
                _f32712 = *$tmp2713;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12708));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22710));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32712));
            }
            }
            else {
            panda$core$Bit $tmp2714 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp2714.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2716 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02715 = *$tmp2716;
                org$pandalanguage$pandac$IRNode** $tmp2718 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 16));
                _f12717 = *$tmp2718;
                panda$collections$ImmutableArray** $tmp2720 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12583->$data + 24));
                _f22719 = *$tmp2720;
                org$pandalanguage$pandac$IRNode** $tmp2722 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 32));
                _f32721 = *$tmp2722;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12717));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22719));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32721));
            }
            }
            else {
            panda$core$Bit $tmp2723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 20 }));
            if ($tmp2723.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2725 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02724 = *$tmp2725;
                org$pandalanguage$pandac$Type** $tmp2727 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12583->$data + 16));
                _f12726 = *$tmp2727;
                panda$core$UInt64* $tmp2729 = ((panda$core$UInt64*) ((char*) $match$5_12583->$data + 24));
                _f22728 = *$tmp2729;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12726));
            }
            }
            else {
            panda$core$Bit $tmp2730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 21 }));
            if ($tmp2730.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2732 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02731 = *$tmp2732;
                org$pandalanguage$pandac$IRNode** $tmp2734 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 16));
                _f12733 = *$tmp2734;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12733));
            }
            }
            else {
            panda$core$Bit $tmp2735 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp2735.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2737 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02736 = *$tmp2737;
                org$pandalanguage$pandac$IRNode** $tmp2739 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 16));
                _f12738 = *$tmp2739;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12738));
            }
            }
            else {
            panda$core$Bit $tmp2740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp2740.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2742 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02741 = *$tmp2742;
                panda$core$String** $tmp2744 = ((panda$core$String**) ((char*) $match$5_12583->$data + 16));
                _f12743 = *$tmp2744;
                panda$collections$ImmutableArray** $tmp2746 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12583->$data + 24));
                _f22745 = *$tmp2746;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12743));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22745));
            }
            }
            else {
            panda$core$Bit $tmp2747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp2747.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2749 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02748 = *$tmp2749;
                org$pandalanguage$pandac$IRNode** $tmp2751 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 16));
                _f12750 = *$tmp2751;
                panda$collections$ImmutableArray** $tmp2753 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12583->$data + 24));
                _f22752 = *$tmp2753;
                panda$collections$ImmutableArray** $tmp2755 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12583->$data + 32));
                _f32754 = *$tmp2755;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12750));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22752));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32754));
            }
            }
            else {
            panda$core$Bit $tmp2756 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp2756.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2758 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02757 = *$tmp2758;
                org$pandalanguage$pandac$IRNode** $tmp2760 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 16));
                _f12759 = *$tmp2760;
                org$pandalanguage$pandac$MethodRef** $tmp2762 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12583->$data + 24));
                _f22761 = *$tmp2762;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12759));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22761));
            }
            }
            else {
            panda$core$Bit $tmp2763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp2763.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2765 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02764 = *$tmp2765;
                org$pandalanguage$pandac$Type** $tmp2767 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12583->$data + 16));
                _f12766 = *$tmp2767;
                panda$core$UInt64* $tmp2769 = ((panda$core$UInt64*) ((char*) $match$5_12583->$data + 24));
                _f22768 = *$tmp2769;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12766));
            }
            }
            else {
            panda$core$Bit $tmp2770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 27 }));
            if ($tmp2770.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2772 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02771 = *$tmp2772;
                org$pandalanguage$pandac$Type** $tmp2774 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12583->$data + 16));
                _f12773 = *$tmp2774;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12773));
            }
            }
            else {
            panda$core$Bit $tmp2775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 28 }));
            if ($tmp2775.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2777 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02776 = *$tmp2777;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2779 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12583->$data + 16));
                _f12778 = *$tmp2779;
                org$pandalanguage$pandac$IRNode** $tmp2781 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 24));
                _f22780 = *$tmp2781;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22780));
            }
            }
            else {
            panda$core$Bit $tmp2782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 29 }));
            if ($tmp2782.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2784 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02783 = *$tmp2784;
                panda$core$String** $tmp2786 = ((panda$core$String**) ((char*) $match$5_12583->$data + 16));
                _f12785 = *$tmp2786;
                org$pandalanguage$pandac$IRNode** $tmp2788 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 24));
                _f22787 = *$tmp2788;
                org$pandalanguage$pandac$IRNode** $tmp2790 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 32));
                _f32789 = *$tmp2790;
                panda$collections$ImmutableArray** $tmp2792 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12583->$data + 40));
                _f42791 = *$tmp2792;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12785));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22787));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32789));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42791));
            }
            }
            else {
            panda$core$Bit $tmp2793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 30 }));
            if ($tmp2793.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2795 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02794 = *$tmp2795;
                org$pandalanguage$pandac$Type** $tmp2797 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12583->$data + 16));
                _f12796 = *$tmp2797;
                panda$core$Real64* $tmp2799 = ((panda$core$Real64*) ((char*) $match$5_12583->$data + 24));
                _f22798 = *$tmp2799;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12796));
            }
            }
            else {
            panda$core$Bit $tmp2800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 31 }));
            if ($tmp2800.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2802 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02801 = *$tmp2802;
                org$pandalanguage$pandac$IRNode** $tmp2804 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 16));
                _f12803 = *$tmp2804;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12803));
            }
            }
            else {
            panda$core$Bit $tmp2805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 32 }));
            if ($tmp2805.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2807 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02806 = *$tmp2807;
                org$pandalanguage$pandac$Type** $tmp2809 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12583->$data + 16));
                _f12808 = *$tmp2809;
                panda$core$Int64* $tmp2811 = ((panda$core$Int64*) ((char*) $match$5_12583->$data + 24));
                _f22810 = *$tmp2811;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12808));
            }
            }
            else {
            panda$core$Bit $tmp2812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp2812.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2814 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 0));
                _f02813 = *$tmp2814;
                panda$core$Int64* $tmp2816 = ((panda$core$Int64*) ((char*) $match$5_12583->$data + 8));
                _f12815 = *$tmp2816;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02813));
            }
            }
            else {
            panda$core$Bit $tmp2817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp2817.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2819 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02818 = *$tmp2819;
                org$pandalanguage$pandac$Type** $tmp2821 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12583->$data + 16));
                _f12820 = *$tmp2821;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12820));
            }
            }
            else {
            panda$core$Bit $tmp2822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 35 }));
            if ($tmp2822.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2824 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02823 = *$tmp2824;
                panda$core$String** $tmp2826 = ((panda$core$String**) ((char*) $match$5_12583->$data + 16));
                _f12825 = *$tmp2826;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12825));
            }
            }
            else {
            panda$core$Bit $tmp2827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp2827.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2829 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02828 = *$tmp2829;
                org$pandalanguage$pandac$Type** $tmp2831 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12583->$data + 16));
                _f12830 = *$tmp2831;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12830));
            }
            }
            else {
            panda$core$Bit $tmp2832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 37 }));
            if ($tmp2832.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2834 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02833 = *$tmp2834;
                org$pandalanguage$pandac$IRNode** $tmp2836 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 16));
                _f12835 = *$tmp2836;
                org$pandalanguage$pandac$IRNode** $tmp2838 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 24));
                _f22837 = *$tmp2838;
                org$pandalanguage$pandac$IRNode** $tmp2840 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 32));
                _f32839 = *$tmp2840;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12835));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22837));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32839));
            }
            }
            else {
            panda$core$Bit $tmp2841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 38 }));
            if ($tmp2841.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2843 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02842 = *$tmp2843;
                org$pandalanguage$pandac$Type** $tmp2845 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12583->$data + 16));
                _f12844 = *$tmp2845;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12844));
            }
            }
            else {
            panda$core$Bit $tmp2846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp2846.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2848 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02847 = *$tmp2848;
                panda$core$String** $tmp2850 = ((panda$core$String**) ((char*) $match$5_12583->$data + 16));
                _f12849 = *$tmp2850;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12849));
            }
            }
            else {
            panda$core$Bit $tmp2851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp2851.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2853 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02852 = *$tmp2853;
                org$pandalanguage$pandac$Type** $tmp2855 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12583->$data + 16));
                _f12854 = *$tmp2855;
                org$pandalanguage$pandac$IRNode** $tmp2857 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 24));
                _f22856 = *$tmp2857;
                panda$collections$ImmutableArray** $tmp2859 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12583->$data + 32));
                _f32858 = *$tmp2859;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12854));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22856));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32858));
            }
            }
            else {
            panda$core$Bit $tmp2860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 41 }));
            if ($tmp2860.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2862 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02861 = *$tmp2862;
                org$pandalanguage$pandac$Type** $tmp2864 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12583->$data + 16));
                _f12863 = *$tmp2864;
                org$pandalanguage$pandac$IRNode** $tmp2866 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 24));
                _f22865 = *$tmp2866;
                panda$collections$ImmutableArray** $tmp2868 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12583->$data + 32));
                _f32867 = *$tmp2868;
                panda$collections$ImmutableArray** $tmp2870 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12583->$data + 40));
                _f42869 = *$tmp2870;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12863));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22865));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32867));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42869));
            }
            }
            else {
            panda$core$Bit $tmp2871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 42 }));
            if ($tmp2871.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2873 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02872 = *$tmp2873;
                org$pandalanguage$pandac$IRNode** $tmp2875 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 16));
                _f12874 = *$tmp2875;
                panda$collections$ImmutableArray** $tmp2877 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12583->$data + 24));
                _f22876 = *$tmp2877;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12874));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22876));
            }
            }
            else {
            panda$core$Bit $tmp2878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 43 }));
            if ($tmp2878.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2880 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02879 = *$tmp2880;
                org$pandalanguage$pandac$IRNode** $tmp2882 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 16));
                _f12881 = *$tmp2882;
                org$pandalanguage$pandac$IRNode** $tmp2884 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 24));
                _f22883 = *$tmp2884;
                panda$core$Bit* $tmp2886 = ((panda$core$Bit*) ((char*) $match$5_12583->$data + 32));
                _f32885 = *$tmp2886;
                org$pandalanguage$pandac$IRNode** $tmp2888 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 33));
                _f42887 = *$tmp2888;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12881));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22883));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42887));
            }
            }
            else {
            panda$core$Bit $tmp2889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 44 }));
            if ($tmp2889.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2891 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02890 = *$tmp2891;
                org$pandalanguage$pandac$Variable$Kind* $tmp2893 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_12583->$data + 16));
                _f12892 = *$tmp2893;
                panda$collections$ImmutableArray** $tmp2895 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12583->$data + 24));
                _f22894 = *$tmp2895;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22894));
            }
            }
            else {
            panda$core$Bit $tmp2896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 45 }));
            if ($tmp2896.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2898 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02897 = *$tmp2898;
                org$pandalanguage$pandac$Variable** $tmp2900 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$5_12583->$data + 16));
                _f12899 = *$tmp2900;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12899));
            }
            }
            else {
            panda$core$Bit $tmp2901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 46 }));
            if ($tmp2901.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2903 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02902 = *$tmp2903;
                panda$collections$ImmutableArray** $tmp2905 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12583->$data + 16));
                _f12904 = *$tmp2905;
                panda$collections$ImmutableArray** $tmp2907 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12583->$data + 24));
                _f22906 = *$tmp2907;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12904));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22906));
            }
            }
            else {
            panda$core$Bit $tmp2908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12583->$rawValue, ((panda$core$Int64) { 47 }));
            if ($tmp2908.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2910 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12583->$data + 0));
                _f02909 = *$tmp2910;
                panda$core$String** $tmp2912 = ((panda$core$String**) ((char*) $match$5_12583->$data + 16));
                _f12911 = *$tmp2912;
                org$pandalanguage$pandac$IRNode** $tmp2914 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12583->$data + 24));
                _f22913 = *$tmp2914;
                panda$collections$ImmutableArray** $tmp2916 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12583->$data + 32));
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
        $tmp2582 = -1;
        goto $l2580;
        $l2580:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2584));
        switch ($tmp2582) {
            case -1: goto $l2917;
        }
        $l2917:;
    }
    $tmp2579 = -1;
    goto $l2577;
    $l2577:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2579) {
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
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$MethodRef* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3116;
    org$pandalanguage$pandac$IRNode* $tmp3119;
    org$pandalanguage$pandac$MethodRef* $tmp3120;
    org$pandalanguage$pandac$MethodRef* $tmp3123;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3115 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3115 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3117 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3116 = *$tmp3117;
        org$pandalanguage$pandac$IRNode** $tmp3118 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3119 = p_f1;
        *$tmp3118 = $tmp3119;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3119));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3116));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp3121 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3120 = *$tmp3121;
        org$pandalanguage$pandac$MethodRef** $tmp3122 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3123 = p_f2;
        *$tmp3122 = $tmp3123;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3123));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3120));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3126;
    org$pandalanguage$pandac$IRNode* $tmp3129;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3124 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3124 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp3125 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp3125 = p_f1;
    {
        org$pandalanguage$pandac$IRNode** $tmp3127 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3126 = *$tmp3127;
        org$pandalanguage$pandac$IRNode** $tmp3128 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3129 = p_f2;
        *$tmp3128 = $tmp3129;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3129));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3126));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp3131;
    panda$core$String* $tmp3134;
    org$pandalanguage$pandac$IRNode* $tmp3135;
    org$pandalanguage$pandac$IRNode* $tmp3138;
    org$pandalanguage$pandac$IRNode* $tmp3139;
    org$pandalanguage$pandac$IRNode* $tmp3142;
    panda$collections$ImmutableArray* $tmp3143;
    panda$collections$ImmutableArray* $tmp3146;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3130 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3130 = p_f0;
    {
        panda$core$String** $tmp3132 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3131 = *$tmp3132;
        panda$core$String** $tmp3133 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3134 = p_f1;
        *$tmp3133 = $tmp3134;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3134));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3131));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3136 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3135 = *$tmp3136;
        org$pandalanguage$pandac$IRNode** $tmp3137 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3138 = p_f2;
        *$tmp3137 = $tmp3138;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3138));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3135));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3140 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3139 = *$tmp3140;
        org$pandalanguage$pandac$IRNode** $tmp3141 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3142 = p_f3;
        *$tmp3141 = $tmp3142;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3142));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3139));
    }
    {
        panda$collections$ImmutableArray** $tmp3144 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3143 = *$tmp3144;
        panda$collections$ImmutableArray** $tmp3145 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3146 = p_f4;
        *$tmp3145 = $tmp3146;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3146));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3143));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Real64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3148;
    org$pandalanguage$pandac$Type* $tmp3151;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3147 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3147 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3149 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3148 = *$tmp3149;
        org$pandalanguage$pandac$Type** $tmp3150 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3151 = p_f1;
        *$tmp3150 = $tmp3151;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3151));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3148));
    }
    panda$core$Real64* $tmp3152 = ((panda$core$Real64*) ((char*) self->$data + 24));
    *$tmp3152 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3154;
    org$pandalanguage$pandac$IRNode* $tmp3157;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3153 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3153 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3155 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3154 = *$tmp3155;
        org$pandalanguage$pandac$IRNode** $tmp3156 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3157 = p_f1;
        *$tmp3156 = $tmp3157;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3157));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3154));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Int64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3159;
    org$pandalanguage$pandac$Type* $tmp3162;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3158 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3158 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3160 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3159 = *$tmp3160;
        org$pandalanguage$pandac$Type** $tmp3161 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3162 = p_f1;
        *$tmp3161 = $tmp3162;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3162));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3159));
    }
    panda$core$Int64* $tmp3163 = ((panda$core$Int64*) ((char*) self->$data + 24));
    *$tmp3163 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$core$Int64 p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3164;
    org$pandalanguage$pandac$IRNode* $tmp3167;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3165 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3164 = *$tmp3165;
        org$pandalanguage$pandac$IRNode** $tmp3166 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3167 = p_f0;
        *$tmp3166 = $tmp3167;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3167));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3164));
    }
    panda$core$Int64* $tmp3168 = ((panda$core$Int64*) ((char*) self->$data + 8));
    *$tmp3168 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp3170;
    panda$core$String* $tmp3173;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3169 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3169 = p_f0;
    {
        panda$core$String** $tmp3171 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3170 = *$tmp3171;
        panda$core$String** $tmp3172 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3173 = p_f1;
        *$tmp3172 = $tmp3173;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3173));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3170));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3175;
    org$pandalanguage$pandac$IRNode* $tmp3178;
    org$pandalanguage$pandac$IRNode* $tmp3179;
    org$pandalanguage$pandac$IRNode* $tmp3182;
    org$pandalanguage$pandac$IRNode* $tmp3183;
    org$pandalanguage$pandac$IRNode* $tmp3186;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3174 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3174 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3176 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3175 = *$tmp3176;
        org$pandalanguage$pandac$IRNode** $tmp3177 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3178 = p_f1;
        *$tmp3177 = $tmp3178;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3178));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3175));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3180 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3179 = *$tmp3180;
        org$pandalanguage$pandac$IRNode** $tmp3181 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3182 = p_f2;
        *$tmp3181 = $tmp3182;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3182));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3179));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3184 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3183 = *$tmp3184;
        org$pandalanguage$pandac$IRNode** $tmp3185 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3186 = p_f3;
        *$tmp3185 = $tmp3186;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3186));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3183));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3188;
    org$pandalanguage$pandac$Type* $tmp3191;
    org$pandalanguage$pandac$IRNode* $tmp3192;
    org$pandalanguage$pandac$IRNode* $tmp3195;
    panda$collections$ImmutableArray* $tmp3196;
    panda$collections$ImmutableArray* $tmp3199;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3187 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3187 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3189 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3188 = *$tmp3189;
        org$pandalanguage$pandac$Type** $tmp3190 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3191 = p_f1;
        *$tmp3190 = $tmp3191;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3191));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3188));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3193 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3192 = *$tmp3193;
        org$pandalanguage$pandac$IRNode** $tmp3194 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3195 = p_f2;
        *$tmp3194 = $tmp3195;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3195));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3192));
    }
    {
        panda$collections$ImmutableArray** $tmp3197 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3196 = *$tmp3197;
        panda$collections$ImmutableArray** $tmp3198 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3199 = p_f3;
        *$tmp3198 = $tmp3199;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3199));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3196));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3, panda$collections$ImmutableArray* p_f4) {
    org$pandalanguage$pandac$Type* $tmp3201;
    org$pandalanguage$pandac$Type* $tmp3204;
    org$pandalanguage$pandac$IRNode* $tmp3205;
    org$pandalanguage$pandac$IRNode* $tmp3208;
    panda$collections$ImmutableArray* $tmp3209;
    panda$collections$ImmutableArray* $tmp3212;
    panda$collections$ImmutableArray* $tmp3213;
    panda$collections$ImmutableArray* $tmp3216;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3200 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3200 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3202 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3201 = *$tmp3202;
        org$pandalanguage$pandac$Type** $tmp3203 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3204 = p_f1;
        *$tmp3203 = $tmp3204;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3204));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3201));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3206 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3205 = *$tmp3206;
        org$pandalanguage$pandac$IRNode** $tmp3207 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3208 = p_f2;
        *$tmp3207 = $tmp3208;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3208));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3205));
    }
    {
        panda$collections$ImmutableArray** $tmp3210 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3209 = *$tmp3210;
        panda$collections$ImmutableArray** $tmp3211 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3212 = p_f3;
        *$tmp3211 = $tmp3212;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3212));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3209));
    }
    {
        panda$collections$ImmutableArray** $tmp3214 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3213 = *$tmp3214;
        panda$collections$ImmutableArray** $tmp3215 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3216 = p_f4;
        *$tmp3215 = $tmp3216;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3216));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3213));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3218;
    org$pandalanguage$pandac$IRNode* $tmp3221;
    panda$collections$ImmutableArray* $tmp3222;
    panda$collections$ImmutableArray* $tmp3225;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3217 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3217 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3219 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3218 = *$tmp3219;
        org$pandalanguage$pandac$IRNode** $tmp3220 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3221 = p_f1;
        *$tmp3220 = $tmp3221;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3221));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3218));
    }
    {
        panda$collections$ImmutableArray** $tmp3223 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3222 = *$tmp3223;
        panda$collections$ImmutableArray** $tmp3224 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3225 = p_f2;
        *$tmp3224 = $tmp3225;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3225));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3222));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$IRNode* $tmp3227;
    org$pandalanguage$pandac$IRNode* $tmp3230;
    org$pandalanguage$pandac$IRNode* $tmp3231;
    org$pandalanguage$pandac$IRNode* $tmp3234;
    org$pandalanguage$pandac$IRNode* $tmp3236;
    org$pandalanguage$pandac$IRNode* $tmp3239;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3226 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3226 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3228 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3227 = *$tmp3228;
        org$pandalanguage$pandac$IRNode** $tmp3229 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3230 = p_f1;
        *$tmp3229 = $tmp3230;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3230));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3227));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3232 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3231 = *$tmp3232;
        org$pandalanguage$pandac$IRNode** $tmp3233 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3234 = p_f2;
        *$tmp3233 = $tmp3234;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3234));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3231));
    }
    panda$core$Bit* $tmp3235 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp3235 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp3237 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3236 = *$tmp3237;
        org$pandalanguage$pandac$IRNode** $tmp3238 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3239 = p_f4;
        *$tmp3238 = $tmp3239;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3239));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3236));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp3242;
    panda$collections$ImmutableArray* $tmp3245;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3240 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3240 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp3241 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp3241 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp3243 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3242 = *$tmp3243;
        panda$collections$ImmutableArray** $tmp3244 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3245 = p_f2;
        *$tmp3244 = $tmp3245;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3245));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3242));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable* p_f1) {
    org$pandalanguage$pandac$Variable* $tmp3247;
    org$pandalanguage$pandac$Variable* $tmp3250;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3246 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3246 = p_f0;
    {
        org$pandalanguage$pandac$Variable** $tmp3248 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3247 = *$tmp3248;
        org$pandalanguage$pandac$Variable** $tmp3249 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3250 = p_f1;
        *$tmp3249 = $tmp3250;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3250));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3247));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp3252;
    panda$core$String* $tmp3255;
    org$pandalanguage$pandac$IRNode* $tmp3256;
    org$pandalanguage$pandac$IRNode* $tmp3259;
    panda$collections$ImmutableArray* $tmp3260;
    panda$collections$ImmutableArray* $tmp3263;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3251 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3251 = p_f0;
    {
        panda$core$String** $tmp3253 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3252 = *$tmp3253;
        panda$core$String** $tmp3254 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3255 = p_f1;
        *$tmp3254 = $tmp3255;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3255));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3252));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3257 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3256 = *$tmp3257;
        org$pandalanguage$pandac$IRNode** $tmp3258 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3259 = p_f2;
        *$tmp3258 = $tmp3259;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3259));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3256));
    }
    {
        panda$collections$ImmutableArray** $tmp3261 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3260 = *$tmp3261;
        panda$collections$ImmutableArray** $tmp3262 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3263 = p_f3;
        *$tmp3262 = $tmp3263;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3263));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3260));
    }
}

