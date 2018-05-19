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
typedef org$pandalanguage$pandac$Type* (*$fn1548)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1572)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1603)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1680)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1691)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1723)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1730)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1741)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1771)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1793)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1812)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1849)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1856)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1867)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1946)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1953)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1964)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2007)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2014)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2025)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2041)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2048)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2059)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2084)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2124)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2173)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2180)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2191)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2333)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2358)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2384)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn2519)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2526)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2537)(panda$collections$Iterator*);

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
static panda$core$String $s1538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x4e\x54\x36\x34\x5f\x57\x52\x41\x50\x28", 11, -7093166379287162761, NULL };
static panda$core$String $s1560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1605 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1651 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x2a\x2d", 24, 1541443738414735436, NULL };
static panda$core$String $s1660 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s1662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s1682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1685 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s1744 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s1752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1795 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x2a\x20\x61\x6e\x64\x20\x74\x68\x65\x6e\x3a\x20", 14, -3277098584181619124, NULL };
static panda$core$String $s1798 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s1870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1879 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s1914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1916 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s1935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1937 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1995 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1997 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2028 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2032 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s2062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2086 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2089 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s2126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s2160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s2163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s2222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s2238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s2263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s2297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s2302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s2305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s2360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s2412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s2415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s2417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s2442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s2444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s2446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s2472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s2476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s2479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2507 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s2509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
    org$pandalanguage$pandac$IRNode* value1543 = NULL;
    org$pandalanguage$pandac$Type* type1545 = NULL;
    org$pandalanguage$pandac$Type* $tmp1547;
    org$pandalanguage$pandac$Type* $tmp1550;
    panda$core$String* $tmp1553;
    panda$core$String* $tmp1554;
    panda$core$String* $tmp1555;
    panda$core$String* $tmp1556;
    panda$core$String* $tmp1557;
    panda$core$String* $tmp1567;
    panda$core$String* $tmp1568;
    panda$core$String* $tmp1569;
    panda$core$String* $tmp1570;
    panda$core$String* $tmp1571;
    org$pandalanguage$pandac$ChoiceEntry* ce1582 = NULL;
    panda$core$String* $tmp1584;
    panda$core$String* $tmp1585;
    org$pandalanguage$pandac$IRNode* base1590 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce1592 = NULL;
    panda$core$Int64 field1594;
    panda$core$String* $tmp1596;
    panda$core$String* $tmp1597;
    panda$core$String* $tmp1598;
    panda$core$String* $tmp1599;
    panda$core$String* $tmp1600;
    panda$core$String* $tmp1601;
    panda$core$String* $tmp1602;
    panda$core$Object* $tmp1610;
    org$pandalanguage$pandac$Type* type1618 = NULL;
    org$pandalanguage$pandac$IRNode* call1620 = NULL;
    org$pandalanguage$pandac$IRNode* $match$474_171625 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1626;
    panda$collections$ImmutableArray* args1628 = NULL;
    panda$core$String* $tmp1630;
    panda$core$String* $tmp1631;
    panda$core$String* $tmp1632;
    panda$core$String* $tmp1633;
    panda$core$String* $tmp1634;
    panda$core$String* $tmp1638;
    org$pandalanguage$pandac$Type* Type1648 = NULL;
    panda$core$String* $tmp1650;
    panda$core$String* label1655 = NULL;
    panda$core$String* $tmp1657;
    panda$core$String* $tmp1658;
    panda$core$String* $tmp1659;
    panda$core$String* $tmp1666;
    org$pandalanguage$pandac$IRNode* target1671 = NULL;
    org$pandalanguage$pandac$IRNode* value1673 = NULL;
    panda$core$String* $tmp1675;
    panda$core$String* $tmp1676;
    panda$core$String* $tmp1677;
    panda$core$String* $tmp1678;
    panda$core$String* $tmp1679;
    panda$core$String* $tmp1689;
    panda$core$String* $tmp1690;
    panda$core$String* label1696 = NULL;
    panda$collections$ImmutableArray* statements1698 = NULL;
    org$pandalanguage$pandac$IRNode* test1700 = NULL;
    panda$core$MutableString* result1705 = NULL;
    panda$core$MutableString* $tmp1706;
    panda$core$MutableString* $tmp1707;
    panda$core$String* $tmp1709;
    panda$core$String* $tmp1710;
    panda$collections$Iterator* Iter$498$171718 = NULL;
    panda$collections$Iterator* $tmp1719;
    panda$collections$Iterator* $tmp1720;
    org$pandalanguage$pandac$IRNode* s1736 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1737;
    panda$core$Object* $tmp1738;
    panda$core$String* $tmp1743;
    panda$core$String* $tmp1748;
    panda$core$String* $tmp1749;
    panda$core$String* $tmp1754;
    panda$core$String* $tmp1755;
    org$pandalanguage$pandac$IRNode* m1762 = NULL;
    panda$collections$ImmutableArray* args1764 = NULL;
    panda$core$String* $tmp1766;
    panda$core$String* $tmp1767;
    panda$core$String* $tmp1768;
    panda$core$String* $tmp1769;
    panda$core$String* $tmp1770;
    panda$core$String* $tmp1775;
    org$pandalanguage$pandac$IRNode* expr1784 = NULL;
    org$pandalanguage$pandac$IRNode* stmt1786 = NULL;
    panda$core$String* $tmp1788;
    panda$core$String* $tmp1789;
    panda$core$String* $tmp1790;
    panda$core$String* $tmp1791;
    panda$core$String* $tmp1792;
    org$pandalanguage$pandac$IRNode* base1803 = NULL;
    org$pandalanguage$pandac$FieldDecl* field1805 = NULL;
    panda$core$String* $tmp1807;
    panda$core$String* $tmp1808;
    panda$core$String* $tmp1809;
    panda$core$String* $tmp1810;
    panda$core$String* $tmp1811;
    org$pandalanguage$pandac$IRNode* test1822 = NULL;
    panda$collections$ImmutableArray* ifTrue1824 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse1826 = NULL;
    panda$core$MutableString* result1831 = NULL;
    panda$core$MutableString* $tmp1832;
    panda$core$MutableString* $tmp1833;
    panda$core$String* $tmp1835;
    panda$core$String* $tmp1836;
    panda$collections$Iterator* Iter$511$171844 = NULL;
    panda$collections$Iterator* $tmp1845;
    panda$collections$Iterator* $tmp1846;
    org$pandalanguage$pandac$IRNode* s1862 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1863;
    panda$core$Object* $tmp1864;
    panda$core$String* $tmp1869;
    panda$core$Char8 $tmp1874;
    panda$core$String* $tmp1875;
    panda$core$String* $tmp1876;
    panda$core$String* $tmp1881;
    panda$core$String* $tmp1882;
    panda$core$UInt64 value1889;
    panda$core$String* $tmp1891;
    panda$core$String* $tmp1892;
    org$pandalanguage$pandac$IRNode* value1897 = NULL;
    panda$core$String* $tmp1899;
    panda$core$String* $tmp1900;
    panda$core$String* $tmp1901;
    org$pandalanguage$pandac$IRNode* value1909 = NULL;
    panda$core$String* $tmp1911;
    panda$core$String* $tmp1912;
    panda$core$String* $tmp1913;
    panda$core$String* label1921 = NULL;
    panda$collections$ImmutableArray* statements1923 = NULL;
    panda$core$MutableString* result1928 = NULL;
    panda$core$MutableString* $tmp1929;
    panda$core$MutableString* $tmp1930;
    panda$core$String* $tmp1932;
    panda$core$String* $tmp1933;
    panda$collections$Iterator* Iter$531$171941 = NULL;
    panda$collections$Iterator* $tmp1942;
    panda$collections$Iterator* $tmp1943;
    org$pandalanguage$pandac$IRNode* s1959 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1960;
    panda$core$Object* $tmp1961;
    panda$core$String* $tmp1966;
    panda$core$Char8 $tmp1971;
    panda$core$String* $tmp1972;
    panda$core$String* $tmp1973;
    org$pandalanguage$pandac$IRNode* value1980 = NULL;
    panda$collections$ImmutableArray* whens1982 = NULL;
    panda$collections$ImmutableArray* other1984 = NULL;
    panda$core$MutableString* result1989 = NULL;
    panda$core$MutableString* $tmp1990;
    panda$core$MutableString* $tmp1991;
    panda$core$String* $tmp1993;
    panda$core$String* $tmp1994;
    panda$collections$Iterator* Iter$538$172002 = NULL;
    panda$collections$Iterator* $tmp2003;
    panda$collections$Iterator* $tmp2004;
    org$pandalanguage$pandac$IRNode* w2020 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2021;
    panda$core$Object* $tmp2022;
    panda$core$String* $tmp2027;
    panda$collections$Iterator* Iter$543$212036 = NULL;
    panda$collections$Iterator* $tmp2037;
    panda$collections$Iterator* $tmp2038;
    org$pandalanguage$pandac$IRNode* s2054 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2055;
    panda$core$Object* $tmp2056;
    panda$core$String* $tmp2061;
    panda$core$Char8 $tmp2066;
    panda$core$String* $tmp2067;
    panda$core$String* $tmp2068;
    org$pandalanguage$pandac$IRNode* target2075 = NULL;
    org$pandalanguage$pandac$MethodRef* m2077 = NULL;
    panda$core$String* $tmp2079;
    panda$core$String* $tmp2080;
    panda$core$String* $tmp2081;
    panda$core$String* $tmp2082;
    panda$core$String* $tmp2083;
    panda$core$String* $tmp2093;
    panda$core$UInt64 value2097;
    panda$core$String* $tmp2099;
    panda$core$String* $tmp2100;
    panda$core$Object* $tmp2102;
    panda$core$String* $tmp2108;
    org$pandalanguage$pandac$parser$Token$Kind op2113;
    org$pandalanguage$pandac$IRNode* base2115 = NULL;
    panda$core$String* $tmp2117;
    panda$core$String* $tmp2118;
    panda$core$String* $tmp2119;
    panda$core$String* $tmp2120;
    panda$core$String* $tmp2121;
    panda$core$Object* $tmp2122;
    panda$core$String* label2134 = NULL;
    org$pandalanguage$pandac$IRNode* target2136 = NULL;
    org$pandalanguage$pandac$IRNode* list2138 = NULL;
    panda$collections$ImmutableArray* statements2140 = NULL;
    panda$core$MutableString* result2145 = NULL;
    panda$core$MutableString* $tmp2146;
    panda$core$MutableString* $tmp2147;
    panda$core$String* $tmp2149;
    panda$core$String* $tmp2150;
    panda$core$String* $tmp2154;
    panda$core$String* $tmp2155;
    panda$core$String* $tmp2156;
    panda$core$String* $tmp2157;
    panda$collections$Iterator* Iter$566$172168 = NULL;
    panda$collections$Iterator* $tmp2169;
    panda$collections$Iterator* $tmp2170;
    org$pandalanguage$pandac$IRNode* s2186 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2187;
    panda$core$Object* $tmp2188;
    panda$core$String* $tmp2193;
    panda$core$Char8 $tmp2198;
    panda$core$String* $tmp2199;
    panda$core$String* $tmp2200;
    panda$core$Real64 value2207;
    panda$core$String* $tmp2209;
    panda$core$String* $tmp2210;
    org$pandalanguage$pandac$IRNode* value2215 = NULL;
    panda$core$String* $tmp2217;
    panda$core$String* $tmp2218;
    panda$core$String* $tmp2219;
    panda$core$String* $tmp2226;
    org$pandalanguage$pandac$Type* type2231 = NULL;
    panda$core$Int64 id2233;
    panda$core$String* $tmp2235;
    panda$core$String* $tmp2236;
    panda$core$String* $tmp2237;
    panda$core$Object* $tmp2239;
    org$pandalanguage$pandac$IRNode* base2247 = NULL;
    panda$core$Int64 id2249;
    panda$core$String* $tmp2251;
    panda$core$String* $tmp2252;
    panda$core$String* $tmp2253;
    panda$core$String* $tmp2254;
    panda$core$String* $tmp2255;
    panda$core$Object* $tmp2257;
    panda$core$String* $tmp2268;
    panda$core$String* str2273 = NULL;
    panda$core$String* $tmp2275;
    panda$core$String* $tmp2279;
    org$pandalanguage$pandac$IRNode* test2284 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue2286 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse2288 = NULL;
    panda$core$String* $tmp2290;
    panda$core$String* $tmp2291;
    panda$core$String* $tmp2292;
    panda$core$String* $tmp2293;
    panda$core$String* $tmp2294;
    panda$core$String* $tmp2295;
    panda$core$String* $tmp2296;
    org$pandalanguage$pandac$Type* type2310 = NULL;
    panda$core$String* $tmp2312;
    panda$core$String* $tmp2313;
    panda$core$String* name2318 = NULL;
    panda$core$String* $tmp2320;
    org$pandalanguage$pandac$IRNode* base2324 = NULL;
    panda$collections$ImmutableArray* args2326 = NULL;
    panda$core$String* $tmp2328;
    panda$core$String* $tmp2329;
    panda$core$String* $tmp2330;
    panda$core$String* $tmp2331;
    panda$core$String* $tmp2332;
    panda$core$String* $tmp2337;
    org$pandalanguage$pandac$IRNode* target2345 = NULL;
    panda$collections$ImmutableArray* methods2347 = NULL;
    panda$collections$ImmutableArray* args2349 = NULL;
    panda$core$String* $tmp2351;
    panda$core$String* $tmp2352;
    panda$core$String* $tmp2353;
    panda$core$String* $tmp2354;
    panda$core$String* $tmp2355;
    panda$core$String* $tmp2356;
    panda$core$String* $tmp2357;
    panda$core$Object* $tmp2362;
    panda$core$String* $tmp2367;
    org$pandalanguage$pandac$IRNode* target2375 = NULL;
    panda$collections$ImmutableArray* methods2377 = NULL;
    panda$core$String* $tmp2379;
    panda$core$String* $tmp2380;
    panda$core$String* $tmp2381;
    panda$core$String* $tmp2382;
    panda$core$String* $tmp2383;
    panda$core$Object* $tmp2388;
    org$pandalanguage$pandac$IRNode* start2396 = NULL;
    org$pandalanguage$pandac$IRNode* end2398 = NULL;
    panda$core$Bit inclusive2400;
    org$pandalanguage$pandac$IRNode* step2402 = NULL;
    panda$core$MutableString* result2407 = NULL;
    panda$core$MutableString* $tmp2408;
    panda$core$MutableString* $tmp2409;
    panda$core$String* $tmp2413;
    panda$core$String* $tmp2414;
    panda$core$String* $tmp2419;
    panda$core$String* $tmp2420;
    org$pandalanguage$pandac$Variable$Kind kind2427;
    panda$collections$ImmutableArray* decls2429 = NULL;
    panda$core$MutableString* result2434 = NULL;
    panda$core$MutableString* $tmp2435;
    panda$core$MutableString* $tmp2436;
    org$pandalanguage$pandac$Variable$Kind $match$620_172438;
    panda$core$String* $tmp2447;
    panda$core$String* $tmp2449;
    panda$core$String* $tmp2450;
    org$pandalanguage$pandac$Variable* variable2457 = NULL;
    panda$core$String* $tmp2459;
    panda$collections$ImmutableArray* tests2463 = NULL;
    panda$collections$ImmutableArray* statements2465 = NULL;
    panda$core$String* $tmp2467;
    panda$core$String* $tmp2468;
    panda$core$String* $tmp2469;
    panda$core$String* $tmp2470;
    panda$core$String* $tmp2471;
    panda$core$String* $tmp2473;
    panda$core$String* $tmp2478;
    panda$core$String* label2487 = NULL;
    org$pandalanguage$pandac$IRNode* test2489 = NULL;
    panda$collections$ImmutableArray* statements2491 = NULL;
    panda$core$MutableString* result2496 = NULL;
    panda$core$MutableString* $tmp2497;
    panda$core$MutableString* $tmp2498;
    panda$core$String* $tmp2500;
    panda$core$String* $tmp2501;
    panda$core$String* $tmp2505;
    panda$core$String* $tmp2506;
    panda$collections$Iterator* Iter$638$172514 = NULL;
    panda$collections$Iterator* $tmp2515;
    panda$collections$Iterator* $tmp2516;
    org$pandalanguage$pandac$IRNode* s2532 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2533;
    panda$core$Object* $tmp2534;
    panda$core$String* $tmp2539;
    panda$core$Char8 $tmp2544;
    panda$core$String* $tmp2545;
    panda$core$String* $tmp2546;
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
            panda$core$String* $tmp1536 = panda$collections$ImmutableArray$join$R$panda$core$String(args1525);
            $tmp1535 = $tmp1536;
            panda$core$String* $tmp1537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1530, $tmp1535);
            $tmp1529 = $tmp1537;
            panda$core$String* $tmp1539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1529, &$s1538);
            $tmp1528 = $tmp1539;
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
            $l1540:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp1542.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1544 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 16));
            value1543 = *$tmp1544;
            org$pandalanguage$pandac$Type** $tmp1546 = ((org$pandalanguage$pandac$Type**) ((char*) $match$427_91294->$data + 24));
            type1545 = *$tmp1546;
            org$pandalanguage$pandac$Type* $tmp1549 = (($fn1548) value1543->$class->vtable[2])(value1543);
            $tmp1547 = $tmp1549;
            org$pandalanguage$pandac$Type* $tmp1551 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            $tmp1550 = $tmp1551;
            panda$core$Bit $tmp1552 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1547, $tmp1550);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1550));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1547));
            if ($tmp1552.value) {
            {
                panda$core$String* $tmp1559 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1558, ((panda$core$Object*) value1543));
                $tmp1557 = $tmp1559;
                panda$core$String* $tmp1561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1557, &$s1560);
                $tmp1556 = $tmp1561;
                panda$core$String* $tmp1562 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1556, ((panda$core$Object*) type1545));
                $tmp1555 = $tmp1562;
                panda$core$String* $tmp1564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1555, &$s1563);
                $tmp1554 = $tmp1564;
                $tmp1553 = $tmp1554;
                $returnValue1301 = $tmp1553;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1553));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1554));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1555));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1556));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1557));
                $tmp1293 = 10;
                goto $l1291;
                $l1565:;
                return $returnValue1301;
            }
            }
            panda$core$String* $tmp1573 = (($fn1572) value1543->$class->vtable[0])(value1543);
            $tmp1571 = $tmp1573;
            panda$core$String* $tmp1575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1571, &$s1574);
            $tmp1570 = $tmp1575;
            panda$core$String* $tmp1576 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1570, ((panda$core$Object*) type1545));
            $tmp1569 = $tmp1576;
            panda$core$String* $tmp1578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1569, &$s1577);
            $tmp1568 = $tmp1578;
            $tmp1567 = $tmp1568;
            $returnValue1301 = $tmp1567;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1567));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1568));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1569));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1570));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1571));
            $tmp1293 = 11;
            goto $l1291;
            $l1579:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1581.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp1583 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$427_91294->$data + 16));
            ce1582 = *$tmp1583;
            panda$core$String* $tmp1586 = org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(ce1582);
            $tmp1585 = $tmp1586;
            $tmp1584 = $tmp1585;
            $returnValue1301 = $tmp1584;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1584));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1585));
            $tmp1293 = 12;
            goto $l1291;
            $l1587:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp1589.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1591 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 16));
            base1590 = *$tmp1591;
            org$pandalanguage$pandac$ChoiceEntry** $tmp1593 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$427_91294->$data + 24));
            ce1592 = *$tmp1593;
            panda$core$Int64* $tmp1595 = ((panda$core$Int64*) ((char*) $match$427_91294->$data + 32));
            field1594 = *$tmp1595;
            panda$core$String* $tmp1604 = (($fn1603) base1590->$class->vtable[0])(base1590);
            $tmp1602 = $tmp1604;
            panda$core$String* $tmp1606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1602, &$s1605);
            $tmp1601 = $tmp1606;
            panda$core$String* $tmp1607 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1601, ((panda$core$Object*) ce1592));
            $tmp1600 = $tmp1607;
            panda$core$String* $tmp1609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1600, &$s1608);
            $tmp1599 = $tmp1609;
            panda$core$Int64$wrapper* $tmp1611;
            $tmp1611 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1611->value = field1594;
            $tmp1610 = ((panda$core$Object*) $tmp1611);
            panda$core$String* $tmp1612 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1599, $tmp1610);
            $tmp1598 = $tmp1612;
            panda$core$String* $tmp1614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1598, &$s1613);
            $tmp1597 = $tmp1614;
            $tmp1596 = $tmp1597;
            $returnValue1301 = $tmp1596;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1596));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1597));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1598));
            panda$core$Panda$unref$panda$core$Object($tmp1610);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1599));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1600));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1601));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1602));
            $tmp1293 = 13;
            goto $l1291;
            $l1615:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1617.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1619 = ((org$pandalanguage$pandac$Type**) ((char*) $match$427_91294->$data + 16));
            type1618 = *$tmp1619;
            org$pandalanguage$pandac$IRNode** $tmp1621 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 24));
            call1620 = *$tmp1621;
            int $tmp1624;
            {
                $tmp1626 = call1620;
                $match$474_171625 = $tmp1626;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1626));
                panda$core$Bit $tmp1627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$474_171625->$rawValue, ((panda$core$Int64) { 7 }));
                if ($tmp1627.value) {
                {
                    panda$collections$ImmutableArray** $tmp1629 = ((panda$collections$ImmutableArray**) ((char*) $match$474_171625->$data + 32));
                    args1628 = *$tmp1629;
                    panda$core$String* $tmp1635 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type1618);
                    $tmp1634 = $tmp1635;
                    panda$core$String* $tmp1637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1634, &$s1636);
                    $tmp1633 = $tmp1637;
                    panda$core$String* $tmp1639 = panda$collections$ImmutableArray$join$R$panda$core$String(args1628);
                    $tmp1638 = $tmp1639;
                    panda$core$String* $tmp1640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1633, $tmp1638);
                    $tmp1632 = $tmp1640;
                    panda$core$String* $tmp1642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1632, &$s1641);
                    $tmp1631 = $tmp1642;
                    $tmp1630 = $tmp1631;
                    $returnValue1301 = $tmp1630;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1630));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1631));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1632));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1638));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1633));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1634));
                    $tmp1624 = 0;
                    goto $l1622;
                    $l1643:;
                    $tmp1293 = 14;
                    goto $l1291;
                    $l1644:;
                    return $returnValue1301;
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1624 = -1;
            goto $l1622;
            $l1622:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1626));
            switch ($tmp1624) {
                case 0: goto $l1643;
                case -1: goto $l1646;
            }
            $l1646:;
        }
        }
        else {
        panda$core$Bit $tmp1647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1647.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1649 = ((org$pandalanguage$pandac$Type**) ((char*) $match$427_91294->$data + 16));
            Type1648 = *$tmp1649;
            $tmp1650 = &$s1651;
            $returnValue1301 = $tmp1650;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1650));
            $tmp1293 = 15;
            goto $l1291;
            $l1652:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1654.value) {
        {
            panda$core$String** $tmp1656 = ((panda$core$String**) ((char*) $match$427_91294->$data + 16));
            label1655 = *$tmp1656;
            if (((panda$core$Bit) { label1655 != NULL }).value) {
            {
                panda$core$String* $tmp1661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1660, label1655);
                $tmp1659 = $tmp1661;
                panda$core$String* $tmp1663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1659, &$s1662);
                $tmp1658 = $tmp1663;
                $tmp1657 = $tmp1658;
                $returnValue1301 = $tmp1657;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1657));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1658));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1659));
                $tmp1293 = 16;
                goto $l1291;
                $l1664:;
                return $returnValue1301;
            }
            }
            $tmp1666 = &$s1667;
            $returnValue1301 = $tmp1666;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1666));
            $tmp1293 = 17;
            goto $l1291;
            $l1668:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1670 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1670.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1672 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 0));
            target1671 = *$tmp1672;
            org$pandalanguage$pandac$IRNode** $tmp1674 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 8));
            value1673 = *$tmp1674;
            if (((panda$core$Bit) { value1673 != NULL }).value) {
            {
                panda$core$String* $tmp1681 = (($fn1680) target1671->$class->vtable[0])(target1671);
                $tmp1679 = $tmp1681;
                panda$core$String* $tmp1683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1679, &$s1682);
                $tmp1678 = $tmp1683;
                panda$core$String* $tmp1684 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1678, ((panda$core$Object*) value1673));
                $tmp1677 = $tmp1684;
                panda$core$String* $tmp1686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1677, &$s1685);
                $tmp1676 = $tmp1686;
                $tmp1675 = $tmp1676;
                $returnValue1301 = $tmp1675;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1675));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1676));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1677));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1678));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1679));
                $tmp1293 = 18;
                goto $l1291;
                $l1687:;
                return $returnValue1301;
            }
            }
            panda$core$String* $tmp1692 = (($fn1691) target1671->$class->vtable[0])(target1671);
            $tmp1690 = $tmp1692;
            $tmp1689 = $tmp1690;
            $returnValue1301 = $tmp1689;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1689));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1690));
            $tmp1293 = 19;
            goto $l1291;
            $l1693:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1695.value) {
        {
            panda$core$String** $tmp1697 = ((panda$core$String**) ((char*) $match$427_91294->$data + 16));
            label1696 = *$tmp1697;
            panda$collections$ImmutableArray** $tmp1699 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 24));
            statements1698 = *$tmp1699;
            org$pandalanguage$pandac$IRNode** $tmp1701 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 32));
            test1700 = *$tmp1701;
            int $tmp1704;
            {
                panda$core$MutableString* $tmp1708 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1708);
                $tmp1707 = $tmp1708;
                $tmp1706 = $tmp1707;
                result1705 = $tmp1706;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1706));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1707));
                if (((panda$core$Bit) { label1696 != NULL }).value) {
                {
                    panda$core$String* $tmp1711 = panda$core$String$convert$R$panda$core$String(label1696);
                    $tmp1710 = $tmp1711;
                    panda$core$String* $tmp1713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1710, &$s1712);
                    $tmp1709 = $tmp1713;
                    panda$core$MutableString$append$panda$core$String(result1705, $tmp1709);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1709));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1710));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1705, &$s1714);
                {
                    int $tmp1717;
                    {
                        ITable* $tmp1721 = ((panda$collections$Iterable*) statements1698)->$class->itable;
                        while ($tmp1721->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1721 = $tmp1721->next;
                        }
                        $fn1723 $tmp1722 = $tmp1721->methods[0];
                        panda$collections$Iterator* $tmp1724 = $tmp1722(((panda$collections$Iterable*) statements1698));
                        $tmp1720 = $tmp1724;
                        $tmp1719 = $tmp1720;
                        Iter$498$171718 = $tmp1719;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1719));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1720));
                        $l1725:;
                        ITable* $tmp1728 = Iter$498$171718->$class->itable;
                        while ($tmp1728->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1728 = $tmp1728->next;
                        }
                        $fn1730 $tmp1729 = $tmp1728->methods[0];
                        panda$core$Bit $tmp1731 = $tmp1729(Iter$498$171718);
                        panda$core$Bit $tmp1732 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1731);
                        bool $tmp1727 = $tmp1732.value;
                        if (!$tmp1727) goto $l1726;
                        {
                            int $tmp1735;
                            {
                                ITable* $tmp1739 = Iter$498$171718->$class->itable;
                                while ($tmp1739->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1739 = $tmp1739->next;
                                }
                                $fn1741 $tmp1740 = $tmp1739->methods[1];
                                panda$core$Object* $tmp1742 = $tmp1740(Iter$498$171718);
                                $tmp1738 = $tmp1742;
                                $tmp1737 = ((org$pandalanguage$pandac$IRNode*) $tmp1738);
                                s1736 = $tmp1737;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1737));
                                panda$core$Panda$unref$panda$core$Object($tmp1738);
                                panda$core$String* $tmp1745 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1736), &$s1744);
                                $tmp1743 = $tmp1745;
                                panda$core$MutableString$append$panda$core$String(result1705, $tmp1743);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1743));
                            }
                            $tmp1735 = -1;
                            goto $l1733;
                            $l1733:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1736));
                            s1736 = NULL;
                            switch ($tmp1735) {
                                case -1: goto $l1746;
                            }
                            $l1746:;
                        }
                        goto $l1725;
                        $l1726:;
                    }
                    $tmp1717 = -1;
                    goto $l1715;
                    $l1715:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$498$171718));
                    Iter$498$171718 = NULL;
                    switch ($tmp1717) {
                        case -1: goto $l1747;
                    }
                    $l1747:;
                }
                panda$core$String* $tmp1751 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1750, ((panda$core$Object*) test1700));
                $tmp1749 = $tmp1751;
                panda$core$String* $tmp1753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1749, &$s1752);
                $tmp1748 = $tmp1753;
                panda$core$MutableString$append$panda$core$String(result1705, $tmp1748);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1748));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1749));
                panda$core$String* $tmp1756 = panda$core$MutableString$finish$R$panda$core$String(result1705);
                $tmp1755 = $tmp1756;
                $tmp1754 = $tmp1755;
                $returnValue1301 = $tmp1754;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1754));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1755));
                $tmp1704 = 0;
                goto $l1702;
                $l1757:;
                $tmp1293 = 20;
                goto $l1291;
                $l1758:;
                return $returnValue1301;
            }
            $l1702:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1705));
            result1705 = NULL;
            switch ($tmp1704) {
                case 0: goto $l1757;
            }
            $l1760:;
        }
        }
        else {
        panda$core$Bit $tmp1761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1761.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1763 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 0));
            m1762 = *$tmp1763;
            panda$collections$ImmutableArray** $tmp1765 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 8));
            args1764 = *$tmp1765;
            panda$core$String* $tmp1772 = (($fn1771) m1762->$class->vtable[0])(m1762);
            $tmp1770 = $tmp1772;
            panda$core$String* $tmp1774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1770, &$s1773);
            $tmp1769 = $tmp1774;
            panda$core$String* $tmp1777 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(args1764, &$s1776);
            $tmp1775 = $tmp1777;
            panda$core$String* $tmp1778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1769, $tmp1775);
            $tmp1768 = $tmp1778;
            panda$core$String* $tmp1780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1768, &$s1779);
            $tmp1767 = $tmp1780;
            $tmp1766 = $tmp1767;
            $returnValue1301 = $tmp1766;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1766));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1767));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1768));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1775));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1769));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1770));
            $tmp1293 = 21;
            goto $l1291;
            $l1781:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1783.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1785 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 0));
            expr1784 = *$tmp1785;
            org$pandalanguage$pandac$IRNode** $tmp1787 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 8));
            stmt1786 = *$tmp1787;
            panda$core$String* $tmp1794 = (($fn1793) expr1784->$class->vtable[0])(expr1784);
            $tmp1792 = $tmp1794;
            panda$core$String* $tmp1796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1792, &$s1795);
            $tmp1791 = $tmp1796;
            panda$core$String* $tmp1797 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1791, ((panda$core$Object*) stmt1786));
            $tmp1790 = $tmp1797;
            panda$core$String* $tmp1799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1790, &$s1798);
            $tmp1789 = $tmp1799;
            $tmp1788 = $tmp1789;
            $returnValue1301 = $tmp1788;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1788));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1789));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1790));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1791));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1792));
            $tmp1293 = 22;
            goto $l1291;
            $l1800:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1802.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1804 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 24));
            base1803 = *$tmp1804;
            org$pandalanguage$pandac$FieldDecl** $tmp1806 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$427_91294->$data + 32));
            field1805 = *$tmp1806;
            panda$core$String* $tmp1813 = (($fn1812) base1803->$class->vtable[0])(base1803);
            $tmp1811 = $tmp1813;
            panda$core$String* $tmp1815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1811, &$s1814);
            $tmp1810 = $tmp1815;
            panda$core$String* $tmp1816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1810, ((org$pandalanguage$pandac$Symbol*) field1805)->name);
            $tmp1809 = $tmp1816;
            panda$core$String* $tmp1818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1809, &$s1817);
            $tmp1808 = $tmp1818;
            $tmp1807 = $tmp1808;
            $returnValue1301 = $tmp1807;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1807));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1808));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1809));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1810));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1811));
            $tmp1293 = 23;
            goto $l1291;
            $l1819:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1821.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1823 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 16));
            test1822 = *$tmp1823;
            panda$collections$ImmutableArray** $tmp1825 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 24));
            ifTrue1824 = *$tmp1825;
            org$pandalanguage$pandac$IRNode** $tmp1827 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 32));
            ifFalse1826 = *$tmp1827;
            int $tmp1830;
            {
                panda$core$MutableString* $tmp1834 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1838 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1837, ((panda$core$Object*) test1822));
                $tmp1836 = $tmp1838;
                panda$core$String* $tmp1840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1836, &$s1839);
                $tmp1835 = $tmp1840;
                panda$core$MutableString$init$panda$core$String($tmp1834, $tmp1835);
                $tmp1833 = $tmp1834;
                $tmp1832 = $tmp1833;
                result1831 = $tmp1832;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1832));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1833));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1835));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1836));
                {
                    int $tmp1843;
                    {
                        ITable* $tmp1847 = ((panda$collections$Iterable*) ifTrue1824)->$class->itable;
                        while ($tmp1847->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1847 = $tmp1847->next;
                        }
                        $fn1849 $tmp1848 = $tmp1847->methods[0];
                        panda$collections$Iterator* $tmp1850 = $tmp1848(((panda$collections$Iterable*) ifTrue1824));
                        $tmp1846 = $tmp1850;
                        $tmp1845 = $tmp1846;
                        Iter$511$171844 = $tmp1845;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1845));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1846));
                        $l1851:;
                        ITable* $tmp1854 = Iter$511$171844->$class->itable;
                        while ($tmp1854->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1854 = $tmp1854->next;
                        }
                        $fn1856 $tmp1855 = $tmp1854->methods[0];
                        panda$core$Bit $tmp1857 = $tmp1855(Iter$511$171844);
                        panda$core$Bit $tmp1858 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1857);
                        bool $tmp1853 = $tmp1858.value;
                        if (!$tmp1853) goto $l1852;
                        {
                            int $tmp1861;
                            {
                                ITable* $tmp1865 = Iter$511$171844->$class->itable;
                                while ($tmp1865->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1865 = $tmp1865->next;
                                }
                                $fn1867 $tmp1866 = $tmp1865->methods[1];
                                panda$core$Object* $tmp1868 = $tmp1866(Iter$511$171844);
                                $tmp1864 = $tmp1868;
                                $tmp1863 = ((org$pandalanguage$pandac$IRNode*) $tmp1864);
                                s1862 = $tmp1863;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1863));
                                panda$core$Panda$unref$panda$core$Object($tmp1864);
                                panda$core$String* $tmp1871 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1862), &$s1870);
                                $tmp1869 = $tmp1871;
                                panda$core$MutableString$append$panda$core$String(result1831, $tmp1869);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1869));
                            }
                            $tmp1861 = -1;
                            goto $l1859;
                            $l1859:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1862));
                            s1862 = NULL;
                            switch ($tmp1861) {
                                case -1: goto $l1872;
                            }
                            $l1872:;
                        }
                        goto $l1851;
                        $l1852:;
                    }
                    $tmp1843 = -1;
                    goto $l1841;
                    $l1841:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$511$171844));
                    Iter$511$171844 = NULL;
                    switch ($tmp1843) {
                        case -1: goto $l1873;
                    }
                    $l1873:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1874, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1831, $tmp1874);
                if (((panda$core$Bit) { ifFalse1826 != NULL }).value) {
                {
                    panda$core$String* $tmp1878 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1877, ((panda$core$Object*) ifFalse1826));
                    $tmp1876 = $tmp1878;
                    panda$core$String* $tmp1880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1876, &$s1879);
                    $tmp1875 = $tmp1880;
                    panda$core$MutableString$append$panda$core$String(result1831, $tmp1875);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1875));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1876));
                }
                }
                panda$core$String* $tmp1883 = panda$core$MutableString$finish$R$panda$core$String(result1831);
                $tmp1882 = $tmp1883;
                $tmp1881 = $tmp1882;
                $returnValue1301 = $tmp1881;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1881));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1882));
                $tmp1830 = 0;
                goto $l1828;
                $l1884:;
                $tmp1293 = 24;
                goto $l1291;
                $l1885:;
                return $returnValue1301;
            }
            $l1828:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1831));
            result1831 = NULL;
            switch ($tmp1830) {
                case 0: goto $l1884;
            }
            $l1887:;
        }
        }
        else {
        panda$core$Bit $tmp1888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1888.value) {
        {
            panda$core$UInt64* $tmp1890 = ((panda$core$UInt64*) ((char*) $match$427_91294->$data + 24));
            value1889 = *$tmp1890;
            panda$core$String* $tmp1893 = panda$core$UInt64$convert$R$panda$core$String(value1889);
            $tmp1892 = $tmp1893;
            $tmp1891 = $tmp1892;
            $returnValue1301 = $tmp1891;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1891));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1892));
            $tmp1293 = 25;
            goto $l1291;
            $l1894:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1896.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1898 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 16));
            value1897 = *$tmp1898;
            panda$core$String* $tmp1903 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1902, ((panda$core$Object*) value1897));
            $tmp1901 = $tmp1903;
            panda$core$String* $tmp1905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1901, &$s1904);
            $tmp1900 = $tmp1905;
            $tmp1899 = $tmp1900;
            $returnValue1301 = $tmp1899;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1899));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1900));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1901));
            $tmp1293 = 26;
            goto $l1291;
            $l1906:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1908.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1910 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 16));
            value1909 = *$tmp1910;
            panda$core$String* $tmp1915 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1914, ((panda$core$Object*) value1909));
            $tmp1913 = $tmp1915;
            panda$core$String* $tmp1917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1913, &$s1916);
            $tmp1912 = $tmp1917;
            $tmp1911 = $tmp1912;
            $returnValue1301 = $tmp1911;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1911));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1912));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1913));
            $tmp1293 = 27;
            goto $l1291;
            $l1918:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp1920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1920.value) {
        {
            panda$core$String** $tmp1922 = ((panda$core$String**) ((char*) $match$427_91294->$data + 16));
            label1921 = *$tmp1922;
            panda$collections$ImmutableArray** $tmp1924 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 24));
            statements1923 = *$tmp1924;
            int $tmp1927;
            {
                panda$core$MutableString* $tmp1931 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1931);
                $tmp1930 = $tmp1931;
                $tmp1929 = $tmp1930;
                result1928 = $tmp1929;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1929));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1930));
                if (((panda$core$Bit) { label1921 != NULL }).value) {
                {
                    panda$core$String* $tmp1934 = panda$core$String$convert$R$panda$core$String(label1921);
                    $tmp1933 = $tmp1934;
                    panda$core$String* $tmp1936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1933, &$s1935);
                    $tmp1932 = $tmp1936;
                    panda$core$MutableString$append$panda$core$String(result1928, $tmp1932);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1932));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1933));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1928, &$s1937);
                {
                    int $tmp1940;
                    {
                        ITable* $tmp1944 = ((panda$collections$Iterable*) statements1923)->$class->itable;
                        while ($tmp1944->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1944 = $tmp1944->next;
                        }
                        $fn1946 $tmp1945 = $tmp1944->methods[0];
                        panda$collections$Iterator* $tmp1947 = $tmp1945(((panda$collections$Iterable*) statements1923));
                        $tmp1943 = $tmp1947;
                        $tmp1942 = $tmp1943;
                        Iter$531$171941 = $tmp1942;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1942));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1943));
                        $l1948:;
                        ITable* $tmp1951 = Iter$531$171941->$class->itable;
                        while ($tmp1951->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1951 = $tmp1951->next;
                        }
                        $fn1953 $tmp1952 = $tmp1951->methods[0];
                        panda$core$Bit $tmp1954 = $tmp1952(Iter$531$171941);
                        panda$core$Bit $tmp1955 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1954);
                        bool $tmp1950 = $tmp1955.value;
                        if (!$tmp1950) goto $l1949;
                        {
                            int $tmp1958;
                            {
                                ITable* $tmp1962 = Iter$531$171941->$class->itable;
                                while ($tmp1962->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1962 = $tmp1962->next;
                                }
                                $fn1964 $tmp1963 = $tmp1962->methods[1];
                                panda$core$Object* $tmp1965 = $tmp1963(Iter$531$171941);
                                $tmp1961 = $tmp1965;
                                $tmp1960 = ((org$pandalanguage$pandac$IRNode*) $tmp1961);
                                s1959 = $tmp1960;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1960));
                                panda$core$Panda$unref$panda$core$Object($tmp1961);
                                panda$core$String* $tmp1968 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1959), &$s1967);
                                $tmp1966 = $tmp1968;
                                panda$core$MutableString$append$panda$core$String(result1928, $tmp1966);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1966));
                            }
                            $tmp1958 = -1;
                            goto $l1956;
                            $l1956:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1959));
                            s1959 = NULL;
                            switch ($tmp1958) {
                                case -1: goto $l1969;
                            }
                            $l1969:;
                        }
                        goto $l1948;
                        $l1949:;
                    }
                    $tmp1940 = -1;
                    goto $l1938;
                    $l1938:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$531$171941));
                    Iter$531$171941 = NULL;
                    switch ($tmp1940) {
                        case -1: goto $l1970;
                    }
                    $l1970:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1971, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1928, $tmp1971);
                panda$core$String* $tmp1974 = panda$core$MutableString$finish$R$panda$core$String(result1928);
                $tmp1973 = $tmp1974;
                $tmp1972 = $tmp1973;
                $returnValue1301 = $tmp1972;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1972));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1973));
                $tmp1927 = 0;
                goto $l1925;
                $l1975:;
                $tmp1293 = 28;
                goto $l1291;
                $l1976:;
                return $returnValue1301;
            }
            $l1925:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1928));
            result1928 = NULL;
            switch ($tmp1927) {
                case 0: goto $l1975;
            }
            $l1978:;
        }
        }
        else {
        panda$core$Bit $tmp1979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1979.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1981 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 16));
            value1980 = *$tmp1981;
            panda$collections$ImmutableArray** $tmp1983 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 24));
            whens1982 = *$tmp1983;
            panda$collections$ImmutableArray** $tmp1985 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 32));
            other1984 = *$tmp1985;
            int $tmp1988;
            {
                panda$core$MutableString* $tmp1992 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1996 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1995, ((panda$core$Object*) value1980));
                $tmp1994 = $tmp1996;
                panda$core$String* $tmp1998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1994, &$s1997);
                $tmp1993 = $tmp1998;
                panda$core$MutableString$init$panda$core$String($tmp1992, $tmp1993);
                $tmp1991 = $tmp1992;
                $tmp1990 = $tmp1991;
                result1989 = $tmp1990;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1990));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1991));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1993));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1994));
                {
                    int $tmp2001;
                    {
                        ITable* $tmp2005 = ((panda$collections$Iterable*) whens1982)->$class->itable;
                        while ($tmp2005->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2005 = $tmp2005->next;
                        }
                        $fn2007 $tmp2006 = $tmp2005->methods[0];
                        panda$collections$Iterator* $tmp2008 = $tmp2006(((panda$collections$Iterable*) whens1982));
                        $tmp2004 = $tmp2008;
                        $tmp2003 = $tmp2004;
                        Iter$538$172002 = $tmp2003;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2003));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2004));
                        $l2009:;
                        ITable* $tmp2012 = Iter$538$172002->$class->itable;
                        while ($tmp2012->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2012 = $tmp2012->next;
                        }
                        $fn2014 $tmp2013 = $tmp2012->methods[0];
                        panda$core$Bit $tmp2015 = $tmp2013(Iter$538$172002);
                        panda$core$Bit $tmp2016 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2015);
                        bool $tmp2011 = $tmp2016.value;
                        if (!$tmp2011) goto $l2010;
                        {
                            int $tmp2019;
                            {
                                ITable* $tmp2023 = Iter$538$172002->$class->itable;
                                while ($tmp2023->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2023 = $tmp2023->next;
                                }
                                $fn2025 $tmp2024 = $tmp2023->methods[1];
                                panda$core$Object* $tmp2026 = $tmp2024(Iter$538$172002);
                                $tmp2022 = $tmp2026;
                                $tmp2021 = ((org$pandalanguage$pandac$IRNode*) $tmp2022);
                                w2020 = $tmp2021;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2021));
                                panda$core$Panda$unref$panda$core$Object($tmp2022);
                                panda$core$String* $tmp2029 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w2020), &$s2028);
                                $tmp2027 = $tmp2029;
                                panda$core$MutableString$append$panda$core$String(result1989, $tmp2027);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2027));
                            }
                            $tmp2019 = -1;
                            goto $l2017;
                            $l2017:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w2020));
                            w2020 = NULL;
                            switch ($tmp2019) {
                                case -1: goto $l2030;
                            }
                            $l2030:;
                        }
                        goto $l2009;
                        $l2010:;
                    }
                    $tmp2001 = -1;
                    goto $l1999;
                    $l1999:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$538$172002));
                    Iter$538$172002 = NULL;
                    switch ($tmp2001) {
                        case -1: goto $l2031;
                    }
                    $l2031:;
                }
                if (((panda$core$Bit) { other1984 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1989, &$s2032);
                    {
                        int $tmp2035;
                        {
                            ITable* $tmp2039 = ((panda$collections$Iterable*) other1984)->$class->itable;
                            while ($tmp2039->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp2039 = $tmp2039->next;
                            }
                            $fn2041 $tmp2040 = $tmp2039->methods[0];
                            panda$collections$Iterator* $tmp2042 = $tmp2040(((panda$collections$Iterable*) other1984));
                            $tmp2038 = $tmp2042;
                            $tmp2037 = $tmp2038;
                            Iter$543$212036 = $tmp2037;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2037));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2038));
                            $l2043:;
                            ITable* $tmp2046 = Iter$543$212036->$class->itable;
                            while ($tmp2046->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2046 = $tmp2046->next;
                            }
                            $fn2048 $tmp2047 = $tmp2046->methods[0];
                            panda$core$Bit $tmp2049 = $tmp2047(Iter$543$212036);
                            panda$core$Bit $tmp2050 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2049);
                            bool $tmp2045 = $tmp2050.value;
                            if (!$tmp2045) goto $l2044;
                            {
                                int $tmp2053;
                                {
                                    ITable* $tmp2057 = Iter$543$212036->$class->itable;
                                    while ($tmp2057->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp2057 = $tmp2057->next;
                                    }
                                    $fn2059 $tmp2058 = $tmp2057->methods[1];
                                    panda$core$Object* $tmp2060 = $tmp2058(Iter$543$212036);
                                    $tmp2056 = $tmp2060;
                                    $tmp2055 = ((org$pandalanguage$pandac$IRNode*) $tmp2056);
                                    s2054 = $tmp2055;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2055));
                                    panda$core$Panda$unref$panda$core$Object($tmp2056);
                                    panda$core$String* $tmp2063 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2054), &$s2062);
                                    $tmp2061 = $tmp2063;
                                    panda$core$MutableString$append$panda$core$String(result1989, $tmp2061);
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
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$543$212036));
                        Iter$543$212036 = NULL;
                        switch ($tmp2035) {
                            case -1: goto $l2065;
                        }
                        $l2065:;
                    }
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2066, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1989, $tmp2066);
                panda$core$String* $tmp2069 = panda$core$MutableString$finish$R$panda$core$String(result1989);
                $tmp2068 = $tmp2069;
                $tmp2067 = $tmp2068;
                $returnValue1301 = $tmp2067;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2067));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2068));
                $tmp1988 = 0;
                goto $l1986;
                $l2070:;
                $tmp1293 = 29;
                goto $l1291;
                $l2071:;
                return $returnValue1301;
            }
            $l1986:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1989));
            result1989 = NULL;
            switch ($tmp1988) {
                case 0: goto $l2070;
            }
            $l2073:;
        }
        }
        else {
        panda$core$Bit $tmp2074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp2074.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2076 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 16));
            target2075 = *$tmp2076;
            org$pandalanguage$pandac$MethodRef** $tmp2078 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$427_91294->$data + 24));
            m2077 = *$tmp2078;
            if (((panda$core$Bit) { target2075 != NULL }).value) {
            {
                panda$core$String* $tmp2085 = (($fn2084) target2075->$class->vtable[0])(target2075);
                $tmp2083 = $tmp2085;
                panda$core$String* $tmp2087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2083, &$s2086);
                $tmp2082 = $tmp2087;
                panda$core$String* $tmp2088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2082, ((org$pandalanguage$pandac$Symbol*) m2077->value)->name);
                $tmp2081 = $tmp2088;
                panda$core$String* $tmp2090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2081, &$s2089);
                $tmp2080 = $tmp2090;
                $tmp2079 = $tmp2080;
                $returnValue1301 = $tmp2079;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2079));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2080));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2081));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2082));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2083));
                $tmp1293 = 30;
                goto $l1291;
                $l2091:;
                return $returnValue1301;
            }
            }
            $tmp2093 = ((org$pandalanguage$pandac$Symbol*) m2077->value)->name;
            $returnValue1301 = $tmp2093;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2093));
            $tmp1293 = 31;
            goto $l1291;
            $l2094:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2096 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp2096.value) {
        {
            panda$core$UInt64* $tmp2098 = ((panda$core$UInt64*) ((char*) $match$427_91294->$data + 24));
            value2097 = *$tmp2098;
            panda$core$UInt64$wrapper* $tmp2103;
            $tmp2103 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
            $tmp2103->value = value2097;
            $tmp2102 = ((panda$core$Object*) $tmp2103);
            panda$core$String* $tmp2104 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2101, $tmp2102);
            $tmp2100 = $tmp2104;
            $tmp2099 = $tmp2100;
            $returnValue1301 = $tmp2099;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2099));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2100));
            panda$core$Panda$unref$panda$core$Object($tmp2102);
            $tmp1293 = 32;
            goto $l1291;
            $l2105:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp2107.value) {
        {
            $tmp2108 = &$s2109;
            $returnValue1301 = $tmp2108;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2108));
            $tmp1293 = 33;
            goto $l1291;
            $l2110:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp2112.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2114 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$427_91294->$data + 16));
            op2113 = *$tmp2114;
            org$pandalanguage$pandac$IRNode** $tmp2116 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 24));
            base2115 = *$tmp2116;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2123;
            $tmp2123 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp2123->value = op2113;
            $tmp2122 = ((panda$core$Object*) $tmp2123);
            panda$core$String* $tmp2125 = (($fn2124) $tmp2122->$class->vtable[0])($tmp2122);
            $tmp2121 = $tmp2125;
            panda$core$String* $tmp2127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2121, &$s2126);
            $tmp2120 = $tmp2127;
            panda$core$String* $tmp2128 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2120, ((panda$core$Object*) base2115));
            $tmp2119 = $tmp2128;
            panda$core$String* $tmp2130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2119, &$s2129);
            $tmp2118 = $tmp2130;
            $tmp2117 = $tmp2118;
            $returnValue1301 = $tmp2117;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2117));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2118));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2119));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2120));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2121));
            panda$core$Panda$unref$panda$core$Object($tmp2122);
            $tmp1293 = 34;
            goto $l1291;
            $l2131:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2133.value) {
        {
            panda$core$String** $tmp2135 = ((panda$core$String**) ((char*) $match$427_91294->$data + 16));
            label2134 = *$tmp2135;
            org$pandalanguage$pandac$IRNode** $tmp2137 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 24));
            target2136 = *$tmp2137;
            org$pandalanguage$pandac$IRNode** $tmp2139 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 32));
            list2138 = *$tmp2139;
            panda$collections$ImmutableArray** $tmp2141 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 40));
            statements2140 = *$tmp2141;
            int $tmp2144;
            {
                panda$core$MutableString* $tmp2148 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2148);
                $tmp2147 = $tmp2148;
                $tmp2146 = $tmp2147;
                result2145 = $tmp2146;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2146));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2147));
                if (((panda$core$Bit) { label2134 != NULL }).value) {
                {
                    panda$core$String* $tmp2151 = panda$core$String$convert$R$panda$core$String(label2134);
                    $tmp2150 = $tmp2151;
                    panda$core$String* $tmp2153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2150, &$s2152);
                    $tmp2149 = $tmp2153;
                    panda$core$MutableString$append$panda$core$String(result2145, $tmp2149);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2149));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2150));
                }
                }
                panda$core$String* $tmp2159 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2158, ((panda$core$Object*) target2136));
                $tmp2157 = $tmp2159;
                panda$core$String* $tmp2161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2157, &$s2160);
                $tmp2156 = $tmp2161;
                panda$core$String* $tmp2162 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2156, ((panda$core$Object*) list2138));
                $tmp2155 = $tmp2162;
                panda$core$String* $tmp2164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2155, &$s2163);
                $tmp2154 = $tmp2164;
                panda$core$MutableString$append$panda$core$String(result2145, $tmp2154);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2154));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2155));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2156));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2157));
                {
                    int $tmp2167;
                    {
                        ITable* $tmp2171 = ((panda$collections$Iterable*) statements2140)->$class->itable;
                        while ($tmp2171->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2171 = $tmp2171->next;
                        }
                        $fn2173 $tmp2172 = $tmp2171->methods[0];
                        panda$collections$Iterator* $tmp2174 = $tmp2172(((panda$collections$Iterable*) statements2140));
                        $tmp2170 = $tmp2174;
                        $tmp2169 = $tmp2170;
                        Iter$566$172168 = $tmp2169;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2169));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2170));
                        $l2175:;
                        ITable* $tmp2178 = Iter$566$172168->$class->itable;
                        while ($tmp2178->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2178 = $tmp2178->next;
                        }
                        $fn2180 $tmp2179 = $tmp2178->methods[0];
                        panda$core$Bit $tmp2181 = $tmp2179(Iter$566$172168);
                        panda$core$Bit $tmp2182 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2181);
                        bool $tmp2177 = $tmp2182.value;
                        if (!$tmp2177) goto $l2176;
                        {
                            int $tmp2185;
                            {
                                ITable* $tmp2189 = Iter$566$172168->$class->itable;
                                while ($tmp2189->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2189 = $tmp2189->next;
                                }
                                $fn2191 $tmp2190 = $tmp2189->methods[1];
                                panda$core$Object* $tmp2192 = $tmp2190(Iter$566$172168);
                                $tmp2188 = $tmp2192;
                                $tmp2187 = ((org$pandalanguage$pandac$IRNode*) $tmp2188);
                                s2186 = $tmp2187;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2187));
                                panda$core$Panda$unref$panda$core$Object($tmp2188);
                                panda$core$String* $tmp2195 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2186), &$s2194);
                                $tmp2193 = $tmp2195;
                                panda$core$MutableString$append$panda$core$String(result2145, $tmp2193);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2193));
                            }
                            $tmp2185 = -1;
                            goto $l2183;
                            $l2183:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2186));
                            s2186 = NULL;
                            switch ($tmp2185) {
                                case -1: goto $l2196;
                            }
                            $l2196:;
                        }
                        goto $l2175;
                        $l2176:;
                    }
                    $tmp2167 = -1;
                    goto $l2165;
                    $l2165:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$566$172168));
                    Iter$566$172168 = NULL;
                    switch ($tmp2167) {
                        case -1: goto $l2197;
                    }
                    $l2197:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2198, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2145, $tmp2198);
                panda$core$String* $tmp2201 = panda$core$MutableString$finish$R$panda$core$String(result2145);
                $tmp2200 = $tmp2201;
                $tmp2199 = $tmp2200;
                $returnValue1301 = $tmp2199;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2199));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2200));
                $tmp2144 = 0;
                goto $l2142;
                $l2202:;
                $tmp1293 = 35;
                goto $l1291;
                $l2203:;
                return $returnValue1301;
            }
            $l2142:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2145));
            result2145 = NULL;
            switch ($tmp2144) {
                case 0: goto $l2202;
            }
            $l2205:;
        }
        }
        else {
        panda$core$Bit $tmp2206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2206.value) {
        {
            panda$core$Real64* $tmp2208 = ((panda$core$Real64*) ((char*) $match$427_91294->$data + 24));
            value2207 = *$tmp2208;
            panda$core$String* $tmp2211 = panda$core$Real64$convert$R$panda$core$String(value2207);
            $tmp2210 = $tmp2211;
            $tmp2209 = $tmp2210;
            $returnValue1301 = $tmp2209;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2209));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2210));
            $tmp1293 = 36;
            goto $l1291;
            $l2212:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2214.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2216 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 16));
            value2215 = *$tmp2216;
            if (((panda$core$Bit) { value2215 != NULL }).value) {
            {
                panda$core$String* $tmp2221 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2220, ((panda$core$Object*) value2215));
                $tmp2219 = $tmp2221;
                panda$core$String* $tmp2223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2219, &$s2222);
                $tmp2218 = $tmp2223;
                $tmp2217 = $tmp2218;
                $returnValue1301 = $tmp2217;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2217));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2218));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2219));
                $tmp1293 = 37;
                goto $l1291;
                $l2224:;
                return $returnValue1301;
            }
            }
            $tmp2226 = &$s2227;
            $returnValue1301 = $tmp2226;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2226));
            $tmp1293 = 38;
            goto $l1291;
            $l2228:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2230.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2232 = ((org$pandalanguage$pandac$Type**) ((char*) $match$427_91294->$data + 16));
            type2231 = *$tmp2232;
            panda$core$Int64* $tmp2234 = ((panda$core$Int64*) ((char*) $match$427_91294->$data + 24));
            id2233 = *$tmp2234;
            panda$core$Int64$wrapper* $tmp2240;
            $tmp2240 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2240->value = id2233;
            $tmp2239 = ((panda$core$Object*) $tmp2240);
            panda$core$String* $tmp2241 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2238, $tmp2239);
            $tmp2237 = $tmp2241;
            panda$core$String* $tmp2243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2237, &$s2242);
            $tmp2236 = $tmp2243;
            $tmp2235 = $tmp2236;
            $returnValue1301 = $tmp2235;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2235));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2236));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2237));
            panda$core$Panda$unref$panda$core$Object($tmp2239);
            $tmp1293 = 39;
            goto $l1291;
            $l2244:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp2246.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2248 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 0));
            base2247 = *$tmp2248;
            panda$core$Int64* $tmp2250 = ((panda$core$Int64*) ((char*) $match$427_91294->$data + 8));
            id2249 = *$tmp2250;
            panda$core$Int64$wrapper* $tmp2258;
            $tmp2258 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2258->value = id2249;
            $tmp2257 = ((panda$core$Object*) $tmp2258);
            panda$core$String* $tmp2259 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2256, $tmp2257);
            $tmp2255 = $tmp2259;
            panda$core$String* $tmp2261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2255, &$s2260);
            $tmp2254 = $tmp2261;
            panda$core$String* $tmp2262 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2254, ((panda$core$Object*) base2247));
            $tmp2253 = $tmp2262;
            panda$core$String* $tmp2264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2253, &$s2263);
            $tmp2252 = $tmp2264;
            $tmp2251 = $tmp2252;
            $returnValue1301 = $tmp2251;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2251));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2252));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2253));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2254));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2255));
            panda$core$Panda$unref$panda$core$Object($tmp2257);
            $tmp1293 = 40;
            goto $l1291;
            $l2265:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp2267.value) {
        {
            $tmp2268 = &$s2269;
            $returnValue1301 = $tmp2268;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2268));
            $tmp1293 = 41;
            goto $l1291;
            $l2270:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2272.value) {
        {
            panda$core$String** $tmp2274 = ((panda$core$String**) ((char*) $match$427_91294->$data + 16));
            str2273 = *$tmp2274;
            $tmp2275 = str2273;
            $returnValue1301 = $tmp2275;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2275));
            $tmp1293 = 42;
            goto $l1291;
            $l2276:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp2278.value) {
        {
            $tmp2279 = &$s2280;
            $returnValue1301 = $tmp2279;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2279));
            $tmp1293 = 43;
            goto $l1291;
            $l2281:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp2283.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2285 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 16));
            test2284 = *$tmp2285;
            org$pandalanguage$pandac$IRNode** $tmp2287 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 24));
            ifTrue2286 = *$tmp2287;
            org$pandalanguage$pandac$IRNode** $tmp2289 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 32));
            ifFalse2288 = *$tmp2289;
            panda$core$String* $tmp2298 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2297, ((panda$core$Object*) test2284));
            $tmp2296 = $tmp2298;
            panda$core$String* $tmp2300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2296, &$s2299);
            $tmp2295 = $tmp2300;
            panda$core$String* $tmp2301 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2295, ((panda$core$Object*) ifTrue2286));
            $tmp2294 = $tmp2301;
            panda$core$String* $tmp2303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2294, &$s2302);
            $tmp2293 = $tmp2303;
            panda$core$String* $tmp2304 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2293, ((panda$core$Object*) ifFalse2288));
            $tmp2292 = $tmp2304;
            panda$core$String* $tmp2306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2292, &$s2305);
            $tmp2291 = $tmp2306;
            $tmp2290 = $tmp2291;
            $returnValue1301 = $tmp2290;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2290));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2291));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2292));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2293));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2294));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2295));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2296));
            $tmp1293 = 44;
            goto $l1291;
            $l2307:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp2309.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2311 = ((org$pandalanguage$pandac$Type**) ((char*) $match$427_91294->$data + 16));
            type2310 = *$tmp2311;
            panda$core$String* $tmp2314 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type2310);
            $tmp2313 = $tmp2314;
            $tmp2312 = $tmp2313;
            $returnValue1301 = $tmp2312;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2312));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2313));
            $tmp1293 = 45;
            goto $l1291;
            $l2315:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp2317.value) {
        {
            panda$core$String** $tmp2319 = ((panda$core$String**) ((char*) $match$427_91294->$data + 16));
            name2318 = *$tmp2319;
            $tmp2320 = name2318;
            $returnValue1301 = $tmp2320;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2320));
            $tmp1293 = 46;
            goto $l1291;
            $l2321:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp2323.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2325 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 24));
            base2324 = *$tmp2325;
            panda$collections$ImmutableArray** $tmp2327 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 32));
            args2326 = *$tmp2327;
            panda$core$String* $tmp2334 = (($fn2333) base2324->$class->vtable[0])(base2324);
            $tmp2332 = $tmp2334;
            panda$core$String* $tmp2336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2332, &$s2335);
            $tmp2331 = $tmp2336;
            panda$core$String* $tmp2338 = panda$collections$ImmutableArray$join$R$panda$core$String(args2326);
            $tmp2337 = $tmp2338;
            panda$core$String* $tmp2339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2331, $tmp2337);
            $tmp2330 = $tmp2339;
            panda$core$String* $tmp2341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2330, &$s2340);
            $tmp2329 = $tmp2341;
            $tmp2328 = $tmp2329;
            $returnValue1301 = $tmp2328;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2328));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2329));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2330));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2337));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2331));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2332));
            $tmp1293 = 47;
            goto $l1291;
            $l2342:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp2344.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2346 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 24));
            target2345 = *$tmp2346;
            panda$collections$ImmutableArray** $tmp2348 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 32));
            methods2347 = *$tmp2348;
            panda$collections$ImmutableArray** $tmp2350 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 40));
            args2349 = *$tmp2350;
            panda$core$String* $tmp2359 = (($fn2358) target2345->$class->vtable[0])(target2345);
            $tmp2357 = $tmp2359;
            panda$core$String* $tmp2361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2357, &$s2360);
            $tmp2356 = $tmp2361;
            panda$core$Object* $tmp2363 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2347, ((panda$core$Int64) { 0 }));
            $tmp2362 = $tmp2363;
            panda$core$String* $tmp2364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2356, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2362)->value)->name);
            $tmp2355 = $tmp2364;
            panda$core$String* $tmp2366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2355, &$s2365);
            $tmp2354 = $tmp2366;
            panda$core$String* $tmp2368 = panda$collections$ImmutableArray$join$R$panda$core$String(args2349);
            $tmp2367 = $tmp2368;
            panda$core$String* $tmp2369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2354, $tmp2367);
            $tmp2353 = $tmp2369;
            panda$core$String* $tmp2371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2353, &$s2370);
            $tmp2352 = $tmp2371;
            $tmp2351 = $tmp2352;
            $returnValue1301 = $tmp2351;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2351));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2352));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2353));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2367));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2354));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2355));
            panda$core$Panda$unref$panda$core$Object($tmp2362);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2356));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2357));
            $tmp1293 = 48;
            goto $l1291;
            $l2372:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2374.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2376 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 16));
            target2375 = *$tmp2376;
            panda$collections$ImmutableArray** $tmp2378 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 24));
            methods2377 = *$tmp2378;
            panda$core$String* $tmp2385 = (($fn2384) target2375->$class->vtable[0])(target2375);
            $tmp2383 = $tmp2385;
            panda$core$String* $tmp2387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2383, &$s2386);
            $tmp2382 = $tmp2387;
            panda$core$Object* $tmp2389 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2377, ((panda$core$Int64) { 0 }));
            $tmp2388 = $tmp2389;
            panda$core$String* $tmp2390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2382, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2388)->value)->name);
            $tmp2381 = $tmp2390;
            panda$core$String* $tmp2392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2381, &$s2391);
            $tmp2380 = $tmp2392;
            $tmp2379 = $tmp2380;
            $returnValue1301 = $tmp2379;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2379));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2380));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2381));
            panda$core$Panda$unref$panda$core$Object($tmp2388);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2382));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2383));
            $tmp1293 = 49;
            goto $l1291;
            $l2393:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp2395.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2397 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 16));
            start2396 = *$tmp2397;
            org$pandalanguage$pandac$IRNode** $tmp2399 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 24));
            end2398 = *$tmp2399;
            panda$core$Bit* $tmp2401 = ((panda$core$Bit*) ((char*) $match$427_91294->$data + 32));
            inclusive2400 = *$tmp2401;
            org$pandalanguage$pandac$IRNode** $tmp2403 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 33));
            step2402 = *$tmp2403;
            int $tmp2406;
            {
                panda$core$MutableString* $tmp2410 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2410);
                $tmp2409 = $tmp2410;
                $tmp2408 = $tmp2409;
                result2407 = $tmp2408;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2408));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2409));
                if (((panda$core$Bit) { start2396 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2407, ((panda$core$Object*) start2396));
                }
                }
                if (inclusive2400.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2407, &$s2411);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result2407, &$s2412);
                }
                }
                if (((panda$core$Bit) { end2398 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2407, ((panda$core$Object*) end2398));
                }
                }
                if (((panda$core$Bit) { step2402 != NULL }).value) {
                {
                    panda$core$String* $tmp2416 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2415, ((panda$core$Object*) step2402));
                    $tmp2414 = $tmp2416;
                    panda$core$String* $tmp2418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2414, &$s2417);
                    $tmp2413 = $tmp2418;
                    panda$core$MutableString$append$panda$core$String(result2407, $tmp2413);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2413));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2414));
                }
                }
                panda$core$String* $tmp2421 = panda$core$MutableString$finish$R$panda$core$String(result2407);
                $tmp2420 = $tmp2421;
                $tmp2419 = $tmp2420;
                $returnValue1301 = $tmp2419;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2419));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2420));
                $tmp2406 = 0;
                goto $l2404;
                $l2422:;
                $tmp1293 = 50;
                goto $l1291;
                $l2423:;
                return $returnValue1301;
            }
            $l2404:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2407));
            result2407 = NULL;
            switch ($tmp2406) {
                case 0: goto $l2422;
            }
            $l2425:;
        }
        }
        else {
        panda$core$Bit $tmp2426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp2426.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp2428 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$427_91294->$data + 16));
            kind2427 = *$tmp2428;
            panda$collections$ImmutableArray** $tmp2430 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 24));
            decls2429 = *$tmp2430;
            int $tmp2433;
            {
                panda$core$MutableString* $tmp2437 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2437);
                $tmp2436 = $tmp2437;
                $tmp2435 = $tmp2436;
                result2434 = $tmp2435;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2435));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2436));
                {
                    $match$620_172438 = kind2427;
                    panda$core$Bit $tmp2439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$620_172438.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp2439.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2434, &$s2440);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$620_172438.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp2441.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2434, &$s2442);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$620_172438.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp2443.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2434, &$s2444);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$620_172438.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp2445.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2434, &$s2446);
                    }
                    }
                    }
                    }
                    }
                }
                panda$core$String* $tmp2448 = panda$collections$ImmutableArray$join$R$panda$core$String(decls2429);
                $tmp2447 = $tmp2448;
                panda$core$MutableString$append$panda$core$String(result2434, $tmp2447);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2447));
                panda$core$String* $tmp2451 = panda$core$MutableString$finish$R$panda$core$String(result2434);
                $tmp2450 = $tmp2451;
                $tmp2449 = $tmp2450;
                $returnValue1301 = $tmp2449;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2449));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2450));
                $tmp2433 = 0;
                goto $l2431;
                $l2452:;
                $tmp1293 = 51;
                goto $l1291;
                $l2453:;
                return $returnValue1301;
            }
            $l2431:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2434));
            result2434 = NULL;
            switch ($tmp2433) {
                case 0: goto $l2452;
            }
            $l2455:;
        }
        }
        else {
        panda$core$Bit $tmp2456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp2456.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2458 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$427_91294->$data + 16));
            variable2457 = *$tmp2458;
            $tmp2459 = ((org$pandalanguage$pandac$Symbol*) variable2457)->name;
            $returnValue1301 = $tmp2459;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2459));
            $tmp1293 = 52;
            goto $l1291;
            $l2460:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp2462.value) {
        {
            panda$collections$ImmutableArray** $tmp2464 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 16));
            tests2463 = *$tmp2464;
            panda$collections$ImmutableArray** $tmp2466 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 24));
            statements2465 = *$tmp2466;
            panda$core$String* $tmp2474 = panda$collections$ImmutableArray$join$R$panda$core$String(tests2463);
            $tmp2473 = $tmp2474;
            panda$core$String* $tmp2475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2472, $tmp2473);
            $tmp2471 = $tmp2475;
            panda$core$String* $tmp2477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2471, &$s2476);
            $tmp2470 = $tmp2477;
            panda$core$String* $tmp2480 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(statements2465, &$s2479);
            $tmp2478 = $tmp2480;
            panda$core$String* $tmp2481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2470, $tmp2478);
            $tmp2469 = $tmp2481;
            panda$core$String* $tmp2483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2469, &$s2482);
            $tmp2468 = $tmp2483;
            $tmp2467 = $tmp2468;
            $returnValue1301 = $tmp2467;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2467));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2468));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2469));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2478));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2470));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2471));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2473));
            $tmp1293 = 53;
            goto $l1291;
            $l2484:;
            return $returnValue1301;
        }
        }
        else {
        panda$core$Bit $tmp2486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91294->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp2486.value) {
        {
            panda$core$String** $tmp2488 = ((panda$core$String**) ((char*) $match$427_91294->$data + 16));
            label2487 = *$tmp2488;
            org$pandalanguage$pandac$IRNode** $tmp2490 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91294->$data + 24));
            test2489 = *$tmp2490;
            panda$collections$ImmutableArray** $tmp2492 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91294->$data + 32));
            statements2491 = *$tmp2492;
            int $tmp2495;
            {
                panda$core$MutableString* $tmp2499 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2499);
                $tmp2498 = $tmp2499;
                $tmp2497 = $tmp2498;
                result2496 = $tmp2497;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2497));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2498));
                if (((panda$core$Bit) { label2487 != NULL }).value) {
                {
                    panda$core$String* $tmp2502 = panda$core$String$convert$R$panda$core$String(label2487);
                    $tmp2501 = $tmp2502;
                    panda$core$String* $tmp2504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2501, &$s2503);
                    $tmp2500 = $tmp2504;
                    panda$core$MutableString$append$panda$core$String(result2496, $tmp2500);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2500));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2501));
                }
                }
                panda$core$String* $tmp2508 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2507, ((panda$core$Object*) test2489));
                $tmp2506 = $tmp2508;
                panda$core$String* $tmp2510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2506, &$s2509);
                $tmp2505 = $tmp2510;
                panda$core$MutableString$append$panda$core$String(result2496, $tmp2505);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2505));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2506));
                {
                    int $tmp2513;
                    {
                        ITable* $tmp2517 = ((panda$collections$Iterable*) statements2491)->$class->itable;
                        while ($tmp2517->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2517 = $tmp2517->next;
                        }
                        $fn2519 $tmp2518 = $tmp2517->methods[0];
                        panda$collections$Iterator* $tmp2520 = $tmp2518(((panda$collections$Iterable*) statements2491));
                        $tmp2516 = $tmp2520;
                        $tmp2515 = $tmp2516;
                        Iter$638$172514 = $tmp2515;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2515));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2516));
                        $l2521:;
                        ITable* $tmp2524 = Iter$638$172514->$class->itable;
                        while ($tmp2524->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2524 = $tmp2524->next;
                        }
                        $fn2526 $tmp2525 = $tmp2524->methods[0];
                        panda$core$Bit $tmp2527 = $tmp2525(Iter$638$172514);
                        panda$core$Bit $tmp2528 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2527);
                        bool $tmp2523 = $tmp2528.value;
                        if (!$tmp2523) goto $l2522;
                        {
                            int $tmp2531;
                            {
                                ITable* $tmp2535 = Iter$638$172514->$class->itable;
                                while ($tmp2535->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2535 = $tmp2535->next;
                                }
                                $fn2537 $tmp2536 = $tmp2535->methods[1];
                                panda$core$Object* $tmp2538 = $tmp2536(Iter$638$172514);
                                $tmp2534 = $tmp2538;
                                $tmp2533 = ((org$pandalanguage$pandac$IRNode*) $tmp2534);
                                s2532 = $tmp2533;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2533));
                                panda$core$Panda$unref$panda$core$Object($tmp2534);
                                panda$core$String* $tmp2541 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2532), &$s2540);
                                $tmp2539 = $tmp2541;
                                panda$core$MutableString$append$panda$core$String(result2496, $tmp2539);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2539));
                            }
                            $tmp2531 = -1;
                            goto $l2529;
                            $l2529:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2532));
                            s2532 = NULL;
                            switch ($tmp2531) {
                                case -1: goto $l2542;
                            }
                            $l2542:;
                        }
                        goto $l2521;
                        $l2522:;
                    }
                    $tmp2513 = -1;
                    goto $l2511;
                    $l2511:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$638$172514));
                    Iter$638$172514 = NULL;
                    switch ($tmp2513) {
                        case -1: goto $l2543;
                    }
                    $l2543:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2544, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2496, $tmp2544);
                panda$core$String* $tmp2547 = panda$core$MutableString$finish$R$panda$core$String(result2496);
                $tmp2546 = $tmp2547;
                $tmp2545 = $tmp2546;
                $returnValue1301 = $tmp2545;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2545));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2546));
                $tmp2495 = 0;
                goto $l2493;
                $l2548:;
                $tmp1293 = 54;
                goto $l1291;
                $l2549:;
                return $returnValue1301;
            }
            $l2493:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2496));
            result2496 = NULL;
            switch ($tmp2495) {
                case 0: goto $l2548;
            }
            $l2551:;
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
        case 49: goto $l2393;
        case 39: goto $l2244;
        case 29: goto $l2071;
        case 38: goto $l2228;
        case 22: goto $l1800;
        case 8: goto $l1520;
        case 27: goto $l1918;
        case 41: goto $l2270;
        case 50: goto $l2423;
        case 30: goto $l2091;
        case 52: goto $l2460;
        case 11: goto $l1579;
        case 16: goto $l1664;
        case 37: goto $l2224;
        case 34: goto $l2131;
        case 51: goto $l2453;
        case 46: goto $l2321;
        case 17: goto $l1668;
        case -1: goto $l2552;
        case 0: goto $l1314;
        case 42: goto $l2276;
        case 20: goto $l1758;
        case 43: goto $l2281;
        case 48: goto $l2372;
        case 5: goto $l1415;
        case 45: goto $l2315;
        case 9: goto $l1540;
        case 54: goto $l2549;
        case 12: goto $l1587;
        case 23: goto $l1819;
        case 15: goto $l1652;
        case 14: goto $l1644;
        case 19: goto $l1693;
        case 40: goto $l2265;
        case 21: goto $l1781;
        case 4: goto $l1364;
        case 24: goto $l1885;
        case 25: goto $l1894;
        case 2: goto $l1328;
        case 13: goto $l1615;
        case 31: goto $l2094;
        case 32: goto $l2105;
        case 18: goto $l1687;
        case 10: goto $l1565;
        case 28: goto $l1976;
        case 7: goto $l1516;
        case 6: goto $l1503;
        case 53: goto $l2484;
        case 3: goto $l1356;
        case 1: goto $l1323;
        case 36: goto $l2212;
        case 47: goto $l2342;
        case 26: goto $l1906;
        case 33: goto $l2110;
        case 44: goto $l2307;
        case 35: goto $l2203;
    }
    $l2552:;
}
void org$pandalanguage$pandac$IRNode$cleanup(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$5_12559 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2560;
    org$pandalanguage$pandac$Position _f02562;
    org$pandalanguage$pandac$IRNode* _f12564 = NULL;
    org$pandalanguage$pandac$IRNode* _f22566 = NULL;
    org$pandalanguage$pandac$Position _f02569;
    org$pandalanguage$pandac$Type* _f12571 = NULL;
    org$pandalanguage$pandac$Position _f02574;
    org$pandalanguage$pandac$Type* _f12576 = NULL;
    org$pandalanguage$pandac$IRNode* _f22578 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f32580;
    org$pandalanguage$pandac$IRNode* _f42582 = NULL;
    org$pandalanguage$pandac$Position _f02585;
    org$pandalanguage$pandac$Type* _f12587 = NULL;
    panda$core$Bit _f22589;
    org$pandalanguage$pandac$Position _f02592;
    panda$collections$ImmutableArray* _f12594 = NULL;
    org$pandalanguage$pandac$Position _f02597;
    panda$collections$ImmutableArray* _f12599 = NULL;
    panda$collections$ImmutableArray* _f22601 = NULL;
    org$pandalanguage$pandac$Position _f02604;
    panda$core$String* _f12606 = NULL;
    org$pandalanguage$pandac$Position _f02609;
    org$pandalanguage$pandac$Type* _f12611 = NULL;
    org$pandalanguage$pandac$MethodRef* _f22613 = NULL;
    panda$collections$ImmutableArray* _f32615 = NULL;
    org$pandalanguage$pandac$Position _f02618;
    org$pandalanguage$pandac$IRNode* _f12620 = NULL;
    org$pandalanguage$pandac$Type* _f22622 = NULL;
    panda$core$Bit _f32624;
    org$pandalanguage$pandac$Position _f02627;
    org$pandalanguage$pandac$ChoiceEntry* _f12629 = NULL;
    org$pandalanguage$pandac$Position _f02632;
    org$pandalanguage$pandac$IRNode* _f12634 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f22636 = NULL;
    panda$core$Int64 _f32638;
    org$pandalanguage$pandac$Position _f02641;
    org$pandalanguage$pandac$Type* _f12643 = NULL;
    org$pandalanguage$pandac$IRNode* _f22645 = NULL;
    org$pandalanguage$pandac$Position _f02648;
    org$pandalanguage$pandac$Type* _f12650 = NULL;
    org$pandalanguage$pandac$Position _f02653;
    panda$core$String* _f12655 = NULL;
    org$pandalanguage$pandac$IRNode* _f02658 = NULL;
    org$pandalanguage$pandac$IRNode* _f12660 = NULL;
    org$pandalanguage$pandac$Position _f02663;
    panda$core$String* _f12665 = NULL;
    panda$collections$ImmutableArray* _f22667 = NULL;
    org$pandalanguage$pandac$IRNode* _f32669 = NULL;
    org$pandalanguage$pandac$IRNode* _f02672 = NULL;
    panda$collections$ImmutableArray* _f12674 = NULL;
    org$pandalanguage$pandac$IRNode* _f02677 = NULL;
    org$pandalanguage$pandac$IRNode* _f12679 = NULL;
    org$pandalanguage$pandac$Position _f02682;
    org$pandalanguage$pandac$Type* _f12684 = NULL;
    org$pandalanguage$pandac$IRNode* _f22686 = NULL;
    org$pandalanguage$pandac$FieldDecl* _f32688 = NULL;
    org$pandalanguage$pandac$Position _f02691;
    org$pandalanguage$pandac$IRNode* _f12693 = NULL;
    panda$collections$ImmutableArray* _f22695 = NULL;
    org$pandalanguage$pandac$IRNode* _f32697 = NULL;
    org$pandalanguage$pandac$Position _f02700;
    org$pandalanguage$pandac$Type* _f12702 = NULL;
    panda$core$UInt64 _f22704;
    org$pandalanguage$pandac$Position _f02707;
    org$pandalanguage$pandac$IRNode* _f12709 = NULL;
    org$pandalanguage$pandac$Position _f02712;
    org$pandalanguage$pandac$IRNode* _f12714 = NULL;
    org$pandalanguage$pandac$Position _f02717;
    panda$core$String* _f12719 = NULL;
    panda$collections$ImmutableArray* _f22721 = NULL;
    org$pandalanguage$pandac$Position _f02724;
    org$pandalanguage$pandac$IRNode* _f12726 = NULL;
    panda$collections$ImmutableArray* _f22728 = NULL;
    panda$collections$ImmutableArray* _f32730 = NULL;
    org$pandalanguage$pandac$Position _f02733;
    org$pandalanguage$pandac$IRNode* _f12735 = NULL;
    org$pandalanguage$pandac$MethodRef* _f22737 = NULL;
    org$pandalanguage$pandac$Position _f02740;
    org$pandalanguage$pandac$Type* _f12742 = NULL;
    panda$core$UInt64 _f22744;
    org$pandalanguage$pandac$Position _f02747;
    org$pandalanguage$pandac$Type* _f12749 = NULL;
    org$pandalanguage$pandac$Position _f02752;
    org$pandalanguage$pandac$parser$Token$Kind _f12754;
    org$pandalanguage$pandac$IRNode* _f22756 = NULL;
    org$pandalanguage$pandac$Position _f02759;
    panda$core$String* _f12761 = NULL;
    org$pandalanguage$pandac$IRNode* _f22763 = NULL;
    org$pandalanguage$pandac$IRNode* _f32765 = NULL;
    panda$collections$ImmutableArray* _f42767 = NULL;
    org$pandalanguage$pandac$Position _f02770;
    org$pandalanguage$pandac$Type* _f12772 = NULL;
    panda$core$Real64 _f22774;
    org$pandalanguage$pandac$Position _f02777;
    org$pandalanguage$pandac$IRNode* _f12779 = NULL;
    org$pandalanguage$pandac$Position _f02782;
    org$pandalanguage$pandac$Type* _f12784 = NULL;
    panda$core$Int64 _f22786;
    org$pandalanguage$pandac$IRNode* _f02789 = NULL;
    panda$core$Int64 _f12791;
    org$pandalanguage$pandac$Position _f02794;
    org$pandalanguage$pandac$Type* _f12796 = NULL;
    org$pandalanguage$pandac$Position _f02799;
    panda$core$String* _f12801 = NULL;
    org$pandalanguage$pandac$Position _f02804;
    org$pandalanguage$pandac$Type* _f12806 = NULL;
    org$pandalanguage$pandac$Position _f02809;
    org$pandalanguage$pandac$IRNode* _f12811 = NULL;
    org$pandalanguage$pandac$IRNode* _f22813 = NULL;
    org$pandalanguage$pandac$IRNode* _f32815 = NULL;
    org$pandalanguage$pandac$Position _f02818;
    org$pandalanguage$pandac$Type* _f12820 = NULL;
    org$pandalanguage$pandac$Position _f02823;
    panda$core$String* _f12825 = NULL;
    org$pandalanguage$pandac$Position _f02828;
    org$pandalanguage$pandac$Type* _f12830 = NULL;
    org$pandalanguage$pandac$IRNode* _f22832 = NULL;
    panda$collections$ImmutableArray* _f32834 = NULL;
    org$pandalanguage$pandac$Position _f02837;
    org$pandalanguage$pandac$Type* _f12839 = NULL;
    org$pandalanguage$pandac$IRNode* _f22841 = NULL;
    panda$collections$ImmutableArray* _f32843 = NULL;
    panda$collections$ImmutableArray* _f42845 = NULL;
    org$pandalanguage$pandac$Position _f02848;
    org$pandalanguage$pandac$IRNode* _f12850 = NULL;
    panda$collections$ImmutableArray* _f22852 = NULL;
    org$pandalanguage$pandac$Position _f02855;
    org$pandalanguage$pandac$IRNode* _f12857 = NULL;
    org$pandalanguage$pandac$IRNode* _f22859 = NULL;
    panda$core$Bit _f32861;
    org$pandalanguage$pandac$IRNode* _f42863 = NULL;
    org$pandalanguage$pandac$Position _f02866;
    org$pandalanguage$pandac$Variable$Kind _f12868;
    panda$collections$ImmutableArray* _f22870 = NULL;
    org$pandalanguage$pandac$Position _f02873;
    org$pandalanguage$pandac$Variable* _f12875 = NULL;
    org$pandalanguage$pandac$Position _f02878;
    panda$collections$ImmutableArray* _f12880 = NULL;
    panda$collections$ImmutableArray* _f22882 = NULL;
    org$pandalanguage$pandac$Position _f02885;
    panda$core$String* _f12887 = NULL;
    org$pandalanguage$pandac$IRNode* _f22889 = NULL;
    panda$collections$ImmutableArray* _f32891 = NULL;
    int $tmp2555;
    {
        int $tmp2558;
        {
            $tmp2560 = self;
            $match$5_12559 = $tmp2560;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2560));
            panda$core$Bit $tmp2561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp2561.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2563 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02562 = *$tmp2563;
                org$pandalanguage$pandac$IRNode** $tmp2565 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 16));
                _f12564 = *$tmp2565;
                org$pandalanguage$pandac$IRNode** $tmp2567 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 24));
                _f22566 = *$tmp2567;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12564));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22566));
            }
            }
            else {
            panda$core$Bit $tmp2568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp2568.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2570 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02569 = *$tmp2570;
                org$pandalanguage$pandac$Type** $tmp2572 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12559->$data + 16));
                _f12571 = *$tmp2572;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12571));
            }
            }
            else {
            panda$core$Bit $tmp2573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp2573.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2575 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02574 = *$tmp2575;
                org$pandalanguage$pandac$Type** $tmp2577 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12559->$data + 16));
                _f12576 = *$tmp2577;
                org$pandalanguage$pandac$IRNode** $tmp2579 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 24));
                _f22578 = *$tmp2579;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2581 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12559->$data + 32));
                _f32580 = *$tmp2581;
                org$pandalanguage$pandac$IRNode** $tmp2583 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 40));
                _f42582 = *$tmp2583;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12576));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22578));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42582));
            }
            }
            else {
            panda$core$Bit $tmp2584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp2584.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2586 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02585 = *$tmp2586;
                org$pandalanguage$pandac$Type** $tmp2588 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12559->$data + 16));
                _f12587 = *$tmp2588;
                panda$core$Bit* $tmp2590 = ((panda$core$Bit*) ((char*) $match$5_12559->$data + 24));
                _f22589 = *$tmp2590;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12587));
            }
            }
            else {
            panda$core$Bit $tmp2591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp2591.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2593 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02592 = *$tmp2593;
                panda$collections$ImmutableArray** $tmp2595 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12559->$data + 16));
                _f12594 = *$tmp2595;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12594));
            }
            }
            else {
            panda$core$Bit $tmp2596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp2596.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2598 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02597 = *$tmp2598;
                panda$collections$ImmutableArray** $tmp2600 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12559->$data + 16));
                _f12599 = *$tmp2600;
                panda$collections$ImmutableArray** $tmp2602 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12559->$data + 24));
                _f22601 = *$tmp2602;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12599));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22601));
            }
            }
            else {
            panda$core$Bit $tmp2603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp2603.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2605 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02604 = *$tmp2605;
                panda$core$String** $tmp2607 = ((panda$core$String**) ((char*) $match$5_12559->$data + 16));
                _f12606 = *$tmp2607;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12606));
            }
            }
            else {
            panda$core$Bit $tmp2608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 7 }));
            if ($tmp2608.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2610 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02609 = *$tmp2610;
                org$pandalanguage$pandac$Type** $tmp2612 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12559->$data + 16));
                _f12611 = *$tmp2612;
                org$pandalanguage$pandac$MethodRef** $tmp2614 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12559->$data + 24));
                _f22613 = *$tmp2614;
                panda$collections$ImmutableArray** $tmp2616 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12559->$data + 32));
                _f32615 = *$tmp2616;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12611));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22613));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32615));
            }
            }
            else {
            panda$core$Bit $tmp2617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp2617.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2619 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02618 = *$tmp2619;
                org$pandalanguage$pandac$IRNode** $tmp2621 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 16));
                _f12620 = *$tmp2621;
                org$pandalanguage$pandac$Type** $tmp2623 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12559->$data + 24));
                _f22622 = *$tmp2623;
                panda$core$Bit* $tmp2625 = ((panda$core$Bit*) ((char*) $match$5_12559->$data + 32));
                _f32624 = *$tmp2625;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12620));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22622));
            }
            }
            else {
            panda$core$Bit $tmp2626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp2626.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2628 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02627 = *$tmp2628;
                org$pandalanguage$pandac$ChoiceEntry** $tmp2630 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12559->$data + 16));
                _f12629 = *$tmp2630;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12629));
            }
            }
            else {
            panda$core$Bit $tmp2631 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 10 }));
            if ($tmp2631.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2633 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02632 = *$tmp2633;
                org$pandalanguage$pandac$IRNode** $tmp2635 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 16));
                _f12634 = *$tmp2635;
                org$pandalanguage$pandac$ChoiceEntry** $tmp2637 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12559->$data + 24));
                _f22636 = *$tmp2637;
                panda$core$Int64* $tmp2639 = ((panda$core$Int64*) ((char*) $match$5_12559->$data + 32));
                _f32638 = *$tmp2639;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12634));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22636));
            }
            }
            else {
            panda$core$Bit $tmp2640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp2640.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2642 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02641 = *$tmp2642;
                org$pandalanguage$pandac$Type** $tmp2644 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12559->$data + 16));
                _f12643 = *$tmp2644;
                org$pandalanguage$pandac$IRNode** $tmp2646 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 24));
                _f22645 = *$tmp2646;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12643));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22645));
            }
            }
            else {
            panda$core$Bit $tmp2647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp2647.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2649 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02648 = *$tmp2649;
                org$pandalanguage$pandac$Type** $tmp2651 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12559->$data + 16));
                _f12650 = *$tmp2651;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12650));
            }
            }
            else {
            panda$core$Bit $tmp2652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp2652.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2654 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02653 = *$tmp2654;
                panda$core$String** $tmp2656 = ((panda$core$String**) ((char*) $match$5_12559->$data + 16));
                _f12655 = *$tmp2656;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12655));
            }
            }
            else {
            panda$core$Bit $tmp2657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp2657.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2659 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 0));
                _f02658 = *$tmp2659;
                org$pandalanguage$pandac$IRNode** $tmp2661 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 8));
                _f12660 = *$tmp2661;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02658));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12660));
            }
            }
            else {
            panda$core$Bit $tmp2662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp2662.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2664 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02663 = *$tmp2664;
                panda$core$String** $tmp2666 = ((panda$core$String**) ((char*) $match$5_12559->$data + 16));
                _f12665 = *$tmp2666;
                panda$collections$ImmutableArray** $tmp2668 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12559->$data + 24));
                _f22667 = *$tmp2668;
                org$pandalanguage$pandac$IRNode** $tmp2670 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 32));
                _f32669 = *$tmp2670;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12665));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22667));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32669));
            }
            }
            else {
            panda$core$Bit $tmp2671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 16 }));
            if ($tmp2671.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2673 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 0));
                _f02672 = *$tmp2673;
                panda$collections$ImmutableArray** $tmp2675 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12559->$data + 8));
                _f12674 = *$tmp2675;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02672));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12674));
            }
            }
            else {
            panda$core$Bit $tmp2676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp2676.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2678 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 0));
                _f02677 = *$tmp2678;
                org$pandalanguage$pandac$IRNode** $tmp2680 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 8));
                _f12679 = *$tmp2680;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02677));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12679));
            }
            }
            else {
            panda$core$Bit $tmp2681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp2681.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2683 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02682 = *$tmp2683;
                org$pandalanguage$pandac$Type** $tmp2685 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12559->$data + 16));
                _f12684 = *$tmp2685;
                org$pandalanguage$pandac$IRNode** $tmp2687 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 24));
                _f22686 = *$tmp2687;
                org$pandalanguage$pandac$FieldDecl** $tmp2689 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$5_12559->$data + 32));
                _f32688 = *$tmp2689;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12684));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22686));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32688));
            }
            }
            else {
            panda$core$Bit $tmp2690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp2690.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2692 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02691 = *$tmp2692;
                org$pandalanguage$pandac$IRNode** $tmp2694 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 16));
                _f12693 = *$tmp2694;
                panda$collections$ImmutableArray** $tmp2696 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12559->$data + 24));
                _f22695 = *$tmp2696;
                org$pandalanguage$pandac$IRNode** $tmp2698 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 32));
                _f32697 = *$tmp2698;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12693));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22695));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32697));
            }
            }
            else {
            panda$core$Bit $tmp2699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 20 }));
            if ($tmp2699.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2701 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02700 = *$tmp2701;
                org$pandalanguage$pandac$Type** $tmp2703 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12559->$data + 16));
                _f12702 = *$tmp2703;
                panda$core$UInt64* $tmp2705 = ((panda$core$UInt64*) ((char*) $match$5_12559->$data + 24));
                _f22704 = *$tmp2705;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12702));
            }
            }
            else {
            panda$core$Bit $tmp2706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 21 }));
            if ($tmp2706.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2708 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02707 = *$tmp2708;
                org$pandalanguage$pandac$IRNode** $tmp2710 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 16));
                _f12709 = *$tmp2710;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12709));
            }
            }
            else {
            panda$core$Bit $tmp2711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp2711.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2713 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02712 = *$tmp2713;
                org$pandalanguage$pandac$IRNode** $tmp2715 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 16));
                _f12714 = *$tmp2715;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12714));
            }
            }
            else {
            panda$core$Bit $tmp2716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp2716.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2718 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02717 = *$tmp2718;
                panda$core$String** $tmp2720 = ((panda$core$String**) ((char*) $match$5_12559->$data + 16));
                _f12719 = *$tmp2720;
                panda$collections$ImmutableArray** $tmp2722 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12559->$data + 24));
                _f22721 = *$tmp2722;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12719));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22721));
            }
            }
            else {
            panda$core$Bit $tmp2723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp2723.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2725 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02724 = *$tmp2725;
                org$pandalanguage$pandac$IRNode** $tmp2727 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 16));
                _f12726 = *$tmp2727;
                panda$collections$ImmutableArray** $tmp2729 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12559->$data + 24));
                _f22728 = *$tmp2729;
                panda$collections$ImmutableArray** $tmp2731 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12559->$data + 32));
                _f32730 = *$tmp2731;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12726));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22728));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32730));
            }
            }
            else {
            panda$core$Bit $tmp2732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp2732.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2734 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02733 = *$tmp2734;
                org$pandalanguage$pandac$IRNode** $tmp2736 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 16));
                _f12735 = *$tmp2736;
                org$pandalanguage$pandac$MethodRef** $tmp2738 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12559->$data + 24));
                _f22737 = *$tmp2738;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12735));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22737));
            }
            }
            else {
            panda$core$Bit $tmp2739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp2739.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2741 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02740 = *$tmp2741;
                org$pandalanguage$pandac$Type** $tmp2743 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12559->$data + 16));
                _f12742 = *$tmp2743;
                panda$core$UInt64* $tmp2745 = ((panda$core$UInt64*) ((char*) $match$5_12559->$data + 24));
                _f22744 = *$tmp2745;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12742));
            }
            }
            else {
            panda$core$Bit $tmp2746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 27 }));
            if ($tmp2746.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2748 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02747 = *$tmp2748;
                org$pandalanguage$pandac$Type** $tmp2750 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12559->$data + 16));
                _f12749 = *$tmp2750;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12749));
            }
            }
            else {
            panda$core$Bit $tmp2751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 28 }));
            if ($tmp2751.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2753 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02752 = *$tmp2753;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2755 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12559->$data + 16));
                _f12754 = *$tmp2755;
                org$pandalanguage$pandac$IRNode** $tmp2757 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 24));
                _f22756 = *$tmp2757;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22756));
            }
            }
            else {
            panda$core$Bit $tmp2758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 29 }));
            if ($tmp2758.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2760 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02759 = *$tmp2760;
                panda$core$String** $tmp2762 = ((panda$core$String**) ((char*) $match$5_12559->$data + 16));
                _f12761 = *$tmp2762;
                org$pandalanguage$pandac$IRNode** $tmp2764 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 24));
                _f22763 = *$tmp2764;
                org$pandalanguage$pandac$IRNode** $tmp2766 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 32));
                _f32765 = *$tmp2766;
                panda$collections$ImmutableArray** $tmp2768 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12559->$data + 40));
                _f42767 = *$tmp2768;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12761));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22763));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32765));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42767));
            }
            }
            else {
            panda$core$Bit $tmp2769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 30 }));
            if ($tmp2769.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2771 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02770 = *$tmp2771;
                org$pandalanguage$pandac$Type** $tmp2773 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12559->$data + 16));
                _f12772 = *$tmp2773;
                panda$core$Real64* $tmp2775 = ((panda$core$Real64*) ((char*) $match$5_12559->$data + 24));
                _f22774 = *$tmp2775;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12772));
            }
            }
            else {
            panda$core$Bit $tmp2776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 31 }));
            if ($tmp2776.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2778 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02777 = *$tmp2778;
                org$pandalanguage$pandac$IRNode** $tmp2780 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 16));
                _f12779 = *$tmp2780;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12779));
            }
            }
            else {
            panda$core$Bit $tmp2781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 32 }));
            if ($tmp2781.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2783 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02782 = *$tmp2783;
                org$pandalanguage$pandac$Type** $tmp2785 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12559->$data + 16));
                _f12784 = *$tmp2785;
                panda$core$Int64* $tmp2787 = ((panda$core$Int64*) ((char*) $match$5_12559->$data + 24));
                _f22786 = *$tmp2787;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12784));
            }
            }
            else {
            panda$core$Bit $tmp2788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp2788.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2790 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 0));
                _f02789 = *$tmp2790;
                panda$core$Int64* $tmp2792 = ((panda$core$Int64*) ((char*) $match$5_12559->$data + 8));
                _f12791 = *$tmp2792;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02789));
            }
            }
            else {
            panda$core$Bit $tmp2793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp2793.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2795 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02794 = *$tmp2795;
                org$pandalanguage$pandac$Type** $tmp2797 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12559->$data + 16));
                _f12796 = *$tmp2797;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12796));
            }
            }
            else {
            panda$core$Bit $tmp2798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 35 }));
            if ($tmp2798.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2800 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02799 = *$tmp2800;
                panda$core$String** $tmp2802 = ((panda$core$String**) ((char*) $match$5_12559->$data + 16));
                _f12801 = *$tmp2802;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12801));
            }
            }
            else {
            panda$core$Bit $tmp2803 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp2803.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2805 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02804 = *$tmp2805;
                org$pandalanguage$pandac$Type** $tmp2807 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12559->$data + 16));
                _f12806 = *$tmp2807;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12806));
            }
            }
            else {
            panda$core$Bit $tmp2808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 37 }));
            if ($tmp2808.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2810 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02809 = *$tmp2810;
                org$pandalanguage$pandac$IRNode** $tmp2812 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 16));
                _f12811 = *$tmp2812;
                org$pandalanguage$pandac$IRNode** $tmp2814 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 24));
                _f22813 = *$tmp2814;
                org$pandalanguage$pandac$IRNode** $tmp2816 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 32));
                _f32815 = *$tmp2816;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12811));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22813));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32815));
            }
            }
            else {
            panda$core$Bit $tmp2817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 38 }));
            if ($tmp2817.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2819 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02818 = *$tmp2819;
                org$pandalanguage$pandac$Type** $tmp2821 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12559->$data + 16));
                _f12820 = *$tmp2821;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12820));
            }
            }
            else {
            panda$core$Bit $tmp2822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp2822.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2824 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02823 = *$tmp2824;
                panda$core$String** $tmp2826 = ((panda$core$String**) ((char*) $match$5_12559->$data + 16));
                _f12825 = *$tmp2826;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12825));
            }
            }
            else {
            panda$core$Bit $tmp2827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp2827.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2829 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02828 = *$tmp2829;
                org$pandalanguage$pandac$Type** $tmp2831 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12559->$data + 16));
                _f12830 = *$tmp2831;
                org$pandalanguage$pandac$IRNode** $tmp2833 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 24));
                _f22832 = *$tmp2833;
                panda$collections$ImmutableArray** $tmp2835 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12559->$data + 32));
                _f32834 = *$tmp2835;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12830));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22832));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32834));
            }
            }
            else {
            panda$core$Bit $tmp2836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 41 }));
            if ($tmp2836.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2838 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02837 = *$tmp2838;
                org$pandalanguage$pandac$Type** $tmp2840 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12559->$data + 16));
                _f12839 = *$tmp2840;
                org$pandalanguage$pandac$IRNode** $tmp2842 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 24));
                _f22841 = *$tmp2842;
                panda$collections$ImmutableArray** $tmp2844 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12559->$data + 32));
                _f32843 = *$tmp2844;
                panda$collections$ImmutableArray** $tmp2846 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12559->$data + 40));
                _f42845 = *$tmp2846;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12839));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22841));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32843));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42845));
            }
            }
            else {
            panda$core$Bit $tmp2847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 42 }));
            if ($tmp2847.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2849 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02848 = *$tmp2849;
                org$pandalanguage$pandac$IRNode** $tmp2851 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 16));
                _f12850 = *$tmp2851;
                panda$collections$ImmutableArray** $tmp2853 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12559->$data + 24));
                _f22852 = *$tmp2853;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12850));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22852));
            }
            }
            else {
            panda$core$Bit $tmp2854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 43 }));
            if ($tmp2854.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2856 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02855 = *$tmp2856;
                org$pandalanguage$pandac$IRNode** $tmp2858 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 16));
                _f12857 = *$tmp2858;
                org$pandalanguage$pandac$IRNode** $tmp2860 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 24));
                _f22859 = *$tmp2860;
                panda$core$Bit* $tmp2862 = ((panda$core$Bit*) ((char*) $match$5_12559->$data + 32));
                _f32861 = *$tmp2862;
                org$pandalanguage$pandac$IRNode** $tmp2864 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 33));
                _f42863 = *$tmp2864;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12857));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22859));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42863));
            }
            }
            else {
            panda$core$Bit $tmp2865 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 44 }));
            if ($tmp2865.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2867 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02866 = *$tmp2867;
                org$pandalanguage$pandac$Variable$Kind* $tmp2869 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_12559->$data + 16));
                _f12868 = *$tmp2869;
                panda$collections$ImmutableArray** $tmp2871 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12559->$data + 24));
                _f22870 = *$tmp2871;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22870));
            }
            }
            else {
            panda$core$Bit $tmp2872 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 45 }));
            if ($tmp2872.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2874 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02873 = *$tmp2874;
                org$pandalanguage$pandac$Variable** $tmp2876 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$5_12559->$data + 16));
                _f12875 = *$tmp2876;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12875));
            }
            }
            else {
            panda$core$Bit $tmp2877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 46 }));
            if ($tmp2877.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2879 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02878 = *$tmp2879;
                panda$collections$ImmutableArray** $tmp2881 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12559->$data + 16));
                _f12880 = *$tmp2881;
                panda$collections$ImmutableArray** $tmp2883 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12559->$data + 24));
                _f22882 = *$tmp2883;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12880));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22882));
            }
            }
            else {
            panda$core$Bit $tmp2884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12559->$rawValue, ((panda$core$Int64) { 47 }));
            if ($tmp2884.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2886 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12559->$data + 0));
                _f02885 = *$tmp2886;
                panda$core$String** $tmp2888 = ((panda$core$String**) ((char*) $match$5_12559->$data + 16));
                _f12887 = *$tmp2888;
                org$pandalanguage$pandac$IRNode** $tmp2890 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12559->$data + 24));
                _f22889 = *$tmp2890;
                panda$collections$ImmutableArray** $tmp2892 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12559->$data + 32));
                _f32891 = *$tmp2892;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12887));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22889));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32891));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp2558 = -1;
        goto $l2556;
        $l2556:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2560));
        switch ($tmp2558) {
            case -1: goto $l2893;
        }
        $l2893:;
    }
    $tmp2555 = -1;
    goto $l2553;
    $l2553:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2555) {
        case -1: goto $l2894;
    }
    $l2894:;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp2896;
    org$pandalanguage$pandac$IRNode* $tmp2899;
    org$pandalanguage$pandac$IRNode* $tmp2900;
    org$pandalanguage$pandac$IRNode* $tmp2903;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2895 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2895 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp2897 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp2896 = *$tmp2897;
        org$pandalanguage$pandac$IRNode** $tmp2898 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp2899 = p_f1;
        *$tmp2898 = $tmp2899;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2899));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2896));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp2901 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp2900 = *$tmp2901;
        org$pandalanguage$pandac$IRNode** $tmp2902 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp2903 = p_f2;
        *$tmp2902 = $tmp2903;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2903));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2900));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1) {
    org$pandalanguage$pandac$Type* $tmp2905;
    org$pandalanguage$pandac$Type* $tmp2908;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2904 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2904 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp2906 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2905 = *$tmp2906;
        org$pandalanguage$pandac$Type** $tmp2907 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2908 = p_f1;
        *$tmp2907 = $tmp2908;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2908));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2905));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$parser$Token$Kind p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$Type* $tmp2910;
    org$pandalanguage$pandac$Type* $tmp2913;
    org$pandalanguage$pandac$IRNode* $tmp2914;
    org$pandalanguage$pandac$IRNode* $tmp2917;
    org$pandalanguage$pandac$IRNode* $tmp2919;
    org$pandalanguage$pandac$IRNode* $tmp2922;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2909 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2909 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp2911 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2910 = *$tmp2911;
        org$pandalanguage$pandac$Type** $tmp2912 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2913 = p_f1;
        *$tmp2912 = $tmp2913;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2913));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2910));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp2915 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp2914 = *$tmp2915;
        org$pandalanguage$pandac$IRNode** $tmp2916 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp2917 = p_f2;
        *$tmp2916 = $tmp2917;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2917));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2914));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2918 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 32));
    *$tmp2918 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp2920 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp2919 = *$tmp2920;
        org$pandalanguage$pandac$IRNode** $tmp2921 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp2922 = p_f4;
        *$tmp2921 = $tmp2922;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2922));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2919));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Bit p_f2) {
    org$pandalanguage$pandac$Type* $tmp2924;
    org$pandalanguage$pandac$Type* $tmp2927;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2923 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2923 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp2925 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2924 = *$tmp2925;
        org$pandalanguage$pandac$Type** $tmp2926 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2927 = p_f1;
        *$tmp2926 = $tmp2927;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2927));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2924));
    }
    panda$core$Bit* $tmp2928 = ((panda$core$Bit*) ((char*) self->$data + 24));
    *$tmp2928 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp2930;
    panda$collections$ImmutableArray* $tmp2933;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2929 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2929 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2931 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2930 = *$tmp2931;
        panda$collections$ImmutableArray** $tmp2932 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2933 = p_f1;
        *$tmp2932 = $tmp2933;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2933));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2930));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2935;
    panda$collections$ImmutableArray* $tmp2938;
    panda$collections$ImmutableArray* $tmp2939;
    panda$collections$ImmutableArray* $tmp2942;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2934 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2934 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2936 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2935 = *$tmp2936;
        panda$collections$ImmutableArray** $tmp2937 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2938 = p_f1;
        *$tmp2937 = $tmp2938;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2938));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2935));
    }
    {
        panda$collections$ImmutableArray** $tmp2940 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2939 = *$tmp2940;
        panda$collections$ImmutableArray** $tmp2941 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2942 = p_f2;
        *$tmp2941 = $tmp2942;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2942));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2939));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2944;
    panda$core$String* $tmp2947;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2943 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2943 = p_f0;
    {
        panda$core$String** $tmp2945 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2944 = *$tmp2945;
        panda$core$String** $tmp2946 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2947 = p_f1;
        *$tmp2946 = $tmp2947;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2947));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2944));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$MethodRef* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp2949;
    org$pandalanguage$pandac$Type* $tmp2952;
    org$pandalanguage$pandac$MethodRef* $tmp2953;
    org$pandalanguage$pandac$MethodRef* $tmp2956;
    panda$collections$ImmutableArray* $tmp2957;
    panda$collections$ImmutableArray* $tmp2960;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2948 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2948 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp2950 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2949 = *$tmp2950;
        org$pandalanguage$pandac$Type** $tmp2951 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2952 = p_f1;
        *$tmp2951 = $tmp2952;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2952));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2949));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp2954 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp2953 = *$tmp2954;
        org$pandalanguage$pandac$MethodRef** $tmp2955 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp2956 = p_f2;
        *$tmp2955 = $tmp2956;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2956));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2953));
    }
    {
        panda$collections$ImmutableArray** $tmp2958 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2957 = *$tmp2958;
        panda$collections$ImmutableArray** $tmp2959 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2960 = p_f3;
        *$tmp2959 = $tmp2960;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2960));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2957));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$Type* p_f2, panda$core$Bit p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp2962;
    org$pandalanguage$pandac$IRNode* $tmp2965;
    org$pandalanguage$pandac$Type* $tmp2966;
    org$pandalanguage$pandac$Type* $tmp2969;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2961 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2961 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp2963 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp2962 = *$tmp2963;
        org$pandalanguage$pandac$IRNode** $tmp2964 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp2965 = p_f1;
        *$tmp2964 = $tmp2965;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2965));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2962));
    }
    {
        org$pandalanguage$pandac$Type** $tmp2967 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp2966 = *$tmp2967;
        org$pandalanguage$pandac$Type** $tmp2968 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp2969 = p_f2;
        *$tmp2968 = $tmp2969;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2969));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2966));
    }
    panda$core$Bit* $tmp2970 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp2970 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceEntry(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ChoiceEntry* p_f1) {
    org$pandalanguage$pandac$ChoiceEntry* $tmp2972;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2975;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2971 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2971 = p_f0;
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp2973 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp2972 = *$tmp2973;
        org$pandalanguage$pandac$ChoiceEntry** $tmp2974 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp2975 = p_f1;
        *$tmp2974 = $tmp2975;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2975));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2972));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp2977;
    org$pandalanguage$pandac$IRNode* $tmp2980;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2981;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2984;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2976 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2976 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp2978 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp2977 = *$tmp2978;
        org$pandalanguage$pandac$IRNode** $tmp2979 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp2980 = p_f1;
        *$tmp2979 = $tmp2980;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2980));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2977));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp2982 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2981 = *$tmp2982;
        org$pandalanguage$pandac$ChoiceEntry** $tmp2983 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2984 = p_f2;
        *$tmp2983 = $tmp2984;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2984));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2981));
    }
    panda$core$Int64* $tmp2985 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp2985 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$Type* $tmp2987;
    org$pandalanguage$pandac$Type* $tmp2990;
    org$pandalanguage$pandac$IRNode* $tmp2991;
    org$pandalanguage$pandac$IRNode* $tmp2994;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2986 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2986 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp2988 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2987 = *$tmp2988;
        org$pandalanguage$pandac$Type** $tmp2989 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2990 = p_f1;
        *$tmp2989 = $tmp2990;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2990));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2987));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp2992 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp2991 = *$tmp2992;
        org$pandalanguage$pandac$IRNode** $tmp2993 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp2994 = p_f2;
        *$tmp2993 = $tmp2994;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2994));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2991));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp2995;
    org$pandalanguage$pandac$IRNode* $tmp2998;
    org$pandalanguage$pandac$IRNode* $tmp2999;
    org$pandalanguage$pandac$IRNode* $tmp3002;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp2996 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2995 = *$tmp2996;
        org$pandalanguage$pandac$IRNode** $tmp2997 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2998 = p_f0;
        *$tmp2997 = $tmp2998;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2998));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2995));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3000 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp2999 = *$tmp3000;
        org$pandalanguage$pandac$IRNode** $tmp3001 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3002 = p_f1;
        *$tmp3001 = $tmp3002;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3002));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2999));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    panda$core$String* $tmp3004;
    panda$core$String* $tmp3007;
    panda$collections$ImmutableArray* $tmp3008;
    panda$collections$ImmutableArray* $tmp3011;
    org$pandalanguage$pandac$IRNode* $tmp3012;
    org$pandalanguage$pandac$IRNode* $tmp3015;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3003 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3003 = p_f0;
    {
        panda$core$String** $tmp3005 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3004 = *$tmp3005;
        panda$core$String** $tmp3006 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3007 = p_f1;
        *$tmp3006 = $tmp3007;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3007));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3004));
    }
    {
        panda$collections$ImmutableArray** $tmp3009 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3008 = *$tmp3009;
        panda$collections$ImmutableArray** $tmp3010 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3011 = p_f2;
        *$tmp3010 = $tmp3011;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3011));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3008));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3013 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3012 = *$tmp3013;
        org$pandalanguage$pandac$IRNode** $tmp3014 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3015 = p_f3;
        *$tmp3014 = $tmp3015;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3015));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3012));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$collections$ImmutableArray* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3016;
    org$pandalanguage$pandac$IRNode* $tmp3019;
    panda$collections$ImmutableArray* $tmp3020;
    panda$collections$ImmutableArray* $tmp3023;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3017 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3016 = *$tmp3017;
        org$pandalanguage$pandac$IRNode** $tmp3018 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3019 = p_f0;
        *$tmp3018 = $tmp3019;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3019));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3016));
    }
    {
        panda$collections$ImmutableArray** $tmp3021 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp3020 = *$tmp3021;
        panda$collections$ImmutableArray** $tmp3022 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp3023 = p_f1;
        *$tmp3022 = $tmp3023;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3023));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3020));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3024;
    org$pandalanguage$pandac$IRNode* $tmp3027;
    org$pandalanguage$pandac$IRNode* $tmp3028;
    org$pandalanguage$pandac$IRNode* $tmp3031;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3025 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3024 = *$tmp3025;
        org$pandalanguage$pandac$IRNode** $tmp3026 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3027 = p_f0;
        *$tmp3026 = $tmp3027;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3027));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3024));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3029 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3028 = *$tmp3029;
        org$pandalanguage$pandac$IRNode** $tmp3030 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3031 = p_f1;
        *$tmp3030 = $tmp3031;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3031));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3028));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$FieldDecl* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3033;
    org$pandalanguage$pandac$Type* $tmp3036;
    org$pandalanguage$pandac$IRNode* $tmp3037;
    org$pandalanguage$pandac$IRNode* $tmp3040;
    org$pandalanguage$pandac$FieldDecl* $tmp3041;
    org$pandalanguage$pandac$FieldDecl* $tmp3044;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3032 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3032 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3034 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3033 = *$tmp3034;
        org$pandalanguage$pandac$Type** $tmp3035 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3036 = p_f1;
        *$tmp3035 = $tmp3036;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3036));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3033));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3038 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3037 = *$tmp3038;
        org$pandalanguage$pandac$IRNode** $tmp3039 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3040 = p_f2;
        *$tmp3039 = $tmp3040;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3040));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3037));
    }
    {
        org$pandalanguage$pandac$FieldDecl** $tmp3042 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp3041 = *$tmp3042;
        org$pandalanguage$pandac$FieldDecl** $tmp3043 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp3044 = p_f3;
        *$tmp3043 = $tmp3044;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3044));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3041));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3046;
    org$pandalanguage$pandac$IRNode* $tmp3049;
    panda$collections$ImmutableArray* $tmp3050;
    panda$collections$ImmutableArray* $tmp3053;
    org$pandalanguage$pandac$IRNode* $tmp3054;
    org$pandalanguage$pandac$IRNode* $tmp3057;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3045 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3045 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3047 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3046 = *$tmp3047;
        org$pandalanguage$pandac$IRNode** $tmp3048 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3049 = p_f1;
        *$tmp3048 = $tmp3049;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3049));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3046));
    }
    {
        panda$collections$ImmutableArray** $tmp3051 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3050 = *$tmp3051;
        panda$collections$ImmutableArray** $tmp3052 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3053 = p_f2;
        *$tmp3052 = $tmp3053;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3053));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3050));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3055 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3054 = *$tmp3055;
        org$pandalanguage$pandac$IRNode** $tmp3056 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3057 = p_f3;
        *$tmp3056 = $tmp3057;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3057));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3054));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$UInt64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3059;
    org$pandalanguage$pandac$Type* $tmp3062;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3058 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3058 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3060 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3059 = *$tmp3060;
        org$pandalanguage$pandac$Type** $tmp3061 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3062 = p_f1;
        *$tmp3061 = $tmp3062;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3062));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3059));
    }
    panda$core$UInt64* $tmp3063 = ((panda$core$UInt64*) ((char*) self->$data + 24));
    *$tmp3063 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3065;
    org$pandalanguage$pandac$IRNode* $tmp3068;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3064 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3064 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3066 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3065 = *$tmp3066;
        org$pandalanguage$pandac$IRNode** $tmp3067 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3068 = p_f1;
        *$tmp3067 = $tmp3068;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3068));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3065));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp3070;
    panda$core$String* $tmp3073;
    panda$collections$ImmutableArray* $tmp3074;
    panda$collections$ImmutableArray* $tmp3077;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3069 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3069 = p_f0;
    {
        panda$core$String** $tmp3071 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3070 = *$tmp3071;
        panda$core$String** $tmp3072 = ((panda$core$String**) ((char*) self->$data + 16));
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
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3079;
    org$pandalanguage$pandac$IRNode* $tmp3082;
    panda$collections$ImmutableArray* $tmp3083;
    panda$collections$ImmutableArray* $tmp3086;
    panda$collections$ImmutableArray* $tmp3087;
    panda$collections$ImmutableArray* $tmp3090;
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
        panda$collections$ImmutableArray** $tmp3084 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3083 = *$tmp3084;
        panda$collections$ImmutableArray** $tmp3085 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3086 = p_f2;
        *$tmp3085 = $tmp3086;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3086));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3083));
    }
    {
        panda$collections$ImmutableArray** $tmp3088 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3087 = *$tmp3088;
        panda$collections$ImmutableArray** $tmp3089 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3090 = p_f3;
        *$tmp3089 = $tmp3090;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3090));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3087));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$MethodRef* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3092;
    org$pandalanguage$pandac$IRNode* $tmp3095;
    org$pandalanguage$pandac$MethodRef* $tmp3096;
    org$pandalanguage$pandac$MethodRef* $tmp3099;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3091 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3091 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3093 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3092 = *$tmp3093;
        org$pandalanguage$pandac$IRNode** $tmp3094 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3095 = p_f1;
        *$tmp3094 = $tmp3095;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3095));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3092));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp3097 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3096 = *$tmp3097;
        org$pandalanguage$pandac$MethodRef** $tmp3098 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3099 = p_f2;
        *$tmp3098 = $tmp3099;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3099));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3096));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3102;
    org$pandalanguage$pandac$IRNode* $tmp3105;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3100 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3100 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp3101 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp3101 = p_f1;
    {
        org$pandalanguage$pandac$IRNode** $tmp3103 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3102 = *$tmp3103;
        org$pandalanguage$pandac$IRNode** $tmp3104 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3105 = p_f2;
        *$tmp3104 = $tmp3105;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3105));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3102));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp3107;
    panda$core$String* $tmp3110;
    org$pandalanguage$pandac$IRNode* $tmp3111;
    org$pandalanguage$pandac$IRNode* $tmp3114;
    org$pandalanguage$pandac$IRNode* $tmp3115;
    org$pandalanguage$pandac$IRNode* $tmp3118;
    panda$collections$ImmutableArray* $tmp3119;
    panda$collections$ImmutableArray* $tmp3122;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3106 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3106 = p_f0;
    {
        panda$core$String** $tmp3108 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3107 = *$tmp3108;
        panda$core$String** $tmp3109 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3110 = p_f1;
        *$tmp3109 = $tmp3110;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3110));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3107));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3112 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3111 = *$tmp3112;
        org$pandalanguage$pandac$IRNode** $tmp3113 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3114 = p_f2;
        *$tmp3113 = $tmp3114;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3114));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3111));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3116 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3115 = *$tmp3116;
        org$pandalanguage$pandac$IRNode** $tmp3117 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3118 = p_f3;
        *$tmp3117 = $tmp3118;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3118));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3115));
    }
    {
        panda$collections$ImmutableArray** $tmp3120 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3119 = *$tmp3120;
        panda$collections$ImmutableArray** $tmp3121 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3122 = p_f4;
        *$tmp3121 = $tmp3122;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3122));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3119));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Real64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3124;
    org$pandalanguage$pandac$Type* $tmp3127;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3123 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3123 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3125 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3124 = *$tmp3125;
        org$pandalanguage$pandac$Type** $tmp3126 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3127 = p_f1;
        *$tmp3126 = $tmp3127;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3127));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3124));
    }
    panda$core$Real64* $tmp3128 = ((panda$core$Real64*) ((char*) self->$data + 24));
    *$tmp3128 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3130;
    org$pandalanguage$pandac$IRNode* $tmp3133;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3129 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3129 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3131 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3130 = *$tmp3131;
        org$pandalanguage$pandac$IRNode** $tmp3132 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3133 = p_f1;
        *$tmp3132 = $tmp3133;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3133));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3130));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Int64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3135;
    org$pandalanguage$pandac$Type* $tmp3138;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3134 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3134 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3136 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3135 = *$tmp3136;
        org$pandalanguage$pandac$Type** $tmp3137 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3138 = p_f1;
        *$tmp3137 = $tmp3138;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3138));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3135));
    }
    panda$core$Int64* $tmp3139 = ((panda$core$Int64*) ((char*) self->$data + 24));
    *$tmp3139 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$core$Int64 p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3140;
    org$pandalanguage$pandac$IRNode* $tmp3143;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3141 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3140 = *$tmp3141;
        org$pandalanguage$pandac$IRNode** $tmp3142 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3143 = p_f0;
        *$tmp3142 = $tmp3143;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3143));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3140));
    }
    panda$core$Int64* $tmp3144 = ((panda$core$Int64*) ((char*) self->$data + 8));
    *$tmp3144 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp3146;
    panda$core$String* $tmp3149;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3145 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3145 = p_f0;
    {
        panda$core$String** $tmp3147 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3146 = *$tmp3147;
        panda$core$String** $tmp3148 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3149 = p_f1;
        *$tmp3148 = $tmp3149;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3149));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3146));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3151;
    org$pandalanguage$pandac$IRNode* $tmp3154;
    org$pandalanguage$pandac$IRNode* $tmp3155;
    org$pandalanguage$pandac$IRNode* $tmp3158;
    org$pandalanguage$pandac$IRNode* $tmp3159;
    org$pandalanguage$pandac$IRNode* $tmp3162;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3150 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3150 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3152 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3151 = *$tmp3152;
        org$pandalanguage$pandac$IRNode** $tmp3153 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3154 = p_f1;
        *$tmp3153 = $tmp3154;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3154));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3151));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3156 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3155 = *$tmp3156;
        org$pandalanguage$pandac$IRNode** $tmp3157 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3158 = p_f2;
        *$tmp3157 = $tmp3158;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3158));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3155));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3160 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3159 = *$tmp3160;
        org$pandalanguage$pandac$IRNode** $tmp3161 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3162 = p_f3;
        *$tmp3161 = $tmp3162;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3162));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3159));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3164;
    org$pandalanguage$pandac$Type* $tmp3167;
    org$pandalanguage$pandac$IRNode* $tmp3168;
    org$pandalanguage$pandac$IRNode* $tmp3171;
    panda$collections$ImmutableArray* $tmp3172;
    panda$collections$ImmutableArray* $tmp3175;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3163 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3163 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3165 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3164 = *$tmp3165;
        org$pandalanguage$pandac$Type** $tmp3166 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3167 = p_f1;
        *$tmp3166 = $tmp3167;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3167));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3164));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3169 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3168 = *$tmp3169;
        org$pandalanguage$pandac$IRNode** $tmp3170 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3171 = p_f2;
        *$tmp3170 = $tmp3171;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3171));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3168));
    }
    {
        panda$collections$ImmutableArray** $tmp3173 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3172 = *$tmp3173;
        panda$collections$ImmutableArray** $tmp3174 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3175 = p_f3;
        *$tmp3174 = $tmp3175;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3175));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3172));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3, panda$collections$ImmutableArray* p_f4) {
    org$pandalanguage$pandac$Type* $tmp3177;
    org$pandalanguage$pandac$Type* $tmp3180;
    org$pandalanguage$pandac$IRNode* $tmp3181;
    org$pandalanguage$pandac$IRNode* $tmp3184;
    panda$collections$ImmutableArray* $tmp3185;
    panda$collections$ImmutableArray* $tmp3188;
    panda$collections$ImmutableArray* $tmp3189;
    panda$collections$ImmutableArray* $tmp3192;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3176 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3176 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3178 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3177 = *$tmp3178;
        org$pandalanguage$pandac$Type** $tmp3179 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3180 = p_f1;
        *$tmp3179 = $tmp3180;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3180));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3177));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3182 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3181 = *$tmp3182;
        org$pandalanguage$pandac$IRNode** $tmp3183 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3184 = p_f2;
        *$tmp3183 = $tmp3184;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3184));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3181));
    }
    {
        panda$collections$ImmutableArray** $tmp3186 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3185 = *$tmp3186;
        panda$collections$ImmutableArray** $tmp3187 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3188 = p_f3;
        *$tmp3187 = $tmp3188;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3188));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3185));
    }
    {
        panda$collections$ImmutableArray** $tmp3190 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3189 = *$tmp3190;
        panda$collections$ImmutableArray** $tmp3191 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3192 = p_f4;
        *$tmp3191 = $tmp3192;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3192));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3189));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3194;
    org$pandalanguage$pandac$IRNode* $tmp3197;
    panda$collections$ImmutableArray* $tmp3198;
    panda$collections$ImmutableArray* $tmp3201;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3193 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3193 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3195 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3194 = *$tmp3195;
        org$pandalanguage$pandac$IRNode** $tmp3196 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3197 = p_f1;
        *$tmp3196 = $tmp3197;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3197));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3194));
    }
    {
        panda$collections$ImmutableArray** $tmp3199 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3198 = *$tmp3199;
        panda$collections$ImmutableArray** $tmp3200 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3201 = p_f2;
        *$tmp3200 = $tmp3201;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3201));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3198));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$IRNode* $tmp3203;
    org$pandalanguage$pandac$IRNode* $tmp3206;
    org$pandalanguage$pandac$IRNode* $tmp3207;
    org$pandalanguage$pandac$IRNode* $tmp3210;
    org$pandalanguage$pandac$IRNode* $tmp3212;
    org$pandalanguage$pandac$IRNode* $tmp3215;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3202 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3202 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3204 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3203 = *$tmp3204;
        org$pandalanguage$pandac$IRNode** $tmp3205 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3206 = p_f1;
        *$tmp3205 = $tmp3206;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3206));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3203));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3208 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3207 = *$tmp3208;
        org$pandalanguage$pandac$IRNode** $tmp3209 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3210 = p_f2;
        *$tmp3209 = $tmp3210;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3210));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3207));
    }
    panda$core$Bit* $tmp3211 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp3211 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp3213 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3212 = *$tmp3213;
        org$pandalanguage$pandac$IRNode** $tmp3214 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3215 = p_f4;
        *$tmp3214 = $tmp3215;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3215));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3212));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp3218;
    panda$collections$ImmutableArray* $tmp3221;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3216 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3216 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp3217 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp3217 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp3219 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3218 = *$tmp3219;
        panda$collections$ImmutableArray** $tmp3220 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3221 = p_f2;
        *$tmp3220 = $tmp3221;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3221));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3218));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable* p_f1) {
    org$pandalanguage$pandac$Variable* $tmp3223;
    org$pandalanguage$pandac$Variable* $tmp3226;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3222 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3222 = p_f0;
    {
        org$pandalanguage$pandac$Variable** $tmp3224 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3223 = *$tmp3224;
        org$pandalanguage$pandac$Variable** $tmp3225 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3226 = p_f1;
        *$tmp3225 = $tmp3226;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3226));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3223));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp3228;
    panda$core$String* $tmp3231;
    org$pandalanguage$pandac$IRNode* $tmp3232;
    org$pandalanguage$pandac$IRNode* $tmp3235;
    panda$collections$ImmutableArray* $tmp3236;
    panda$collections$ImmutableArray* $tmp3239;
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
        panda$collections$ImmutableArray** $tmp3237 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3236 = *$tmp3237;
        panda$collections$ImmutableArray** $tmp3238 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3239 = p_f3;
        *$tmp3238 = $tmp3239;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3239));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3236));
    }
}

