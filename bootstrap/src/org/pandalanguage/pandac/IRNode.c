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
typedef org$pandalanguage$pandac$Type* (*$fn203)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn330)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn342)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn349)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn431)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn523)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn526)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn545)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn549)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn570)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn577)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn588)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn590)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn621)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn628)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn639)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn641)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn677)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn698)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn710)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn722)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn729)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn740)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn742)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn769)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn781)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn788)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn799)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn801)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn809)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn821)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn828)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn845)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn852)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn863)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn865)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn882)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn894)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn901)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn912)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn914)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn930)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn937)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn948)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn950)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn976)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn989)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1001)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1008)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1019)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1021)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1039)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1053)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1077)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1080)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1084)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1137)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1144)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1155)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1157)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1185)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1192)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1203)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1205)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1221)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1228)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1239)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1241)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1258)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1270)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1277)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1288)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1290)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1354)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1395)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1402)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1413)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1449)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1456)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1467)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1483)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1490)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1501)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1548)(panda$collections$ListView*);
typedef org$pandalanguage$pandac$Type* (*$fn1561)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1585)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1616)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1654)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1696)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1707)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1739)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1746)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1757)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1787)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1795)(panda$collections$ListView*, panda$core$String*);
typedef panda$core$String* (*$fn1812)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1831)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1868)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1875)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1886)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1965)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1972)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1983)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2026)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2033)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2044)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2060)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2067)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2078)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2103)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2143)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2192)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2199)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2210)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2355)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2362)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2383)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2419)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2440)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2457)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2533)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2562)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2571)(panda$collections$ListView*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2611)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2618)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2629)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x4e\x6f\x64\x65", 31, -8857975469778350849, NULL };
static panda$core$String $s1317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s1319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s1331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s1356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s1416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x79\x20\x7b\x0a", 6, 2292679699717, NULL };
static panda$core$String $s1470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x66\x69\x6e\x61\x6c\x6c\x79\x20\x7b\x0a", 12, -1355183944487068280, NULL };
static panda$core$String $s1504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s1524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s1543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x4e\x54\x36\x34\x5f\x57\x52\x41\x50\x28", 11, -7093166379287162761, NULL };
static panda$core$String $s1573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1576 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x2a\x2d", 24, 1541443738414735436, NULL };
static panda$core$String $s1676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s1678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s1698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1701 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1728 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1730 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s1760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s1768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1798 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x2a\x20\x61\x6e\x64\x20\x74\x68\x65\x6e\x3a\x20", 14, -3277098584181619124, NULL };
static panda$core$String $s1817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1833 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1858 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s1889 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1896 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1921 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s1933 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s1954 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1956 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1986 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2014 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s2016 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2047 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2051 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s2081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s2145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s2179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s2182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s2241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s2257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s2282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s2302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s2319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s2324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s2327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s2379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s2389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44\x2a\x2d", 14, -8805999466873262330, NULL };
static panda$core$String $s2409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44\x2a\x2d", 14, -8805999466873262330, NULL };
static panda$core$String $s2435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s2495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s2498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s2500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s2525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s2527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s2529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s2558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s2565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s2568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s2601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
    org$pandalanguage$pandac$Type* $tmp201;
    org$pandalanguage$pandac$Type* $tmp202;
    org$pandalanguage$pandac$Type* $tmp208;
    org$pandalanguage$pandac$Type* $tmp209;
    org$pandalanguage$pandac$Type* $tmp214;
    org$pandalanguage$pandac$Type* $tmp215;
    org$pandalanguage$pandac$Type* type220 = NULL;
    org$pandalanguage$pandac$Type* $tmp222;
    org$pandalanguage$pandac$Type* $tmp226;
    org$pandalanguage$pandac$Type* $tmp227;
    org$pandalanguage$pandac$Type* type232 = NULL;
    org$pandalanguage$pandac$Type* $tmp234;
    org$pandalanguage$pandac$Type* $tmp238;
    org$pandalanguage$pandac$Type* $tmp239;
    org$pandalanguage$pandac$Type* $tmp244;
    org$pandalanguage$pandac$Type* $tmp245;
    org$pandalanguage$pandac$Variable* variable250 = NULL;
    org$pandalanguage$pandac$Type* $tmp252;
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
        panda$core$Bit $tmp207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 38 }));
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
        panda$core$Bit $tmp213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 39 }));
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
        panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp219.value) {
        {
            org$pandalanguage$pandac$Type** $tmp221 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp225.value) {
        {
            org$pandalanguage$pandac$Type* $tmp228 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp227 = $tmp228;
            $tmp226 = $tmp227;
            $returnValue10 = $tmp226;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp226));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp227));
            $tmp4 = 29;
            goto $l2;
            $l229:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp231.value) {
        {
            org$pandalanguage$pandac$Type** $tmp233 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
            type232 = *$tmp233;
            $tmp234 = type232;
            $returnValue10 = $tmp234;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp234));
            $tmp4 = 30;
            goto $l2;
            $l235:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 43 }));
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
        panda$core$Bit $tmp243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp243.value) {
        {
            org$pandalanguage$pandac$Type* $tmp246 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp245 = $tmp246;
            $tmp244 = $tmp245;
            $returnValue10 = $tmp244;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp244));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp245));
            $tmp4 = 32;
            goto $l2;
            $l247:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp249.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp251 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$74_95->$data + 16));
            variable250 = *$tmp251;
            $tmp252 = variable250->type;
            $returnValue10 = $tmp252;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp252));
            $tmp4 = 33;
            goto $l2;
            $l253:;
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
        case 33: goto $l253;
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
        case -1: goto $l255;
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
    $l255:;
}
org$pandalanguage$pandac$Position org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$150_9259 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp260;
    org$pandalanguage$pandac$Position position262;
    org$pandalanguage$pandac$Position $returnValue264;
    org$pandalanguage$pandac$Position position268;
    org$pandalanguage$pandac$Position position273;
    org$pandalanguage$pandac$Position position278;
    org$pandalanguage$pandac$Position position283;
    org$pandalanguage$pandac$Position position288;
    org$pandalanguage$pandac$Position position293;
    org$pandalanguage$pandac$Position position298;
    org$pandalanguage$pandac$Position position303;
    org$pandalanguage$pandac$Position position308;
    org$pandalanguage$pandac$Position position313;
    org$pandalanguage$pandac$Position position318;
    org$pandalanguage$pandac$Position position323;
    org$pandalanguage$pandac$IRNode* target328 = NULL;
    org$pandalanguage$pandac$Position position335;
    org$pandalanguage$pandac$IRNode* m340 = NULL;
    org$pandalanguage$pandac$IRNode* expr347 = NULL;
    org$pandalanguage$pandac$Position position354;
    org$pandalanguage$pandac$Position position359;
    org$pandalanguage$pandac$Position position364;
    org$pandalanguage$pandac$Position position369;
    org$pandalanguage$pandac$Position position374;
    org$pandalanguage$pandac$Position position379;
    org$pandalanguage$pandac$Position position384;
    org$pandalanguage$pandac$Position position389;
    org$pandalanguage$pandac$Position position394;
    org$pandalanguage$pandac$Position position399;
    org$pandalanguage$pandac$Position position404;
    org$pandalanguage$pandac$Position position409;
    org$pandalanguage$pandac$Position position414;
    org$pandalanguage$pandac$Position position419;
    org$pandalanguage$pandac$Position position424;
    org$pandalanguage$pandac$IRNode* base429 = NULL;
    org$pandalanguage$pandac$Position position436;
    org$pandalanguage$pandac$Position position441;
    org$pandalanguage$pandac$Position position446;
    org$pandalanguage$pandac$Position position451;
    org$pandalanguage$pandac$Position position456;
    org$pandalanguage$pandac$Position position461;
    org$pandalanguage$pandac$Position position466;
    org$pandalanguage$pandac$Position position471;
    org$pandalanguage$pandac$Position position476;
    org$pandalanguage$pandac$Position position481;
    org$pandalanguage$pandac$Position position486;
    org$pandalanguage$pandac$Position position491;
    org$pandalanguage$pandac$Position position496;
    org$pandalanguage$pandac$Position position501;
    org$pandalanguage$pandac$Position position506;
    int $tmp258;
    {
        $tmp260 = self;
        $match$150_9259 = $tmp260;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp260));
        panda$core$Bit $tmp261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp261.value) {
        {
            org$pandalanguage$pandac$Position* $tmp263 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position262 = *$tmp263;
            $returnValue264 = position262;
            $tmp258 = 0;
            goto $l256;
            $l265:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp267.value) {
        {
            org$pandalanguage$pandac$Position* $tmp269 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position268 = *$tmp269;
            $returnValue264 = position268;
            $tmp258 = 1;
            goto $l256;
            $l270:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp272.value) {
        {
            org$pandalanguage$pandac$Position* $tmp274 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position273 = *$tmp274;
            $returnValue264 = position273;
            $tmp258 = 2;
            goto $l256;
            $l275:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp277.value) {
        {
            org$pandalanguage$pandac$Position* $tmp279 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position278 = *$tmp279;
            $returnValue264 = position278;
            $tmp258 = 3;
            goto $l256;
            $l280:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp282.value) {
        {
            org$pandalanguage$pandac$Position* $tmp284 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position283 = *$tmp284;
            $returnValue264 = position283;
            $tmp258 = 4;
            goto $l256;
            $l285:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp287.value) {
        {
            org$pandalanguage$pandac$Position* $tmp289 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position288 = *$tmp289;
            $returnValue264 = position288;
            $tmp258 = 5;
            goto $l256;
            $l290:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp292.value) {
        {
            org$pandalanguage$pandac$Position* $tmp294 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position293 = *$tmp294;
            $returnValue264 = position293;
            $tmp258 = 6;
            goto $l256;
            $l295:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp297.value) {
        {
            org$pandalanguage$pandac$Position* $tmp299 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position298 = *$tmp299;
            $returnValue264 = position298;
            $tmp258 = 7;
            goto $l256;
            $l300:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp302.value) {
        {
            org$pandalanguage$pandac$Position* $tmp304 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position303 = *$tmp304;
            $returnValue264 = position303;
            $tmp258 = 8;
            goto $l256;
            $l305:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp307.value) {
        {
            org$pandalanguage$pandac$Position* $tmp309 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position308 = *$tmp309;
            $returnValue264 = position308;
            $tmp258 = 9;
            goto $l256;
            $l310:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp312.value) {
        {
            org$pandalanguage$pandac$Position* $tmp314 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position313 = *$tmp314;
            $returnValue264 = position313;
            $tmp258 = 10;
            goto $l256;
            $l315:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp317.value) {
        {
            org$pandalanguage$pandac$Position* $tmp319 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position318 = *$tmp319;
            $returnValue264 = position318;
            $tmp258 = 11;
            goto $l256;
            $l320:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp322.value) {
        {
            org$pandalanguage$pandac$Position* $tmp324 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position323 = *$tmp324;
            $returnValue264 = position323;
            $tmp258 = 12;
            goto $l256;
            $l325:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp327.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp329 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$150_9259->$data + 0));
            target328 = *$tmp329;
            org$pandalanguage$pandac$Position $tmp331 = (($fn330) target328->$class->vtable[3])(target328);
            $returnValue264 = $tmp331;
            $tmp258 = 13;
            goto $l256;
            $l332:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp334.value) {
        {
            org$pandalanguage$pandac$Position* $tmp336 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position335 = *$tmp336;
            $returnValue264 = position335;
            $tmp258 = 14;
            goto $l256;
            $l337:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp339.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp341 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$150_9259->$data + 0));
            m340 = *$tmp341;
            org$pandalanguage$pandac$Position $tmp343 = (($fn342) m340->$class->vtable[3])(m340);
            $returnValue264 = $tmp343;
            $tmp258 = 15;
            goto $l256;
            $l344:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp346.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp348 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$150_9259->$data + 0));
            expr347 = *$tmp348;
            org$pandalanguage$pandac$Position $tmp350 = (($fn349) expr347->$class->vtable[3])(expr347);
            $returnValue264 = $tmp350;
            $tmp258 = 16;
            goto $l256;
            $l351:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp353.value) {
        {
            org$pandalanguage$pandac$Position* $tmp355 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position354 = *$tmp355;
            $returnValue264 = position354;
            $tmp258 = 17;
            goto $l256;
            $l356:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp358.value) {
        {
            org$pandalanguage$pandac$Position* $tmp360 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position359 = *$tmp360;
            $returnValue264 = position359;
            $tmp258 = 18;
            goto $l256;
            $l361:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp363.value) {
        {
            org$pandalanguage$pandac$Position* $tmp365 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position364 = *$tmp365;
            $returnValue264 = position364;
            $tmp258 = 19;
            goto $l256;
            $l366:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp368.value) {
        {
            org$pandalanguage$pandac$Position* $tmp370 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position369 = *$tmp370;
            $returnValue264 = position369;
            $tmp258 = 20;
            goto $l256;
            $l371:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp373.value) {
        {
            org$pandalanguage$pandac$Position* $tmp375 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position374 = *$tmp375;
            $returnValue264 = position374;
            $tmp258 = 21;
            goto $l256;
            $l376:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp378.value) {
        {
            org$pandalanguage$pandac$Position* $tmp380 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position379 = *$tmp380;
            $returnValue264 = position379;
            $tmp258 = 22;
            goto $l256;
            $l381:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp383.value) {
        {
            org$pandalanguage$pandac$Position* $tmp385 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position384 = *$tmp385;
            $returnValue264 = position384;
            $tmp258 = 23;
            goto $l256;
            $l386:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp388.value) {
        {
            org$pandalanguage$pandac$Position* $tmp390 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position389 = *$tmp390;
            $returnValue264 = position389;
            $tmp258 = 24;
            goto $l256;
            $l391:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp393.value) {
        {
            org$pandalanguage$pandac$Position* $tmp395 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position394 = *$tmp395;
            $returnValue264 = position394;
            $tmp258 = 25;
            goto $l256;
            $l396:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp398.value) {
        {
            org$pandalanguage$pandac$Position* $tmp400 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position399 = *$tmp400;
            $returnValue264 = position399;
            $tmp258 = 26;
            goto $l256;
            $l401:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp403.value) {
        {
            org$pandalanguage$pandac$Position* $tmp405 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position404 = *$tmp405;
            $returnValue264 = position404;
            $tmp258 = 27;
            goto $l256;
            $l406:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp408.value) {
        {
            org$pandalanguage$pandac$Position* $tmp410 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position409 = *$tmp410;
            $returnValue264 = position409;
            $tmp258 = 28;
            goto $l256;
            $l411:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp413.value) {
        {
            org$pandalanguage$pandac$Position* $tmp415 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position414 = *$tmp415;
            $returnValue264 = position414;
            $tmp258 = 29;
            goto $l256;
            $l416:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp418.value) {
        {
            org$pandalanguage$pandac$Position* $tmp420 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position419 = *$tmp420;
            $returnValue264 = position419;
            $tmp258 = 30;
            goto $l256;
            $l421:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp423.value) {
        {
            org$pandalanguage$pandac$Position* $tmp425 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position424 = *$tmp425;
            $returnValue264 = position424;
            $tmp258 = 31;
            goto $l256;
            $l426:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp428.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp430 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$150_9259->$data + 0));
            base429 = *$tmp430;
            org$pandalanguage$pandac$Position $tmp432 = (($fn431) base429->$class->vtable[3])(base429);
            $returnValue264 = $tmp432;
            $tmp258 = 32;
            goto $l256;
            $l433:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp435.value) {
        {
            org$pandalanguage$pandac$Position* $tmp437 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position436 = *$tmp437;
            $returnValue264 = position436;
            $tmp258 = 33;
            goto $l256;
            $l438:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp440.value) {
        {
            org$pandalanguage$pandac$Position* $tmp442 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position441 = *$tmp442;
            $returnValue264 = position441;
            $tmp258 = 34;
            goto $l256;
            $l443:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp445.value) {
        {
            org$pandalanguage$pandac$Position* $tmp447 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position446 = *$tmp447;
            $returnValue264 = position446;
            $tmp258 = 35;
            goto $l256;
            $l448:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp450.value) {
        {
            org$pandalanguage$pandac$Position* $tmp452 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position451 = *$tmp452;
            $returnValue264 = position451;
            $tmp258 = 36;
            goto $l256;
            $l453:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp455.value) {
        {
            org$pandalanguage$pandac$Position* $tmp457 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position456 = *$tmp457;
            $returnValue264 = position456;
            $tmp258 = 37;
            goto $l256;
            $l458:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp460.value) {
        {
            org$pandalanguage$pandac$Position* $tmp462 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position461 = *$tmp462;
            $returnValue264 = position461;
            $tmp258 = 38;
            goto $l256;
            $l463:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp465.value) {
        {
            org$pandalanguage$pandac$Position* $tmp467 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position466 = *$tmp467;
            $returnValue264 = position466;
            $tmp258 = 39;
            goto $l256;
            $l468:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp470.value) {
        {
            org$pandalanguage$pandac$Position* $tmp472 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position471 = *$tmp472;
            $returnValue264 = position471;
            $tmp258 = 40;
            goto $l256;
            $l473:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp475.value) {
        {
            org$pandalanguage$pandac$Position* $tmp477 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position476 = *$tmp477;
            $returnValue264 = position476;
            $tmp258 = 41;
            goto $l256;
            $l478:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp480.value) {
        {
            org$pandalanguage$pandac$Position* $tmp482 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position481 = *$tmp482;
            $returnValue264 = position481;
            $tmp258 = 42;
            goto $l256;
            $l483:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp485.value) {
        {
            org$pandalanguage$pandac$Position* $tmp487 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position486 = *$tmp487;
            $returnValue264 = position486;
            $tmp258 = 43;
            goto $l256;
            $l488:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp490.value) {
        {
            org$pandalanguage$pandac$Position* $tmp492 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position491 = *$tmp492;
            $returnValue264 = position491;
            $tmp258 = 44;
            goto $l256;
            $l493:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp495.value) {
        {
            org$pandalanguage$pandac$Position* $tmp497 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position496 = *$tmp497;
            $returnValue264 = position496;
            $tmp258 = 45;
            goto $l256;
            $l498:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp500.value) {
        {
            org$pandalanguage$pandac$Position* $tmp502 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position501 = *$tmp502;
            $returnValue264 = position501;
            $tmp258 = 46;
            goto $l256;
            $l503:;
            return $returnValue264;
        }
        }
        else {
        panda$core$Bit $tmp505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9259->$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp505.value) {
        {
            org$pandalanguage$pandac$Position* $tmp507 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9259->$data + 0));
            position506 = *$tmp507;
            $returnValue264 = position506;
            $tmp258 = 47;
            goto $l256;
            $l508:;
            return $returnValue264;
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
    $tmp258 = -1;
    goto $l256;
    $l256:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp260));
    switch ($tmp258) {
        case 22: goto $l381;
        case 30: goto $l421;
        case 5: goto $l290;
        case 19: goto $l366;
        case 21: goto $l376;
        case 34: goto $l443;
        case 20: goto $l371;
        case 3: goto $l280;
        case 31: goto $l426;
        case 44: goto $l493;
        case 2: goto $l275;
        case 29: goto $l416;
        case 9: goto $l310;
        case 32: goto $l433;
        case 0: goto $l265;
        case 8: goto $l305;
        case 43: goto $l488;
        case 13: goto $l332;
        case 12: goto $l325;
        case 41: goto $l478;
        case 28: goto $l411;
        case 36: goto $l453;
        case 15: goto $l344;
        case 14: goto $l337;
        case 27: goto $l406;
        case 35: goto $l448;
        case 33: goto $l438;
        case 42: goto $l483;
        case 7: goto $l300;
        case 4: goto $l285;
        case 6: goto $l295;
        case 16: goto $l351;
        case 25: goto $l396;
        case 37: goto $l458;
        case 38: goto $l463;
        case -1: goto $l510;
        case 24: goto $l391;
        case 17: goto $l356;
        case 47: goto $l508;
        case 18: goto $l361;
        case 23: goto $l386;
        case 26: goto $l401;
        case 1: goto $l270;
        case 11: goto $l320;
        case 46: goto $l503;
        case 39: goto $l468;
        case 45: goto $l498;
        case 40: goto $l473;
        case 10: goto $l315;
    }
    $l510:;
}
panda$core$Bit org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$253_9514 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp515;
    org$pandalanguage$pandac$IRNode* test517 = NULL;
    org$pandalanguage$pandac$IRNode* msg519 = NULL;
    panda$core$Bit $returnValue521;
    org$pandalanguage$pandac$IRNode* left535 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op537;
    org$pandalanguage$pandac$IRNode* right539 = NULL;
    panda$core$Bit bit555;
    panda$collections$ImmutableArray* statements560 = NULL;
    panda$collections$Iterator* Iter$263$17565 = NULL;
    panda$collections$Iterator* $tmp566;
    panda$collections$Iterator* $tmp567;
    org$pandalanguage$pandac$IRNode* s583 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp584;
    panda$core$Object* $tmp585;
    panda$core$String* label601 = NULL;
    org$pandalanguage$pandac$MethodRef* m606 = NULL;
    panda$collections$ImmutableArray* args608 = NULL;
    panda$collections$Iterator* Iter$275$17616 = NULL;
    panda$collections$Iterator* $tmp617;
    panda$collections$Iterator* $tmp618;
    org$pandalanguage$pandac$IRNode* arg634 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp635;
    panda$core$Object* $tmp636;
    org$pandalanguage$pandac$IRNode* value652 = NULL;
    org$pandalanguage$pandac$Type* type654 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce659 = NULL;
    org$pandalanguage$pandac$IRNode* base664 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce666 = NULL;
    panda$core$Int64 field668;
    org$pandalanguage$pandac$Type* type673 = NULL;
    org$pandalanguage$pandac$IRNode* call675 = NULL;
    org$pandalanguage$pandac$Type* Type682 = NULL;
    panda$core$String* label687 = NULL;
    org$pandalanguage$pandac$IRNode* target692 = NULL;
    org$pandalanguage$pandac$IRNode* value694 = NULL;
    panda$core$String* label704 = NULL;
    panda$collections$ImmutableArray* statements706 = NULL;
    org$pandalanguage$pandac$IRNode* test708 = NULL;
    panda$collections$Iterator* Iter$299$17717 = NULL;
    panda$collections$Iterator* $tmp718;
    panda$collections$Iterator* $tmp719;
    org$pandalanguage$pandac$IRNode* s735 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp736;
    panda$core$Object* $tmp737;
    org$pandalanguage$pandac$IRNode* base756 = NULL;
    org$pandalanguage$pandac$FieldDecl* field758 = NULL;
    org$pandalanguage$pandac$IRNode* test763 = NULL;
    panda$collections$ImmutableArray* ifTrue765 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse767 = NULL;
    panda$collections$Iterator* Iter$313$17776 = NULL;
    panda$collections$Iterator* $tmp777;
    panda$collections$Iterator* $tmp778;
    org$pandalanguage$pandac$IRNode* s794 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp795;
    panda$core$Object* $tmp796;
    panda$core$UInt64 value814;
    org$pandalanguage$pandac$IRNode* value819 = NULL;
    org$pandalanguage$pandac$IRNode* value826 = NULL;
    panda$core$String* label833 = NULL;
    panda$collections$ImmutableArray* statements835 = NULL;
    panda$collections$Iterator* Iter$326$17840 = NULL;
    panda$collections$Iterator* $tmp841;
    panda$collections$Iterator* $tmp842;
    org$pandalanguage$pandac$IRNode* s858 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp859;
    panda$core$Object* $tmp860;
    org$pandalanguage$pandac$IRNode* value876 = NULL;
    panda$collections$ImmutableArray* whens878 = NULL;
    panda$collections$ImmutableArray* other880 = NULL;
    panda$collections$Iterator* Iter$336$17889 = NULL;
    panda$collections$Iterator* $tmp890;
    panda$collections$Iterator* $tmp891;
    org$pandalanguage$pandac$IRNode* w907 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp908;
    panda$core$Object* $tmp909;
    panda$collections$Iterator* Iter$341$17925 = NULL;
    panda$collections$Iterator* $tmp926;
    panda$collections$Iterator* $tmp927;
    org$pandalanguage$pandac$IRNode* s943 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp944;
    panda$core$Object* $tmp945;
    panda$core$UInt64 value964;
    org$pandalanguage$pandac$parser$Token$Kind op972;
    org$pandalanguage$pandac$IRNode* base974 = NULL;
    panda$core$String* label981 = NULL;
    org$pandalanguage$pandac$IRNode* target983 = NULL;
    org$pandalanguage$pandac$IRNode* list985 = NULL;
    panda$collections$ImmutableArray* statements987 = NULL;
    panda$collections$Iterator* Iter$360$17996 = NULL;
    panda$collections$Iterator* $tmp997;
    panda$collections$Iterator* $tmp998;
    org$pandalanguage$pandac$IRNode* s1014 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1015;
    panda$core$Object* $tmp1016;
    panda$core$Real64 value1032;
    org$pandalanguage$pandac$IRNode* value1037 = NULL;
    panda$core$Int64 id1044;
    org$pandalanguage$pandac$IRNode* base1049 = NULL;
    panda$core$Int64 id1051;
    panda$core$String* str1061 = NULL;
    org$pandalanguage$pandac$IRNode* test1069 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue1071 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse1073 = NULL;
    org$pandalanguage$pandac$Type* type1090 = NULL;
    panda$core$String* name1095 = NULL;
    org$pandalanguage$pandac$IRNode* base1098 = NULL;
    panda$collections$ImmutableArray* args1100 = NULL;
    org$pandalanguage$pandac$IRNode* target1104 = NULL;
    panda$collections$ImmutableArray* methods1106 = NULL;
    panda$collections$ImmutableArray* args1108 = NULL;
    org$pandalanguage$pandac$IRNode* target1111 = NULL;
    panda$collections$ImmutableArray* methods1113 = NULL;
    org$pandalanguage$pandac$IRNode* start1116 = NULL;
    org$pandalanguage$pandac$IRNode* end1118 = NULL;
    panda$core$Bit inclusive1120;
    org$pandalanguage$pandac$IRNode* step1122 = NULL;
    org$pandalanguage$pandac$Variable$Kind kind1125;
    panda$collections$ImmutableArray* decls1127 = NULL;
    panda$collections$Iterator* Iter$397$171132 = NULL;
    panda$collections$Iterator* $tmp1133;
    panda$collections$Iterator* $tmp1134;
    org$pandalanguage$pandac$IRNode* d1150 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1151;
    panda$core$Object* $tmp1152;
    org$pandalanguage$pandac$Variable* variable1168 = NULL;
    panda$collections$ImmutableArray* tests1173 = NULL;
    panda$collections$ImmutableArray* statements1175 = NULL;
    panda$collections$Iterator* Iter$406$171180 = NULL;
    panda$collections$Iterator* $tmp1181;
    panda$collections$Iterator* $tmp1182;
    org$pandalanguage$pandac$IRNode* t1198 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1199;
    panda$core$Object* $tmp1200;
    panda$collections$Iterator* Iter$411$171216 = NULL;
    panda$collections$Iterator* $tmp1217;
    panda$collections$Iterator* $tmp1218;
    org$pandalanguage$pandac$IRNode* s1234 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1235;
    panda$core$Object* $tmp1236;
    panda$core$String* label1252 = NULL;
    org$pandalanguage$pandac$IRNode* test1254 = NULL;
    panda$collections$ImmutableArray* statements1256 = NULL;
    panda$collections$Iterator* Iter$421$171265 = NULL;
    panda$collections$Iterator* $tmp1266;
    panda$collections$Iterator* $tmp1267;
    org$pandalanguage$pandac$IRNode* s1283 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1284;
    panda$core$Object* $tmp1285;
    int $tmp513;
    {
        $tmp515 = self;
        $match$253_9514 = $tmp515;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp515));
        panda$core$Bit $tmp516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp516.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp518 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 16));
            test517 = *$tmp518;
            org$pandalanguage$pandac$IRNode** $tmp520 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 24));
            msg519 = *$tmp520;
            panda$core$Bit $tmp524 = (($fn523) test517->$class->vtable[4])(test517);
            bool $tmp522 = $tmp524.value;
            if ($tmp522) goto $l525;
            panda$core$Bit $tmp527 = (($fn526) msg519->$class->vtable[4])(msg519);
            $tmp522 = $tmp527.value;
            $l525:;
            panda$core$Bit $tmp528 = { $tmp522 };
            $returnValue521 = $tmp528;
            $tmp513 = 0;
            goto $l511;
            $l529:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp531.value) {
        {
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 1;
            goto $l511;
            $l532:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp534.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp536 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 24));
            left535 = *$tmp536;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp538 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$253_9514->$data + 32));
            op537 = *$tmp538;
            org$pandalanguage$pandac$IRNode** $tmp540 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 40));
            right539 = *$tmp540;
            panda$core$Bit $tmp543 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(op537);
            bool $tmp542 = $tmp543.value;
            if ($tmp542) goto $l544;
            panda$core$Bit $tmp546 = (($fn545) left535->$class->vtable[4])(left535);
            $tmp542 = $tmp546.value;
            $l544:;
            panda$core$Bit $tmp547 = { $tmp542 };
            bool $tmp541 = $tmp547.value;
            if ($tmp541) goto $l548;
            panda$core$Bit $tmp550 = (($fn549) right539->$class->vtable[4])(right539);
            $tmp541 = $tmp550.value;
            $l548:;
            panda$core$Bit $tmp551 = { $tmp541 };
            $returnValue521 = $tmp551;
            $tmp513 = 2;
            goto $l511;
            $l552:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp554.value) {
        {
            panda$core$Bit* $tmp556 = ((panda$core$Bit*) ((char*) $match$253_9514->$data + 24));
            bit555 = *$tmp556;
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 3;
            goto $l511;
            $l557:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp559.value) {
        {
            panda$collections$ImmutableArray** $tmp561 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9514->$data + 16));
            statements560 = *$tmp561;
            {
                int $tmp564;
                {
                    ITable* $tmp568 = ((panda$collections$Iterable*) statements560)->$class->itable;
                    while ($tmp568->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp568 = $tmp568->next;
                    }
                    $fn570 $tmp569 = $tmp568->methods[0];
                    panda$collections$Iterator* $tmp571 = $tmp569(((panda$collections$Iterable*) statements560));
                    $tmp567 = $tmp571;
                    $tmp566 = $tmp567;
                    Iter$263$17565 = $tmp566;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp566));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp567));
                    $l572:;
                    ITable* $tmp575 = Iter$263$17565->$class->itable;
                    while ($tmp575->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp575 = $tmp575->next;
                    }
                    $fn577 $tmp576 = $tmp575->methods[0];
                    panda$core$Bit $tmp578 = $tmp576(Iter$263$17565);
                    panda$core$Bit $tmp579 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp578);
                    bool $tmp574 = $tmp579.value;
                    if (!$tmp574) goto $l573;
                    {
                        int $tmp582;
                        {
                            ITable* $tmp586 = Iter$263$17565->$class->itable;
                            while ($tmp586->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp586 = $tmp586->next;
                            }
                            $fn588 $tmp587 = $tmp586->methods[1];
                            panda$core$Object* $tmp589 = $tmp587(Iter$263$17565);
                            $tmp585 = $tmp589;
                            $tmp584 = ((org$pandalanguage$pandac$IRNode*) $tmp585);
                            s583 = $tmp584;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp584));
                            panda$core$Panda$unref$panda$core$Object($tmp585);
                            panda$core$Bit $tmp591 = (($fn590) s583->$class->vtable[4])(s583);
                            if ($tmp591.value) {
                            {
                                $returnValue521 = ((panda$core$Bit) { true });
                                $tmp582 = 0;
                                goto $l580;
                                $l592:;
                                $tmp564 = 0;
                                goto $l562;
                                $l593:;
                                $tmp513 = 4;
                                goto $l511;
                                $l594:;
                                return $returnValue521;
                            }
                            }
                        }
                        $tmp582 = -1;
                        goto $l580;
                        $l580:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s583));
                        s583 = NULL;
                        switch ($tmp582) {
                            case 0: goto $l592;
                            case -1: goto $l596;
                        }
                        $l596:;
                    }
                    goto $l572;
                    $l573:;
                }
                $tmp564 = -1;
                goto $l562;
                $l562:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$263$17565));
                Iter$263$17565 = NULL;
                switch ($tmp564) {
                    case -1: goto $l597;
                    case 0: goto $l593;
                }
                $l597:;
            }
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 5;
            goto $l511;
            $l598:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp600 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp600.value) {
        {
            panda$core$String** $tmp602 = ((panda$core$String**) ((char*) $match$253_9514->$data + 16));
            label601 = *$tmp602;
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 6;
            goto $l511;
            $l603:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp605.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp607 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$253_9514->$data + 24));
            m606 = *$tmp607;
            panda$collections$ImmutableArray** $tmp609 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9514->$data + 32));
            args608 = *$tmp609;
            panda$core$Bit $tmp610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m606->value->methodKind.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp610.value) {
            {
                $returnValue521 = ((panda$core$Bit) { true });
                $tmp513 = 7;
                goto $l511;
                $l611:;
                return $returnValue521;
            }
            }
            {
                int $tmp615;
                {
                    ITable* $tmp619 = ((panda$collections$Iterable*) args608)->$class->itable;
                    while ($tmp619->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp619 = $tmp619->next;
                    }
                    $fn621 $tmp620 = $tmp619->methods[0];
                    panda$collections$Iterator* $tmp622 = $tmp620(((panda$collections$Iterable*) args608));
                    $tmp618 = $tmp622;
                    $tmp617 = $tmp618;
                    Iter$275$17616 = $tmp617;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp617));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp618));
                    $l623:;
                    ITable* $tmp626 = Iter$275$17616->$class->itable;
                    while ($tmp626->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp626 = $tmp626->next;
                    }
                    $fn628 $tmp627 = $tmp626->methods[0];
                    panda$core$Bit $tmp629 = $tmp627(Iter$275$17616);
                    panda$core$Bit $tmp630 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp629);
                    bool $tmp625 = $tmp630.value;
                    if (!$tmp625) goto $l624;
                    {
                        int $tmp633;
                        {
                            ITable* $tmp637 = Iter$275$17616->$class->itable;
                            while ($tmp637->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp637 = $tmp637->next;
                            }
                            $fn639 $tmp638 = $tmp637->methods[1];
                            panda$core$Object* $tmp640 = $tmp638(Iter$275$17616);
                            $tmp636 = $tmp640;
                            $tmp635 = ((org$pandalanguage$pandac$IRNode*) $tmp636);
                            arg634 = $tmp635;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp635));
                            panda$core$Panda$unref$panda$core$Object($tmp636);
                            panda$core$Bit $tmp642 = (($fn641) arg634->$class->vtable[4])(arg634);
                            if ($tmp642.value) {
                            {
                                $returnValue521 = ((panda$core$Bit) { true });
                                $tmp633 = 0;
                                goto $l631;
                                $l643:;
                                $tmp615 = 0;
                                goto $l613;
                                $l644:;
                                $tmp513 = 8;
                                goto $l511;
                                $l645:;
                                return $returnValue521;
                            }
                            }
                        }
                        $tmp633 = -1;
                        goto $l631;
                        $l631:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg634));
                        arg634 = NULL;
                        switch ($tmp633) {
                            case 0: goto $l643;
                            case -1: goto $l647;
                        }
                        $l647:;
                    }
                    goto $l623;
                    $l624:;
                }
                $tmp615 = -1;
                goto $l613;
                $l613:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$275$17616));
                Iter$275$17616 = NULL;
                switch ($tmp615) {
                    case -1: goto $l648;
                    case 0: goto $l644;
                }
                $l648:;
            }
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 9;
            goto $l511;
            $l649:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp651.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp653 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 16));
            value652 = *$tmp653;
            org$pandalanguage$pandac$Type** $tmp655 = ((org$pandalanguage$pandac$Type**) ((char*) $match$253_9514->$data + 24));
            type654 = *$tmp655;
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 10;
            goto $l511;
            $l656:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp658.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp660 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$253_9514->$data + 16));
            ce659 = *$tmp660;
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 11;
            goto $l511;
            $l661:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp663.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp665 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 16));
            base664 = *$tmp665;
            org$pandalanguage$pandac$ChoiceEntry** $tmp667 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$253_9514->$data + 24));
            ce666 = *$tmp667;
            panda$core$Int64* $tmp669 = ((panda$core$Int64*) ((char*) $match$253_9514->$data + 32));
            field668 = *$tmp669;
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 12;
            goto $l511;
            $l670:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp672.value) {
        {
            org$pandalanguage$pandac$Type** $tmp674 = ((org$pandalanguage$pandac$Type**) ((char*) $match$253_9514->$data + 16));
            type673 = *$tmp674;
            org$pandalanguage$pandac$IRNode** $tmp676 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 24));
            call675 = *$tmp676;
            panda$core$Bit $tmp678 = (($fn677) call675->$class->vtable[4])(call675);
            $returnValue521 = $tmp678;
            $tmp513 = 13;
            goto $l511;
            $l679:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp681.value) {
        {
            org$pandalanguage$pandac$Type** $tmp683 = ((org$pandalanguage$pandac$Type**) ((char*) $match$253_9514->$data + 16));
            Type682 = *$tmp683;
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 14;
            goto $l511;
            $l684:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp686.value) {
        {
            panda$core$String** $tmp688 = ((panda$core$String**) ((char*) $match$253_9514->$data + 16));
            label687 = *$tmp688;
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 15;
            goto $l511;
            $l689:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp691.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp693 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 0));
            target692 = *$tmp693;
            org$pandalanguage$pandac$IRNode** $tmp695 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 8));
            value694 = *$tmp695;
            bool $tmp696 = ((panda$core$Bit) { value694 != NULL }).value;
            if (!$tmp696) goto $l697;
            panda$core$Bit $tmp699 = (($fn698) value694->$class->vtable[4])(value694);
            $tmp696 = $tmp699.value;
            $l697:;
            panda$core$Bit $tmp700 = { $tmp696 };
            $returnValue521 = $tmp700;
            $tmp513 = 16;
            goto $l511;
            $l701:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp703.value) {
        {
            panda$core$String** $tmp705 = ((panda$core$String**) ((char*) $match$253_9514->$data + 16));
            label704 = *$tmp705;
            panda$collections$ImmutableArray** $tmp707 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9514->$data + 24));
            statements706 = *$tmp707;
            org$pandalanguage$pandac$IRNode** $tmp709 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 32));
            test708 = *$tmp709;
            panda$core$Bit $tmp711 = (($fn710) test708->$class->vtable[4])(test708);
            if ($tmp711.value) {
            {
                $returnValue521 = ((panda$core$Bit) { true });
                $tmp513 = 17;
                goto $l511;
                $l712:;
                return $returnValue521;
            }
            }
            {
                int $tmp716;
                {
                    ITable* $tmp720 = ((panda$collections$Iterable*) statements706)->$class->itable;
                    while ($tmp720->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp720 = $tmp720->next;
                    }
                    $fn722 $tmp721 = $tmp720->methods[0];
                    panda$collections$Iterator* $tmp723 = $tmp721(((panda$collections$Iterable*) statements706));
                    $tmp719 = $tmp723;
                    $tmp718 = $tmp719;
                    Iter$299$17717 = $tmp718;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp718));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp719));
                    $l724:;
                    ITable* $tmp727 = Iter$299$17717->$class->itable;
                    while ($tmp727->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp727 = $tmp727->next;
                    }
                    $fn729 $tmp728 = $tmp727->methods[0];
                    panda$core$Bit $tmp730 = $tmp728(Iter$299$17717);
                    panda$core$Bit $tmp731 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp730);
                    bool $tmp726 = $tmp731.value;
                    if (!$tmp726) goto $l725;
                    {
                        int $tmp734;
                        {
                            ITable* $tmp738 = Iter$299$17717->$class->itable;
                            while ($tmp738->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp738 = $tmp738->next;
                            }
                            $fn740 $tmp739 = $tmp738->methods[1];
                            panda$core$Object* $tmp741 = $tmp739(Iter$299$17717);
                            $tmp737 = $tmp741;
                            $tmp736 = ((org$pandalanguage$pandac$IRNode*) $tmp737);
                            s735 = $tmp736;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp736));
                            panda$core$Panda$unref$panda$core$Object($tmp737);
                            panda$core$Bit $tmp743 = (($fn742) s735->$class->vtable[4])(s735);
                            if ($tmp743.value) {
                            {
                                $returnValue521 = ((panda$core$Bit) { true });
                                $tmp734 = 0;
                                goto $l732;
                                $l744:;
                                $tmp716 = 0;
                                goto $l714;
                                $l745:;
                                $tmp513 = 18;
                                goto $l511;
                                $l746:;
                                return $returnValue521;
                            }
                            }
                        }
                        $tmp734 = -1;
                        goto $l732;
                        $l732:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s735));
                        s735 = NULL;
                        switch ($tmp734) {
                            case -1: goto $l748;
                            case 0: goto $l744;
                        }
                        $l748:;
                    }
                    goto $l724;
                    $l725:;
                }
                $tmp716 = -1;
                goto $l714;
                $l714:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$299$17717));
                Iter$299$17717 = NULL;
                switch ($tmp716) {
                    case 0: goto $l745;
                    case -1: goto $l749;
                }
                $l749:;
            }
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 19;
            goto $l511;
            $l750:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp752.value) {
        {
            $returnValue521 = ((panda$core$Bit) { true });
            $tmp513 = 20;
            goto $l511;
            $l753:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp755.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp757 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 24));
            base756 = *$tmp757;
            org$pandalanguage$pandac$FieldDecl** $tmp759 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$253_9514->$data + 32));
            field758 = *$tmp759;
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 21;
            goto $l511;
            $l760:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp762.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp764 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 16));
            test763 = *$tmp764;
            panda$collections$ImmutableArray** $tmp766 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9514->$data + 24));
            ifTrue765 = *$tmp766;
            org$pandalanguage$pandac$IRNode** $tmp768 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 32));
            ifFalse767 = *$tmp768;
            panda$core$Bit $tmp770 = (($fn769) test763->$class->vtable[4])(test763);
            if ($tmp770.value) {
            {
                $returnValue521 = ((panda$core$Bit) { true });
                $tmp513 = 22;
                goto $l511;
                $l771:;
                return $returnValue521;
            }
            }
            {
                int $tmp775;
                {
                    ITable* $tmp779 = ((panda$collections$Iterable*) ifTrue765)->$class->itable;
                    while ($tmp779->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp779 = $tmp779->next;
                    }
                    $fn781 $tmp780 = $tmp779->methods[0];
                    panda$collections$Iterator* $tmp782 = $tmp780(((panda$collections$Iterable*) ifTrue765));
                    $tmp778 = $tmp782;
                    $tmp777 = $tmp778;
                    Iter$313$17776 = $tmp777;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp777));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp778));
                    $l783:;
                    ITable* $tmp786 = Iter$313$17776->$class->itable;
                    while ($tmp786->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp786 = $tmp786->next;
                    }
                    $fn788 $tmp787 = $tmp786->methods[0];
                    panda$core$Bit $tmp789 = $tmp787(Iter$313$17776);
                    panda$core$Bit $tmp790 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp789);
                    bool $tmp785 = $tmp790.value;
                    if (!$tmp785) goto $l784;
                    {
                        int $tmp793;
                        {
                            ITable* $tmp797 = Iter$313$17776->$class->itable;
                            while ($tmp797->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp797 = $tmp797->next;
                            }
                            $fn799 $tmp798 = $tmp797->methods[1];
                            panda$core$Object* $tmp800 = $tmp798(Iter$313$17776);
                            $tmp796 = $tmp800;
                            $tmp795 = ((org$pandalanguage$pandac$IRNode*) $tmp796);
                            s794 = $tmp795;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp795));
                            panda$core$Panda$unref$panda$core$Object($tmp796);
                            panda$core$Bit $tmp802 = (($fn801) s794->$class->vtable[4])(s794);
                            if ($tmp802.value) {
                            {
                                $returnValue521 = ((panda$core$Bit) { true });
                                $tmp793 = 0;
                                goto $l791;
                                $l803:;
                                $tmp775 = 0;
                                goto $l773;
                                $l804:;
                                $tmp513 = 23;
                                goto $l511;
                                $l805:;
                                return $returnValue521;
                            }
                            }
                        }
                        $tmp793 = -1;
                        goto $l791;
                        $l791:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s794));
                        s794 = NULL;
                        switch ($tmp793) {
                            case 0: goto $l803;
                            case -1: goto $l807;
                        }
                        $l807:;
                    }
                    goto $l783;
                    $l784:;
                }
                $tmp775 = -1;
                goto $l773;
                $l773:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$313$17776));
                Iter$313$17776 = NULL;
                switch ($tmp775) {
                    case -1: goto $l808;
                    case 0: goto $l804;
                }
                $l808:;
            }
            panda$core$Bit $tmp810 = (($fn809) ifFalse767->$class->vtable[4])(ifFalse767);
            $returnValue521 = $tmp810;
            $tmp513 = 24;
            goto $l511;
            $l811:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp813.value) {
        {
            panda$core$UInt64* $tmp815 = ((panda$core$UInt64*) ((char*) $match$253_9514->$data + 24));
            value814 = *$tmp815;
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 25;
            goto $l511;
            $l816:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp818.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp820 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 16));
            value819 = *$tmp820;
            panda$core$Bit $tmp822 = (($fn821) value819->$class->vtable[4])(value819);
            $returnValue521 = $tmp822;
            $tmp513 = 26;
            goto $l511;
            $l823:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp825.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp827 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 16));
            value826 = *$tmp827;
            panda$core$Bit $tmp829 = (($fn828) value826->$class->vtable[4])(value826);
            $returnValue521 = $tmp829;
            $tmp513 = 27;
            goto $l511;
            $l830:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp832.value) {
        {
            panda$core$String** $tmp834 = ((panda$core$String**) ((char*) $match$253_9514->$data + 16));
            label833 = *$tmp834;
            panda$collections$ImmutableArray** $tmp836 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9514->$data + 24));
            statements835 = *$tmp836;
            {
                int $tmp839;
                {
                    ITable* $tmp843 = ((panda$collections$Iterable*) statements835)->$class->itable;
                    while ($tmp843->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp843 = $tmp843->next;
                    }
                    $fn845 $tmp844 = $tmp843->methods[0];
                    panda$collections$Iterator* $tmp846 = $tmp844(((panda$collections$Iterable*) statements835));
                    $tmp842 = $tmp846;
                    $tmp841 = $tmp842;
                    Iter$326$17840 = $tmp841;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp841));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp842));
                    $l847:;
                    ITable* $tmp850 = Iter$326$17840->$class->itable;
                    while ($tmp850->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp850 = $tmp850->next;
                    }
                    $fn852 $tmp851 = $tmp850->methods[0];
                    panda$core$Bit $tmp853 = $tmp851(Iter$326$17840);
                    panda$core$Bit $tmp854 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp853);
                    bool $tmp849 = $tmp854.value;
                    if (!$tmp849) goto $l848;
                    {
                        int $tmp857;
                        {
                            ITable* $tmp861 = Iter$326$17840->$class->itable;
                            while ($tmp861->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp861 = $tmp861->next;
                            }
                            $fn863 $tmp862 = $tmp861->methods[1];
                            panda$core$Object* $tmp864 = $tmp862(Iter$326$17840);
                            $tmp860 = $tmp864;
                            $tmp859 = ((org$pandalanguage$pandac$IRNode*) $tmp860);
                            s858 = $tmp859;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp859));
                            panda$core$Panda$unref$panda$core$Object($tmp860);
                            panda$core$Bit $tmp866 = (($fn865) s858->$class->vtable[4])(s858);
                            if ($tmp866.value) {
                            {
                                $returnValue521 = ((panda$core$Bit) { true });
                                $tmp857 = 0;
                                goto $l855;
                                $l867:;
                                $tmp839 = 0;
                                goto $l837;
                                $l868:;
                                $tmp513 = 28;
                                goto $l511;
                                $l869:;
                                return $returnValue521;
                            }
                            }
                        }
                        $tmp857 = -1;
                        goto $l855;
                        $l855:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s858));
                        s858 = NULL;
                        switch ($tmp857) {
                            case 0: goto $l867;
                            case -1: goto $l871;
                        }
                        $l871:;
                    }
                    goto $l847;
                    $l848:;
                }
                $tmp839 = -1;
                goto $l837;
                $l837:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$326$17840));
                Iter$326$17840 = NULL;
                switch ($tmp839) {
                    case -1: goto $l872;
                    case 0: goto $l868;
                }
                $l872:;
            }
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 29;
            goto $l511;
            $l873:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp875.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp877 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 16));
            value876 = *$tmp877;
            panda$collections$ImmutableArray** $tmp879 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9514->$data + 24));
            whens878 = *$tmp879;
            panda$collections$ImmutableArray** $tmp881 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9514->$data + 32));
            other880 = *$tmp881;
            panda$core$Bit $tmp883 = (($fn882) value876->$class->vtable[4])(value876);
            if ($tmp883.value) {
            {
                $returnValue521 = ((panda$core$Bit) { true });
                $tmp513 = 30;
                goto $l511;
                $l884:;
                return $returnValue521;
            }
            }
            {
                int $tmp888;
                {
                    ITable* $tmp892 = ((panda$collections$Iterable*) whens878)->$class->itable;
                    while ($tmp892->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp892 = $tmp892->next;
                    }
                    $fn894 $tmp893 = $tmp892->methods[0];
                    panda$collections$Iterator* $tmp895 = $tmp893(((panda$collections$Iterable*) whens878));
                    $tmp891 = $tmp895;
                    $tmp890 = $tmp891;
                    Iter$336$17889 = $tmp890;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp890));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp891));
                    $l896:;
                    ITable* $tmp899 = Iter$336$17889->$class->itable;
                    while ($tmp899->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp899 = $tmp899->next;
                    }
                    $fn901 $tmp900 = $tmp899->methods[0];
                    panda$core$Bit $tmp902 = $tmp900(Iter$336$17889);
                    panda$core$Bit $tmp903 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp902);
                    bool $tmp898 = $tmp903.value;
                    if (!$tmp898) goto $l897;
                    {
                        int $tmp906;
                        {
                            ITable* $tmp910 = Iter$336$17889->$class->itable;
                            while ($tmp910->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp910 = $tmp910->next;
                            }
                            $fn912 $tmp911 = $tmp910->methods[1];
                            panda$core$Object* $tmp913 = $tmp911(Iter$336$17889);
                            $tmp909 = $tmp913;
                            $tmp908 = ((org$pandalanguage$pandac$IRNode*) $tmp909);
                            w907 = $tmp908;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp908));
                            panda$core$Panda$unref$panda$core$Object($tmp909);
                            panda$core$Bit $tmp915 = (($fn914) w907->$class->vtable[4])(w907);
                            if ($tmp915.value) {
                            {
                                $returnValue521 = ((panda$core$Bit) { true });
                                $tmp906 = 0;
                                goto $l904;
                                $l916:;
                                $tmp888 = 0;
                                goto $l886;
                                $l917:;
                                $tmp513 = 31;
                                goto $l511;
                                $l918:;
                                return $returnValue521;
                            }
                            }
                        }
                        $tmp906 = -1;
                        goto $l904;
                        $l904:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w907));
                        w907 = NULL;
                        switch ($tmp906) {
                            case -1: goto $l920;
                            case 0: goto $l916;
                        }
                        $l920:;
                    }
                    goto $l896;
                    $l897:;
                }
                $tmp888 = -1;
                goto $l886;
                $l886:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$336$17889));
                Iter$336$17889 = NULL;
                switch ($tmp888) {
                    case 0: goto $l917;
                    case -1: goto $l921;
                }
                $l921:;
            }
            {
                int $tmp924;
                {
                    ITable* $tmp928 = ((panda$collections$Iterable*) other880)->$class->itable;
                    while ($tmp928->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp928 = $tmp928->next;
                    }
                    $fn930 $tmp929 = $tmp928->methods[0];
                    panda$collections$Iterator* $tmp931 = $tmp929(((panda$collections$Iterable*) other880));
                    $tmp927 = $tmp931;
                    $tmp926 = $tmp927;
                    Iter$341$17925 = $tmp926;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp926));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp927));
                    $l932:;
                    ITable* $tmp935 = Iter$341$17925->$class->itable;
                    while ($tmp935->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp935 = $tmp935->next;
                    }
                    $fn937 $tmp936 = $tmp935->methods[0];
                    panda$core$Bit $tmp938 = $tmp936(Iter$341$17925);
                    panda$core$Bit $tmp939 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp938);
                    bool $tmp934 = $tmp939.value;
                    if (!$tmp934) goto $l933;
                    {
                        int $tmp942;
                        {
                            ITable* $tmp946 = Iter$341$17925->$class->itable;
                            while ($tmp946->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp946 = $tmp946->next;
                            }
                            $fn948 $tmp947 = $tmp946->methods[1];
                            panda$core$Object* $tmp949 = $tmp947(Iter$341$17925);
                            $tmp945 = $tmp949;
                            $tmp944 = ((org$pandalanguage$pandac$IRNode*) $tmp945);
                            s943 = $tmp944;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp944));
                            panda$core$Panda$unref$panda$core$Object($tmp945);
                            panda$core$Bit $tmp951 = (($fn950) s943->$class->vtable[4])(s943);
                            if ($tmp951.value) {
                            {
                                $returnValue521 = ((panda$core$Bit) { true });
                                $tmp942 = 0;
                                goto $l940;
                                $l952:;
                                $tmp924 = 0;
                                goto $l922;
                                $l953:;
                                $tmp513 = 32;
                                goto $l511;
                                $l954:;
                                return $returnValue521;
                            }
                            }
                        }
                        $tmp942 = -1;
                        goto $l940;
                        $l940:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s943));
                        s943 = NULL;
                        switch ($tmp942) {
                            case -1: goto $l956;
                            case 0: goto $l952;
                        }
                        $l956:;
                    }
                    goto $l932;
                    $l933:;
                }
                $tmp924 = -1;
                goto $l922;
                $l922:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$341$17925));
                Iter$341$17925 = NULL;
                switch ($tmp924) {
                    case -1: goto $l957;
                    case 0: goto $l953;
                }
                $l957:;
            }
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 33;
            goto $l511;
            $l958:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp960.value) {
        {
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 34;
            goto $l511;
            $l961:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp963.value) {
        {
            panda$core$UInt64* $tmp965 = ((panda$core$UInt64*) ((char*) $match$253_9514->$data + 24));
            value964 = *$tmp965;
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 35;
            goto $l511;
            $l966:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp968.value) {
        {
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 36;
            goto $l511;
            $l969:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp971.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp973 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$253_9514->$data + 16));
            op972 = *$tmp973;
            org$pandalanguage$pandac$IRNode** $tmp975 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 24));
            base974 = *$tmp975;
            panda$core$Bit $tmp977 = (($fn976) base974->$class->vtable[4])(base974);
            $returnValue521 = $tmp977;
            $tmp513 = 37;
            goto $l511;
            $l978:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp980 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp980.value) {
        {
            panda$core$String** $tmp982 = ((panda$core$String**) ((char*) $match$253_9514->$data + 16));
            label981 = *$tmp982;
            org$pandalanguage$pandac$IRNode** $tmp984 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 24));
            target983 = *$tmp984;
            org$pandalanguage$pandac$IRNode** $tmp986 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 32));
            list985 = *$tmp986;
            panda$collections$ImmutableArray** $tmp988 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9514->$data + 40));
            statements987 = *$tmp988;
            panda$core$Bit $tmp990 = (($fn989) list985->$class->vtable[4])(list985);
            if ($tmp990.value) {
            {
                $returnValue521 = ((panda$core$Bit) { true });
                $tmp513 = 38;
                goto $l511;
                $l991:;
                return $returnValue521;
            }
            }
            {
                int $tmp995;
                {
                    ITable* $tmp999 = ((panda$collections$Iterable*) statements987)->$class->itable;
                    while ($tmp999->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp999 = $tmp999->next;
                    }
                    $fn1001 $tmp1000 = $tmp999->methods[0];
                    panda$collections$Iterator* $tmp1002 = $tmp1000(((panda$collections$Iterable*) statements987));
                    $tmp998 = $tmp1002;
                    $tmp997 = $tmp998;
                    Iter$360$17996 = $tmp997;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp997));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp998));
                    $l1003:;
                    ITable* $tmp1006 = Iter$360$17996->$class->itable;
                    while ($tmp1006->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1006 = $tmp1006->next;
                    }
                    $fn1008 $tmp1007 = $tmp1006->methods[0];
                    panda$core$Bit $tmp1009 = $tmp1007(Iter$360$17996);
                    panda$core$Bit $tmp1010 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1009);
                    bool $tmp1005 = $tmp1010.value;
                    if (!$tmp1005) goto $l1004;
                    {
                        int $tmp1013;
                        {
                            ITable* $tmp1017 = Iter$360$17996->$class->itable;
                            while ($tmp1017->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1017 = $tmp1017->next;
                            }
                            $fn1019 $tmp1018 = $tmp1017->methods[1];
                            panda$core$Object* $tmp1020 = $tmp1018(Iter$360$17996);
                            $tmp1016 = $tmp1020;
                            $tmp1015 = ((org$pandalanguage$pandac$IRNode*) $tmp1016);
                            s1014 = $tmp1015;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1015));
                            panda$core$Panda$unref$panda$core$Object($tmp1016);
                            panda$core$Bit $tmp1022 = (($fn1021) s1014->$class->vtable[4])(s1014);
                            if ($tmp1022.value) {
                            {
                                $returnValue521 = ((panda$core$Bit) { true });
                                $tmp1013 = 0;
                                goto $l1011;
                                $l1023:;
                                $tmp995 = 0;
                                goto $l993;
                                $l1024:;
                                $tmp513 = 39;
                                goto $l511;
                                $l1025:;
                                return $returnValue521;
                            }
                            }
                        }
                        $tmp1013 = -1;
                        goto $l1011;
                        $l1011:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1014));
                        s1014 = NULL;
                        switch ($tmp1013) {
                            case -1: goto $l1027;
                            case 0: goto $l1023;
                        }
                        $l1027:;
                    }
                    goto $l1003;
                    $l1004:;
                }
                $tmp995 = -1;
                goto $l993;
                $l993:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$360$17996));
                Iter$360$17996 = NULL;
                switch ($tmp995) {
                    case 0: goto $l1024;
                    case -1: goto $l1028;
                }
                $l1028:;
            }
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 40;
            goto $l511;
            $l1029:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp1031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1031.value) {
        {
            panda$core$Real64* $tmp1033 = ((panda$core$Real64*) ((char*) $match$253_9514->$data + 24));
            value1032 = *$tmp1033;
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 41;
            goto $l511;
            $l1034:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp1036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1036.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1038 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 16));
            value1037 = *$tmp1038;
            panda$core$Bit $tmp1040 = (($fn1039) value1037->$class->vtable[4])(value1037);
            $returnValue521 = $tmp1040;
            $tmp513 = 42;
            goto $l511;
            $l1041:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp1043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1043.value) {
        {
            panda$core$Int64* $tmp1045 = ((panda$core$Int64*) ((char*) $match$253_9514->$data + 24));
            id1044 = *$tmp1045;
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 43;
            goto $l511;
            $l1046:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp1048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1048.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1050 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 0));
            base1049 = *$tmp1050;
            panda$core$Int64* $tmp1052 = ((panda$core$Int64*) ((char*) $match$253_9514->$data + 8));
            id1051 = *$tmp1052;
            panda$core$Bit $tmp1054 = (($fn1053) base1049->$class->vtable[4])(base1049);
            $returnValue521 = $tmp1054;
            $tmp513 = 44;
            goto $l511;
            $l1055:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp1057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1057.value) {
        {
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 45;
            goto $l511;
            $l1058:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp1060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1060.value) {
        {
            panda$core$String** $tmp1062 = ((panda$core$String**) ((char*) $match$253_9514->$data + 16));
            str1061 = *$tmp1062;
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 46;
            goto $l511;
            $l1063:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp1065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1065.value) {
        {
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 47;
            goto $l511;
            $l1066:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp1068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1068.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1070 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 16));
            test1069 = *$tmp1070;
            org$pandalanguage$pandac$IRNode** $tmp1072 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 24));
            ifTrue1071 = *$tmp1072;
            org$pandalanguage$pandac$IRNode** $tmp1074 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 32));
            ifFalse1073 = *$tmp1074;
            panda$core$Bit $tmp1078 = (($fn1077) test1069->$class->vtable[4])(test1069);
            bool $tmp1076 = $tmp1078.value;
            if ($tmp1076) goto $l1079;
            panda$core$Bit $tmp1081 = (($fn1080) ifTrue1071->$class->vtable[4])(ifTrue1071);
            $tmp1076 = $tmp1081.value;
            $l1079:;
            panda$core$Bit $tmp1082 = { $tmp1076 };
            bool $tmp1075 = $tmp1082.value;
            if ($tmp1075) goto $l1083;
            panda$core$Bit $tmp1085 = (($fn1084) ifFalse1073->$class->vtable[4])(ifFalse1073);
            $tmp1075 = $tmp1085.value;
            $l1083:;
            panda$core$Bit $tmp1086 = { $tmp1075 };
            $returnValue521 = $tmp1086;
            $tmp513 = 48;
            goto $l511;
            $l1087:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp1089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1089.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1091 = ((org$pandalanguage$pandac$Type**) ((char*) $match$253_9514->$data + 16));
            type1090 = *$tmp1091;
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 49;
            goto $l511;
            $l1092:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp1094 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1094.value) {
        {
            panda$core$String** $tmp1096 = ((panda$core$String**) ((char*) $match$253_9514->$data + 16));
            name1095 = *$tmp1096;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1097 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1097.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1099 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 24));
            base1098 = *$tmp1099;
            panda$collections$ImmutableArray** $tmp1101 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9514->$data + 32));
            args1100 = *$tmp1101;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1102.value) {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1103.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1105 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 24));
            target1104 = *$tmp1105;
            panda$collections$ImmutableArray** $tmp1107 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9514->$data + 32));
            methods1106 = *$tmp1107;
            panda$collections$ImmutableArray** $tmp1109 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9514->$data + 40));
            args1108 = *$tmp1109;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1110.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1112 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 16));
            target1111 = *$tmp1112;
            panda$collections$ImmutableArray** $tmp1114 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9514->$data + 24));
            methods1113 = *$tmp1114;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1115.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1117 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 16));
            start1116 = *$tmp1117;
            org$pandalanguage$pandac$IRNode** $tmp1119 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 24));
            end1118 = *$tmp1119;
            panda$core$Bit* $tmp1121 = ((panda$core$Bit*) ((char*) $match$253_9514->$data + 32));
            inclusive1120 = *$tmp1121;
            org$pandalanguage$pandac$IRNode** $tmp1123 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 33));
            step1122 = *$tmp1123;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp1124.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1126 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$253_9514->$data + 16));
            kind1125 = *$tmp1126;
            panda$collections$ImmutableArray** $tmp1128 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9514->$data + 24));
            decls1127 = *$tmp1128;
            {
                int $tmp1131;
                {
                    ITable* $tmp1135 = ((panda$collections$Iterable*) decls1127)->$class->itable;
                    while ($tmp1135->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1135 = $tmp1135->next;
                    }
                    $fn1137 $tmp1136 = $tmp1135->methods[0];
                    panda$collections$Iterator* $tmp1138 = $tmp1136(((panda$collections$Iterable*) decls1127));
                    $tmp1134 = $tmp1138;
                    $tmp1133 = $tmp1134;
                    Iter$397$171132 = $tmp1133;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1133));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1134));
                    $l1139:;
                    ITable* $tmp1142 = Iter$397$171132->$class->itable;
                    while ($tmp1142->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1142 = $tmp1142->next;
                    }
                    $fn1144 $tmp1143 = $tmp1142->methods[0];
                    panda$core$Bit $tmp1145 = $tmp1143(Iter$397$171132);
                    panda$core$Bit $tmp1146 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1145);
                    bool $tmp1141 = $tmp1146.value;
                    if (!$tmp1141) goto $l1140;
                    {
                        int $tmp1149;
                        {
                            ITable* $tmp1153 = Iter$397$171132->$class->itable;
                            while ($tmp1153->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1153 = $tmp1153->next;
                            }
                            $fn1155 $tmp1154 = $tmp1153->methods[1];
                            panda$core$Object* $tmp1156 = $tmp1154(Iter$397$171132);
                            $tmp1152 = $tmp1156;
                            $tmp1151 = ((org$pandalanguage$pandac$IRNode*) $tmp1152);
                            d1150 = $tmp1151;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1151));
                            panda$core$Panda$unref$panda$core$Object($tmp1152);
                            panda$core$Bit $tmp1158 = (($fn1157) d1150->$class->vtable[4])(d1150);
                            if ($tmp1158.value) {
                            {
                                $returnValue521 = ((panda$core$Bit) { true });
                                $tmp1149 = 0;
                                goto $l1147;
                                $l1159:;
                                $tmp1131 = 0;
                                goto $l1129;
                                $l1160:;
                                $tmp513 = 50;
                                goto $l511;
                                $l1161:;
                                return $returnValue521;
                            }
                            }
                        }
                        $tmp1149 = -1;
                        goto $l1147;
                        $l1147:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) d1150));
                        d1150 = NULL;
                        switch ($tmp1149) {
                            case 0: goto $l1159;
                            case -1: goto $l1163;
                        }
                        $l1163:;
                    }
                    goto $l1139;
                    $l1140:;
                }
                $tmp1131 = -1;
                goto $l1129;
                $l1129:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$397$171132));
                Iter$397$171132 = NULL;
                switch ($tmp1131) {
                    case 0: goto $l1160;
                    case -1: goto $l1164;
                }
                $l1164:;
            }
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 51;
            goto $l511;
            $l1165:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp1167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp1167.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp1169 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$253_9514->$data + 16));
            variable1168 = *$tmp1169;
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 52;
            goto $l511;
            $l1170:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp1172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp1172.value) {
        {
            panda$collections$ImmutableArray** $tmp1174 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9514->$data + 16));
            tests1173 = *$tmp1174;
            panda$collections$ImmutableArray** $tmp1176 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9514->$data + 24));
            statements1175 = *$tmp1176;
            {
                int $tmp1179;
                {
                    ITable* $tmp1183 = ((panda$collections$Iterable*) tests1173)->$class->itable;
                    while ($tmp1183->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1183 = $tmp1183->next;
                    }
                    $fn1185 $tmp1184 = $tmp1183->methods[0];
                    panda$collections$Iterator* $tmp1186 = $tmp1184(((panda$collections$Iterable*) tests1173));
                    $tmp1182 = $tmp1186;
                    $tmp1181 = $tmp1182;
                    Iter$406$171180 = $tmp1181;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1181));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1182));
                    $l1187:;
                    ITable* $tmp1190 = Iter$406$171180->$class->itable;
                    while ($tmp1190->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1190 = $tmp1190->next;
                    }
                    $fn1192 $tmp1191 = $tmp1190->methods[0];
                    panda$core$Bit $tmp1193 = $tmp1191(Iter$406$171180);
                    panda$core$Bit $tmp1194 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1193);
                    bool $tmp1189 = $tmp1194.value;
                    if (!$tmp1189) goto $l1188;
                    {
                        int $tmp1197;
                        {
                            ITable* $tmp1201 = Iter$406$171180->$class->itable;
                            while ($tmp1201->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1201 = $tmp1201->next;
                            }
                            $fn1203 $tmp1202 = $tmp1201->methods[1];
                            panda$core$Object* $tmp1204 = $tmp1202(Iter$406$171180);
                            $tmp1200 = $tmp1204;
                            $tmp1199 = ((org$pandalanguage$pandac$IRNode*) $tmp1200);
                            t1198 = $tmp1199;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1199));
                            panda$core$Panda$unref$panda$core$Object($tmp1200);
                            panda$core$Bit $tmp1206 = (($fn1205) t1198->$class->vtable[4])(t1198);
                            if ($tmp1206.value) {
                            {
                                $returnValue521 = ((panda$core$Bit) { true });
                                $tmp1197 = 0;
                                goto $l1195;
                                $l1207:;
                                $tmp1179 = 0;
                                goto $l1177;
                                $l1208:;
                                $tmp513 = 53;
                                goto $l511;
                                $l1209:;
                                return $returnValue521;
                            }
                            }
                        }
                        $tmp1197 = -1;
                        goto $l1195;
                        $l1195:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1198));
                        t1198 = NULL;
                        switch ($tmp1197) {
                            case 0: goto $l1207;
                            case -1: goto $l1211;
                        }
                        $l1211:;
                    }
                    goto $l1187;
                    $l1188:;
                }
                $tmp1179 = -1;
                goto $l1177;
                $l1177:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$406$171180));
                Iter$406$171180 = NULL;
                switch ($tmp1179) {
                    case -1: goto $l1212;
                    case 0: goto $l1208;
                }
                $l1212:;
            }
            {
                int $tmp1215;
                {
                    ITable* $tmp1219 = ((panda$collections$Iterable*) statements1175)->$class->itable;
                    while ($tmp1219->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1219 = $tmp1219->next;
                    }
                    $fn1221 $tmp1220 = $tmp1219->methods[0];
                    panda$collections$Iterator* $tmp1222 = $tmp1220(((panda$collections$Iterable*) statements1175));
                    $tmp1218 = $tmp1222;
                    $tmp1217 = $tmp1218;
                    Iter$411$171216 = $tmp1217;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1217));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1218));
                    $l1223:;
                    ITable* $tmp1226 = Iter$411$171216->$class->itable;
                    while ($tmp1226->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1226 = $tmp1226->next;
                    }
                    $fn1228 $tmp1227 = $tmp1226->methods[0];
                    panda$core$Bit $tmp1229 = $tmp1227(Iter$411$171216);
                    panda$core$Bit $tmp1230 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1229);
                    bool $tmp1225 = $tmp1230.value;
                    if (!$tmp1225) goto $l1224;
                    {
                        int $tmp1233;
                        {
                            ITable* $tmp1237 = Iter$411$171216->$class->itable;
                            while ($tmp1237->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1237 = $tmp1237->next;
                            }
                            $fn1239 $tmp1238 = $tmp1237->methods[1];
                            panda$core$Object* $tmp1240 = $tmp1238(Iter$411$171216);
                            $tmp1236 = $tmp1240;
                            $tmp1235 = ((org$pandalanguage$pandac$IRNode*) $tmp1236);
                            s1234 = $tmp1235;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1235));
                            panda$core$Panda$unref$panda$core$Object($tmp1236);
                            panda$core$Bit $tmp1242 = (($fn1241) s1234->$class->vtable[4])(s1234);
                            if ($tmp1242.value) {
                            {
                                $returnValue521 = ((panda$core$Bit) { true });
                                $tmp1233 = 0;
                                goto $l1231;
                                $l1243:;
                                $tmp1215 = 0;
                                goto $l1213;
                                $l1244:;
                                $tmp513 = 54;
                                goto $l511;
                                $l1245:;
                                return $returnValue521;
                            }
                            }
                        }
                        $tmp1233 = -1;
                        goto $l1231;
                        $l1231:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1234));
                        s1234 = NULL;
                        switch ($tmp1233) {
                            case 0: goto $l1243;
                            case -1: goto $l1247;
                        }
                        $l1247:;
                    }
                    goto $l1223;
                    $l1224:;
                }
                $tmp1215 = -1;
                goto $l1213;
                $l1213:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$411$171216));
                Iter$411$171216 = NULL;
                switch ($tmp1215) {
                    case -1: goto $l1248;
                    case 0: goto $l1244;
                }
                $l1248:;
            }
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 55;
            goto $l511;
            $l1249:;
            return $returnValue521;
        }
        }
        else {
        panda$core$Bit $tmp1251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9514->$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp1251.value) {
        {
            panda$core$String** $tmp1253 = ((panda$core$String**) ((char*) $match$253_9514->$data + 16));
            label1252 = *$tmp1253;
            org$pandalanguage$pandac$IRNode** $tmp1255 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9514->$data + 24));
            test1254 = *$tmp1255;
            panda$collections$ImmutableArray** $tmp1257 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9514->$data + 32));
            statements1256 = *$tmp1257;
            panda$core$Bit $tmp1259 = (($fn1258) test1254->$class->vtable[4])(test1254);
            if ($tmp1259.value) {
            {
                $returnValue521 = ((panda$core$Bit) { true });
                $tmp513 = 56;
                goto $l511;
                $l1260:;
                return $returnValue521;
            }
            }
            {
                int $tmp1264;
                {
                    ITable* $tmp1268 = ((panda$collections$Iterable*) statements1256)->$class->itable;
                    while ($tmp1268->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1268 = $tmp1268->next;
                    }
                    $fn1270 $tmp1269 = $tmp1268->methods[0];
                    panda$collections$Iterator* $tmp1271 = $tmp1269(((panda$collections$Iterable*) statements1256));
                    $tmp1267 = $tmp1271;
                    $tmp1266 = $tmp1267;
                    Iter$421$171265 = $tmp1266;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1266));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1267));
                    $l1272:;
                    ITable* $tmp1275 = Iter$421$171265->$class->itable;
                    while ($tmp1275->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1275 = $tmp1275->next;
                    }
                    $fn1277 $tmp1276 = $tmp1275->methods[0];
                    panda$core$Bit $tmp1278 = $tmp1276(Iter$421$171265);
                    panda$core$Bit $tmp1279 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1278);
                    bool $tmp1274 = $tmp1279.value;
                    if (!$tmp1274) goto $l1273;
                    {
                        int $tmp1282;
                        {
                            ITable* $tmp1286 = Iter$421$171265->$class->itable;
                            while ($tmp1286->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1286 = $tmp1286->next;
                            }
                            $fn1288 $tmp1287 = $tmp1286->methods[1];
                            panda$core$Object* $tmp1289 = $tmp1287(Iter$421$171265);
                            $tmp1285 = $tmp1289;
                            $tmp1284 = ((org$pandalanguage$pandac$IRNode*) $tmp1285);
                            s1283 = $tmp1284;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1284));
                            panda$core$Panda$unref$panda$core$Object($tmp1285);
                            panda$core$Bit $tmp1291 = (($fn1290) s1283->$class->vtable[4])(s1283);
                            if ($tmp1291.value) {
                            {
                                $returnValue521 = ((panda$core$Bit) { true });
                                $tmp1282 = 0;
                                goto $l1280;
                                $l1292:;
                                $tmp1264 = 0;
                                goto $l1262;
                                $l1293:;
                                $tmp513 = 57;
                                goto $l511;
                                $l1294:;
                                return $returnValue521;
                            }
                            }
                        }
                        $tmp1282 = -1;
                        goto $l1280;
                        $l1280:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1283));
                        s1283 = NULL;
                        switch ($tmp1282) {
                            case 0: goto $l1292;
                            case -1: goto $l1296;
                        }
                        $l1296:;
                    }
                    goto $l1272;
                    $l1273:;
                }
                $tmp1264 = -1;
                goto $l1262;
                $l1262:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$421$171265));
                Iter$421$171265 = NULL;
                switch ($tmp1264) {
                    case -1: goto $l1297;
                    case 0: goto $l1293;
                }
                $l1297:;
            }
            $returnValue521 = ((panda$core$Bit) { false });
            $tmp513 = 58;
            goto $l511;
            $l1298:;
            return $returnValue521;
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
    $tmp513 = -1;
    goto $l511;
    $l511:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp515));
    switch ($tmp513) {
        case 16: goto $l701;
        case 31: goto $l918;
        case 2: goto $l552;
        case 11: goto $l661;
        case 22: goto $l771;
        case 42: goto $l1041;
        case 38: goto $l991;
        case 29: goto $l873;
        case 30: goto $l884;
        case 53: goto $l1209;
        case 47: goto $l1066;
        case 51: goto $l1165;
        case 24: goto $l811;
        case 52: goto $l1170;
        case 6: goto $l603;
        case 5: goto $l598;
        case 20: goto $l753;
        case 23: goto $l805;
        case 4: goto $l594;
        case 21: goto $l760;
        case 10: goto $l656;
        case 8: goto $l645;
        case 9: goto $l649;
        case 28: goto $l869;
        case 58: goto $l1298;
        case -1: goto $l1300;
        case 1: goto $l532;
        case 32: goto $l954;
        case 13: goto $l679;
        case 57: goto $l1294;
        case 0: goto $l529;
        case 33: goto $l958;
        case 34: goto $l961;
        case 50: goto $l1161;
        case 43: goto $l1046;
        case 18: goto $l746;
        case 25: goto $l816;
        case 19: goto $l750;
        case 17: goto $l712;
        case 26: goto $l823;
        case 46: goto $l1063;
        case 45: goto $l1058;
        case 7: goto $l611;
        case 15: goto $l689;
        case 39: goto $l1025;
        case 41: goto $l1034;
        case 40: goto $l1029;
        case 12: goto $l670;
        case 27: goto $l830;
        case 44: goto $l1055;
        case 36: goto $l969;
        case 37: goto $l978;
        case 54: goto $l1245;
        case 14: goto $l684;
        case 3: goto $l557;
        case 48: goto $l1087;
        case 56: goto $l1260;
        case 35: goto $l966;
        case 55: goto $l1249;
        case 49: goto $l1092;
    }
    $l1300:;
}
panda$core$String* org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$434_91304 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1305;
    org$pandalanguage$pandac$IRNode* test1307 = NULL;
    org$pandalanguage$pandac$IRNode* msg1309 = NULL;
    panda$core$String* $returnValue1311;
    panda$core$String* $tmp1312;
    panda$core$String* $tmp1313;
    panda$core$String* $tmp1314;
    panda$core$String* $tmp1315;
    panda$core$String* $tmp1316;
    panda$core$String* $tmp1326;
    panda$core$String* $tmp1327;
    panda$core$String* $tmp1328;
    panda$core$String* $tmp1336;
    org$pandalanguage$pandac$IRNode* left1341 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op1343;
    org$pandalanguage$pandac$IRNode* right1345 = NULL;
    panda$core$String* $tmp1347;
    panda$core$String* $tmp1348;
    panda$core$String* $tmp1349;
    panda$core$String* $tmp1350;
    panda$core$String* $tmp1351;
    panda$core$String* $tmp1352;
    panda$core$String* $tmp1353;
    panda$core$Object* $tmp1358;
    panda$core$Bit bit1369;
    panda$core$String* $tmp1371;
    panda$core$String* $tmp1372;
    panda$collections$ImmutableArray* statements1377 = NULL;
    panda$core$MutableString* result1382 = NULL;
    panda$core$MutableString* $tmp1383;
    panda$core$MutableString* $tmp1384;
    panda$collections$Iterator* Iter$448$171390 = NULL;
    panda$collections$Iterator* $tmp1391;
    panda$collections$Iterator* $tmp1392;
    org$pandalanguage$pandac$IRNode* s1408 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1409;
    panda$core$Object* $tmp1410;
    panda$core$String* $tmp1415;
    panda$core$Char8 $tmp1420;
    panda$core$String* $tmp1421;
    panda$core$String* $tmp1422;
    panda$collections$ImmutableArray* statements1429 = NULL;
    panda$collections$ImmutableArray* finally1431 = NULL;
    panda$core$MutableString* result1436 = NULL;
    panda$core$MutableString* $tmp1437;
    panda$core$MutableString* $tmp1438;
    panda$collections$Iterator* Iter$455$171444 = NULL;
    panda$collections$Iterator* $tmp1445;
    panda$collections$Iterator* $tmp1446;
    org$pandalanguage$pandac$IRNode* s1462 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1463;
    panda$core$Object* $tmp1464;
    panda$core$String* $tmp1469;
    panda$collections$Iterator* Iter$459$171478 = NULL;
    panda$collections$Iterator* $tmp1479;
    panda$collections$Iterator* $tmp1480;
    org$pandalanguage$pandac$IRNode* s1496 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1497;
    panda$core$Object* $tmp1498;
    panda$core$String* $tmp1503;
    panda$core$Char8 $tmp1508;
    panda$core$String* $tmp1509;
    panda$core$String* $tmp1510;
    panda$core$String* label1517 = NULL;
    panda$core$String* $tmp1519;
    panda$core$String* $tmp1520;
    panda$core$String* $tmp1521;
    panda$core$String* $tmp1528;
    org$pandalanguage$pandac$MethodRef* m1533 = NULL;
    panda$collections$ImmutableArray* args1535 = NULL;
    panda$core$String* $tmp1537;
    panda$core$String* $tmp1538;
    panda$core$String* $tmp1539;
    panda$core$String* $tmp1540;
    panda$core$String* $tmp1541;
    panda$core$String* $tmp1545;
    org$pandalanguage$pandac$IRNode* value1556 = NULL;
    org$pandalanguage$pandac$Type* type1558 = NULL;
    org$pandalanguage$pandac$Type* $tmp1560;
    org$pandalanguage$pandac$Type* $tmp1563;
    panda$core$String* $tmp1566;
    panda$core$String* $tmp1567;
    panda$core$String* $tmp1568;
    panda$core$String* $tmp1569;
    panda$core$String* $tmp1570;
    panda$core$String* $tmp1580;
    panda$core$String* $tmp1581;
    panda$core$String* $tmp1582;
    panda$core$String* $tmp1583;
    panda$core$String* $tmp1584;
    org$pandalanguage$pandac$ChoiceEntry* ce1595 = NULL;
    panda$core$String* $tmp1597;
    panda$core$String* $tmp1598;
    org$pandalanguage$pandac$IRNode* base1603 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce1605 = NULL;
    panda$core$Int64 field1607;
    panda$core$String* $tmp1609;
    panda$core$String* $tmp1610;
    panda$core$String* $tmp1611;
    panda$core$String* $tmp1612;
    panda$core$String* $tmp1613;
    panda$core$String* $tmp1614;
    panda$core$String* $tmp1615;
    panda$core$Object* $tmp1623;
    org$pandalanguage$pandac$Type* type1631 = NULL;
    org$pandalanguage$pandac$IRNode* call1633 = NULL;
    org$pandalanguage$pandac$IRNode* $match$481_171638 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1639;
    panda$collections$ImmutableArray* args1641 = NULL;
    panda$core$String* $tmp1643;
    panda$core$String* $tmp1644;
    panda$core$String* $tmp1645;
    panda$core$String* $tmp1646;
    panda$core$String* $tmp1647;
    panda$core$String* $tmp1651;
    org$pandalanguage$pandac$Type* Type1664 = NULL;
    panda$core$String* $tmp1666;
    panda$core$String* label1671 = NULL;
    panda$core$String* $tmp1673;
    panda$core$String* $tmp1674;
    panda$core$String* $tmp1675;
    panda$core$String* $tmp1682;
    org$pandalanguage$pandac$IRNode* target1687 = NULL;
    org$pandalanguage$pandac$IRNode* value1689 = NULL;
    panda$core$String* $tmp1691;
    panda$core$String* $tmp1692;
    panda$core$String* $tmp1693;
    panda$core$String* $tmp1694;
    panda$core$String* $tmp1695;
    panda$core$String* $tmp1705;
    panda$core$String* $tmp1706;
    panda$core$String* label1712 = NULL;
    panda$collections$ImmutableArray* statements1714 = NULL;
    org$pandalanguage$pandac$IRNode* test1716 = NULL;
    panda$core$MutableString* result1721 = NULL;
    panda$core$MutableString* $tmp1722;
    panda$core$MutableString* $tmp1723;
    panda$core$String* $tmp1725;
    panda$core$String* $tmp1726;
    panda$collections$Iterator* Iter$505$171734 = NULL;
    panda$collections$Iterator* $tmp1735;
    panda$collections$Iterator* $tmp1736;
    org$pandalanguage$pandac$IRNode* s1752 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1753;
    panda$core$Object* $tmp1754;
    panda$core$String* $tmp1759;
    panda$core$String* $tmp1764;
    panda$core$String* $tmp1765;
    panda$core$String* $tmp1770;
    panda$core$String* $tmp1771;
    org$pandalanguage$pandac$IRNode* m1778 = NULL;
    panda$collections$ImmutableArray* args1780 = NULL;
    panda$core$String* $tmp1782;
    panda$core$String* $tmp1783;
    panda$core$String* $tmp1784;
    panda$core$String* $tmp1785;
    panda$core$String* $tmp1786;
    panda$core$String* $tmp1791;
    org$pandalanguage$pandac$IRNode* expr1803 = NULL;
    org$pandalanguage$pandac$IRNode* stmt1805 = NULL;
    panda$core$String* $tmp1807;
    panda$core$String* $tmp1808;
    panda$core$String* $tmp1809;
    panda$core$String* $tmp1810;
    panda$core$String* $tmp1811;
    org$pandalanguage$pandac$IRNode* base1822 = NULL;
    org$pandalanguage$pandac$FieldDecl* field1824 = NULL;
    panda$core$String* $tmp1826;
    panda$core$String* $tmp1827;
    panda$core$String* $tmp1828;
    panda$core$String* $tmp1829;
    panda$core$String* $tmp1830;
    org$pandalanguage$pandac$IRNode* test1841 = NULL;
    panda$collections$ImmutableArray* ifTrue1843 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse1845 = NULL;
    panda$core$MutableString* result1850 = NULL;
    panda$core$MutableString* $tmp1851;
    panda$core$MutableString* $tmp1852;
    panda$core$String* $tmp1854;
    panda$core$String* $tmp1855;
    panda$collections$Iterator* Iter$518$171863 = NULL;
    panda$collections$Iterator* $tmp1864;
    panda$collections$Iterator* $tmp1865;
    org$pandalanguage$pandac$IRNode* s1881 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1882;
    panda$core$Object* $tmp1883;
    panda$core$String* $tmp1888;
    panda$core$Char8 $tmp1893;
    panda$core$String* $tmp1894;
    panda$core$String* $tmp1895;
    panda$core$String* $tmp1900;
    panda$core$String* $tmp1901;
    panda$core$UInt64 value1908;
    panda$core$String* $tmp1910;
    panda$core$String* $tmp1911;
    org$pandalanguage$pandac$IRNode* value1916 = NULL;
    panda$core$String* $tmp1918;
    panda$core$String* $tmp1919;
    panda$core$String* $tmp1920;
    org$pandalanguage$pandac$IRNode* value1928 = NULL;
    panda$core$String* $tmp1930;
    panda$core$String* $tmp1931;
    panda$core$String* $tmp1932;
    panda$core$String* label1940 = NULL;
    panda$collections$ImmutableArray* statements1942 = NULL;
    panda$core$MutableString* result1947 = NULL;
    panda$core$MutableString* $tmp1948;
    panda$core$MutableString* $tmp1949;
    panda$core$String* $tmp1951;
    panda$core$String* $tmp1952;
    panda$collections$Iterator* Iter$538$171960 = NULL;
    panda$collections$Iterator* $tmp1961;
    panda$collections$Iterator* $tmp1962;
    org$pandalanguage$pandac$IRNode* s1978 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1979;
    panda$core$Object* $tmp1980;
    panda$core$String* $tmp1985;
    panda$core$Char8 $tmp1990;
    panda$core$String* $tmp1991;
    panda$core$String* $tmp1992;
    org$pandalanguage$pandac$IRNode* value1999 = NULL;
    panda$collections$ImmutableArray* whens2001 = NULL;
    panda$collections$ImmutableArray* other2003 = NULL;
    panda$core$MutableString* result2008 = NULL;
    panda$core$MutableString* $tmp2009;
    panda$core$MutableString* $tmp2010;
    panda$core$String* $tmp2012;
    panda$core$String* $tmp2013;
    panda$collections$Iterator* Iter$545$172021 = NULL;
    panda$collections$Iterator* $tmp2022;
    panda$collections$Iterator* $tmp2023;
    org$pandalanguage$pandac$IRNode* w2039 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2040;
    panda$core$Object* $tmp2041;
    panda$core$String* $tmp2046;
    panda$collections$Iterator* Iter$550$212055 = NULL;
    panda$collections$Iterator* $tmp2056;
    panda$collections$Iterator* $tmp2057;
    org$pandalanguage$pandac$IRNode* s2073 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2074;
    panda$core$Object* $tmp2075;
    panda$core$String* $tmp2080;
    panda$core$Char8 $tmp2085;
    panda$core$String* $tmp2086;
    panda$core$String* $tmp2087;
    org$pandalanguage$pandac$IRNode* target2094 = NULL;
    org$pandalanguage$pandac$MethodRef* m2096 = NULL;
    panda$core$String* $tmp2098;
    panda$core$String* $tmp2099;
    panda$core$String* $tmp2100;
    panda$core$String* $tmp2101;
    panda$core$String* $tmp2102;
    panda$core$String* $tmp2112;
    panda$core$UInt64 value2116;
    panda$core$String* $tmp2118;
    panda$core$String* $tmp2119;
    panda$core$Object* $tmp2121;
    panda$core$String* $tmp2127;
    org$pandalanguage$pandac$parser$Token$Kind op2132;
    org$pandalanguage$pandac$IRNode* base2134 = NULL;
    panda$core$String* $tmp2136;
    panda$core$String* $tmp2137;
    panda$core$String* $tmp2138;
    panda$core$String* $tmp2139;
    panda$core$String* $tmp2140;
    panda$core$Object* $tmp2141;
    panda$core$String* label2153 = NULL;
    org$pandalanguage$pandac$IRNode* target2155 = NULL;
    org$pandalanguage$pandac$IRNode* list2157 = NULL;
    panda$collections$ImmutableArray* statements2159 = NULL;
    panda$core$MutableString* result2164 = NULL;
    panda$core$MutableString* $tmp2165;
    panda$core$MutableString* $tmp2166;
    panda$core$String* $tmp2168;
    panda$core$String* $tmp2169;
    panda$core$String* $tmp2173;
    panda$core$String* $tmp2174;
    panda$core$String* $tmp2175;
    panda$core$String* $tmp2176;
    panda$collections$Iterator* Iter$573$172187 = NULL;
    panda$collections$Iterator* $tmp2188;
    panda$collections$Iterator* $tmp2189;
    org$pandalanguage$pandac$IRNode* s2205 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2206;
    panda$core$Object* $tmp2207;
    panda$core$String* $tmp2212;
    panda$core$Char8 $tmp2217;
    panda$core$String* $tmp2218;
    panda$core$String* $tmp2219;
    panda$core$Real64 value2226;
    panda$core$String* $tmp2228;
    panda$core$String* $tmp2229;
    org$pandalanguage$pandac$IRNode* value2234 = NULL;
    panda$core$String* $tmp2236;
    panda$core$String* $tmp2237;
    panda$core$String* $tmp2238;
    panda$core$String* $tmp2245;
    org$pandalanguage$pandac$Type* type2250 = NULL;
    panda$core$Int64 id2252;
    panda$core$String* $tmp2254;
    panda$core$String* $tmp2255;
    panda$core$String* $tmp2256;
    panda$core$Object* $tmp2258;
    org$pandalanguage$pandac$IRNode* base2266 = NULL;
    panda$core$Int64 id2268;
    panda$core$String* $tmp2270;
    panda$core$String* $tmp2271;
    panda$core$String* $tmp2272;
    panda$core$String* $tmp2273;
    panda$core$String* $tmp2274;
    panda$core$Object* $tmp2276;
    panda$core$String* $tmp2287;
    panda$core$String* str2292 = NULL;
    panda$core$String* $tmp2294;
    panda$core$String* $tmp2295;
    panda$core$String* $tmp2301;
    org$pandalanguage$pandac$IRNode* test2306 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue2308 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse2310 = NULL;
    panda$core$String* $tmp2312;
    panda$core$String* $tmp2313;
    panda$core$String* $tmp2314;
    panda$core$String* $tmp2315;
    panda$core$String* $tmp2316;
    panda$core$String* $tmp2317;
    panda$core$String* $tmp2318;
    org$pandalanguage$pandac$Type* type2332 = NULL;
    panda$core$String* $tmp2334;
    panda$core$String* $tmp2335;
    panda$core$String* name2340 = NULL;
    panda$core$String* $tmp2342;
    org$pandalanguage$pandac$IRNode* base2346 = NULL;
    panda$collections$ImmutableArray* args2348 = NULL;
    panda$core$String* $tmp2350;
    panda$core$String* $tmp2351;
    panda$core$String* $tmp2352;
    panda$core$String* $tmp2353;
    panda$core$String* $tmp2354;
    panda$core$String* $tmp2359;
    panda$collections$ImmutableArray* params2370 = NULL;
    org$pandalanguage$pandac$ASTNode* body2372 = NULL;
    panda$core$String* $tmp2374;
    panda$core$String* $tmp2375;
    panda$core$String* $tmp2376;
    panda$core$String* $tmp2377;
    panda$core$String* $tmp2378;
    panda$core$String* $tmp2380;
    org$pandalanguage$pandac$IRNode* target2394 = NULL;
    panda$collections$ImmutableArray* methods2396 = NULL;
    panda$collections$ImmutableArray* args2398 = NULL;
    panda$core$String* $tmp2400;
    panda$core$String* $tmp2401;
    panda$core$String* $tmp2402;
    panda$core$String* $tmp2403;
    panda$core$String* $tmp2404;
    panda$core$String* $tmp2405;
    panda$core$String* $tmp2406;
    panda$core$Object* $tmp2411;
    panda$core$String* $tmp2416;
    panda$core$String* $tmp2426;
    panda$core$String* $tmp2427;
    panda$core$String* $tmp2428;
    panda$core$String* $tmp2429;
    panda$core$String* $tmp2430;
    panda$core$Object* $tmp2432;
    panda$core$String* $tmp2437;
    org$pandalanguage$pandac$IRNode* target2448 = NULL;
    panda$collections$ImmutableArray* methods2450 = NULL;
    panda$core$String* $tmp2452;
    panda$core$String* $tmp2453;
    panda$core$String* $tmp2454;
    panda$core$String* $tmp2455;
    panda$core$String* $tmp2456;
    panda$core$Object* $tmp2461;
    panda$core$String* $tmp2468;
    panda$core$String* $tmp2469;
    panda$core$String* $tmp2470;
    panda$core$Object* $tmp2471;
    org$pandalanguage$pandac$IRNode* start2479 = NULL;
    org$pandalanguage$pandac$IRNode* end2481 = NULL;
    panda$core$Bit inclusive2483;
    org$pandalanguage$pandac$IRNode* step2485 = NULL;
    panda$core$MutableString* result2490 = NULL;
    panda$core$MutableString* $tmp2491;
    panda$core$MutableString* $tmp2492;
    panda$core$String* $tmp2496;
    panda$core$String* $tmp2497;
    panda$core$String* $tmp2502;
    panda$core$String* $tmp2503;
    org$pandalanguage$pandac$Variable$Kind kind2510;
    panda$collections$ImmutableArray* decls2512 = NULL;
    panda$core$MutableString* result2517 = NULL;
    panda$core$MutableString* $tmp2518;
    panda$core$MutableString* $tmp2519;
    org$pandalanguage$pandac$Variable$Kind $match$639_172521;
    panda$core$String* $tmp2530;
    panda$core$String* $tmp2535;
    panda$core$String* $tmp2536;
    org$pandalanguage$pandac$Variable* variable2543 = NULL;
    panda$core$String* $tmp2545;
    panda$collections$ImmutableArray* tests2549 = NULL;
    panda$collections$ImmutableArray* statements2551 = NULL;
    panda$core$String* $tmp2553;
    panda$core$String* $tmp2554;
    panda$core$String* $tmp2555;
    panda$core$String* $tmp2556;
    panda$core$String* $tmp2557;
    panda$core$String* $tmp2559;
    panda$core$String* $tmp2567;
    panda$core$String* label2579 = NULL;
    org$pandalanguage$pandac$IRNode* test2581 = NULL;
    panda$collections$ImmutableArray* statements2583 = NULL;
    panda$core$MutableString* result2588 = NULL;
    panda$core$MutableString* $tmp2589;
    panda$core$MutableString* $tmp2590;
    panda$core$String* $tmp2592;
    panda$core$String* $tmp2593;
    panda$core$String* $tmp2597;
    panda$core$String* $tmp2598;
    panda$collections$Iterator* Iter$657$172606 = NULL;
    panda$collections$Iterator* $tmp2607;
    panda$collections$Iterator* $tmp2608;
    org$pandalanguage$pandac$IRNode* s2624 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2625;
    panda$core$Object* $tmp2626;
    panda$core$String* $tmp2631;
    panda$core$Char8 $tmp2636;
    panda$core$String* $tmp2637;
    panda$core$String* $tmp2638;
    int $tmp1303;
    {
        $tmp1305 = self;
        $match$434_91304 = $tmp1305;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1305));
        panda$core$Bit $tmp1306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp1306.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1308 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 16));
            test1307 = *$tmp1308;
            org$pandalanguage$pandac$IRNode** $tmp1310 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 24));
            msg1309 = *$tmp1310;
            if (((panda$core$Bit) { msg1309 != NULL }).value) {
            {
                panda$core$String* $tmp1318 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1317, ((panda$core$Object*) test1307));
                $tmp1316 = $tmp1318;
                panda$core$String* $tmp1320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1316, &$s1319);
                $tmp1315 = $tmp1320;
                panda$core$String* $tmp1321 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1315, ((panda$core$Object*) msg1309));
                $tmp1314 = $tmp1321;
                panda$core$String* $tmp1323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1314, &$s1322);
                $tmp1313 = $tmp1323;
                $tmp1312 = $tmp1313;
                $returnValue1311 = $tmp1312;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1312));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1313));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1314));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1315));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1316));
                $tmp1303 = 0;
                goto $l1301;
                $l1324:;
                return $returnValue1311;
            }
            }
            panda$core$String* $tmp1330 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1329, ((panda$core$Object*) test1307));
            $tmp1328 = $tmp1330;
            panda$core$String* $tmp1332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1328, &$s1331);
            $tmp1327 = $tmp1332;
            $tmp1326 = $tmp1327;
            $returnValue1311 = $tmp1326;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1326));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1327));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1328));
            $tmp1303 = 1;
            goto $l1301;
            $l1333:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp1335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1335.value) {
        {
            $tmp1336 = &$s1337;
            $returnValue1311 = $tmp1336;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1336));
            $tmp1303 = 2;
            goto $l1301;
            $l1338:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp1340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1340.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1342 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 24));
            left1341 = *$tmp1342;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1344 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$434_91304->$data + 32));
            op1343 = *$tmp1344;
            org$pandalanguage$pandac$IRNode** $tmp1346 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 40));
            right1345 = *$tmp1346;
            panda$core$String* $tmp1355 = (($fn1354) left1341->$class->vtable[0])(left1341);
            $tmp1353 = $tmp1355;
            panda$core$String* $tmp1357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1353, &$s1356);
            $tmp1352 = $tmp1357;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1359;
            $tmp1359 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1359->value = op1343;
            $tmp1358 = ((panda$core$Object*) $tmp1359);
            panda$core$String* $tmp1360 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1352, $tmp1358);
            $tmp1351 = $tmp1360;
            panda$core$String* $tmp1362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1351, &$s1361);
            $tmp1350 = $tmp1362;
            panda$core$String* $tmp1363 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1350, ((panda$core$Object*) right1345));
            $tmp1349 = $tmp1363;
            panda$core$String* $tmp1365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1349, &$s1364);
            $tmp1348 = $tmp1365;
            $tmp1347 = $tmp1348;
            $returnValue1311 = $tmp1347;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1347));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1348));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1349));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1350));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1351));
            panda$core$Panda$unref$panda$core$Object($tmp1358);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1352));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1353));
            $tmp1303 = 3;
            goto $l1301;
            $l1366:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp1368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp1368.value) {
        {
            panda$core$Bit* $tmp1370 = ((panda$core$Bit*) ((char*) $match$434_91304->$data + 24));
            bit1369 = *$tmp1370;
            panda$core$String* $tmp1373 = panda$core$Bit$convert$R$panda$core$String(bit1369);
            $tmp1372 = $tmp1373;
            $tmp1371 = $tmp1372;
            $returnValue1311 = $tmp1371;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1371));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1372));
            $tmp1303 = 4;
            goto $l1301;
            $l1374:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp1376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp1376.value) {
        {
            panda$collections$ImmutableArray** $tmp1378 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91304->$data + 16));
            statements1377 = *$tmp1378;
            int $tmp1381;
            {
                panda$core$MutableString* $tmp1385 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1385, &$s1386);
                $tmp1384 = $tmp1385;
                $tmp1383 = $tmp1384;
                result1382 = $tmp1383;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1383));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1384));
                {
                    int $tmp1389;
                    {
                        ITable* $tmp1393 = ((panda$collections$Iterable*) statements1377)->$class->itable;
                        while ($tmp1393->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1393 = $tmp1393->next;
                        }
                        $fn1395 $tmp1394 = $tmp1393->methods[0];
                        panda$collections$Iterator* $tmp1396 = $tmp1394(((panda$collections$Iterable*) statements1377));
                        $tmp1392 = $tmp1396;
                        $tmp1391 = $tmp1392;
                        Iter$448$171390 = $tmp1391;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1391));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1392));
                        $l1397:;
                        ITable* $tmp1400 = Iter$448$171390->$class->itable;
                        while ($tmp1400->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1400 = $tmp1400->next;
                        }
                        $fn1402 $tmp1401 = $tmp1400->methods[0];
                        panda$core$Bit $tmp1403 = $tmp1401(Iter$448$171390);
                        panda$core$Bit $tmp1404 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1403);
                        bool $tmp1399 = $tmp1404.value;
                        if (!$tmp1399) goto $l1398;
                        {
                            int $tmp1407;
                            {
                                ITable* $tmp1411 = Iter$448$171390->$class->itable;
                                while ($tmp1411->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1411 = $tmp1411->next;
                                }
                                $fn1413 $tmp1412 = $tmp1411->methods[1];
                                panda$core$Object* $tmp1414 = $tmp1412(Iter$448$171390);
                                $tmp1410 = $tmp1414;
                                $tmp1409 = ((org$pandalanguage$pandac$IRNode*) $tmp1410);
                                s1408 = $tmp1409;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1409));
                                panda$core$Panda$unref$panda$core$Object($tmp1410);
                                panda$core$String* $tmp1417 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1408), &$s1416);
                                $tmp1415 = $tmp1417;
                                panda$core$MutableString$append$panda$core$String(result1382, $tmp1415);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1415));
                            }
                            $tmp1407 = -1;
                            goto $l1405;
                            $l1405:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1408));
                            s1408 = NULL;
                            switch ($tmp1407) {
                                case -1: goto $l1418;
                            }
                            $l1418:;
                        }
                        goto $l1397;
                        $l1398:;
                    }
                    $tmp1389 = -1;
                    goto $l1387;
                    $l1387:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$448$171390));
                    Iter$448$171390 = NULL;
                    switch ($tmp1389) {
                        case -1: goto $l1419;
                    }
                    $l1419:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1420, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1382, $tmp1420);
                panda$core$String* $tmp1423 = panda$core$MutableString$finish$R$panda$core$String(result1382);
                $tmp1422 = $tmp1423;
                $tmp1421 = $tmp1422;
                $returnValue1311 = $tmp1421;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1421));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1422));
                $tmp1381 = 0;
                goto $l1379;
                $l1424:;
                $tmp1303 = 5;
                goto $l1301;
                $l1425:;
                return $returnValue1311;
            }
            $l1379:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1382));
            result1382 = NULL;
            switch ($tmp1381) {
                case 0: goto $l1424;
            }
            $l1427:;
        }
        }
        else {
        panda$core$Bit $tmp1428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp1428.value) {
        {
            panda$collections$ImmutableArray** $tmp1430 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91304->$data + 16));
            statements1429 = *$tmp1430;
            panda$collections$ImmutableArray** $tmp1432 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91304->$data + 24));
            finally1431 = *$tmp1432;
            int $tmp1435;
            {
                panda$core$MutableString* $tmp1439 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1439, &$s1440);
                $tmp1438 = $tmp1439;
                $tmp1437 = $tmp1438;
                result1436 = $tmp1437;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1437));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1438));
                {
                    int $tmp1443;
                    {
                        ITable* $tmp1447 = ((panda$collections$Iterable*) statements1429)->$class->itable;
                        while ($tmp1447->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1447 = $tmp1447->next;
                        }
                        $fn1449 $tmp1448 = $tmp1447->methods[0];
                        panda$collections$Iterator* $tmp1450 = $tmp1448(((panda$collections$Iterable*) statements1429));
                        $tmp1446 = $tmp1450;
                        $tmp1445 = $tmp1446;
                        Iter$455$171444 = $tmp1445;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1445));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1446));
                        $l1451:;
                        ITable* $tmp1454 = Iter$455$171444->$class->itable;
                        while ($tmp1454->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1454 = $tmp1454->next;
                        }
                        $fn1456 $tmp1455 = $tmp1454->methods[0];
                        panda$core$Bit $tmp1457 = $tmp1455(Iter$455$171444);
                        panda$core$Bit $tmp1458 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1457);
                        bool $tmp1453 = $tmp1458.value;
                        if (!$tmp1453) goto $l1452;
                        {
                            int $tmp1461;
                            {
                                ITable* $tmp1465 = Iter$455$171444->$class->itable;
                                while ($tmp1465->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1465 = $tmp1465->next;
                                }
                                $fn1467 $tmp1466 = $tmp1465->methods[1];
                                panda$core$Object* $tmp1468 = $tmp1466(Iter$455$171444);
                                $tmp1464 = $tmp1468;
                                $tmp1463 = ((org$pandalanguage$pandac$IRNode*) $tmp1464);
                                s1462 = $tmp1463;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1463));
                                panda$core$Panda$unref$panda$core$Object($tmp1464);
                                panda$core$String* $tmp1471 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1462), &$s1470);
                                $tmp1469 = $tmp1471;
                                panda$core$MutableString$append$panda$core$String(result1436, $tmp1469);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1469));
                            }
                            $tmp1461 = -1;
                            goto $l1459;
                            $l1459:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1462));
                            s1462 = NULL;
                            switch ($tmp1461) {
                                case -1: goto $l1472;
                            }
                            $l1472:;
                        }
                        goto $l1451;
                        $l1452:;
                    }
                    $tmp1443 = -1;
                    goto $l1441;
                    $l1441:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$455$171444));
                    Iter$455$171444 = NULL;
                    switch ($tmp1443) {
                        case -1: goto $l1473;
                    }
                    $l1473:;
                }
                panda$core$MutableString$append$panda$core$String(result1436, &$s1474);
                {
                    int $tmp1477;
                    {
                        ITable* $tmp1481 = ((panda$collections$Iterable*) finally1431)->$class->itable;
                        while ($tmp1481->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1481 = $tmp1481->next;
                        }
                        $fn1483 $tmp1482 = $tmp1481->methods[0];
                        panda$collections$Iterator* $tmp1484 = $tmp1482(((panda$collections$Iterable*) finally1431));
                        $tmp1480 = $tmp1484;
                        $tmp1479 = $tmp1480;
                        Iter$459$171478 = $tmp1479;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1479));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1480));
                        $l1485:;
                        ITable* $tmp1488 = Iter$459$171478->$class->itable;
                        while ($tmp1488->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1488 = $tmp1488->next;
                        }
                        $fn1490 $tmp1489 = $tmp1488->methods[0];
                        panda$core$Bit $tmp1491 = $tmp1489(Iter$459$171478);
                        panda$core$Bit $tmp1492 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1491);
                        bool $tmp1487 = $tmp1492.value;
                        if (!$tmp1487) goto $l1486;
                        {
                            int $tmp1495;
                            {
                                ITable* $tmp1499 = Iter$459$171478->$class->itable;
                                while ($tmp1499->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1499 = $tmp1499->next;
                                }
                                $fn1501 $tmp1500 = $tmp1499->methods[1];
                                panda$core$Object* $tmp1502 = $tmp1500(Iter$459$171478);
                                $tmp1498 = $tmp1502;
                                $tmp1497 = ((org$pandalanguage$pandac$IRNode*) $tmp1498);
                                s1496 = $tmp1497;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1497));
                                panda$core$Panda$unref$panda$core$Object($tmp1498);
                                panda$core$String* $tmp1505 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1496), &$s1504);
                                $tmp1503 = $tmp1505;
                                panda$core$MutableString$append$panda$core$String(result1436, $tmp1503);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1503));
                            }
                            $tmp1495 = -1;
                            goto $l1493;
                            $l1493:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1496));
                            s1496 = NULL;
                            switch ($tmp1495) {
                                case -1: goto $l1506;
                            }
                            $l1506:;
                        }
                        goto $l1485;
                        $l1486:;
                    }
                    $tmp1477 = -1;
                    goto $l1475;
                    $l1475:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$459$171478));
                    Iter$459$171478 = NULL;
                    switch ($tmp1477) {
                        case -1: goto $l1507;
                    }
                    $l1507:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1508, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1436, $tmp1508);
                panda$core$String* $tmp1511 = panda$core$MutableString$finish$R$panda$core$String(result1436);
                $tmp1510 = $tmp1511;
                $tmp1509 = $tmp1510;
                $returnValue1311 = $tmp1509;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1509));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1510));
                $tmp1435 = 0;
                goto $l1433;
                $l1512:;
                $tmp1303 = 6;
                goto $l1301;
                $l1513:;
                return $returnValue1311;
            }
            $l1433:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1436));
            result1436 = NULL;
            switch ($tmp1435) {
                case 0: goto $l1512;
            }
            $l1515:;
        }
        }
        else {
        panda$core$Bit $tmp1516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp1516.value) {
        {
            panda$core$String** $tmp1518 = ((panda$core$String**) ((char*) $match$434_91304->$data + 16));
            label1517 = *$tmp1518;
            if (((panda$core$Bit) { label1517 != NULL }).value) {
            {
                panda$core$String* $tmp1523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1522, label1517);
                $tmp1521 = $tmp1523;
                panda$core$String* $tmp1525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1521, &$s1524);
                $tmp1520 = $tmp1525;
                $tmp1519 = $tmp1520;
                $returnValue1311 = $tmp1519;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1519));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1520));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1521));
                $tmp1303 = 7;
                goto $l1301;
                $l1526:;
                return $returnValue1311;
            }
            }
            $tmp1528 = &$s1529;
            $returnValue1311 = $tmp1528;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1528));
            $tmp1303 = 8;
            goto $l1301;
            $l1530:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp1532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp1532.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp1534 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$434_91304->$data + 24));
            m1533 = *$tmp1534;
            panda$collections$ImmutableArray** $tmp1536 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91304->$data + 32));
            args1535 = *$tmp1536;
            panda$core$String* $tmp1542 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) m1533->value)->name);
            $tmp1541 = $tmp1542;
            panda$core$String* $tmp1544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1541, &$s1543);
            $tmp1540 = $tmp1544;
            ITable* $tmp1546 = ((panda$collections$ListView*) args1535)->$class->itable;
            while ($tmp1546->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1546 = $tmp1546->next;
            }
            $fn1548 $tmp1547 = $tmp1546->methods[4];
            panda$core$String* $tmp1549 = $tmp1547(((panda$collections$ListView*) args1535));
            $tmp1545 = $tmp1549;
            panda$core$String* $tmp1550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1540, $tmp1545);
            $tmp1539 = $tmp1550;
            panda$core$String* $tmp1552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1539, &$s1551);
            $tmp1538 = $tmp1552;
            $tmp1537 = $tmp1538;
            $returnValue1311 = $tmp1537;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1537));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1538));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1539));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1545));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1540));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1541));
            $tmp1303 = 9;
            goto $l1301;
            $l1553:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp1555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp1555.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1557 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 16));
            value1556 = *$tmp1557;
            org$pandalanguage$pandac$Type** $tmp1559 = ((org$pandalanguage$pandac$Type**) ((char*) $match$434_91304->$data + 24));
            type1558 = *$tmp1559;
            org$pandalanguage$pandac$Type* $tmp1562 = (($fn1561) value1556->$class->vtable[2])(value1556);
            $tmp1560 = $tmp1562;
            org$pandalanguage$pandac$Type* $tmp1564 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            $tmp1563 = $tmp1564;
            panda$core$Bit $tmp1565 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1560, $tmp1563);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1563));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1560));
            if ($tmp1565.value) {
            {
                panda$core$String* $tmp1572 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1571, ((panda$core$Object*) value1556));
                $tmp1570 = $tmp1572;
                panda$core$String* $tmp1574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1570, &$s1573);
                $tmp1569 = $tmp1574;
                panda$core$String* $tmp1575 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1569, ((panda$core$Object*) type1558));
                $tmp1568 = $tmp1575;
                panda$core$String* $tmp1577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1568, &$s1576);
                $tmp1567 = $tmp1577;
                $tmp1566 = $tmp1567;
                $returnValue1311 = $tmp1566;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1566));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1567));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1568));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1569));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1570));
                $tmp1303 = 10;
                goto $l1301;
                $l1578:;
                return $returnValue1311;
            }
            }
            panda$core$String* $tmp1586 = (($fn1585) value1556->$class->vtable[0])(value1556);
            $tmp1584 = $tmp1586;
            panda$core$String* $tmp1588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1584, &$s1587);
            $tmp1583 = $tmp1588;
            panda$core$String* $tmp1589 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1583, ((panda$core$Object*) type1558));
            $tmp1582 = $tmp1589;
            panda$core$String* $tmp1591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1582, &$s1590);
            $tmp1581 = $tmp1591;
            $tmp1580 = $tmp1581;
            $returnValue1311 = $tmp1580;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1580));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1581));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1582));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1583));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1584));
            $tmp1303 = 11;
            goto $l1301;
            $l1592:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp1594 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1594.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp1596 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$434_91304->$data + 16));
            ce1595 = *$tmp1596;
            panda$core$String* $tmp1599 = org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(ce1595);
            $tmp1598 = $tmp1599;
            $tmp1597 = $tmp1598;
            $returnValue1311 = $tmp1597;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1597));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1598));
            $tmp1303 = 12;
            goto $l1301;
            $l1600:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp1602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp1602.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1604 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 16));
            base1603 = *$tmp1604;
            org$pandalanguage$pandac$ChoiceEntry** $tmp1606 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$434_91304->$data + 24));
            ce1605 = *$tmp1606;
            panda$core$Int64* $tmp1608 = ((panda$core$Int64*) ((char*) $match$434_91304->$data + 32));
            field1607 = *$tmp1608;
            panda$core$String* $tmp1617 = (($fn1616) base1603->$class->vtable[0])(base1603);
            $tmp1615 = $tmp1617;
            panda$core$String* $tmp1619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1615, &$s1618);
            $tmp1614 = $tmp1619;
            panda$core$String* $tmp1620 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1614, ((panda$core$Object*) ce1605));
            $tmp1613 = $tmp1620;
            panda$core$String* $tmp1622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1613, &$s1621);
            $tmp1612 = $tmp1622;
            panda$core$Int64$wrapper* $tmp1624;
            $tmp1624 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1624->value = field1607;
            $tmp1623 = ((panda$core$Object*) $tmp1624);
            panda$core$String* $tmp1625 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1612, $tmp1623);
            $tmp1611 = $tmp1625;
            panda$core$String* $tmp1627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1611, &$s1626);
            $tmp1610 = $tmp1627;
            $tmp1609 = $tmp1610;
            $returnValue1311 = $tmp1609;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1609));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1610));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1611));
            panda$core$Panda$unref$panda$core$Object($tmp1623);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1612));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1613));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1614));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1615));
            $tmp1303 = 13;
            goto $l1301;
            $l1628:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp1630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1630.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1632 = ((org$pandalanguage$pandac$Type**) ((char*) $match$434_91304->$data + 16));
            type1631 = *$tmp1632;
            org$pandalanguage$pandac$IRNode** $tmp1634 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 24));
            call1633 = *$tmp1634;
            int $tmp1637;
            {
                $tmp1639 = call1633;
                $match$481_171638 = $tmp1639;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1639));
                panda$core$Bit $tmp1640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$481_171638->$rawValue, ((panda$core$Int64) { 7 }));
                if ($tmp1640.value) {
                {
                    panda$collections$ImmutableArray** $tmp1642 = ((panda$collections$ImmutableArray**) ((char*) $match$481_171638->$data + 32));
                    args1641 = *$tmp1642;
                    panda$core$String* $tmp1648 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type1631);
                    $tmp1647 = $tmp1648;
                    panda$core$String* $tmp1650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1647, &$s1649);
                    $tmp1646 = $tmp1650;
                    ITable* $tmp1652 = ((panda$collections$ListView*) args1641)->$class->itable;
                    while ($tmp1652->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp1652 = $tmp1652->next;
                    }
                    $fn1654 $tmp1653 = $tmp1652->methods[4];
                    panda$core$String* $tmp1655 = $tmp1653(((panda$collections$ListView*) args1641));
                    $tmp1651 = $tmp1655;
                    panda$core$String* $tmp1656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1646, $tmp1651);
                    $tmp1645 = $tmp1656;
                    panda$core$String* $tmp1658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1645, &$s1657);
                    $tmp1644 = $tmp1658;
                    $tmp1643 = $tmp1644;
                    $returnValue1311 = $tmp1643;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1643));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1644));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1645));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1651));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1646));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1647));
                    $tmp1637 = 0;
                    goto $l1635;
                    $l1659:;
                    $tmp1303 = 14;
                    goto $l1301;
                    $l1660:;
                    return $returnValue1311;
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1637 = -1;
            goto $l1635;
            $l1635:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1639));
            switch ($tmp1637) {
                case -1: goto $l1662;
                case 0: goto $l1659;
            }
            $l1662:;
        }
        }
        else {
        panda$core$Bit $tmp1663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1663.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1665 = ((org$pandalanguage$pandac$Type**) ((char*) $match$434_91304->$data + 16));
            Type1664 = *$tmp1665;
            $tmp1666 = &$s1667;
            $returnValue1311 = $tmp1666;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1666));
            $tmp1303 = 15;
            goto $l1301;
            $l1668:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp1670 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1670.value) {
        {
            panda$core$String** $tmp1672 = ((panda$core$String**) ((char*) $match$434_91304->$data + 16));
            label1671 = *$tmp1672;
            if (((panda$core$Bit) { label1671 != NULL }).value) {
            {
                panda$core$String* $tmp1677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1676, label1671);
                $tmp1675 = $tmp1677;
                panda$core$String* $tmp1679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1675, &$s1678);
                $tmp1674 = $tmp1679;
                $tmp1673 = $tmp1674;
                $returnValue1311 = $tmp1673;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1673));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1674));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1675));
                $tmp1303 = 16;
                goto $l1301;
                $l1680:;
                return $returnValue1311;
            }
            }
            $tmp1682 = &$s1683;
            $returnValue1311 = $tmp1682;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1682));
            $tmp1303 = 17;
            goto $l1301;
            $l1684:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp1686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1686.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1688 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 0));
            target1687 = *$tmp1688;
            org$pandalanguage$pandac$IRNode** $tmp1690 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 8));
            value1689 = *$tmp1690;
            if (((panda$core$Bit) { value1689 != NULL }).value) {
            {
                panda$core$String* $tmp1697 = (($fn1696) target1687->$class->vtable[0])(target1687);
                $tmp1695 = $tmp1697;
                panda$core$String* $tmp1699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1695, &$s1698);
                $tmp1694 = $tmp1699;
                panda$core$String* $tmp1700 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1694, ((panda$core$Object*) value1689));
                $tmp1693 = $tmp1700;
                panda$core$String* $tmp1702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1693, &$s1701);
                $tmp1692 = $tmp1702;
                $tmp1691 = $tmp1692;
                $returnValue1311 = $tmp1691;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1691));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1692));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1693));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1694));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1695));
                $tmp1303 = 18;
                goto $l1301;
                $l1703:;
                return $returnValue1311;
            }
            }
            panda$core$String* $tmp1708 = (($fn1707) target1687->$class->vtable[0])(target1687);
            $tmp1706 = $tmp1708;
            $tmp1705 = $tmp1706;
            $returnValue1311 = $tmp1705;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1705));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1706));
            $tmp1303 = 19;
            goto $l1301;
            $l1709:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp1711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1711.value) {
        {
            panda$core$String** $tmp1713 = ((panda$core$String**) ((char*) $match$434_91304->$data + 16));
            label1712 = *$tmp1713;
            panda$collections$ImmutableArray** $tmp1715 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91304->$data + 24));
            statements1714 = *$tmp1715;
            org$pandalanguage$pandac$IRNode** $tmp1717 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 32));
            test1716 = *$tmp1717;
            int $tmp1720;
            {
                panda$core$MutableString* $tmp1724 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1724);
                $tmp1723 = $tmp1724;
                $tmp1722 = $tmp1723;
                result1721 = $tmp1722;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1722));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1723));
                if (((panda$core$Bit) { label1712 != NULL }).value) {
                {
                    panda$core$String* $tmp1727 = panda$core$String$convert$R$panda$core$String(label1712);
                    $tmp1726 = $tmp1727;
                    panda$core$String* $tmp1729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1726, &$s1728);
                    $tmp1725 = $tmp1729;
                    panda$core$MutableString$append$panda$core$String(result1721, $tmp1725);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1725));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1726));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1721, &$s1730);
                {
                    int $tmp1733;
                    {
                        ITable* $tmp1737 = ((panda$collections$Iterable*) statements1714)->$class->itable;
                        while ($tmp1737->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1737 = $tmp1737->next;
                        }
                        $fn1739 $tmp1738 = $tmp1737->methods[0];
                        panda$collections$Iterator* $tmp1740 = $tmp1738(((panda$collections$Iterable*) statements1714));
                        $tmp1736 = $tmp1740;
                        $tmp1735 = $tmp1736;
                        Iter$505$171734 = $tmp1735;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1735));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1736));
                        $l1741:;
                        ITable* $tmp1744 = Iter$505$171734->$class->itable;
                        while ($tmp1744->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1744 = $tmp1744->next;
                        }
                        $fn1746 $tmp1745 = $tmp1744->methods[0];
                        panda$core$Bit $tmp1747 = $tmp1745(Iter$505$171734);
                        panda$core$Bit $tmp1748 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1747);
                        bool $tmp1743 = $tmp1748.value;
                        if (!$tmp1743) goto $l1742;
                        {
                            int $tmp1751;
                            {
                                ITable* $tmp1755 = Iter$505$171734->$class->itable;
                                while ($tmp1755->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1755 = $tmp1755->next;
                                }
                                $fn1757 $tmp1756 = $tmp1755->methods[1];
                                panda$core$Object* $tmp1758 = $tmp1756(Iter$505$171734);
                                $tmp1754 = $tmp1758;
                                $tmp1753 = ((org$pandalanguage$pandac$IRNode*) $tmp1754);
                                s1752 = $tmp1753;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1753));
                                panda$core$Panda$unref$panda$core$Object($tmp1754);
                                panda$core$String* $tmp1761 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1752), &$s1760);
                                $tmp1759 = $tmp1761;
                                panda$core$MutableString$append$panda$core$String(result1721, $tmp1759);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1759));
                            }
                            $tmp1751 = -1;
                            goto $l1749;
                            $l1749:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1752));
                            s1752 = NULL;
                            switch ($tmp1751) {
                                case -1: goto $l1762;
                            }
                            $l1762:;
                        }
                        goto $l1741;
                        $l1742:;
                    }
                    $tmp1733 = -1;
                    goto $l1731;
                    $l1731:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$505$171734));
                    Iter$505$171734 = NULL;
                    switch ($tmp1733) {
                        case -1: goto $l1763;
                    }
                    $l1763:;
                }
                panda$core$String* $tmp1767 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1766, ((panda$core$Object*) test1716));
                $tmp1765 = $tmp1767;
                panda$core$String* $tmp1769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1765, &$s1768);
                $tmp1764 = $tmp1769;
                panda$core$MutableString$append$panda$core$String(result1721, $tmp1764);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1764));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1765));
                panda$core$String* $tmp1772 = panda$core$MutableString$finish$R$panda$core$String(result1721);
                $tmp1771 = $tmp1772;
                $tmp1770 = $tmp1771;
                $returnValue1311 = $tmp1770;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1770));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1771));
                $tmp1720 = 0;
                goto $l1718;
                $l1773:;
                $tmp1303 = 20;
                goto $l1301;
                $l1774:;
                return $returnValue1311;
            }
            $l1718:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1721));
            result1721 = NULL;
            switch ($tmp1720) {
                case 0: goto $l1773;
            }
            $l1776:;
        }
        }
        else {
        panda$core$Bit $tmp1777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1777.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1779 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 0));
            m1778 = *$tmp1779;
            panda$collections$ImmutableArray** $tmp1781 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91304->$data + 8));
            args1780 = *$tmp1781;
            panda$core$String* $tmp1788 = (($fn1787) m1778->$class->vtable[0])(m1778);
            $tmp1786 = $tmp1788;
            panda$core$String* $tmp1790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1786, &$s1789);
            $tmp1785 = $tmp1790;
            ITable* $tmp1793 = ((panda$collections$ListView*) args1780)->$class->itable;
            while ($tmp1793->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1793 = $tmp1793->next;
            }
            $fn1795 $tmp1794 = $tmp1793->methods[5];
            panda$core$String* $tmp1796 = $tmp1794(((panda$collections$ListView*) args1780), &$s1792);
            $tmp1791 = $tmp1796;
            panda$core$String* $tmp1797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1785, $tmp1791);
            $tmp1784 = $tmp1797;
            panda$core$String* $tmp1799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1784, &$s1798);
            $tmp1783 = $tmp1799;
            $tmp1782 = $tmp1783;
            $returnValue1311 = $tmp1782;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1782));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1783));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1784));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1791));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1785));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1786));
            $tmp1303 = 21;
            goto $l1301;
            $l1800:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp1802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1802.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1804 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 0));
            expr1803 = *$tmp1804;
            org$pandalanguage$pandac$IRNode** $tmp1806 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 8));
            stmt1805 = *$tmp1806;
            panda$core$String* $tmp1813 = (($fn1812) expr1803->$class->vtable[0])(expr1803);
            $tmp1811 = $tmp1813;
            panda$core$String* $tmp1815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1811, &$s1814);
            $tmp1810 = $tmp1815;
            panda$core$String* $tmp1816 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1810, ((panda$core$Object*) stmt1805));
            $tmp1809 = $tmp1816;
            panda$core$String* $tmp1818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1809, &$s1817);
            $tmp1808 = $tmp1818;
            $tmp1807 = $tmp1808;
            $returnValue1311 = $tmp1807;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1807));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1808));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1809));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1810));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1811));
            $tmp1303 = 22;
            goto $l1301;
            $l1819:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp1821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1821.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1823 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 24));
            base1822 = *$tmp1823;
            org$pandalanguage$pandac$FieldDecl** $tmp1825 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$434_91304->$data + 32));
            field1824 = *$tmp1825;
            panda$core$String* $tmp1832 = (($fn1831) base1822->$class->vtable[0])(base1822);
            $tmp1830 = $tmp1832;
            panda$core$String* $tmp1834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1830, &$s1833);
            $tmp1829 = $tmp1834;
            panda$core$String* $tmp1835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1829, ((org$pandalanguage$pandac$Symbol*) field1824)->name);
            $tmp1828 = $tmp1835;
            panda$core$String* $tmp1837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1828, &$s1836);
            $tmp1827 = $tmp1837;
            $tmp1826 = $tmp1827;
            $returnValue1311 = $tmp1826;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1826));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1827));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1828));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1829));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1830));
            $tmp1303 = 23;
            goto $l1301;
            $l1838:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp1840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1840.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1842 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 16));
            test1841 = *$tmp1842;
            panda$collections$ImmutableArray** $tmp1844 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91304->$data + 24));
            ifTrue1843 = *$tmp1844;
            org$pandalanguage$pandac$IRNode** $tmp1846 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 32));
            ifFalse1845 = *$tmp1846;
            int $tmp1849;
            {
                panda$core$MutableString* $tmp1853 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1857 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1856, ((panda$core$Object*) test1841));
                $tmp1855 = $tmp1857;
                panda$core$String* $tmp1859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1855, &$s1858);
                $tmp1854 = $tmp1859;
                panda$core$MutableString$init$panda$core$String($tmp1853, $tmp1854);
                $tmp1852 = $tmp1853;
                $tmp1851 = $tmp1852;
                result1850 = $tmp1851;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1851));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1852));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1854));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1855));
                {
                    int $tmp1862;
                    {
                        ITable* $tmp1866 = ((panda$collections$Iterable*) ifTrue1843)->$class->itable;
                        while ($tmp1866->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1866 = $tmp1866->next;
                        }
                        $fn1868 $tmp1867 = $tmp1866->methods[0];
                        panda$collections$Iterator* $tmp1869 = $tmp1867(((panda$collections$Iterable*) ifTrue1843));
                        $tmp1865 = $tmp1869;
                        $tmp1864 = $tmp1865;
                        Iter$518$171863 = $tmp1864;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1864));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1865));
                        $l1870:;
                        ITable* $tmp1873 = Iter$518$171863->$class->itable;
                        while ($tmp1873->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1873 = $tmp1873->next;
                        }
                        $fn1875 $tmp1874 = $tmp1873->methods[0];
                        panda$core$Bit $tmp1876 = $tmp1874(Iter$518$171863);
                        panda$core$Bit $tmp1877 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1876);
                        bool $tmp1872 = $tmp1877.value;
                        if (!$tmp1872) goto $l1871;
                        {
                            int $tmp1880;
                            {
                                ITable* $tmp1884 = Iter$518$171863->$class->itable;
                                while ($tmp1884->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1884 = $tmp1884->next;
                                }
                                $fn1886 $tmp1885 = $tmp1884->methods[1];
                                panda$core$Object* $tmp1887 = $tmp1885(Iter$518$171863);
                                $tmp1883 = $tmp1887;
                                $tmp1882 = ((org$pandalanguage$pandac$IRNode*) $tmp1883);
                                s1881 = $tmp1882;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1882));
                                panda$core$Panda$unref$panda$core$Object($tmp1883);
                                panda$core$String* $tmp1890 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1881), &$s1889);
                                $tmp1888 = $tmp1890;
                                panda$core$MutableString$append$panda$core$String(result1850, $tmp1888);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1888));
                            }
                            $tmp1880 = -1;
                            goto $l1878;
                            $l1878:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1881));
                            s1881 = NULL;
                            switch ($tmp1880) {
                                case -1: goto $l1891;
                            }
                            $l1891:;
                        }
                        goto $l1870;
                        $l1871:;
                    }
                    $tmp1862 = -1;
                    goto $l1860;
                    $l1860:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$518$171863));
                    Iter$518$171863 = NULL;
                    switch ($tmp1862) {
                        case -1: goto $l1892;
                    }
                    $l1892:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1893, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1850, $tmp1893);
                if (((panda$core$Bit) { ifFalse1845 != NULL }).value) {
                {
                    panda$core$String* $tmp1897 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1896, ((panda$core$Object*) ifFalse1845));
                    $tmp1895 = $tmp1897;
                    panda$core$String* $tmp1899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1895, &$s1898);
                    $tmp1894 = $tmp1899;
                    panda$core$MutableString$append$panda$core$String(result1850, $tmp1894);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1894));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1895));
                }
                }
                panda$core$String* $tmp1902 = panda$core$MutableString$finish$R$panda$core$String(result1850);
                $tmp1901 = $tmp1902;
                $tmp1900 = $tmp1901;
                $returnValue1311 = $tmp1900;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1900));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1901));
                $tmp1849 = 0;
                goto $l1847;
                $l1903:;
                $tmp1303 = 24;
                goto $l1301;
                $l1904:;
                return $returnValue1311;
            }
            $l1847:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1850));
            result1850 = NULL;
            switch ($tmp1849) {
                case 0: goto $l1903;
            }
            $l1906:;
        }
        }
        else {
        panda$core$Bit $tmp1907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1907.value) {
        {
            panda$core$UInt64* $tmp1909 = ((panda$core$UInt64*) ((char*) $match$434_91304->$data + 24));
            value1908 = *$tmp1909;
            panda$core$String* $tmp1912 = panda$core$UInt64$convert$R$panda$core$String(value1908);
            $tmp1911 = $tmp1912;
            $tmp1910 = $tmp1911;
            $returnValue1311 = $tmp1910;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1910));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1911));
            $tmp1303 = 25;
            goto $l1301;
            $l1913:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp1915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1915.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1917 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 16));
            value1916 = *$tmp1917;
            panda$core$String* $tmp1922 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1921, ((panda$core$Object*) value1916));
            $tmp1920 = $tmp1922;
            panda$core$String* $tmp1924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1920, &$s1923);
            $tmp1919 = $tmp1924;
            $tmp1918 = $tmp1919;
            $returnValue1311 = $tmp1918;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1918));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1919));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1920));
            $tmp1303 = 26;
            goto $l1301;
            $l1925:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp1927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1927.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1929 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 16));
            value1928 = *$tmp1929;
            panda$core$String* $tmp1934 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1933, ((panda$core$Object*) value1928));
            $tmp1932 = $tmp1934;
            panda$core$String* $tmp1936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1932, &$s1935);
            $tmp1931 = $tmp1936;
            $tmp1930 = $tmp1931;
            $returnValue1311 = $tmp1930;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1930));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1931));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1932));
            $tmp1303 = 27;
            goto $l1301;
            $l1937:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp1939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1939.value) {
        {
            panda$core$String** $tmp1941 = ((panda$core$String**) ((char*) $match$434_91304->$data + 16));
            label1940 = *$tmp1941;
            panda$collections$ImmutableArray** $tmp1943 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91304->$data + 24));
            statements1942 = *$tmp1943;
            int $tmp1946;
            {
                panda$core$MutableString* $tmp1950 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1950);
                $tmp1949 = $tmp1950;
                $tmp1948 = $tmp1949;
                result1947 = $tmp1948;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1948));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1949));
                if (((panda$core$Bit) { label1940 != NULL }).value) {
                {
                    panda$core$String* $tmp1953 = panda$core$String$convert$R$panda$core$String(label1940);
                    $tmp1952 = $tmp1953;
                    panda$core$String* $tmp1955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1952, &$s1954);
                    $tmp1951 = $tmp1955;
                    panda$core$MutableString$append$panda$core$String(result1947, $tmp1951);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1951));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1952));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1947, &$s1956);
                {
                    int $tmp1959;
                    {
                        ITable* $tmp1963 = ((panda$collections$Iterable*) statements1942)->$class->itable;
                        while ($tmp1963->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1963 = $tmp1963->next;
                        }
                        $fn1965 $tmp1964 = $tmp1963->methods[0];
                        panda$collections$Iterator* $tmp1966 = $tmp1964(((panda$collections$Iterable*) statements1942));
                        $tmp1962 = $tmp1966;
                        $tmp1961 = $tmp1962;
                        Iter$538$171960 = $tmp1961;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1961));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1962));
                        $l1967:;
                        ITable* $tmp1970 = Iter$538$171960->$class->itable;
                        while ($tmp1970->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1970 = $tmp1970->next;
                        }
                        $fn1972 $tmp1971 = $tmp1970->methods[0];
                        panda$core$Bit $tmp1973 = $tmp1971(Iter$538$171960);
                        panda$core$Bit $tmp1974 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1973);
                        bool $tmp1969 = $tmp1974.value;
                        if (!$tmp1969) goto $l1968;
                        {
                            int $tmp1977;
                            {
                                ITable* $tmp1981 = Iter$538$171960->$class->itable;
                                while ($tmp1981->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1981 = $tmp1981->next;
                                }
                                $fn1983 $tmp1982 = $tmp1981->methods[1];
                                panda$core$Object* $tmp1984 = $tmp1982(Iter$538$171960);
                                $tmp1980 = $tmp1984;
                                $tmp1979 = ((org$pandalanguage$pandac$IRNode*) $tmp1980);
                                s1978 = $tmp1979;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1979));
                                panda$core$Panda$unref$panda$core$Object($tmp1980);
                                panda$core$String* $tmp1987 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1978), &$s1986);
                                $tmp1985 = $tmp1987;
                                panda$core$MutableString$append$panda$core$String(result1947, $tmp1985);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1985));
                            }
                            $tmp1977 = -1;
                            goto $l1975;
                            $l1975:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1978));
                            s1978 = NULL;
                            switch ($tmp1977) {
                                case -1: goto $l1988;
                            }
                            $l1988:;
                        }
                        goto $l1967;
                        $l1968:;
                    }
                    $tmp1959 = -1;
                    goto $l1957;
                    $l1957:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$538$171960));
                    Iter$538$171960 = NULL;
                    switch ($tmp1959) {
                        case -1: goto $l1989;
                    }
                    $l1989:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1990, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1947, $tmp1990);
                panda$core$String* $tmp1993 = panda$core$MutableString$finish$R$panda$core$String(result1947);
                $tmp1992 = $tmp1993;
                $tmp1991 = $tmp1992;
                $returnValue1311 = $tmp1991;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1991));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1992));
                $tmp1946 = 0;
                goto $l1944;
                $l1994:;
                $tmp1303 = 28;
                goto $l1301;
                $l1995:;
                return $returnValue1311;
            }
            $l1944:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1947));
            result1947 = NULL;
            switch ($tmp1946) {
                case 0: goto $l1994;
            }
            $l1997:;
        }
        }
        else {
        panda$core$Bit $tmp1998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1998.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2000 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 16));
            value1999 = *$tmp2000;
            panda$collections$ImmutableArray** $tmp2002 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91304->$data + 24));
            whens2001 = *$tmp2002;
            panda$collections$ImmutableArray** $tmp2004 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91304->$data + 32));
            other2003 = *$tmp2004;
            int $tmp2007;
            {
                panda$core$MutableString* $tmp2011 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp2015 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2014, ((panda$core$Object*) value1999));
                $tmp2013 = $tmp2015;
                panda$core$String* $tmp2017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2013, &$s2016);
                $tmp2012 = $tmp2017;
                panda$core$MutableString$init$panda$core$String($tmp2011, $tmp2012);
                $tmp2010 = $tmp2011;
                $tmp2009 = $tmp2010;
                result2008 = $tmp2009;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2009));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2010));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2012));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2013));
                {
                    int $tmp2020;
                    {
                        ITable* $tmp2024 = ((panda$collections$Iterable*) whens2001)->$class->itable;
                        while ($tmp2024->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2024 = $tmp2024->next;
                        }
                        $fn2026 $tmp2025 = $tmp2024->methods[0];
                        panda$collections$Iterator* $tmp2027 = $tmp2025(((panda$collections$Iterable*) whens2001));
                        $tmp2023 = $tmp2027;
                        $tmp2022 = $tmp2023;
                        Iter$545$172021 = $tmp2022;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2022));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2023));
                        $l2028:;
                        ITable* $tmp2031 = Iter$545$172021->$class->itable;
                        while ($tmp2031->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2031 = $tmp2031->next;
                        }
                        $fn2033 $tmp2032 = $tmp2031->methods[0];
                        panda$core$Bit $tmp2034 = $tmp2032(Iter$545$172021);
                        panda$core$Bit $tmp2035 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2034);
                        bool $tmp2030 = $tmp2035.value;
                        if (!$tmp2030) goto $l2029;
                        {
                            int $tmp2038;
                            {
                                ITable* $tmp2042 = Iter$545$172021->$class->itable;
                                while ($tmp2042->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2042 = $tmp2042->next;
                                }
                                $fn2044 $tmp2043 = $tmp2042->methods[1];
                                panda$core$Object* $tmp2045 = $tmp2043(Iter$545$172021);
                                $tmp2041 = $tmp2045;
                                $tmp2040 = ((org$pandalanguage$pandac$IRNode*) $tmp2041);
                                w2039 = $tmp2040;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2040));
                                panda$core$Panda$unref$panda$core$Object($tmp2041);
                                panda$core$String* $tmp2048 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w2039), &$s2047);
                                $tmp2046 = $tmp2048;
                                panda$core$MutableString$append$panda$core$String(result2008, $tmp2046);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2046));
                            }
                            $tmp2038 = -1;
                            goto $l2036;
                            $l2036:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w2039));
                            w2039 = NULL;
                            switch ($tmp2038) {
                                case -1: goto $l2049;
                            }
                            $l2049:;
                        }
                        goto $l2028;
                        $l2029:;
                    }
                    $tmp2020 = -1;
                    goto $l2018;
                    $l2018:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$545$172021));
                    Iter$545$172021 = NULL;
                    switch ($tmp2020) {
                        case -1: goto $l2050;
                    }
                    $l2050:;
                }
                if (((panda$core$Bit) { other2003 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2008, &$s2051);
                    {
                        int $tmp2054;
                        {
                            ITable* $tmp2058 = ((panda$collections$Iterable*) other2003)->$class->itable;
                            while ($tmp2058->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp2058 = $tmp2058->next;
                            }
                            $fn2060 $tmp2059 = $tmp2058->methods[0];
                            panda$collections$Iterator* $tmp2061 = $tmp2059(((panda$collections$Iterable*) other2003));
                            $tmp2057 = $tmp2061;
                            $tmp2056 = $tmp2057;
                            Iter$550$212055 = $tmp2056;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2056));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2057));
                            $l2062:;
                            ITable* $tmp2065 = Iter$550$212055->$class->itable;
                            while ($tmp2065->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2065 = $tmp2065->next;
                            }
                            $fn2067 $tmp2066 = $tmp2065->methods[0];
                            panda$core$Bit $tmp2068 = $tmp2066(Iter$550$212055);
                            panda$core$Bit $tmp2069 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2068);
                            bool $tmp2064 = $tmp2069.value;
                            if (!$tmp2064) goto $l2063;
                            {
                                int $tmp2072;
                                {
                                    ITable* $tmp2076 = Iter$550$212055->$class->itable;
                                    while ($tmp2076->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp2076 = $tmp2076->next;
                                    }
                                    $fn2078 $tmp2077 = $tmp2076->methods[1];
                                    panda$core$Object* $tmp2079 = $tmp2077(Iter$550$212055);
                                    $tmp2075 = $tmp2079;
                                    $tmp2074 = ((org$pandalanguage$pandac$IRNode*) $tmp2075);
                                    s2073 = $tmp2074;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2074));
                                    panda$core$Panda$unref$panda$core$Object($tmp2075);
                                    panda$core$String* $tmp2082 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2073), &$s2081);
                                    $tmp2080 = $tmp2082;
                                    panda$core$MutableString$append$panda$core$String(result2008, $tmp2080);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2080));
                                }
                                $tmp2072 = -1;
                                goto $l2070;
                                $l2070:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2073));
                                s2073 = NULL;
                                switch ($tmp2072) {
                                    case -1: goto $l2083;
                                }
                                $l2083:;
                            }
                            goto $l2062;
                            $l2063:;
                        }
                        $tmp2054 = -1;
                        goto $l2052;
                        $l2052:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$550$212055));
                        Iter$550$212055 = NULL;
                        switch ($tmp2054) {
                            case -1: goto $l2084;
                        }
                        $l2084:;
                    }
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2085, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2008, $tmp2085);
                panda$core$String* $tmp2088 = panda$core$MutableString$finish$R$panda$core$String(result2008);
                $tmp2087 = $tmp2088;
                $tmp2086 = $tmp2087;
                $returnValue1311 = $tmp2086;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2086));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2087));
                $tmp2007 = 0;
                goto $l2005;
                $l2089:;
                $tmp1303 = 29;
                goto $l1301;
                $l2090:;
                return $returnValue1311;
            }
            $l2005:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2008));
            result2008 = NULL;
            switch ($tmp2007) {
                case 0: goto $l2089;
            }
            $l2092:;
        }
        }
        else {
        panda$core$Bit $tmp2093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp2093.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2095 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 24));
            target2094 = *$tmp2095;
            org$pandalanguage$pandac$MethodRef** $tmp2097 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$434_91304->$data + 32));
            m2096 = *$tmp2097;
            if (((panda$core$Bit) { target2094 != NULL }).value) {
            {
                panda$core$String* $tmp2104 = (($fn2103) target2094->$class->vtable[0])(target2094);
                $tmp2102 = $tmp2104;
                panda$core$String* $tmp2106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2102, &$s2105);
                $tmp2101 = $tmp2106;
                panda$core$String* $tmp2107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2101, ((org$pandalanguage$pandac$Symbol*) m2096->value)->name);
                $tmp2100 = $tmp2107;
                panda$core$String* $tmp2109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2100, &$s2108);
                $tmp2099 = $tmp2109;
                $tmp2098 = $tmp2099;
                $returnValue1311 = $tmp2098;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2098));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2099));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2100));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2101));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2102));
                $tmp1303 = 30;
                goto $l1301;
                $l2110:;
                return $returnValue1311;
            }
            }
            $tmp2112 = ((org$pandalanguage$pandac$Symbol*) m2096->value)->name;
            $returnValue1311 = $tmp2112;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2112));
            $tmp1303 = 31;
            goto $l1301;
            $l2113:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp2115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp2115.value) {
        {
            panda$core$UInt64* $tmp2117 = ((panda$core$UInt64*) ((char*) $match$434_91304->$data + 24));
            value2116 = *$tmp2117;
            panda$core$UInt64$wrapper* $tmp2122;
            $tmp2122 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
            $tmp2122->value = value2116;
            $tmp2121 = ((panda$core$Object*) $tmp2122);
            panda$core$String* $tmp2123 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2120, $tmp2121);
            $tmp2119 = $tmp2123;
            $tmp2118 = $tmp2119;
            $returnValue1311 = $tmp2118;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2118));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2119));
            panda$core$Panda$unref$panda$core$Object($tmp2121);
            $tmp1303 = 32;
            goto $l1301;
            $l2124:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp2126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp2126.value) {
        {
            $tmp2127 = &$s2128;
            $returnValue1311 = $tmp2127;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2127));
            $tmp1303 = 33;
            goto $l1301;
            $l2129:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp2131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp2131.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2133 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$434_91304->$data + 16));
            op2132 = *$tmp2133;
            org$pandalanguage$pandac$IRNode** $tmp2135 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 24));
            base2134 = *$tmp2135;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2142;
            $tmp2142 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp2142->value = op2132;
            $tmp2141 = ((panda$core$Object*) $tmp2142);
            panda$core$String* $tmp2144 = (($fn2143) $tmp2141->$class->vtable[0])($tmp2141);
            $tmp2140 = $tmp2144;
            panda$core$String* $tmp2146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2140, &$s2145);
            $tmp2139 = $tmp2146;
            panda$core$String* $tmp2147 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2139, ((panda$core$Object*) base2134));
            $tmp2138 = $tmp2147;
            panda$core$String* $tmp2149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2138, &$s2148);
            $tmp2137 = $tmp2149;
            $tmp2136 = $tmp2137;
            $returnValue1311 = $tmp2136;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2136));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2137));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2138));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2139));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2140));
            panda$core$Panda$unref$panda$core$Object($tmp2141);
            $tmp1303 = 34;
            goto $l1301;
            $l2150:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp2152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2152.value) {
        {
            panda$core$String** $tmp2154 = ((panda$core$String**) ((char*) $match$434_91304->$data + 16));
            label2153 = *$tmp2154;
            org$pandalanguage$pandac$IRNode** $tmp2156 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 24));
            target2155 = *$tmp2156;
            org$pandalanguage$pandac$IRNode** $tmp2158 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 32));
            list2157 = *$tmp2158;
            panda$collections$ImmutableArray** $tmp2160 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91304->$data + 40));
            statements2159 = *$tmp2160;
            int $tmp2163;
            {
                panda$core$MutableString* $tmp2167 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2167);
                $tmp2166 = $tmp2167;
                $tmp2165 = $tmp2166;
                result2164 = $tmp2165;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2165));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2166));
                if (((panda$core$Bit) { label2153 != NULL }).value) {
                {
                    panda$core$String* $tmp2170 = panda$core$String$convert$R$panda$core$String(label2153);
                    $tmp2169 = $tmp2170;
                    panda$core$String* $tmp2172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2169, &$s2171);
                    $tmp2168 = $tmp2172;
                    panda$core$MutableString$append$panda$core$String(result2164, $tmp2168);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2168));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2169));
                }
                }
                panda$core$String* $tmp2178 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2177, ((panda$core$Object*) target2155));
                $tmp2176 = $tmp2178;
                panda$core$String* $tmp2180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2176, &$s2179);
                $tmp2175 = $tmp2180;
                panda$core$String* $tmp2181 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2175, ((panda$core$Object*) list2157));
                $tmp2174 = $tmp2181;
                panda$core$String* $tmp2183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2174, &$s2182);
                $tmp2173 = $tmp2183;
                panda$core$MutableString$append$panda$core$String(result2164, $tmp2173);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2173));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2174));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2175));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2176));
                {
                    int $tmp2186;
                    {
                        ITable* $tmp2190 = ((panda$collections$Iterable*) statements2159)->$class->itable;
                        while ($tmp2190->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2190 = $tmp2190->next;
                        }
                        $fn2192 $tmp2191 = $tmp2190->methods[0];
                        panda$collections$Iterator* $tmp2193 = $tmp2191(((panda$collections$Iterable*) statements2159));
                        $tmp2189 = $tmp2193;
                        $tmp2188 = $tmp2189;
                        Iter$573$172187 = $tmp2188;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2188));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2189));
                        $l2194:;
                        ITable* $tmp2197 = Iter$573$172187->$class->itable;
                        while ($tmp2197->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2197 = $tmp2197->next;
                        }
                        $fn2199 $tmp2198 = $tmp2197->methods[0];
                        panda$core$Bit $tmp2200 = $tmp2198(Iter$573$172187);
                        panda$core$Bit $tmp2201 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2200);
                        bool $tmp2196 = $tmp2201.value;
                        if (!$tmp2196) goto $l2195;
                        {
                            int $tmp2204;
                            {
                                ITable* $tmp2208 = Iter$573$172187->$class->itable;
                                while ($tmp2208->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2208 = $tmp2208->next;
                                }
                                $fn2210 $tmp2209 = $tmp2208->methods[1];
                                panda$core$Object* $tmp2211 = $tmp2209(Iter$573$172187);
                                $tmp2207 = $tmp2211;
                                $tmp2206 = ((org$pandalanguage$pandac$IRNode*) $tmp2207);
                                s2205 = $tmp2206;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2206));
                                panda$core$Panda$unref$panda$core$Object($tmp2207);
                                panda$core$String* $tmp2214 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2205), &$s2213);
                                $tmp2212 = $tmp2214;
                                panda$core$MutableString$append$panda$core$String(result2164, $tmp2212);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2212));
                            }
                            $tmp2204 = -1;
                            goto $l2202;
                            $l2202:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2205));
                            s2205 = NULL;
                            switch ($tmp2204) {
                                case -1: goto $l2215;
                            }
                            $l2215:;
                        }
                        goto $l2194;
                        $l2195:;
                    }
                    $tmp2186 = -1;
                    goto $l2184;
                    $l2184:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$573$172187));
                    Iter$573$172187 = NULL;
                    switch ($tmp2186) {
                        case -1: goto $l2216;
                    }
                    $l2216:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2217, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2164, $tmp2217);
                panda$core$String* $tmp2220 = panda$core$MutableString$finish$R$panda$core$String(result2164);
                $tmp2219 = $tmp2220;
                $tmp2218 = $tmp2219;
                $returnValue1311 = $tmp2218;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2218));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2219));
                $tmp2163 = 0;
                goto $l2161;
                $l2221:;
                $tmp1303 = 35;
                goto $l1301;
                $l2222:;
                return $returnValue1311;
            }
            $l2161:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2164));
            result2164 = NULL;
            switch ($tmp2163) {
                case 0: goto $l2221;
            }
            $l2224:;
        }
        }
        else {
        panda$core$Bit $tmp2225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2225.value) {
        {
            panda$core$Real64* $tmp2227 = ((panda$core$Real64*) ((char*) $match$434_91304->$data + 24));
            value2226 = *$tmp2227;
            panda$core$String* $tmp2230 = panda$core$Real64$convert$R$panda$core$String(value2226);
            $tmp2229 = $tmp2230;
            $tmp2228 = $tmp2229;
            $returnValue1311 = $tmp2228;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2228));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2229));
            $tmp1303 = 36;
            goto $l1301;
            $l2231:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp2233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2233.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2235 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 16));
            value2234 = *$tmp2235;
            if (((panda$core$Bit) { value2234 != NULL }).value) {
            {
                panda$core$String* $tmp2240 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2239, ((panda$core$Object*) value2234));
                $tmp2238 = $tmp2240;
                panda$core$String* $tmp2242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2238, &$s2241);
                $tmp2237 = $tmp2242;
                $tmp2236 = $tmp2237;
                $returnValue1311 = $tmp2236;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2236));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2237));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2238));
                $tmp1303 = 37;
                goto $l1301;
                $l2243:;
                return $returnValue1311;
            }
            }
            $tmp2245 = &$s2246;
            $returnValue1311 = $tmp2245;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2245));
            $tmp1303 = 38;
            goto $l1301;
            $l2247:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp2249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2249.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2251 = ((org$pandalanguage$pandac$Type**) ((char*) $match$434_91304->$data + 16));
            type2250 = *$tmp2251;
            panda$core$Int64* $tmp2253 = ((panda$core$Int64*) ((char*) $match$434_91304->$data + 24));
            id2252 = *$tmp2253;
            panda$core$Int64$wrapper* $tmp2259;
            $tmp2259 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2259->value = id2252;
            $tmp2258 = ((panda$core$Object*) $tmp2259);
            panda$core$String* $tmp2260 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2257, $tmp2258);
            $tmp2256 = $tmp2260;
            panda$core$String* $tmp2262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2256, &$s2261);
            $tmp2255 = $tmp2262;
            $tmp2254 = $tmp2255;
            $returnValue1311 = $tmp2254;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2254));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2255));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2256));
            panda$core$Panda$unref$panda$core$Object($tmp2258);
            $tmp1303 = 39;
            goto $l1301;
            $l2263:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp2265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp2265.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2267 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 0));
            base2266 = *$tmp2267;
            panda$core$Int64* $tmp2269 = ((panda$core$Int64*) ((char*) $match$434_91304->$data + 8));
            id2268 = *$tmp2269;
            panda$core$Int64$wrapper* $tmp2277;
            $tmp2277 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2277->value = id2268;
            $tmp2276 = ((panda$core$Object*) $tmp2277);
            panda$core$String* $tmp2278 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2275, $tmp2276);
            $tmp2274 = $tmp2278;
            panda$core$String* $tmp2280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2274, &$s2279);
            $tmp2273 = $tmp2280;
            panda$core$String* $tmp2281 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2273, ((panda$core$Object*) base2266));
            $tmp2272 = $tmp2281;
            panda$core$String* $tmp2283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2272, &$s2282);
            $tmp2271 = $tmp2283;
            $tmp2270 = $tmp2271;
            $returnValue1311 = $tmp2270;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2270));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2271));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2272));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2273));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2274));
            panda$core$Panda$unref$panda$core$Object($tmp2276);
            $tmp1303 = 40;
            goto $l1301;
            $l2284:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp2286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp2286.value) {
        {
            $tmp2287 = &$s2288;
            $returnValue1311 = $tmp2287;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2287));
            $tmp1303 = 41;
            goto $l1301;
            $l2289:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp2291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2291.value) {
        {
            panda$core$String** $tmp2293 = ((panda$core$String**) ((char*) $match$434_91304->$data + 16));
            str2292 = *$tmp2293;
            panda$core$String* $tmp2297 = panda$core$String$format$panda$core$String$R$panda$core$String(str2292, &$s2296);
            $tmp2295 = $tmp2297;
            $tmp2294 = $tmp2295;
            $returnValue1311 = $tmp2294;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2294));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2295));
            $tmp1303 = 42;
            goto $l1301;
            $l2298:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp2300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp2300.value) {
        {
            $tmp2301 = &$s2302;
            $returnValue1311 = $tmp2301;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2301));
            $tmp1303 = 43;
            goto $l1301;
            $l2303:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp2305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp2305.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2307 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 16));
            test2306 = *$tmp2307;
            org$pandalanguage$pandac$IRNode** $tmp2309 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 24));
            ifTrue2308 = *$tmp2309;
            org$pandalanguage$pandac$IRNode** $tmp2311 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 32));
            ifFalse2310 = *$tmp2311;
            panda$core$String* $tmp2320 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2319, ((panda$core$Object*) test2306));
            $tmp2318 = $tmp2320;
            panda$core$String* $tmp2322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2318, &$s2321);
            $tmp2317 = $tmp2322;
            panda$core$String* $tmp2323 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2317, ((panda$core$Object*) ifTrue2308));
            $tmp2316 = $tmp2323;
            panda$core$String* $tmp2325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2316, &$s2324);
            $tmp2315 = $tmp2325;
            panda$core$String* $tmp2326 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2315, ((panda$core$Object*) ifFalse2310));
            $tmp2314 = $tmp2326;
            panda$core$String* $tmp2328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2314, &$s2327);
            $tmp2313 = $tmp2328;
            $tmp2312 = $tmp2313;
            $returnValue1311 = $tmp2312;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2312));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2313));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2314));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2315));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2316));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2317));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2318));
            $tmp1303 = 44;
            goto $l1301;
            $l2329:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp2331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp2331.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2333 = ((org$pandalanguage$pandac$Type**) ((char*) $match$434_91304->$data + 16));
            type2332 = *$tmp2333;
            panda$core$String* $tmp2336 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type2332);
            $tmp2335 = $tmp2336;
            $tmp2334 = $tmp2335;
            $returnValue1311 = $tmp2334;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2334));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2335));
            $tmp1303 = 45;
            goto $l1301;
            $l2337:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp2339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp2339.value) {
        {
            panda$core$String** $tmp2341 = ((panda$core$String**) ((char*) $match$434_91304->$data + 16));
            name2340 = *$tmp2341;
            $tmp2342 = name2340;
            $returnValue1311 = $tmp2342;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2342));
            $tmp1303 = 46;
            goto $l1301;
            $l2343:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp2345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp2345.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2347 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 24));
            base2346 = *$tmp2347;
            panda$collections$ImmutableArray** $tmp2349 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91304->$data + 32));
            args2348 = *$tmp2349;
            panda$core$String* $tmp2356 = (($fn2355) base2346->$class->vtable[0])(base2346);
            $tmp2354 = $tmp2356;
            panda$core$String* $tmp2358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2354, &$s2357);
            $tmp2353 = $tmp2358;
            ITable* $tmp2360 = ((panda$collections$ListView*) args2348)->$class->itable;
            while ($tmp2360->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2360 = $tmp2360->next;
            }
            $fn2362 $tmp2361 = $tmp2360->methods[4];
            panda$core$String* $tmp2363 = $tmp2361(((panda$collections$ListView*) args2348));
            $tmp2359 = $tmp2363;
            panda$core$String* $tmp2364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2353, $tmp2359);
            $tmp2352 = $tmp2364;
            panda$core$String* $tmp2366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2352, &$s2365);
            $tmp2351 = $tmp2366;
            $tmp2350 = $tmp2351;
            $returnValue1311 = $tmp2350;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2350));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2351));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2352));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2359));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2353));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2354));
            $tmp1303 = 47;
            goto $l1301;
            $l2367:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp2369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp2369.value) {
        {
            panda$collections$ImmutableArray** $tmp2371 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91304->$data + 16));
            params2370 = *$tmp2371;
            org$pandalanguage$pandac$ASTNode** $tmp2373 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$434_91304->$data + 24));
            body2372 = *$tmp2373;
            ITable* $tmp2381 = ((panda$collections$ListView*) params2370)->$class->itable;
            while ($tmp2381->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2381 = $tmp2381->next;
            }
            $fn2383 $tmp2382 = $tmp2381->methods[4];
            panda$core$String* $tmp2384 = $tmp2382(((panda$collections$ListView*) params2370));
            $tmp2380 = $tmp2384;
            panda$core$String* $tmp2385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2379, $tmp2380);
            $tmp2378 = $tmp2385;
            panda$core$String* $tmp2387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2378, &$s2386);
            $tmp2377 = $tmp2387;
            panda$core$String* $tmp2388 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2377, ((panda$core$Object*) body2372));
            $tmp2376 = $tmp2388;
            panda$core$String* $tmp2390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2376, &$s2389);
            $tmp2375 = $tmp2390;
            $tmp2374 = $tmp2375;
            $returnValue1311 = $tmp2374;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2374));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2375));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2376));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2377));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2378));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2380));
            $tmp1303 = 48;
            goto $l1301;
            $l2391:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp2393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2393.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2395 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 24));
            target2394 = *$tmp2395;
            panda$collections$ImmutableArray** $tmp2397 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91304->$data + 32));
            methods2396 = *$tmp2397;
            panda$collections$ImmutableArray** $tmp2399 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91304->$data + 40));
            args2398 = *$tmp2399;
            if (((panda$core$Bit) { target2394 != NULL }).value) {
            {
                panda$core$String* $tmp2408 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2407, ((panda$core$Object*) target2394));
                $tmp2406 = $tmp2408;
                panda$core$String* $tmp2410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2406, &$s2409);
                $tmp2405 = $tmp2410;
                panda$core$Object* $tmp2412 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2396, ((panda$core$Int64) { 0 }));
                $tmp2411 = $tmp2412;
                panda$core$String* $tmp2413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2405, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2411)->value)->name);
                $tmp2404 = $tmp2413;
                panda$core$String* $tmp2415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2404, &$s2414);
                $tmp2403 = $tmp2415;
                ITable* $tmp2417 = ((panda$collections$ListView*) args2398)->$class->itable;
                while ($tmp2417->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2417 = $tmp2417->next;
                }
                $fn2419 $tmp2418 = $tmp2417->methods[4];
                panda$core$String* $tmp2420 = $tmp2418(((panda$collections$ListView*) args2398));
                $tmp2416 = $tmp2420;
                panda$core$String* $tmp2421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2403, $tmp2416);
                $tmp2402 = $tmp2421;
                panda$core$String* $tmp2423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2402, &$s2422);
                $tmp2401 = $tmp2423;
                $tmp2400 = $tmp2401;
                $returnValue1311 = $tmp2400;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2400));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2401));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2402));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2416));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2403));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2404));
                panda$core$Panda$unref$panda$core$Object($tmp2411);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2405));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2406));
                $tmp1303 = 49;
                goto $l1301;
                $l2424:;
                return $returnValue1311;
            }
            }
            else {
            {
                panda$core$Object* $tmp2433 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2396, ((panda$core$Int64) { 0 }));
                $tmp2432 = $tmp2433;
                panda$core$String* $tmp2434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2431, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2432)->value)->name);
                $tmp2430 = $tmp2434;
                panda$core$String* $tmp2436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2430, &$s2435);
                $tmp2429 = $tmp2436;
                ITable* $tmp2438 = ((panda$collections$ListView*) args2398)->$class->itable;
                while ($tmp2438->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2438 = $tmp2438->next;
                }
                $fn2440 $tmp2439 = $tmp2438->methods[4];
                panda$core$String* $tmp2441 = $tmp2439(((panda$collections$ListView*) args2398));
                $tmp2437 = $tmp2441;
                panda$core$String* $tmp2442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2429, $tmp2437);
                $tmp2428 = $tmp2442;
                panda$core$String* $tmp2444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2428, &$s2443);
                $tmp2427 = $tmp2444;
                $tmp2426 = $tmp2427;
                $returnValue1311 = $tmp2426;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2426));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2427));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2428));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2437));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2429));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2430));
                panda$core$Panda$unref$panda$core$Object($tmp2432);
                $tmp1303 = 50;
                goto $l1301;
                $l2445:;
                return $returnValue1311;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp2447.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2449 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 16));
            target2448 = *$tmp2449;
            panda$collections$ImmutableArray** $tmp2451 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91304->$data + 24));
            methods2450 = *$tmp2451;
            if (((panda$core$Bit) { target2448 != NULL }).value) {
            {
                panda$core$String* $tmp2458 = (($fn2457) target2448->$class->vtable[0])(target2448);
                $tmp2456 = $tmp2458;
                panda$core$String* $tmp2460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2456, &$s2459);
                $tmp2455 = $tmp2460;
                panda$core$Object* $tmp2462 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2450, ((panda$core$Int64) { 0 }));
                $tmp2461 = $tmp2462;
                panda$core$String* $tmp2463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2455, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2461)->value)->name);
                $tmp2454 = $tmp2463;
                panda$core$String* $tmp2465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2454, &$s2464);
                $tmp2453 = $tmp2465;
                $tmp2452 = $tmp2453;
                $returnValue1311 = $tmp2452;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2452));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2453));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2454));
                panda$core$Panda$unref$panda$core$Object($tmp2461);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2455));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2456));
                $tmp1303 = 51;
                goto $l1301;
                $l2466:;
                return $returnValue1311;
            }
            }
            else {
            {
                panda$core$Object* $tmp2472 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2450, ((panda$core$Int64) { 0 }));
                $tmp2471 = $tmp2472;
                panda$core$String* $tmp2473 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2471)->value)->name);
                $tmp2470 = $tmp2473;
                panda$core$String* $tmp2475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2470, &$s2474);
                $tmp2469 = $tmp2475;
                $tmp2468 = $tmp2469;
                $returnValue1311 = $tmp2468;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2468));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2469));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2470));
                panda$core$Panda$unref$panda$core$Object($tmp2471);
                $tmp1303 = 52;
                goto $l1301;
                $l2476:;
                return $returnValue1311;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp2478.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2480 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 16));
            start2479 = *$tmp2480;
            org$pandalanguage$pandac$IRNode** $tmp2482 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 24));
            end2481 = *$tmp2482;
            panda$core$Bit* $tmp2484 = ((panda$core$Bit*) ((char*) $match$434_91304->$data + 32));
            inclusive2483 = *$tmp2484;
            org$pandalanguage$pandac$IRNode** $tmp2486 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 33));
            step2485 = *$tmp2486;
            int $tmp2489;
            {
                panda$core$MutableString* $tmp2493 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2493);
                $tmp2492 = $tmp2493;
                $tmp2491 = $tmp2492;
                result2490 = $tmp2491;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2491));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2492));
                if (((panda$core$Bit) { start2479 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2490, ((panda$core$Object*) start2479));
                }
                }
                if (inclusive2483.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2490, &$s2494);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result2490, &$s2495);
                }
                }
                if (((panda$core$Bit) { end2481 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2490, ((panda$core$Object*) end2481));
                }
                }
                if (((panda$core$Bit) { step2485 != NULL }).value) {
                {
                    panda$core$String* $tmp2499 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2498, ((panda$core$Object*) step2485));
                    $tmp2497 = $tmp2499;
                    panda$core$String* $tmp2501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2497, &$s2500);
                    $tmp2496 = $tmp2501;
                    panda$core$MutableString$append$panda$core$String(result2490, $tmp2496);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2496));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2497));
                }
                }
                panda$core$String* $tmp2504 = panda$core$MutableString$finish$R$panda$core$String(result2490);
                $tmp2503 = $tmp2504;
                $tmp2502 = $tmp2503;
                $returnValue1311 = $tmp2502;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2502));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2503));
                $tmp2489 = 0;
                goto $l2487;
                $l2505:;
                $tmp1303 = 53;
                goto $l1301;
                $l2506:;
                return $returnValue1311;
            }
            $l2487:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2490));
            result2490 = NULL;
            switch ($tmp2489) {
                case 0: goto $l2505;
            }
            $l2508:;
        }
        }
        else {
        panda$core$Bit $tmp2509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp2509.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp2511 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$434_91304->$data + 16));
            kind2510 = *$tmp2511;
            panda$collections$ImmutableArray** $tmp2513 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91304->$data + 24));
            decls2512 = *$tmp2513;
            int $tmp2516;
            {
                panda$core$MutableString* $tmp2520 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2520);
                $tmp2519 = $tmp2520;
                $tmp2518 = $tmp2519;
                result2517 = $tmp2518;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2518));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2519));
                {
                    $match$639_172521 = kind2510;
                    panda$core$Bit $tmp2522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$639_172521.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp2522.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2517, &$s2523);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$639_172521.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp2524.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2517, &$s2525);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$639_172521.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp2526.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2517, &$s2527);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$639_172521.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp2528.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2517, &$s2529);
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp2531 = ((panda$collections$ListView*) decls2512)->$class->itable;
                while ($tmp2531->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2531 = $tmp2531->next;
                }
                $fn2533 $tmp2532 = $tmp2531->methods[4];
                panda$core$String* $tmp2534 = $tmp2532(((panda$collections$ListView*) decls2512));
                $tmp2530 = $tmp2534;
                panda$core$MutableString$append$panda$core$String(result2517, $tmp2530);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2530));
                panda$core$String* $tmp2537 = panda$core$MutableString$finish$R$panda$core$String(result2517);
                $tmp2536 = $tmp2537;
                $tmp2535 = $tmp2536;
                $returnValue1311 = $tmp2535;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2535));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2536));
                $tmp2516 = 0;
                goto $l2514;
                $l2538:;
                $tmp1303 = 54;
                goto $l1301;
                $l2539:;
                return $returnValue1311;
            }
            $l2514:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2517));
            result2517 = NULL;
            switch ($tmp2516) {
                case 0: goto $l2538;
            }
            $l2541:;
        }
        }
        else {
        panda$core$Bit $tmp2542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp2542.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2544 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$434_91304->$data + 16));
            variable2543 = *$tmp2544;
            $tmp2545 = ((org$pandalanguage$pandac$Symbol*) variable2543)->name;
            $returnValue1311 = $tmp2545;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2545));
            $tmp1303 = 55;
            goto $l1301;
            $l2546:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp2548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp2548.value) {
        {
            panda$collections$ImmutableArray** $tmp2550 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91304->$data + 16));
            tests2549 = *$tmp2550;
            panda$collections$ImmutableArray** $tmp2552 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91304->$data + 24));
            statements2551 = *$tmp2552;
            ITable* $tmp2560 = ((panda$collections$ListView*) tests2549)->$class->itable;
            while ($tmp2560->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2560 = $tmp2560->next;
            }
            $fn2562 $tmp2561 = $tmp2560->methods[4];
            panda$core$String* $tmp2563 = $tmp2561(((panda$collections$ListView*) tests2549));
            $tmp2559 = $tmp2563;
            panda$core$String* $tmp2564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2558, $tmp2559);
            $tmp2557 = $tmp2564;
            panda$core$String* $tmp2566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2557, &$s2565);
            $tmp2556 = $tmp2566;
            ITable* $tmp2569 = ((panda$collections$ListView*) statements2551)->$class->itable;
            while ($tmp2569->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2569 = $tmp2569->next;
            }
            $fn2571 $tmp2570 = $tmp2569->methods[5];
            panda$core$String* $tmp2572 = $tmp2570(((panda$collections$ListView*) statements2551), &$s2568);
            $tmp2567 = $tmp2572;
            panda$core$String* $tmp2573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2556, $tmp2567);
            $tmp2555 = $tmp2573;
            panda$core$String* $tmp2575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2555, &$s2574);
            $tmp2554 = $tmp2575;
            $tmp2553 = $tmp2554;
            $returnValue1311 = $tmp2553;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2553));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2554));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2555));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2567));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2556));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2557));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2559));
            $tmp1303 = 56;
            goto $l1301;
            $l2576:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp2578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp2578.value) {
        {
            panda$core$String** $tmp2580 = ((panda$core$String**) ((char*) $match$434_91304->$data + 16));
            label2579 = *$tmp2580;
            org$pandalanguage$pandac$IRNode** $tmp2582 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 24));
            test2581 = *$tmp2582;
            panda$collections$ImmutableArray** $tmp2584 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91304->$data + 32));
            statements2583 = *$tmp2584;
            int $tmp2587;
            {
                panda$core$MutableString* $tmp2591 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2591);
                $tmp2590 = $tmp2591;
                $tmp2589 = $tmp2590;
                result2588 = $tmp2589;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2589));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2590));
                if (((panda$core$Bit) { label2579 != NULL }).value) {
                {
                    panda$core$String* $tmp2594 = panda$core$String$convert$R$panda$core$String(label2579);
                    $tmp2593 = $tmp2594;
                    panda$core$String* $tmp2596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2593, &$s2595);
                    $tmp2592 = $tmp2596;
                    panda$core$MutableString$append$panda$core$String(result2588, $tmp2592);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2592));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2593));
                }
                }
                panda$core$String* $tmp2600 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2599, ((panda$core$Object*) test2581));
                $tmp2598 = $tmp2600;
                panda$core$String* $tmp2602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2598, &$s2601);
                $tmp2597 = $tmp2602;
                panda$core$MutableString$append$panda$core$String(result2588, $tmp2597);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2597));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2598));
                {
                    int $tmp2605;
                    {
                        ITable* $tmp2609 = ((panda$collections$Iterable*) statements2583)->$class->itable;
                        while ($tmp2609->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2609 = $tmp2609->next;
                        }
                        $fn2611 $tmp2610 = $tmp2609->methods[0];
                        panda$collections$Iterator* $tmp2612 = $tmp2610(((panda$collections$Iterable*) statements2583));
                        $tmp2608 = $tmp2612;
                        $tmp2607 = $tmp2608;
                        Iter$657$172606 = $tmp2607;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2607));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2608));
                        $l2613:;
                        ITable* $tmp2616 = Iter$657$172606->$class->itable;
                        while ($tmp2616->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2616 = $tmp2616->next;
                        }
                        $fn2618 $tmp2617 = $tmp2616->methods[0];
                        panda$core$Bit $tmp2619 = $tmp2617(Iter$657$172606);
                        panda$core$Bit $tmp2620 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2619);
                        bool $tmp2615 = $tmp2620.value;
                        if (!$tmp2615) goto $l2614;
                        {
                            int $tmp2623;
                            {
                                ITable* $tmp2627 = Iter$657$172606->$class->itable;
                                while ($tmp2627->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2627 = $tmp2627->next;
                                }
                                $fn2629 $tmp2628 = $tmp2627->methods[1];
                                panda$core$Object* $tmp2630 = $tmp2628(Iter$657$172606);
                                $tmp2626 = $tmp2630;
                                $tmp2625 = ((org$pandalanguage$pandac$IRNode*) $tmp2626);
                                s2624 = $tmp2625;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2625));
                                panda$core$Panda$unref$panda$core$Object($tmp2626);
                                panda$core$String* $tmp2633 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2624), &$s2632);
                                $tmp2631 = $tmp2633;
                                panda$core$MutableString$append$panda$core$String(result2588, $tmp2631);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2631));
                            }
                            $tmp2623 = -1;
                            goto $l2621;
                            $l2621:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2624));
                            s2624 = NULL;
                            switch ($tmp2623) {
                                case -1: goto $l2634;
                            }
                            $l2634:;
                        }
                        goto $l2613;
                        $l2614:;
                    }
                    $tmp2605 = -1;
                    goto $l2603;
                    $l2603:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$657$172606));
                    Iter$657$172606 = NULL;
                    switch ($tmp2605) {
                        case -1: goto $l2635;
                    }
                    $l2635:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2636, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2588, $tmp2636);
                panda$core$String* $tmp2639 = panda$core$MutableString$finish$R$panda$core$String(result2588);
                $tmp2638 = $tmp2639;
                $tmp2637 = $tmp2638;
                $returnValue1311 = $tmp2637;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2637));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2638));
                $tmp2587 = 0;
                goto $l2585;
                $l2640:;
                $tmp1303 = 57;
                goto $l1301;
                $l2641:;
                return $returnValue1311;
            }
            $l2585:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2588));
            result2588 = NULL;
            switch ($tmp2587) {
                case 0: goto $l2640;
            }
            $l2643:;
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
    }
    $tmp1303 = -1;
    goto $l1301;
    $l1301:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1305));
    switch ($tmp1303) {
        case 6: goto $l1513;
        case 42: goto $l2298;
        case 7: goto $l1526;
        case 36: goto $l2231;
        case 41: goto $l2289;
        case 40: goto $l2284;
        case 35: goto $l2222;
        case 25: goto $l1913;
        case 45: goto $l2337;
        case 50: goto $l2445;
        case 19: goto $l1709;
        case 10: goto $l1578;
        case 46: goto $l2343;
        case 24: goto $l1904;
        case 32: goto $l2124;
        case 31: goto $l2113;
        case 15: goto $l1668;
        case 14: goto $l1660;
        case 0: goto $l1324;
        case 4: goto $l1374;
        case 26: goto $l1925;
        case -1: goto $l2644;
        case 37: goto $l2243;
        case 47: goto $l2367;
        case 44: goto $l2329;
        case 20: goto $l1774;
        case 21: goto $l1800;
        case 17: goto $l1684;
        case 8: goto $l1530;
        case 11: goto $l1592;
        case 22: goto $l1819;
        case 56: goto $l2576;
        case 55: goto $l2546;
        case 28: goto $l1995;
        case 29: goto $l2090;
        case 54: goto $l2539;
        case 18: goto $l1703;
        case 13: goto $l1628;
        case 57: goto $l2641;
        case 51: goto $l2466;
        case 38: goto $l2247;
        case 23: goto $l1838;
        case 5: goto $l1425;
        case 9: goto $l1553;
        case 1: goto $l1333;
        case 3: goto $l1366;
        case 2: goto $l1338;
        case 30: goto $l2110;
        case 33: goto $l2129;
        case 53: goto $l2506;
        case 34: goto $l2150;
        case 39: goto $l2263;
        case 16: goto $l1680;
        case 27: goto $l1937;
        case 43: goto $l2303;
        case 52: goto $l2476;
        case 48: goto $l2391;
        case 49: goto $l2424;
        case 12: goto $l1600;
    }
    $l2644:;
}
void org$pandalanguage$pandac$IRNode$cleanup(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$5_12651 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2652;
    org$pandalanguage$pandac$Position _f02654;
    org$pandalanguage$pandac$IRNode* _f12656 = NULL;
    org$pandalanguage$pandac$IRNode* _f22658 = NULL;
    org$pandalanguage$pandac$Position _f02661;
    org$pandalanguage$pandac$Type* _f12663 = NULL;
    org$pandalanguage$pandac$Position _f02666;
    org$pandalanguage$pandac$Type* _f12668 = NULL;
    org$pandalanguage$pandac$IRNode* _f22670 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f32672;
    org$pandalanguage$pandac$IRNode* _f42674 = NULL;
    org$pandalanguage$pandac$Position _f02677;
    org$pandalanguage$pandac$Type* _f12679 = NULL;
    panda$core$Bit _f22681;
    org$pandalanguage$pandac$Position _f02684;
    panda$collections$ImmutableArray* _f12686 = NULL;
    org$pandalanguage$pandac$Position _f02689;
    panda$collections$ImmutableArray* _f12691 = NULL;
    panda$collections$ImmutableArray* _f22693 = NULL;
    org$pandalanguage$pandac$Position _f02696;
    panda$core$String* _f12698 = NULL;
    org$pandalanguage$pandac$Position _f02701;
    org$pandalanguage$pandac$Type* _f12703 = NULL;
    org$pandalanguage$pandac$MethodRef* _f22705 = NULL;
    panda$collections$ImmutableArray* _f32707 = NULL;
    org$pandalanguage$pandac$Position _f02710;
    org$pandalanguage$pandac$IRNode* _f12712 = NULL;
    org$pandalanguage$pandac$Type* _f22714 = NULL;
    panda$core$Bit _f32716;
    org$pandalanguage$pandac$Position _f02719;
    org$pandalanguage$pandac$ChoiceEntry* _f12721 = NULL;
    org$pandalanguage$pandac$Position _f02724;
    org$pandalanguage$pandac$IRNode* _f12726 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f22728 = NULL;
    panda$core$Int64 _f32730;
    org$pandalanguage$pandac$Position _f02733;
    org$pandalanguage$pandac$Type* _f12735 = NULL;
    org$pandalanguage$pandac$IRNode* _f22737 = NULL;
    org$pandalanguage$pandac$Position _f02740;
    org$pandalanguage$pandac$Type* _f12742 = NULL;
    org$pandalanguage$pandac$Position _f02745;
    panda$core$String* _f12747 = NULL;
    org$pandalanguage$pandac$IRNode* _f02750 = NULL;
    org$pandalanguage$pandac$IRNode* _f12752 = NULL;
    org$pandalanguage$pandac$Position _f02755;
    panda$core$String* _f12757 = NULL;
    panda$collections$ImmutableArray* _f22759 = NULL;
    org$pandalanguage$pandac$IRNode* _f32761 = NULL;
    org$pandalanguage$pandac$IRNode* _f02764 = NULL;
    panda$collections$ImmutableArray* _f12766 = NULL;
    org$pandalanguage$pandac$IRNode* _f02769 = NULL;
    org$pandalanguage$pandac$IRNode* _f12771 = NULL;
    org$pandalanguage$pandac$Position _f02774;
    org$pandalanguage$pandac$Type* _f12776 = NULL;
    org$pandalanguage$pandac$IRNode* _f22778 = NULL;
    org$pandalanguage$pandac$FieldDecl* _f32780 = NULL;
    org$pandalanguage$pandac$Position _f02783;
    org$pandalanguage$pandac$IRNode* _f12785 = NULL;
    panda$collections$ImmutableArray* _f22787 = NULL;
    org$pandalanguage$pandac$IRNode* _f32789 = NULL;
    org$pandalanguage$pandac$Position _f02792;
    org$pandalanguage$pandac$Type* _f12794 = NULL;
    panda$core$UInt64 _f22796;
    org$pandalanguage$pandac$Position _f02799;
    org$pandalanguage$pandac$IRNode* _f12801 = NULL;
    org$pandalanguage$pandac$Position _f02804;
    org$pandalanguage$pandac$IRNode* _f12806 = NULL;
    org$pandalanguage$pandac$Position _f02809;
    panda$core$String* _f12811 = NULL;
    panda$collections$ImmutableArray* _f22813 = NULL;
    org$pandalanguage$pandac$Position _f02816;
    org$pandalanguage$pandac$IRNode* _f12818 = NULL;
    panda$collections$ImmutableArray* _f22820 = NULL;
    panda$collections$ImmutableArray* _f32822 = NULL;
    org$pandalanguage$pandac$Position _f02825;
    org$pandalanguage$pandac$Type* _f12827 = NULL;
    org$pandalanguage$pandac$IRNode* _f22829 = NULL;
    org$pandalanguage$pandac$MethodRef* _f32831 = NULL;
    org$pandalanguage$pandac$Position _f02834;
    org$pandalanguage$pandac$Type* _f12836 = NULL;
    panda$core$UInt64 _f22838;
    org$pandalanguage$pandac$Position _f02841;
    org$pandalanguage$pandac$Type* _f12843 = NULL;
    org$pandalanguage$pandac$Position _f02846;
    org$pandalanguage$pandac$parser$Token$Kind _f12848;
    org$pandalanguage$pandac$IRNode* _f22850 = NULL;
    org$pandalanguage$pandac$Position _f02853;
    panda$core$String* _f12855 = NULL;
    org$pandalanguage$pandac$IRNode* _f22857 = NULL;
    org$pandalanguage$pandac$IRNode* _f32859 = NULL;
    panda$collections$ImmutableArray* _f42861 = NULL;
    org$pandalanguage$pandac$Position _f02864;
    org$pandalanguage$pandac$Type* _f12866 = NULL;
    panda$core$Real64 _f22868;
    org$pandalanguage$pandac$Position _f02871;
    org$pandalanguage$pandac$IRNode* _f12873 = NULL;
    org$pandalanguage$pandac$Position _f02876;
    org$pandalanguage$pandac$Type* _f12878 = NULL;
    panda$core$Int64 _f22880;
    org$pandalanguage$pandac$IRNode* _f02883 = NULL;
    panda$core$Int64 _f12885;
    org$pandalanguage$pandac$Position _f02888;
    org$pandalanguage$pandac$Type* _f12890 = NULL;
    org$pandalanguage$pandac$Position _f02893;
    panda$core$String* _f12895 = NULL;
    org$pandalanguage$pandac$Position _f02898;
    org$pandalanguage$pandac$Type* _f12900 = NULL;
    org$pandalanguage$pandac$Position _f02903;
    org$pandalanguage$pandac$IRNode* _f12905 = NULL;
    org$pandalanguage$pandac$IRNode* _f22907 = NULL;
    org$pandalanguage$pandac$IRNode* _f32909 = NULL;
    org$pandalanguage$pandac$Position _f02912;
    org$pandalanguage$pandac$Type* _f12914 = NULL;
    org$pandalanguage$pandac$Position _f02917;
    panda$core$String* _f12919 = NULL;
    org$pandalanguage$pandac$Position _f02922;
    org$pandalanguage$pandac$Type* _f12924 = NULL;
    org$pandalanguage$pandac$IRNode* _f22926 = NULL;
    panda$collections$ImmutableArray* _f32928 = NULL;
    org$pandalanguage$pandac$Position _f02931;
    panda$collections$ImmutableArray* _f12933 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22935 = NULL;
    org$pandalanguage$pandac$Position _f02938;
    org$pandalanguage$pandac$Type* _f12940 = NULL;
    org$pandalanguage$pandac$IRNode* _f22942 = NULL;
    panda$collections$ImmutableArray* _f32944 = NULL;
    panda$collections$ImmutableArray* _f42946 = NULL;
    org$pandalanguage$pandac$Position _f02949;
    org$pandalanguage$pandac$IRNode* _f12951 = NULL;
    panda$collections$ImmutableArray* _f22953 = NULL;
    org$pandalanguage$pandac$Position _f02956;
    org$pandalanguage$pandac$IRNode* _f12958 = NULL;
    org$pandalanguage$pandac$IRNode* _f22960 = NULL;
    panda$core$Bit _f32962;
    org$pandalanguage$pandac$IRNode* _f42964 = NULL;
    org$pandalanguage$pandac$Position _f02967;
    org$pandalanguage$pandac$Variable$Kind _f12969;
    panda$collections$ImmutableArray* _f22971 = NULL;
    org$pandalanguage$pandac$Position _f02974;
    org$pandalanguage$pandac$Variable* _f12976 = NULL;
    org$pandalanguage$pandac$Position _f02979;
    panda$collections$ImmutableArray* _f12981 = NULL;
    panda$collections$ImmutableArray* _f22983 = NULL;
    org$pandalanguage$pandac$Position _f02986;
    panda$core$String* _f12988 = NULL;
    org$pandalanguage$pandac$IRNode* _f22990 = NULL;
    panda$collections$ImmutableArray* _f32992 = NULL;
    int $tmp2647;
    {
        int $tmp2650;
        {
            $tmp2652 = self;
            $match$5_12651 = $tmp2652;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2652));
            panda$core$Bit $tmp2653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp2653.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2655 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02654 = *$tmp2655;
                org$pandalanguage$pandac$IRNode** $tmp2657 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 16));
                _f12656 = *$tmp2657;
                org$pandalanguage$pandac$IRNode** $tmp2659 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 24));
                _f22658 = *$tmp2659;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12656));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22658));
            }
            }
            else {
            panda$core$Bit $tmp2660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp2660.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2662 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02661 = *$tmp2662;
                org$pandalanguage$pandac$Type** $tmp2664 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12651->$data + 16));
                _f12663 = *$tmp2664;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12663));
            }
            }
            else {
            panda$core$Bit $tmp2665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp2665.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2667 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02666 = *$tmp2667;
                org$pandalanguage$pandac$Type** $tmp2669 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12651->$data + 16));
                _f12668 = *$tmp2669;
                org$pandalanguage$pandac$IRNode** $tmp2671 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 24));
                _f22670 = *$tmp2671;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2673 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12651->$data + 32));
                _f32672 = *$tmp2673;
                org$pandalanguage$pandac$IRNode** $tmp2675 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 40));
                _f42674 = *$tmp2675;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12668));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22670));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42674));
            }
            }
            else {
            panda$core$Bit $tmp2676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp2676.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2678 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02677 = *$tmp2678;
                org$pandalanguage$pandac$Type** $tmp2680 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12651->$data + 16));
                _f12679 = *$tmp2680;
                panda$core$Bit* $tmp2682 = ((panda$core$Bit*) ((char*) $match$5_12651->$data + 24));
                _f22681 = *$tmp2682;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12679));
            }
            }
            else {
            panda$core$Bit $tmp2683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp2683.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2685 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02684 = *$tmp2685;
                panda$collections$ImmutableArray** $tmp2687 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12651->$data + 16));
                _f12686 = *$tmp2687;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12686));
            }
            }
            else {
            panda$core$Bit $tmp2688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp2688.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2690 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02689 = *$tmp2690;
                panda$collections$ImmutableArray** $tmp2692 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12651->$data + 16));
                _f12691 = *$tmp2692;
                panda$collections$ImmutableArray** $tmp2694 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12651->$data + 24));
                _f22693 = *$tmp2694;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12691));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22693));
            }
            }
            else {
            panda$core$Bit $tmp2695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp2695.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2697 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02696 = *$tmp2697;
                panda$core$String** $tmp2699 = ((panda$core$String**) ((char*) $match$5_12651->$data + 16));
                _f12698 = *$tmp2699;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12698));
            }
            }
            else {
            panda$core$Bit $tmp2700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 7 }));
            if ($tmp2700.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2702 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02701 = *$tmp2702;
                org$pandalanguage$pandac$Type** $tmp2704 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12651->$data + 16));
                _f12703 = *$tmp2704;
                org$pandalanguage$pandac$MethodRef** $tmp2706 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12651->$data + 24));
                _f22705 = *$tmp2706;
                panda$collections$ImmutableArray** $tmp2708 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12651->$data + 32));
                _f32707 = *$tmp2708;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12703));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22705));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32707));
            }
            }
            else {
            panda$core$Bit $tmp2709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp2709.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2711 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02710 = *$tmp2711;
                org$pandalanguage$pandac$IRNode** $tmp2713 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 16));
                _f12712 = *$tmp2713;
                org$pandalanguage$pandac$Type** $tmp2715 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12651->$data + 24));
                _f22714 = *$tmp2715;
                panda$core$Bit* $tmp2717 = ((panda$core$Bit*) ((char*) $match$5_12651->$data + 32));
                _f32716 = *$tmp2717;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12712));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22714));
            }
            }
            else {
            panda$core$Bit $tmp2718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp2718.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2720 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02719 = *$tmp2720;
                org$pandalanguage$pandac$ChoiceEntry** $tmp2722 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12651->$data + 16));
                _f12721 = *$tmp2722;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12721));
            }
            }
            else {
            panda$core$Bit $tmp2723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 10 }));
            if ($tmp2723.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2725 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02724 = *$tmp2725;
                org$pandalanguage$pandac$IRNode** $tmp2727 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 16));
                _f12726 = *$tmp2727;
                org$pandalanguage$pandac$ChoiceEntry** $tmp2729 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12651->$data + 24));
                _f22728 = *$tmp2729;
                panda$core$Int64* $tmp2731 = ((panda$core$Int64*) ((char*) $match$5_12651->$data + 32));
                _f32730 = *$tmp2731;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12726));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22728));
            }
            }
            else {
            panda$core$Bit $tmp2732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp2732.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2734 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02733 = *$tmp2734;
                org$pandalanguage$pandac$Type** $tmp2736 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12651->$data + 16));
                _f12735 = *$tmp2736;
                org$pandalanguage$pandac$IRNode** $tmp2738 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 24));
                _f22737 = *$tmp2738;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12735));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22737));
            }
            }
            else {
            panda$core$Bit $tmp2739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp2739.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2741 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02740 = *$tmp2741;
                org$pandalanguage$pandac$Type** $tmp2743 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12651->$data + 16));
                _f12742 = *$tmp2743;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12742));
            }
            }
            else {
            panda$core$Bit $tmp2744 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp2744.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2746 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02745 = *$tmp2746;
                panda$core$String** $tmp2748 = ((panda$core$String**) ((char*) $match$5_12651->$data + 16));
                _f12747 = *$tmp2748;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12747));
            }
            }
            else {
            panda$core$Bit $tmp2749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp2749.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2751 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 0));
                _f02750 = *$tmp2751;
                org$pandalanguage$pandac$IRNode** $tmp2753 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 8));
                _f12752 = *$tmp2753;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02750));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12752));
            }
            }
            else {
            panda$core$Bit $tmp2754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp2754.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2756 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02755 = *$tmp2756;
                panda$core$String** $tmp2758 = ((panda$core$String**) ((char*) $match$5_12651->$data + 16));
                _f12757 = *$tmp2758;
                panda$collections$ImmutableArray** $tmp2760 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12651->$data + 24));
                _f22759 = *$tmp2760;
                org$pandalanguage$pandac$IRNode** $tmp2762 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 32));
                _f32761 = *$tmp2762;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12757));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22759));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32761));
            }
            }
            else {
            panda$core$Bit $tmp2763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 16 }));
            if ($tmp2763.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2765 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 0));
                _f02764 = *$tmp2765;
                panda$collections$ImmutableArray** $tmp2767 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12651->$data + 8));
                _f12766 = *$tmp2767;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02764));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12766));
            }
            }
            else {
            panda$core$Bit $tmp2768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp2768.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2770 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 0));
                _f02769 = *$tmp2770;
                org$pandalanguage$pandac$IRNode** $tmp2772 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 8));
                _f12771 = *$tmp2772;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02769));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12771));
            }
            }
            else {
            panda$core$Bit $tmp2773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp2773.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2775 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02774 = *$tmp2775;
                org$pandalanguage$pandac$Type** $tmp2777 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12651->$data + 16));
                _f12776 = *$tmp2777;
                org$pandalanguage$pandac$IRNode** $tmp2779 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 24));
                _f22778 = *$tmp2779;
                org$pandalanguage$pandac$FieldDecl** $tmp2781 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$5_12651->$data + 32));
                _f32780 = *$tmp2781;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12776));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22778));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32780));
            }
            }
            else {
            panda$core$Bit $tmp2782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp2782.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2784 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02783 = *$tmp2784;
                org$pandalanguage$pandac$IRNode** $tmp2786 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 16));
                _f12785 = *$tmp2786;
                panda$collections$ImmutableArray** $tmp2788 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12651->$data + 24));
                _f22787 = *$tmp2788;
                org$pandalanguage$pandac$IRNode** $tmp2790 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 32));
                _f32789 = *$tmp2790;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12785));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22787));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32789));
            }
            }
            else {
            panda$core$Bit $tmp2791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 20 }));
            if ($tmp2791.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2793 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02792 = *$tmp2793;
                org$pandalanguage$pandac$Type** $tmp2795 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12651->$data + 16));
                _f12794 = *$tmp2795;
                panda$core$UInt64* $tmp2797 = ((panda$core$UInt64*) ((char*) $match$5_12651->$data + 24));
                _f22796 = *$tmp2797;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12794));
            }
            }
            else {
            panda$core$Bit $tmp2798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 21 }));
            if ($tmp2798.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2800 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02799 = *$tmp2800;
                org$pandalanguage$pandac$IRNode** $tmp2802 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 16));
                _f12801 = *$tmp2802;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12801));
            }
            }
            else {
            panda$core$Bit $tmp2803 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp2803.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2805 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02804 = *$tmp2805;
                org$pandalanguage$pandac$IRNode** $tmp2807 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 16));
                _f12806 = *$tmp2807;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12806));
            }
            }
            else {
            panda$core$Bit $tmp2808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp2808.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2810 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02809 = *$tmp2810;
                panda$core$String** $tmp2812 = ((panda$core$String**) ((char*) $match$5_12651->$data + 16));
                _f12811 = *$tmp2812;
                panda$collections$ImmutableArray** $tmp2814 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12651->$data + 24));
                _f22813 = *$tmp2814;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12811));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22813));
            }
            }
            else {
            panda$core$Bit $tmp2815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp2815.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2817 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02816 = *$tmp2817;
                org$pandalanguage$pandac$IRNode** $tmp2819 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 16));
                _f12818 = *$tmp2819;
                panda$collections$ImmutableArray** $tmp2821 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12651->$data + 24));
                _f22820 = *$tmp2821;
                panda$collections$ImmutableArray** $tmp2823 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12651->$data + 32));
                _f32822 = *$tmp2823;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12818));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22820));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32822));
            }
            }
            else {
            panda$core$Bit $tmp2824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp2824.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2826 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02825 = *$tmp2826;
                org$pandalanguage$pandac$Type** $tmp2828 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12651->$data + 16));
                _f12827 = *$tmp2828;
                org$pandalanguage$pandac$IRNode** $tmp2830 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 24));
                _f22829 = *$tmp2830;
                org$pandalanguage$pandac$MethodRef** $tmp2832 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12651->$data + 32));
                _f32831 = *$tmp2832;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12827));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22829));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32831));
            }
            }
            else {
            panda$core$Bit $tmp2833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp2833.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2835 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02834 = *$tmp2835;
                org$pandalanguage$pandac$Type** $tmp2837 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12651->$data + 16));
                _f12836 = *$tmp2837;
                panda$core$UInt64* $tmp2839 = ((panda$core$UInt64*) ((char*) $match$5_12651->$data + 24));
                _f22838 = *$tmp2839;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12836));
            }
            }
            else {
            panda$core$Bit $tmp2840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 27 }));
            if ($tmp2840.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2842 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02841 = *$tmp2842;
                org$pandalanguage$pandac$Type** $tmp2844 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12651->$data + 16));
                _f12843 = *$tmp2844;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12843));
            }
            }
            else {
            panda$core$Bit $tmp2845 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 28 }));
            if ($tmp2845.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2847 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02846 = *$tmp2847;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2849 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12651->$data + 16));
                _f12848 = *$tmp2849;
                org$pandalanguage$pandac$IRNode** $tmp2851 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 24));
                _f22850 = *$tmp2851;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22850));
            }
            }
            else {
            panda$core$Bit $tmp2852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 29 }));
            if ($tmp2852.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2854 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02853 = *$tmp2854;
                panda$core$String** $tmp2856 = ((panda$core$String**) ((char*) $match$5_12651->$data + 16));
                _f12855 = *$tmp2856;
                org$pandalanguage$pandac$IRNode** $tmp2858 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 24));
                _f22857 = *$tmp2858;
                org$pandalanguage$pandac$IRNode** $tmp2860 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 32));
                _f32859 = *$tmp2860;
                panda$collections$ImmutableArray** $tmp2862 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12651->$data + 40));
                _f42861 = *$tmp2862;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12855));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22857));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32859));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42861));
            }
            }
            else {
            panda$core$Bit $tmp2863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 30 }));
            if ($tmp2863.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2865 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02864 = *$tmp2865;
                org$pandalanguage$pandac$Type** $tmp2867 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12651->$data + 16));
                _f12866 = *$tmp2867;
                panda$core$Real64* $tmp2869 = ((panda$core$Real64*) ((char*) $match$5_12651->$data + 24));
                _f22868 = *$tmp2869;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12866));
            }
            }
            else {
            panda$core$Bit $tmp2870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 31 }));
            if ($tmp2870.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2872 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02871 = *$tmp2872;
                org$pandalanguage$pandac$IRNode** $tmp2874 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 16));
                _f12873 = *$tmp2874;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12873));
            }
            }
            else {
            panda$core$Bit $tmp2875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 32 }));
            if ($tmp2875.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2877 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02876 = *$tmp2877;
                org$pandalanguage$pandac$Type** $tmp2879 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12651->$data + 16));
                _f12878 = *$tmp2879;
                panda$core$Int64* $tmp2881 = ((panda$core$Int64*) ((char*) $match$5_12651->$data + 24));
                _f22880 = *$tmp2881;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12878));
            }
            }
            else {
            panda$core$Bit $tmp2882 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp2882.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2884 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 0));
                _f02883 = *$tmp2884;
                panda$core$Int64* $tmp2886 = ((panda$core$Int64*) ((char*) $match$5_12651->$data + 8));
                _f12885 = *$tmp2886;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02883));
            }
            }
            else {
            panda$core$Bit $tmp2887 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp2887.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2889 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02888 = *$tmp2889;
                org$pandalanguage$pandac$Type** $tmp2891 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12651->$data + 16));
                _f12890 = *$tmp2891;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12890));
            }
            }
            else {
            panda$core$Bit $tmp2892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 35 }));
            if ($tmp2892.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2894 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02893 = *$tmp2894;
                panda$core$String** $tmp2896 = ((panda$core$String**) ((char*) $match$5_12651->$data + 16));
                _f12895 = *$tmp2896;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12895));
            }
            }
            else {
            panda$core$Bit $tmp2897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp2897.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2899 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02898 = *$tmp2899;
                org$pandalanguage$pandac$Type** $tmp2901 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12651->$data + 16));
                _f12900 = *$tmp2901;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12900));
            }
            }
            else {
            panda$core$Bit $tmp2902 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 37 }));
            if ($tmp2902.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2904 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02903 = *$tmp2904;
                org$pandalanguage$pandac$IRNode** $tmp2906 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 16));
                _f12905 = *$tmp2906;
                org$pandalanguage$pandac$IRNode** $tmp2908 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 24));
                _f22907 = *$tmp2908;
                org$pandalanguage$pandac$IRNode** $tmp2910 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 32));
                _f32909 = *$tmp2910;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12905));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22907));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32909));
            }
            }
            else {
            panda$core$Bit $tmp2911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 38 }));
            if ($tmp2911.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2913 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02912 = *$tmp2913;
                org$pandalanguage$pandac$Type** $tmp2915 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12651->$data + 16));
                _f12914 = *$tmp2915;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12914));
            }
            }
            else {
            panda$core$Bit $tmp2916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp2916.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2918 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02917 = *$tmp2918;
                panda$core$String** $tmp2920 = ((panda$core$String**) ((char*) $match$5_12651->$data + 16));
                _f12919 = *$tmp2920;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12919));
            }
            }
            else {
            panda$core$Bit $tmp2921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp2921.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2923 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02922 = *$tmp2923;
                org$pandalanguage$pandac$Type** $tmp2925 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12651->$data + 16));
                _f12924 = *$tmp2925;
                org$pandalanguage$pandac$IRNode** $tmp2927 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 24));
                _f22926 = *$tmp2927;
                panda$collections$ImmutableArray** $tmp2929 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12651->$data + 32));
                _f32928 = *$tmp2929;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12924));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22926));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32928));
            }
            }
            else {
            panda$core$Bit $tmp2930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 41 }));
            if ($tmp2930.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2932 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02931 = *$tmp2932;
                panda$collections$ImmutableArray** $tmp2934 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12651->$data + 16));
                _f12933 = *$tmp2934;
                org$pandalanguage$pandac$ASTNode** $tmp2936 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12651->$data + 24));
                _f22935 = *$tmp2936;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12933));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22935));
            }
            }
            else {
            panda$core$Bit $tmp2937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 42 }));
            if ($tmp2937.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2939 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02938 = *$tmp2939;
                org$pandalanguage$pandac$Type** $tmp2941 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12651->$data + 16));
                _f12940 = *$tmp2941;
                org$pandalanguage$pandac$IRNode** $tmp2943 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 24));
                _f22942 = *$tmp2943;
                panda$collections$ImmutableArray** $tmp2945 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12651->$data + 32));
                _f32944 = *$tmp2945;
                panda$collections$ImmutableArray** $tmp2947 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12651->$data + 40));
                _f42946 = *$tmp2947;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12940));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22942));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32944));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42946));
            }
            }
            else {
            panda$core$Bit $tmp2948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 43 }));
            if ($tmp2948.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2950 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02949 = *$tmp2950;
                org$pandalanguage$pandac$IRNode** $tmp2952 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 16));
                _f12951 = *$tmp2952;
                panda$collections$ImmutableArray** $tmp2954 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12651->$data + 24));
                _f22953 = *$tmp2954;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12951));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22953));
            }
            }
            else {
            panda$core$Bit $tmp2955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 44 }));
            if ($tmp2955.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2957 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02956 = *$tmp2957;
                org$pandalanguage$pandac$IRNode** $tmp2959 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 16));
                _f12958 = *$tmp2959;
                org$pandalanguage$pandac$IRNode** $tmp2961 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 24));
                _f22960 = *$tmp2961;
                panda$core$Bit* $tmp2963 = ((panda$core$Bit*) ((char*) $match$5_12651->$data + 32));
                _f32962 = *$tmp2963;
                org$pandalanguage$pandac$IRNode** $tmp2965 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 33));
                _f42964 = *$tmp2965;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12958));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22960));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42964));
            }
            }
            else {
            panda$core$Bit $tmp2966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 45 }));
            if ($tmp2966.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2968 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02967 = *$tmp2968;
                org$pandalanguage$pandac$Variable$Kind* $tmp2970 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_12651->$data + 16));
                _f12969 = *$tmp2970;
                panda$collections$ImmutableArray** $tmp2972 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12651->$data + 24));
                _f22971 = *$tmp2972;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22971));
            }
            }
            else {
            panda$core$Bit $tmp2973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 46 }));
            if ($tmp2973.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2975 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02974 = *$tmp2975;
                org$pandalanguage$pandac$Variable** $tmp2977 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$5_12651->$data + 16));
                _f12976 = *$tmp2977;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12976));
            }
            }
            else {
            panda$core$Bit $tmp2978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 47 }));
            if ($tmp2978.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2980 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02979 = *$tmp2980;
                panda$collections$ImmutableArray** $tmp2982 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12651->$data + 16));
                _f12981 = *$tmp2982;
                panda$collections$ImmutableArray** $tmp2984 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12651->$data + 24));
                _f22983 = *$tmp2984;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12981));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22983));
            }
            }
            else {
            panda$core$Bit $tmp2985 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12651->$rawValue, ((panda$core$Int64) { 48 }));
            if ($tmp2985.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2987 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12651->$data + 0));
                _f02986 = *$tmp2987;
                panda$core$String** $tmp2989 = ((panda$core$String**) ((char*) $match$5_12651->$data + 16));
                _f12988 = *$tmp2989;
                org$pandalanguage$pandac$IRNode** $tmp2991 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12651->$data + 24));
                _f22990 = *$tmp2991;
                panda$collections$ImmutableArray** $tmp2993 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12651->$data + 32));
                _f32992 = *$tmp2993;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12988));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22990));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32992));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp2650 = -1;
        goto $l2648;
        $l2648:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2652));
        switch ($tmp2650) {
            case -1: goto $l2994;
        }
        $l2994:;
    }
    $tmp2647 = -1;
    goto $l2645;
    $l2645:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2647) {
        case -1: goto $l2995;
    }
    $l2995:;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp2997;
    org$pandalanguage$pandac$IRNode* $tmp3000;
    org$pandalanguage$pandac$IRNode* $tmp3001;
    org$pandalanguage$pandac$IRNode* $tmp3004;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2996 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2996 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp2998 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp2997 = *$tmp2998;
        org$pandalanguage$pandac$IRNode** $tmp2999 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3000 = p_f1;
        *$tmp2999 = $tmp3000;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3000));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2997));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3002 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3001 = *$tmp3002;
        org$pandalanguage$pandac$IRNode** $tmp3003 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3004 = p_f2;
        *$tmp3003 = $tmp3004;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3004));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3001));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1) {
    org$pandalanguage$pandac$Type* $tmp3006;
    org$pandalanguage$pandac$Type* $tmp3009;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3005 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3005 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3007 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3006 = *$tmp3007;
        org$pandalanguage$pandac$Type** $tmp3008 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3009 = p_f1;
        *$tmp3008 = $tmp3009;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3009));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3006));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$parser$Token$Kind p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$Type* $tmp3011;
    org$pandalanguage$pandac$Type* $tmp3014;
    org$pandalanguage$pandac$IRNode* $tmp3015;
    org$pandalanguage$pandac$IRNode* $tmp3018;
    org$pandalanguage$pandac$IRNode* $tmp3020;
    org$pandalanguage$pandac$IRNode* $tmp3023;
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
    org$pandalanguage$pandac$parser$Token$Kind* $tmp3019 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 32));
    *$tmp3019 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp3021 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp3020 = *$tmp3021;
        org$pandalanguage$pandac$IRNode** $tmp3022 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp3023 = p_f4;
        *$tmp3022 = $tmp3023;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3023));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3020));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Bit p_f2) {
    org$pandalanguage$pandac$Type* $tmp3025;
    org$pandalanguage$pandac$Type* $tmp3028;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3024 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3024 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3026 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3025 = *$tmp3026;
        org$pandalanguage$pandac$Type** $tmp3027 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3028 = p_f1;
        *$tmp3027 = $tmp3028;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3028));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3025));
    }
    panda$core$Bit* $tmp3029 = ((panda$core$Bit*) ((char*) self->$data + 24));
    *$tmp3029 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp3031;
    panda$collections$ImmutableArray* $tmp3034;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3030 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3030 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp3032 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3031 = *$tmp3032;
        panda$collections$ImmutableArray** $tmp3033 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3034 = p_f1;
        *$tmp3033 = $tmp3034;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3034));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3031));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp3036;
    panda$collections$ImmutableArray* $tmp3039;
    panda$collections$ImmutableArray* $tmp3040;
    panda$collections$ImmutableArray* $tmp3043;
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
    {
        panda$collections$ImmutableArray** $tmp3041 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3040 = *$tmp3041;
        panda$collections$ImmutableArray** $tmp3042 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3043 = p_f2;
        *$tmp3042 = $tmp3043;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3043));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3040));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp3045;
    panda$core$String* $tmp3048;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3044 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3044 = p_f0;
    {
        panda$core$String** $tmp3046 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3045 = *$tmp3046;
        panda$core$String** $tmp3047 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3048 = p_f1;
        *$tmp3047 = $tmp3048;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3048));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3045));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$MethodRef* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3050;
    org$pandalanguage$pandac$Type* $tmp3053;
    org$pandalanguage$pandac$MethodRef* $tmp3054;
    org$pandalanguage$pandac$MethodRef* $tmp3057;
    panda$collections$ImmutableArray* $tmp3058;
    panda$collections$ImmutableArray* $tmp3061;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3049 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3049 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3051 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3050 = *$tmp3051;
        org$pandalanguage$pandac$Type** $tmp3052 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3053 = p_f1;
        *$tmp3052 = $tmp3053;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3053));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3050));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp3055 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3054 = *$tmp3055;
        org$pandalanguage$pandac$MethodRef** $tmp3056 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3057 = p_f2;
        *$tmp3056 = $tmp3057;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3057));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3054));
    }
    {
        panda$collections$ImmutableArray** $tmp3059 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3058 = *$tmp3059;
        panda$collections$ImmutableArray** $tmp3060 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3061 = p_f3;
        *$tmp3060 = $tmp3061;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3061));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3058));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$Type* p_f2, panda$core$Bit p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3063;
    org$pandalanguage$pandac$IRNode* $tmp3066;
    org$pandalanguage$pandac$Type* $tmp3067;
    org$pandalanguage$pandac$Type* $tmp3070;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3062 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3062 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3064 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3063 = *$tmp3064;
        org$pandalanguage$pandac$IRNode** $tmp3065 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3066 = p_f1;
        *$tmp3065 = $tmp3066;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3066));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3063));
    }
    {
        org$pandalanguage$pandac$Type** $tmp3068 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp3067 = *$tmp3068;
        org$pandalanguage$pandac$Type** $tmp3069 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp3070 = p_f2;
        *$tmp3069 = $tmp3070;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3070));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3067));
    }
    panda$core$Bit* $tmp3071 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp3071 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceEntry(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ChoiceEntry* p_f1) {
    org$pandalanguage$pandac$ChoiceEntry* $tmp3073;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3076;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3072 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3072 = p_f0;
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp3074 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp3073 = *$tmp3074;
        org$pandalanguage$pandac$ChoiceEntry** $tmp3075 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp3076 = p_f1;
        *$tmp3075 = $tmp3076;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3076));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3073));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3078;
    org$pandalanguage$pandac$IRNode* $tmp3081;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3082;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3085;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3077 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3077 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3079 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3078 = *$tmp3079;
        org$pandalanguage$pandac$IRNode** $tmp3080 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3081 = p_f1;
        *$tmp3080 = $tmp3081;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3081));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3078));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp3083 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp3082 = *$tmp3083;
        org$pandalanguage$pandac$ChoiceEntry** $tmp3084 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp3085 = p_f2;
        *$tmp3084 = $tmp3085;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3085));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3082));
    }
    panda$core$Int64* $tmp3086 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp3086 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$Type* $tmp3088;
    org$pandalanguage$pandac$Type* $tmp3091;
    org$pandalanguage$pandac$IRNode* $tmp3092;
    org$pandalanguage$pandac$IRNode* $tmp3095;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3087 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3087 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3089 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3088 = *$tmp3089;
        org$pandalanguage$pandac$Type** $tmp3090 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3091 = p_f1;
        *$tmp3090 = $tmp3091;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3091));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3088));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3093 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3092 = *$tmp3093;
        org$pandalanguage$pandac$IRNode** $tmp3094 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3095 = p_f2;
        *$tmp3094 = $tmp3095;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3095));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3092));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3096;
    org$pandalanguage$pandac$IRNode* $tmp3099;
    org$pandalanguage$pandac$IRNode* $tmp3100;
    org$pandalanguage$pandac$IRNode* $tmp3103;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3097 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3096 = *$tmp3097;
        org$pandalanguage$pandac$IRNode** $tmp3098 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3099 = p_f0;
        *$tmp3098 = $tmp3099;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3099));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3096));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3101 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3100 = *$tmp3101;
        org$pandalanguage$pandac$IRNode** $tmp3102 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3103 = p_f1;
        *$tmp3102 = $tmp3103;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3103));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3100));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    panda$core$String* $tmp3105;
    panda$core$String* $tmp3108;
    panda$collections$ImmutableArray* $tmp3109;
    panda$collections$ImmutableArray* $tmp3112;
    org$pandalanguage$pandac$IRNode* $tmp3113;
    org$pandalanguage$pandac$IRNode* $tmp3116;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3104 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3104 = p_f0;
    {
        panda$core$String** $tmp3106 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3105 = *$tmp3106;
        panda$core$String** $tmp3107 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3108 = p_f1;
        *$tmp3107 = $tmp3108;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3108));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3105));
    }
    {
        panda$collections$ImmutableArray** $tmp3110 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3109 = *$tmp3110;
        panda$collections$ImmutableArray** $tmp3111 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3112 = p_f2;
        *$tmp3111 = $tmp3112;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3112));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3109));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3114 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3113 = *$tmp3114;
        org$pandalanguage$pandac$IRNode** $tmp3115 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3116 = p_f3;
        *$tmp3115 = $tmp3116;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3116));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3113));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$collections$ImmutableArray* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3117;
    org$pandalanguage$pandac$IRNode* $tmp3120;
    panda$collections$ImmutableArray* $tmp3121;
    panda$collections$ImmutableArray* $tmp3124;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3118 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3117 = *$tmp3118;
        org$pandalanguage$pandac$IRNode** $tmp3119 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3120 = p_f0;
        *$tmp3119 = $tmp3120;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3120));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3117));
    }
    {
        panda$collections$ImmutableArray** $tmp3122 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp3121 = *$tmp3122;
        panda$collections$ImmutableArray** $tmp3123 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp3124 = p_f1;
        *$tmp3123 = $tmp3124;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3124));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3121));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3125;
    org$pandalanguage$pandac$IRNode* $tmp3128;
    org$pandalanguage$pandac$IRNode* $tmp3129;
    org$pandalanguage$pandac$IRNode* $tmp3132;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3126 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3125 = *$tmp3126;
        org$pandalanguage$pandac$IRNode** $tmp3127 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3128 = p_f0;
        *$tmp3127 = $tmp3128;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3128));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3125));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3130 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3129 = *$tmp3130;
        org$pandalanguage$pandac$IRNode** $tmp3131 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3132 = p_f1;
        *$tmp3131 = $tmp3132;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3132));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3129));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$FieldDecl* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3134;
    org$pandalanguage$pandac$Type* $tmp3137;
    org$pandalanguage$pandac$IRNode* $tmp3138;
    org$pandalanguage$pandac$IRNode* $tmp3141;
    org$pandalanguage$pandac$FieldDecl* $tmp3142;
    org$pandalanguage$pandac$FieldDecl* $tmp3145;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3133 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3133 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3135 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3134 = *$tmp3135;
        org$pandalanguage$pandac$Type** $tmp3136 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3137 = p_f1;
        *$tmp3136 = $tmp3137;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3137));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3134));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3139 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3138 = *$tmp3139;
        org$pandalanguage$pandac$IRNode** $tmp3140 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3141 = p_f2;
        *$tmp3140 = $tmp3141;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3141));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3138));
    }
    {
        org$pandalanguage$pandac$FieldDecl** $tmp3143 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp3142 = *$tmp3143;
        org$pandalanguage$pandac$FieldDecl** $tmp3144 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp3145 = p_f3;
        *$tmp3144 = $tmp3145;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3145));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3142));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3147;
    org$pandalanguage$pandac$IRNode* $tmp3150;
    panda$collections$ImmutableArray* $tmp3151;
    panda$collections$ImmutableArray* $tmp3154;
    org$pandalanguage$pandac$IRNode* $tmp3155;
    org$pandalanguage$pandac$IRNode* $tmp3158;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3146 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3146 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3148 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3147 = *$tmp3148;
        org$pandalanguage$pandac$IRNode** $tmp3149 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3150 = p_f1;
        *$tmp3149 = $tmp3150;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3150));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3147));
    }
    {
        panda$collections$ImmutableArray** $tmp3152 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3151 = *$tmp3152;
        panda$collections$ImmutableArray** $tmp3153 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3154 = p_f2;
        *$tmp3153 = $tmp3154;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3154));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3151));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3156 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3155 = *$tmp3156;
        org$pandalanguage$pandac$IRNode** $tmp3157 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3158 = p_f3;
        *$tmp3157 = $tmp3158;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3158));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3155));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$UInt64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3160;
    org$pandalanguage$pandac$Type* $tmp3163;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3159 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3159 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3161 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3160 = *$tmp3161;
        org$pandalanguage$pandac$Type** $tmp3162 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3163 = p_f1;
        *$tmp3162 = $tmp3163;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3163));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3160));
    }
    panda$core$UInt64* $tmp3164 = ((panda$core$UInt64*) ((char*) self->$data + 24));
    *$tmp3164 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3166;
    org$pandalanguage$pandac$IRNode* $tmp3169;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3165 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3165 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3167 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3166 = *$tmp3167;
        org$pandalanguage$pandac$IRNode** $tmp3168 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3169 = p_f1;
        *$tmp3168 = $tmp3169;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3169));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3166));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp3171;
    panda$core$String* $tmp3174;
    panda$collections$ImmutableArray* $tmp3175;
    panda$collections$ImmutableArray* $tmp3178;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3170 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3170 = p_f0;
    {
        panda$core$String** $tmp3172 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3171 = *$tmp3172;
        panda$core$String** $tmp3173 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3174 = p_f1;
        *$tmp3173 = $tmp3174;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3174));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3171));
    }
    {
        panda$collections$ImmutableArray** $tmp3176 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3175 = *$tmp3176;
        panda$collections$ImmutableArray** $tmp3177 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3178 = p_f2;
        *$tmp3177 = $tmp3178;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3178));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3175));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3180;
    org$pandalanguage$pandac$IRNode* $tmp3183;
    panda$collections$ImmutableArray* $tmp3184;
    panda$collections$ImmutableArray* $tmp3187;
    panda$collections$ImmutableArray* $tmp3188;
    panda$collections$ImmutableArray* $tmp3191;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3179 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3179 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3181 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3180 = *$tmp3181;
        org$pandalanguage$pandac$IRNode** $tmp3182 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3183 = p_f1;
        *$tmp3182 = $tmp3183;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3183));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3180));
    }
    {
        panda$collections$ImmutableArray** $tmp3185 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3184 = *$tmp3185;
        panda$collections$ImmutableArray** $tmp3186 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3187 = p_f2;
        *$tmp3186 = $tmp3187;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3187));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3184));
    }
    {
        panda$collections$ImmutableArray** $tmp3189 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3188 = *$tmp3189;
        panda$collections$ImmutableArray** $tmp3190 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3191 = p_f3;
        *$tmp3190 = $tmp3191;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3191));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3188));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$MethodRef* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3193;
    org$pandalanguage$pandac$Type* $tmp3196;
    org$pandalanguage$pandac$IRNode* $tmp3197;
    org$pandalanguage$pandac$IRNode* $tmp3200;
    org$pandalanguage$pandac$MethodRef* $tmp3201;
    org$pandalanguage$pandac$MethodRef* $tmp3204;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3192 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3192 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3194 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3193 = *$tmp3194;
        org$pandalanguage$pandac$Type** $tmp3195 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3196 = p_f1;
        *$tmp3195 = $tmp3196;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3196));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3193));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3198 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3197 = *$tmp3198;
        org$pandalanguage$pandac$IRNode** $tmp3199 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3200 = p_f2;
        *$tmp3199 = $tmp3200;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3200));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3197));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp3202 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 32));
        $tmp3201 = *$tmp3202;
        org$pandalanguage$pandac$MethodRef** $tmp3203 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 32));
        $tmp3204 = p_f3;
        *$tmp3203 = $tmp3204;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3204));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3201));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3207;
    org$pandalanguage$pandac$IRNode* $tmp3210;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3205 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3205 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp3206 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp3206 = p_f1;
    {
        org$pandalanguage$pandac$IRNode** $tmp3208 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3207 = *$tmp3208;
        org$pandalanguage$pandac$IRNode** $tmp3209 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3210 = p_f2;
        *$tmp3209 = $tmp3210;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3210));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3207));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp3212;
    panda$core$String* $tmp3215;
    org$pandalanguage$pandac$IRNode* $tmp3216;
    org$pandalanguage$pandac$IRNode* $tmp3219;
    org$pandalanguage$pandac$IRNode* $tmp3220;
    org$pandalanguage$pandac$IRNode* $tmp3223;
    panda$collections$ImmutableArray* $tmp3224;
    panda$collections$ImmutableArray* $tmp3227;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3211 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3211 = p_f0;
    {
        panda$core$String** $tmp3213 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3212 = *$tmp3213;
        panda$core$String** $tmp3214 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3215 = p_f1;
        *$tmp3214 = $tmp3215;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3215));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3212));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3217 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3216 = *$tmp3217;
        org$pandalanguage$pandac$IRNode** $tmp3218 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3219 = p_f2;
        *$tmp3218 = $tmp3219;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3219));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3216));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3221 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3220 = *$tmp3221;
        org$pandalanguage$pandac$IRNode** $tmp3222 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3223 = p_f3;
        *$tmp3222 = $tmp3223;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3223));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3220));
    }
    {
        panda$collections$ImmutableArray** $tmp3225 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3224 = *$tmp3225;
        panda$collections$ImmutableArray** $tmp3226 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3227 = p_f4;
        *$tmp3226 = $tmp3227;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3227));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3224));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Real64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3229;
    org$pandalanguage$pandac$Type* $tmp3232;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3228 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3228 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3230 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3229 = *$tmp3230;
        org$pandalanguage$pandac$Type** $tmp3231 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3232 = p_f1;
        *$tmp3231 = $tmp3232;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3232));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3229));
    }
    panda$core$Real64* $tmp3233 = ((panda$core$Real64*) ((char*) self->$data + 24));
    *$tmp3233 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3235;
    org$pandalanguage$pandac$IRNode* $tmp3238;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3234 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3234 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3236 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3235 = *$tmp3236;
        org$pandalanguage$pandac$IRNode** $tmp3237 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3238 = p_f1;
        *$tmp3237 = $tmp3238;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3238));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3235));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Int64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3240;
    org$pandalanguage$pandac$Type* $tmp3243;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3239 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3239 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3241 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3240 = *$tmp3241;
        org$pandalanguage$pandac$Type** $tmp3242 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3243 = p_f1;
        *$tmp3242 = $tmp3243;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3243));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3240));
    }
    panda$core$Int64* $tmp3244 = ((panda$core$Int64*) ((char*) self->$data + 24));
    *$tmp3244 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$core$Int64 p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3245;
    org$pandalanguage$pandac$IRNode* $tmp3248;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3246 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3245 = *$tmp3246;
        org$pandalanguage$pandac$IRNode** $tmp3247 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3248 = p_f0;
        *$tmp3247 = $tmp3248;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3248));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3245));
    }
    panda$core$Int64* $tmp3249 = ((panda$core$Int64*) ((char*) self->$data + 8));
    *$tmp3249 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp3251;
    panda$core$String* $tmp3254;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3250 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3250 = p_f0;
    {
        panda$core$String** $tmp3252 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3251 = *$tmp3252;
        panda$core$String** $tmp3253 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3254 = p_f1;
        *$tmp3253 = $tmp3254;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3254));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3251));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3256;
    org$pandalanguage$pandac$IRNode* $tmp3259;
    org$pandalanguage$pandac$IRNode* $tmp3260;
    org$pandalanguage$pandac$IRNode* $tmp3263;
    org$pandalanguage$pandac$IRNode* $tmp3264;
    org$pandalanguage$pandac$IRNode* $tmp3267;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3255 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3255 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3257 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3256 = *$tmp3257;
        org$pandalanguage$pandac$IRNode** $tmp3258 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
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
        org$pandalanguage$pandac$IRNode** $tmp3265 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3264 = *$tmp3265;
        org$pandalanguage$pandac$IRNode** $tmp3266 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3267 = p_f3;
        *$tmp3266 = $tmp3267;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3267));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3264));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3269;
    org$pandalanguage$pandac$Type* $tmp3272;
    org$pandalanguage$pandac$IRNode* $tmp3273;
    org$pandalanguage$pandac$IRNode* $tmp3276;
    panda$collections$ImmutableArray* $tmp3277;
    panda$collections$ImmutableArray* $tmp3280;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3268 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3268 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3270 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3269 = *$tmp3270;
        org$pandalanguage$pandac$Type** $tmp3271 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3272 = p_f1;
        *$tmp3271 = $tmp3272;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3272));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3269));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3274 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3273 = *$tmp3274;
        org$pandalanguage$pandac$IRNode** $tmp3275 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3276 = p_f2;
        *$tmp3275 = $tmp3276;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3276));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3273));
    }
    {
        panda$collections$ImmutableArray** $tmp3278 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3277 = *$tmp3278;
        panda$collections$ImmutableArray** $tmp3279 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3280 = p_f3;
        *$tmp3279 = $tmp3280;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3280));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3277));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTpanda$core$String$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$collections$ImmutableArray* $tmp3282;
    panda$collections$ImmutableArray* $tmp3285;
    org$pandalanguage$pandac$ASTNode* $tmp3286;
    org$pandalanguage$pandac$ASTNode* $tmp3289;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3281 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3281 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp3283 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3282 = *$tmp3283;
        panda$collections$ImmutableArray** $tmp3284 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3285 = p_f1;
        *$tmp3284 = $tmp3285;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3285));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3282));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp3287 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp3286 = *$tmp3287;
        org$pandalanguage$pandac$ASTNode** $tmp3288 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp3289 = p_f2;
        *$tmp3288 = $tmp3289;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3289));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3286));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3, panda$collections$ImmutableArray* p_f4) {
    org$pandalanguage$pandac$Type* $tmp3291;
    org$pandalanguage$pandac$Type* $tmp3294;
    org$pandalanguage$pandac$IRNode* $tmp3295;
    org$pandalanguage$pandac$IRNode* $tmp3298;
    panda$collections$ImmutableArray* $tmp3299;
    panda$collections$ImmutableArray* $tmp3302;
    panda$collections$ImmutableArray* $tmp3303;
    panda$collections$ImmutableArray* $tmp3306;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3290 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3290 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3292 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3291 = *$tmp3292;
        org$pandalanguage$pandac$Type** $tmp3293 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3294 = p_f1;
        *$tmp3293 = $tmp3294;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3294));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3291));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3296 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3295 = *$tmp3296;
        org$pandalanguage$pandac$IRNode** $tmp3297 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3298 = p_f2;
        *$tmp3297 = $tmp3298;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3298));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3295));
    }
    {
        panda$collections$ImmutableArray** $tmp3300 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3299 = *$tmp3300;
        panda$collections$ImmutableArray** $tmp3301 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3302 = p_f3;
        *$tmp3301 = $tmp3302;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3302));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3299));
    }
    {
        panda$collections$ImmutableArray** $tmp3304 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3303 = *$tmp3304;
        panda$collections$ImmutableArray** $tmp3305 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3306 = p_f4;
        *$tmp3305 = $tmp3306;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3306));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3303));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3308;
    org$pandalanguage$pandac$IRNode* $tmp3311;
    panda$collections$ImmutableArray* $tmp3312;
    panda$collections$ImmutableArray* $tmp3315;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3307 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3307 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3309 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3308 = *$tmp3309;
        org$pandalanguage$pandac$IRNode** $tmp3310 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3311 = p_f1;
        *$tmp3310 = $tmp3311;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3311));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3308));
    }
    {
        panda$collections$ImmutableArray** $tmp3313 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3312 = *$tmp3313;
        panda$collections$ImmutableArray** $tmp3314 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3315 = p_f2;
        *$tmp3314 = $tmp3315;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3315));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3312));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$IRNode* $tmp3317;
    org$pandalanguage$pandac$IRNode* $tmp3320;
    org$pandalanguage$pandac$IRNode* $tmp3321;
    org$pandalanguage$pandac$IRNode* $tmp3324;
    org$pandalanguage$pandac$IRNode* $tmp3326;
    org$pandalanguage$pandac$IRNode* $tmp3329;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3316 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3316 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3318 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3317 = *$tmp3318;
        org$pandalanguage$pandac$IRNode** $tmp3319 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3320 = p_f1;
        *$tmp3319 = $tmp3320;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3320));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3317));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3322 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3321 = *$tmp3322;
        org$pandalanguage$pandac$IRNode** $tmp3323 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3324 = p_f2;
        *$tmp3323 = $tmp3324;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3324));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3321));
    }
    panda$core$Bit* $tmp3325 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp3325 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp3327 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3326 = *$tmp3327;
        org$pandalanguage$pandac$IRNode** $tmp3328 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3329 = p_f4;
        *$tmp3328 = $tmp3329;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3329));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3326));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp3332;
    panda$collections$ImmutableArray* $tmp3335;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3330 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3330 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp3331 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp3331 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp3333 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3332 = *$tmp3333;
        panda$collections$ImmutableArray** $tmp3334 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3335 = p_f2;
        *$tmp3334 = $tmp3335;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3335));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3332));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable* p_f1) {
    org$pandalanguage$pandac$Variable* $tmp3337;
    org$pandalanguage$pandac$Variable* $tmp3340;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3336 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3336 = p_f0;
    {
        org$pandalanguage$pandac$Variable** $tmp3338 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3337 = *$tmp3338;
        org$pandalanguage$pandac$Variable** $tmp3339 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3340 = p_f1;
        *$tmp3339 = $tmp3340;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3340));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3337));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp3342;
    panda$core$String* $tmp3345;
    org$pandalanguage$pandac$IRNode* $tmp3346;
    org$pandalanguage$pandac$IRNode* $tmp3349;
    panda$collections$ImmutableArray* $tmp3350;
    panda$collections$ImmutableArray* $tmp3353;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3341 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3341 = p_f0;
    {
        panda$core$String** $tmp3343 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3342 = *$tmp3343;
        panda$core$String** $tmp3344 = ((panda$core$String**) ((char*) self->$data + 16));
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
    {
        panda$collections$ImmutableArray** $tmp3351 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3350 = *$tmp3351;
        panda$collections$ImmutableArray** $tmp3352 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3353 = p_f3;
        *$tmp3352 = $tmp3353;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3353));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3350));
    }
}

