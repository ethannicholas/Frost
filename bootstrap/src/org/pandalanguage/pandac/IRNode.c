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
typedef panda$core$String* (*$fn2407)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2419)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2439)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2456)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2532)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2561)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2570)(panda$collections$ListView*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2610)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2617)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2628)(panda$collections$Iterator*);

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
static panda$core$String $s2409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s2494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s2497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s2499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s2524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s2526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s2528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s2557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s2564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s2567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s2600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
    panda$core$Object* $tmp2431;
    panda$core$String* $tmp2436;
    org$pandalanguage$pandac$IRNode* target2447 = NULL;
    panda$collections$ImmutableArray* methods2449 = NULL;
    panda$core$String* $tmp2451;
    panda$core$String* $tmp2452;
    panda$core$String* $tmp2453;
    panda$core$String* $tmp2454;
    panda$core$String* $tmp2455;
    panda$core$Object* $tmp2460;
    panda$core$String* $tmp2467;
    panda$core$String* $tmp2468;
    panda$core$String* $tmp2469;
    panda$core$Object* $tmp2470;
    org$pandalanguage$pandac$IRNode* start2478 = NULL;
    org$pandalanguage$pandac$IRNode* end2480 = NULL;
    panda$core$Bit inclusive2482;
    org$pandalanguage$pandac$IRNode* step2484 = NULL;
    panda$core$MutableString* result2489 = NULL;
    panda$core$MutableString* $tmp2490;
    panda$core$MutableString* $tmp2491;
    panda$core$String* $tmp2495;
    panda$core$String* $tmp2496;
    panda$core$String* $tmp2501;
    panda$core$String* $tmp2502;
    org$pandalanguage$pandac$Variable$Kind kind2509;
    panda$collections$ImmutableArray* decls2511 = NULL;
    panda$core$MutableString* result2516 = NULL;
    panda$core$MutableString* $tmp2517;
    panda$core$MutableString* $tmp2518;
    org$pandalanguage$pandac$Variable$Kind $match$639_172520;
    panda$core$String* $tmp2529;
    panda$core$String* $tmp2534;
    panda$core$String* $tmp2535;
    org$pandalanguage$pandac$Variable* variable2542 = NULL;
    panda$core$String* $tmp2544;
    panda$collections$ImmutableArray* tests2548 = NULL;
    panda$collections$ImmutableArray* statements2550 = NULL;
    panda$core$String* $tmp2552;
    panda$core$String* $tmp2553;
    panda$core$String* $tmp2554;
    panda$core$String* $tmp2555;
    panda$core$String* $tmp2556;
    panda$core$String* $tmp2558;
    panda$core$String* $tmp2566;
    panda$core$String* label2578 = NULL;
    org$pandalanguage$pandac$IRNode* test2580 = NULL;
    panda$collections$ImmutableArray* statements2582 = NULL;
    panda$core$MutableString* result2587 = NULL;
    panda$core$MutableString* $tmp2588;
    panda$core$MutableString* $tmp2589;
    panda$core$String* $tmp2591;
    panda$core$String* $tmp2592;
    panda$core$String* $tmp2596;
    panda$core$String* $tmp2597;
    panda$collections$Iterator* Iter$657$172605 = NULL;
    panda$collections$Iterator* $tmp2606;
    panda$collections$Iterator* $tmp2607;
    org$pandalanguage$pandac$IRNode* s2623 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2624;
    panda$core$Object* $tmp2625;
    panda$core$String* $tmp2630;
    panda$core$Char8 $tmp2635;
    panda$core$String* $tmp2636;
    panda$core$String* $tmp2637;
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
                panda$core$String* $tmp2408 = (($fn2407) target2394->$class->vtable[0])(target2394);
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
                panda$core$Object* $tmp2432 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2396, ((panda$core$Int64) { 0 }));
                $tmp2431 = $tmp2432;
                panda$core$String* $tmp2433 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2431)->value)->name);
                $tmp2430 = $tmp2433;
                panda$core$String* $tmp2435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2430, &$s2434);
                $tmp2429 = $tmp2435;
                ITable* $tmp2437 = ((panda$collections$ListView*) args2398)->$class->itable;
                while ($tmp2437->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2437 = $tmp2437->next;
                }
                $fn2439 $tmp2438 = $tmp2437->methods[4];
                panda$core$String* $tmp2440 = $tmp2438(((panda$collections$ListView*) args2398));
                $tmp2436 = $tmp2440;
                panda$core$String* $tmp2441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2429, $tmp2436);
                $tmp2428 = $tmp2441;
                panda$core$String* $tmp2443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2428, &$s2442);
                $tmp2427 = $tmp2443;
                $tmp2426 = $tmp2427;
                $returnValue1311 = $tmp2426;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2426));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2427));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2428));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2436));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2429));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2430));
                panda$core$Panda$unref$panda$core$Object($tmp2431);
                $tmp1303 = 50;
                goto $l1301;
                $l2444:;
                return $returnValue1311;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp2446.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2448 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 16));
            target2447 = *$tmp2448;
            panda$collections$ImmutableArray** $tmp2450 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91304->$data + 24));
            methods2449 = *$tmp2450;
            if (((panda$core$Bit) { target2447 != NULL }).value) {
            {
                panda$core$String* $tmp2457 = (($fn2456) target2447->$class->vtable[0])(target2447);
                $tmp2455 = $tmp2457;
                panda$core$String* $tmp2459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2455, &$s2458);
                $tmp2454 = $tmp2459;
                panda$core$Object* $tmp2461 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2449, ((panda$core$Int64) { 0 }));
                $tmp2460 = $tmp2461;
                panda$core$String* $tmp2462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2454, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2460)->value)->name);
                $tmp2453 = $tmp2462;
                panda$core$String* $tmp2464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2453, &$s2463);
                $tmp2452 = $tmp2464;
                $tmp2451 = $tmp2452;
                $returnValue1311 = $tmp2451;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2451));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2452));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2453));
                panda$core$Panda$unref$panda$core$Object($tmp2460);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2454));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2455));
                $tmp1303 = 51;
                goto $l1301;
                $l2465:;
                return $returnValue1311;
            }
            }
            else {
            {
                panda$core$Object* $tmp2471 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2449, ((panda$core$Int64) { 0 }));
                $tmp2470 = $tmp2471;
                panda$core$String* $tmp2472 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2470)->value)->name);
                $tmp2469 = $tmp2472;
                panda$core$String* $tmp2474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2469, &$s2473);
                $tmp2468 = $tmp2474;
                $tmp2467 = $tmp2468;
                $returnValue1311 = $tmp2467;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2467));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2468));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2469));
                panda$core$Panda$unref$panda$core$Object($tmp2470);
                $tmp1303 = 52;
                goto $l1301;
                $l2475:;
                return $returnValue1311;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp2477.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2479 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 16));
            start2478 = *$tmp2479;
            org$pandalanguage$pandac$IRNode** $tmp2481 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 24));
            end2480 = *$tmp2481;
            panda$core$Bit* $tmp2483 = ((panda$core$Bit*) ((char*) $match$434_91304->$data + 32));
            inclusive2482 = *$tmp2483;
            org$pandalanguage$pandac$IRNode** $tmp2485 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 33));
            step2484 = *$tmp2485;
            int $tmp2488;
            {
                panda$core$MutableString* $tmp2492 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2492);
                $tmp2491 = $tmp2492;
                $tmp2490 = $tmp2491;
                result2489 = $tmp2490;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2490));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2491));
                if (((panda$core$Bit) { start2478 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2489, ((panda$core$Object*) start2478));
                }
                }
                if (inclusive2482.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2489, &$s2493);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result2489, &$s2494);
                }
                }
                if (((panda$core$Bit) { end2480 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2489, ((panda$core$Object*) end2480));
                }
                }
                if (((panda$core$Bit) { step2484 != NULL }).value) {
                {
                    panda$core$String* $tmp2498 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2497, ((panda$core$Object*) step2484));
                    $tmp2496 = $tmp2498;
                    panda$core$String* $tmp2500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2496, &$s2499);
                    $tmp2495 = $tmp2500;
                    panda$core$MutableString$append$panda$core$String(result2489, $tmp2495);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2495));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2496));
                }
                }
                panda$core$String* $tmp2503 = panda$core$MutableString$finish$R$panda$core$String(result2489);
                $tmp2502 = $tmp2503;
                $tmp2501 = $tmp2502;
                $returnValue1311 = $tmp2501;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2501));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2502));
                $tmp2488 = 0;
                goto $l2486;
                $l2504:;
                $tmp1303 = 53;
                goto $l1301;
                $l2505:;
                return $returnValue1311;
            }
            $l2486:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2489));
            result2489 = NULL;
            switch ($tmp2488) {
                case 0: goto $l2504;
            }
            $l2507:;
        }
        }
        else {
        panda$core$Bit $tmp2508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp2508.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp2510 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$434_91304->$data + 16));
            kind2509 = *$tmp2510;
            panda$collections$ImmutableArray** $tmp2512 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91304->$data + 24));
            decls2511 = *$tmp2512;
            int $tmp2515;
            {
                panda$core$MutableString* $tmp2519 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2519);
                $tmp2518 = $tmp2519;
                $tmp2517 = $tmp2518;
                result2516 = $tmp2517;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2517));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2518));
                {
                    $match$639_172520 = kind2509;
                    panda$core$Bit $tmp2521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$639_172520.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp2521.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2516, &$s2522);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$639_172520.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp2523.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2516, &$s2524);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$639_172520.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp2525.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2516, &$s2526);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$639_172520.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp2527.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2516, &$s2528);
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp2530 = ((panda$collections$ListView*) decls2511)->$class->itable;
                while ($tmp2530->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2530 = $tmp2530->next;
                }
                $fn2532 $tmp2531 = $tmp2530->methods[4];
                panda$core$String* $tmp2533 = $tmp2531(((panda$collections$ListView*) decls2511));
                $tmp2529 = $tmp2533;
                panda$core$MutableString$append$panda$core$String(result2516, $tmp2529);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2529));
                panda$core$String* $tmp2536 = panda$core$MutableString$finish$R$panda$core$String(result2516);
                $tmp2535 = $tmp2536;
                $tmp2534 = $tmp2535;
                $returnValue1311 = $tmp2534;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2534));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2535));
                $tmp2515 = 0;
                goto $l2513;
                $l2537:;
                $tmp1303 = 54;
                goto $l1301;
                $l2538:;
                return $returnValue1311;
            }
            $l2513:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2516));
            result2516 = NULL;
            switch ($tmp2515) {
                case 0: goto $l2537;
            }
            $l2540:;
        }
        }
        else {
        panda$core$Bit $tmp2541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp2541.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2543 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$434_91304->$data + 16));
            variable2542 = *$tmp2543;
            $tmp2544 = ((org$pandalanguage$pandac$Symbol*) variable2542)->name;
            $returnValue1311 = $tmp2544;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2544));
            $tmp1303 = 55;
            goto $l1301;
            $l2545:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp2547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp2547.value) {
        {
            panda$collections$ImmutableArray** $tmp2549 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91304->$data + 16));
            tests2548 = *$tmp2549;
            panda$collections$ImmutableArray** $tmp2551 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91304->$data + 24));
            statements2550 = *$tmp2551;
            ITable* $tmp2559 = ((panda$collections$ListView*) tests2548)->$class->itable;
            while ($tmp2559->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2559 = $tmp2559->next;
            }
            $fn2561 $tmp2560 = $tmp2559->methods[4];
            panda$core$String* $tmp2562 = $tmp2560(((panda$collections$ListView*) tests2548));
            $tmp2558 = $tmp2562;
            panda$core$String* $tmp2563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2557, $tmp2558);
            $tmp2556 = $tmp2563;
            panda$core$String* $tmp2565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2556, &$s2564);
            $tmp2555 = $tmp2565;
            ITable* $tmp2568 = ((panda$collections$ListView*) statements2550)->$class->itable;
            while ($tmp2568->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2568 = $tmp2568->next;
            }
            $fn2570 $tmp2569 = $tmp2568->methods[5];
            panda$core$String* $tmp2571 = $tmp2569(((panda$collections$ListView*) statements2550), &$s2567);
            $tmp2566 = $tmp2571;
            panda$core$String* $tmp2572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2555, $tmp2566);
            $tmp2554 = $tmp2572;
            panda$core$String* $tmp2574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2554, &$s2573);
            $tmp2553 = $tmp2574;
            $tmp2552 = $tmp2553;
            $returnValue1311 = $tmp2552;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2552));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2553));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2554));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2566));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2555));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2556));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2558));
            $tmp1303 = 56;
            goto $l1301;
            $l2575:;
            return $returnValue1311;
        }
        }
        else {
        panda$core$Bit $tmp2577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91304->$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp2577.value) {
        {
            panda$core$String** $tmp2579 = ((panda$core$String**) ((char*) $match$434_91304->$data + 16));
            label2578 = *$tmp2579;
            org$pandalanguage$pandac$IRNode** $tmp2581 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91304->$data + 24));
            test2580 = *$tmp2581;
            panda$collections$ImmutableArray** $tmp2583 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91304->$data + 32));
            statements2582 = *$tmp2583;
            int $tmp2586;
            {
                panda$core$MutableString* $tmp2590 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2590);
                $tmp2589 = $tmp2590;
                $tmp2588 = $tmp2589;
                result2587 = $tmp2588;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2588));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2589));
                if (((panda$core$Bit) { label2578 != NULL }).value) {
                {
                    panda$core$String* $tmp2593 = panda$core$String$convert$R$panda$core$String(label2578);
                    $tmp2592 = $tmp2593;
                    panda$core$String* $tmp2595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2592, &$s2594);
                    $tmp2591 = $tmp2595;
                    panda$core$MutableString$append$panda$core$String(result2587, $tmp2591);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2591));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2592));
                }
                }
                panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2598, ((panda$core$Object*) test2580));
                $tmp2597 = $tmp2599;
                panda$core$String* $tmp2601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2597, &$s2600);
                $tmp2596 = $tmp2601;
                panda$core$MutableString$append$panda$core$String(result2587, $tmp2596);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2596));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2597));
                {
                    int $tmp2604;
                    {
                        ITable* $tmp2608 = ((panda$collections$Iterable*) statements2582)->$class->itable;
                        while ($tmp2608->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2608 = $tmp2608->next;
                        }
                        $fn2610 $tmp2609 = $tmp2608->methods[0];
                        panda$collections$Iterator* $tmp2611 = $tmp2609(((panda$collections$Iterable*) statements2582));
                        $tmp2607 = $tmp2611;
                        $tmp2606 = $tmp2607;
                        Iter$657$172605 = $tmp2606;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2606));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2607));
                        $l2612:;
                        ITable* $tmp2615 = Iter$657$172605->$class->itable;
                        while ($tmp2615->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2615 = $tmp2615->next;
                        }
                        $fn2617 $tmp2616 = $tmp2615->methods[0];
                        panda$core$Bit $tmp2618 = $tmp2616(Iter$657$172605);
                        panda$core$Bit $tmp2619 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2618);
                        bool $tmp2614 = $tmp2619.value;
                        if (!$tmp2614) goto $l2613;
                        {
                            int $tmp2622;
                            {
                                ITable* $tmp2626 = Iter$657$172605->$class->itable;
                                while ($tmp2626->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2626 = $tmp2626->next;
                                }
                                $fn2628 $tmp2627 = $tmp2626->methods[1];
                                panda$core$Object* $tmp2629 = $tmp2627(Iter$657$172605);
                                $tmp2625 = $tmp2629;
                                $tmp2624 = ((org$pandalanguage$pandac$IRNode*) $tmp2625);
                                s2623 = $tmp2624;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2624));
                                panda$core$Panda$unref$panda$core$Object($tmp2625);
                                panda$core$String* $tmp2632 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2623), &$s2631);
                                $tmp2630 = $tmp2632;
                                panda$core$MutableString$append$panda$core$String(result2587, $tmp2630);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2630));
                            }
                            $tmp2622 = -1;
                            goto $l2620;
                            $l2620:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2623));
                            s2623 = NULL;
                            switch ($tmp2622) {
                                case -1: goto $l2633;
                            }
                            $l2633:;
                        }
                        goto $l2612;
                        $l2613:;
                    }
                    $tmp2604 = -1;
                    goto $l2602;
                    $l2602:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$657$172605));
                    Iter$657$172605 = NULL;
                    switch ($tmp2604) {
                        case -1: goto $l2634;
                    }
                    $l2634:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2635, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2587, $tmp2635);
                panda$core$String* $tmp2638 = panda$core$MutableString$finish$R$panda$core$String(result2587);
                $tmp2637 = $tmp2638;
                $tmp2636 = $tmp2637;
                $returnValue1311 = $tmp2636;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2636));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2637));
                $tmp2586 = 0;
                goto $l2584;
                $l2639:;
                $tmp1303 = 57;
                goto $l1301;
                $l2640:;
                return $returnValue1311;
            }
            $l2584:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2587));
            result2587 = NULL;
            switch ($tmp2586) {
                case 0: goto $l2639;
            }
            $l2642:;
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
        case 51: goto $l2465;
        case 6: goto $l1513;
        case 42: goto $l2298;
        case 7: goto $l1526;
        case 36: goto $l2231;
        case 41: goto $l2289;
        case 40: goto $l2284;
        case 35: goto $l2222;
        case 25: goto $l1913;
        case 57: goto $l2640;
        case 45: goto $l2337;
        case 50: goto $l2444;
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
        case 37: goto $l2243;
        case 47: goto $l2367;
        case 44: goto $l2329;
        case 20: goto $l1774;
        case 21: goto $l1800;
        case 17: goto $l1684;
        case 8: goto $l1530;
        case 11: goto $l1592;
        case 56: goto $l2575;
        case 22: goto $l1819;
        case 28: goto $l1995;
        case 55: goto $l2545;
        case 54: goto $l2538;
        case 29: goto $l2090;
        case -1: goto $l2643;
        case 18: goto $l1703;
        case 13: goto $l1628;
        case 38: goto $l2247;
        case 23: goto $l1838;
        case 5: goto $l1425;
        case 9: goto $l1553;
        case 1: goto $l1333;
        case 3: goto $l1366;
        case 2: goto $l1338;
        case 30: goto $l2110;
        case 33: goto $l2129;
        case 53: goto $l2505;
        case 34: goto $l2150;
        case 39: goto $l2263;
        case 16: goto $l1680;
        case 27: goto $l1937;
        case 43: goto $l2303;
        case 52: goto $l2475;
        case 48: goto $l2391;
        case 49: goto $l2424;
        case 12: goto $l1600;
    }
    $l2643:;
}
void org$pandalanguage$pandac$IRNode$cleanup(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$5_12650 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2651;
    org$pandalanguage$pandac$Position _f02653;
    org$pandalanguage$pandac$IRNode* _f12655 = NULL;
    org$pandalanguage$pandac$IRNode* _f22657 = NULL;
    org$pandalanguage$pandac$Position _f02660;
    org$pandalanguage$pandac$Type* _f12662 = NULL;
    org$pandalanguage$pandac$Position _f02665;
    org$pandalanguage$pandac$Type* _f12667 = NULL;
    org$pandalanguage$pandac$IRNode* _f22669 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f32671;
    org$pandalanguage$pandac$IRNode* _f42673 = NULL;
    org$pandalanguage$pandac$Position _f02676;
    org$pandalanguage$pandac$Type* _f12678 = NULL;
    panda$core$Bit _f22680;
    org$pandalanguage$pandac$Position _f02683;
    panda$collections$ImmutableArray* _f12685 = NULL;
    org$pandalanguage$pandac$Position _f02688;
    panda$collections$ImmutableArray* _f12690 = NULL;
    panda$collections$ImmutableArray* _f22692 = NULL;
    org$pandalanguage$pandac$Position _f02695;
    panda$core$String* _f12697 = NULL;
    org$pandalanguage$pandac$Position _f02700;
    org$pandalanguage$pandac$Type* _f12702 = NULL;
    org$pandalanguage$pandac$MethodRef* _f22704 = NULL;
    panda$collections$ImmutableArray* _f32706 = NULL;
    org$pandalanguage$pandac$Position _f02709;
    org$pandalanguage$pandac$IRNode* _f12711 = NULL;
    org$pandalanguage$pandac$Type* _f22713 = NULL;
    panda$core$Bit _f32715;
    org$pandalanguage$pandac$Position _f02718;
    org$pandalanguage$pandac$ChoiceEntry* _f12720 = NULL;
    org$pandalanguage$pandac$Position _f02723;
    org$pandalanguage$pandac$IRNode* _f12725 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f22727 = NULL;
    panda$core$Int64 _f32729;
    org$pandalanguage$pandac$Position _f02732;
    org$pandalanguage$pandac$Type* _f12734 = NULL;
    org$pandalanguage$pandac$IRNode* _f22736 = NULL;
    org$pandalanguage$pandac$Position _f02739;
    org$pandalanguage$pandac$Type* _f12741 = NULL;
    org$pandalanguage$pandac$Position _f02744;
    panda$core$String* _f12746 = NULL;
    org$pandalanguage$pandac$IRNode* _f02749 = NULL;
    org$pandalanguage$pandac$IRNode* _f12751 = NULL;
    org$pandalanguage$pandac$Position _f02754;
    panda$core$String* _f12756 = NULL;
    panda$collections$ImmutableArray* _f22758 = NULL;
    org$pandalanguage$pandac$IRNode* _f32760 = NULL;
    org$pandalanguage$pandac$IRNode* _f02763 = NULL;
    panda$collections$ImmutableArray* _f12765 = NULL;
    org$pandalanguage$pandac$IRNode* _f02768 = NULL;
    org$pandalanguage$pandac$IRNode* _f12770 = NULL;
    org$pandalanguage$pandac$Position _f02773;
    org$pandalanguage$pandac$Type* _f12775 = NULL;
    org$pandalanguage$pandac$IRNode* _f22777 = NULL;
    org$pandalanguage$pandac$FieldDecl* _f32779 = NULL;
    org$pandalanguage$pandac$Position _f02782;
    org$pandalanguage$pandac$IRNode* _f12784 = NULL;
    panda$collections$ImmutableArray* _f22786 = NULL;
    org$pandalanguage$pandac$IRNode* _f32788 = NULL;
    org$pandalanguage$pandac$Position _f02791;
    org$pandalanguage$pandac$Type* _f12793 = NULL;
    panda$core$UInt64 _f22795;
    org$pandalanguage$pandac$Position _f02798;
    org$pandalanguage$pandac$IRNode* _f12800 = NULL;
    org$pandalanguage$pandac$Position _f02803;
    org$pandalanguage$pandac$IRNode* _f12805 = NULL;
    org$pandalanguage$pandac$Position _f02808;
    panda$core$String* _f12810 = NULL;
    panda$collections$ImmutableArray* _f22812 = NULL;
    org$pandalanguage$pandac$Position _f02815;
    org$pandalanguage$pandac$IRNode* _f12817 = NULL;
    panda$collections$ImmutableArray* _f22819 = NULL;
    panda$collections$ImmutableArray* _f32821 = NULL;
    org$pandalanguage$pandac$Position _f02824;
    org$pandalanguage$pandac$Type* _f12826 = NULL;
    org$pandalanguage$pandac$IRNode* _f22828 = NULL;
    org$pandalanguage$pandac$MethodRef* _f32830 = NULL;
    org$pandalanguage$pandac$Position _f02833;
    org$pandalanguage$pandac$Type* _f12835 = NULL;
    panda$core$UInt64 _f22837;
    org$pandalanguage$pandac$Position _f02840;
    org$pandalanguage$pandac$Type* _f12842 = NULL;
    org$pandalanguage$pandac$Position _f02845;
    org$pandalanguage$pandac$parser$Token$Kind _f12847;
    org$pandalanguage$pandac$IRNode* _f22849 = NULL;
    org$pandalanguage$pandac$Position _f02852;
    panda$core$String* _f12854 = NULL;
    org$pandalanguage$pandac$IRNode* _f22856 = NULL;
    org$pandalanguage$pandac$IRNode* _f32858 = NULL;
    panda$collections$ImmutableArray* _f42860 = NULL;
    org$pandalanguage$pandac$Position _f02863;
    org$pandalanguage$pandac$Type* _f12865 = NULL;
    panda$core$Real64 _f22867;
    org$pandalanguage$pandac$Position _f02870;
    org$pandalanguage$pandac$IRNode* _f12872 = NULL;
    org$pandalanguage$pandac$Position _f02875;
    org$pandalanguage$pandac$Type* _f12877 = NULL;
    panda$core$Int64 _f22879;
    org$pandalanguage$pandac$IRNode* _f02882 = NULL;
    panda$core$Int64 _f12884;
    org$pandalanguage$pandac$Position _f02887;
    org$pandalanguage$pandac$Type* _f12889 = NULL;
    org$pandalanguage$pandac$Position _f02892;
    panda$core$String* _f12894 = NULL;
    org$pandalanguage$pandac$Position _f02897;
    org$pandalanguage$pandac$Type* _f12899 = NULL;
    org$pandalanguage$pandac$Position _f02902;
    org$pandalanguage$pandac$IRNode* _f12904 = NULL;
    org$pandalanguage$pandac$IRNode* _f22906 = NULL;
    org$pandalanguage$pandac$IRNode* _f32908 = NULL;
    org$pandalanguage$pandac$Position _f02911;
    org$pandalanguage$pandac$Type* _f12913 = NULL;
    org$pandalanguage$pandac$Position _f02916;
    panda$core$String* _f12918 = NULL;
    org$pandalanguage$pandac$Position _f02921;
    org$pandalanguage$pandac$Type* _f12923 = NULL;
    org$pandalanguage$pandac$IRNode* _f22925 = NULL;
    panda$collections$ImmutableArray* _f32927 = NULL;
    org$pandalanguage$pandac$Position _f02930;
    panda$collections$ImmutableArray* _f12932 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22934 = NULL;
    org$pandalanguage$pandac$Position _f02937;
    org$pandalanguage$pandac$Type* _f12939 = NULL;
    org$pandalanguage$pandac$IRNode* _f22941 = NULL;
    panda$collections$ImmutableArray* _f32943 = NULL;
    panda$collections$ImmutableArray* _f42945 = NULL;
    org$pandalanguage$pandac$Position _f02948;
    org$pandalanguage$pandac$IRNode* _f12950 = NULL;
    panda$collections$ImmutableArray* _f22952 = NULL;
    org$pandalanguage$pandac$Position _f02955;
    org$pandalanguage$pandac$IRNode* _f12957 = NULL;
    org$pandalanguage$pandac$IRNode* _f22959 = NULL;
    panda$core$Bit _f32961;
    org$pandalanguage$pandac$IRNode* _f42963 = NULL;
    org$pandalanguage$pandac$Position _f02966;
    org$pandalanguage$pandac$Variable$Kind _f12968;
    panda$collections$ImmutableArray* _f22970 = NULL;
    org$pandalanguage$pandac$Position _f02973;
    org$pandalanguage$pandac$Variable* _f12975 = NULL;
    org$pandalanguage$pandac$Position _f02978;
    panda$collections$ImmutableArray* _f12980 = NULL;
    panda$collections$ImmutableArray* _f22982 = NULL;
    org$pandalanguage$pandac$Position _f02985;
    panda$core$String* _f12987 = NULL;
    org$pandalanguage$pandac$IRNode* _f22989 = NULL;
    panda$collections$ImmutableArray* _f32991 = NULL;
    int $tmp2646;
    {
        int $tmp2649;
        {
            $tmp2651 = self;
            $match$5_12650 = $tmp2651;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2651));
            panda$core$Bit $tmp2652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp2652.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2654 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02653 = *$tmp2654;
                org$pandalanguage$pandac$IRNode** $tmp2656 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 16));
                _f12655 = *$tmp2656;
                org$pandalanguage$pandac$IRNode** $tmp2658 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 24));
                _f22657 = *$tmp2658;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12655));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22657));
            }
            }
            else {
            panda$core$Bit $tmp2659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp2659.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2661 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02660 = *$tmp2661;
                org$pandalanguage$pandac$Type** $tmp2663 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12650->$data + 16));
                _f12662 = *$tmp2663;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12662));
            }
            }
            else {
            panda$core$Bit $tmp2664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp2664.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2666 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02665 = *$tmp2666;
                org$pandalanguage$pandac$Type** $tmp2668 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12650->$data + 16));
                _f12667 = *$tmp2668;
                org$pandalanguage$pandac$IRNode** $tmp2670 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 24));
                _f22669 = *$tmp2670;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2672 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12650->$data + 32));
                _f32671 = *$tmp2672;
                org$pandalanguage$pandac$IRNode** $tmp2674 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 40));
                _f42673 = *$tmp2674;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12667));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22669));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42673));
            }
            }
            else {
            panda$core$Bit $tmp2675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp2675.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2677 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02676 = *$tmp2677;
                org$pandalanguage$pandac$Type** $tmp2679 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12650->$data + 16));
                _f12678 = *$tmp2679;
                panda$core$Bit* $tmp2681 = ((panda$core$Bit*) ((char*) $match$5_12650->$data + 24));
                _f22680 = *$tmp2681;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12678));
            }
            }
            else {
            panda$core$Bit $tmp2682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp2682.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2684 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02683 = *$tmp2684;
                panda$collections$ImmutableArray** $tmp2686 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12650->$data + 16));
                _f12685 = *$tmp2686;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12685));
            }
            }
            else {
            panda$core$Bit $tmp2687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp2687.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2689 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02688 = *$tmp2689;
                panda$collections$ImmutableArray** $tmp2691 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12650->$data + 16));
                _f12690 = *$tmp2691;
                panda$collections$ImmutableArray** $tmp2693 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12650->$data + 24));
                _f22692 = *$tmp2693;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12690));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22692));
            }
            }
            else {
            panda$core$Bit $tmp2694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp2694.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2696 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02695 = *$tmp2696;
                panda$core$String** $tmp2698 = ((panda$core$String**) ((char*) $match$5_12650->$data + 16));
                _f12697 = *$tmp2698;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12697));
            }
            }
            else {
            panda$core$Bit $tmp2699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 7 }));
            if ($tmp2699.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2701 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02700 = *$tmp2701;
                org$pandalanguage$pandac$Type** $tmp2703 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12650->$data + 16));
                _f12702 = *$tmp2703;
                org$pandalanguage$pandac$MethodRef** $tmp2705 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12650->$data + 24));
                _f22704 = *$tmp2705;
                panda$collections$ImmutableArray** $tmp2707 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12650->$data + 32));
                _f32706 = *$tmp2707;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12702));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22704));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32706));
            }
            }
            else {
            panda$core$Bit $tmp2708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp2708.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2710 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02709 = *$tmp2710;
                org$pandalanguage$pandac$IRNode** $tmp2712 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 16));
                _f12711 = *$tmp2712;
                org$pandalanguage$pandac$Type** $tmp2714 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12650->$data + 24));
                _f22713 = *$tmp2714;
                panda$core$Bit* $tmp2716 = ((panda$core$Bit*) ((char*) $match$5_12650->$data + 32));
                _f32715 = *$tmp2716;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12711));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22713));
            }
            }
            else {
            panda$core$Bit $tmp2717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp2717.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2719 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02718 = *$tmp2719;
                org$pandalanguage$pandac$ChoiceEntry** $tmp2721 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12650->$data + 16));
                _f12720 = *$tmp2721;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12720));
            }
            }
            else {
            panda$core$Bit $tmp2722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 10 }));
            if ($tmp2722.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2724 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02723 = *$tmp2724;
                org$pandalanguage$pandac$IRNode** $tmp2726 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 16));
                _f12725 = *$tmp2726;
                org$pandalanguage$pandac$ChoiceEntry** $tmp2728 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12650->$data + 24));
                _f22727 = *$tmp2728;
                panda$core$Int64* $tmp2730 = ((panda$core$Int64*) ((char*) $match$5_12650->$data + 32));
                _f32729 = *$tmp2730;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12725));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22727));
            }
            }
            else {
            panda$core$Bit $tmp2731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp2731.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2733 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02732 = *$tmp2733;
                org$pandalanguage$pandac$Type** $tmp2735 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12650->$data + 16));
                _f12734 = *$tmp2735;
                org$pandalanguage$pandac$IRNode** $tmp2737 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 24));
                _f22736 = *$tmp2737;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12734));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22736));
            }
            }
            else {
            panda$core$Bit $tmp2738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp2738.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2740 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02739 = *$tmp2740;
                org$pandalanguage$pandac$Type** $tmp2742 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12650->$data + 16));
                _f12741 = *$tmp2742;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12741));
            }
            }
            else {
            panda$core$Bit $tmp2743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp2743.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2745 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02744 = *$tmp2745;
                panda$core$String** $tmp2747 = ((panda$core$String**) ((char*) $match$5_12650->$data + 16));
                _f12746 = *$tmp2747;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12746));
            }
            }
            else {
            panda$core$Bit $tmp2748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp2748.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2750 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 0));
                _f02749 = *$tmp2750;
                org$pandalanguage$pandac$IRNode** $tmp2752 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 8));
                _f12751 = *$tmp2752;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02749));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12751));
            }
            }
            else {
            panda$core$Bit $tmp2753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp2753.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2755 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02754 = *$tmp2755;
                panda$core$String** $tmp2757 = ((panda$core$String**) ((char*) $match$5_12650->$data + 16));
                _f12756 = *$tmp2757;
                panda$collections$ImmutableArray** $tmp2759 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12650->$data + 24));
                _f22758 = *$tmp2759;
                org$pandalanguage$pandac$IRNode** $tmp2761 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 32));
                _f32760 = *$tmp2761;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12756));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22758));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32760));
            }
            }
            else {
            panda$core$Bit $tmp2762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 16 }));
            if ($tmp2762.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2764 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 0));
                _f02763 = *$tmp2764;
                panda$collections$ImmutableArray** $tmp2766 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12650->$data + 8));
                _f12765 = *$tmp2766;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02763));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12765));
            }
            }
            else {
            panda$core$Bit $tmp2767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp2767.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2769 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 0));
                _f02768 = *$tmp2769;
                org$pandalanguage$pandac$IRNode** $tmp2771 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 8));
                _f12770 = *$tmp2771;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02768));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12770));
            }
            }
            else {
            panda$core$Bit $tmp2772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp2772.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2774 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02773 = *$tmp2774;
                org$pandalanguage$pandac$Type** $tmp2776 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12650->$data + 16));
                _f12775 = *$tmp2776;
                org$pandalanguage$pandac$IRNode** $tmp2778 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 24));
                _f22777 = *$tmp2778;
                org$pandalanguage$pandac$FieldDecl** $tmp2780 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$5_12650->$data + 32));
                _f32779 = *$tmp2780;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12775));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22777));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32779));
            }
            }
            else {
            panda$core$Bit $tmp2781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp2781.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2783 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02782 = *$tmp2783;
                org$pandalanguage$pandac$IRNode** $tmp2785 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 16));
                _f12784 = *$tmp2785;
                panda$collections$ImmutableArray** $tmp2787 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12650->$data + 24));
                _f22786 = *$tmp2787;
                org$pandalanguage$pandac$IRNode** $tmp2789 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 32));
                _f32788 = *$tmp2789;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12784));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22786));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32788));
            }
            }
            else {
            panda$core$Bit $tmp2790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 20 }));
            if ($tmp2790.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2792 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02791 = *$tmp2792;
                org$pandalanguage$pandac$Type** $tmp2794 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12650->$data + 16));
                _f12793 = *$tmp2794;
                panda$core$UInt64* $tmp2796 = ((panda$core$UInt64*) ((char*) $match$5_12650->$data + 24));
                _f22795 = *$tmp2796;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12793));
            }
            }
            else {
            panda$core$Bit $tmp2797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 21 }));
            if ($tmp2797.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2799 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02798 = *$tmp2799;
                org$pandalanguage$pandac$IRNode** $tmp2801 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 16));
                _f12800 = *$tmp2801;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12800));
            }
            }
            else {
            panda$core$Bit $tmp2802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp2802.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2804 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02803 = *$tmp2804;
                org$pandalanguage$pandac$IRNode** $tmp2806 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 16));
                _f12805 = *$tmp2806;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12805));
            }
            }
            else {
            panda$core$Bit $tmp2807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp2807.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2809 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02808 = *$tmp2809;
                panda$core$String** $tmp2811 = ((panda$core$String**) ((char*) $match$5_12650->$data + 16));
                _f12810 = *$tmp2811;
                panda$collections$ImmutableArray** $tmp2813 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12650->$data + 24));
                _f22812 = *$tmp2813;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12810));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22812));
            }
            }
            else {
            panda$core$Bit $tmp2814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp2814.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2816 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02815 = *$tmp2816;
                org$pandalanguage$pandac$IRNode** $tmp2818 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 16));
                _f12817 = *$tmp2818;
                panda$collections$ImmutableArray** $tmp2820 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12650->$data + 24));
                _f22819 = *$tmp2820;
                panda$collections$ImmutableArray** $tmp2822 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12650->$data + 32));
                _f32821 = *$tmp2822;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12817));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22819));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32821));
            }
            }
            else {
            panda$core$Bit $tmp2823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp2823.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2825 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02824 = *$tmp2825;
                org$pandalanguage$pandac$Type** $tmp2827 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12650->$data + 16));
                _f12826 = *$tmp2827;
                org$pandalanguage$pandac$IRNode** $tmp2829 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 24));
                _f22828 = *$tmp2829;
                org$pandalanguage$pandac$MethodRef** $tmp2831 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12650->$data + 32));
                _f32830 = *$tmp2831;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12826));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22828));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32830));
            }
            }
            else {
            panda$core$Bit $tmp2832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp2832.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2834 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02833 = *$tmp2834;
                org$pandalanguage$pandac$Type** $tmp2836 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12650->$data + 16));
                _f12835 = *$tmp2836;
                panda$core$UInt64* $tmp2838 = ((panda$core$UInt64*) ((char*) $match$5_12650->$data + 24));
                _f22837 = *$tmp2838;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12835));
            }
            }
            else {
            panda$core$Bit $tmp2839 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 27 }));
            if ($tmp2839.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2841 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02840 = *$tmp2841;
                org$pandalanguage$pandac$Type** $tmp2843 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12650->$data + 16));
                _f12842 = *$tmp2843;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12842));
            }
            }
            else {
            panda$core$Bit $tmp2844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 28 }));
            if ($tmp2844.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2846 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02845 = *$tmp2846;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2848 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12650->$data + 16));
                _f12847 = *$tmp2848;
                org$pandalanguage$pandac$IRNode** $tmp2850 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 24));
                _f22849 = *$tmp2850;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22849));
            }
            }
            else {
            panda$core$Bit $tmp2851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 29 }));
            if ($tmp2851.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2853 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02852 = *$tmp2853;
                panda$core$String** $tmp2855 = ((panda$core$String**) ((char*) $match$5_12650->$data + 16));
                _f12854 = *$tmp2855;
                org$pandalanguage$pandac$IRNode** $tmp2857 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 24));
                _f22856 = *$tmp2857;
                org$pandalanguage$pandac$IRNode** $tmp2859 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 32));
                _f32858 = *$tmp2859;
                panda$collections$ImmutableArray** $tmp2861 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12650->$data + 40));
                _f42860 = *$tmp2861;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12854));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22856));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32858));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42860));
            }
            }
            else {
            panda$core$Bit $tmp2862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 30 }));
            if ($tmp2862.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2864 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02863 = *$tmp2864;
                org$pandalanguage$pandac$Type** $tmp2866 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12650->$data + 16));
                _f12865 = *$tmp2866;
                panda$core$Real64* $tmp2868 = ((panda$core$Real64*) ((char*) $match$5_12650->$data + 24));
                _f22867 = *$tmp2868;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12865));
            }
            }
            else {
            panda$core$Bit $tmp2869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 31 }));
            if ($tmp2869.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2871 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02870 = *$tmp2871;
                org$pandalanguage$pandac$IRNode** $tmp2873 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 16));
                _f12872 = *$tmp2873;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12872));
            }
            }
            else {
            panda$core$Bit $tmp2874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 32 }));
            if ($tmp2874.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2876 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02875 = *$tmp2876;
                org$pandalanguage$pandac$Type** $tmp2878 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12650->$data + 16));
                _f12877 = *$tmp2878;
                panda$core$Int64* $tmp2880 = ((panda$core$Int64*) ((char*) $match$5_12650->$data + 24));
                _f22879 = *$tmp2880;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12877));
            }
            }
            else {
            panda$core$Bit $tmp2881 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp2881.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2883 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 0));
                _f02882 = *$tmp2883;
                panda$core$Int64* $tmp2885 = ((panda$core$Int64*) ((char*) $match$5_12650->$data + 8));
                _f12884 = *$tmp2885;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02882));
            }
            }
            else {
            panda$core$Bit $tmp2886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp2886.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2888 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02887 = *$tmp2888;
                org$pandalanguage$pandac$Type** $tmp2890 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12650->$data + 16));
                _f12889 = *$tmp2890;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12889));
            }
            }
            else {
            panda$core$Bit $tmp2891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 35 }));
            if ($tmp2891.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2893 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02892 = *$tmp2893;
                panda$core$String** $tmp2895 = ((panda$core$String**) ((char*) $match$5_12650->$data + 16));
                _f12894 = *$tmp2895;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12894));
            }
            }
            else {
            panda$core$Bit $tmp2896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp2896.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2898 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02897 = *$tmp2898;
                org$pandalanguage$pandac$Type** $tmp2900 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12650->$data + 16));
                _f12899 = *$tmp2900;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12899));
            }
            }
            else {
            panda$core$Bit $tmp2901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 37 }));
            if ($tmp2901.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2903 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02902 = *$tmp2903;
                org$pandalanguage$pandac$IRNode** $tmp2905 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 16));
                _f12904 = *$tmp2905;
                org$pandalanguage$pandac$IRNode** $tmp2907 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 24));
                _f22906 = *$tmp2907;
                org$pandalanguage$pandac$IRNode** $tmp2909 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 32));
                _f32908 = *$tmp2909;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12904));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22906));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32908));
            }
            }
            else {
            panda$core$Bit $tmp2910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 38 }));
            if ($tmp2910.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2912 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02911 = *$tmp2912;
                org$pandalanguage$pandac$Type** $tmp2914 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12650->$data + 16));
                _f12913 = *$tmp2914;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12913));
            }
            }
            else {
            panda$core$Bit $tmp2915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp2915.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2917 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02916 = *$tmp2917;
                panda$core$String** $tmp2919 = ((panda$core$String**) ((char*) $match$5_12650->$data + 16));
                _f12918 = *$tmp2919;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12918));
            }
            }
            else {
            panda$core$Bit $tmp2920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp2920.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2922 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02921 = *$tmp2922;
                org$pandalanguage$pandac$Type** $tmp2924 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12650->$data + 16));
                _f12923 = *$tmp2924;
                org$pandalanguage$pandac$IRNode** $tmp2926 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 24));
                _f22925 = *$tmp2926;
                panda$collections$ImmutableArray** $tmp2928 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12650->$data + 32));
                _f32927 = *$tmp2928;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12923));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22925));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32927));
            }
            }
            else {
            panda$core$Bit $tmp2929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 41 }));
            if ($tmp2929.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2931 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02930 = *$tmp2931;
                panda$collections$ImmutableArray** $tmp2933 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12650->$data + 16));
                _f12932 = *$tmp2933;
                org$pandalanguage$pandac$ASTNode** $tmp2935 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12650->$data + 24));
                _f22934 = *$tmp2935;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12932));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22934));
            }
            }
            else {
            panda$core$Bit $tmp2936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 42 }));
            if ($tmp2936.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2938 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02937 = *$tmp2938;
                org$pandalanguage$pandac$Type** $tmp2940 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12650->$data + 16));
                _f12939 = *$tmp2940;
                org$pandalanguage$pandac$IRNode** $tmp2942 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 24));
                _f22941 = *$tmp2942;
                panda$collections$ImmutableArray** $tmp2944 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12650->$data + 32));
                _f32943 = *$tmp2944;
                panda$collections$ImmutableArray** $tmp2946 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12650->$data + 40));
                _f42945 = *$tmp2946;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12939));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22941));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32943));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42945));
            }
            }
            else {
            panda$core$Bit $tmp2947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 43 }));
            if ($tmp2947.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2949 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02948 = *$tmp2949;
                org$pandalanguage$pandac$IRNode** $tmp2951 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 16));
                _f12950 = *$tmp2951;
                panda$collections$ImmutableArray** $tmp2953 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12650->$data + 24));
                _f22952 = *$tmp2953;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12950));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22952));
            }
            }
            else {
            panda$core$Bit $tmp2954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 44 }));
            if ($tmp2954.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2956 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02955 = *$tmp2956;
                org$pandalanguage$pandac$IRNode** $tmp2958 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 16));
                _f12957 = *$tmp2958;
                org$pandalanguage$pandac$IRNode** $tmp2960 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 24));
                _f22959 = *$tmp2960;
                panda$core$Bit* $tmp2962 = ((panda$core$Bit*) ((char*) $match$5_12650->$data + 32));
                _f32961 = *$tmp2962;
                org$pandalanguage$pandac$IRNode** $tmp2964 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 33));
                _f42963 = *$tmp2964;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12957));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22959));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42963));
            }
            }
            else {
            panda$core$Bit $tmp2965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 45 }));
            if ($tmp2965.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2967 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02966 = *$tmp2967;
                org$pandalanguage$pandac$Variable$Kind* $tmp2969 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_12650->$data + 16));
                _f12968 = *$tmp2969;
                panda$collections$ImmutableArray** $tmp2971 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12650->$data + 24));
                _f22970 = *$tmp2971;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22970));
            }
            }
            else {
            panda$core$Bit $tmp2972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 46 }));
            if ($tmp2972.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2974 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02973 = *$tmp2974;
                org$pandalanguage$pandac$Variable** $tmp2976 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$5_12650->$data + 16));
                _f12975 = *$tmp2976;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12975));
            }
            }
            else {
            panda$core$Bit $tmp2977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 47 }));
            if ($tmp2977.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2979 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02978 = *$tmp2979;
                panda$collections$ImmutableArray** $tmp2981 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12650->$data + 16));
                _f12980 = *$tmp2981;
                panda$collections$ImmutableArray** $tmp2983 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12650->$data + 24));
                _f22982 = *$tmp2983;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12980));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22982));
            }
            }
            else {
            panda$core$Bit $tmp2984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12650->$rawValue, ((panda$core$Int64) { 48 }));
            if ($tmp2984.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2986 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12650->$data + 0));
                _f02985 = *$tmp2986;
                panda$core$String** $tmp2988 = ((panda$core$String**) ((char*) $match$5_12650->$data + 16));
                _f12987 = *$tmp2988;
                org$pandalanguage$pandac$IRNode** $tmp2990 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12650->$data + 24));
                _f22989 = *$tmp2990;
                panda$collections$ImmutableArray** $tmp2992 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12650->$data + 32));
                _f32991 = *$tmp2992;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12987));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22989));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32991));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp2649 = -1;
        goto $l2647;
        $l2647:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2651));
        switch ($tmp2649) {
            case -1: goto $l2993;
        }
        $l2993:;
    }
    $tmp2646 = -1;
    goto $l2644;
    $l2644:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2646) {
        case -1: goto $l2994;
    }
    $l2994:;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp2996;
    org$pandalanguage$pandac$IRNode* $tmp2999;
    org$pandalanguage$pandac$IRNode* $tmp3000;
    org$pandalanguage$pandac$IRNode* $tmp3003;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2995 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2995 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp2997 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp2996 = *$tmp2997;
        org$pandalanguage$pandac$IRNode** $tmp2998 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp2999 = p_f1;
        *$tmp2998 = $tmp2999;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2999));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2996));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3001 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3000 = *$tmp3001;
        org$pandalanguage$pandac$IRNode** $tmp3002 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3003 = p_f2;
        *$tmp3002 = $tmp3003;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3003));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3000));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1) {
    org$pandalanguage$pandac$Type* $tmp3005;
    org$pandalanguage$pandac$Type* $tmp3008;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3004 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3004 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3006 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3005 = *$tmp3006;
        org$pandalanguage$pandac$Type** $tmp3007 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3008 = p_f1;
        *$tmp3007 = $tmp3008;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3008));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3005));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$parser$Token$Kind p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$Type* $tmp3010;
    org$pandalanguage$pandac$Type* $tmp3013;
    org$pandalanguage$pandac$IRNode* $tmp3014;
    org$pandalanguage$pandac$IRNode* $tmp3017;
    org$pandalanguage$pandac$IRNode* $tmp3019;
    org$pandalanguage$pandac$IRNode* $tmp3022;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3009 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3009 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3011 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3010 = *$tmp3011;
        org$pandalanguage$pandac$Type** $tmp3012 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3013 = p_f1;
        *$tmp3012 = $tmp3013;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3013));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3010));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3015 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3014 = *$tmp3015;
        org$pandalanguage$pandac$IRNode** $tmp3016 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3017 = p_f2;
        *$tmp3016 = $tmp3017;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3017));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3014));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp3018 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 32));
    *$tmp3018 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp3020 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp3019 = *$tmp3020;
        org$pandalanguage$pandac$IRNode** $tmp3021 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp3022 = p_f4;
        *$tmp3021 = $tmp3022;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3022));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3019));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Bit p_f2) {
    org$pandalanguage$pandac$Type* $tmp3024;
    org$pandalanguage$pandac$Type* $tmp3027;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3023 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3023 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3025 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3024 = *$tmp3025;
        org$pandalanguage$pandac$Type** $tmp3026 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3027 = p_f1;
        *$tmp3026 = $tmp3027;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3027));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3024));
    }
    panda$core$Bit* $tmp3028 = ((panda$core$Bit*) ((char*) self->$data + 24));
    *$tmp3028 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp3030;
    panda$collections$ImmutableArray* $tmp3033;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3029 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3029 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp3031 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3030 = *$tmp3031;
        panda$collections$ImmutableArray** $tmp3032 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3033 = p_f1;
        *$tmp3032 = $tmp3033;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3033));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3030));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp3035;
    panda$collections$ImmutableArray* $tmp3038;
    panda$collections$ImmutableArray* $tmp3039;
    panda$collections$ImmutableArray* $tmp3042;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3034 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3034 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp3036 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3035 = *$tmp3036;
        panda$collections$ImmutableArray** $tmp3037 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3038 = p_f1;
        *$tmp3037 = $tmp3038;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3038));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3035));
    }
    {
        panda$collections$ImmutableArray** $tmp3040 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3039 = *$tmp3040;
        panda$collections$ImmutableArray** $tmp3041 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3042 = p_f2;
        *$tmp3041 = $tmp3042;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3042));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3039));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp3044;
    panda$core$String* $tmp3047;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3043 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3043 = p_f0;
    {
        panda$core$String** $tmp3045 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3044 = *$tmp3045;
        panda$core$String** $tmp3046 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3047 = p_f1;
        *$tmp3046 = $tmp3047;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3047));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3044));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$MethodRef* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3049;
    org$pandalanguage$pandac$Type* $tmp3052;
    org$pandalanguage$pandac$MethodRef* $tmp3053;
    org$pandalanguage$pandac$MethodRef* $tmp3056;
    panda$collections$ImmutableArray* $tmp3057;
    panda$collections$ImmutableArray* $tmp3060;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3048 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3048 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3050 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3049 = *$tmp3050;
        org$pandalanguage$pandac$Type** $tmp3051 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3052 = p_f1;
        *$tmp3051 = $tmp3052;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3052));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3049));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp3054 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3053 = *$tmp3054;
        org$pandalanguage$pandac$MethodRef** $tmp3055 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3056 = p_f2;
        *$tmp3055 = $tmp3056;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3056));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3053));
    }
    {
        panda$collections$ImmutableArray** $tmp3058 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3057 = *$tmp3058;
        panda$collections$ImmutableArray** $tmp3059 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3060 = p_f3;
        *$tmp3059 = $tmp3060;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3060));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3057));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$Type* p_f2, panda$core$Bit p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3062;
    org$pandalanguage$pandac$IRNode* $tmp3065;
    org$pandalanguage$pandac$Type* $tmp3066;
    org$pandalanguage$pandac$Type* $tmp3069;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3061 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3061 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3063 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3062 = *$tmp3063;
        org$pandalanguage$pandac$IRNode** $tmp3064 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3065 = p_f1;
        *$tmp3064 = $tmp3065;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3065));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3062));
    }
    {
        org$pandalanguage$pandac$Type** $tmp3067 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp3066 = *$tmp3067;
        org$pandalanguage$pandac$Type** $tmp3068 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp3069 = p_f2;
        *$tmp3068 = $tmp3069;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3069));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3066));
    }
    panda$core$Bit* $tmp3070 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp3070 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceEntry(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ChoiceEntry* p_f1) {
    org$pandalanguage$pandac$ChoiceEntry* $tmp3072;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3075;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3071 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3071 = p_f0;
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp3073 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp3072 = *$tmp3073;
        org$pandalanguage$pandac$ChoiceEntry** $tmp3074 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp3075 = p_f1;
        *$tmp3074 = $tmp3075;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3075));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3072));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3077;
    org$pandalanguage$pandac$IRNode* $tmp3080;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3081;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3084;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3076 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3076 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3078 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3077 = *$tmp3078;
        org$pandalanguage$pandac$IRNode** $tmp3079 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3080 = p_f1;
        *$tmp3079 = $tmp3080;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3080));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3077));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp3082 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp3081 = *$tmp3082;
        org$pandalanguage$pandac$ChoiceEntry** $tmp3083 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp3084 = p_f2;
        *$tmp3083 = $tmp3084;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3084));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3081));
    }
    panda$core$Int64* $tmp3085 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp3085 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$Type* $tmp3087;
    org$pandalanguage$pandac$Type* $tmp3090;
    org$pandalanguage$pandac$IRNode* $tmp3091;
    org$pandalanguage$pandac$IRNode* $tmp3094;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3086 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3086 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3088 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3087 = *$tmp3088;
        org$pandalanguage$pandac$Type** $tmp3089 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3090 = p_f1;
        *$tmp3089 = $tmp3090;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3090));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3087));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3092 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3091 = *$tmp3092;
        org$pandalanguage$pandac$IRNode** $tmp3093 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3094 = p_f2;
        *$tmp3093 = $tmp3094;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3094));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3091));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3095;
    org$pandalanguage$pandac$IRNode* $tmp3098;
    org$pandalanguage$pandac$IRNode* $tmp3099;
    org$pandalanguage$pandac$IRNode* $tmp3102;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3096 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3095 = *$tmp3096;
        org$pandalanguage$pandac$IRNode** $tmp3097 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3098 = p_f0;
        *$tmp3097 = $tmp3098;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3098));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3095));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3100 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3099 = *$tmp3100;
        org$pandalanguage$pandac$IRNode** $tmp3101 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3102 = p_f1;
        *$tmp3101 = $tmp3102;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3102));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3099));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    panda$core$String* $tmp3104;
    panda$core$String* $tmp3107;
    panda$collections$ImmutableArray* $tmp3108;
    panda$collections$ImmutableArray* $tmp3111;
    org$pandalanguage$pandac$IRNode* $tmp3112;
    org$pandalanguage$pandac$IRNode* $tmp3115;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3103 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3103 = p_f0;
    {
        panda$core$String** $tmp3105 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3104 = *$tmp3105;
        panda$core$String** $tmp3106 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3107 = p_f1;
        *$tmp3106 = $tmp3107;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3107));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3104));
    }
    {
        panda$collections$ImmutableArray** $tmp3109 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3108 = *$tmp3109;
        panda$collections$ImmutableArray** $tmp3110 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3111 = p_f2;
        *$tmp3110 = $tmp3111;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3111));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3108));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3113 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3112 = *$tmp3113;
        org$pandalanguage$pandac$IRNode** $tmp3114 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3115 = p_f3;
        *$tmp3114 = $tmp3115;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3115));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3112));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$collections$ImmutableArray* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3116;
    org$pandalanguage$pandac$IRNode* $tmp3119;
    panda$collections$ImmutableArray* $tmp3120;
    panda$collections$ImmutableArray* $tmp3123;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3117 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3116 = *$tmp3117;
        org$pandalanguage$pandac$IRNode** $tmp3118 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3119 = p_f0;
        *$tmp3118 = $tmp3119;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3119));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3116));
    }
    {
        panda$collections$ImmutableArray** $tmp3121 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp3120 = *$tmp3121;
        panda$collections$ImmutableArray** $tmp3122 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp3123 = p_f1;
        *$tmp3122 = $tmp3123;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3123));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3120));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3124;
    org$pandalanguage$pandac$IRNode* $tmp3127;
    org$pandalanguage$pandac$IRNode* $tmp3128;
    org$pandalanguage$pandac$IRNode* $tmp3131;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3125 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3124 = *$tmp3125;
        org$pandalanguage$pandac$IRNode** $tmp3126 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3127 = p_f0;
        *$tmp3126 = $tmp3127;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3127));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3124));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3129 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3128 = *$tmp3129;
        org$pandalanguage$pandac$IRNode** $tmp3130 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3131 = p_f1;
        *$tmp3130 = $tmp3131;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3131));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3128));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$FieldDecl* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3133;
    org$pandalanguage$pandac$Type* $tmp3136;
    org$pandalanguage$pandac$IRNode* $tmp3137;
    org$pandalanguage$pandac$IRNode* $tmp3140;
    org$pandalanguage$pandac$FieldDecl* $tmp3141;
    org$pandalanguage$pandac$FieldDecl* $tmp3144;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3132 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3132 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3134 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3133 = *$tmp3134;
        org$pandalanguage$pandac$Type** $tmp3135 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3136 = p_f1;
        *$tmp3135 = $tmp3136;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3136));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3133));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3138 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3137 = *$tmp3138;
        org$pandalanguage$pandac$IRNode** $tmp3139 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3140 = p_f2;
        *$tmp3139 = $tmp3140;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3140));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3137));
    }
    {
        org$pandalanguage$pandac$FieldDecl** $tmp3142 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp3141 = *$tmp3142;
        org$pandalanguage$pandac$FieldDecl** $tmp3143 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp3144 = p_f3;
        *$tmp3143 = $tmp3144;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3144));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3141));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3146;
    org$pandalanguage$pandac$IRNode* $tmp3149;
    panda$collections$ImmutableArray* $tmp3150;
    panda$collections$ImmutableArray* $tmp3153;
    org$pandalanguage$pandac$IRNode* $tmp3154;
    org$pandalanguage$pandac$IRNode* $tmp3157;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3145 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3145 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3147 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3146 = *$tmp3147;
        org$pandalanguage$pandac$IRNode** $tmp3148 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3149 = p_f1;
        *$tmp3148 = $tmp3149;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3149));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3146));
    }
    {
        panda$collections$ImmutableArray** $tmp3151 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3150 = *$tmp3151;
        panda$collections$ImmutableArray** $tmp3152 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3153 = p_f2;
        *$tmp3152 = $tmp3153;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3153));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3150));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3155 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3154 = *$tmp3155;
        org$pandalanguage$pandac$IRNode** $tmp3156 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3157 = p_f3;
        *$tmp3156 = $tmp3157;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3157));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3154));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$UInt64 p_f2) {
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
    panda$core$UInt64* $tmp3163 = ((panda$core$UInt64*) ((char*) self->$data + 24));
    *$tmp3163 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3165;
    org$pandalanguage$pandac$IRNode* $tmp3168;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3164 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3164 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3166 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3165 = *$tmp3166;
        org$pandalanguage$pandac$IRNode** $tmp3167 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3168 = p_f1;
        *$tmp3167 = $tmp3168;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3168));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3165));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp3170;
    panda$core$String* $tmp3173;
    panda$collections$ImmutableArray* $tmp3174;
    panda$collections$ImmutableArray* $tmp3177;
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
    {
        panda$collections$ImmutableArray** $tmp3175 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3174 = *$tmp3175;
        panda$collections$ImmutableArray** $tmp3176 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3177 = p_f2;
        *$tmp3176 = $tmp3177;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3177));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3174));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3179;
    org$pandalanguage$pandac$IRNode* $tmp3182;
    panda$collections$ImmutableArray* $tmp3183;
    panda$collections$ImmutableArray* $tmp3186;
    panda$collections$ImmutableArray* $tmp3187;
    panda$collections$ImmutableArray* $tmp3190;
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
        panda$collections$ImmutableArray** $tmp3184 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3183 = *$tmp3184;
        panda$collections$ImmutableArray** $tmp3185 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3186 = p_f2;
        *$tmp3185 = $tmp3186;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3186));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3183));
    }
    {
        panda$collections$ImmutableArray** $tmp3188 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3187 = *$tmp3188;
        panda$collections$ImmutableArray** $tmp3189 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3190 = p_f3;
        *$tmp3189 = $tmp3190;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3190));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3187));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$MethodRef* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3192;
    org$pandalanguage$pandac$Type* $tmp3195;
    org$pandalanguage$pandac$IRNode* $tmp3196;
    org$pandalanguage$pandac$IRNode* $tmp3199;
    org$pandalanguage$pandac$MethodRef* $tmp3200;
    org$pandalanguage$pandac$MethodRef* $tmp3203;
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
        org$pandalanguage$pandac$MethodRef** $tmp3201 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 32));
        $tmp3200 = *$tmp3201;
        org$pandalanguage$pandac$MethodRef** $tmp3202 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 32));
        $tmp3203 = p_f3;
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
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTpanda$core$String$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$collections$ImmutableArray* $tmp3281;
    panda$collections$ImmutableArray* $tmp3284;
    org$pandalanguage$pandac$ASTNode* $tmp3285;
    org$pandalanguage$pandac$ASTNode* $tmp3288;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3280 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3280 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp3282 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3281 = *$tmp3282;
        panda$collections$ImmutableArray** $tmp3283 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3284 = p_f1;
        *$tmp3283 = $tmp3284;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3284));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3281));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp3286 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp3285 = *$tmp3286;
        org$pandalanguage$pandac$ASTNode** $tmp3287 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp3288 = p_f2;
        *$tmp3287 = $tmp3288;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3288));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3285));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3, panda$collections$ImmutableArray* p_f4) {
    org$pandalanguage$pandac$Type* $tmp3290;
    org$pandalanguage$pandac$Type* $tmp3293;
    org$pandalanguage$pandac$IRNode* $tmp3294;
    org$pandalanguage$pandac$IRNode* $tmp3297;
    panda$collections$ImmutableArray* $tmp3298;
    panda$collections$ImmutableArray* $tmp3301;
    panda$collections$ImmutableArray* $tmp3302;
    panda$collections$ImmutableArray* $tmp3305;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3289 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3289 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3291 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3290 = *$tmp3291;
        org$pandalanguage$pandac$Type** $tmp3292 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3293 = p_f1;
        *$tmp3292 = $tmp3293;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3293));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3290));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3295 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3294 = *$tmp3295;
        org$pandalanguage$pandac$IRNode** $tmp3296 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3297 = p_f2;
        *$tmp3296 = $tmp3297;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3297));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3294));
    }
    {
        panda$collections$ImmutableArray** $tmp3299 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3298 = *$tmp3299;
        panda$collections$ImmutableArray** $tmp3300 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3301 = p_f3;
        *$tmp3300 = $tmp3301;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3301));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3298));
    }
    {
        panda$collections$ImmutableArray** $tmp3303 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3302 = *$tmp3303;
        panda$collections$ImmutableArray** $tmp3304 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3305 = p_f4;
        *$tmp3304 = $tmp3305;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3305));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3302));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3307;
    org$pandalanguage$pandac$IRNode* $tmp3310;
    panda$collections$ImmutableArray* $tmp3311;
    panda$collections$ImmutableArray* $tmp3314;
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
        panda$collections$ImmutableArray** $tmp3312 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3311 = *$tmp3312;
        panda$collections$ImmutableArray** $tmp3313 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3314 = p_f2;
        *$tmp3313 = $tmp3314;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3314));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3311));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$IRNode* $tmp3316;
    org$pandalanguage$pandac$IRNode* $tmp3319;
    org$pandalanguage$pandac$IRNode* $tmp3320;
    org$pandalanguage$pandac$IRNode* $tmp3323;
    org$pandalanguage$pandac$IRNode* $tmp3325;
    org$pandalanguage$pandac$IRNode* $tmp3328;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3315 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3315 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3317 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3316 = *$tmp3317;
        org$pandalanguage$pandac$IRNode** $tmp3318 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3319 = p_f1;
        *$tmp3318 = $tmp3319;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3319));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3316));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3321 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3320 = *$tmp3321;
        org$pandalanguage$pandac$IRNode** $tmp3322 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3323 = p_f2;
        *$tmp3322 = $tmp3323;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3323));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3320));
    }
    panda$core$Bit* $tmp3324 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp3324 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp3326 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3325 = *$tmp3326;
        org$pandalanguage$pandac$IRNode** $tmp3327 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3328 = p_f4;
        *$tmp3327 = $tmp3328;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3328));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3325));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp3331;
    panda$collections$ImmutableArray* $tmp3334;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3329 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3329 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp3330 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp3330 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp3332 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3331 = *$tmp3332;
        panda$collections$ImmutableArray** $tmp3333 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3334 = p_f2;
        *$tmp3333 = $tmp3334;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3334));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3331));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable* p_f1) {
    org$pandalanguage$pandac$Variable* $tmp3336;
    org$pandalanguage$pandac$Variable* $tmp3339;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3335 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3335 = p_f0;
    {
        org$pandalanguage$pandac$Variable** $tmp3337 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3336 = *$tmp3337;
        org$pandalanguage$pandac$Variable** $tmp3338 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3339 = p_f1;
        *$tmp3338 = $tmp3339;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3339));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3336));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp3341;
    panda$core$String* $tmp3344;
    org$pandalanguage$pandac$IRNode* $tmp3345;
    org$pandalanguage$pandac$IRNode* $tmp3348;
    panda$collections$ImmutableArray* $tmp3349;
    panda$collections$ImmutableArray* $tmp3352;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3340 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3340 = p_f0;
    {
        panda$core$String** $tmp3342 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3341 = *$tmp3342;
        panda$core$String** $tmp3343 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3344 = p_f1;
        *$tmp3343 = $tmp3344;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3344));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3341));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3346 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3345 = *$tmp3346;
        org$pandalanguage$pandac$IRNode** $tmp3347 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3348 = p_f2;
        *$tmp3347 = $tmp3348;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3348));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3345));
    }
    {
        panda$collections$ImmutableArray** $tmp3350 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3349 = *$tmp3350;
        panda$collections$ImmutableArray** $tmp3351 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3352 = p_f3;
        *$tmp3351 = $tmp3352;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3352));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3349));
    }
}

